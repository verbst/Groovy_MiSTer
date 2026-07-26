// sim stubs for the vsync-overlay OSD chain (VHDL vga_overlay + binary_to_bcd used by vga.v) —
// display-content irrelevant for the TB (ena is driven by vsync_overlay=0); inert outputs.
module vga_overlay #(parameter COLS=3, OFFSETX=16, OFFSETY=16, RGB_FRONT=24'h0000FF) (
    input clk, input ce, input ena,
    input [11:0] i_pixel_out_x, input [11:0] i_pixel_out_y,
    output reg [23:0] o_pixel_out_data, output reg o_pixel_out_ena,
    input [COLS*8-1:0] textstring);
    always @(posedge clk) begin o_pixel_out_data <= 24'd0; o_pixel_out_ena <= 1'b0; end
endmodule
