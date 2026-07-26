// tb_nlc_meas.v — THROUGHPUT measurement for nlc_decode_ddr (Step 0 of the
// /35 root-cause plan). Drives the decoder two ways and reports cycle counts:
//   MODE A (+cont): continuous feed (write whenever write_ready) + continuous
//                   drain (out_ready=1)  -> pure best-case core throughput.
//   MODE B (default): 16-word bursts gated by write_ready + throttled drain
//                   (out_ready 3-of-4)   -> realistic back-pressure.
// Reports: total cycles to `done`, output words delivered, and cycles the
// decoder spent PAUSED (starved for input) vs STALLED (output back-pressured).
//   iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tbm tools/tb_nlc_meas.v rtl/nlc_decode_ddr.v rtl/nlc_decode.v
//   vvp /tmp/tbm +cont
`timescale 1ns/1ps

module tb;
`include "params.vh"

    reg clk = 0, reset = 1;
    always #5 clk = ~clk;                // 10 ns = 100 MHz sim clock

    reg [7:0]  bytes [0:2097151];
    reg [63:0] words [0:262143];
    integer    i, b, cyc, outwords, paused_cyc, stall_cyc, done_cyc;
    localparam NWORDS = (VEC_CSIZE + 7) / 8;

    reg cont;                            // +cont -> continuous feed/drain
    integer wptr;
    reg [4:0] burst_left;
    wire bursting    = (burst_left != 5'd0);
    // feed: continuous = whenever there are words + room; burst = 16 at a time
    wire write_long  = (wptr < NWORDS) && (cont ? write_ready : bursting);
    wire [63:0] feed_word = words[wptr];
    wire write_ready, long_valid, done, paused;
    wire [63:0] unc_long;
    reg  [1:0] phase;
    wire out_ready = cont ? 1'b1 : (phase != 2'b00);   // throttle 3-of-4 in mode B

    nlc_decode_ddr #(.MAXW(720), .WBITS(VEC_WBITS), .NP(VEC_NP)) dut (
        .clk(clk), .reset(reset),
        .cfg_w(VEC_W[15:0]), .cfg_h(VEC_H[15:0]), .cfg_near(VEC_NEAR[2:0]),
        .cfg_tile(VEC_TILE[6:0]), .cfg_color(VEC_COLOR[0]), .cfg_rice(VEC_PACK == 2),
        .compressed_long(feed_word), .write_long(write_long), .write_ready(write_ready),
        .uncompressed_long(unc_long), .long_valid(long_valid), .out_ready(out_ready),
        .uncompressed_bytes(), .writed_bytes(), .readed_bytes(), .paused(paused), .done(done));

    always @(posedge clk) begin
        cyc   <= cyc + 1;
        phase <= phase + 1;
        if (!reset && !done) begin
            if (long_valid && out_ready) outwords   <= outwords + 1;
            if (paused)                  paused_cyc  <= paused_cyc + 1;   // starved for input
            if (long_valid && !out_ready) stall_cyc  <= stall_cyc + 1;   // output back-pressured
        end
        // burst control (mode B)
        if (reset) burst_left <= 5'd0;
        else if (!bursting && write_ready && wptr < NWORDS) burst_left <= 5'd16;
        else if (bursting)                                  burst_left <= burst_left - 1'b1;
        if (!reset && write_long) wptr <= wptr + 1;
    end

    initial begin
        $readmemh("/tmp/nlc_vec/bits.hex", bytes);
        for (b = VEC_CSIZE; b < NWORDS*8; b = b + 1) bytes[b] = 8'd0;
        for (b = 0; b < NWORDS; b = b + 1)
            words[b] = { bytes[b*8+7], bytes[b*8+6], bytes[b*8+5], bytes[b*8+4],
                         bytes[b*8+3], bytes[b*8+2], bytes[b*8+1], bytes[b*8+0] };
        cont = $test$plusargs("cont");
        cyc = 0; outwords = 0; paused_cyc = 0; stall_cyc = 0; wptr = 0; phase = 0;
        #23 reset = 0;
        @(posedge done) done_cyc = cyc;
        #20;
        $display("================ NLC THROUGHPUT (%s) ================", cont ? "CONTINUOUS feed+drain" : "BURST+throttle");
        $display("  resolution        : %0d x %0d  (%0d output pixels)", VEC_W, VEC_H, VEC_W*VEC_H);
        $display("  compressed bytes  : %0d  (%0d words)", VEC_CSIZE, NWORDS);
        $display("  cycles to done    : %0d", done_cyc);
        $display("  output words      : %0d  (= %0d RGB bytes)", outwords, outwords*8);
        $display("  cycles / pixel    : %0d.%02d", done_cyc/(VEC_W*VEC_H), (done_cyc*100/(VEC_W*VEC_H))%100);
        $display("  decoder PAUSED    : %0d cyc  (starved for input feed)", paused_cyc);
        $display("  output STALLED    : %0d cyc  (back-pressured)", stall_cyc);
        $display("  --- @82.77 MHz HW clock ---");
        $display("  frame time        : %0d us  (16670 us = one 60Hz frame)", (done_cyc*1000)/82770);
        $display("  640x480 estimate  : %0d us  (x4 pixels)", (done_cyc*1000*4)/82770);
        $finish;
    end
    initial begin #500000000 $display("MEAS TIMEOUT (out=%0d)", outwords); $finish; end
endmodule
