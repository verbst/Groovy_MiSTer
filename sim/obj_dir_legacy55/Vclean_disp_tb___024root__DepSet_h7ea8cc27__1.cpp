// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb___024root.h"

VL_INLINE_OPT void Vclean_disp_tb___024root___nba_comb__TOP__0(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->clean_disp_tb__DOT__nlc_eng_sel = ((2U 
                                                == (IData)(vlSelf->clean_disp_tb__DOT__nlc_disp_mode)) 
                                               & (2U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__codec_mode)));
    if (vlSelf->clean_disp_tb__DOT__nlc_eng_sel) {
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__write_long 
            = vlSelf->clean_disp_tb__DOT__eng_dec_wlong;
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset 
            = vlSelf->clean_disp_tb__DOT__eng_dec_reset;
    } else {
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__write_long 
            = vlSelf->clean_disp_tb__DOT__nlc_write_long;
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset 
            = vlSelf->clean_disp_tb__DOT__nlc_reset;
    }
}

VL_INLINE_OPT void Vclean_disp_tb___024root___nba_sequent__TOP__2(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13;
    }
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19 
        = ((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
           | (IData)(vlSelf->clean_disp_tb__DOT__vram_reset));
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[0U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[1U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[2U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[3U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[4U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[0U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[1U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[2U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[3U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[4U] = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38;
    }
    if (vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39] 
            = vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39;
    }
}

void Vclean_disp_tb___024root___timing_resume(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8bb44699__0.resume("@(posedge clean_disp_tb.clk_sys)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0d7c8ffc__0.resume("@(posedge clean_disp_tb.vga.vb)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vclean_disp_tb___024root___timing_commit(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8bb44699__0.commit("@(posedge clean_disp_tb.clk_sys)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0d7c8ffc__0.commit("@(posedge clean_disp_tb.vga.vb)");
    }
}

void Vclean_disp_tb___024root___eval_triggers__act(Vclean_disp_tb___024root* vlSelf);
void Vclean_disp_tb___024root___eval_act(Vclean_disp_tb___024root* vlSelf);

bool Vclean_disp_tb___024root___eval_phase__act(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vclean_disp_tb___024root___eval_triggers__act(vlSelf);
    Vclean_disp_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vclean_disp_tb___024root___timing_resume(vlSelf);
        Vclean_disp_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vclean_disp_tb___024root___eval_nba(Vclean_disp_tb___024root* vlSelf);

bool Vclean_disp_tb___024root___eval_phase__nba(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vclean_disp_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__nba(Vclean_disp_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__act(Vclean_disp_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vclean_disp_tb___024root___eval(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vclean_disp_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("clean_disp_tb.v", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vclean_disp_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("clean_disp_tb.v", 10, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vclean_disp_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vclean_disp_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vclean_disp_tb___024root___eval_debug_assertions(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
