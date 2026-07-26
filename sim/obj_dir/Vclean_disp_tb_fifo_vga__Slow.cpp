// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb__Syms.h"
#include "Vclean_disp_tb_fifo_vga.h"

void Vclean_disp_tb_fifo_vga___ctor_var_reset(Vclean_disp_tb_fifo_vga* vlSelf);

Vclean_disp_tb_fifo_vga::Vclean_disp_tb_fifo_vga(Vclean_disp_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclean_disp_tb_fifo_vga___ctor_var_reset(this);
}

void Vclean_disp_tb_fifo_vga::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vclean_disp_tb_fifo_vga::~Vclean_disp_tb_fifo_vga() {
}
