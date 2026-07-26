// tb_nlc_ddr.v — drive nlc_decode_ddr with golden vectors over the 64-bit
// word interface, with a toggling out_ready to exercise back-pressure/stall.
//   iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tb tools/tb_nlc_ddr.v rtl/nlc_decode_ddr.v rtl/nlc_decode.v
//   vvp /tmp/tb
`timescale 1ns/1ps

module tb;
`include "params.vh"

    reg clk = 0, reset = 1;
    always #5 clk = ~clk;

    reg [7:0]  bytes    [0:2097151];
    reg [7:0]  expected [0:2097151];
    reg [63:0] words    [0:262143];
    integer    gi, errors, i, b, cyc;
    localparam NWORDS = (VEC_CSIZE + 7) / 8;

    // Feed in 16-word BURSTS: check write_ready once, then push 16 back-to-back
    // (ignoring per-word write_ready) — exactly how Groovy.sv drives a DDR burst.
    // This exercises the FIFO filling toward full while the consumer back-pressures.
    integer     wptr;
    reg  [4:0]  burst_left;
    wire        bursting   = (burst_left != 5'd0);
    wire        write_long = bursting && (wptr < NWORDS);
    wire [63:0] feed_word  = words[wptr];
    wire        write_ready, long_valid, done;
    wire [63:0] unc_long;
    // out_ready backpressure. Default = 75% (busy 1-in-4). +stallN=K -> out_ready high only 1-in-K cycles
    // (stalls K-1 cycles between words) = PATHOLOGICAL constant deep-pipeline stall, mimicking the HW regime
    // where the FSM pulses out_ready only once per slow single-beat FB write.
    integer stallN = 0;
    initial if (!$value$plusargs("stallN=%d", stallN)) stallN = 0;
    wire        out_ready = (stallN != 0) ? ((cyc % stallN) == 0) : (cyc[1:0] != 2'b00);

    nlc_decode_ddr #(.MAXW(720), .WBITS(VEC_WBITS), .NP(VEC_NP)) dut (
        .clk(clk), .reset(reset),
        .cfg_w(VEC_W[15:0]), .cfg_h(VEC_H[15:0]), .cfg_near(VEC_NEAR[2:0]),
        .cfg_tile(VEC_TILE[6:0]), .cfg_color(VEC_COLOR[0]), .cfg_rice(VEC_PACK == 2),
        .compressed_long(feed_word), .write_long(write_long), .write_ready(write_ready),
        .uncompressed_long(unc_long), .long_valid(long_valid), .out_ready(out_ready),
        .uncompressed_bytes(), .writed_bytes(), .readed_bytes(), .paused(), .done(done));

    always @(posedge clk) cyc <= cyc + 1;
    always @(posedge clk) begin
        if (reset) burst_left <= 5'd0;
        else if (!bursting && write_ready && wptr < NWORDS) burst_left <= 5'd16;  // start a burst
        else if (bursting)                                  burst_left <= burst_left - 1'b1;
    end
    always @(posedge clk) if (!reset && write_long) wptr <= wptr + 1;   // push every burst cycle

    // collect: on a delivered word, unpack 8 little-endian bytes vs expected
    always @(posedge clk)
        if (!reset && long_valid && out_ready) begin
            for (i = 0; i < 8; i = i + 1) begin
                if (gi < VEC_OUTN) begin
                    if (unc_long[i*8 +: 8] !== expected[gi]) begin
                        errors = errors + 1;
                        if (errors <= 12) $display("  MISMATCH @%0d  got %02x  exp %02x", gi, unc_long[i*8 +: 8], expected[gi]);
                    end
                    gi = gi + 1;
                end
            end
        end

    initial begin
        $readmemh("/tmp/nlc_vec/bits.hex",     bytes);
        $readmemh("/tmp/nlc_vec/expected.hex", expected);
        for (b = VEC_CSIZE; b < NWORDS*8; b = b + 1) bytes[b] = 8'd0;   // pad last word
        for (b = 0; b < NWORDS; b = b + 1)
            words[b] = { bytes[b*8+7], bytes[b*8+6], bytes[b*8+5], bytes[b*8+4],
                         bytes[b*8+3], bytes[b*8+2], bytes[b*8+1], bytes[b*8+0] };
        gi = 0; errors = 0; wptr = 0; cyc = 0;
        #23 reset = 0;
        wait (done);
        #20;
        $display("----");
        if (errors == 0 && gi == VEC_OUTN)
            $display("DDR TB PASS: %0d/%0d RGB bytes match golden (csize=%0d, with back-pressure)", gi, VEC_OUTN, VEC_CSIZE);
        else
            $display("DDR TB FAIL: %0d mismatches, decoded %0d of %0d bytes", errors, gi, VEC_OUTN);
        $finish;
    end
    initial begin #2000000000 $display("DDR TB TIMEOUT (decoded %0d/%0d)", gi, VEC_OUTN); $finish; end
endmodule
