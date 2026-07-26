// tb_nlc_engine.v — unit test for rtl/nlc_engine.v (the /47 Mode-2 autonomous decode engine).
//
// FULL REAL STACK: nlc_engine -> (real) nlc_decode_ddr/nlc_plane_core + (real) ddr_mux2 ->
// (real) ddram.sv -> behavioral Avalon slave (random waitrequest + hold-free after beats).
// An FSM-faithful M0 driver hammers the bus with read bursts to exercise arbitration under
// display-like contention. Golden vectors from tools/nlc_vectors (/tmp/nlc_vec: a real full
// 320x240 frame, byte-exact expectation).
//
// Scenarios:
//   1. single final announce           -> done_stb, FB byte-exact
//   2. chunked announce (4 watermark steps via wm_stb) -> byte-exact
//   3. same as 1 under heavy M0 contention             -> byte-exact
//   4. abort mid-decode -> engine idles cleanly; then a fresh decode -> byte-exact
//   5. starved frame + newer pend -> liveness abandon (wd_fired, NO publish), next frame clean
//
//   iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tb_eng tools/tb_nlc_engine.v rtl/nlc_engine.v \
//       rtl/ddr_mux2.v rtl/ddram.sv rtl/nlc_decode_ddr.v rtl/nlc_plane_core.v && vvp /tmp/tb_eng
`timescale 1ns/1ps
module tb;
    `include "params.vh"
    reg clk = 0; always #5 clk = ~clk;
    integer cyc = 0; always @(posedge clk) cyc = cyc + 1;

    localparam [27:0] SRC_A = 28'h0040000;   // compressed zone (frame A)
    localparam [27:0] SRC_B = 28'h0080000;   // compressed zone (frame B)
    localparam [27:0] DST_A = 28'h0100000;   // FB destination (frame A)
    localparam [27:0] DST_B = 28'h0200000;   // FB destination (frame B)
    localparam [27:0] M0RGN = 28'h0300000;   // M0 traffic region

    // ---------------- DDRAM + Avalon slave (tb_ddr_mux2 model, bigger memory)
    reg         DDRAM_BUSY = 0;
    wire  [7:0] DDRAM_BURSTCNT;
    wire [28:0] DDRAM_ADDR;
    reg  [63:0] DDRAM_DOUT = 0;
    reg         DDRAM_DOUT_READY = 0;
    wire        DDRAM_RD;
    wire [63:0] DDRAM_DIN;
    wire  [7:0] DDRAM_BE;
    wire        DDRAM_WE;
    reg [63:0] slave_mem [0:(1<<19)-1];      // 4 MB of 64-bit words (DST_B at word 0x40000 must fit!)
    integer    wr_left = 0, rd_left = 0, hold_free = 0;
    reg [28:0] wr_addr, rd_addr;
    reg [31:0] lfsr = 32'hBEEF1234;
    always @(posedge clk) begin
        lfsr <= {lfsr[30:0], lfsr[31] ^ lfsr[21] ^ lfsr[1] ^ lfsr[0]};
        if (DDRAM_WE && !DDRAM_BUSY) begin
            if (wr_left == 0) begin wr_addr = DDRAM_ADDR; wr_left = DDRAM_BURSTCNT; end
            slave_mem[wr_addr[18:0]] = DDRAM_DIN;
            wr_addr = wr_addr + 1;
            wr_left = wr_left - 1;
        end
        if (DDRAM_RD && !DDRAM_BUSY && rd_left == 0) begin rd_left = DDRAM_BURSTCNT; rd_addr = DDRAM_ADDR; end
        if (rd_left > 0 && lfsr[4:3] != 2'b01) begin
            DDRAM_DOUT <= slave_mem[rd_addr[18:0]]; DDRAM_DOUT_READY <= 1; DDRAM_BUSY <= 0;
            rd_addr = rd_addr + 1; rd_left = rd_left - 1;
            hold_free = 2;
        end else begin
            DDRAM_DOUT_READY <= 0;
            if (hold_free > 0) begin DDRAM_BUSY <= 0; hold_free = hold_free - 1; end
            else DDRAM_BUSY <= (lfsr[2:0] == 3'b000) || (lfsr[6:4] == 3'b101);
        end
    end

    // ---------------- ddram + arbiter
    reg  [27:1] m0_addr = 0;
    reg  [63:0] m0_din  = 0;
    reg         m0_rd = 0, m0_wr = 0;
    reg   [7:0] m0_burst = 1;
    wire        m0_busy, m0_dready;
    wire        e_req, e_gnt, e_rd, e_wr;
    wire [27:1] e_addr;
    wire [63:0] e_din;
    wire  [7:0] e_burst;
    wire        e_busy, e_dready;
    wire [27:1] mem_addr;
    wire [63:0] mem_din, mem_dout;
    wire        mem_rd, mem_wr, mem_busy, mem_dready;
    wire  [7:0] mem_burst;

    ddr_mux2 mux (
        .clk(clk),
        .m0_addr(m0_addr), .m0_din(m0_din), .m0_rd(m0_rd), .m0_burst(m0_burst), .m0_wr(m0_wr),
        .m0_busy(m0_busy), .m0_dready(m0_dready),
        .m1_req(e_req), .m1_gnt(e_gnt),
        .m1_addr(e_addr), .m1_din(e_din), .m1_rd(e_rd), .m1_burst(e_burst), .m1_wr(e_wr),
        .m1_busy(e_busy), .m1_dready(e_dready),
        .mem_addr(mem_addr), .mem_din(mem_din), .mem_rd(mem_rd), .mem_burst(mem_burst), .mem_wr(mem_wr),
        .mem_busy(mem_busy), .mem_dready(mem_dready));

    ddram ddr (
        .DDRAM_CLK(clk), .DDRAM_BUSY(DDRAM_BUSY), .DDRAM_BURSTCNT(DDRAM_BURSTCNT), .DDRAM_ADDR(DDRAM_ADDR),
        .DDRAM_DOUT(DDRAM_DOUT), .DDRAM_DOUT_READY(DDRAM_DOUT_READY), .DDRAM_RD(DDRAM_RD),
        .DDRAM_DIN(DDRAM_DIN), .DDRAM_BE(DDRAM_BE), .DDRAM_WE(DDRAM_WE),
        .mem_addr(mem_addr), .mem_dout(mem_dout), .mem_din(mem_din), .mem_rd(mem_rd),
        .mem_burst(mem_burst), .mem_wr(mem_wr), .mem_busy(mem_busy), .mem_dready(mem_dready));

    // ---------------- decoder (the shared u_nlc, engine-driven here)
    wire        dec_reset, dec_wlong, dec_oready;
    wire [63:0] dec_clong;
    wire        dec_wready, dec_lvalid, dec_done;
    wire [63:0] dec_ulong;
    wire [31:0] dec_writed;
    nlc_decode_ddr #(.MAXW(720), .WBITS(VEC_WBITS), .NP(VEC_NP)) u_nlc (
        .clk(clk), .reset(dec_reset),
        .cfg_w(VEC_W[15:0]), .cfg_h(VEC_H[15:0]), .cfg_near(VEC_NEAR[2:0]),
        .cfg_tile(VEC_TILE[6:0]), .cfg_color(VEC_COLOR[0]),
        .compressed_long(dec_clong), .write_long(dec_wlong), .write_ready(dec_wready),
        .uncompressed_long(dec_ulong), .long_valid(dec_lvalid), .out_ready(dec_oready),
        .uncompressed_bytes(), .writed_bytes(dec_writed), .readed_bytes(), .paused(), .done(dec_done));

    // ---------------- the engine under test (small WDBIT so escape paths are testable)
    reg         abort = 0;
    reg         pend_valid = 0, pend_final = 0;
    reg  [23:0] pend_frame = 0;
    reg  [31:0] pend_size = 0, pend_bytes = 0;
    reg  [27:0] pend_src = 0, pend_dst = 0, pend_fb = 0;
    wire        adopt_ack;
    reg         wm_stb = 0, wm_final = 0;
    reg  [31:0] wm_bytes = 0;
    wire        busy, done_stb, wd_fired;
    wire [23:0] cur_frame;
    wire [27:0] flushed_bytes;
    wire [3:0]  eng_state;
    nlc_engine #(.WDBIT(14)) eng (
        .clk(clk), .abort(abort),
        .pend_valid(pend_valid), .pend_frame(pend_frame), .pend_size(pend_size),
        .pend_bytes(pend_bytes), .pend_final(pend_final),
        .pend_src(pend_src), .pend_dst(pend_dst), .pend_fb_bytes(pend_fb),
        .adopt_ack(adopt_ack),
        .wm_stb(wm_stb), .wm_bytes(wm_bytes), .wm_final(wm_final),
        .dec_reset(dec_reset), .dec_clong(dec_clong), .dec_wlong(dec_wlong), .dec_wready(dec_wready),
        .dec_ulong(dec_ulong), .dec_lvalid(dec_lvalid), .dec_oready(dec_oready),
        .dec_writed(dec_writed), .dec_done(dec_done),
        .m_req(e_req), .m_gnt(e_gnt), .m_addr(e_addr), .m_din(e_din), .m_rd(e_rd),
        .m_burst(e_burst), .m_wr(e_wr), .m_busy(e_busy), .m_dready(e_dready), .m_dout(mem_dout),
        .busy(busy), .done_stb(done_stb), .cur_frame(cur_frame),
        .flushed_bytes(flushed_bytes), .wd_fired(wd_fired), .eng_state(eng_state));

    // FSM ack model: clear pend_valid on adopt_ack (the Groovy clocked block does the same)
    always @(posedge clk) if (adopt_ack) pend_valid <= 1'b0;

    // ---------------- M0 contention driver (FSM-faithful read bursts; toggled per scenario)
    reg m0_traffic = 0;
    integer m0_guard, m0_beat;
    always begin : M0GEN
        @(posedge clk);
        if (m0_traffic) begin
            while (m0_busy) @(posedge clk);
            m0_addr <= M0RGN[27:1]; m0_burst <= 8'd64; m0_rd <= 1'b1;   // like an auto-blit line refill
            m0_beat = 0; m0_guard = 0;
            while (m0_beat < 64 && m0_guard < 50000) begin
                @(posedge clk);
                if (m0_busy) m0_rd <= 1'b0;
                if (m0_dready) m0_beat = m0_beat + 1;
                m0_guard = m0_guard + 1;
            end
            m0_rd <= 1'b0;
            if (m0_guard >= 50000) begin errors = errors + 1; $display("M0 contention read WEDGED"); end
            repeat (20) @(posedge clk);   // brief gap, then hammer again
        end
    end

    // ---------------- vectors + preload
    reg [7:0] cbytes   [0:262143];
    reg [7:0] expected [0:262143];
    integer i, b, nw;
    task load_zone(input [27:0] base);
        begin
            nw = (VEC_CSIZE + 7) / 8;
            for (b = VEC_CSIZE; b < nw*8; b = b + 1) cbytes[b] = 8'd0;
            for (b = 0; b < nw; b = b + 1)
                slave_mem[(base>>3) + b] = { cbytes[b*8+7], cbytes[b*8+6], cbytes[b*8+5], cbytes[b*8+4],
                                             cbytes[b*8+3], cbytes[b*8+2], cbytes[b*8+1], cbytes[b*8+0] };
        end
    endtask
    integer errors = 0, mism;
    task check_fb(input [27:0] base, input integer scen);
        reg [63:0] w;
        begin
            mism = 0;
            for (b = 0; b < VEC_OUTN; b = b + 1) begin
                w = slave_mem[(base>>3) + (b>>3)];
                if (w[(b%8)*8 +: 8] !== expected[b]) begin
                    mism = mism + 1;
                    if (mism <= 5) $display("  scen%0d FB MISMATCH @%0d got %02x exp %02x", scen, b, w[(b%8)*8 +: 8], expected[b]);
                end
            end
            if (mism != 0) begin errors = errors + 1; $display("scen%0d: FB %0d/%0d bytes wrong", scen, mism, VEC_OUTN); end
            else $display("scen%0d: FB byte-exact (%0d bytes)", scen, VEC_OUTN);
        end
    endtask

    task announce(input [23:0] fr, input [31:0] wmark, input fin, input [27:0] src, input [27:0] dst);
        begin
            @(posedge clk);
            pend_frame <= fr; pend_size <= VEC_CSIZE; pend_bytes <= wmark; pend_final <= fin;
            pend_src <= src; pend_dst <= dst; pend_fb <= VEC_OUTN;
            pend_valid <= 1'b1;
            @(posedge clk);
        end
    endtask
    integer guard;
    task wait_done(input integer scen, input integer maxcyc);
        begin
            guard = 0;
            while (!done_stb && guard < maxcyc) begin @(posedge clk); guard = guard + 1; end
            if (guard >= maxcyc) begin errors = errors + 1; $display("scen%0d: TIMEOUT (st=%0d busy=%b wr8=%0d fl=%0d)", scen, eng_state, busy, dec_writed, flushed_bytes); end
        end
    endtask
    task wait_idle(input integer scen, input integer maxcyc);
        begin
            guard = 0;
            while (busy && guard < maxcyc) begin @(posedge clk); guard = guard + 1; end
            if (guard >= maxcyc) begin errors = errors + 1; $display("scen%0d: IDLE TIMEOUT (st=%0d)", scen, eng_state); end
        end
    endtask
    task clear_fb(input [27:0] base);
        for (b = 0; b < (VEC_OUTN+7)/8; b = b + 1) slave_mem[(base>>3) + b] = 64'hDEADBEEFDEADBEEF;
    endtask

    integer done_seen = 0;
    always @(posedge clk) if (done_stb) done_seen = done_seen + 1;

    // debug: trace the engine + decoder internals for frame 7 (scenario 5), one line / 2000 cyc
    always @(posedge clk)
        if ($test$plusargs("trc7") && busy && cur_frame == 24'd7 && (cyc % 2000 == 0))
            $display("T7 cyc=%0d est=%0d wr8=%0d wcnt=%0d fl=%0d lvalid=%b wready=%b done=%b cst=%0d bank_rdy=%b ld_st=%0d ifcnt=%0d ofcnt=%0d wm=%0d",
                     cyc, eng_state, dec_writed, eng.wcnt, flushed_bytes, dec_lvalid, dec_wready, dec_done,
                     u_nlc.cst, u_nlc.bank_rdy, u_nlc.ld_st, u_nlc.if_count, u_nlc.of_count, eng.cur_wm);

    initial begin
        $readmemh("bits.hex",     cbytes);
        $readmemh("expected.hex", expected);
        load_zone(SRC_A);
        load_zone(SRC_B);
        repeat (10) @(posedge clk);

        // ---- scenario 1: single final announce
        clear_fb(DST_A);
        announce(24'd1, VEC_CSIZE, 1'b1, SRC_A, DST_A);
        wait_done(1, 3000000);
        check_fb(DST_A, 1);

        // ---- scenario 2: chunked announces (4 watermark steps)
        clear_fb(DST_A);
        announce(24'd2, VEC_CSIZE/4, 1'b0, SRC_A, DST_A);
        wait (busy); repeat (2000) @(posedge clk);
        @(posedge clk); wm_bytes <= VEC_CSIZE/2;     wm_final <= 1'b0; wm_stb <= 1'b1; @(posedge clk); wm_stb <= 1'b0;
        repeat (2000) @(posedge clk);
        @(posedge clk); wm_bytes <= (VEC_CSIZE*3)/4; wm_final <= 1'b0; wm_stb <= 1'b1; @(posedge clk); wm_stb <= 1'b0;
        repeat (2000) @(posedge clk);
        @(posedge clk); wm_bytes <= VEC_CSIZE;       wm_final <= 1'b1; wm_stb <= 1'b1; @(posedge clk); wm_stb <= 1'b0;
        wait_done(2, 3000000);
        check_fb(DST_A, 2);

        // ---- scenario 3: single final announce under heavy M0 contention
        clear_fb(DST_A);
        m0_traffic = 1;
        announce(24'd3, VEC_CSIZE, 1'b1, SRC_A, DST_A);
        wait_done(3, 6000000);
        check_fb(DST_A, 3);
        m0_traffic = 0;

        // ---- scenario 4: abort mid-decode, then a clean fresh decode
        clear_fb(DST_A);
        announce(24'd4, VEC_CSIZE, 1'b1, SRC_A, DST_A);
        wait (busy);
        repeat (30000) @(posedge clk);               // well into the decode
        @(posedge clk); abort <= 1'b1;
        wait_idle(4, 200000);
        @(posedge clk); abort <= 1'b0;
        if (done_seen != 3) begin errors = errors + 1; $display("scen4: aborted frame PUBLISHED (done_seen=%0d)", done_seen); end
        clear_fb(DST_A);
        announce(24'd5, VEC_CSIZE, 1'b1, SRC_A, DST_A);
        wait_done(4, 3000000);
        check_fb(DST_A, 4);

        // ---- scenario 5: starved frame + newer pend -> abandon (no publish), next frame clean
        clear_fb(DST_A); clear_fb(DST_B);
        announce(24'd6, VEC_CSIZE/2, 1'b0, SRC_A, DST_A);   // half the input, never final
        wait (busy);
        repeat (60000) @(posedge clk);               // feed drains, engine starves, wd builds
        announce(24'd7, VEC_CSIZE, 1'b1, SRC_B, DST_B);     // newer frame waits
        wait_done(5, 3000000);                        // must be frame 7's publish
        if (cur_frame != 24'd7) begin errors = errors + 1; $display("scen5: done for frame %0d, expected 7", cur_frame); end
        if (!wd_fired && done_seen != 5) $display("scen5: note wd_fired=%b done_seen=%0d", wd_fired, done_seen);
        if (done_seen != 5) begin errors = errors + 1; $display("scen5: publish count %0d != 5 (abandon must not publish)", done_seen); end
        check_fb(DST_B, 5);

        $display("----");
        if (errors == 0) $display("NLC_ENGINE TB PASS (5 scenarios, done_stb=%0d)", done_seen);
        else             $display("NLC_ENGINE TB FAIL: %0d errors", errors);
        $finish;
    end
    initial begin #200000000 $display("NLC_ENGINE TB GLOBAL TIMEOUT st=%0d busy=%b", eng_state, busy); $finish; end
endmodule
