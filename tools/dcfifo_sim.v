// dcfifo_sim.v — behavioral stand-in for the Altera `dcfifo` megafunction, for iverilog simulation
// of rtl/fifo_vga.v / rtl/vga.v (the only Altera primitive in the display stack). Both clocks are
// clk_sys in this design, so a single-clock model is faithful. lpm_showahead="OFF" (legacy rdreq):
// q updates on the cycle AFTER rdreq.
module dcfifo (
    input         aclr,
    input  [lpm_width-1:0] data,
    input         rdclk,
    input         rdreq,
    input         wrclk,
    input         wrreq,
    output reg [lpm_width-1:0] q,
    output        rdempty,
    output        wrfull,
    output [lpm_widthu-1:0] wrusedw,
    output        eccstatus,
    output        rdfull,
    output [lpm_widthu-1:0] rdusedw,
    output        wrempty
);
    parameter lpm_numwords = 16384;
    parameter lpm_width    = 8;
    parameter lpm_widthu   = 15;
    parameter lpm_showahead = "OFF";
    parameter add_usedw_msb_bit = "ON";
    parameter intended_device_family = "Cyclone V";
    parameter lpm_type = "dcfifo";
    parameter overflow_checking = "ON";
    parameter rdsync_delaypipe = 4;
    parameter read_aclr_synch = "OFF";
    parameter underflow_checking = "ON";
    parameter use_eab = "ON";
    parameter write_aclr_synch = "OFF";
    parameter wrsync_delaypipe = 4;

    reg [lpm_width-1:0] mem [0:lpm_numwords-1];
    reg [lpm_widthu-1:0] wptr = 0, rptr = 0, cnt = 0;

    assign rdempty  = (cnt == 0);
    assign wrfull   = (cnt == lpm_numwords[lpm_widthu-1:0]);
    assign wrusedw  = cnt;
    assign rdusedw  = cnt;
    assign wrempty  = rdempty;
    assign rdfull   = wrfull;
    assign eccstatus = 1'b0;

    always @(posedge wrclk or posedge aclr) begin
        if (aclr) begin
            wptr <= 0; rptr <= 0; cnt <= 0;
        end else begin
            case ({wrreq && !wrfull, rdreq && !rdempty})
                2'b10: begin mem[wptr] <= data; wptr <= wptr + 1'b1; cnt <= cnt + 1'b1; end
                2'b01: begin q <= mem[rptr]; rptr <= rptr + 1'b1; cnt <= cnt - 1'b1; end
                2'b11: begin mem[wptr] <= data; wptr <= wptr + 1'b1; q <= mem[rptr]; rptr <= rptr + 1'b1; end
                default: ;
            endcase
        end
    end
endmodule
