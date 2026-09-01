// nlc_engine.v: NLC mode 2, the autonomous decode engine.
//
// Runs the whole NLC frame pipeline (compressed feed -> decoder -> chunk accumulator -> FB
// burst writes) as a background DDR master, so the Groovy blit FSM never time-shares with the
// decode. The FSM keeps running the display (auto-blit and frameskip from the FB) concurrently,
// which is the same display architecture RAW uses. This removes the decode-or-display
// serialization that every historical NLC display defect traced back to.
//
// Deliberately PoC-free: the FSM pre-computes and hands over plain addresses and sizes
// (src zone base, dst FB base, frame byte count), so field, interlace and double-buffer policy
// all stay in one place, the FSM. The engine is a pure data mover.
//
// Interfaces:
//  * announce/adopt: the FSM latches the newest announce into pend_* (newest-wins while the
//    engine is busy, the established finish-once-started policy); the engine adopts when idle
//    (adopt_ack pulse). Same-frame chunk growth arrives via wm_stb/wm_bytes/wm_final (the FSM
//    pulses it only after matching cur_frame).
//  * decoder: drives the existing u_nlc instance through mode-2 input muxes, so one decoder
//    serves all modes with no M10K duplication. dec_oready and the chunk commit must be the
//    same expression; gating them differently loses a popped word.
//  * DDR: master 1 of rtl/ddr_mux2.v. Holds m_req through a whole transaction, drops it after
//    (the arbiter re-arbitrates from scratch => the display FSM has structural priority).
//    Feed bursts <=128 words and flush bursts <=NLC_CHUNK beats, so the worst-case FSM wait
//    is about 1.3us, 50x under the 63.5us line budget.
//  * liveness: the engine can never wedge the display, being off the display path entirely,
//    but it still carries a bounded escape: if the input is exhausted-and-final (or a newer
//    frame waits while this one starves >2^20 cycles ~12.7ms) the frame force-completes
//    (flush partial, publish only if final) and the engine returns to idle. wd_fired flags it.
//
module nlc_engine #(
        parameter WDBIT = 20                // liveness window = 2^WDBIT cycles (~12.7ms @82MHz);
                                            // unit TBs shrink it to test the escape paths
)(
        input             clk,
        input             abort,            // FSM: switchres/init/close/mode-change. Finish any
                                            // in-flight DDR transaction, reset decoder, go idle.

        // ---- announce/adopt (FSM writes pend_*, engine consumes via adopt_ack)
        input             pend_valid,
        input      [23:0] pend_frame,
        input      [31:0] pend_size,        // total compressed size (lz4_size announce)
        input      [31:0] pend_bytes,       // watermark: compressed bytes available now
        input             pend_final,       // 65535 sentinel / watermark==size: no more chunks
        input      [27:0] pend_src,         // DDR-LZ zone base for this frame
        input      [27:0] pend_dst,         // FB destination base (field/dbuf chosen by the FSM)
        input      [27:0] pend_fb_bytes,    // full-frame FB byte count (vga_pixels*3)
        output reg        adopt_ack,

        // ---- same-frame watermark growth (FSM pulses after matching cur_frame)
        input             wm_stb,
        input      [31:0] wm_bytes,
        input             wm_final,

        // ---- decoder side (the shared u_nlc, muxed to the engine under nlc_disp_mode==2)
        output reg        dec_reset,
        output reg [63:0] dec_clong,
        output reg        dec_wlong,
        input             dec_wready,
        input      [63:0] dec_ulong,
        input             dec_lvalid,
        output            dec_oready,
        input      [31:0] dec_writed,       // compressed bytes accepted by the decoder input FIFO
        input             dec_done,

        // ---- DDR master (ddr_mux2 M1)
        output reg        m_req,
        input             m_gnt,
        output     [27:1] m_addr,
        output     [63:0] m_din,
        output reg        m_rd,
        output reg [7:0]  m_burst,
        output reg        m_wr,
        input             m_busy,
        input             m_dready,
        input      [63:0] m_dout,

        // ---- status/telemetry
        output reg        busy,
        output reg        done_stb,         // 1-cycle: frame complete + fully flushed -> present it
        output reg [23:0] cur_frame,
        output reg [27:0] flushed_bytes,    // FB bytes written (telemetry)
        output reg        wd_fired,         // liveness escape fired for this frame
        output     [3:0]  eng_state         // telemetry
);

localparam NLC_CHUNK = 8'd120;              // words per FB burst (960 B), the established chunk size

localparam E_IDLE   = 4'd0,
           E_RST    = 4'd1,                 // decoder reset + let the FSM settle the adopt handshake
           E_RUN    = 4'd2,
           E_FEEDRQ = 4'd3,
           E_FEED   = 4'd4,
           E_FLSHRQ = 4'd5,
           E_FLSHP1 = 4'd6,
           E_FLSHP2 = 4'd7,
           E_FLSH   = 4'd8,
           E_DONE   = 4'd9;
reg [3:0] st = E_IDLE;
assign eng_state = st;

// ---- adopted-frame registers
reg [31:0] cur_size, cur_wm;
reg        cur_final;
reg [27:0] cur_src, cur_dst, cur_fb_bytes;
reg        end_publish;                     // publish (done_stb) on completion; cleared on abandon

// ---- chunk accumulator (M10K recipe: no reset on the q reg, combinational 1-ahead address)
(* ramstyle = "M10K" *) reg [63:0] lbuf [0:127];
reg [63:0] lb_q;
reg [7:0]  lb_ra;
reg [7:0]  wcnt = 8'd0, lb_rd = 8'd0;
reg [63:0] m_din_r;
reg [27:0] eng_addr;
reg [7:0]  beats;                           // feed beats remaining
reg [WDBIT:0] wd = 0;                       // liveness window
reg [3:0]  st_d = E_IDLE;                   // previous state, for the per-transition wd reset
reg        flush_end;                       // this flush is the frame's last -> E_DONE after

assign m_addr = eng_addr[27:1];
assign m_din  = m_din_r;

// ---- decoder drain -> chunk commit. ONE expression gates the pop AND the commit (they can
// never diverge). Commits are frozen through every flush state (wcnt/burst must be stable);
// the decoder's own 128-word output FIFO absorbs the gap.
wire flushing  = (st == E_FLSHRQ) || (st == E_FLSHP1) || (st == E_FLSHP2) || (st == E_FLSH);
wire eng_commit = (st == E_RUN || st == E_FEEDRQ || st == E_FEED) && dec_lvalid && (wcnt < NLC_CHUNK);
assign dec_oready = eng_commit;

// flush read port: during streaming aim one ahead of the presented word (+2 across an accepted
// beat) so lb_q always holds the NEXT word (same recipe as the Stage-1 FSM flush)
always @* begin
    if (st != E_FLSH && st != E_FLSHP2) lb_ra = 8'd0;                       // idle / prime 1: fetch word 0
    else if (st == E_FLSHP2)            lb_ra = 8'd1;                       // prime 2: prefetch word 1
    else lb_ra = (m_wr && !m_busy && lb_rd < wcnt - 1'b1) ? lb_rd + 8'd2 : lb_rd + 8'd1;
end
always @(posedge clk) lb_q <= lbuf[lb_ra];                                  // no reset, infers M10K

// ---- feed gating (mirrors S_Blit_Prepare_NLC's proven formula)
wire [31:0] rem       = cur_wm - dec_writed;
wire        final_chk = cur_final && (cur_wm >= cur_size);                  // last chunk announced
wire        feed_ok   = dec_wready && (dec_writed < cur_wm) && (final_chk || (rem >> 3) != 0);
wire        input_done = (dec_writed >= cur_wm) && final_chk;

// progress = commit, feed beat, or flush beat (resets the liveness window)
wire progress = eng_commit || (st == E_FEED && m_dready) || (st == E_FLSH && m_wr && !m_busy);

// Liveness expiry means a full window spent in the current state. The `st == st_d` term blanks
// the entry cycle, because the per-transition reset below is nonblocking and the first cycle of a
// state still reads the inherited counter. Without the blank, E_RUN's escapes jumped to E_FLSHRQ
// with wd saturated, and E_FLSHRQ's own escape bounced straight back on that very cycle,
// last-assignment-wins even cancelling the m_req pulse. That is a permanent 12.7ms E_RUN to
// E_FLSHRQ ping-pong, which presents as a black screen. With the entry blank and the entry reset,
// an escape can only fire after a full fresh window inside its own state.
wire wd_hit = wd[WDBIT] && (st == st_d);

always @(posedge clk) begin
    adopt_ack <= 1'b0;
    done_stb  <= 1'b0;
    dec_wlong <= 1'b0;

    if (eng_commit) begin
        lbuf[wcnt[6:0]] <= dec_ulong;
        wcnt            <= wcnt + 1'b1;
    end
    // The liveness window ticks in every non-idle state. Ticking only in E_RUN left an
    // engine stuck mid-DDR-transaction, E_FEED waiting a lost beat or E_FLSH* waiting a
    // dead bus, holding m_req forever and parking the ddr_mux2 grant at G_M1, which froze
    // the blit FSM: the permanent bus wedge. The progress reset comes after the increment
    // so it wins; the old E_RUN in-case increment silently overrode the reset on commit
    // cycles, the block being last-assignment-wins.
    if (st != E_IDLE) wd <= wd + 1'b1;
    if (progress) wd <= 0;
    // wd measures time in the current state without progress, so it must never be
    // inherited across a transition. E_RUN's escapes fired with wd saturated and jumped
    // to E_FLSHRQ, whose own stale wd[WDBIT] escape bounced straight back on the very
    // first cycle, last-assignment-wins even cancelling the m_req pulse. That is the
    // permanent E_RUN to E_FLSHRQ ping-pong. Reset on every transition.
    st_d <= st;
    if (st != st_d) wd <= 0;
    if (wm_stb) begin cur_wm <= wm_bytes; cur_final <= wm_final; end
    // A pend for a newer frame proves the HPS finished writing cur_frame's zone, because the
    // receive loop is serial: all CSize bytes land before the next CMD_BLIT, and zones rotate
    // mod 4. So if the final watermark rewrite was missed, superseded back-to-back by the next
    // announce, promote to final and finish decoding instead of starving into an abandon.
    // Never for a same-frame pend: that zone may still be streaming.
    if (st != E_IDLE && pend_valid && pend_frame != cur_frame) begin
        cur_wm    <= cur_size;
        cur_final <= 1'b1;
    end

    case (st)
        E_IDLE:
        begin
            busy      <= 1'b0;
            m_req     <= 1'b0; m_rd <= 1'b0; m_wr <= 1'b0;
            dec_reset <= 1'b1;
            wcnt      <= 8'd0;
            if (pend_valid && !abort) begin
                cur_frame     <= pend_frame;
                cur_size      <= pend_size;
                cur_wm        <= pend_bytes;
                cur_final     <= pend_final;
                cur_src       <= pend_src;
                cur_dst       <= pend_dst;
                cur_fb_bytes  <= pend_fb_bytes;
                flushed_bytes <= 28'd0;
                wd            <= 0;
                wd_fired      <= 1'b0;
                end_publish   <= 1'b1;
                busy          <= 1'b1;
                adopt_ack     <= 1'b1;
                st            <= E_RST;
            end
        end

        E_RST:   // one settle cycle: decoder reset lands; the FSM processes adopt_ack
        begin
            dec_reset <= 1'b0;
            st        <= E_RUN;
        end

        E_RUN:
        begin
            // (wd ticks globally at the top of the block now)
            if (abort) begin
                dec_reset <= 1'b1;
                st        <= E_IDLE;      // no transaction in flight in E_RUN -> safe to drop out
            end
            else if (wcnt == NLC_CHUNK) begin
                flush_end <= 1'b0;
                st        <= E_FLSHRQ;
            end
            else if (dec_done && wcnt != 8'd0) begin
                flush_end <= 1'b1;
                st        <= E_FLSHRQ;
            end
            else if (dec_done && wcnt == 8'd0) begin
                st <= E_DONE;
            end
            else if (feed_ok) begin
                st <= E_FEEDRQ;
            end
            else if (wd_hit && input_done) begin
                // liveness escape: input exhausted and final for ~12.7ms yet no dec_done, so
                // force-complete and the engine can never hold the pipeline. Deterministic
                // decode should make this unreachable, but keep the guarantee anyway.
                wd_fired  <= 1'b1;
                flush_end <= 1'b1;
                st        <= (wcnt != 8'd0) ? E_FLSHRQ : E_DONE;
            end
            else if (wd_hit && pend_valid) begin
                // input starved (host stopped mid-frame) while a NEWER frame waits: abandon
                // cleanly, flushing what landed without publishing, then adopt the newer frame.
                wd_fired    <= 1'b1;
                end_publish <= 1'b0;
                flush_end   <= 1'b1;
                st          <= (wcnt != 8'd0) ? E_FLSHRQ : E_DONE;
            end
        end

        E_FEEDRQ:
        begin
            m_req <= 1'b1;
            if (m_gnt) begin
                m_burst  <= (rem > 32'd1023) ? 8'd128 : final_chk ? rem[10:3] + 8'd1 : rem[10:3];
                beats    <= (rem > 32'd1023) ? 8'd128 : final_chk ? rem[10:3] + 8'd1 : rem[10:3];
                eng_addr <= cur_src + dec_writed[27:0];
                m_rd     <= 1'b1;
                st       <= E_FEED;
            end
            if (wd_hit) begin                          // no grant (dead arbiter or bus), release
                m_req    <= 1'b0;                    // and retry from E_RUN with a fresh window
                m_rd     <= 1'b0;                    // (overrides a same-cycle m_gnt branch)
                wd       <= 0;
                wd_fired <= 1'b1;
                st       <= E_RUN;
            end
        end

        E_FEED:
        begin
            if (m_busy) m_rd <= 1'b0;               // request latched -> drop the pulse
            if (m_dready) begin
                dec_clong <= m_dout;
                dec_wlong <= 1'b1;                   // burst sized against write_ready (>=136 free)
                beats     <= beats - 1'b1;
            end
            if (beats == 8'd0 && !m_busy) begin      // all beats consumed + bus drained
                m_rd  <= 1'b0;
                m_req <= 1'b0;
                st    <= E_RUN;
            end
            if (wd_hit) begin                          // beats stopped arriving, release the
                m_rd      <= 1'b0;                   // bus so G_M1 can never be held forever;
                m_req     <= 1'b0;                   // residual beats drain ignored in E_RUN.
                dec_wlong <= 1'b0;                   // accounting stays coherent (dec_writed only
                wd        <= 0;                      // counts words actually fed).
                wd_fired  <= 1'b1;
                st        <= E_RUN;
            end
        end

        E_FLSHRQ:
        begin
            m_req <= 1'b1;
            if (m_gnt) st <= E_FLSHP1;
            if (wd_hit) begin                          // same no-grant escape as E_FEEDRQ; the
                m_req    <= 1'b0;                    // chunk stays accumulated, E_RUN re-enters
                wd       <= 0;                       // the flush with a fresh window.
                wd_fired <= 1'b1;
                st       <= E_RUN;
            end
        end

        E_FLSHP1:   // prime 1: lb_ra=0 (comb) -> lb_q <= lbuf[0] at this edge; set the transaction up
        begin
            m_burst  <= wcnt;
            eng_addr <= cur_dst + flushed_bytes;
            st       <= E_FLSHP2;
        end

        E_FLSHP2:   // prime 2: present word 0 (read port prefetches word 1)
        begin
            m_din_r <= lb_q;
            m_wr    <= 1'b1;
            lb_rd   <= 8'd0;
            st      <= E_FLSH;
        end

        E_FLSH:
        begin
            if (m_wr && !m_busy) begin               // beat lb_rd accepted this edge
                if (lb_rd == wcnt - 1'b1) begin      // last beat -> transaction done
                    m_wr          <= 1'b0;
                    m_req         <= 1'b0;
                    flushed_bytes <= flushed_bytes + {17'd0, wcnt, 3'b000};
                    wcnt          <= 8'd0;
                    lb_rd         <= 8'd0;
                    st            <= flush_end ? E_DONE : E_RUN;
                end else begin
                    m_din_r  <= lb_q;                // next word (prefetched by the 1-ahead port)
                    eng_addr <= eng_addr + 28'd8;
                    lb_rd    <= lb_rd + 1'b1;
                end
            end
            if (wd_hit) begin                          // bus dead mid write-burst, abandon the
                m_wr     <= 1'b0;                    // chunk (bounded FB staleness in one region)
                m_req    <= 1'b0;                    // rather than hold the grant forever. ddram's
                wcnt     <= 8'd0;                    // 001-state self-terminates after ram_burst.
                lb_rd    <= 8'd0;
                wd       <= 0;
                wd_fired <= 1'b1;
                st       <= flush_end ? E_DONE : E_RUN;
            end
        end

        E_DONE:
        begin
            done_stb  <= end_publish;
            busy      <= 1'b0;
            dec_reset <= 1'b1;
            st        <= E_IDLE;
        end

        default: st <= E_IDLE;
    endcase
end

endmodule
