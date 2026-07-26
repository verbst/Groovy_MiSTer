// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb__Syms.h"
#include "Vclean_disp_tb___024root.h"

void Vclean_disp_tb___024root___ctor_var_reset(Vclean_disp_tb___024root* vlSelf);

Vclean_disp_tb___024root::Vclean_disp_tb___024root(Vclean_disp_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclean_disp_tb___024root___ctor_var_reset(this);
}

void Vclean_disp_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vclean_disp_tb___024root::~Vclean_disp_tb___024root() {
}
