// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb__Syms.h"
#include "Vclean_disp_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__act(Vclean_disp_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vclean_disp_tb___024root___eval_triggers__act(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clean_disp_tb__DOT__clk_sys) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__clk_sys__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clean_disp_tb__DOT__clk_sys) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__clk_sys__0))) 
                                     | ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT__vb__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__clk_sys__0 
        = vlSelf->clean_disp_tb__DOT__clk_sys;
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19__0 
        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19;
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT__vb__0 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__vb;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclean_disp_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vclean_disp_tb___024root___nba_sequent__TOP__1(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[0U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[0U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[1U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[1U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[2U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[2U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[3U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[3U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[4U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[4U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[5U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[5U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[0U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[0U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[1U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[1U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[2U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[2U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[3U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[3U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[4U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[4U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[5U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[5U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vram_req_ready = (0x17d7aU 
                                                  > 
                                                  ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0.__PVT__dcfifo_component__DOT__cnt) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1.__PVT__dcfifo_component__DOT__cnt) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2.__PVT__dcfifo_component__DOT__cnt) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3.__PVT__dcfifo_component__DOT__cnt) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4.__PVT__dcfifo_component__DOT__cnt) 
                                                       + (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5.__PVT__dcfifo_component__DOT__cnt)))))));
    vlSelf->clean_disp_tb__DOT__vram_queue = (0xffffffU 
                                              & ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0.__PVT__dcfifo_component__DOT__cnt) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1.__PVT__dcfifo_component__DOT__cnt) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2.__PVT__dcfifo_component__DOT__cnt) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3.__PVT__dcfifo_component__DOT__cnt) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4.__PVT__dcfifo_component__DOT__cnt) 
                                                     + (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5.__PVT__dcfifo_component__DOT__cnt)))))));
}

void Vclean_disp_tb___024root___nba_sequent__TOP__0(Vclean_disp_tb___024root* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5__0(Vclean_disp_tb_fifo_vga* vlSelf);
void Vclean_disp_tb___024root___nba_comb__TOP__0(Vclean_disp_tb___024root* vlSelf);
void Vclean_disp_tb___024root___nba_sequent__TOP__2(Vclean_disp_tb___024root* vlSelf);

void Vclean_disp_tb___024root___eval_nba(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclean_disp_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4));
        Vclean_disp_tb_fifo_vga___nba_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5));
        Vclean_disp_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclean_disp_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclean_disp_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}
