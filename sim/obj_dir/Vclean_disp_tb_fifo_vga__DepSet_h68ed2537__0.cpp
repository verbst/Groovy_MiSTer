// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb__Syms.h"
#include "Vclean_disp_tb_fifo_vga.h"

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [0U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [0U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                [0U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                    [0U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [0U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [0U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [0U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                [0U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                    [0U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [0U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [0U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [0U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                [0U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                    [0U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [0U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [0U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [0U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [1U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [1U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                [1U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                    [1U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [1U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [1U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [1U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                [1U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                    [1U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [1U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [1U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [1U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                [1U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                    [1U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [1U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [1U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [1U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [2U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [2U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                [2U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                    [2U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [2U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [2U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [2U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                [2U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                    [2U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [2U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [2U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [2U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                [2U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                    [2U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [2U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [2U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [2U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [3U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [3U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                [3U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                    [3U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [3U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [3U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [3U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                [3U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                    [3U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [3U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [3U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [3U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                [3U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                    [3U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [3U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [3U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [3U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [4U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [4U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                [4U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                    [4U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [4U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [4U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [4U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                [4U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                    [4U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [4U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [4U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [4U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                [4U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                    [4U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [4U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [4U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [4U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [5U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [5U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                [5U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in
                    [5U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [5U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [5U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [5U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                [5U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in
                    [5U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [5U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}

VL_INLINE_OPT void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5__0(Vclean_disp_tb_fifo_vga* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5__0\n"); );
    // Init
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__wptr;
    __Vdly__dcfifo_component__DOT__wptr = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v0;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v0;
    __Vdlyvval__dcfifo_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v0;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__dcfifo_component__DOT__mem__v1;
    __Vdlyvdim0__dcfifo_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dcfifo_component__DOT__mem__v1;
    __Vdlyvval__dcfifo_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dcfifo_component__DOT__mem__v1;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__rptr = 0;
    SData/*14:0*/ __Vdly__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__cnt = 0;
    // Body
    __Vdly__dcfifo_component__DOT__cnt = vlSelf->__PVT__dcfifo_component__DOT__cnt;
    __Vdly__dcfifo_component__DOT__rptr = vlSelf->__PVT__dcfifo_component__DOT__rptr;
    __Vdly__dcfifo_component__DOT__wptr = vlSelf->__PVT__dcfifo_component__DOT__wptr;
    __Vdlyvset__dcfifo_component__DOT__mem__v0 = 0U;
    __Vdlyvset__dcfifo_component__DOT__mem__v1 = 0U;
    if (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) {
        __Vdly__dcfifo_component__DOT__cnt = 0U;
        __Vdly__dcfifo_component__DOT__wptr = 0U;
        __Vdly__dcfifo_component__DOT__rptr = 0U;
    } else {
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (~ (IData)(vlSelf->wrfull))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)));
        } else if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [5U] & (~ (IData)(vlSelf->wrfull))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [5U] & (~ (IData)(vlSelf->rdempty)))))) {
            __Vdly__dcfifo_component__DOT__cnt = (0x7fffU 
                                                  & ((IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt) 
                                                     - (IData)(1U)));
        }
        if ((2U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            __Vdlyvval__dcfifo_component__DOT__mem__v0 
                = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                [5U];
            __Vdlyvset__dcfifo_component__DOT__mem__v0 = 1U;
            __Vdlyvdim0__dcfifo_component__DOT__mem__v0 
                = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
            __Vdly__dcfifo_component__DOT__wptr = (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
        } else if ((1U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                             [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                            << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                      [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                __Vdlyvval__dcfifo_component__DOT__mem__v1 
                    = vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in
                    [5U];
                __Vdlyvset__dcfifo_component__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dcfifo_component__DOT__mem__v1 
                    = (0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr));
                __Vdly__dcfifo_component__DOT__wptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__wptr)));
            }
        }
        if ((2U != (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                      [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                     << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                               [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
            if ((1U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                          [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                         << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                   [5U] & (0U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            } else if ((3U == (((vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_write
                                 [5U] & (0x4000U != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt))) 
                                << 1U) | (vlSymsp->TOP.clean_disp_tb__DOT__vga__DOT__fifo_rgb_req
                                          [5U] & (0U 
                                                  != (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt)))))) {
                vlSelf->__PVT__sub_wire0 = vlSelf->__PVT__dcfifo_component__DOT__mem
                    [(0x3fffU & (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr))];
                __Vdly__dcfifo_component__DOT__rptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dcfifo_component__DOT__rptr)));
            }
        }
    }
    vlSelf->__PVT__dcfifo_component__DOT__wptr = __Vdly__dcfifo_component__DOT__wptr;
    vlSelf->__PVT__dcfifo_component__DOT__rptr = __Vdly__dcfifo_component__DOT__rptr;
    if (__Vdlyvset__dcfifo_component__DOT__mem__v0) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v0] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v0;
    }
    if (__Vdlyvset__dcfifo_component__DOT__mem__v1) {
        vlSelf->__PVT__dcfifo_component__DOT__mem[__Vdlyvdim0__dcfifo_component__DOT__mem__v1] 
            = __Vdlyvval__dcfifo_component__DOT__mem__v1;
    }
    vlSelf->__PVT__dcfifo_component__DOT__cnt = __Vdly__dcfifo_component__DOT__cnt;
    vlSelf->rdempty = (0U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
    vlSelf->wrfull = (0x4000U == (IData)(vlSelf->__PVT__dcfifo_component__DOT__cnt));
}
