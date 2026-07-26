// tb_nlc_ddr_gate.v — GATE-LEVEL testbench: drives the POST-FIT nlc_decode_ddr netlist
// (real Cyclone V primitives incl. M10K line buffers) with the SAME golden vectors +
// pathological backpressure as the RTL tb_nlc_ddr.v. Bit-exact vs golden => the synthesized
// decoder is correct on silicon; a mismatch => the silicon bug (M10K read-during-write etc.).
//
// The .vo module has its parameters baked in (MAXW=720, WBITS=4, NP=3 = the defaults = the real
// Groovy instance), so instantiate WITHOUT a #(...) override.
//
//   iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tbg \
//       sim/gate/tb_nlc_ddr_gate.v <netlist>.vo <quartus>/eda/sim_lib/cyclonev_atoms.v
//   vvp /tmp/tbg +stallN=50
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

    integer     wptr;
    reg  [4:0]  burst_left;
    wire        bursting   = (burst_left != 5'd0);
    wire        write_long = bursting && (wptr < NWORDS);
    wire [63:0] feed_word  = words[wptr];
    wire        write_ready, long_valid, done;
    wire [63:0] unc_long;
    integer stallN = 0;
    initial if (!$value$plusargs("stallN=%d", stallN)) stallN = 0;
    wire        out_ready = (stallN != 0) ? ((cyc % stallN) == 0) : (cyc[1:0] != 2'b00);

    // GATE-LEVEL DUT: post-fit netlist, params baked in — NO #(...) override, ports by name.
    nlc_decode_ddr dut (
        .clk(clk), .reset(reset),
        .cfg_w(VEC_W[15:0]), .cfg_h(VEC_H[15:0]), .cfg_near(VEC_NEAR[2:0]),
        .cfg_tile(VEC_TILE[6:0]), .cfg_color(VEC_COLOR[0]),
        .compressed_long(feed_word), .write_long(write_long), .write_ready(write_ready),
        .uncompressed_long(unc_long), .long_valid(long_valid), .out_ready(out_ready),
        .uncompressed_bytes(), .writed_bytes(), .readed_bytes(), .paused(), .done(done));

    always @(posedge clk) cyc <= cyc + 1;
    always @(posedge clk) begin
        if (reset) burst_left <= 5'd0;
        else if (!bursting && write_ready && wptr < NWORDS) burst_left <= 5'd16;
        else if (bursting)                                  burst_left <= burst_left - 1'b1;
    end
    always @(posedge clk) if (!reset && write_long) wptr <= wptr + 1;

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
        for (b = VEC_CSIZE; b < NWORDS*8; b = b + 1) bytes[b] = 8'd0;
        for (b = 0; b < NWORDS; b = b + 1)
            words[b] = { bytes[b*8+7], bytes[b*8+6], bytes[b*8+5], bytes[b*8+4],
                         bytes[b*8+3], bytes[b*8+2], bytes[b*8+1], bytes[b*8+0] };
        gi = 0; errors = 0; wptr = 0; cyc = 0;
        #23 reset = 0;
        wait (done);
        #20;
        $display("----");
        if (errors == 0 && gi == VEC_OUTN)
            $display("GATE TB PASS: %0d/%0d RGB bytes match golden (csize=%0d, POST-FIT netlist, stallN=%0d)", gi, VEC_OUTN, VEC_CSIZE, stallN);
        else
            $display("GATE TB FAIL: %0d mismatches, decoded %0d of %0d bytes (stallN=%0d)", errors, gi, VEC_OUTN, stallN);
        $finish;
    end
    initial begin #2000000000 $display("GATE TB TIMEOUT (decoded %0d/%0d)", gi, VEC_OUTN); $finish; end
endmodule
