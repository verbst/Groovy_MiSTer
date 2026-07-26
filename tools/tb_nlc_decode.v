// tb_nlc_decode.v — drive nlc_decode with golden vectors, compare RGB output.
//
//   tools/nlc_vectors --out /tmp/nlc_vec        # emit bits.hex, expected.hex, params.vh
//   iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tb tools/tb_nlc_decode.v rtl/nlc_decode.v
//   vvp /tmp/tb
`timescale 1ns/1ps

module tb;
`include "params.vh"     // VEC_W, VEC_H, VEC_NEAR, VEC_TILE, VEC_WBITS, VEC_COLOR, VEC_NP, VEC_CSIZE, VEC_OUTN

    reg clk = 0, reset = 1;
    always #5 clk = ~clk;

    reg [7:0] bytes    [0:2097151];   // up to ~2 MB (covers 640x480x3 frames)
    reg [7:0] expected [0:2097151];
    integer   gi, errors;

    integer     iptr;        // 32-bit: csize can exceed 65535 on real frames
    wire        feed_valid = (iptr < VEC_CSIZE);
    wire [7:0]  feed_data  = bytes[iptr];
    wire        in_ready;
    wire [7:0]  out_r, out_g, out_b;
    wire        out_valid, done;

    nlc_decode #(.MAXW(720), .WBITS(VEC_WBITS), .NP(VEC_NP)) dut (
        .clk(clk), .reset(reset), .stall(1'b0),
        .cfg_w(VEC_W[15:0]), .cfg_h(VEC_H[15:0]), .cfg_near(VEC_NEAR[2:0]),
        .cfg_tile(VEC_TILE[6:0]), .cfg_color(VEC_COLOR[0]),
        .in_data(feed_data), .in_valid(feed_valid), .in_ready(in_ready),
        .out_r(out_r), .out_g(out_g), .out_b(out_b), .out_valid(out_valid), .done(done));

    // advance the input byte pointer exactly when the decoder takes a byte
    always @(posedge clk)
        if (!reset && in_ready && feed_valid) iptr <= iptr + 1;

    // collect + compare decoded pixels (3 bytes each)
    always @(posedge clk)
        if (!reset && out_valid) begin
            if (out_r !== expected[gi] || out_g !== expected[gi+1] || out_b !== expected[gi+2]) begin
                errors = errors + 1;
                if (errors <= 12) $display("  MISMATCH px@%0d got %02x %02x %02x  exp %02x %02x %02x",
                                           gi/3, out_r, out_g, out_b, expected[gi], expected[gi+1], expected[gi+2]);
            end
            gi = gi + 3;
        end

    initial begin
        $readmemh("/tmp/nlc_vec/bits.hex",     bytes);
        $readmemh("/tmp/nlc_vec/expected.hex", expected);
        gi = 0; errors = 0; iptr = 0;
        #23 reset = 0;
        wait (done);
        #20;
        $display("----");
        if (errors == 0 && gi == VEC_OUTN)
            $display("TB PASS: %0d/%0d RGB bytes match golden (csize=%0d)", gi, VEC_OUTN, VEC_CSIZE);
        else
            $display("TB FAIL: %0d mismatches, decoded %0d of %0d bytes", errors, gi, VEC_OUTN);
        $finish;
    end

    initial begin #2000000000 $display("TB TIMEOUT (decoded %0d/%0d)", gi, VEC_OUTN); $finish; end
endmodule
