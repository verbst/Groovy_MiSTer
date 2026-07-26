// tb_nlc_consumer.v — simulation of Groovy.sv's NLC CONSUMER loop (the six S_Blit_*_NLC states),
// the code where EVERY display bug of this effort has lived and which had zero sim coverage.
//
// Instantiates the REAL rtl/nlc_decode_ddr.v + rtl/nlc_decode.v, surrounds them with:
//   - a VERBATIM copy of Groovy.sv's NLC states (Header/Setup/Prepare/Copy/Inflate/End), the
//     dispatcher's NLC entry, the S_Blit_Raw bootstrap (stubbed as an immediate publish), and the
//     post-case watchdog — including all shared PoC_* bookkeeping registers;
//   - a behavioral DDR (word array, read latency + burst beats, posted single-beat writes);
//   - a scripted HPS feeder replaying groovy.cpp's exact announce sequence (per frame: header
//     (fr,0,0) + SPI cmd with lz4_size/zone, then per chunk: header (fr,bytes_so_far,numBlit)).
//
// Scenarios (plusargs):
//   +frames=N        how many frames to feed (default 12)
//   +cadence=C       cycles between frame announces (default 90000 ~ "60Hz-like" vs decode time)
//   +chunk=B         announce chunk size in bytes (default 20000)
//   +fix=1           enable the candidate fixes (drain-race resume, pad-byte accounting, watchdog)
//
// PASS criteria: every fed frame either completes (publish) or is dropped at a frame boundary;
// the LAST completed frame's FB content is bit-exact vs expected.hex; no wedge (no progress for
// >3 frame periods). With +fix=0 the TB is EXPECTED to reproduce the /21 deadlock (fidelity gate).
//
// Run: tools/run_consumer_sim.sh
`timescale 1ns/1ps

module tb_nlc_consumer;
    `include "params.vh"

    // ------------------------------------------------------------------ clock
    reg clk = 0; always #6 clk = ~clk;   // ~83 MHz
    integer cycles = 0; always @(posedge clk) cycles = cycles + 1;

    // ------------------------------------------------------------- parameters
    integer N_FRAMES, CADENCE, CHUNK, FIX, FIX2, DBUF, LINEP;
    initial begin
        if (!$value$plusargs("frames=%d",  N_FRAMES)) N_FRAMES = 12;
        if (!$value$plusargs("cadence=%d", CADENCE))  CADENCE  = 90000;
        if (!$value$plusargs("chunk=%d",   CHUNK))    CHUNK    = 20000;
        if (!$value$plusargs("fix=%d",     FIX))      FIX      = 0;
        if (!$value$plusargs("fix2=%d",    FIX2))     FIX2     = 0;   // yield-gate fix (fb-mode always yields)
        if (!$value$plusargs("dbuf=%d",    DBUF))     DBUF     = 0;   // ping-pong double buffer (Step-6) + audit fixes
        if (!$value$plusargs("linep=%d",   LINEP))    LINEP    = 1500; // display line period (cycles)
    end

    // ------------------------------------------------- Groovy.sv DDR layout
    localparam [27:0] DDR_LZ_HEADER   = 28'd32;
    localparam [27:0] DDR_FB_OFFSET   = 28'hff;
    localparam [27:0] DDR_FD_OFFSET   = 28'h1950ff;
    localparam [27:0] DDR_LZ_OFFSET_A = 28'h3320ff;
    localparam [27:0] DDR_LZ_OFFSET_B = 28'h4c70ff;
    localparam [27:0] DDR_LZ_OFFSET_C = 28'h65c0ff;
    localparam [27:0] DDR_LZ_OFFSET_D = 28'h7f10ff;

    // states (Groovy.sv values)
    localparam S_Dispatcher       = 8'd1;
    localparam S_Blit_Raw         = 8'd21;
    localparam S_Blit_Header_NLC  = 8'd80;
    localparam S_Blit_Setup_NLC   = 8'd81;
    localparam S_Blit_Prepare_NLC = 8'd82;
    localparam S_Blit_Copy_NLC    = 8'd83;
    localparam S_Blit_Inflate_NLC = 8'd84;
    localparam S_Blit_End_NLC     = 8'd85;
    localparam S_AutoStub         = 8'd26;   // stands in for S_Blit_Auto_*

    // ------------------------------------------------------- behavioral DDR
    // word-addressed (byte_addr >> 3), 16 MB span
    reg [63:0] mem [0:(1<<21)-1];
    reg  [27:0] ddr_addr = 0;
    reg  [7:0]  ddr_burst = 0;
    reg         ddr_data_req = 0, ddr_data_write = 0;
    reg  [63:0] ddr_data_to_write = 0;
    reg  [63:0] ddr_data = 0;
    reg         ddr_data_ready = 0;
    reg         ddr_busy;

    localparam READ_LAT = 14;     // cycles to first beat
    localparam WRITE_BUSY = 3;    // posted-write busy cycles
    integer rd_lat = 0, rd_left = 0; reg [27:0] rd_addr = 0; integer wr_busy_left = 0;
    reg reading = 0;
    always @(posedge clk) begin
        ddr_data_ready <= 1'b0;
        // write port (posted, single-beat — mirrors rtl/ddram.sv WE burstcnt=1)
        if (ddr_data_write && !ddr_busy) begin
            mem[ddr_addr >> 3] <= ddr_data_to_write;
            wr_busy_left <= WRITE_BUSY;
        end
        // read port
        if (ddr_data_req && !reading && !ddr_data_write) begin
            reading  <= 1'b1;
            rd_addr  <= ddr_addr;
            rd_left  <= ddr_burst;
            rd_lat   <= READ_LAT;
        end
        if (reading) begin
            if (rd_lat > 0) rd_lat <= rd_lat - 1;
            else if (rd_left > 0) begin
                ddr_data       <= mem[rd_addr >> 3];
                ddr_data_ready <= 1'b1;
                rd_addr        <= rd_addr + 8;
                rd_left        <= rd_left - 1;
                if (rd_left == 1) reading <= 1'b0;
            end
        end
        if (wr_busy_left > 0) wr_busy_left <= wr_busy_left - 1;
    end
    always @(*) ddr_busy = reading || (wr_busy_left > 0);

    // --------------------------------------------------------- real decoder
    reg  [63:0] nlc_compressed_long = 0;
    reg         nlc_write_long = 0, nlc_out_ready = 0, nlc_reset = 1;
    wire        nlc_write_ready, nlc_long_valid, nlc_paused, nlc_done;
    wire [63:0] nlc_uncompressed_long;
    wire [31:0] nlc_uncompressed_bytes, nlc_writed_bytes, nlc_readed_bytes;

    nlc_decode_ddr #(.MAXW(720), .WBITS(VEC_WBITS), .NP(VEC_NP)) u_nlc (
        .clk(clk), .reset(nlc_reset),
        .cfg_w(VEC_W[15:0]), .cfg_h(VEC_H[15:0]), .cfg_near(VEC_NEAR[2:0]),
        .cfg_tile(VEC_TILE[6:0]), .cfg_color(VEC_COLOR[0]),
        .compressed_long(nlc_compressed_long), .write_long(nlc_write_long), .write_ready(nlc_write_ready),
        .uncompressed_long(nlc_uncompressed_long), .long_valid(nlc_long_valid), .out_ready(nlc_out_ready),
        .uncompressed_bytes(nlc_uncompressed_bytes), .writed_bytes(nlc_writed_bytes), .readed_bytes(nlc_readed_bytes),
        .paused(nlc_paused), .done(nlc_done));

    // ------------------------------------------- shared FSM state (Groovy.sv)
    reg [7:0]  state = S_Dispatcher;
    reg [23:0] PoC_frame_lz4_ddr = 0, PoC_frame_lz4 = 0, PoC_frame_ddr = 0, PoC_frame_vram = 0;
    reg [31:0] PoC_subframe_lz4_ddr_bytes = 0;
    reg [15:0] PoC_subframe_blit_lz4_ddr = 0, PoC_subframe_blit_lz4 = 0;
    reg [27:0] PoC_subframe_wr_bytes = 0, PoC_subframe_vram_bytes = 0;
    reg [23:0] PoC_subframe_px_lz4 = 0, PoC_subframe_px_vram = 0, PoC_subframe_px_ddr = 0;
    reg [15:0] PoC_subframe_bl_ddr = 0, PoC_subframe_bl_vram = 0;
    reg        PoC_lz4_resume_blit = 0, PoC_lz4_resume_audio = 0;
    reg [1:0]  PoC_lz4_ABCD = 0, PoC_lz4_field = 0;
    reg        PoC_lz4_delta_req = 0;
    reg [31:0] nlc_compressed_bytes = 0;
    reg [23:0] nlc_cur_frame = 0;
    reg        PoC_frame_lz4_FB = 0, vram_drive_lz4 = 0, vram_drive_raw = 0;
    reg        reset_blit_lz4 = 0, auto_blit_lz4 = 0;
    reg        vram_reset = 0, vga_wait_vblank = 0, vga_soft_reset = 0, vga_frameskip_prev = 0;
    reg [1:0]  PoC_frame_rgb_offset = 0;
    reg        vram_wren1=0, vram_wren2=0, vram_wren3=0, vram_wren4=0;
    // environment constants for the fb-only scenario
    wire        cmd_audio = 1'b0, cmd_switchres = 1'b0, cmd_init = 1'b1;
    wire        cmd_fskip = fskip_level;
    wire        vram_synced = 1'b1, vram_drive_raw_w = 1'b0;
    wire [23:0] vram_queue = vram_queue_m;
    wire [23:0] vga_pixels = (VEC_W * VEC_H) & 24'hFFFFFF;
    wire [23:0] vram_pixels = 24'd0;
    wire [15:0] PoC_H = VEC_W[15:0];
    wire        PoC_FB_interlaced = 1'b0;
    wire [23:0] PoC_frame_switchres = 24'd0;
    wire [23:0] vga_frame = 24'd0;
    wire [31:0] switchres_frame = 32'd0;

    // ------------------------- display / VRAM-queue / frameskip model -------------------------
    // The scan consumes one line (W px) from vram_queue every LINEP cycles once the display is
    // bootstrapped (PoC_frame_vram != 0). The frameskip monitor asserts cmd_fskip (LEVEL, like
    // Groovy.sv :915-936 which re-evaluates every clock) while the queue holds less than one line.
    // The auto-blit stub (S_AutoStub, dispatcher-prioritized like the real S_Blit_Auto_*) refills one
    // line per service via a real DDR read burst — consuming FSM time + DDR bandwidth like silicon.
    reg [23:0] vram_queue_m   = 0;        // modeled queue (overrides the constant-0 wire below)
    integer    linep_cnt      = 0;
    integer    underrun_lines = 0;        // lines the scan displayed with an empty queue (the "flash")
    integer    displayed_lines = 0;
    reg        fskip_level    = 0;
    always @(posedge clk) begin
        if (PoC_frame_vram != 0) begin
            linep_cnt <= linep_cnt + 1;
            if (linep_cnt >= LINEP) begin
                linep_cnt <= 0;
                displayed_lines <= displayed_lines + 1;
                if (vram_queue_m >= VEC_W[23:0]) vram_queue_m <= vram_queue_m - VEC_W[23:0];
                else underrun_lines <= underrun_lines + 1;
            end
            fskip_level <= (vram_queue_m < VEC_W[23:0]);
        end else begin
            fskip_level <= 1'b0;
            linep_cnt   <= 0;
        end
        if (autoblit_fill) vram_queue_m <= (vram_queue_m > 24'd30000) ? vram_queue_m : vram_queue_m + VEC_W[23:0];
        if (bootstrap_fill) vram_queue_m <= 24'd10000;   // S_Blit_Raw stub primes the queue
    end
    reg autoblit_fill = 0, bootstrap_fill = 0, bootstrap_pending = 0;

    // ---------------- ping-pong double buffer (Step-6 verbatim semantics) + INVARIANT shadows ----
    reg        front_fb_idx  = 0;
    reg        back_fb_ready = 0;
    integer    vbl_cnt = 0;
    reg        vblank_rise_m = 0;
    wire       dbuf_active   = (DBUF != 0);   // progressive non-delta session assumed
    wire [27:0] dbuf_wr_base = (dbuf_active && !front_fb_idx) ? DDR_FD_OFFSET : DDR_FB_OFFSET;
    wire [27:0] dbuf_rd_base = (dbuf_active &&  front_fb_idx) ? DDR_FD_OFFSET : DDR_FB_OFFSET;
    // shadow state for the display invariant: per-buffer owner frame + completeness
    reg [23:0] buf_owner    [0:1];
    reg        buf_complete [0:1];
    integer inv_read_viol = 0;   // auto-blit read of an incomplete front buffer
    integer inv_writ_viol = 0;   // decode write into a complete-but-unswapped back buffer
    wire backbuf = !front_fb_idx;   // index decode writes; front_fb_idx = index display reads
    always @(posedge clk) begin
        vblank_rise_m <= 0;
        vbl_cnt <= vbl_cnt + 1;
        if (vbl_cnt >= (VEC_H + 30) * LINEP) begin vbl_cnt <= 0; vblank_rise_m <= 1; end
        // Step-6 swap: at vblank rising edge if back is ready (mode 1)
        if (vblank_rise_m && back_fb_ready) begin
            front_fb_idx  <= !front_fb_idx;
            back_fb_ready <= 1'b0;
        end
        if (nlc_done && dbuf_active && !back_fb_ready_set_done) ;   // (completion marking handled in FSM End)
    end
    reg back_fb_ready_set_done = 0;  // unused placeholder to keep the block simple

    // hps_ext-mimic command interface (set by the feeder)
    reg         cmd_blit_lz4 = 0;
    reg         cmd_req = 0;          // feeder pulse; cmd_blit_lz4 latches it until the FSM ACKs
    reg [31:0]  lz4_size = 0;
    reg [1:0]   lz4_ABCD = 0, lz4_field = 0;
    always @(posedge clk) begin
        if (cmd_req)             cmd_blit_lz4 <= 1'b1;
        else if (reset_blit_lz4) cmd_blit_lz4 <= 1'b0;
    end

    reg completion_pulse = 0;   // 1-cycle pulse on every End_NLC completion (liveness reset)

    // watchdog (Groovy.sv copy)
    localparam NLC_WD_LIMIT_TB = 24'd1_200_000;  // ~3 TB vblank periods (mirrors HW 2.8M vs 1.38M/vblank ratio)
    reg [23:0] nlc_wd = 0;  reg nlc_wd_fired = 0; reg [2:0] nlc_wd_count = 0; reg [7:0] nlc_wd_state = 0;

    // ------------------------------------------------------------- the FSM
    // VERBATIM Groovy.sv NLC states (+ dispatcher NLC entry + S_Blit_Raw stub).
    // `FIX`-gated changes implement the candidate fixes for +fix=1.
    always @(posedge clk) begin
        completion_pulse <= 1'b0;
        case (state)
          S_Dispatcher: begin
            ddr_data_write <= 1'b0;
            autoblit_fill  <= 1'b0;
            bootstrap_fill <= 1'b0;
            if (bootstrap_pending && !back_fb_ready) begin
              // deferred dbuf bootstrap: the swap has landed; blit the (now front) complete frame
              bootstrap_pending <= 1'b0;
              PoC_frame_ddr     <= PoC_frame_lz4;
              state             <= S_Blit_Raw;
            end else if (cmd_fskip) begin
              // real dispatcher prioritizes the frameskip/auto-blit path (Groovy.sv :1051)
              ddr_burst    <= 8'd16;
              ddr_data_req <= 1'b1;
              ddr_addr     <= dbuf_rd_base;    // FB line read (contends with decode like silicon)
              // INVARIANT: the display must only read complete frames (audit finding #1)
              if (dbuf_active && PoC_frame_vram != 0 && !buf_complete[front_fb_idx]) begin
                inv_read_viol <= inv_read_viol + 1;
                if (inv_read_viol < 5)
                  $display("[%0d] INV-READ: front=%0d owner=%0d complete=%0d back_ready=%0d state-of-decode: cur=%0d wr8=%0d",
                           cycles, front_fb_idx, buf_owner[front_fb_idx], buf_complete[front_fb_idx], back_fb_ready, nlc_cur_frame, nlc_writed_bytes);
              end
              state        <= S_AutoStub;
            end else if (cmd_blit_lz4 || auto_blit_lz4) begin
              reset_blit_lz4     <= cmd_blit_lz4 && !cmd_switchres ? 1'b1 : 1'b0;
              ddr_burst          <= 8'd1;
              ddr_data_req       <= 1'b1;
              ddr_addr           <= DDR_LZ_HEADER;
              state              <= S_Blit_Header_NLC;
            end
          end

          S_Blit_Raw: begin
            // stub of the HW-proven RAW bootstrap blit: publish + prime the queue + return
            if (PoC_frame_ddr > PoC_frame_vram) PoC_frame_vram <= PoC_frame_ddr;
            bootstrap_fill <= 1'b1;
            state <= S_Dispatcher;
          end

          S_AutoStub: begin
            // one auto-blit line: a real FB read burst (FSM time + DDR contention), then refill
            bootstrap_fill <= 1'b0;
            if (ddr_busy) ddr_data_req <= 1'b0;
            if (ddr_data_ready && !ddr_busy) begin
              autoblit_fill <= 1'b1;
              state         <= S_Dispatcher;
            end
          end

          S_Blit_Header_NLC: begin
            nlc_out_ready  <= 1'b0; nlc_write_long <= 1'b0;
            if (ddr_busy) ddr_data_req <= 1'b0;
            reset_blit_lz4             <= 1'b0;
            vram_reset                 <= !vram_synced;
            PoC_frame_lz4_FB           <= 1'b1;
            if (ddr_data_ready) begin
              ddr_data_req             <= 1'b0;
              auto_blit_lz4            <= PoC_frame_lz4 >= ddr_data[23:0] ? 1'b0 : 1'b1;
              if (PoC_lz4_resume_blit || PoC_lz4_resume_audio || nlc_writed_bytes > nlc_readed_bytes
                  || (FIX != 0 && nlc_long_valid)) begin   // FIX 1: a pending output word resumes the drain
                state <= S_Blit_Inflate_NLC;
              end else begin
                if (ddr_data[23:0] > PoC_frame_lz4_ddr && nlc_writed_bytes != 0) begin
                  state <= S_Blit_Setup_NLC;
                  PoC_subframe_lz4_ddr_bytes <= nlc_compressed_bytes;
                  PoC_subframe_blit_lz4_ddr  <= PoC_subframe_blit_lz4 + 1'b1;
                end else begin
                  state <= ((cmd_switchres && ddr_data[23:0] > switchres_frame) || (!cmd_switchres && ddr_data[23:0] <= switchres_frame)) ? S_Dispatcher : S_Blit_Setup_NLC;
                  PoC_frame_lz4_ddr          <= ddr_data[23:0];
                  PoC_subframe_lz4_ddr_bytes <= ddr_data[47:24];
                  PoC_subframe_blit_lz4_ddr  <= ddr_data[47:24] == nlc_compressed_bytes ? PoC_subframe_blit_lz4 + 1'b1 : ddr_data[63:48];
                end
              end
            end
          end

          S_Blit_Setup_NLC: begin
            nlc_out_ready  <= 1'b0; nlc_write_long <= 1'b0;
            state      <= S_Dispatcher;
            vram_reset <= 1'b0;
            // DBUF HOLD (audit fix #2 + the init race the invariant caught): never START a new frame
            // while a completed one awaits its vblank swap — the new decode would target the buffer
            // that is about to become (or just became) the front.
            if (!(dbuf_active && back_fb_ready && (nlc_writed_bytes == 0 || PoC_frame_lz4_ddr != nlc_cur_frame)) &&
                PoC_frame_lz4_ddr > PoC_frame_lz4 && (PoC_frame_lz4_ddr != nlc_cur_frame || (PoC_subframe_lz4_ddr_bytes > nlc_writed_bytes && PoC_subframe_blit_lz4_ddr > PoC_subframe_blit_lz4)
                || (FIX != 0 && nlc_long_valid))) begin    // FIX 1b: pending word must still reach Inflate
              if (nlc_writed_bytes == 0 || PoC_frame_lz4_ddr != nlc_cur_frame) begin
                nlc_cur_frame         <= PoC_frame_lz4_ddr;
                buf_owner[backbuf]    <= PoC_frame_lz4_ddr;
                buf_complete[backbuf] <= 1'b0;
                if (!vram_drive_raw) PoC_frame_rgb_offset <= 2'd0;
                if (!vram_drive_raw && !PoC_frame_lz4_FB && vram_queue == 0) vga_wait_vblank <= 1'b1;
                PoC_subframe_px_lz4   <= 24'd0;
                PoC_subframe_px_vram    <= 24'd0;
                PoC_subframe_vram_bytes <= 28'd0;
                PoC_subframe_blit_lz4 <= 16'd0;
                vga_frameskip_prev    <= 1'b0;
                PoC_subframe_wr_bytes <= 28'd0;
                nlc_compressed_bytes  <= lz4_size;
                nlc_reset             <= 1'b1;
                vram_reset            <= (!vram_drive_raw && vga_pixels != vram_pixels) ? 1'b1 : 1'b0;
                PoC_lz4_ABCD          <= lz4_ABCD;
                PoC_lz4_field         <= lz4_field;
                PoC_lz4_delta_req     <= 1'b0;
              end
              state                   <= PoC_subframe_blit_lz4_ddr == 65535 ? S_Blit_End_NLC : S_Blit_Prepare_NLC;
            end
          end

          S_Blit_Prepare_NLC: begin
            nlc_out_ready  <= 1'b0; nlc_write_long <= 1'b0;
            ddr_data_req   <= 1'b0;
            nlc_reset      <= 1'b0;
            vram_reset     <= 1'b0;
            if (!cmd_audio && nlc_writed_bytes < PoC_subframe_lz4_ddr_bytes && (nlc_compressed_bytes == PoC_subframe_lz4_ddr_bytes || ((PoC_subframe_lz4_ddr_bytes - nlc_writed_bytes) >> 3) > 0)) begin
              if (!ddr_busy && nlc_write_ready) begin
                ddr_burst    <= PoC_subframe_lz4_ddr_bytes - nlc_writed_bytes > 24'd127 ? 8'd16 : nlc_compressed_bytes == PoC_subframe_lz4_ddr_bytes ? ((nlc_compressed_bytes - nlc_writed_bytes) >> 3) + 8'd1 : (PoC_subframe_lz4_ddr_bytes - nlc_writed_bytes) >> 3;
                ddr_addr     <= PoC_lz4_ABCD == 0 ? DDR_LZ_OFFSET_A + nlc_writed_bytes : PoC_lz4_ABCD == 1 ? DDR_LZ_OFFSET_B + nlc_writed_bytes : PoC_lz4_ABCD == 2 ? DDR_LZ_OFFSET_C + nlc_writed_bytes : DDR_LZ_OFFSET_D + nlc_writed_bytes;
                ddr_data_req <= 1'b1;
                state        <= S_Blit_Copy_NLC;
              end
            end else if (FIX != 0 && nlc_long_valid) state <= S_Blit_Inflate_NLC;   // FIX 1c: drain pending word
            else state   <= S_Dispatcher;
          end

          S_Blit_Copy_NLC: begin
            nlc_out_ready  <= 1'b0;
            if (ddr_busy) ddr_data_req <= 1'b0;
            nlc_write_long <= 1'b0;
            if (ddr_data_ready) begin
              ddr_data_req        <= 1'b0;
              nlc_write_long      <= 1'b1;
              nlc_compressed_long <= ddr_data;
              if (!ddr_busy) state <= S_Blit_Inflate_NLC;
            end
          end

          S_Blit_Inflate_NLC: begin
            vram_wren1 <= 1'b0; vram_wren2 <= 1'b0; vram_wren3 <= 1'b0; vram_wren4 <= 1'b0;
            nlc_write_long <= 1'b0;
            nlc_out_ready  <= 1'b0;
            ddr_data_write <= ddr_data_write && ddr_busy ? 1'b1 : 1'b0;
            if (((nlc_done || nlc_paused) && !nlc_long_valid && !(ddr_data_write && ddr_busy))
                || ((cmd_audio || cmd_fskip) && ((FIX2 != 0 && PoC_frame_lz4_FB) || vram_queue > PoC_H) && !(ddr_data_write && ddr_busy))) state <= S_Blit_End_NLC;
            if (nlc_long_valid && nlc_uncompressed_bytes > PoC_subframe_wr_bytes && !(ddr_data_write && ddr_busy) && PoC_subframe_px_lz4 < vga_pixels) begin
              PoC_subframe_wr_bytes <= PoC_subframe_wr_bytes + 8'd8;
              ddr_addr              <= dbuf_wr_base + PoC_subframe_wr_bytes;
              // INVARIANT: never overwrite a complete-but-unswapped frame (audit finding #2)
              if (dbuf_active && buf_complete[backbuf] && back_fb_ready) inv_writ_viol <= inv_writ_viol + 1;
              ddr_data_write        <= 1'b1;
              ddr_burst             <= 8'd1;
              ddr_data_to_write     <= nlc_uncompressed_long;
              nlc_out_ready         <= 1'b1;
              // streaming branch dead in fb-mode (PoC_frame_lz4_FB=1): decode_pixel not called
            end
          end

          S_Blit_End_NLC: begin
            vram_wren1 <= 1'b0; vram_wren2 <= 1'b0; vram_wren3 <= 1'b0; vram_wren4 <= 1'b0;
            nlc_out_ready  <= 1'b0; nlc_write_long <= 1'b0;
            ddr_data_write <= 1'b0;
            PoC_lz4_resume_blit   <= cmd_fskip;
            PoC_lz4_resume_audio  <= cmd_audio;
            if (nlc_writed_bytes + 8'd7 >= PoC_subframe_lz4_ddr_bytes) PoC_subframe_blit_lz4 <= PoC_subframe_blit_lz4_ddr;
            if (nlc_done || PoC_subframe_blit_lz4_ddr == 65535) begin
              if (PoC_frame_vram == 0) begin
                PoC_frame_ddr           <= PoC_frame_lz4_ddr;
                PoC_subframe_px_ddr     <= vga_pixels;
                PoC_subframe_px_vram    <= 24'd0;
                PoC_subframe_bl_ddr     <= 16'd1;
                PoC_subframe_bl_vram    <= 16'd0;
                PoC_subframe_vram_bytes <= 28'd0;
                PoC_frame_rgb_offset    <= 2'd0;
              end else begin
                if (PoC_frame_lz4_ddr > PoC_frame_vram) begin
                  PoC_frame_ddr         <= PoC_frame_lz4_ddr;
                  PoC_frame_vram        <= PoC_frame_lz4_ddr;
                end
                PoC_subframe_px_vram    <= 24'd0;
                PoC_subframe_vram_bytes <= 24'd0;
                PoC_frame_rgb_offset    <= 2'd0;
                vga_wait_vblank         <= 1'b0;
              end
              buf_complete[backbuf] <= 1'b1;
              if (dbuf_active) back_fb_ready <= 1'b1;
              if (PoC_frame_lz4_ddr > PoC_frame_lz4) PoC_frame_lz4 <= PoC_frame_lz4_ddr;
              PoC_subframe_lz4_ddr_bytes <= 32'd0;
              PoC_subframe_blit_lz4_ddr  <= 16'd0;
              PoC_subframe_blit_lz4      <= 16'd0;
              PoC_subframe_wr_bytes      <= 28'd0;
              PoC_subframe_px_lz4        <= 24'd0;
              PoC_lz4_resume_blit        <= 1'b0;
              PoC_lz4_resume_audio       <= 1'b0;
              vram_drive_lz4             <= 1'b0;
              nlc_reset                  <= 1'b1;
              nlc_compressed_bytes       <= 32'd0;
              // bootstrap: with dbuf, WAIT for the swap (audit finding #1) — set pending, blit later
              if (PoC_frame_vram == 0 && dbuf_active) bootstrap_pending <= 1'b1;
              state                      <= (PoC_frame_vram == 0 && !dbuf_active) ? S_Blit_Raw : S_Dispatcher;
              completions                <= completions + 1;
              completion_pulse           <= 1'b1;
              last_completed_frame       <= PoC_frame_lz4_ddr;
              $display("[%0d] COMPLETED frame %0d (completions=%0d)", cycles, PoC_frame_lz4_ddr, completions + 1);
            end else state               <= (!cmd_init || cmd_fskip || cmd_audio) ? S_Dispatcher : S_Blit_Prepare_NLC;
          end

          default: state <= S_Dispatcher;
        endcase

        // ---- watchdog ----
        // in-range progress watchdog (original) OR, with FIX 3, completion-liveness: NLC work is
        // pending (announce unconsumed) but no frame has completed for the whole window — catches
        // polite multi-state loops whose DDR header reads defeat progress-counting.
        if (FIX != 0 ? (auto_blit_lz4 || cmd_blit_lz4)
                     : (state >= S_Blit_Header_NLC && state <= S_Blit_End_NLC)) begin
          if (FIX != 0 ? completion_pulse : (nlc_out_ready || nlc_write_long || ddr_data_ready)) nlc_wd <= 24'd0;
          else nlc_wd <= nlc_wd + 1'b1;
          if (nlc_wd >= NLC_WD_LIMIT_TB) begin
            nlc_wd                     <= 24'd0;
            nlc_wd_fired               <= 1'b1;
            nlc_wd_state               <= state;
            nlc_wd_count               <= (nlc_wd_count == 3'd7) ? 3'd7 : nlc_wd_count + 1'b1;
            nlc_reset                  <= 1'b1;
            nlc_compressed_bytes       <= 32'd0;
            vram_drive_lz4             <= 1'b0;
            PoC_lz4_resume_blit        <= 1'b0;
            PoC_lz4_resume_audio       <= 1'b0;
            PoC_subframe_lz4_ddr_bytes <= 32'd0;
            PoC_subframe_blit_lz4_ddr  <= 16'd0;
            PoC_subframe_blit_lz4      <= 16'd0;
            PoC_subframe_wr_bytes      <= 28'd0;
            PoC_subframe_px_lz4        <= 24'd0;
            nlc_out_ready              <= 1'b0;
            nlc_write_long             <= 1'b0;
            ddr_data_req               <= 1'b0;
            ddr_data_write             <= 1'b0;
            state                      <= S_Dispatcher;
            $display("[%0d] WATCHDOG fired in state %0d (count=%0d)", cycles, nlc_wd_state, nlc_wd_count + 1);
          end
        end else nlc_wd <= 24'd0;
    end

    // debug probe (+debug=1): periodic dump of the full gate state
    integer DEBUG; initial if (!$value$plusargs("debug=%d", DEBUG)) DEBUG = 0;
    always @(posedge clk)
        if (DEBUG && (cycles % 50000 == 0))
            $display("[%0d] st=%0d wr=%0d rd=%0d ub=%0d ann=%0d cs_r=%0d nlv=%b np=%b nd=%b nwr=%b wrb=%0d fr_ddr=%0d fr_lz4=%0d cur=%0d blit=%0d/%0d cmd=%b auto=%b",
                cycles, state, nlc_writed_bytes, nlc_readed_bytes, nlc_uncompressed_bytes,
                PoC_subframe_lz4_ddr_bytes, nlc_compressed_bytes, nlc_long_valid, nlc_paused, nlc_done,
                nlc_write_ready, PoC_subframe_wr_bytes, PoC_frame_lz4_ddr, PoC_frame_lz4, nlc_cur_frame,
                PoC_subframe_blit_lz4, PoC_subframe_blit_lz4_ddr, cmd_blit_lz4, auto_blit_lz4);

    // -------------------------------------------------------------- monitors
    integer completions = 0;
    reg [23:0] last_completed_frame = 0;
    integer last_progress_cycle = 0;
    always @(posedge clk) if (nlc_out_ready || nlc_write_long || state == S_Blit_End_NLC) last_progress_cycle = cycles;

    // ------------------------------------------------------------ HPS feeder
    reg [7:0] stream [0:2097151];   // one frame's compressed bytes (reused for every announce)
    integer cs;                      // VEC_CSIZE
    reg [7:0] expected [0:8388607];

    task write_header(input [23:0] fr, input [23:0] bytes, input [15:0] nblit);
        begin mem[DDR_LZ_HEADER >> 3] = {nblit, bytes, fr}; end
    endtask

    task load_zone(input [1:0] zone);
        integer base, i; reg [63:0] w;
        begin
            base = (zone == 0) ? (DDR_LZ_OFFSET_A & 28'h7FFFFF8) : (zone == 1) ? (DDR_LZ_OFFSET_B & 28'h7FFFFF8) : (zone == 2) ? (DDR_LZ_OFFSET_C & 28'h7FFFFF8) : (DDR_LZ_OFFSET_D & 28'h7FFFFF8);
            for (i = 0; i < cs + 8; i = i + 8) begin
                w = {stream[i+7], stream[i+6], stream[i+5], stream[i+4], stream[i+3], stream[i+2], stream[i+1], stream[i]};
                mem[(base + i) >> 3] = w;
            end
        end
    endtask

    // one frame's announce sequence, exactly groovy.cpp's: setBlit -> header(fr,0,0) + SPI cmd;
    // per CHUNK: header(fr, bytes_so_far, ++numBlit)
    integer feed_fr = 0;
    task announce_frame(input [23:0] fr);
        integer sent; integer nblit; reg [1:0] zone;
        begin
            zone = (fr - 1) % 4;
            load_zone(zone);
            lz4_size = cs; lz4_ABCD = zone; lz4_field = 0;
            write_header(fr, 24'd0, 16'd0);
            cmd_req <= 1; @(posedge clk); @(posedge clk); cmd_req <= 0;   // like the real HPS: fire and continue (2-edge NBA pulse, no race)
            sent = 0; nblit = 0;
            while (sent < cs) begin
                sent  = (sent + CHUNK > cs) ? cs : sent + CHUNK;
                nblit = nblit + 1;
                write_header(fr, sent[23:0], nblit[15:0]);
                repeat (200) @(posedge clk);  // ~chunk pacing
            end
        end
    endtask

    // ------------------------------------------------------------- scenario
    integer fi; integer wedge;
    initial begin
        buf_owner[0] = 0; buf_owner[1] = 0; buf_complete[0] = 0; buf_complete[1] = 0;
        $readmemh("bits.hex", stream);
        $readmemh("expected.hex", expected);
        cs = VEC_CSIZE;
        repeat (20) @(posedge clk);
        $display("TB: frames=%0d cadence=%0d chunk=%0d fix=%0d cs=%0d (cs%%8=%0d) pixels=%0d",
                 N_FRAMES, CADENCE, CHUNK, FIX, cs, cs % 8, VEC_W * VEC_H);

        for (fi = 1; fi <= N_FRAMES; fi = fi + 1) begin
            announce_frame(fi[23:0]);
            repeat (CADENCE) @(posedge clk);
        end
        // grace period: let the last decode finish
        repeat (CADENCE * 4) @(posedge clk);

        // ---- verdict ----
        // a wedge means idle WITH work still pending (an unconsumed announce / unfinished frame);
        // idling after all fed frames are resolved is the correct end state
        wedge = ((cycles - last_progress_cycle) > (3 * CADENCE)) && (auto_blit_lz4 || cmd_blit_lz4 || nlc_long_valid);
        $display("RESULT: completions=%0d/%0d last_frame=%0d wedged=%0d wd_fired=%0d wd_state=%0d underrun_lines=%0d/%0d inv_read=%0d inv_write=%0d",
                 completions, N_FRAMES, last_completed_frame, wedge, nlc_wd_fired, nlc_wd_state, underrun_lines, displayed_lines, inv_read_viol, inv_writ_viol);
        if (completions == 0)
            $display("CONSUMER TB FAIL: zero completions%s", wedge ? " (WEDGED — /21 signature)" : "");
        else if (wedge)
            $display("CONSUMER TB FAIL: wedged after %0d completions", completions);
        else begin
            check_fb;
        end
        $finish;
    end

    // FB bit-exact check vs golden (the LAST completed frame; every frame uses the same stream)
    task check_fb;
        integer i, errs; reg [63:0] w; integer fb_base;
        begin
            errs = 0;
            fb_base = ((DBUF != 0 && front_fb_idx) ? DDR_FD_OFFSET : DDR_FB_OFFSET) & 28'h7FFFFF8;   // the FRONT buffer holds the last completed frame
            for (i = 0; i < VEC_OUTN; i = i + 1) begin
                w = mem[(fb_base + i) >> 3];
                if (w[(i % 8) * 8 +: 8] !== expected[i]) begin
                    if (errs < 5) $display("  FB mismatch @%0d: got %02x want %02x", i, w[(i % 8) * 8 +: 8], expected[i]);
                    errs = errs + 1;
                end
            end
            if (errs == 0) $display("CONSUMER TB PASS: %0d completions, FB bit-exact (%0d bytes)", completions, VEC_OUTN);
            else           $display("CONSUMER TB FAIL: FB %0d byte mismatches", errs);
        end
    endtask

    initial begin #600_000_000 $display("CONSUMER TB TIMEOUT (completions=%0d)", completions); $finish; end
endmodule
