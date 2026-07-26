// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb_fifo_vga.h"

VL_ATTR_COLD void Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0\n"); );
    // Body
    vlSelf->__PVT__dcfifo_component__DOT__wptr = 0U;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = 0U;
    vlSelf->__PVT__dcfifo_component__DOT__cnt = 0U;
}

VL_ATTR_COLD void Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0\n"); );
    // Body
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_ATTR_COLD void Vclean_disp_tb_fifo_vga___ctor_var_reset(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___ctor_var_reset\n"); );
    // Body
    vlSelf->aclr = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->rdclk = VL_RAND_RESET_I(1);
    vlSelf->rdreq = VL_RAND_RESET_I(1);
    vlSelf->wrclk = VL_RAND_RESET_I(1);
    vlSelf->wrreq = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(8);
    vlSelf->rdempty = VL_RAND_RESET_I(1);
    vlSelf->wrfull = VL_RAND_RESET_I(1);
    vlSelf->wrusedw = VL_RAND_RESET_I(15);
    vlSelf->__PVT__sub_wire0 = VL_RAND_RESET_I(8);
    vlSelf->aclr__out = VL_RAND_RESET_I(1);
    vlSelf->aclr__en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = VL_RAND_RESET_I(15);
    vlSelf->__PVT__dcfifo_component__DOT__rptr = VL_RAND_RESET_I(15);
    vlSelf->__PVT__dcfifo_component__DOT__cnt = VL_RAND_RESET_I(15);
}
