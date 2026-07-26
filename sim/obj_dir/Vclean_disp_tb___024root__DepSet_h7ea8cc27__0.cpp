// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb___024root.h"

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_initial__TOP(Vclean_disp_tb___024root* vlSelf);
VlCoroutine Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__0(Vclean_disp_tb___024root* vlSelf);
VlCoroutine Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__1(Vclean_disp_tb___024root* vlSelf);
VlCoroutine Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__2(Vclean_disp_tb___024root* vlSelf);

void Vclean_disp_tb___024root___eval_initial(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_initial\n"); );
    // Body
    Vclean_disp_tb___024root___eval_initial__TOP(vlSelf);
    Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__clk_sys__0 
        = vlSelf->clean_disp_tb__DOT__clk_sys;
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19__0 
        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19;
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT__vb__0 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__vb;
}

extern const VlWide<8>/*255:0*/ Vclean_disp_tb__ConstPool__CONST_h8974ac84_0;
extern const VlWide<8>/*255:0*/ Vclean_disp_tb__ConstPool__CONST_hd529e189_0;

VL_INLINE_OPT VlCoroutine Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__0(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    QData/*63:0*/ clean_disp_tb__DOT__do_switchres__Vstatic__w1;
    clean_disp_tb__DOT__do_switchres__Vstatic__w1 = 0;
    QData/*63:0*/ clean_disp_tb__DOT__do_switchres__Vstatic__w2;
    clean_disp_tb__DOT__do_switchres__Vstatic__w2 = 0;
    QData/*63:0*/ clean_disp_tb__DOT__do_switchres__Vstatic__w3;
    clean_disp_tb__DOT__do_switchres__Vstatic__w3 = 0;
    IData/*31:0*/ clean_disp_tb__DOT__feed_raw__Vstatic__nb;
    clean_disp_tb__DOT__feed_raw__Vstatic__nb = 0;
    IData/*31:0*/ clean_disp_tb__DOT__fi;
    clean_disp_tb__DOT__fi = 0;
    IData/*31:0*/ clean_disp_tb__DOT__framep;
    clean_disp_tb__DOT__framep = 0;
    IData/*23:0*/ clean_disp_tb__DOT__frnum;
    clean_disp_tb__DOT__frnum = 0;
    IData/*31:0*/ clean_disp_tb__DOT__cl_emul_start;
    clean_disp_tb__DOT__cl_emul_start = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat0;
    clean_disp_tb__DOT____Vrepeat0 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat1;
    clean_disp_tb__DOT____Vrepeat1 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat2;
    clean_disp_tb__DOT____Vrepeat2 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat3;
    clean_disp_tb__DOT____Vrepeat3 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat4;
    clean_disp_tb__DOT____Vrepeat4 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat6;
    clean_disp_tb__DOT____Vrepeat6 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat7;
    clean_disp_tb__DOT____Vrepeat7 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat8;
    clean_disp_tb__DOT____Vrepeat8 = 0;
    IData/*31:0*/ clean_disp_tb__DOT____Vrepeat9;
    clean_disp_tb__DOT____Vrepeat9 = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__5__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__5__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__5__w;
    __Vtask_clean_disp_tb__DOT__write_word__5__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__6__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__6__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__6__w;
    __Vtask_clean_disp_tb__DOT__write_word__6__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__7__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__7__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__7__w;
    __Vtask_clean_disp_tb__DOT__write_word__7__w = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__feed_raw__8__fr;
    __Vtask_clean_disp_tb__DOT__feed_raw__8__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__put_byte__9__ba;
    __Vtask_clean_disp_tb__DOT__put_byte__9__ba = 0;
    CData/*7:0*/ __Vtask_clean_disp_tb__DOT__put_byte__9__d;
    __Vtask_clean_disp_tb__DOT__put_byte__9__d = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__blit_header__10__fr;
    __Vtask_clean_disp_tb__DOT__blit_header__10__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__11__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__11__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__11__w;
    __Vtask_clean_disp_tb__DOT__write_word__11__w = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__feed_lz4__12__fr;
    __Vtask_clean_disp_tb__DOT__feed_lz4__12__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__13__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__13__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__13__w;
    __Vtask_clean_disp_tb__DOT__write_word__13__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__14__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__14__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__14__w;
    __Vtask_clean_disp_tb__DOT__write_word__14__w = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__feed_nlc__15__fr;
    __Vtask_clean_disp_tb__DOT__feed_nlc__15__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__16__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__16__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__16__w;
    __Vtask_clean_disp_tb__DOT__write_word__16__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__17__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__17__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__17__w;
    __Vtask_clean_disp_tb__DOT__write_word__17__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__18__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__18__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__18__w;
    __Vtask_clean_disp_tb__DOT__write_word__18__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__19__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__19__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__19__w;
    __Vtask_clean_disp_tb__DOT__write_word__19__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__20__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__20__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__20__w;
    __Vtask_clean_disp_tb__DOT__write_word__20__w = 0;
    VlWide<8>/*255:0*/ __Vtask_clean_disp_tb__DOT__dump_fb__21__nm;
    VL_ZERO_W(256, __Vtask_clean_disp_tb__DOT__dump_fb__21__nm);
    IData/*31:0*/ __Vtask_clean_disp_tb__DOT__wait_sync_api__22__sent_frame;
    __Vtask_clean_disp_tb__DOT__wait_sync_api__22__sent_frame = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__feed_raw__23__fr;
    __Vtask_clean_disp_tb__DOT__feed_raw__23__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__put_byte__24__ba;
    __Vtask_clean_disp_tb__DOT__put_byte__24__ba = 0;
    CData/*7:0*/ __Vtask_clean_disp_tb__DOT__put_byte__24__d;
    __Vtask_clean_disp_tb__DOT__put_byte__24__d = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__blit_header__25__fr;
    __Vtask_clean_disp_tb__DOT__blit_header__25__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__26__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__26__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__26__w;
    __Vtask_clean_disp_tb__DOT__write_word__26__w = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__feed_lz4__27__fr;
    __Vtask_clean_disp_tb__DOT__feed_lz4__27__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__28__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__28__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__28__w;
    __Vtask_clean_disp_tb__DOT__write_word__28__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__29__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__29__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__29__w;
    __Vtask_clean_disp_tb__DOT__write_word__29__w = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__feed_nlc__30__fr;
    __Vtask_clean_disp_tb__DOT__feed_nlc__30__fr = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__31__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__31__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__31__w;
    __Vtask_clean_disp_tb__DOT__write_word__31__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__32__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__32__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__32__w;
    __Vtask_clean_disp_tb__DOT__write_word__32__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__33__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__33__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__33__w;
    __Vtask_clean_disp_tb__DOT__write_word__33__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__34__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__34__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__34__w;
    __Vtask_clean_disp_tb__DOT__write_word__34__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__35__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__35__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__35__w;
    __Vtask_clean_disp_tb__DOT__write_word__35__w = 0;
    IData/*27:0*/ __Vtask_clean_disp_tb__DOT__write_word__36__byte_addr;
    __Vtask_clean_disp_tb__DOT__write_word__36__byte_addr = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__write_word__36__w;
    __Vtask_clean_disp_tb__DOT__write_word__36__w = 0;
    VlWide<8>/*255:0*/ __Vtask_clean_disp_tb__DOT__dump_fb__37__nm;
    VL_ZERO_W(256, __Vtask_clean_disp_tb__DOT__dump_fb__37__nm);
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_29;
    // Body
    clean_disp_tb__DOT__framep = ((0U != vlSelf->clean_disp_tb__DOT__CADENCE)
                                   ? vlSelf->clean_disp_tb__DOT__CADENCE
                                   : ((IData)(0x1388U) 
                                      + VL_MULS_III(32, (IData)(6U), 
                                                    VL_MULS_III(32, 
                                                                ((IData)(0x28U) 
                                                                 + vlSelf->clean_disp_tb__DOT__W), 
                                                                ((IData)(0x1eU) 
                                                                 + vlSelf->clean_disp_tb__DOT__H)))));
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       939);
    VL_WRITEF("CLEAN-DISP: codec=%0d W=%0d H=%0d interlace=%0d frames=%0d framep=%0d\nDDRPARAMS: READ_LAT=%0d WR_OVERHEAD=%0d WR_BEAT=%0d (single-beat write = %0d cyc; bursts declared by ddr_burst)\n",
              32,vlSelf->clean_disp_tb__DOT__CODEC,
              32,vlSelf->clean_disp_tb__DOT__W,32,vlSelf->clean_disp_tb__DOT__H,
              32,vlSelf->clean_disp_tb__DOT__ILACE,
              32,vlSelf->clean_disp_tb__DOT__N_FRAMES,
              32,clean_disp_tb__DOT__framep,32,vlSelf->clean_disp_tb__DOT__READ_LAT,
              32,vlSelf->clean_disp_tb__DOT__WR_OVERHEAD,
              32,vlSelf->clean_disp_tb__DOT__WR_BEAT,
              32,(vlSelf->clean_disp_tb__DOT__WR_OVERHEAD 
                  + vlSelf->clean_disp_tb__DOT__WR_BEAT));
    vlSelf->clean_disp_tb__DOT__codec_mode = (3U & vlSelf->clean_disp_tb__DOT__CODEC);
    clean_disp_tb__DOT__do_switchres__Vstatic__w1 = 0ULL;
    clean_disp_tb__DOT__do_switchres__Vstatic__w1 = 
        ((0xffffffff00000000ULL & clean_disp_tb__DOT__do_switchres__Vstatic__w1) 
         | (IData)((IData)(((vlSelf->clean_disp_tb__DOT__HSv 
                             << 0x18U) | ((0xff0000U 
                                           & (vlSelf->clean_disp_tb__DOT__HFP 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & vlSelf->clean_disp_tb__DOT__W))))));
    clean_disp_tb__DOT__do_switchres__Vstatic__w1 = 
        ((0xffffffffULL & clean_disp_tb__DOT__do_switchres__Vstatic__w1) 
         | ((QData)((IData)(((vlSelf->clean_disp_tb__DOT__VFP 
                              << 0x18U) | ((0xffff00U 
                                            & (vlSelf->clean_disp_tb__DOT__H 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSelf->clean_disp_tb__DOT__HBP))))) 
            << 0x20U));
    clean_disp_tb__DOT__do_switchres__Vstatic__w2 = 0ULL;
    clean_disp_tb__DOT__do_switchres__Vstatic__w2 = 
        ((0xffffffffff000000ULL & clean_disp_tb__DOT__do_switchres__Vstatic__w2) 
         | (IData)((IData)((0x40000U | ((0xff00U & 
                                         (vlSelf->clean_disp_tb__DOT__VBP 
                                          << 8U)) | 
                                        (0xffU & vlSelf->clean_disp_tb__DOT__VSv))))));
    clean_disp_tb__DOT__do_switchres__Vstatic__w2 = 
        (0x20304000000ULL | (0xffff000000ffffffULL 
                             & clean_disp_tb__DOT__do_switchres__Vstatic__w2));
    clean_disp_tb__DOT__do_switchres__Vstatic__w3 = 0ULL;
    clean_disp_tb__DOT__do_switchres__Vstatic__w3 = 
        ((0xffffffff0000ffffULL & clean_disp_tb__DOT__do_switchres__Vstatic__w3) 
         | ((QData)((IData)(((0xff00U & (vlSelf->clean_disp_tb__DOT__ILACE 
                                         << 8U)) | 
                             (0xffU & vlSelf->clean_disp_tb__DOT__CEPIX)))) 
            << 0x10U));
    __Vtask_clean_disp_tb__DOT__write_word__5__w = clean_disp_tb__DOT__do_switchres__Vstatic__w1;
    __Vtask_clean_disp_tb__DOT__write_word__5__byte_addr = 8U;
    vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU & (__Vtask_clean_disp_tb__DOT__write_word__5__byte_addr 
                                                  >> 3U))] 
        = __Vtask_clean_disp_tb__DOT__write_word__5__w;
    __Vtask_clean_disp_tb__DOT__write_word__6__w = clean_disp_tb__DOT__do_switchres__Vstatic__w2;
    __Vtask_clean_disp_tb__DOT__write_word__6__byte_addr = 0x10U;
    vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU & (__Vtask_clean_disp_tb__DOT__write_word__6__byte_addr 
                                                  >> 3U))] 
        = __Vtask_clean_disp_tb__DOT__write_word__6__w;
    __Vtask_clean_disp_tb__DOT__write_word__7__w = clean_disp_tb__DOT__do_switchres__Vstatic__w3;
    __Vtask_clean_disp_tb__DOT__write_word__7__byte_addr = 0x18U;
    vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU & (__Vtask_clean_disp_tb__DOT__write_word__7__byte_addr 
                                                  >> 3U))] 
        = __Vtask_clean_disp_tb__DOT__write_word__7__w;
    vlSelf->clean_disp_tb__DOT__switchres_frame = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_switchres_req = 1U;
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       562);
    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                       "clean_disp_tb.v", 
                                                       562);
    vlSelf->clean_disp_tb__DOT__cmd_switchres_req = 0U;
    while (vlSelf->clean_disp_tb__DOT__cmd_switchres) {
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           563);
    }
    VL_WRITEF("[%0d] switchres applied PoC_H=%0# PoC_V=%0#\n",
              32,vlSelf->clean_disp_tb__DOT__cycles,
              16,(IData)(vlSelf->clean_disp_tb__DOT__PoC_H),
              16,vlSelf->clean_disp_tb__DOT__PoC_V);
    clean_disp_tb__DOT____Vrepeat6 = 0x7d0U;
    while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat6)) {
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           945);
        clean_disp_tb__DOT____Vrepeat6 = (clean_disp_tb__DOT____Vrepeat6 
                                          - (IData)(1U));
    }
    clean_disp_tb__DOT__frnum = 1U;
    if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__CODEC))) {
        __Vtask_clean_disp_tb__DOT__feed_raw__8__fr = 1U;
        vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__idx 
            = VL_MODDIV_III(32, (__Vtask_clean_disp_tb__DOT__feed_raw__8__fr 
                                 - (IData)(1U)), vlSelf->clean_disp_tb__DOT__NMARK);
        VL_SFORMAT_X(512,vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__nm
                     ,"%0s/marker_%03d.raw",2048,vlSelf->clean_disp_tb__DOT__MDIR.data(),
                     32,vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__idx);
        vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd 
            = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(16, vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__nm)
                          , std::string{"rb"});
        ;
        if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd))) {
            VL_WRITEF("FATAL: cannot open %0s\n",512,
                      vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__nm.data());
            VL_FINISH_MT("clean_disp_tb.v", 577, "");
        }
        clean_disp_tb__DOT__feed_raw__Vstatic__nb = VL_FREAD_I(8
                                                               ,0
                                                               ,1036800
                                                               , &(vlSelf->clean_disp_tb__DOT__framebuf)
                                                               , vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd
                                                               , 0
                                                               , 1036800);
        VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd); vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i, 
                          VL_MULS_III(32, (IData)(3U), 
                                      VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__W, vlSelf->clean_disp_tb__DOT__H)))) {
            __Vtask_clean_disp_tb__DOT__put_byte__9__d 
                = ((0xfd1ffU >= (0xfffffU & vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i))
                    ? vlSelf->clean_disp_tb__DOT__framebuf
                   [(0xfffffU & vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i)]
                    : 0U);
            __Vtask_clean_disp_tb__DOT__put_byte__9__ba 
                = (0xfffffffU & ((IData)(0xf8U) + vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i));
            vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w 
                = vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                   & (__Vtask_clean_disp_tb__DOT__put_byte__9__ba 
                                                      >> 3U))];
            vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__sh 
                = VL_SHIFTL_III(32,32,32, (7U & __Vtask_clean_disp_tb__DOT__put_byte__9__ba), 3U);
            vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w 
                = (((~ (0xffULL << (0x3fU & vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__sh))) 
                    & vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w) 
                   | ((QData)((IData)(__Vtask_clean_disp_tb__DOT__put_byte__9__d)) 
                      << (0x3fU & vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__sh)));
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__put_byte__9__ba 
                                                >> 3U))] 
                = vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w;
            vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i 
                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i);
        }
        __Vtask_clean_disp_tb__DOT__blit_header__10__fr 
            = __Vtask_clean_disp_tb__DOT__feed_raw__8__fr;
        vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr = 0ULL;
        vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr 
            = ((0xffff000000000000ULL & vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr) 
               | (((QData)((IData)((0xffffffU & VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__W, vlSelf->clean_disp_tb__DOT__H)))) 
                   << 0x18U) | (QData)((IData)(__Vtask_clean_disp_tb__DOT__blit_header__10__fr))));
        vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr));
        __Vtask_clean_disp_tb__DOT__write_word__11__w 
            = vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr;
        __Vtask_clean_disp_tb__DOT__write_word__11__byte_addr = 0U;
        vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                         & (__Vtask_clean_disp_tb__DOT__write_word__11__byte_addr 
                                            >> 3U))] 
            = __Vtask_clean_disp_tb__DOT__write_word__11__w;
        vlSelf->clean_disp_tb__DOT__cmd_blit_req = 1U;
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           591);
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           591);
        vlSelf->clean_disp_tb__DOT__cmd_blit_req = 0U;
        VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",24,__Vtask_clean_disp_tb__DOT__blit_header__10__fr,
                  32,vlSelf->clean_disp_tb__DOT__cycles);
    } else if (VL_UNLIKELY((1U == vlSelf->clean_disp_tb__DOT__CODEC))) {
        __Vtask_clean_disp_tb__DOT__feed_lz4__12__fr = 1U;
        vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__idx 
            = VL_MODDIV_III(32, (__Vtask_clean_disp_tb__DOT__feed_lz4__12__fr 
                                 - (IData)(1U)), vlSelf->clean_disp_tb__DOT__NMARK);
        VL_SFORMAT_X(512,vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nm
                     ,"%0s/marker_%03d.lz4",2048,vlSelf->clean_disp_tb__DOT__MDIR.data(),
                     32,vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__idx);
        vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd 
            = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(16, vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nm)
                          , std::string{"rb"});
        ;
        if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd))) {
            VL_WRITEF("FATAL: cannot open %0s\n",512,
                      vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nm.data());
            VL_FINISH_MT("clean_disp_tb.v", 610, "");
        }
        vlSelf->clean_disp_tb__DOT__lz4cs = VL_FREAD_I(8
                                                       ,0
                                                       ,4194304
                                                       , &(vlSelf->clean_disp_tb__DOT__lz4buf)
                                                       , vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd
                                                       , 0
                                                       , 4194304);
        VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd); vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__base = 0x3320f8U;
        vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i, 
                          ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4cs))) {
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__w 
                = (((QData)((IData)(((vlSelf->clean_disp_tb__DOT__lz4buf
                                      [(0x3fffffU & 
                                        ((IData)(7U) 
                                         + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                      << 0x18U) | (
                                                   (vlSelf->clean_disp_tb__DOT__lz4buf
                                                    [
                                                    (0x3fffffU 
                                                     & ((IData)(6U) 
                                                        + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                       [
                                                       (0x3fffffU 
                                                        & ((IData)(5U) 
                                                           + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                       << 8U) 
                                                      | vlSelf->clean_disp_tb__DOT__lz4buf
                                                      [
                                                      (0x3fffffU 
                                                       & ((IData)(4U) 
                                                          + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))]))))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->clean_disp_tb__DOT__lz4buf
                                                  [
                                                  (0x3fffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                  << 0x18U) 
                                                 | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                     [
                                                     (0x3fffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                        [
                                                        (0x3fffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                        << 8U) 
                                                       | vlSelf->clean_disp_tb__DOT__lz4buf
                                                       [
                                                       (0x3fffffU 
                                                        & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i)]))))));
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & ((vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__base 
                                                 + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i) 
                                                >> 3U))] 
                = vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__w;
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i 
                = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i);
        }
        vlSelf->clean_disp_tb__DOT__lz4_size = vlSelf->clean_disp_tb__DOT__lz4cs;
        vlSelf->clean_disp_tb__DOT__lz4_ABCD = 0U;
        vlSelf->clean_disp_tb__DOT__lz4_field = 0U;
        vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr = 0ULL;
        vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr 
            = ((0xffffffffff000000ULL & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr) 
               | (IData)((IData)(__Vtask_clean_disp_tb__DOT__feed_lz4__12__fr)));
        __Vtask_clean_disp_tb__DOT__write_word__13__w 
            = vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr;
        __Vtask_clean_disp_tb__DOT__write_word__13__byte_addr = 0x20U;
        vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                         & (__Vtask_clean_disp_tb__DOT__write_word__13__byte_addr 
                                            >> 3U))] 
            = __Vtask_clean_disp_tb__DOT__write_word__13__w;
        vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 1U;
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           619);
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           619);
        vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 0U;
        VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",24,__Vtask_clean_disp_tb__DOT__feed_lz4__12__fr,
                  32,vlSelf->clean_disp_tb__DOT__cycles);
        vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent = 0U;
        vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit = 0U;
        while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent, vlSelf->clean_disp_tb__DOT__lz4cs)) {
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent 
                = (VL_GTS_III(32, (vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent 
                                   + vlSelf->clean_disp_tb__DOT__CHUNK), vlSelf->clean_disp_tb__DOT__lz4cs)
                    ? vlSelf->clean_disp_tb__DOT__lz4cs
                    : (vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent 
                       + vlSelf->clean_disp_tb__DOT__CHUNK));
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit 
                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit);
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr = 0ULL;
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr 
                = (((QData)((IData)((0xffffU & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit))) 
                    << 0x30U) | (((QData)((IData)((0xffffffU 
                                                   & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent))) 
                                  << 0x18U) | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_lz4__12__fr))));
            __Vtask_clean_disp_tb__DOT__write_word__14__w 
                = vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr;
            __Vtask_clean_disp_tb__DOT__write_word__14__byte_addr = 0x20U;
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__write_word__14__byte_addr 
                                                >> 3U))] 
                = __Vtask_clean_disp_tb__DOT__write_word__14__w;
            clean_disp_tb__DOT____Vrepeat0 = vlSelf->clean_disp_tb__DOT__CHUNKGAP;
            while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat0)) {
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   627);
                clean_disp_tb__DOT____Vrepeat0 = (clean_disp_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
            }
        }
    } else {
        __Vtask_clean_disp_tb__DOT__feed_nlc__15__fr = 1U;
        if (((IData)(vlSelf->clean_disp_tb__DOT__WMRACE) 
             & (IData)(vlSelf->clean_disp_tb__DOT__wmrace_pend))) {
            __Vtask_clean_disp_tb__DOT__write_word__16__w 
                = vlSelf->clean_disp_tb__DOT__wmrace_hdr;
            __Vtask_clean_disp_tb__DOT__write_word__16__byte_addr = 0x20U;
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__write_word__16__byte_addr 
                                                >> 3U))] 
                = __Vtask_clean_disp_tb__DOT__write_word__16__w;
            vlSelf->clean_disp_tb__DOT__wmrace_pend = 0U;
            clean_disp_tb__DOT____Vrepeat1 = vlSelf->clean_disp_tb__DOT__WMRACEG;
            while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat1)) {
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   643);
                clean_disp_tb__DOT____Vrepeat1 = (clean_disp_tb__DOT____Vrepeat1 
                                                  - (IData)(1U));
            }
        }
        vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__idx 
            = VL_MODDIV_III(32, (__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr 
                                 - (IData)(1U)), vlSelf->clean_disp_tb__DOT__NMARK);
        VL_SFORMAT_X(512,vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nm
                     ,"%0s/marker_%03d.nlc",2048,vlSelf->clean_disp_tb__DOT__MDIR.data(),
                     32,vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__idx);
        vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd 
            = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(16, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nm)
                          , std::string{"rb"});
        ;
        if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd))) {
            VL_WRITEF("FATAL: cannot open %0s\n",512,
                      vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nm.data());
            VL_FINISH_MT("clean_disp_tb.v", 648, "");
        }
        vlSelf->clean_disp_tb__DOT__lz4cs = VL_FREAD_I(8
                                                       ,0
                                                       ,4194304
                                                       , &(vlSelf->clean_disp_tb__DOT__lz4buf)
                                                       , vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd
                                                       , 0
                                                       , 4194304);
        VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd); vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone 
            = (3U & (__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr 
                     - (IData)(1U)));
        vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__base 
            = ((0U == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone)
                ? 0x3320f8U : ((1U == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone)
                                ? 0x4c70f8U : ((2U 
                                                == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone)
                                                ? 0x65c0f8U
                                                : 0x7f10f8U)));
        vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i, 
                          ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4cs))) {
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__w 
                = (((QData)((IData)(((vlSelf->clean_disp_tb__DOT__lz4buf
                                      [(0x3fffffU & 
                                        ((IData)(7U) 
                                         + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                      << 0x18U) | (
                                                   (vlSelf->clean_disp_tb__DOT__lz4buf
                                                    [
                                                    (0x3fffffU 
                                                     & ((IData)(6U) 
                                                        + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                       [
                                                       (0x3fffffU 
                                                        & ((IData)(5U) 
                                                           + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                       << 8U) 
                                                      | vlSelf->clean_disp_tb__DOT__lz4buf
                                                      [
                                                      (0x3fffffU 
                                                       & ((IData)(4U) 
                                                          + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))]))))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->clean_disp_tb__DOT__lz4buf
                                                  [
                                                  (0x3fffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                  << 0x18U) 
                                                 | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                     [
                                                     (0x3fffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                        [
                                                        (0x3fffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                        << 8U) 
                                                       | vlSelf->clean_disp_tb__DOT__lz4buf
                                                       [
                                                       (0x3fffffU 
                                                        & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i)]))))));
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & ((vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__base 
                                                 + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i) 
                                                >> 3U))] 
                = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__w;
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i 
                = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i);
        }
        vlSelf->clean_disp_tb__DOT__lz4_size = vlSelf->clean_disp_tb__DOT__lz4cs;
        vlSelf->clean_disp_tb__DOT__lz4_ABCD = (3U 
                                                & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone);
        vlSelf->clean_disp_tb__DOT__lz4_field = 0U;
        __Vtemp_9[0U] = 0x6c617465U;
        __Vtemp_9[1U] = 0x6f70745fU;
        __Vtemp_9[2U] = 0x6164U;
        if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_9))) {
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
                = (0xffff000000000000ULL | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->clean_disp_tb__DOT__lz4cs))) 
                                             << 0x18U) 
                                            | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr))));
            __Vtask_clean_disp_tb__DOT__write_word__17__w 
                = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
            __Vtask_clean_disp_tb__DOT__write_word__17__byte_addr = 0x20U;
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__write_word__17__byte_addr 
                                                >> 3U))] 
                = __Vtask_clean_disp_tb__DOT__write_word__17__w;
            vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 1U;
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               664);
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               664);
            vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 0U;
            VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",24,__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr,
                      32,vlSelf->clean_disp_tb__DOT__cycles);
            clean_disp_tb__DOT____Vrepeat2 = vlSelf->clean_disp_tb__DOT__CHUNKGAP;
            while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat2)) {
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   666);
                clean_disp_tb__DOT____Vrepeat2 = (clean_disp_tb__DOT____Vrepeat2 
                                                  - (IData)(1U));
            }
        } else {
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
                = ((0xffffffffff000000ULL & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr) 
                   | (IData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr)));
            __Vtask_clean_disp_tb__DOT__write_word__18__w 
                = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
            __Vtask_clean_disp_tb__DOT__write_word__18__byte_addr = 0x20U;
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__write_word__18__byte_addr 
                                                >> 3U))] 
                = __Vtask_clean_disp_tb__DOT__write_word__18__w;
            vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 1U;
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               669);
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               669);
            vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 0U;
            VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",24,__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr,
                      32,vlSelf->clean_disp_tb__DOT__cycles);
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent = 0U;
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit = 0U;
            while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent, vlSelf->clean_disp_tb__DOT__lz4cs)) {
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent 
                    = (VL_GTS_III(32, (vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent 
                                       + vlSelf->clean_disp_tb__DOT__CHUNK), vlSelf->clean_disp_tb__DOT__lz4cs)
                        ? vlSelf->clean_disp_tb__DOT__lz4cs
                        : (vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent 
                           + vlSelf->clean_disp_tb__DOT__CHUNK));
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit);
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
                    = (((QData)((IData)((0xffffU & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit))) 
                        << 0x30U) | (((QData)((IData)(
                                                      (0xffffffU 
                                                       & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent))) 
                                      << 0x18U) | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr))));
                if ((1U & (~ (((__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr 
                                == vlSelf->clean_disp_tb__DOT__WMDROP) 
                               | (IData)(vlSelf->clean_disp_tb__DOT__WMRACE)) 
                              & VL_GTES_III(32, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent, vlSelf->clean_disp_tb__DOT__lz4cs))))) {
                    __Vtask_clean_disp_tb__DOT__write_word__19__w 
                        = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
                    __Vtask_clean_disp_tb__DOT__write_word__19__byte_addr = 0x20U;
                    vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                     & (__Vtask_clean_disp_tb__DOT__write_word__19__byte_addr 
                                                        >> 3U))] 
                        = __Vtask_clean_disp_tb__DOT__write_word__19__w;
                }
                clean_disp_tb__DOT____Vrepeat3 = vlSelf->clean_disp_tb__DOT__CHUNKGAP;
                while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat3)) {
                    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                                       "clean_disp_tb.v", 
                                                                       680);
                    clean_disp_tb__DOT____Vrepeat3 
                        = (clean_disp_tb__DOT____Vrepeat3 
                           - (IData)(1U));
                }
            }
        }
        vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
        vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
            = (0xffff000000000000ULL | (((QData)((IData)(
                                                         (0xffffffU 
                                                          & vlSelf->clean_disp_tb__DOT__lz4cs))) 
                                         << 0x18U) 
                                        | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr))));
        if (VL_UNLIKELY((__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr 
                         == vlSelf->clean_disp_tb__DOT__WMDROP))) {
            VL_WRITEF("[WMDROP] fr=%0# final watermark rewrite SUPPRESSED (last observed wm < size, no sentinel)\n",
                      24,__Vtask_clean_disp_tb__DOT__feed_nlc__15__fr);
        } else if (((IData)(vlSelf->clean_disp_tb__DOT__WMRACE) 
                    & (1U < __Vtask_clean_disp_tb__DOT__feed_nlc__15__fr))) {
            vlSelf->clean_disp_tb__DOT__wmrace_hdr 
                = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
            vlSelf->clean_disp_tb__DOT__wmrace_pend = 1U;
        } else {
            __Vtask_clean_disp_tb__DOT__write_word__20__w 
                = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
            __Vtask_clean_disp_tb__DOT__write_word__20__byte_addr = 0x20U;
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__write_word__20__byte_addr 
                                                >> 3U))] 
                = __Vtask_clean_disp_tb__DOT__write_word__20__w;
        }
    }
    clean_disp_tb__DOT____Vrepeat7 = clean_disp_tb__DOT__framep;
    while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat7)) {
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           948);
        clean_disp_tb__DOT____Vrepeat7 = (clean_disp_tb__DOT____Vrepeat7 
                                          - (IData)(1U));
    }
    if (VL_UNLIKELY((0U != vlSelf->clean_disp_tb__DOT__DEBUG))) {
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[0U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[0U];
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[1U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[1U];
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[2U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[2U];
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[3U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[3U];
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[4U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[4U];
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[5U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[5U];
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[6U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[6U];
        __Vtask_clean_disp_tb__DOT__dump_fb__21__nm[7U] 
            = Vclean_disp_tb__ConstPool__CONST_h8974ac84_0[7U];
        vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__b0 = 0xf8U;
        vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__fdo 
            = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(8, __Vtask_clean_disp_tb__DOT__dump_fb__21__nm)
                          , std::string{"wb"});
        ;
        vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i, 
                          VL_MULS_III(32, (IData)(3U), 
                                      VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__W, vlSelf->clean_disp_tb__DOT__H)))) {
            vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__w 
                = vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                   & ((vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__b0 
                                                       + vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i) 
                                                      >> 3U))];
            VL_FWRITEF(vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__fdo,"%c",
                       8,(0xffU & (IData)((vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__w 
                                           >> (0x38U 
                                               & VL_SHIFTL_III(6,32,32, 
                                                               (vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__b0 
                                                                + vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i), 3U))))));
            vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i 
                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i);
        }
        VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__fdo); VL_WRITEF("[%0d] dumped FB -> %0s\n",
                                                                                32,
                                                                                vlSelf->clean_disp_tb__DOT__cycles,
                                                                                256,
                                                                                __Vtask_clean_disp_tb__DOT__dump_fb__21__nm.data());
    }
    if (VL_UNLIKELY((0U != vlSelf->clean_disp_tb__DOT__DEBUG))) {
        VL_WRITEF("[NLCDBG] PoC_V=%0# FB_il=%0# vga_pixels=%0# | dec uncompressed_bytes=%0# writed=%0# readed=%0# done=%0# paused=%0# | FSM wr_bytes=%0# sub_lz4_ddr_bytes=%0#\n",
                  16,vlSelf->clean_disp_tb__DOT__PoC_V,
                  1,(IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced),
                  24,vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame,
                  32,vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes,
                  32,vlSelf->clean_disp_tb__DOT__nlc_writed_bytes,
                  32,vlSelf->clean_disp_tb__DOT__nlc_readed_bytes,
                  1,(IData)(vlSelf->clean_disp_tb__DOT__nlc_done),
                  1,vlSelf->clean_disp_tb__DOT__nlc_paused,
                  28,vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes,
                  32,vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes);
    }
    clean_disp_tb__DOT__cl_emul_start = vlSelf->clean_disp_tb__DOT__cycles;
    clean_disp_tb__DOT__fi = 2U;
    while (VL_LTES_III(32, clean_disp_tb__DOT__fi, vlSelf->clean_disp_tb__DOT__N_FRAMES)) {
        if (vlSelf->clean_disp_tb__DOT__CLOSEDLOOP) {
            clean_disp_tb__DOT____Vrepeat8 = VL_MULS_III(32, (IData)(0x2053U), vlSelf->clean_disp_tb__DOT__EMULMS10);
            while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat8)) {
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   957);
                clean_disp_tb__DOT____Vrepeat8 = (clean_disp_tb__DOT____Vrepeat8 
                                                  - (IData)(1U));
            }
            __Vtask_clean_disp_tb__DOT__wait_sync_api__22__sent_frame 
                = (clean_disp_tb__DOT__fi - (IData)(1U));
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vtotal_l 
                = (((vlSelf->clean_disp_tb__DOT__H 
                     + vlSelf->clean_disp_tb__DOT__VFP) 
                    + vlSelf->clean_disp_tb__DOT__VSv) 
                   + vlSelf->clean_disp_tb__DOT__VBP);
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__htot_cyc 
                = VL_MULS_III(32, (((vlSelf->clean_disp_tb__DOT__W 
                                     + vlSelf->clean_disp_tb__DOT__HFP) 
                                    + vlSelf->clean_disp_tb__DOT__HSv) 
                                   + vlSelf->clean_disp_tb__DOT__HBP), vlSelf->clean_disp_tb__DOT__CEPIX);
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__frame_cyc 
                = VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vtotal_l, vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__htot_cyc);
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__emul_cyc 
                = (vlSelf->clean_disp_tb__DOT__cycles 
                   - clean_disp_tb__DOT__cl_emul_start);
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc 
                = (vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__frame_cyc 
                   - vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__emul_cyc);
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vc1 
                = (((__Vtask_clean_disp_tb__DOT__wait_sync_api__22__sent_frame 
                     - (IData)(1U)) * vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vtotal_l) 
                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt));
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vc2 
                = ((vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks 
                    * vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vtotal_l) 
                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt));
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__dif 
                = VL_DIVS_III(32, (vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vc1 
                                   - vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vc2), (IData)(2U));
            if (VL_GTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc)) {
                vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc = 0U;
            }
            vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc 
                = (vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc 
                   + VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__dif, vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__htot_cyc));
            if (VL_GTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc)) {
                vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc = 0U;
            }
            if (VL_GTS_III(32, vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc, 
                           VL_MULS_III(32, (IData)(8U), vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__frame_cyc))) {
                vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc 
                    = VL_MULS_III(32, (IData)(8U), vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__frame_cyc);
            }
            clean_disp_tb__DOT____Vrepeat4 = vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc;
            while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat4)) {
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   930);
                clean_disp_tb__DOT____Vrepeat4 = (clean_disp_tb__DOT____Vrepeat4 
                                                  - (IData)(1U));
            }
            clean_disp_tb__DOT__cl_emul_start = vlSelf->clean_disp_tb__DOT__cycles;
            if ((0U != vlSelf->clean_disp_tb__DOT__feed_prev_cyc)) {
                vlSelf->clean_disp_tb__DOT__feed_per_sum 
                    = (vlSelf->clean_disp_tb__DOT__feed_per_sum 
                       + (vlSelf->clean_disp_tb__DOT__cycles 
                          - vlSelf->clean_disp_tb__DOT__feed_prev_cyc));
                vlSelf->clean_disp_tb__DOT__feed_per_n 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__feed_per_n);
            }
            vlSelf->clean_disp_tb__DOT__feed_prev_cyc 
                = vlSelf->clean_disp_tb__DOT__cycles;
        } else if (vlSelf->clean_disp_tb__DOT__FEEDFAST) {
            vlSelf->clean_disp_tb__DOT__wcyc = 0U;
            while (((vlSelf->clean_disp_tb__DOT__PoC_frame_vram 
                     < (clean_disp_tb__DOT__fi - (IData)(1U))) 
                    & VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__wcyc, 
                                 VL_MULS_III(32, (IData)(8U), clean_disp_tb__DOT__framep)))) {
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   963);
                vlSelf->clean_disp_tb__DOT__wcyc = 
                    ((IData)(1U) + vlSelf->clean_disp_tb__DOT__wcyc);
            }
        } else {
            co_await vlSelf->__VtrigSched_h0d7c8ffc__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.vga.vb)", 
                                                               "clean_disp_tb.v", 
                                                               965);
            if ((0U != vlSelf->clean_disp_tb__DOT__ILACE)) {
                co_await vlSelf->__VtrigSched_h0d7c8ffc__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.vga.vb)", 
                                                                   "clean_disp_tb.v", 
                                                                   966);
            }
        }
        clean_disp_tb__DOT__frnum = (0xffffffU & clean_disp_tb__DOT__fi);
        if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__CODEC))) {
            __Vtask_clean_disp_tb__DOT__feed_raw__23__fr 
                = clean_disp_tb__DOT__frnum;
            vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__idx 
                = VL_MODDIV_III(32, (__Vtask_clean_disp_tb__DOT__feed_raw__23__fr 
                                     - (IData)(1U)), vlSelf->clean_disp_tb__DOT__NMARK);
            VL_SFORMAT_X(512,vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__nm
                         ,"%0s/marker_%03d.raw",2048,
                         vlSelf->clean_disp_tb__DOT__MDIR.data(),
                         32,vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__idx);
            vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd 
                = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(16, vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__nm)
                              , std::string{"rb"});
            ;
            if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd))) {
                VL_WRITEF("FATAL: cannot open %0s\n",
                          512,vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__nm.data());
                VL_FINISH_MT("clean_disp_tb.v", 577, "");
            }
            clean_disp_tb__DOT__feed_raw__Vstatic__nb 
                = VL_FREAD_I(8,0,1036800, &(vlSelf->clean_disp_tb__DOT__framebuf)
                             , vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd
                             , 0, 1036800);
            VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd); vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i = 0U;
            while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i, 
                              VL_MULS_III(32, (IData)(3U), 
                                          VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__W, vlSelf->clean_disp_tb__DOT__H)))) {
                __Vtask_clean_disp_tb__DOT__put_byte__24__d 
                    = ((0xfd1ffU >= (0xfffffU & vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i))
                        ? vlSelf->clean_disp_tb__DOT__framebuf
                       [(0xfffffU & vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i)]
                        : 0U);
                __Vtask_clean_disp_tb__DOT__put_byte__24__ba 
                    = (0xfffffffU & ((IData)(0xf8U) 
                                     + vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i));
                vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w 
                    = vlSelf->clean_disp_tb__DOT__mem
                    [(0x1fffffU & (__Vtask_clean_disp_tb__DOT__put_byte__24__ba 
                                   >> 3U))];
                vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__sh 
                    = VL_SHIFTL_III(32,32,32, (7U & __Vtask_clean_disp_tb__DOT__put_byte__24__ba), 3U);
                vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w 
                    = (((~ (0xffULL << (0x3fU & vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__sh))) 
                        & vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w) 
                       | ((QData)((IData)(__Vtask_clean_disp_tb__DOT__put_byte__24__d)) 
                          << (0x3fU & vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__sh)));
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & (__Vtask_clean_disp_tb__DOT__put_byte__24__ba 
                                                    >> 3U))] 
                    = vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w;
                vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i);
            }
            __Vtask_clean_disp_tb__DOT__blit_header__25__fr 
                = __Vtask_clean_disp_tb__DOT__feed_raw__23__fr;
            vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr = 0ULL;
            vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr 
                = ((0xffff000000000000ULL & vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr) 
                   | (((QData)((IData)((0xffffffU & 
                                        VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__W, vlSelf->clean_disp_tb__DOT__H)))) 
                       << 0x18U) | (QData)((IData)(__Vtask_clean_disp_tb__DOT__blit_header__25__fr))));
            vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr 
                = (0x1000000000000ULL | (0xffffffffffffULL 
                                         & vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr));
            __Vtask_clean_disp_tb__DOT__write_word__26__w 
                = vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr;
            __Vtask_clean_disp_tb__DOT__write_word__26__byte_addr = 0U;
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__write_word__26__byte_addr 
                                                >> 3U))] 
                = __Vtask_clean_disp_tb__DOT__write_word__26__w;
            vlSelf->clean_disp_tb__DOT__cmd_blit_req = 1U;
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               591);
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               591);
            vlSelf->clean_disp_tb__DOT__cmd_blit_req = 0U;
            VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",24,__Vtask_clean_disp_tb__DOT__blit_header__25__fr,
                      32,vlSelf->clean_disp_tb__DOT__cycles);
        } else if (VL_UNLIKELY((1U == vlSelf->clean_disp_tb__DOT__CODEC))) {
            __Vtask_clean_disp_tb__DOT__feed_lz4__27__fr 
                = clean_disp_tb__DOT__frnum;
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__idx 
                = VL_MODDIV_III(32, (__Vtask_clean_disp_tb__DOT__feed_lz4__27__fr 
                                     - (IData)(1U)), vlSelf->clean_disp_tb__DOT__NMARK);
            VL_SFORMAT_X(512,vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nm
                         ,"%0s/marker_%03d.lz4",2048,
                         vlSelf->clean_disp_tb__DOT__MDIR.data(),
                         32,vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__idx);
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd 
                = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(16, vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nm)
                              , std::string{"rb"});
            ;
            if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd))) {
                VL_WRITEF("FATAL: cannot open %0s\n",
                          512,vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nm.data());
                VL_FINISH_MT("clean_disp_tb.v", 610, "");
            }
            vlSelf->clean_disp_tb__DOT__lz4cs = VL_FREAD_I(8
                                                           ,0
                                                           ,4194304
                                                           , &(vlSelf->clean_disp_tb__DOT__lz4buf)
                                                           , vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd
                                                           , 0
                                                           , 4194304);
            VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd); vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__base = 0x3320f8U;
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i = 0U;
            while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i, 
                              ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4cs))) {
                vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__w 
                    = (((QData)((IData)(((vlSelf->clean_disp_tb__DOT__lz4buf
                                          [(0x3fffffU 
                                            & ((IData)(7U) 
                                               + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                          << 0x18U) 
                                         | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                             [(0x3fffffU 
                                               & ((IData)(6U) 
                                                  + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                             << 0x10U) 
                                            | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                [(0x3fffffU 
                                                  & ((IData)(5U) 
                                                     + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                << 8U) 
                                               | vlSelf->clean_disp_tb__DOT__lz4buf
                                               [(0x3fffffU 
                                                 & ((IData)(4U) 
                                                    + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))]))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                      [
                                                      (0x3fffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                      << 0x18U) 
                                                     | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                         [
                                                         (0x3fffffU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                         << 0x10U) 
                                                        | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                            [
                                                            (0x3fffffU 
                                                             & ((IData)(1U) 
                                                                + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i))] 
                                                            << 8U) 
                                                           | vlSelf->clean_disp_tb__DOT__lz4buf
                                                           [
                                                           (0x3fffffU 
                                                            & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i)]))))));
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & ((vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__base 
                                                     + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i) 
                                                    >> 3U))] 
                    = vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__w;
                vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i 
                    = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i);
            }
            vlSelf->clean_disp_tb__DOT__lz4_size = vlSelf->clean_disp_tb__DOT__lz4cs;
            vlSelf->clean_disp_tb__DOT__lz4_ABCD = 0U;
            vlSelf->clean_disp_tb__DOT__lz4_field = 0U;
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr = 0ULL;
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr 
                = ((0xffffffffff000000ULL & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr) 
                   | (IData)((IData)(__Vtask_clean_disp_tb__DOT__feed_lz4__27__fr)));
            __Vtask_clean_disp_tb__DOT__write_word__28__w 
                = vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr;
            __Vtask_clean_disp_tb__DOT__write_word__28__byte_addr = 0x20U;
            vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                             & (__Vtask_clean_disp_tb__DOT__write_word__28__byte_addr 
                                                >> 3U))] 
                = __Vtask_clean_disp_tb__DOT__write_word__28__w;
            vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 1U;
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               619);
            co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clean_disp_tb.clk_sys)", 
                                                               "clean_disp_tb.v", 
                                                               619);
            vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 0U;
            VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",24,__Vtask_clean_disp_tb__DOT__feed_lz4__27__fr,
                      32,vlSelf->clean_disp_tb__DOT__cycles);
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent = 0U;
            vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit = 0U;
            while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent, vlSelf->clean_disp_tb__DOT__lz4cs)) {
                vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent 
                    = (VL_GTS_III(32, (vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent 
                                       + vlSelf->clean_disp_tb__DOT__CHUNK), vlSelf->clean_disp_tb__DOT__lz4cs)
                        ? vlSelf->clean_disp_tb__DOT__lz4cs
                        : (vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent 
                           + vlSelf->clean_disp_tb__DOT__CHUNK));
                vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit);
                vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr = 0ULL;
                vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr 
                    = (((QData)((IData)((0xffffU & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit))) 
                        << 0x30U) | (((QData)((IData)(
                                                      (0xffffffU 
                                                       & vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent))) 
                                      << 0x18U) | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_lz4__27__fr))));
                __Vtask_clean_disp_tb__DOT__write_word__29__w 
                    = vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr;
                __Vtask_clean_disp_tb__DOT__write_word__29__byte_addr = 0x20U;
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & (__Vtask_clean_disp_tb__DOT__write_word__29__byte_addr 
                                                    >> 3U))] 
                    = __Vtask_clean_disp_tb__DOT__write_word__29__w;
                clean_disp_tb__DOT____Vrepeat0 = vlSelf->clean_disp_tb__DOT__CHUNKGAP;
                while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat0)) {
                    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                                       "clean_disp_tb.v", 
                                                                       627);
                    clean_disp_tb__DOT____Vrepeat0 
                        = (clean_disp_tb__DOT____Vrepeat0 
                           - (IData)(1U));
                }
            }
        } else {
            __Vtask_clean_disp_tb__DOT__feed_nlc__30__fr 
                = clean_disp_tb__DOT__frnum;
            if (((IData)(vlSelf->clean_disp_tb__DOT__WMRACE) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__wmrace_pend))) {
                __Vtask_clean_disp_tb__DOT__write_word__31__w 
                    = vlSelf->clean_disp_tb__DOT__wmrace_hdr;
                __Vtask_clean_disp_tb__DOT__write_word__31__byte_addr = 0x20U;
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & (__Vtask_clean_disp_tb__DOT__write_word__31__byte_addr 
                                                    >> 3U))] 
                    = __Vtask_clean_disp_tb__DOT__write_word__31__w;
                vlSelf->clean_disp_tb__DOT__wmrace_pend = 0U;
                clean_disp_tb__DOT____Vrepeat1 = vlSelf->clean_disp_tb__DOT__WMRACEG;
                while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat1)) {
                    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                                       "clean_disp_tb.v", 
                                                                       643);
                    clean_disp_tb__DOT____Vrepeat1 
                        = (clean_disp_tb__DOT____Vrepeat1 
                           - (IData)(1U));
                }
            }
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__idx 
                = VL_MODDIV_III(32, (__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr 
                                     - (IData)(1U)), vlSelf->clean_disp_tb__DOT__NMARK);
            VL_SFORMAT_X(512,vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nm
                         ,"%0s/marker_%03d.nlc",2048,
                         vlSelf->clean_disp_tb__DOT__MDIR.data(),
                         32,vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__idx);
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd 
                = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(16, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nm)
                              , std::string{"rb"});
            ;
            if (VL_UNLIKELY((0U == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd))) {
                VL_WRITEF("FATAL: cannot open %0s\n",
                          512,vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nm.data());
                VL_FINISH_MT("clean_disp_tb.v", 648, "");
            }
            vlSelf->clean_disp_tb__DOT__lz4cs = VL_FREAD_I(8
                                                           ,0
                                                           ,4194304
                                                           , &(vlSelf->clean_disp_tb__DOT__lz4buf)
                                                           , vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd
                                                           , 0
                                                           , 4194304);
            VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd); vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone 
                = (3U & (__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr 
                         - (IData)(1U)));
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__base 
                = ((0U == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone)
                    ? 0x3320f8U : ((1U == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone)
                                    ? 0x4c70f8U : (
                                                   (2U 
                                                    == vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone)
                                                    ? 0x65c0f8U
                                                    : 0x7f10f8U)));
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i = 0U;
            while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i, 
                              ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4cs))) {
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__w 
                    = (((QData)((IData)(((vlSelf->clean_disp_tb__DOT__lz4buf
                                          [(0x3fffffU 
                                            & ((IData)(7U) 
                                               + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                          << 0x18U) 
                                         | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                             [(0x3fffffU 
                                               & ((IData)(6U) 
                                                  + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                             << 0x10U) 
                                            | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                [(0x3fffffU 
                                                  & ((IData)(5U) 
                                                     + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                << 8U) 
                                               | vlSelf->clean_disp_tb__DOT__lz4buf
                                               [(0x3fffffU 
                                                 & ((IData)(4U) 
                                                    + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))]))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                      [
                                                      (0x3fffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                      << 0x18U) 
                                                     | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                         [
                                                         (0x3fffffU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                         << 0x10U) 
                                                        | ((vlSelf->clean_disp_tb__DOT__lz4buf
                                                            [
                                                            (0x3fffffU 
                                                             & ((IData)(1U) 
                                                                + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i))] 
                                                            << 8U) 
                                                           | vlSelf->clean_disp_tb__DOT__lz4buf
                                                           [
                                                           (0x3fffffU 
                                                            & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i)]))))));
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & ((vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__base 
                                                     + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i) 
                                                    >> 3U))] 
                    = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__w;
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i 
                    = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i);
            }
            vlSelf->clean_disp_tb__DOT__lz4_size = vlSelf->clean_disp_tb__DOT__lz4cs;
            vlSelf->clean_disp_tb__DOT__lz4_ABCD = 
                (3U & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone);
            vlSelf->clean_disp_tb__DOT__lz4_field = 0U;
            __Vtemp_29[0U] = 0x6c617465U;
            __Vtemp_29[1U] = 0x6f70745fU;
            __Vtemp_29[2U] = 0x6164U;
            if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_29))) {
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
                    = (0xffff000000000000ULL | (((QData)((IData)(
                                                                 (0xffffffU 
                                                                  & vlSelf->clean_disp_tb__DOT__lz4cs))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr))));
                __Vtask_clean_disp_tb__DOT__write_word__32__w 
                    = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
                __Vtask_clean_disp_tb__DOT__write_word__32__byte_addr = 0x20U;
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & (__Vtask_clean_disp_tb__DOT__write_word__32__byte_addr 
                                                    >> 3U))] 
                    = __Vtask_clean_disp_tb__DOT__write_word__32__w;
                vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 1U;
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   664);
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   664);
                vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 0U;
                VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",
                          24,__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr,
                          32,vlSelf->clean_disp_tb__DOT__cycles);
                clean_disp_tb__DOT____Vrepeat2 = vlSelf->clean_disp_tb__DOT__CHUNKGAP;
                while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat2)) {
                    co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clean_disp_tb.clk_sys)", 
                                                                       "clean_disp_tb.v", 
                                                                       666);
                    clean_disp_tb__DOT____Vrepeat2 
                        = (clean_disp_tb__DOT____Vrepeat2 
                           - (IData)(1U));
                }
            } else {
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
                    = ((0xffffffffff000000ULL & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr) 
                       | (IData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr)));
                __Vtask_clean_disp_tb__DOT__write_word__33__w 
                    = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
                __Vtask_clean_disp_tb__DOT__write_word__33__byte_addr = 0x20U;
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & (__Vtask_clean_disp_tb__DOT__write_word__33__byte_addr 
                                                    >> 3U))] 
                    = __Vtask_clean_disp_tb__DOT__write_word__33__w;
                vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 1U;
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   669);
                co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clean_disp_tb.clk_sys)", 
                                                                   "clean_disp_tb.v", 
                                                                   669);
                vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 0U;
                VL_WRITEF("[ANN] fr=%0# cyc=%0d\n",
                          24,__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr,
                          32,vlSelf->clean_disp_tb__DOT__cycles);
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent = 0U;
                vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit = 0U;
                while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent, vlSelf->clean_disp_tb__DOT__lz4cs)) {
                    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent 
                        = (VL_GTS_III(32, (vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent 
                                           + vlSelf->clean_disp_tb__DOT__CHUNK), vlSelf->clean_disp_tb__DOT__lz4cs)
                            ? vlSelf->clean_disp_tb__DOT__lz4cs
                            : (vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent 
                               + vlSelf->clean_disp_tb__DOT__CHUNK));
                    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit);
                    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
                    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
                        = (((QData)((IData)((0xffffU 
                                             & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit))) 
                            << 0x30U) | (((QData)((IData)(
                                                          (0xffffffU 
                                                           & vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent))) 
                                          << 0x18U) 
                                         | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr))));
                    if ((1U & (~ (((__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr 
                                    == vlSelf->clean_disp_tb__DOT__WMDROP) 
                                   | (IData)(vlSelf->clean_disp_tb__DOT__WMRACE)) 
                                  & VL_GTES_III(32, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent, vlSelf->clean_disp_tb__DOT__lz4cs))))) {
                        __Vtask_clean_disp_tb__DOT__write_word__34__w 
                            = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
                        __Vtask_clean_disp_tb__DOT__write_word__34__byte_addr = 0x20U;
                        vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                         & (__Vtask_clean_disp_tb__DOT__write_word__34__byte_addr 
                                                            >> 3U))] 
                            = __Vtask_clean_disp_tb__DOT__write_word__34__w;
                    }
                    clean_disp_tb__DOT____Vrepeat3 
                        = vlSelf->clean_disp_tb__DOT__CHUNKGAP;
                    while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat3)) {
                        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                                           "clean_disp_tb.v", 
                                                                           680);
                        clean_disp_tb__DOT____Vrepeat3 
                            = (clean_disp_tb__DOT____Vrepeat3 
                               - (IData)(1U));
                    }
                }
            }
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = 0ULL;
            vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr 
                = (0xffff000000000000ULL | (((QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelf->clean_disp_tb__DOT__lz4cs))) 
                                             << 0x18U) 
                                            | (QData)((IData)(__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr))));
            if (VL_UNLIKELY((__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr 
                             == vlSelf->clean_disp_tb__DOT__WMDROP))) {
                VL_WRITEF("[WMDROP] fr=%0# final watermark rewrite SUPPRESSED (last observed wm < size, no sentinel)\n",
                          24,__Vtask_clean_disp_tb__DOT__feed_nlc__30__fr);
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__WMRACE) 
                        & (1U < __Vtask_clean_disp_tb__DOT__feed_nlc__30__fr))) {
                vlSelf->clean_disp_tb__DOT__wmrace_hdr 
                    = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
                vlSelf->clean_disp_tb__DOT__wmrace_pend = 1U;
            } else {
                __Vtask_clean_disp_tb__DOT__write_word__35__w 
                    = vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr;
                __Vtask_clean_disp_tb__DOT__write_word__35__byte_addr = 0x20U;
                vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                                 & (__Vtask_clean_disp_tb__DOT__write_word__35__byte_addr 
                                                    >> 3U))] 
                    = __Vtask_clean_disp_tb__DOT__write_word__35__w;
            }
        }
        clean_disp_tb__DOT__fi = ((IData)(1U) + clean_disp_tb__DOT__fi);
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__WMRACE) 
         & (IData)(vlSelf->clean_disp_tb__DOT__wmrace_pend))) {
        __Vtask_clean_disp_tb__DOT__write_word__36__w 
            = vlSelf->clean_disp_tb__DOT__wmrace_hdr;
        __Vtask_clean_disp_tb__DOT__write_word__36__byte_addr = 0x20U;
        vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                         & (__Vtask_clean_disp_tb__DOT__write_word__36__byte_addr 
                                            >> 3U))] 
            = __Vtask_clean_disp_tb__DOT__write_word__36__w;
        vlSelf->clean_disp_tb__DOT__wmrace_pend = 0U;
    }
    clean_disp_tb__DOT____Vrepeat9 = VL_MULS_III(32, (IData)(2U), clean_disp_tb__DOT__framep);
    while (VL_LTS_III(32, 0U, clean_disp_tb__DOT____Vrepeat9)) {
        co_await vlSelf->__VtrigSched_h8bb44699__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clean_disp_tb.clk_sys)", 
                                                           "clean_disp_tb.v", 
                                                           972);
        clean_disp_tb__DOT____Vrepeat9 = (clean_disp_tb__DOT____Vrepeat9 
                                          - (IData)(1U));
    }
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[0U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[0U];
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[1U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[1U];
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[2U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[2U];
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[3U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[3U];
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[4U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[4U];
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[5U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[5U];
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[6U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[6U];
    __Vtask_clean_disp_tb__DOT__dump_fb__37__nm[7U] 
        = Vclean_disp_tb__ConstPool__CONST_hd529e189_0[7U];
    vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__b0 = 0xf8U;
    vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__fdo 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(8, __Vtask_clean_disp_tb__DOT__dump_fb__37__nm)
                      , std::string{"wb"});
    ;
    vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i = 0U;
    while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i, 
                      VL_MULS_III(32, (IData)(3U), 
                                  VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__W, vlSelf->clean_disp_tb__DOT__H)))) {
        vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__w 
            = vlSelf->clean_disp_tb__DOT__mem[(0x1fffffU 
                                               & ((vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__b0 
                                                   + vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i) 
                                                  >> 3U))];
        VL_FWRITEF(vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__fdo,"%c",
                   8,(0xffU & (IData)((vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__w 
                                       >> (0x38U & 
                                           VL_SHIFTL_III(6,32,32, 
                                                         (vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__b0 
                                                          + vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i), 3U))))));
        vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i 
            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i);
    }
    VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__fdo); VL_WRITEF("[%0d] dumped FB -> %0s\nRESULT: frames_out=%0d vga_frame=%0# PoC_frame_vram=%0# nlc_displayed=%0d (of %0d fed) cepix=%0d WBcost=%0d | FIFO: underrun=%0d vqmin=%0d | WEDGED=%0# BUSWEDGE=%0# FREEZE=%0# ENGWEDGE=%0# engdone=%0d\nTHRUPUT: codec=%0d published=%0d pub_period=%0d.%0dms | NLC_decode_time(nlc_busy) n=%0d avg=%0d.%0d ms (HW NLC ~40ms)\nREPEATS: fskip_pulses=%0d auto_first=%0d auto_line=%0d blit_raw=%0d\n",
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__cycles,
                                                                              256,
                                                                              __Vtask_clean_disp_tb__DOT__dump_fb__37__nm.data(),
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__frames_out,
                                                                              24,
                                                                              vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks,
                                                                              24,
                                                                              vlSelf->clean_disp_tb__DOT__PoC_frame_vram,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__nlc_displayed,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__N_FRAMES,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__CEPIX,
                                                                              32,
                                                                              (vlSelf->clean_disp_tb__DOT__WR_OVERHEAD 
                                                                               + vlSelf->clean_disp_tb__DOT__WR_BEAT),
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__vram_unsync_events,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__vqmin,
                                                                              1,
                                                                              (IData)(vlSelf->clean_disp_tb__DOT__wedged),
                                                                              1,
                                                                              vlSelf->clean_disp_tb__DOT__buswedge_logged,
                                                                              1,
                                                                              (IData)(vlSelf->clean_disp_tb__DOT__dbg_freeze_valid),
                                                                              1,
                                                                              vlSelf->clean_disp_tb__DOT__engwedge_logged,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__eng_done_total,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__CODEC,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__eof_frames,
                                                                              32,
                                                                              ((0U 
                                                                                != vlSelf->clean_disp_tb__DOT__pub_period_n)
                                                                                ? 
                                                                               VL_DIVS_III(32, 
                                                                                VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__pub_period_sum, vlSelf->clean_disp_tb__DOT__pub_period_n), (IData)(0x14342U))
                                                                                : 0U),
                                                                              32,
                                                                              ((0U 
                                                                                != vlSelf->clean_disp_tb__DOT__pub_period_n)
                                                                                ? 
                                                                               VL_MODDIVS_III(32, 
                                                                                VL_DIVS_III(32, 
                                                                                VL_MULS_III(32, (IData)(0xaU), 
                                                                                VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__pub_period_sum, vlSelf->clean_disp_tb__DOT__pub_period_n)), (IData)(0x14342U)), (IData)(0xaU))
                                                                                : 0U),
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__nb_n,
                                                                              32,
                                                                              ((0U 
                                                                                != vlSelf->clean_disp_tb__DOT__nb_n)
                                                                                ? 
                                                                               VL_DIVS_III(32, 
                                                                                VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__nb_sum, vlSelf->clean_disp_tb__DOT__nb_n), (IData)(0x14342U))
                                                                                : 0U),
                                                                              32,
                                                                              ((0U 
                                                                                != vlSelf->clean_disp_tb__DOT__nb_n)
                                                                                ? 
                                                                               VL_MODDIVS_III(32, 
                                                                                VL_DIVS_III(32, 
                                                                                VL_MULS_III(32, (IData)(0xaU), 
                                                                                VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__nb_sum, vlSelf->clean_disp_tb__DOT__nb_n)), (IData)(0x14342U)), (IData)(0xaU))
                                                                                : 0U),
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__fsk_pulses,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__auto_first_n,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__auto_line_n,
                                                                              32,
                                                                              vlSelf->clean_disp_tb__DOT__blitraw_n);
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__CLOSEDLOOP) 
                     & VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__feed_per_n)))) {
        VL_WRITEF("CLOSEDLOOP: blit_period avg = %0d cyc = %0d.%0d ms over %0d blits (HW /42 NLC = 36-41ms; RAW/LZ4 ~15-17ms)\n",
                  32,VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__feed_per_sum, vlSelf->clean_disp_tb__DOT__feed_per_n),
                  32,VL_DIVS_III(32, VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__feed_per_sum, vlSelf->clean_disp_tb__DOT__feed_per_n), (IData)(0x14342U)),
                  32,VL_MODDIVS_III(32, VL_DIVS_III(32, 
                                                    VL_MULS_III(32, (IData)(0xaU), 
                                                                VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__feed_per_sum, vlSelf->clean_disp_tb__DOT__feed_per_n)), (IData)(0x14342U)), (IData)(0xaU)),
                  32,vlSelf->clean_disp_tb__DOT__feed_per_n);
    }
    if (VL_UNLIKELY((2U == vlSelf->clean_disp_tb__DOT__CODEC))) {
        VL_WRITEF("SCHED: tot=%0d fskip=%0d%% inflate=%0d%% prepare=%0d%% autoblit=%0d%% | FB_writes=%0d FB_changes=%0d | FBmode_cyc=%0d strm_gate_stall_cyc=%0d\n",
                  32,vlSelf->clean_disp_tb__DOT__tot_cyc,
                  32,((0U != vlSelf->clean_disp_tb__DOT__tot_cyc)
                       ? VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__fsk_cyc), vlSelf->clean_disp_tb__DOT__tot_cyc)
                       : 0U),32,((0U != vlSelf->clean_disp_tb__DOT__tot_cyc)
                                  ? VL_DIVS_III(32, 
                                                VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__inf_cyc), vlSelf->clean_disp_tb__DOT__tot_cyc)
                                  : 0U),32,((0U != vlSelf->clean_disp_tb__DOT__tot_cyc)
                                             ? VL_DIVS_III(32, 
                                                           VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__prep_cyc), vlSelf->clean_disp_tb__DOT__tot_cyc)
                                             : 0U),
                  32,((0U != vlSelf->clean_disp_tb__DOT__tot_cyc)
                       ? VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__ablit_cyc), vlSelf->clean_disp_tb__DOT__tot_cyc)
                       : 0U),32,vlSelf->clean_disp_tb__DOT__fbw_cnt,
                  32,vlSelf->clean_disp_tb__DOT__fb_changes,
                  32,vlSelf->clean_disp_tb__DOT__fbmode_cyc,
                  32,vlSelf->clean_disp_tb__DOT__strm_stall_cyc);
    }
    if (VL_UNLIKELY(((2U == vlSelf->clean_disp_tb__DOT__CODEC) 
                     & VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__c_busytot)))) {
        VL_WRITEF("PROFILE nlc_busy(clk_sys @72MHz) tot=%0d cyc = %0d.%0d ms/frame | FSM: setup=%0d%% prep=%0d%% copy=%0d%% INFLATE=%0d%% FLUSH=%0d%% hdr/end=%0d%%\nPROFILE decoder-cst: WAIT(feed-starved)=%0d%% PRIME=%0d%% HDR=%0d%% A=%0d%% B=%0d%% EOL=%0d%% cFLUSH=%0d%% DONE=%0d%%  [A+B=MED core work]\nPROFILE pressure: outFIFO-full(FBwrite-backpressure)=%0d%% inFIFO-low=%0d%% inFIFO-EMPTY(decoder-starved)=%0d%% | frames=%0d\n",
                  32,vlSelf->clean_disp_tb__DOT__c_busytot,
                  32,VL_DIVS_III(32, VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__c_busytot, vlSelf->clean_disp_tb__DOT__pf_frames), (IData)(0x11b66U)),
                  32,VL_MODDIVS_III(32, VL_DIVS_III(32, 
                                                    VL_MULS_III(32, (IData)(0xaU), 
                                                                VL_DIVS_III(32, vlSelf->clean_disp_tb__DOT__c_busytot, vlSelf->clean_disp_tb__DOT__pf_frames)), (IData)(0x11b66U)), (IData)(0xaU)),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_setup), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_prep), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_copy), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_infl), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_flush), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_hdrend), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_wait), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_prime), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_hdr), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_a), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_b), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_eol), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_flush), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__cc_done), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_offull), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_iflow), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->clean_disp_tb__DOT__c_ifempty), vlSelf->clean_disp_tb__DOT__c_busytot),
                  32,vlSelf->clean_disp_tb__DOT__pf_frames);
    }
    VL_FINISH_MT("clean_disp_tb.v", 990, "");
}

VL_INLINE_OPT VlCoroutine Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__1(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x1d1a94a2000ULL, 
                                       nullptr, "clean_disp_tb.v", 
                                       993);
    VL_WRITEF("CLEAN-DISP TIMEOUT (frames_out=%0d BUSWEDGE=%0# FREEZE=%0# ENGWEDGE=%0#)\n",
              32,vlSelf->clean_disp_tb__DOT__frames_out,
              1,(IData)(vlSelf->clean_disp_tb__DOT__buswedge_logged),
              1,vlSelf->clean_disp_tb__DOT__dbg_freeze_valid,
              1,(IData)(vlSelf->clean_disp_tb__DOT__engwedge_logged));
    VL_FINISH_MT("clean_disp_tb.v", 993, "");
}

VL_INLINE_OPT VlCoroutine Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__2(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1770ULL, 
                                           nullptr, 
                                           "clean_disp_tb.v", 
                                           52);
        vlSelf->clean_disp_tb__DOT__clk_sys = (1U & 
                                               (~ (IData)(vlSelf->clean_disp_tb__DOT__clk_sys)));
    }
}

VL_INLINE_OPT void Vclean_disp_tb___024root___act_comb__TOP__0(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->clean_disp_tb__DOT__nlc_eng_sel = ((2U 
                                                == (IData)(vlSelf->clean_disp_tb__DOT__nlc_disp_mode)) 
                                               & (2U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__codec_mode)));
    if (vlSelf->clean_disp_tb__DOT__nlc_eng_sel) {
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset 
            = vlSelf->clean_disp_tb__DOT__eng_dec_reset;
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__write_long 
            = vlSelf->clean_disp_tb__DOT__eng_dec_wlong;
    } else {
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset 
            = vlSelf->clean_disp_tb__DOT__nlc_reset;
        vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__write_long 
            = vlSelf->clean_disp_tb__DOT__nlc_write_long;
    }
}

void Vclean_disp_tb___024root___eval_act(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_act\n"); );
    // Body
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        Vclean_disp_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<9>/*287:0*/ Vclean_disp_tb__ConstPool__CONST_h99a373b3_0;
extern const VlWide<9>/*287:0*/ Vclean_disp_tb__ConstPool__CONST_h083ec1be_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vclean_disp_tb__ConstPool__TABLE_h3615a9ca_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vclean_disp_tb__ConstPool__TABLE_haed88285_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vclean_disp_tb__ConstPool__TABLE_h0ad33419_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vclean_disp_tb__ConstPool__TABLE_h6451e8c0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vclean_disp_tb__ConstPool__TABLE_h41e59dd1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vclean_disp_tb__ConstPool__TABLE_h79b440d2_0;

VL_INLINE_OPT void Vclean_disp_tb___024root___nba_sequent__TOP__0(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlUnpacked<QData/*63:0*/, 4> clean_disp_tb__DOT__PoC_lz4_delta_FB;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        clean_disp_tb__DOT__PoC_lz4_delta_FB[__Vi0] = 0;
    }
    SData/*15:0*/ clean_disp_tb__DOT__u_nlc__DOT__it;
    clean_disp_tb__DOT__u_nlc__DOT__it = 0;
    CData/*0:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__0__drive_lz4;
    __Vtask_clean_disp_tb__DOT__decode_pixel__0__drive_lz4 = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__0__word64;
    __Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__0__total_pixels;
    __Vtask_clean_disp_tb__DOT__decode_pixel__0__total_pixels = 0;
    CData/*0:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__1__drive_lz4;
    __Vtask_clean_disp_tb__DOT__decode_pixel__1__drive_lz4 = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__1__word64;
    __Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__1__total_pixels;
    __Vtask_clean_disp_tb__DOT__decode_pixel__1__total_pixels = 0;
    CData/*0:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__2__drive_lz4;
    __Vtask_clean_disp_tb__DOT__decode_pixel__2__drive_lz4 = 0;
    QData/*63:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__2__word64;
    __Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 = 0;
    IData/*23:0*/ __Vtask_clean_disp_tb__DOT__decode_pixel__2__total_pixels;
    __Vtask_clean_disp_tb__DOT__decode_pixel__2__total_pixels = 0;
    VlWide<8>/*255:0*/ __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm;
    VL_ZERO_W(256, __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm);
    IData/*31:0*/ __Vtask_clean_disp_tb__DOT__dump_ppm__3__rows;
    __Vtask_clean_disp_tb__DOT__dump_ppm__3__rows = 0;
    CData/*7:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__Vfuncout;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__v;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__v = 0;
    CData/*7:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__Vfuncout;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__v;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__v = 0;
    CData/*7:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__Vfuncout;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__v;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__v = 0;
    CData/*7:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__Vfuncout;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__v;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__v = 0;
    CData/*7:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__Vfuncout;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__v;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__v = 0;
    CData/*7:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__Vfuncout;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__v;
    __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__v = 0;
    CData/*2:0*/ __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__62__pixels_to_write;
    __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__62__pixels_to_write = 0;
    CData/*2:0*/ __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__65__pixels_to_write;
    __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__65__pixels_to_write = 0;
    CData/*2:0*/ __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__70__pixels_to_write;
    __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__70__pixels_to_write = 0;
    CData/*2:0*/ __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__77__pixels_to_write;
    __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__77__pixels_to_write = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vdly__clean_disp_tb__DOT__cencnt;
    __Vdly__clean_disp_tb__DOT__cencnt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__av_reading;
    __Vdly__clean_disp_tb__DOT__av_reading = 0;
    IData/*28:0*/ __Vdly__clean_disp_tb__DOT__av_rd_addr;
    __Vdly__clean_disp_tb__DOT__av_rd_addr = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__av_rd_left;
    __Vdly__clean_disp_tb__DOT__av_rd_left = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__av_rd_lat;
    __Vdly__clean_disp_tb__DOT__av_rd_lat = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__dead_now;
    __Vdly__clean_disp_tb__DOT__dead_now = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__av_beatno;
    __Vdly__clean_disp_tb__DOT__av_beatno = 0;
    IData/*20:0*/ __Vdlyvdim0__clean_disp_tb__DOT__mem__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__mem__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__mem__v0;
    __Vdlyvval__clean_disp_tb__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__mem__v0;
    __Vdlyvset__clean_disp_tb__DOT__mem__v0 = 0;
    IData/*28:0*/ __Vdly__clean_disp_tb__DOT__av_wr_addr;
    __Vdly__clean_disp_tb__DOT__av_wr_addr = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__av_wr_left;
    __Vdly__clean_disp_tb__DOT__av_wr_left = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__av_busy_left;
    __Vdly__clean_disp_tb__DOT__av_busy_left = 0;
    IData/*20:0*/ __Vdlyvdim0__clean_disp_tb__DOT__mem__v1;
    __Vdlyvdim0__clean_disp_tb__DOT__mem__v1 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__mem__v1;
    __Vdlyvval__clean_disp_tb__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__mem__v1;
    __Vdlyvset__clean_disp_tb__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__cmd_fskip;
    __Vdly__clean_disp_tb__DOT__cmd_fskip = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__PoC_state_frameskip;
    __Vdly__clean_disp_tb__DOT__PoC_state_frameskip = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_frame_lz4;
    __Vdly__clean_disp_tb__DOT__PoC_frame_lz4 = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__nlc_present_pending;
    __Vdly__clean_disp_tb__DOT__nlc_present_pending = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__auto_blit_lz4;
    __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__nlc_present_active;
    __Vdly__clean_disp_tb__DOT__nlc_present_active = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__state;
    __Vdly__clean_disp_tb__DOT__state = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__new_vmode;
    __Vdly__clean_disp_tb__DOT__new_vmode = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga_reset;
    __Vdly__clean_disp_tb__DOT__vga_reset = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vram_reset;
    __Vdly__clean_disp_tb__DOT__vram_reset = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_H;
    __Vdly__clean_disp_tb__DOT__PoC_H = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_V;
    __Vdly__clean_disp_tb__DOT__PoC_V = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__PoC_pll_S;
    __Vdly__clean_disp_tb__DOT__PoC_pll_S = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__PoC_interlaced;
    __Vdly__clean_disp_tb__DOT__PoC_interlaced = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__PoC_FB_interlaced;
    __Vdly__clean_disp_tb__DOT__PoC_FB_interlaced = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_frame_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_frame_ddr = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0;
    IData/*27:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset;
    __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__nlc_out_ready;
    __Vdly__clean_disp_tb__DOT__nlc_out_ready = 0;
    IData/*27:0*/ __Vdly__clean_disp_tb__DOT__nlc_flushed_bytes;
    __Vdly__clean_disp_tb__DOT__nlc_flushed_bytes = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__ddr_data_write;
    __Vdly__clean_disp_tb__DOT__ddr_data_write = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__nlc_fl_pre;
    __Vdly__clean_disp_tb__DOT__nlc_fl_pre = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__nlc_fl_run;
    __Vdly__clean_disp_tb__DOT__nlc_fl_run = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__nlc_lb_rd;
    __Vdly__clean_disp_tb__DOT__nlc_lb_rd = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt;
    __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_frame_vram;
    __Vdly__clean_disp_tb__DOT__PoC_frame_vram = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr = 0;
    IData/*27:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__nlc_busy;
    __Vdly__clean_disp_tb__DOT__nlc_busy = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__nlc_compressed_bytes;
    __Vdly__clean_disp_tb__DOT__nlc_compressed_bytes = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vram_drive_lz4;
    __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0;
    CData/*6:0*/ __Vdlyvdim0__clean_disp_tb__DOT__nlc_lbuf__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__nlc_lbuf__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__nlc_lbuf__v0;
    __Vdlyvval__clean_disp_tb__DOT__nlc_lbuf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__nlc_lbuf__v0;
    __Vdlyvset__clean_disp_tb__DOT__nlc_lbuf__v0 = 0;
    VlWide<6>/*191:0*/ __Vdly__clean_disp_tb__DOT__ddr_data_tmp;
    VL_ZERO_W(192, __Vdly__clean_disp_tb__DOT__ddr_data_tmp);
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__nlc_cur_frame;
    __Vdly__clean_disp_tb__DOT__nlc_cur_frame = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__PoC_lz4_ABCD;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_ABCD = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__PoC_lz4_field;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_field = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__reset_blit_lz4;
    __Vdly__clean_disp_tb__DOT__reset_blit_lz4 = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB;
    __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_audio_samples;
    __Vdly__clean_disp_tb__DOT__PoC_audio_samples = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__PoC_audio_count;
    __Vdly__clean_disp_tb__DOT__PoC_audio_count = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_audio_ddr_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_audio_ddr_bytes = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_audio_count_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_audio_count_bytes = 0;
    CData/*1:0*/ __Vdlyvdim0__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0;
    __Vdlyvval__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0;
    __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0 = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_req;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_req = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__lz4_run;
    __Vdly__clean_disp_tb__DOT__lz4_run = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__lz4_stop;
    __Vdly__clean_disp_tb__DOT__lz4_stop = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__lz4_reset;
    __Vdly__clean_disp_tb__DOT__lz4_reset = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes;
    __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__lz4_write_long;
    __Vdly__clean_disp_tb__DOT__lz4_write_long = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v1;
    __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v1 = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga_frameskip;
    __Vdly__clean_disp_tb__DOT__vga_frameskip = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__auto_blit;
    __Vdly__clean_disp_tb__DOT__auto_blit = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__PoC_frame_switchres;
    __Vdly__clean_disp_tb__DOT__PoC_frame_switchres = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__reset_switchres;
    __Vdly__clean_disp_tb__DOT__reset_switchres = 0;
    IData/*27:0*/ __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__reset_blit;
    __Vdly__clean_disp_tb__DOT__reset_blit = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__dbg_freeze_frames;
    __Vdly__clean_disp_tb__DOT__dbg_freeze_frames = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__ddr_mux__DOT__g;
    __Vdly__clean_disp_tb__DOT__ddr_mux__DOT__g = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_ddram__DOT__read_req;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__read_req = 0;
    IData/*16:0*/ __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_read;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_read = 0;
    IData/*26:0*/ __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_address;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_address = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_burst;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_burst = 0;
    CData/*6:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_addr;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_addr = 0;
    CData/*6:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__blocks__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__blocks__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__blocks__v0;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__blocks__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__blocks__v0;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__blocks__v0 = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_total;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_total = 0;
    CData/*3:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__state;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__ML;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__LL;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__MP;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__offset;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__offset = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr3;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr3 = 0;
    SData/*12:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes = 0;
    CData/*6:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W = 0;
    SData/*12:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13 = 0;
    QData/*63:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v0;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v0;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v1;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v1 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v1;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v1 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v1;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v2;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v2 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v2;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v2 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v2;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v2 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v3;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v3 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v3;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v3 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v3;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v3 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v4;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v4 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v4;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v4 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v4;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v4 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v5;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v5 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v5;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v5 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v5;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v5 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v6;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v6 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v6;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v6 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v6;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v6 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v7;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v7 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v7;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v7 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v7;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v7 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v8;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v8 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v8;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v8 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v8;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v8 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v9;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v9 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v9;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v9 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v9;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v9 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v10;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v10 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v10;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v10 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v10;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v10 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v11;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v11 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v11;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v11 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v11;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v11 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v12;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v12 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v12;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v12 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v12;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v12 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v13;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v13 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v13;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v13 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v13;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v13 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v14;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v14 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v14;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v14 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v14;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v14 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v15;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v15 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v15;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v15 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v15;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v15 = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__MP3;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP3 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v16;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v16 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v16;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v16 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v16;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v16 = 0;
    QData/*63:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__data;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__data = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__lz4__DOT__LL_W;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL_W = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v17;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v17 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v17;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v17 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v17;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v17 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v18;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v18 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v18;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v18 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v18;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v18 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v19;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v19 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v19;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v19 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v19;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v19 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v20;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v20 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v20;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v20 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v20;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v20 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v21;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v21 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v21;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v21 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v21;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v21 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v22;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v22 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v22;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v22 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v22;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v22 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v23;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v23 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v23;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v23 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v23;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v23 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v24;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v24 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v24;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v24 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v24;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v24 = 0;
    SData/*12:0*/ __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v25;
    __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v25 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v25;
    __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v25 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v25;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v25 = 0;
    CData/*7:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0 = 0;
    SData/*8:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_tail;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_tail = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ip_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ip_st = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_bank;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_bank = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_lines;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_lines = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__nlc_readed_bytes;
    __Vdly__clean_disp_tb__DOT__nlc_readed_bytes = 0;
    QData/*63:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw = 0;
    SData/*8:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left0;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left0 = 0;
    SData/*8:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left1;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left1 = 0;
    SData/*8:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left2;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left2 = 0;
    SData/*8:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_head;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_head = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__nlc_writed_bytes;
    __Vdly__clean_disp_tb__DOT__nlc_writed_bytes = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__y;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__y = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__lp;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__lp = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__dec_bank;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__dec_bank = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__tcnt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__tcnt = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pw;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pw = 0;
    VlWide<3>/*95:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc;
    VL_ZERO_W(96, __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc);
    CData/*6:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_n;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_n = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_flushed;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_flushed = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_head;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_head = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_tail;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_tail = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__nlc_long_valid;
    __Vdly__clean_disp_tb__DOT__nlc_long_valid = 0;
    IData/*31:0*/ __Vdly__clean_disp_tb__DOT__nlc_uncompressed_bytes;
    __Vdly__clean_disp_tb__DOT__nlc_uncompressed_bytes = 0;
    QData/*63:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_q;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_q = 0;
    CData/*6:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1 = 0;
    CData/*7:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0 = 0;
    SData/*11:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0 = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg = 0;
    VlWide<4>/*127:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc;
    VL_ZERO_W(128, __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc);
    CData/*6:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st = 0;
    CData/*4:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w = 0;
    QData/*63:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt = 0;
    CData/*7:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0 = 0;
    SData/*11:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0 = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg = 0;
    VlWide<4>/*127:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc;
    VL_ZERO_W(128, __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc);
    CData/*6:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st = 0;
    CData/*4:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w = 0;
    QData/*63:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt = 0;
    CData/*7:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0 = 0;
    SData/*11:0*/ __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0 = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg = 0;
    VlWide<4>/*127:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc;
    VL_ZERO_W(128, __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc);
    CData/*6:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st = 0;
    CData/*4:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w = 0;
    QData/*63:0*/ __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__eng_adopt_ack;
    __Vdly__clean_disp_tb__DOT__eng_adopt_ack = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__eng_done_stb;
    __Vdly__clean_disp_tb__DOT__eng_done_stb = 0;
    CData/*6:0*/ __Vdlyvdim0__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0;
    __Vdlyvdim0__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0 = 0;
    QData/*63:0*/ __Vdlyvval__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0;
    __Vdlyvval__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0;
    __Vdlyvset__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0 = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt = 0;
    CData/*3:0*/ __Vdly__clean_disp_tb__DOT__u_eng__DOT__st_d;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__st_d = 0;
    CData/*3:0*/ __Vdly__clean_disp_tb__DOT__u_eng__DOT__st;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__eng_busy_w;
    __Vdly__clean_disp_tb__DOT__eng_busy_w = 0;
    IData/*27:0*/ __Vdly__clean_disp_tb__DOT__eng_flushed;
    __Vdly__clean_disp_tb__DOT__eng_flushed = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__eng_wr;
    __Vdly__clean_disp_tb__DOT__eng_wr = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd = 0;
    CData/*7:0*/ __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__eng_cur_frame;
    __Vdly__clean_disp_tb__DOT__eng_cur_frame = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H;
    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first;
    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field;
    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__vga_vblanks;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vga_vblanks = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__h_cnt;
    __Vdly__clean_disp_tb__DOT__vga__DOT__h_cnt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__field;
    __Vdly__clean_disp_tb__DOT__vga__DOT__field = 0;
    SData/*15:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__v_cnt;
    __Vdly__clean_disp_tb__DOT__vga__DOT__v_cnt = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__vb;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vb = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__vram_out_sync;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_out_sync = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__vram_start;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_start = 0;
    CData/*0:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_ahead;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_ahead = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd = 0;
    CData/*2:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd_next;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd_next = 0;
    IData/*23:0*/ __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter;
    __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter = 0;
    VlWide<9>/*287:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_82;
    // Body
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_total 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_head 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_head;
    __Vdly__clean_disp_tb__DOT__nlc_writed_bytes = vlSelf->clean_disp_tb__DOT__nlc_writed_bytes;
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__dbg) 
                     & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr)))) {
        VL_WRITEF("[P0] hdr w=%0# bitcnt=%0#\n",4,(0xfU 
                                                   & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U]),
                  7,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt));
    }
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__dbg) 
                     & (3U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))))) {
        VL_WRITEF("[P0] x=%0# w=%0# code=%0# bitcnt=%0#\n",
                  16,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x,
                  5,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w),
                  24,(0xffffffU & (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w)) 
                                      - (IData)(1U)))),
                  7,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt));
    }
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__dbg) 
                     & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr)))) {
        VL_WRITEF("[P1] hdr w=%0# bitcnt=%0#\n",4,(0xfU 
                                                   & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U]),
                  7,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt));
    }
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__dbg) 
                     & (3U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))))) {
        VL_WRITEF("[P1] x=%0# w=%0# code=%0# bitcnt=%0#\n",
                  16,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x,
                  5,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w),
                  24,(0xffffffU & (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w)) 
                                      - (IData)(1U)))),
                  7,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt));
    }
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__dbg) 
                     & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr)))) {
        VL_WRITEF("[P2] hdr w=%0# bitcnt=%0#\n",4,(0xfU 
                                                   & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U]),
                  7,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt));
    }
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__dbg) 
                     & (3U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))))) {
        VL_WRITEF("[P2] x=%0# w=%0# code=%0# bitcnt=%0#\n",
                  16,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x,
                  5,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w),
                  24,(0xffffffU & (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w)) 
                                      - (IData)(1U)))),
                  7,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt));
    }
    __Vdly__clean_disp_tb__DOT__av_beatno = vlSelf->clean_disp_tb__DOT__av_beatno;
    __Vdly__clean_disp_tb__DOT__dead_now = vlSelf->clean_disp_tb__DOT__dead_now;
    __Vdly__clean_disp_tb__DOT__av_rd_lat = vlSelf->clean_disp_tb__DOT__av_rd_lat;
    __Vdly__clean_disp_tb__DOT__av_rd_left = vlSelf->clean_disp_tb__DOT__av_rd_left;
    __Vdly__clean_disp_tb__DOT__av_rd_addr = vlSelf->clean_disp_tb__DOT__av_rd_addr;
    __Vdly__clean_disp_tb__DOT__av_reading = vlSelf->clean_disp_tb__DOT__av_reading;
    __Vdly__clean_disp_tb__DOT__dbg_freeze_frames = vlSelf->clean_disp_tb__DOT__dbg_freeze_frames;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_q = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_q;
    __Vdly__clean_disp_tb__DOT__nlc_uncompressed_bytes 
        = vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_pop_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_flushed 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_flushed;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_n = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_n;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[0U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[0U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[1U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[1U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[2U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[2U];
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1 = 0U;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_tail 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_tail;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_head 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw;
    __Vdly__clean_disp_tb__DOT__nlc_readed_bytes = vlSelf->clean_disp_tb__DOT__nlc_readed_bytes;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_waddr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ip_st = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ip_st;
    __Vdly__clean_disp_tb__DOT__nlc_long_valid = vlSelf->clean_disp_tb__DOT__nlc_long_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left2 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left2;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left1 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left1;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left0 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left0;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_lines 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_bank 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_tail 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_tail;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U] 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U];
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_burst 
        = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_address 
        = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_address;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_read 
        = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_read;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index 
        = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state 
        = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__state;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd 
        = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd;
    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__read_req 
        = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__read_req;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pw = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pw;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__tcnt = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__tcnt;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__y = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__dec_bank 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__lp = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0 = 0U;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0 = 0U;
    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0 = 0U;
    __Vdly__clean_disp_tb__DOT__av_wr_left = vlSelf->clean_disp_tb__DOT__av_wr_left;
    __Vdly__clean_disp_tb__DOT__av_wr_addr = vlSelf->clean_disp_tb__DOT__av_wr_addr;
    __Vdlyvset__clean_disp_tb__DOT__mem__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__mem__v1 = 0U;
    __Vdly__clean_disp_tb__DOT__av_busy_left = vlSelf->clean_disp_tb__DOT__av_busy_left;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL_W = vlSelf->clean_disp_tb__DOT__lz4__DOT__LL_W;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__data = vlSelf->clean_disp_tb__DOT__lz4__DOT__data;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 = vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP3 = vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13 = vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W = vlSelf->clean_disp_tb__DOT__lz4__DOT__ML_W;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__long_valid;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr3 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__offset = vlSelf->clean_disp_tb__DOT__lz4__DOT__offset;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP = vlSelf->clean_disp_tb__DOT__lz4__DOT__MP;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL = vlSelf->clean_disp_tb__DOT__lz4__DOT__LL;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML = vlSelf->clean_disp_tb__DOT__lz4__DOT__ML;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = vlSelf->clean_disp_tb__DOT__lz4__DOT__state;
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v1 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v2 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v3 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v4 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v5 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v6 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v7 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v8 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v9 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v10 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v11 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v12 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v13 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v14 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v15 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v16 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v17 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v18 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v19 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v20 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v21 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v22 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v23 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v24 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v25 = 0U;
    __Vdly__clean_disp_tb__DOT__reset_blit = vlSelf->clean_disp_tb__DOT__reset_blit;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes;
    __Vdly__clean_disp_tb__DOT__reset_switchres = vlSelf->clean_disp_tb__DOT__reset_switchres;
    __Vdly__clean_disp_tb__DOT__PoC_frame_switchres 
        = vlSelf->clean_disp_tb__DOT__PoC_frame_switchres;
    __Vdly__clean_disp_tb__DOT__auto_blit = vlSelf->clean_disp_tb__DOT__auto_blit;
    __Vdly__clean_disp_tb__DOT__vga_frameskip = vlSelf->clean_disp_tb__DOT__vga_frameskip;
    __Vdly__clean_disp_tb__DOT__lz4_write_long = vlSelf->clean_disp_tb__DOT__lz4_write_long;
    __Vdly__clean_disp_tb__DOT__lz4_reset = vlSelf->clean_disp_tb__DOT__lz4_reset;
    __Vdly__clean_disp_tb__DOT__lz4_stop = vlSelf->clean_disp_tb__DOT__lz4_stop;
    __Vdly__clean_disp_tb__DOT__lz4_run = vlSelf->clean_disp_tb__DOT__lz4_run;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_req = vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index 
        = vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_index;
    __Vdly__clean_disp_tb__DOT__PoC_audio_count_bytes 
        = vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_audio_ddr_bytes 
        = vlSelf->clean_disp_tb__DOT__PoC_audio_ddr_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_audio_count = vlSelf->clean_disp_tb__DOT__PoC_audio_count;
    __Vdly__clean_disp_tb__DOT__PoC_audio_samples = vlSelf->clean_disp_tb__DOT__PoC_audio_samples;
    __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB;
    __Vdly__clean_disp_tb__DOT__reset_blit_lz4 = vlSelf->clean_disp_tb__DOT__reset_blit_lz4;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_field = vlSelf->clean_disp_tb__DOT__PoC_lz4_field;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_ABCD = vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD;
    __Vdly__clean_disp_tb__DOT__nlc_cur_frame = vlSelf->clean_disp_tb__DOT__nlc_cur_frame;
    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U] = 
        vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U];
    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[1U] = 
        vlSelf->clean_disp_tb__DOT__ddr_data_tmp[1U];
    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[2U] = 
        vlSelf->clean_disp_tb__DOT__ddr_data_tmp[2U];
    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[3U] = 
        vlSelf->clean_disp_tb__DOT__ddr_data_tmp[3U];
    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[4U] = 
        vlSelf->clean_disp_tb__DOT__ddr_data_tmp[4U];
    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[5U] = 
        vlSelf->clean_disp_tb__DOT__ddr_data_tmp[5U];
    __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = vlSelf->clean_disp_tb__DOT__vram_drive_lz4;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4;
    __Vdly__clean_disp_tb__DOT__nlc_compressed_bytes 
        = vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes;
    __Vdly__clean_disp_tb__DOT__nlc_busy = vlSelf->clean_disp_tb__DOT__nlc_busy;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_frame_vram = vlSelf->clean_disp_tb__DOT__PoC_frame_vram;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio 
        = vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_audio;
    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit 
        = vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_blit;
    __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt = vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt;
    __Vdly__clean_disp_tb__DOT__nlc_lb_rd = vlSelf->clean_disp_tb__DOT__nlc_lb_rd;
    __Vdly__clean_disp_tb__DOT__nlc_fl_run = vlSelf->clean_disp_tb__DOT__nlc_fl_run;
    __Vdly__clean_disp_tb__DOT__nlc_fl_pre = vlSelf->clean_disp_tb__DOT__nlc_fl_pre;
    __Vdly__clean_disp_tb__DOT__ddr_data_write = vlSelf->clean_disp_tb__DOT__ddr_data_write;
    __Vdly__clean_disp_tb__DOT__nlc_flushed_bytes = vlSelf->clean_disp_tb__DOT__nlc_flushed_bytes;
    __Vdly__clean_disp_tb__DOT__nlc_out_ready = vlSelf->clean_disp_tb__DOT__nlc_out_ready;
    __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset 
        = vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_frame_ddr = vlSelf->clean_disp_tb__DOT__PoC_frame_ddr;
    __Vdly__clean_disp_tb__DOT__PoC_pll_S = vlSelf->clean_disp_tb__DOT__PoC_pll_S;
    __Vdly__clean_disp_tb__DOT__new_vmode = vlSelf->clean_disp_tb__DOT__new_vmode;
    __Vdly__clean_disp_tb__DOT__state = vlSelf->clean_disp_tb__DOT__state;
    __Vdly__clean_disp_tb__DOT__nlc_present_active 
        = vlSelf->clean_disp_tb__DOT__nlc_present_active;
    __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = vlSelf->clean_disp_tb__DOT__auto_blit_lz4;
    __Vdly__clean_disp_tb__DOT__nlc_present_pending 
        = vlSelf->clean_disp_tb__DOT__nlc_present_pending;
    __Vdly__clean_disp_tb__DOT__PoC_frame_lz4 = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4;
    __Vdly__clean_disp_tb__DOT__PoC_state_frameskip 
        = vlSelf->clean_disp_tb__DOT__PoC_state_frameskip;
    __Vdly__clean_disp_tb__DOT__cmd_fskip = vlSelf->clean_disp_tb__DOT__cmd_fskip;
    __Vdlyvset__clean_disp_tb__DOT__nlc_lbuf__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0 = 0U;
    __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v1 = 0U;
    __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes 
        = vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_interlaced = vlSelf->clean_disp_tb__DOT__PoC_interlaced;
    __Vdly__clean_disp_tb__DOT__PoC_H = vlSelf->clean_disp_tb__DOT__PoC_H;
    __Vdly__clean_disp_tb__DOT__vram_reset = vlSelf->clean_disp_tb__DOT__vram_reset;
    __Vdly__clean_disp_tb__DOT__vga_reset = vlSelf->clean_disp_tb__DOT__vga_reset;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
        = vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes;
    __Vdly__clean_disp_tb__DOT__PoC_FB_interlaced = vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced;
    __Vdly__clean_disp_tb__DOT__PoC_V = vlSelf->clean_disp_tb__DOT__PoC_V;
    __Vdly__clean_disp_tb__DOT__cencnt = vlSelf->clean_disp_tb__DOT__cencnt;
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns) 
                     & (IData)(vlSelf->clean_disp_tb__DOT__ddr_data_req)))) {
        VL_WRITEF("[DDRMUX2-VIOLATION] m0_rd while granted to M1 at %0t\n",
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_addr 
        = vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_addr;
    __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__blocks__v0 = 0U;
    __Vdly__clean_disp_tb__DOT__vga__DOT__v_cnt = vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vb = vlSelf->clean_disp_tb__DOT__vga__DOT__vb;
    __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_counter;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd_next 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_ahead 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_ahead;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_start 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_start;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_out_sync 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_wait_vblank;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7 = 0U;
    __Vdly__clean_disp_tb__DOT__vga__DOT__h_cnt = vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vga_vblanks 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks;
    __Vdly__clean_disp_tb__DOT__vga__DOT__field = vlSelf->clean_disp_tb__DOT__vga__DOT__field;
    __Vdly__clean_disp_tb__DOT__eng_cur_frame = vlSelf->clean_disp_tb__DOT__eng_cur_frame;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats = vlSelf->clean_disp_tb__DOT__u_eng__DOT__beats;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd = vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd;
    __Vdly__clean_disp_tb__DOT__eng_flushed = vlSelf->clean_disp_tb__DOT__eng_flushed;
    __Vdly__clean_disp_tb__DOT__eng_busy_w = vlSelf->clean_disp_tb__DOT__eng_busy_w;
    __Vdly__clean_disp_tb__DOT__eng_done_stb = vlSelf->clean_disp_tb__DOT__eng_done_stb;
    __Vdly__clean_disp_tb__DOT__eng_adopt_ack = vlSelf->clean_disp_tb__DOT__eng_adopt_ack;
    __Vdlyvset__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0 = 0U;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__st_d = vlSelf->clean_disp_tb__DOT__u_eng__DOT__st_d;
    __Vdly__clean_disp_tb__DOT__eng_wr = vlSelf->clean_disp_tb__DOT__eng_wr;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt = vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt;
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = vlSelf->clean_disp_tb__DOT__u_eng__DOT__st;
    __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0 = 0U;
    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field;
    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first;
    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H = vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
        = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38 = 0U;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39 = 0U;
    __Vdly__clean_disp_tb__DOT__ddr_mux__DOT__g = vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g;
    if (vlSelf->clean_disp_tb__DOT__cmd_fskip) {
        vlSelf->clean_disp_tb__DOT__fsk_pulses = ((IData)(1U) 
                                                  + vlSelf->clean_disp_tb__DOT__fsk_pulses);
    }
    vlSelf->clean_disp_tb__DOT__cycles = ((IData)(1U) 
                                          + vlSelf->clean_disp_tb__DOT__cycles);
    if (((0x1bU == (IData)(vlSelf->clean_disp_tb__DOT__state)) 
         & (0x1bU != (IData)(vlSelf->clean_disp_tb__DOT__stp2)))) {
        vlSelf->clean_disp_tb__DOT__auto_first_n = 
            ((IData)(1U) + vlSelf->clean_disp_tb__DOT__auto_first_n);
    }
    if (((0x1cU == (IData)(vlSelf->clean_disp_tb__DOT__state)) 
         & (0x1cU != (IData)(vlSelf->clean_disp_tb__DOT__stp2)))) {
        vlSelf->clean_disp_tb__DOT__auto_line_n = ((IData)(1U) 
                                                   + vlSelf->clean_disp_tb__DOT__auto_line_n);
    }
    if (((0x15U == (IData)(vlSelf->clean_disp_tb__DOT__state)) 
         & (0x15U != (IData)(vlSelf->clean_disp_tb__DOT__stp2)))) {
        vlSelf->clean_disp_tb__DOT__blitraw_n = ((IData)(1U) 
                                                 + vlSelf->clean_disp_tb__DOT__blitraw_n);
    }
    if (((vlSelf->clean_disp_tb__DOT__PoC_frame_vram 
          != vlSelf->clean_disp_tb__DOT__pfv_d0) & 
         (3U < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks))) {
        if (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__last_pub_cyc)) {
            vlSelf->clean_disp_tb__DOT__pub_period_sum 
                = (vlSelf->clean_disp_tb__DOT__pub_period_sum 
                   + (vlSelf->clean_disp_tb__DOT__cycles 
                      - vlSelf->clean_disp_tb__DOT__last_pub_cyc));
            vlSelf->clean_disp_tb__DOT__pub_period_n 
                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__pub_period_n);
        }
        vlSelf->clean_disp_tb__DOT__eof_frames = ((IData)(1U) 
                                                  + vlSelf->clean_disp_tb__DOT__eof_frames);
        vlSelf->clean_disp_tb__DOT__last_pub_cyc = vlSelf->clean_disp_tb__DOT__cycles;
    }
    if ((((IData)(vlSelf->clean_disp_tb__DOT__display_up) 
          & (IData)(vlSelf->clean_disp_tb__DOT__vs_d)) 
         & (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync))) {
        vlSelf->clean_disp_tb__DOT__vram_unsync_events 
            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__vram_unsync_events);
    }
    if (((((IData)(vlSelf->clean_disp_tb__DOT__display_up) 
           & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb))) 
          & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync))) 
         & (vlSelf->clean_disp_tb__DOT__vram_queue 
            < vlSelf->clean_disp_tb__DOT__vqmin))) {
        vlSelf->clean_disp_tb__DOT__vqmin = vlSelf->clean_disp_tb__DOT__vram_queue;
    }
    if ((((2U == vlSelf->clean_disp_tb__DOT__CODEC) 
          & (IData)(vlSelf->clean_disp_tb__DOT__nlc_busy)) 
         & (3U < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks))) {
        vlSelf->clean_disp_tb__DOT__c_busytot = ((IData)(1U) 
                                                 + vlSelf->clean_disp_tb__DOT__c_busytot);
        if ((0x76U <= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count))) {
            vlSelf->clean_disp_tb__DOT__c_offull = 
                ((IData)(1U) + vlSelf->clean_disp_tb__DOT__c_offull);
        }
        if ((0x14U > (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count))) {
            vlSelf->clean_disp_tb__DOT__c_iflow = ((IData)(1U) 
                                                   + vlSelf->clean_disp_tb__DOT__c_iflow);
        }
        if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count))) {
            vlSelf->clean_disp_tb__DOT__c_ifempty = 
                ((IData)(1U) + vlSelf->clean_disp_tb__DOT__c_ifempty);
        }
        if ((0x51U != (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((0x52U != (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((0x53U != (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if ((0x54U == (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        vlSelf->clean_disp_tb__DOT__c_infl 
                            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__c_infl);
                    }
                    if ((0x54U != (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        if ((0x56U == (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                            vlSelf->clean_disp_tb__DOT__c_flush 
                                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__c_flush);
                        }
                        if ((0x56U != (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                            vlSelf->clean_disp_tb__DOT__c_hdrend 
                                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__c_hdrend);
                        }
                    }
                }
                if ((0x53U == (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    vlSelf->clean_disp_tb__DOT__c_copy 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__c_copy);
                }
            }
            if ((0x52U == (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                vlSelf->clean_disp_tb__DOT__c_prep 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__c_prep);
            }
        }
        if ((0x51U == (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            vlSelf->clean_disp_tb__DOT__c_setup = ((IData)(1U) 
                                                   + vlSelf->clean_disp_tb__DOT__c_setup);
        }
        if ((1U & (~ ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                    vlSelf->clean_disp_tb__DOT__cc_prime 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_prime);
                }
                if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)))) {
                    vlSelf->clean_disp_tb__DOT__cc_wait 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_wait);
                }
            }
            if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)))) {
                    vlSelf->clean_disp_tb__DOT__cc_hdr 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_hdr);
                }
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                    vlSelf->clean_disp_tb__DOT__cc_a 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_a);
                }
            }
        }
        if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
            if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)))) {
                    vlSelf->clean_disp_tb__DOT__cc_flush 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_flush);
                }
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                    vlSelf->clean_disp_tb__DOT__cc_done 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_done);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                    vlSelf->clean_disp_tb__DOT__cc_eol 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_eol);
                }
                if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)))) {
                    vlSelf->clean_disp_tb__DOT__cc_b 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__cc_b);
                }
            }
        }
    }
    if (((((2U == vlSelf->clean_disp_tb__DOT__CODEC) 
           & (~ (IData)(vlSelf->clean_disp_tb__DOT__nlc_busy))) 
          & (IData)(vlSelf->clean_disp_tb__DOT__pf_bd)) 
         & (3U < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks))) {
        vlSelf->clean_disp_tb__DOT__pf_frames = ((IData)(1U) 
                                                 + vlSelf->clean_disp_tb__DOT__pf_frames);
    }
    if ((2U == vlSelf->clean_disp_tb__DOT__CODEC)) {
        vlSelf->clean_disp_tb__DOT__tot_cyc = ((IData)(1U) 
                                               + vlSelf->clean_disp_tb__DOT__tot_cyc);
        if (vlSelf->clean_disp_tb__DOT__cmd_fskip) {
            vlSelf->clean_disp_tb__DOT__fsk_cyc = ((IData)(1U) 
                                                   + vlSelf->clean_disp_tb__DOT__fsk_cyc);
        }
        vlSelf->clean_disp_tb__DOT__scnt = ((IData)(1U) 
                                            + vlSelf->clean_disp_tb__DOT__scnt);
        if (VL_LTES_III(32, 0x9c40U, vlSelf->clean_disp_tb__DOT__scnt)) {
            vlSelf->clean_disp_tb__DOT__fb_sig = ((
                                                   vlSelf->clean_disp_tb__DOT__mem
                                                   [0x1fU] 
                                                   ^ 
                                                   vlSelf->clean_disp_tb__DOT__mem
                                                   [0x2effU]) 
                                                  ^ 
                                                  vlSelf->clean_disp_tb__DOT__mem
                                                  [0x5ddfU]);
            vlSelf->clean_disp_tb__DOT__scnt = 0U;
            if ((vlSelf->clean_disp_tb__DOT__fb_sig 
                 != vlSelf->clean_disp_tb__DOT__fb_sig_prev)) {
                vlSelf->clean_disp_tb__DOT__fb_changes 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__fb_changes);
            }
            vlSelf->clean_disp_tb__DOT__fb_sig_prev 
                = vlSelf->clean_disp_tb__DOT__fb_sig;
        }
        if ((0x52U == (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            vlSelf->clean_disp_tb__DOT__prep_cyc = 
                ((IData)(1U) + vlSelf->clean_disp_tb__DOT__prep_cyc);
        }
        if ((0x54U == (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            vlSelf->clean_disp_tb__DOT__inf_cyc = ((IData)(1U) 
                                                   + vlSelf->clean_disp_tb__DOT__inf_cyc);
        }
        if (((0x1aU <= (IData)(vlSelf->clean_disp_tb__DOT__state)) 
             & (0x1dU >= (IData)(vlSelf->clean_disp_tb__DOT__state)))) {
            vlSelf->clean_disp_tb__DOT__ablit_cyc = 
                ((IData)(1U) + vlSelf->clean_disp_tb__DOT__ablit_cyc);
        }
        if (((0x54U == (IData)(vlSelf->clean_disp_tb__DOT__state)) 
             & (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB))) {
            vlSelf->clean_disp_tb__DOT__fbmode_cyc 
                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__fbmode_cyc);
        }
        if (((((0x54U == (IData)(vlSelf->clean_disp_tb__DOT__state)) 
               & (IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid)) 
              & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB))) 
             & (~ (IData)(vlSelf->clean_disp_tb__DOT__vram_req_ready)))) {
            vlSelf->clean_disp_tb__DOT__strm_stall_cyc 
                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__strm_stall_cyc);
        }
        if ((((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
              & (~ (IData)(vlSelf->clean_disp_tb__DOT__dw_d))) 
             & (0x32a0ffU > vlSelf->clean_disp_tb__DOT__ddr_addr))) {
            vlSelf->clean_disp_tb__DOT__fbw_cnt = ((IData)(1U) 
                                                   + vlSelf->clean_disp_tb__DOT__fbw_cnt);
        }
    }
    if (vlSelf->clean_disp_tb__DOT__eng_done_stb) {
        vlSelf->clean_disp_tb__DOT__eng_done_total 
            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__eng_done_total);
    }
    if (VL_UNLIKELY((((((2U == vlSelf->clean_disp_tb__DOT__CODEC) 
                        & (0x16U == (IData)(vlSelf->clean_disp_tb__DOT__state))) 
                       & (0x16U != (IData)(vlSelf->clean_disp_tb__DOT__st_pd))) 
                      & (0U == vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes)) 
                     & VL_GTS_III(32, 0x50U, vlSelf->clean_disp_tb__DOT__blit_log)))) {
        if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
            __Vtemp_41[0U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[0U];
            __Vtemp_41[1U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[1U];
            __Vtemp_41[2U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[2U];
            __Vtemp_41[3U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[3U];
            __Vtemp_41[4U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[4U];
            __Vtemp_41[5U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[5U];
            __Vtemp_41[6U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[6U];
            __Vtemp_41[7U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[7U];
            __Vtemp_41[8U] = Vclean_disp_tb__ConstPool__CONST_h99a373b3_0[8U];
        } else {
            __Vtemp_41[0U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[0U];
            __Vtemp_41[1U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[1U];
            __Vtemp_41[2U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[2U];
            __Vtemp_41[3U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[3U];
            __Vtemp_41[4U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[4U];
            __Vtemp_41[5U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[5U];
            __Vtemp_41[6U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[6U];
            __Vtemp_41[7U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[7U];
            __Vtemp_41[8U] = Vclean_disp_tb__ConstPool__CONST_h083ec1be_0[8U];
        }
        VL_WRITEF("[BLIT cyc=%0d from_state=%0#] fv=%0# fd=%0# px_vram=%0# px_ddr=%0# vram_bytes=%0# rgb_off=%0# bl_ddr=%0# bl_vram=%0# %0s\n",
                  32,vlSelf->clean_disp_tb__DOT__cycles,
                  8,(IData)(vlSelf->clean_disp_tb__DOT__st_pd),
                  24,vlSelf->clean_disp_tb__DOT__PoC_frame_vram,
                  24,vlSelf->clean_disp_tb__DOT__PoC_frame_ddr,
                  24,vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram,
                  24,vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr,
                  28,vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes,
                  2,(IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset),
                  16,vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr,
                  16,(IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram),
                  280,__Vtemp_41.data());
        vlSelf->clean_disp_tb__DOT__blit_log = ((IData)(1U) 
                                                + vlSelf->clean_disp_tb__DOT__blit_log);
    }
    if ((vlSelf->clean_disp_tb__DOT__PoC_frame_vram 
         != vlSelf->clean_disp_tb__DOT__fv_d)) {
        vlSelf->clean_disp_tb__DOT__nlc_displayed = 
            ((IData)(1U) + vlSelf->clean_disp_tb__DOT__nlc_displayed);
        vlSelf->clean_disp_tb__DOT__last_progress_cyc 
            = vlSelf->clean_disp_tb__DOT__cycles;
    }
    if (VL_UNLIKELY(((((2U == vlSelf->clean_disp_tb__DOT__CODEC) 
                       & (IData)(vlSelf->clean_disp_tb__DOT__nlc_busy)) 
                      & ((vlSelf->clean_disp_tb__DOT__cycles 
                          - vlSelf->clean_disp_tb__DOT__last_progress_cyc) 
                         > ((IData)(0x2dc6c0U) + ((IData)(0xcU) 
                                                  * vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame)))) 
                     & (~ (IData)(vlSelf->clean_disp_tb__DOT__wedged))))) {
        vlSelf->clean_disp_tb__DOT__wedged = 1U;
        VL_WRITEF("*** WEDGE: no displayed NLC frame for >3M cyc while nlc_busy @%0d (st=%0# done=%0# wr=%0#/%0# ub=%0#) ***\n",
                  32,vlSelf->clean_disp_tb__DOT__cycles,
                  8,(IData)(vlSelf->clean_disp_tb__DOT__state),
                  1,vlSelf->clean_disp_tb__DOT__nlc_done,
                  28,vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes,
                  28,vlSelf->clean_disp_tb__DOT__nlc_frame_bytes,
                  32,vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cdbg) 
                     & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__comb_v)))) {
        VL_WRITEF("[COMB] rec=(%0d,%0d,%0d) -> RGB=(%0#,%0#,%0#)\n",
                  16,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec0,
                  16,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec1),
                  16,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec2,
                  8,([&]() {
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__v 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oR;
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__Vfuncout 
                            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__v)))
                                ? 0U : (VL_LTS_III(32, 0xffU, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__v)))
                                         ? 0xffU : 
                                        (0xffU & (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__v))));
                    }(), (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__52__Vfuncout)),
                  8,([&]() {
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__v 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oG;
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__Vfuncout 
                            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__v)))
                                ? 0U : (VL_LTS_III(32, 0xffU, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__v)))
                                         ? 0xffU : 
                                        (0xffU & (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__v))));
                    }(), (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__53__Vfuncout)),
                  8,([&]() {
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__v 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iB;
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__Vfuncout 
                            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__v)))
                                ? 0U : (VL_LTS_III(32, 0xffU, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__v)))
                                         ? 0xffU : 
                                        (0xffU & (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__v))));
                    }(), (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__54__Vfuncout)));
    }
    if (vlSelf->clean_disp_tb__DOT__ce_pix) {
        if (vlSelf->clean_disp_tb__DOT__vga_de_w) {
            vlSelf->clean_disp_tb__DOT__row = ((0U 
                                                != vlSelf->clean_disp_tb__DOT__ILACE)
                                                ? (
                                                   VL_MULS_III(32, (IData)(2U), vlSelf->clean_disp_tb__DOT__capy) 
                                                   + 
                                                   ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__field)
                                                     ? 1U
                                                     : 0U))
                                                : vlSelf->clean_disp_tb__DOT__capy);
            if (((VL_GTS_III(32, 0x2d0U, vlSelf->clean_disp_tb__DOT__row) 
                  & VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__capx, vlSelf->clean_disp_tb__DOT__W)) 
                 & VL_GTS_III(32, 0x2a3000U, ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(3U), 
                                                            (VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__W) 
                                                             + vlSelf->clean_disp_tb__DOT__capx)))))) {
                if (vlSelf->clean_disp_tb__DOT__vga__DOT__out_ena) {
                    vlSelf->clean_disp_tb__DOT____Vlvbound_h6d59f7ef__0 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay 
                                    >> 0x10U));
                    vlSelf->clean_disp_tb__DOT____Vlvbound_ha6730a4e__0 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay 
                                    >> 8U));
                    vlSelf->clean_disp_tb__DOT____Vlvbound_ha663fb1a__0 
                        = (0xffU & vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay);
                } else if (vlSelf->clean_disp_tb__DOT__vga__DOT__out_ena_skip) {
                    vlSelf->clean_disp_tb__DOT____Vlvbound_h6d59f7ef__0 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay_skip 
                                    >> 0x10U));
                    vlSelf->clean_disp_tb__DOT____Vlvbound_ha6730a4e__0 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay_skip 
                                    >> 8U));
                    vlSelf->clean_disp_tb__DOT____Vlvbound_ha663fb1a__0 
                        = (0xffU & vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay_skip);
                } else {
                    vlSelf->clean_disp_tb__DOT____Vlvbound_h6d59f7ef__0 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__pixel 
                                    >> 0x10U));
                    vlSelf->clean_disp_tb__DOT____Vlvbound_ha6730a4e__0 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__pixel 
                                    >> 8U));
                    vlSelf->clean_disp_tb__DOT____Vlvbound_ha663fb1a__0 
                        = (0xffU & vlSelf->clean_disp_tb__DOT__vga__DOT__pixel);
                }
                if ((0x2a2fffU >= (0x3fffffU & VL_MULS_III(32, (IData)(3U), 
                                                           (VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__W) 
                                                            + vlSelf->clean_disp_tb__DOT__capx))))) {
                    vlSelf->clean_disp_tb__DOT__img[(0x3fffffU 
                                                     & VL_MULS_III(32, (IData)(3U), 
                                                                   (VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__W) 
                                                                    + vlSelf->clean_disp_tb__DOT__capx)))] 
                        = vlSelf->clean_disp_tb__DOT____Vlvbound_h6d59f7ef__0;
                }
                if ((0x2a2fffU >= (0x3fffffU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(3U), 
                                                              (VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__W) 
                                                               + vlSelf->clean_disp_tb__DOT__capx)))))) {
                    vlSelf->clean_disp_tb__DOT__img[(0x3fffffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(3U), 
                                                                    (VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__W) 
                                                                     + vlSelf->clean_disp_tb__DOT__capx))))] 
                        = vlSelf->clean_disp_tb__DOT____Vlvbound_ha6730a4e__0;
                }
                if ((0x2a2fffU >= (0x3fffffU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(3U), 
                                                              (VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__W) 
                                                               + vlSelf->clean_disp_tb__DOT__capx)))))) {
                    vlSelf->clean_disp_tb__DOT__img[(0x3fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(3U), 
                                                                    (VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__W) 
                                                                     + vlSelf->clean_disp_tb__DOT__capx))))] 
                        = vlSelf->clean_disp_tb__DOT____Vlvbound_ha663fb1a__0;
                }
            }
            if (VL_GTS_III(32, vlSelf->clean_disp_tb__DOT__row, vlSelf->clean_disp_tb__DOT__maxrow)) {
                vlSelf->clean_disp_tb__DOT__maxrow 
                    = vlSelf->clean_disp_tb__DOT__row;
            }
            vlSelf->clean_disp_tb__DOT__capx = ((IData)(1U) 
                                                + vlSelf->clean_disp_tb__DOT__capx);
        } else if (vlSelf->clean_disp_tb__DOT__de_d) {
            vlSelf->clean_disp_tb__DOT__capy = ((IData)(1U) 
                                                + vlSelf->clean_disp_tb__DOT__capy);
            vlSelf->clean_disp_tb__DOT__capx = 0U;
        }
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__vbl_d)))) {
        vlSelf->clean_disp_tb__DOT__fieldcnt = ((IData)(1U) 
                                                + vlSelf->clean_disp_tb__DOT__fieldcnt);
        vlSelf->clean_disp_tb__DOT__capx = 0U;
        vlSelf->clean_disp_tb__DOT__capy = 0U;
        if (((0U == vlSelf->clean_disp_tb__DOT__ILACE) 
             | VL_LTES_III(32, 2U, vlSelf->clean_disp_tb__DOT__fieldcnt))) {
            if (VL_UNLIKELY(VL_LTS_III(32, 1U, vlSelf->clean_disp_tb__DOT__maxrow))) {
                VL_SFORMAT_X(256,vlSelf->clean_disp_tb__DOT__fname
                             ,"frame_%0d_%03d_fv%0#.ppm",
                             32,vlSelf->clean_disp_tb__DOT__CODEC,
                             32,vlSelf->clean_disp_tb__DOT__frames_out,
                             24,vlSelf->clean_disp_tb__DOT__PoC_frame_vram);
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__rows 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__maxrow);
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[0U] 
                    = vlSelf->clean_disp_tb__DOT__fname[0U];
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[1U] 
                    = vlSelf->clean_disp_tb__DOT__fname[1U];
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[2U] 
                    = vlSelf->clean_disp_tb__DOT__fname[2U];
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[3U] 
                    = vlSelf->clean_disp_tb__DOT__fname[3U];
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[4U] 
                    = vlSelf->clean_disp_tb__DOT__fname[4U];
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[5U] 
                    = vlSelf->clean_disp_tb__DOT__fname[5U];
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[6U] 
                    = vlSelf->clean_disp_tb__DOT__fname[6U];
                __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm[7U] 
                    = vlSelf->clean_disp_tb__DOT__fname[7U];
                vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__rr 
                    = (VL_GTS_III(32, __Vtask_clean_disp_tb__DOT__dump_ppm__3__rows, vlSelf->clean_disp_tb__DOT__H)
                        ? vlSelf->clean_disp_tb__DOT__H
                        : __Vtask_clean_disp_tb__DOT__dump_ppm__3__rows);
                vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__fdo 
                    = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(8, __Vtask_clean_disp_tb__DOT__dump_ppm__3__nm)
                                  , std::string{"wb"});
                ;
                VL_FWRITEF(vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__fdo,"P6\n%0d %0d\n255\n",
                           32,vlSelf->clean_disp_tb__DOT__W,
                           32,vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__rr);
                vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__i = 0U;
                while (VL_LTS_III(32, vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__i, 
                                  VL_MULS_III(32, (IData)(3U), 
                                              VL_MULS_III(32, vlSelf->clean_disp_tb__DOT__W, vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__rr)))) {
                    VL_FWRITEF(vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__fdo,"%c",
                               8,((0x2a2fffU >= (0x3fffffU 
                                                 & vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__i))
                                   ? vlSelf->clean_disp_tb__DOT__img
                                  [(0x3fffffU & vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__i)]
                                   : 0U));
                    vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__i 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__i);
                }
                VL_FCLOSE_I(vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__fdo); if (VL_UNLIKELY(
                                                                                (0U 
                                                                                != vlSelf->clean_disp_tb__DOT__DEBUG))) {
                    VL_WRITEF("[%0d] dumped %0s (%0dx%0d)\n",
                              32,vlSelf->clean_disp_tb__DOT__cycles,
                              256,__Vtask_clean_disp_tb__DOT__dump_ppm__3__nm.data(),
                              32,vlSelf->clean_disp_tb__DOT__W,
                              32,vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__rr);
                }
                VL_WRITEF("[CAP] file=%0s cyc=%0d\n",
                          256,vlSelf->clean_disp_tb__DOT__fname.data(),
                          32,vlSelf->clean_disp_tb__DOT__cycles);
                vlSelf->clean_disp_tb__DOT__frames_out 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__frames_out);
            }
            vlSelf->clean_disp_tb__DOT__fieldcnt = 0U;
            vlSelf->clean_disp_tb__DOT__maxrow = 0U;
        }
    }
    if (((0U != vlSelf->clean_disp_tb__DOT__DEBUG) 
         & (2U == vlSelf->clean_disp_tb__DOT__CODEC))) {
        vlSelf->clean_disp_tb__DOT__trc = ((IData)(1U) 
                                           + vlSelf->clean_disp_tb__DOT__trc);
        if (VL_UNLIKELY((0U == VL_MODDIVS_III(32, vlSelf->clean_disp_tb__DOT__trc, (IData)(0x9c40U))))) {
            VL_WRITEF("[TRC %0d] st=%0# done=%0# paused=%0# lv=%0# ordy=%0# busy=%0# fskip=%0# wr=%0# rd=%0# ub=%0# sub=%0# wrb=%0# vrampx=%0# | eng st=%0# busy=%0# fr=%0# fl=%0# pend=%0# act=%0# wm=%0# abrt=%0#\n",
                      32,vlSelf->clean_disp_tb__DOT__cycles,
                      8,(IData)(vlSelf->clean_disp_tb__DOT__state),
                      1,vlSelf->clean_disp_tb__DOT__nlc_done,
                      1,(IData)(vlSelf->clean_disp_tb__DOT__nlc_paused),
                      1,vlSelf->clean_disp_tb__DOT__nlc_long_valid,
                      1,(IData)(vlSelf->clean_disp_tb__DOT__nlc_out_ready),
                      1,vlSelf->clean_disp_tb__DOT__nlc_busy,
                      1,(IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip),
                      32,vlSelf->clean_disp_tb__DOT__nlc_writed_bytes,
                      32,vlSelf->clean_disp_tb__DOT__nlc_readed_bytes,
                      32,vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes,
                      32,vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes,
                      28,vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes,
                      24,vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter,
                      4,(IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st),
                      1,vlSelf->clean_disp_tb__DOT__eng_busy_w,
                      24,vlSelf->clean_disp_tb__DOT__eng_cur_frame,
                      28,vlSelf->clean_disp_tb__DOT__eng_flushed,
                      1,(IData)(vlSelf->clean_disp_tb__DOT__nlc_present_pending),
                      1,vlSelf->clean_disp_tb__DOT__nlc_present_active,
                      32,vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm,
                      1,(IData)(vlSelf->clean_disp_tb__DOT__eng_abort_r));
        }
    }
    if ((1U & ((((~ (IData)(vlSelf->clean_disp_tb__DOT__eng_busy_w)) 
                 | (IData)(vlSelf->clean_disp_tb__DOT__eng_done_stb)) 
                | (vlSelf->clean_disp_tb__DOT__eng_flushed 
                   != vlSelf->clean_disp_tb__DOT__engfl_d)) 
               | ((IData)(vlSelf->clean_disp_tb__DOT__eng_busy_w) 
                  != (IData)(vlSelf->clean_disp_tb__DOT__engbusy_d))))) {
        vlSelf->clean_disp_tb__DOT__eng_prog_cyc = vlSelf->clean_disp_tb__DOT__cycles;
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->clean_disp_tb__DOT__eng_busy_w) 
                       & (IData)(vlSelf->clean_disp_tb__DOT__eng_pend_valid)) 
                      & VL_LTS_III(32, 0x300000U, (vlSelf->clean_disp_tb__DOT__cycles 
                                                   - vlSelf->clean_disp_tb__DOT__eng_prog_cyc))) 
                     & (~ (IData)(vlSelf->clean_disp_tb__DOT__engwedge_logged))))) {
        vlSelf->clean_disp_tb__DOT__engwedge_logged = 1U;
        VL_WRITEF("*** ENGWEDGE @%0d: engine parked st=%0# fr=%0# wm=%0#/%0# final=%0# wcnt=%0# wd_fired=%0# flushed=%0# pend=%0# (the /57 E_RUN park) ***\n",
                  32,vlSelf->clean_disp_tb__DOT__cycles,
                  4,(IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st),
                  24,vlSelf->clean_disp_tb__DOT__eng_cur_frame,
                  32,vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm,
                  32,vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_size,
                  32,(IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_final),
                  8,vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt,
                  1,(IData)(vlSelf->clean_disp_tb__DOT__eng_wd_fired),
                  28,vlSelf->clean_disp_tb__DOT__eng_flushed,
                  1,(IData)(vlSelf->clean_disp_tb__DOT__eng_pend_valid));
    }
    if (vlSelf->clean_disp_tb__DOT__lz4_reset) {
        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_total = 0U;
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__lz4_write_ready) 
         & (IData)(vlSelf->clean_disp_tb__DOT__lz4_write_long))) {
        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_total 
            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total);
    }
    if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_head = 0U;
        __Vdly__clean_disp_tb__DOT__nlc_writed_bytes = 0U;
    } else if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__write_long) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_head 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_head)));
        __Vdly__clean_disp_tb__DOT__nlc_writed_bytes 
            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__nlc_writed_bytes);
    }
    if ((0U != vlSelf->clean_disp_tb__DOT__DEBUG)) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt)) 
                         & (0U != (IData)(vlSelf->clean_disp_tb__DOT__vc_d))))) {
            VL_WRITEF("[VC0 %0d] queue=%0# sync=%0# vram_px=%0# frame_vram=%0# vga_frame=%0# st=%0#\n",
                      32,vlSelf->clean_disp_tb__DOT__cycles,
                      24,vlSelf->clean_disp_tb__DOT__vram_queue,
                      1,(1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync))),
                      24,vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter,
                      24,vlSelf->clean_disp_tb__DOT__PoC_frame_vram,
                      24,vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks,
                      8,(IData)(vlSelf->clean_disp_tb__DOT__state));
        }
        vlSelf->clean_disp_tb__DOT__vc_d = (0x3ffU 
                                            & (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt));
    }
    if (((((~ (IData)(vlSelf->clean_disp_tb__DOT__nlc_busy)) 
           & (IData)(vlSelf->clean_disp_tb__DOT__nb_d)) 
          & (3U < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)) 
         & VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__nb_start))) {
        vlSelf->clean_disp_tb__DOT__nb_sum = (vlSelf->clean_disp_tb__DOT__nb_sum 
                                              + (vlSelf->clean_disp_tb__DOT__cycles 
                                                 - vlSelf->clean_disp_tb__DOT__nb_start));
        vlSelf->clean_disp_tb__DOT__nb_n = ((IData)(1U) 
                                            + vlSelf->clean_disp_tb__DOT__nb_n);
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__nlc_busy) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__nb_d)))) {
        vlSelf->clean_disp_tb__DOT__nb_start = vlSelf->clean_disp_tb__DOT__cycles;
    }
    if ((0U != vlSelf->clean_disp_tb__DOT__DEBUG)) {
        if (VL_UNLIKELY((((IData)(vlSelf->clean_disp_tb__DOT__state) 
                          != (IData)(vlSelf->clean_disp_tb__DOT__st_prev)) 
                         & (((0x50U <= (IData)(vlSelf->clean_disp_tb__DOT__state)) 
                             & (0x56U >= (IData)(vlSelf->clean_disp_tb__DOT__state))) 
                            | ((0x50U <= (IData)(vlSelf->clean_disp_tb__DOT__st_prev)) 
                               & (0x56U >= (IData)(vlSelf->clean_disp_tb__DOT__st_prev))))))) {
            VL_WRITEF("[NST %0d] %0#->%0# busy=%0# ablz4=%0# strm=1 wrb=%0# writed=%0# sub=%0# ub=%0# lv=%0# done=%0# | dec: cst=%0# ldst=%0# brdy=%b ifcnt=%0# ldlines=%0# ofcnt=%0#\n",
                      32,vlSelf->clean_disp_tb__DOT__cycles,
                      8,(IData)(vlSelf->clean_disp_tb__DOT__st_prev),
                      8,vlSelf->clean_disp_tb__DOT__state,
                      1,(IData)(vlSelf->clean_disp_tb__DOT__nlc_busy),
                      1,vlSelf->clean_disp_tb__DOT__auto_blit_lz4,
                      28,vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes,
                      32,vlSelf->clean_disp_tb__DOT__nlc_writed_bytes,
                      32,vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes,
                      32,vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes,
                      1,(IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid),
                      1,vlSelf->clean_disp_tb__DOT__nlc_done,
                      3,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst),
                      2,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st,
                      2,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy),
                      9,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count,
                      16,(IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines),
                      8,vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count);
        }
        vlSelf->clean_disp_tb__DOT__st_prev = vlSelf->clean_disp_tb__DOT__state;
    }
    if (vlSelf->clean_disp_tb__DOT__lz4_reset) {
        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_addr = 0U;
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__lz4_write_ready) 
         & (IData)(vlSelf->clean_disp_tb__DOT__lz4_write_long))) {
        __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__blocks__v0 
            = vlSelf->clean_disp_tb__DOT__lz4_compressed_long;
        __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__blocks__v0 = 1U;
        __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__blocks__v0 
            = vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_addr;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_addr 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_addr)));
    }
    if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_we_r))) {
        __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wd_r;
        __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0 = 1U;
        __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0 
            = (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank) 
                << 7U) | (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wa_r)));
    }
    if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_we_r))) {
        __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wd_r;
        __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0 = 1U;
        __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0 
            = (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank) 
                << 7U) | (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wa_r)));
    }
    if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_we_r))) {
        __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wd_r;
        __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0 = 1U;
        __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0 
            = (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank) 
                << 7U) | (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wa_r)));
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_write) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__AV_BUSY)))) {
        if ((0U == vlSelf->clean_disp_tb__DOT__av_wr_left)) {
            __Vdlyvval__clean_disp_tb__DOT__mem__v0 
                = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_data;
            __Vdlyvset__clean_disp_tb__DOT__mem__v0 = 1U;
            __Vdlyvdim0__clean_disp_tb__DOT__mem__v0 
                = (0x1fffffU & (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_address 
                                >> 2U));
            __Vdly__clean_disp_tb__DOT__av_wr_addr 
                = (0x1fffffffU & ((IData)(1U) + (0x6000000U 
                                                 | (0x1ffffffU 
                                                    & (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_address 
                                                       >> 2U)))));
            __Vdly__clean_disp_tb__DOT__av_wr_left 
                = ((1U < (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst))
                    ? ((IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst) 
                       - (IData)(1U)) : 0U);
            __Vdly__clean_disp_tb__DOT__av_busy_left 
                = (vlSelf->clean_disp_tb__DOT__WR_OVERHEAD 
                   + vlSelf->clean_disp_tb__DOT__WR_BEAT);
        } else {
            __Vdly__clean_disp_tb__DOT__av_wr_left 
                = (vlSelf->clean_disp_tb__DOT__av_wr_left 
                   - (IData)(1U));
            __Vdlyvval__clean_disp_tb__DOT__mem__v1 
                = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_data;
            __Vdlyvset__clean_disp_tb__DOT__mem__v1 = 1U;
            __Vdlyvdim0__clean_disp_tb__DOT__mem__v1 
                = (0x1fffffU & vlSelf->clean_disp_tb__DOT__av_wr_addr);
            __Vdly__clean_disp_tb__DOT__av_busy_left 
                = vlSelf->clean_disp_tb__DOT__WR_BEAT;
            __Vdly__clean_disp_tb__DOT__av_wr_addr 
                = (0x1fffffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__av_wr_addr));
        }
    }
    if (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__av_busy_left)) {
        __Vdly__clean_disp_tb__DOT__av_busy_left = 
            (vlSelf->clean_disp_tb__DOT__av_busy_left 
             - (IData)(1U));
    }
    __Vdly__clean_disp_tb__DOT__cencnt = (((IData)(vlSelf->clean_disp_tb__DOT__cencnt) 
                                           == (0xfU 
                                               & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_ce_pix) 
                                                  - (IData)(1U))))
                                           ? 0U : (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->clean_disp_tb__DOT__cencnt))));
    if (vlSelf->clean_disp_tb__DOT__vga_reset) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__v_cnt = 0U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__vb = 1U;
    }
    if (vlSelf->clean_disp_tb__DOT__vga_soft_reset) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__v_cnt 
            = (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)
                           ? ((IData)(2U) + (IData)(vlSelf->clean_disp_tb__DOT__PoC_V))
                           : ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__PoC_V))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__vb = 1U;
    }
    if ((((IData)(vlSelf->clean_disp_tb__DOT__ce_pix) 
          & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga_reset))) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset)))) {
        if (((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt) 
             == (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                            + (IData)(vlSelf->clean_disp_tb__DOT__PoC_HFP))))) {
            __Vdly__clean_disp_tb__DOT__vga__DOT__v_cnt 
                = (0xffffU & (((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                               >= ((0xffffU & (((IData)(vlSelf->clean_disp_tb__DOT__PoC_V) 
                                                + ((IData)(vlSelf->clean_disp_tb__DOT__PoC_VBP) 
                                                   + 
                                                   ((IData)(vlSelf->clean_disp_tb__DOT__PoC_VFP) 
                                                    + (IData)(vlSelf->clean_disp_tb__DOT__PoC_VS)))) 
                                               - (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT____VdfgTmp_hf63363d6__0))) 
                                   - (IData)(1U))) ? 
                              (((IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced) 
                                & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__field)))
                                ? 1U : 0U) : ((IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)
                                               ? ((IData)(2U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt)))));
            __Vdly__clean_disp_tb__DOT__vga__DOT__vb 
                = ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                   >= (IData)(vlSelf->clean_disp_tb__DOT__PoC_V));
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->clean_disp_tb__DOT__buswedge_logged)) 
                      & (0U < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)) 
                     & VL_LTS_III(32, 0x2dc6c0U, (vlSelf->clean_disp_tb__DOT__cycles 
                                                  - vlSelf->clean_disp_tb__DOT__busfree_cyc))))) {
        VL_WRITEF("*** BUS WEDGE: mem_busy stuck high >3M cyc @%0d (fsm=%0# eng=%0# eng_req=%0#) ***\n",
                  32,vlSelf->clean_disp_tb__DOT__cycles,
                  8,(IData)(vlSelf->clean_disp_tb__DOT__state),
                  4,vlSelf->clean_disp_tb__DOT__u_eng__DOT__st,
                  1,(IData)(vlSelf->clean_disp_tb__DOT__eng_req));
        vlSelf->clean_disp_tb__DOT__buswedge_logged = 1U;
    }
    if (vlSelf->clean_disp_tb__DOT__eng_done_stb) {
        if ((vlSelf->clean_disp_tb__DOT__eng_cur_frame 
             > vlSelf->clean_disp_tb__DOT__PoC_frame_lz4)) {
            __Vdly__clean_disp_tb__DOT__PoC_frame_lz4 
                = vlSelf->clean_disp_tb__DOT__eng_cur_frame;
        }
        if (((0U == vlSelf->clean_disp_tb__DOT__PoC_frame_vram) 
             | (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset))) {
            __Vdly__clean_disp_tb__DOT__nlc_present_pending = 1U;
        }
    }
    if ((2U == vlSelf->clean_disp_tb__DOT__CODEC)) {
        vlSelf->clean_disp_tb__DOT__dw_d = vlSelf->clean_disp_tb__DOT__ddr_data_write;
    }
    if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__write_long) {
        __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0 
            = ((IData)(vlSelf->clean_disp_tb__DOT__nlc_eng_sel)
                ? vlSelf->clean_disp_tb__DOT__eng_dec_clong
                : vlSelf->clean_disp_tb__DOT__nlc_compressed_long);
        __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0 = 1U;
        __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0 
            = (0xffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_head));
    }
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v0 = 1U;
    if (((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
         | (IData)(vlSelf->clean_disp_tb__DOT__vram_reset))) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter = 0U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 = 0U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 = 1U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 = 2U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 = 3U;
    }
    if (vlSelf->clean_disp_tb__DOT__vram_wren1) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
            = ((IData)(vlSelf->clean_disp_tb__DOT__vram_end_frame)
                ? 1U : (0xffffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__0 
            = vlSelf->clean_disp_tb__DOT__r_vram_in1;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__0 
            = vlSelf->clean_disp_tb__DOT__g_vram_in1;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__0 
            = vlSelf->clean_disp_tb__DOT__b_vram_in1;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__0 = 1U;
        if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
        }
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))));
    }
    if (vlSelf->clean_disp_tb__DOT__vram_wren2) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
            = ((IData)(vlSelf->clean_disp_tb__DOT__vram_end_frame)
                ? 2U : (0xffffffU & ((IData)(2U) + vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__0 
            = vlSelf->clean_disp_tb__DOT__r_vram_in2;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                         ? 0U : (7U & ((IData)(2U) 
                                       + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1)))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                         ? 0U : (7U & ((IData)(2U) 
                                       + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3)))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                         ? 0U : (7U & ((IData)(2U) 
                                       + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4)))));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__0 
            = vlSelf->clean_disp_tb__DOT__g_vram_in2;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__0 
            = vlSelf->clean_disp_tb__DOT__b_vram_in2;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__0 = 1U;
        if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
        }
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                         ? 0U : (7U & ((IData)(2U) 
                                       + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2)))));
    }
    if (vlSelf->clean_disp_tb__DOT__vram_wren3) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
            = ((IData)(vlSelf->clean_disp_tb__DOT__vram_end_frame)
                ? 3U : (0xffffffU & ((IData)(3U) + vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h0cd7ed91__0 
            = vlSelf->clean_disp_tb__DOT__r_vram_in3;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                         ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                  ? 0U : (7U & ((IData)(3U) 
                                                + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                         ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                  ? 0U : (7U & ((IData)(3U) 
                                                + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                         ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                  ? 0U : (7U & ((IData)(3U) 
                                                + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))))));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hf0614c82__0 
            = vlSelf->clean_disp_tb__DOT__g_vram_in3;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hbb2bd4d7__0 
            = vlSelf->clean_disp_tb__DOT__b_vram_in3;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__0 = 1U;
        if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h0cd7ed91__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hf0614c82__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hbb2bd4d7__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
        }
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                         ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                  ? 0U : (7U & ((IData)(3U) 
                                                + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))))));
    }
    if (vlSelf->clean_disp_tb__DOT__vram_wren4) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
            = ((IData)(vlSelf->clean_disp_tb__DOT__vram_end_frame)
                ? 4U : (0xffffffU & ((IData)(4U) + vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h449ff81d__0 
            = vlSelf->clean_disp_tb__DOT__r_vram_in4;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                ? 3U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                         ? 2U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                  ? 1U : ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                           ? 0U : (7U 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1)))))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                ? 3U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                         ? 2U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                  ? 1U : ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                           ? 0U : (7U 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2)))))));
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                ? 3U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                         ? 2U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                  ? 1U : ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                           ? 0U : (7U 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3)))))));
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha98968e6__0 
            = vlSelf->clean_disp_tb__DOT__g_vram_in4;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8573bf5b__0 
            = vlSelf->clean_disp_tb__DOT__b_vram_in4;
        vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__0 = 1U;
        if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))) {
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h449ff81d__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha98968e6__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8573bf5b__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
            vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9 
                = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__0;
            vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9 = 1U;
            vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
        }
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
            = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                ? 3U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                         ? 2U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                  ? 1U : ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                           ? 0U : (7U 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4)))))));
    }
    if (((((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
           | ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_prev_interlaced) 
              != (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced))) 
          | ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_V) 
             != (IData)(vlSelf->clean_disp_tb__DOT__PoC_V))) 
         | (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset))) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__FB_prev_interlaced 
            = vlSelf->clean_disp_tb__DOT__PoC_interlaced;
        __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H 
            = vlSelf->clean_disp_tb__DOT__PoC_H;
        vlSelf->clean_disp_tb__DOT__vga__DOT__FB_V 
            = vlSelf->clean_disp_tb__DOT__PoC_V;
        __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first = 1U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field = 1U;
    }
    if (vlSelf->clean_disp_tb__DOT__vram_reset) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H 
            = vlSelf->clean_disp_tb__DOT__PoC_H;
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced)))) {
        if (((IData)(vlSelf->clean_disp_tb__DOT__vram_wren1) 
             & (~ (IData)(vlSelf->clean_disp_tb__DOT__vram_wren2)))) {
            if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field)))) {
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__1 = 0U;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__1;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                }
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
            }
            __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__62__pixels_to_write = 1U;
            __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H 
                = (0xffffU & ((1U < (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))
                               ? ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H) 
                                  - (IData)(1U)) : 
                              (((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                - (IData)(1U)) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))));
            if ((1U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                if (((0xffffffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                                   + (IData)(__Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__62__pixels_to_write))) 
                     >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame)) {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first)));
                } else {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field)));
                }
            }
        }
        if (((IData)(vlSelf->clean_disp_tb__DOT__vram_wren2) 
             & (~ (IData)(vlSelf->clean_disp_tb__DOT__vram_wren3)))) {
            if (vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field) {
                if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__1 = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))));
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))));
                }
            } else {
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__2 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__2;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                }
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__2 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__2;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                }
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__3 = 1U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))));
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__1 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in2;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__1 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in2;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__1 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in2;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))));
                }
            }
            __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__65__pixels_to_write = 2U;
            __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H 
                = (0xffffU & ((2U < (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))
                               ? ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H) 
                                  - (IData)(2U)) : 
                              (((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                - (IData)(2U)) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))));
            if ((2U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                if (((0xffffffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                                   + (IData)(__Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__65__pixels_to_write))) 
                     >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame)) {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first)));
                } else {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field)));
                }
            }
        }
        if (((IData)(vlSelf->clean_disp_tb__DOT__vram_wren3) 
             & (~ (IData)(vlSelf->clean_disp_tb__DOT__vram_wren4)))) {
            if (vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field) {
                if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__3 = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))));
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__1 = 0U;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))));
                }
                if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__2 = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4)))));
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3)))));
                }
            } else {
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__4 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__4;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                }
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__4 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__4;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                }
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__3 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__3;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                }
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__5 = 1U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4)))));
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__5 = 1U;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__2 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in2;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__2 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in2;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__2 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in2;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__5;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__1 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__1 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__1 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in3;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__5;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2)))));
                }
                if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__6 = 1U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))));
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__3 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__3 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__3 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in3;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__6;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))));
                }
            }
            __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__70__pixels_to_write = 3U;
            __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H 
                = (0xffffU & ((3U < (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))
                               ? ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H) 
                                  - (IData)(3U)) : 
                              (((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                - (IData)(3U)) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))));
            if ((3U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                if (((0xffffffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                                   + (IData)(__Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__70__pixels_to_write))) 
                     >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame)) {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first)));
                } else {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field)));
                }
            }
        }
        if (vlSelf->clean_disp_tb__DOT__vram_wren4) {
            if (vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field) {
                if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__6 = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))));
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__6;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__4 = 0U;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__4;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__1 = 0U;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))));
                }
                if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__5 = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2)))));
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__5;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__2 = 0U;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4)))));
                }
                if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__3 = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))))));
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))))));
                }
            } else {
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__7 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__7;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                }
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__7 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__7;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                }
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__6 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__6;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                }
                vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__4 = 0U;
                if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))) {
                    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__4;
                    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33 = 1U;
                    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                }
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4;
                if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__8 = 1U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))))));
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__8 = 1U;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__7 = 1U;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__4 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in2;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__4 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in2;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__4 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in2;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__8;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__4;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__4;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__4;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__2 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__2 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__2 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in3;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__8;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__2;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h0cd7ed91__1 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in4;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hf0614c82__1 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in4;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hbb2bd4d7__1 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in4;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__7;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h0cd7ed91__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hf0614c82__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hbb2bd4d7__1;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 2U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                     ? 1U : ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(3U) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))))));
                }
                if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__9 = 1U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4)))));
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__9 = 1U;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__5 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__5 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in3;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__5 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in3;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__9;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__5;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__5;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__5;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                    }
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__3 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in4;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__3 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in4;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__3 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in4;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__9;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__3;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1)))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 1U : ((4U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                                     ? 0U : (7U & ((IData)(2U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2)))));
                }
                if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__10 = 1U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4))));
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__6 
                        = vlSelf->clean_disp_tb__DOT__r_vram_in4;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__6 
                        = vlSelf->clean_disp_tb__DOT__g_vram_in4;
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__6 
                        = vlSelf->clean_disp_tb__DOT__b_vram_in4;
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__10;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__6;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__6;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__6;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1))));
                }
            }
            __Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__77__pixels_to_write = 4U;
            __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H 
                = (0xffffU & ((4U < (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))
                               ? ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H) 
                                  - (IData)(4U)) : 
                              (((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                - (IData)(4U)) + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))));
            if ((4U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H))) {
                if (((0xffffffU & (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                                   + (IData)(__Vtask_clean_disp_tb__DOT__vga__DOT__swap_field_at_end_line__77__pixels_to_write))) 
                     >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame)) {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first)));
                } else {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field)));
                }
            }
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                     << 7U) | (((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_req) 
                                << 6U) | (((IData)(vlSelf->clean_disp_tb__DOT__eng_req) 
                                           << 5U) | 
                                          (((IData)(vlSelf->clean_disp_tb__DOT__dm_busy) 
                                            << 4U) 
                                           | (((IData)(vlSelf->clean_disp_tb__DOT__eng_wr) 
                                               << 3U) 
                                              | (((IData)(vlSelf->clean_disp_tb__DOT__eng_rd) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)))))));
    if (Vclean_disp_tb__ConstPool__TABLE_h3615a9ca_0
        [__Vtableidx2]) {
        __Vdly__clean_disp_tb__DOT__ddr_mux__DOT__g 
            = Vclean_disp_tb__ConstPool__TABLE_haed88285_0
            [__Vtableidx2];
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
         | (IData)(vlSelf->clean_disp_tb__DOT__vga_frame_reset))) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vga_vblanks = 0U;
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
         | (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset))) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__h_cnt = 0U;
        vlSelf->clean_disp_tb__DOT__vga__DOT__hb = 1U;
    }
    if ((1U & ((((~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)) 
                 | (IData)(vlSelf->clean_disp_tb__DOT__vga_reset)) 
                | (IData)(vlSelf->clean_disp_tb__DOT__vga_frame_reset)) 
               | (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset)))) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__field = 0U;
    }
    if ((((IData)(vlSelf->clean_disp_tb__DOT__ce_pix) 
          & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga_reset))) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset)))) {
        if (((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vga_started) 
               & (IData)(vlSelf->clean_disp_tb__DOT__vram_active)) 
              & ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt) 
                 == (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                + (IData)(vlSelf->clean_disp_tb__DOT__PoC_HFP))))) 
             & ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                <= (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)))) {
            __Vdly__clean_disp_tb__DOT__vga__DOT__vga_vblanks 
                = (0xffffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks));
        }
        if ((((IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced) 
              & ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt) 
                 == (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                + (IData)(vlSelf->clean_disp_tb__DOT__PoC_HFP))))) 
             & ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                <= (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)))) {
            __Vdly__clean_disp_tb__DOT__vga__DOT__field 
                = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__field)));
        }
        if ((1U & ((~ (IData)(vlSelf->clean_disp_tb__DOT__vga_reset)) 
                   & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset))))) {
            __Vdly__clean_disp_tb__DOT__vga__DOT__h_cnt 
                = (((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt) 
                    >= (((((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                           + (IData)(vlSelf->clean_disp_tb__DOT__PoC_HFP)) 
                          + (IData)(vlSelf->clean_disp_tb__DOT__PoC_HS)) 
                         + (IData)(vlSelf->clean_disp_tb__DOT__PoC_HBP)) 
                        - (IData)(1U))) ? 0U : (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt))));
            vlSelf->clean_disp_tb__DOT__vga__DOT__hb 
                = ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt) 
                   >= (IData)(vlSelf->clean_disp_tb__DOT__PoC_H));
        }
    }
    if (vlSelf->clean_disp_tb__DOT__vga_reset) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__vga_started = 0U;
    }
    vlSelf->clean_disp_tb__DOT__av_wr_addr = __Vdly__clean_disp_tb__DOT__av_wr_addr;
    vlSelf->clean_disp_tb__DOT__av_wr_left = __Vdly__clean_disp_tb__DOT__av_wr_left;
    vlSelf->clean_disp_tb__DOT__av_busy_left = __Vdly__clean_disp_tb__DOT__av_busy_left;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_addr 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_addr;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_head 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_head;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr1;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr2;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr3;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_wr4;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H = __Vdly__clean_disp_tb__DOT__vga__DOT__FB_H;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__FB_first;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__FB_field;
    vlSelf->clean_disp_tb__DOT__stp2 = vlSelf->clean_disp_tb__DOT__state;
    vlSelf->clean_disp_tb__DOT__pfv_d0 = vlSelf->clean_disp_tb__DOT__PoC_frame_vram;
    vlSelf->clean_disp_tb__DOT__vs_d = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync)));
    if ((0U < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)) {
        vlSelf->clean_disp_tb__DOT__display_up = 1U;
    }
    vlSelf->clean_disp_tb__DOT__pf_bd = vlSelf->clean_disp_tb__DOT__nlc_busy;
    vlSelf->clean_disp_tb__DOT__st_pd = vlSelf->clean_disp_tb__DOT__state;
    vlSelf->clean_disp_tb__DOT__fv_d = vlSelf->clean_disp_tb__DOT__PoC_frame_vram;
    if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__y = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__lp = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__dec_bank = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__tcnt = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pw = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__done_r = 0U;
    } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
        if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
            if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__done_r 
                    = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count)) 
                       & (~ (IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid)));
            } else if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_flushed) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = 7U;
            }
        } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__dec_bank 
                = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank)));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__lp 
                = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp)));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__y 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y)));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst 
                = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y))) 
                    == (IData)(vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__cfg_h))
                    ? 6U : 0U);
        } else {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x)));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__tcnt 
                = (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__tcnt) 
                              - (IData)(1U)));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst 
                = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x))) 
                    == (IData)(vlSelf->clean_disp_tb__DOT__PoC_H))
                    ? 5U : ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__tcnt))
                             ? 2U : 3U));
        }
    } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
        if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = 4U;
        } else if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr) {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__tcnt 
                = (((0xffffU & ((IData)(0x10U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x))) 
                    <= (IData)(vlSelf->clean_disp_tb__DOT__PoC_H))
                    ? 0x10U : (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                          - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x))));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = 3U;
        }
    } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pw 
            = (7U & ((7U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pw))
                      ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pw)
                      : ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pw))));
        if (((3U <= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pw)) 
             & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__all_rdy))) {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = 2U;
        }
    } else if ((1U & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy) 
                      >> (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank)))) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pw = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst = 1U;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__tcnt = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__tcnt;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pw = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pw;
    if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset)))) {
        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__prime_all)))) {
            if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr)))) {
                if ((3U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                    if ((4U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qmul 
                            = VL_EXTENDS_II(32,16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qeL_r));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconRawL 
                            = (VL_EXTENDS_II(32,16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__predL_r)) 
                               + vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qmul);
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconL 
                            = (VL_GTS_III(32, 0xffffff01U, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconRawL)
                                ? 0xff01U : (VL_LTS_III(32, 0xffU, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconRawL)
                                              ? 0xffU
                                              : (0xffffU 
                                                 & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconRawL)));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT____Vlvbound_h3bb8fe6d__0 
                            = (0xfffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconL));
                        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec1 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qmul 
                            = VL_EXTENDS_II(32,16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qeL_r));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconRawL 
                            = (VL_EXTENDS_II(32,16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__predL_r)) 
                               + vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qmul);
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconL 
                            = (VL_GTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconRawL)
                                ? 0U : (VL_LTS_III(32, 0xffU, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconRawL)
                                         ? 0xffU : 
                                        (0xffffU & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconRawL)));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT____Vlvbound_h3bb8fe6d__0 
                            = (0xfffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconL));
                        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec0 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qmul 
                            = VL_EXTENDS_II(32,16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qeL_r));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconRawL 
                            = (VL_EXTENDS_II(32,16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__predL_r)) 
                               + vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qmul);
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconL 
                            = (VL_GTS_III(32, 0xffffff01U, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconRawL)
                                ? 0xff01U : (VL_LTS_III(32, 0xffU, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconRawL)
                                              ? 0xffU
                                              : (0xffffU 
                                                 & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconRawL)));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT____Vlvbound_h3bb8fe6d__0 
                            = (0xfffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconL));
                        if ((0x59fU >= (0x7ffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp)
                                                    ? 0x2d0U
                                                    : 0U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x))))) {
                            __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0 
                                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT____Vlvbound_h3bb8fe6d__0;
                            __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0 
                                = (0x7ffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp)
                                               ? 0x2d0U
                                               : 0U) 
                                             + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x)));
                            __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0 
                                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT____Vlvbound_h3bb8fe6d__0;
                            __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0 
                                = (0x7ffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp)
                                               ? 0x2d0U
                                               : 0U) 
                                             + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x)));
                            __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0 
                                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT____Vlvbound_h3bb8fe6d__0;
                            __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0 
                                = (0x7ffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp)
                                               ? 0x2d0U
                                               : 0U) 
                                             + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x)));
                        }
                        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec2 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconL;
                    }
                }
                if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pabove 
                        = ((0xf000U & ((- (IData)((1U 
                                                   & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP_q) 
                                                      >> 0xbU)))) 
                                       << 0xcU)) | (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP_q));
                    if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x))) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__paL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pabove;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pleft = 0U;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL 
                            = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y))
                                ? 0U : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pabove));
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__paL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__above_reg;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pleft 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pleft;
                    }
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bL 
                        = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y))
                            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL)
                            : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pabove));
                    if (VL_LTS_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bL))) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mnL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mxL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bL;
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mnL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mxL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL;
                    }
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cL 
                        = (((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x)) 
                            & (0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y)))
                            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__paL)
                            : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bL));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__predL 
                        = (0xffffU & (VL_GTES_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mxL))
                                       ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mnL)
                                       : (VL_LTES_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mnL))
                                           ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mxL)
                                           : (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bL)) 
                                              - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cL)))));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__predL_r 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__predL;
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__above_reg 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pabove;
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pabove 
                        = ((0xf000U & ((- (IData)((1U 
                                                   & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP_q) 
                                                      >> 0xbU)))) 
                                       << 0xcU)) | (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP_q));
                    if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x))) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__paL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pabove;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pleft = 0U;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL 
                            = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y))
                                ? 0U : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pabove));
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__paL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__above_reg;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pleft 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pleft;
                    }
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bL 
                        = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y))
                            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL)
                            : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pabove));
                    if (VL_LTS_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bL))) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mnL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mxL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bL;
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mnL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mxL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL;
                    }
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cL 
                        = (((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x)) 
                            & (0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y)))
                            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__paL)
                            : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bL));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__predL 
                        = (0xffffU & (VL_GTES_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mxL))
                                       ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mnL)
                                       : (VL_LTES_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mnL))
                                           ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mxL)
                                           : (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bL)) 
                                              - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cL)))));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__predL_r 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__predL;
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__above_reg 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pabove;
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pabove 
                        = ((0xf000U & ((- (IData)((1U 
                                                   & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP_q) 
                                                      >> 0xbU)))) 
                                       << 0xcU)) | (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP_q));
                    if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x))) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__paL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pabove;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pleft = 0U;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL 
                            = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y))
                                ? 0U : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pabove));
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__paL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__above_reg;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pleft 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pleft;
                    }
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bL 
                        = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y))
                            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL)
                            : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pabove));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cL 
                        = (((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x)) 
                            & (0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y)))
                            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__paL)
                            : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bL));
                    if (VL_LTS_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bL))) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mnL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mxL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bL;
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mnL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bL;
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mxL 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL;
                    }
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__predL 
                        = (0xffffU & (VL_GTES_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mxL))
                                       ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mnL)
                                       : (VL_LTES_III(16, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cL), (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mnL))
                                           ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mxL)
                                           : (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL) 
                                               + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bL)) 
                                              - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cL)))));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__predL_r 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__predL;
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__above_reg 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pabove;
                }
            }
        }
    }
    vlSelf->clean_disp_tb__DOT__vga__DOT__out_ena = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__out_ena_skip = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay_skip = 0U;
    vlSelf->clean_disp_tb__DOT__vbl_d = vlSelf->clean_disp_tb__DOT__vga__DOT__vb;
    vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt = __Vdly__clean_disp_tb__DOT__vga__DOT__h_cnt;
    vlSelf->clean_disp_tb__DOT__vga__DOT__field = __Vdly__clean_disp_tb__DOT__vga__DOT__field;
    vlSelf->clean_disp_tb__DOT__engfl_d = vlSelf->clean_disp_tb__DOT__eng_flushed;
    vlSelf->clean_disp_tb__DOT__engbusy_d = vlSelf->clean_disp_tb__DOT__eng_busy_w;
    vlSelf->clean_disp_tb__DOT__nb_d = vlSelf->clean_disp_tb__DOT__nlc_busy;
    if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__dm_busy)))) {
        vlSelf->clean_disp_tb__DOT__busfree_cyc = vlSelf->clean_disp_tb__DOT__cycles;
    }
    __Vdly__clean_disp_tb__DOT__eng_adopt_ack = 0U;
    __Vdly__clean_disp_tb__DOT__eng_done_stb = 0U;
    vlSelf->clean_disp_tb__DOT__eng_dec_wlong = 0U;
    if (vlSelf->clean_disp_tb__DOT__eng_dec_oready) {
        __Vdlyvval__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0 
            = vlSelf->clean_disp_tb__DOT__nlc_uncompressed_long;
        __Vdlyvset__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0 = 1U;
        __Vdlyvdim0__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0 
            = (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt));
        __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt)));
    }
    if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd 
            = (0x1fffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd));
    }
    if (vlSelf->clean_disp_tb__DOT__u_eng__DOT__progress) {
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
    }
    __Vdly__clean_disp_tb__DOT__u_eng__DOT__st_d = vlSelf->clean_disp_tb__DOT__u_eng__DOT__st;
    if (((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st) 
         != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st_d))) {
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
    }
    if (vlSelf->clean_disp_tb__DOT__eng_wm_stb) {
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm 
            = vlSelf->clean_disp_tb__DOT__eng_wm_bytes;
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_final 
            = vlSelf->clean_disp_tb__DOT__eng_wm_final;
    }
    if ((((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
          & (IData)(vlSelf->clean_disp_tb__DOT__eng_pend_valid)) 
         & (vlSelf->clean_disp_tb__DOT__eng_pend_frame 
            != vlSelf->clean_disp_tb__DOT__eng_cur_frame))) {
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm 
            = vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_size;
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_final = 1U;
    }
    if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
        if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 0U;
        } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 0U;
        } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
            __Vdly__clean_disp_tb__DOT__eng_done_stb 
                = vlSelf->clean_disp_tb__DOT__u_eng__DOT__end_publish;
            __Vdly__clean_disp_tb__DOT__eng_busy_w = 0U;
            vlSelf->clean_disp_tb__DOT__eng_dec_reset = 1U;
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 0U;
        } else {
            if (((IData)(vlSelf->clean_disp_tb__DOT__eng_wr) 
                 & (~ (IData)(vlSelf->clean_disp_tb__DOT__eng_busy)))) {
                if (((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd) 
                     == (0xffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt) 
                                  - (IData)(1U))))) {
                    __Vdly__clean_disp_tb__DOT__eng_flushed 
                        = (0xfffffffU & (vlSelf->clean_disp_tb__DOT__eng_flushed 
                                         + ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt) 
                                            << 3U)));
                    __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt = 0U;
                    __Vdly__clean_disp_tb__DOT__eng_wr = 0U;
                    vlSelf->clean_disp_tb__DOT__eng_req = 0U;
                    __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd = 0U;
                    __Vdly__clean_disp_tb__DOT__u_eng__DOT__st 
                        = ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__flush_end)
                            ? 9U : 2U);
                } else {
                    __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd)));
                    vlSelf->clean_disp_tb__DOT__u_eng__DOT__eng_addr 
                        = (0xfffffffU & ((IData)(8U) 
                                         + vlSelf->clean_disp_tb__DOT__u_eng__DOT__eng_addr));
                    vlSelf->clean_disp_tb__DOT__u_eng__DOT__m_din_r 
                        = vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_q;
                }
            }
            if (vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit) {
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt = 0U;
                __Vdly__clean_disp_tb__DOT__eng_wr = 0U;
                vlSelf->clean_disp_tb__DOT__eng_req = 0U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd = 0U;
                vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
                vlSelf->clean_disp_tb__DOT__eng_wd_fired = 1U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st 
                    = ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__flush_end)
                        ? 9U : 2U);
            }
        }
    } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
        if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
            if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
                vlSelf->clean_disp_tb__DOT__u_eng__DOT__m_din_r 
                    = vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_q;
                __Vdly__clean_disp_tb__DOT__eng_wr = 1U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd = 0U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 8U;
            } else {
                vlSelf->clean_disp_tb__DOT__u_eng__DOT__eng_addr 
                    = (0xfffffffU & (vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_dst 
                                     + vlSelf->clean_disp_tb__DOT__eng_flushed));
                vlSelf->clean_disp_tb__DOT__eng_burst 
                    = vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 7U;
            }
        } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
            vlSelf->clean_disp_tb__DOT__eng_req = 1U;
            if (vlSelf->clean_disp_tb__DOT__eng_gnt) {
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 6U;
            }
            if (vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit) {
                vlSelf->clean_disp_tb__DOT__eng_req = 0U;
                vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
                vlSelf->clean_disp_tb__DOT__eng_wd_fired = 1U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 2U;
            }
        } else {
            if (vlSelf->clean_disp_tb__DOT__eng_busy) {
                vlSelf->clean_disp_tb__DOT__eng_rd = 0U;
            }
            if (vlSelf->clean_disp_tb__DOT__eng_dready) {
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats 
                    = (0xffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__beats) 
                                - (IData)(1U)));
                vlSelf->clean_disp_tb__DOT__eng_dec_clong 
                    = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out;
                vlSelf->clean_disp_tb__DOT__eng_dec_wlong = 1U;
            }
            if (((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__beats)) 
                 & (~ (IData)(vlSelf->clean_disp_tb__DOT__eng_busy)))) {
                vlSelf->clean_disp_tb__DOT__eng_rd = 0U;
                vlSelf->clean_disp_tb__DOT__eng_req = 0U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 2U;
            }
            if (vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit) {
                vlSelf->clean_disp_tb__DOT__eng_rd = 0U;
                vlSelf->clean_disp_tb__DOT__eng_req = 0U;
                vlSelf->clean_disp_tb__DOT__eng_dec_wlong = 0U;
                vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
                vlSelf->clean_disp_tb__DOT__eng_wd_fired = 1U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 2U;
            }
        }
    } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
        if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
            vlSelf->clean_disp_tb__DOT__eng_req = 1U;
            if (vlSelf->clean_disp_tb__DOT__eng_gnt) {
                if ((0x3ffU < vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem)) {
                    __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats = 0x80U;
                    vlSelf->clean_disp_tb__DOT__eng_burst = 0x80U;
                } else if (vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk) {
                    __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats 
                        = (0xffU & ((IData)(1U) + (vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem 
                                                   >> 3U)));
                    vlSelf->clean_disp_tb__DOT__eng_burst 
                        = (0xffU & ((IData)(1U) + (vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem 
                                                   >> 3U)));
                } else {
                    __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem 
                                    >> 3U));
                    vlSelf->clean_disp_tb__DOT__eng_burst 
                        = (0xffU & (vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem 
                                    >> 3U));
                }
                vlSelf->clean_disp_tb__DOT__u_eng__DOT__eng_addr 
                    = (0xfffffffU & (vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_src 
                                     + vlSelf->clean_disp_tb__DOT__nlc_writed_bytes));
                vlSelf->clean_disp_tb__DOT__eng_rd = 1U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 4U;
            }
            if (vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit) {
                vlSelf->clean_disp_tb__DOT__eng_req = 0U;
                vlSelf->clean_disp_tb__DOT__eng_rd = 0U;
                vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
                vlSelf->clean_disp_tb__DOT__eng_wd_fired = 1U;
                __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 2U;
            }
        } else if (vlSelf->clean_disp_tb__DOT__eng_abort_r) {
            vlSelf->clean_disp_tb__DOT__eng_dec_reset = 1U;
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 0U;
        } else if ((0x78U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt))) {
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__flush_end = 0U;
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 5U;
        } else if (((IData)(vlSelf->clean_disp_tb__DOT__nlc_done) 
                    & (0U != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt)))) {
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__flush_end = 1U;
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 5U;
        } else if (((IData)(vlSelf->clean_disp_tb__DOT__nlc_done) 
                    & (0U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt)))) {
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 9U;
        } else if (vlSelf->clean_disp_tb__DOT__u_eng__DOT__feed_ok) {
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 3U;
        } else if (((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit) 
                    & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__input_done))) {
            vlSelf->clean_disp_tb__DOT__eng_wd_fired = 1U;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__flush_end = 1U;
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st 
                = ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt))
                    ? 5U : 9U);
        } else if (((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit) 
                    & (IData)(vlSelf->clean_disp_tb__DOT__eng_pend_valid))) {
            vlSelf->clean_disp_tb__DOT__eng_wd_fired = 1U;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__end_publish = 0U;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__flush_end = 1U;
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st 
                = ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt))
                    ? 5U : 9U);
        }
    } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))) {
        vlSelf->clean_disp_tb__DOT__eng_dec_reset = 0U;
        __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 2U;
    } else {
        __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt = 0U;
        __Vdly__clean_disp_tb__DOT__eng_busy_w = 0U;
        vlSelf->clean_disp_tb__DOT__eng_req = 0U;
        vlSelf->clean_disp_tb__DOT__eng_rd = 0U;
        __Vdly__clean_disp_tb__DOT__eng_wr = 0U;
        vlSelf->clean_disp_tb__DOT__eng_dec_reset = 1U;
        if (((IData)(vlSelf->clean_disp_tb__DOT__eng_pend_valid) 
             & (~ (IData)(vlSelf->clean_disp_tb__DOT__eng_abort_r)))) {
            __Vdly__clean_disp_tb__DOT__eng_flushed = 0U;
            __Vdly__clean_disp_tb__DOT__eng_cur_frame 
                = vlSelf->clean_disp_tb__DOT__eng_pend_frame;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_size 
                = vlSelf->clean_disp_tb__DOT__eng_pend_size;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm 
                = vlSelf->clean_disp_tb__DOT__eng_pend_bytes;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_final 
                = vlSelf->clean_disp_tb__DOT__eng_pend_final;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_src 
                = vlSelf->clean_disp_tb__DOT__eng_pend_src;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_dst 
                = vlSelf->clean_disp_tb__DOT__eng_pend_dst;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
            vlSelf->clean_disp_tb__DOT__eng_wd_fired = 0U;
            vlSelf->clean_disp_tb__DOT__u_eng__DOT__end_publish = 1U;
            __Vdly__clean_disp_tb__DOT__eng_busy_w = 1U;
            __Vdly__clean_disp_tb__DOT__eng_adopt_ack = 1U;
            __Vdly__clean_disp_tb__DOT__u_eng__DOT__st = 1U;
        }
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_we_r = 0U;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__lp;
    if (((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
         | (IData)(vlSelf->clean_disp_tb__DOT__vram_reset))) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = 1U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_out_sync = 0U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_start = 0U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_ahead = 0U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd = 0U;
        __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd_next = 1U;
    }
    if (vlSelf->clean_disp_tb__DOT__vga_wait_vblank) {
        __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = 1U;
    }
    if (vlSelf->clean_disp_tb__DOT__ce_pix) {
        vlSelf->clean_disp_tb__DOT__de_d = vlSelf->clean_disp_tb__DOT__vga_de_w;
        if ((1U & ((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_active)) 
                   | (IData)(vlSelf->clean_disp_tb__DOT__vga_soft_reset)))) {
            __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = 1U;
            if (vlSelf->clean_disp_tb__DOT__vga_de_w) {
                __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter 
                    = (0xffffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_counter));
                vlSelf->clean_disp_tb__DOT__vga__DOT__pixel 
                    = (((IData)(vlSelf->clean_disp_tb__DOT__r_in) 
                        << 0x10U) | (((IData)(vlSelf->clean_disp_tb__DOT__g_in) 
                                      << 8U) | (IData)(vlSelf->clean_disp_tb__DOT__b_in)));
            } else {
                vlSelf->clean_disp_tb__DOT__vga__DOT__pixel = 0U;
                if (vlSelf->clean_disp_tb__DOT__vga__DOT__vb) {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = 0U;
                }
            }
        } else {
            vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5b7009e6__0 
                = (1U & ((~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_ahead)) 
                         & (~ ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd)) 
                               && vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty
                               [vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd]))));
            if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd))) {
                vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5b7009e6__0;
                vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6 = 1U;
                vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd;
            }
            __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_ahead 
                = (1U & ((~ ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd)) 
                             && vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty
                             [vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd])) 
                         | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_ahead)));
            if (((~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_start)) 
                 & (0U < vlSelf->clean_disp_tb__DOT__vram_queue))) {
                __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter = 0U;
                __Vdly__clean_disp_tb__DOT__vga__DOT__vram_start = 1U;
                vlSelf->clean_disp_tb__DOT__vga__DOT__vga_started = 1U;
            }
            if ((((IData)(vlSelf->clean_disp_tb__DOT__vga_de_w) 
                  & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_wait_vblank))) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_start))) {
                __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter 
                    = (0xffffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_counter));
                if (vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_ahead) {
                    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h23568af2__0 
                        = (1U & (~ ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next)) 
                                    && vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty
                                    [vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next])));
                    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel 
                        = ((((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd))
                              ? vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r
                             [vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd]
                              : 0U) << 0x10U) | (((
                                                   (5U 
                                                    >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd))
                                                    ? 
                                                   vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g
                                                   [vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd]
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((5U 
                                                     >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd))
                                                     ? 
                                                    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b
                                                    [vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd]
                                                     : 0U)));
                    if ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next))) {
                        vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h23568af2__0;
                        vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7 = 1U;
                        vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next;
                    }
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_ahead 
                        = (1U & (~ ((5U >= (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next)) 
                                    && vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty
                                    [vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next])));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd))));
                    __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd_next 
                        = ((5U == (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next))));
                } else {
                    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel = 0xff0000U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_out_sync = 1U;
                }
            } else {
                vlSelf->clean_disp_tb__DOT__vga__DOT__pixel = 0U;
                if (vlSelf->clean_disp_tb__DOT__vga__DOT__vb) {
                    __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter = 0U;
                    __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = 0U;
                }
            }
        }
    }
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v0 = 1U;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__beats = __Vdly__clean_disp_tb__DOT__u_eng__DOT__beats;
    vlSelf->clean_disp_tb__DOT__eng_flushed = __Vdly__clean_disp_tb__DOT__eng_flushed;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__st_d = __Vdly__clean_disp_tb__DOT__u_eng__DOT__st_d;
    vlSelf->clean_disp_tb__DOT__nlc_done = ((~ (IData)(vlSelf->clean_disp_tb__DOT__suppress_done)) 
                                            & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__done_r));
    if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_tail = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ip_st = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_bank = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_lines = 0U;
        __Vdly__clean_disp_tb__DOT__nlc_readed_bytes = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw_valid)))) {
            if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ip_st) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_tail 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_tail)));
                __Vdly__clean_disp_tb__DOT__nlc_readed_bytes 
                    = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__nlc_readed_bytes);
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_q;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid = 1U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ip_st = 0U;
            } else if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ip_st = 1U;
            }
        }
        if (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw_valid) 
             & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_want))) {
            if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left0 
                    = (0x1ffU & (IData)((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw 
                                         >> 3U)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl = 0U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr = 0U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st = 1U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid = 0U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left1 
                    = (0x1ffU & (IData)((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw 
                                         >> 0x13U)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left2 
                    = (0x1ffU & (IData)((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw 
                                         >> 0x23U)));
            } else if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left_cur))) {
                if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))) {
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st = 2U;
                } else {
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl)));
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr = 0U;
                }
            } else {
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT____Vlvbound_ha736458d__0 = 1U;
                if ((2U >= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))) {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_we_r 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))) 
                            & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_we_r)) 
                           | (7U & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT____Vlvbound_ha736458d__0) 
                                    << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))));
                }
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wd_r 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid = 0U;
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wa_r 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_waddr;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_waddr)));
                if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))) {
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left0 
                        = (0x1ffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left0) 
                                     - (IData)(1U)));
                } else if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))) {
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left1 
                        = (0x1ffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left1) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left2 
                        = (0x1ffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left2) 
                                     - (IData)(1U)));
                }
                if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left_cur))) {
                    if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))) {
                        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st = 2U;
                    } else {
                        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl)));
                        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr = 0U;
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st))) {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_lines 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines)));
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy 
                = ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy) 
                   | (3U & ((IData)(1U) << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank))));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st 
                = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines))) 
                    >= (IData)(vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__cfg_h))
                    ? 3U : 0U);
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_bank 
                = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank)));
        }
        if ((5U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy 
                = ((~ ((IData)(1U) << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank))) 
                   & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy));
        }
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ip_st = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ip_st;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_waddr 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_waddr;
    vlSelf->clean_disp_tb__DOT__nlc_readed_bytes = __Vdly__clean_disp_tb__DOT__nlc_readed_bytes;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw_valid 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__iw_valid;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_pl;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left0 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left0;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left1 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left1;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left2 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_left2;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_st;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_lines;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__ld_bank;
    clean_disp_tb__DOT__u_nlc__DOT__it = (0xffffU & 
                                          ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec0) 
                                           - VL_SHIFTRS_III(16,16,32, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec2), 1U)));
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_wait_vblank 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__vram_wait_vblank;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_start 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__vram_start;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_ahead 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_ahead;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd = __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__fifo_rd_next;
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_counter 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__pixel_counter;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_final) 
           & (vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm 
              >= vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_size));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_q = 
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__lbuf
        [(((8U != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
           & (7U != (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)))
           ? 0U : ((7U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st))
                    ? 1U : (0x7fU & (((IData)(vlSelf->clean_disp_tb__DOT__eng_wr) 
                                      & ((~ (IData)(vlSelf->clean_disp_tb__DOT__eng_busy)) 
                                         & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd) 
                                            < (0xffU 
                                               & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt) 
                                                  - (IData)(1U))))))
                                      ? ((IData)(2U) 
                                         + (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd))
                                      : ((IData)(1U) 
                                         + (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd))))))];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left_cur 
        = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))
            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left0)
            : ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))
                ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left1)
                : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left2)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_q = 
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ififo
        [(0xffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_tail))];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg;
    if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__y;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w = 0U;
    } else {
        if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__prime_all) {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st = 1U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st = 1U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U] = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st = 1U;
        } else {
            if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st = 2U;
            } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg_q;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid = 1U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st = 0U;
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__primed) 
                        & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid)))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st = 1U;
            }
            if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st = 2U;
            } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg_q;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid = 1U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st = 0U;
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__primed) 
                        & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid)))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st = 1U;
            }
            if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st = 2U;
            } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg_q;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid = 1U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st = 0U;
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__primed) 
                        & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid)))) {
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__prime_all)))) {
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons = 0U;
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[0U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[1U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[2U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[3U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt;
            if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr) {
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons = 4U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w 
                    = (0xfU & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U]);
            } else if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                if (vlSelf->clean_disp_tb__DOT__nlc_rice_r) {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_esc 
                        = (0U == (0xfffffU & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U]));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0U;
                    if ((0x80000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0x13U;
                    }
                    if ((0x40000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0x12U;
                    }
                    if ((0x20000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0x11U;
                    }
                    if ((0x10000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0x10U;
                    }
                    if ((0x8000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0xfU;
                    }
                    if ((0x4000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0xeU;
                    }
                    if ((0x2000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0xdU;
                    }
                    if ((0x1000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0xcU;
                    }
                    if ((0x800U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0xbU;
                    }
                    if ((0x400U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0xaU;
                    }
                    if ((0x200U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 9U;
                    }
                    if ((0x100U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 8U;
                    }
                    if ((0x80U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 7U;
                    }
                    if ((0x40U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 6U;
                    }
                    if ((0x20U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 5U;
                    }
                    if ((0x10U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 4U;
                    }
                    if ((8U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 3U;
                    }
                    if ((4U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 2U;
                    }
                    if ((2U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 1U;
                    }
                    if ((1U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = 0U;
                    }
                    if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_esc) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__codeL 
                            = (0xfffU & ((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U] 
                                          << 0xbU) 
                                         | (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] 
                                            >> 0x15U)));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons = 0x21U;
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_rem 
                            = (0xfffffffffULL & ((0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U])))) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q)))));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__codeL 
                            = (0xffffffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q) 
                                             << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w)) 
                                            | ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_rem) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w)) 
                                                  - (IData)(1U)))));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons 
                            = (0x3fU & ((IData)(1U) 
                                        + ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q) 
                                           + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w))));
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__codeL 
                        = (0xffffffU & (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w)) 
                                           - (IData)(1U))));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w;
                }
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qeL 
                    = (0xffffU & ((1U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__codeL)
                                   ? (- (0xffffffU 
                                         & VL_SHIFTR_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__codeL)), 1U)))
                                   : (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__codeL, 1U))));
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qeL_r 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qeL;
            }
            if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons))) {
                VL_SHIFTR_WWI(128,128,6, __Vtemp_54, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons));
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[0U] 
                    = __Vtemp_54[0U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[1U] 
                    = __Vtemp_54[1U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[2U] 
                    = __Vtemp_54[2U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[3U] 
                    = __Vtemp_54[3U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt 
                    = (0x7fU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt) 
                                - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons)));
            }
            if (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__need_refill) 
                 & (0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons)))) {
                __Vtemp_57[0U] = (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt);
                __Vtemp_57[1U] = (IData)((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt 
                                          >> 0x20U));
                __Vtemp_57[2U] = 0U;
                __Vtemp_57[3U] = 0U;
                VL_SHIFTL_WWI(128,128,7, __Vtemp_58, __Vtemp_57, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt));
                __Vtemp_56[1U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[1U] 
                                  | __Vtemp_58[1U]);
                __Vtemp_56[2U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[2U] 
                                  | __Vtemp_58[2U]);
                __Vtemp_56[3U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[3U] 
                                  | __Vtemp_58[3U]);
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[0U] 
                    = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[0U] 
                       | __Vtemp_58[0U]);
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[1U] 
                    = __Vtemp_56[1U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[2U] 
                    = __Vtemp_56[2U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[3U] 
                    = __Vtemp_56[3U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt 
                    = (0x7fU & ((IData)(0x40U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid = 0U;
            }
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[0U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[1U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[2U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na[3U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt;
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons = 0U;
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[0U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[1U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[2U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[3U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt;
            if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr) {
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons = 4U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w 
                    = (0xfU & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U]);
            } else if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                if (vlSelf->clean_disp_tb__DOT__nlc_rice_r) {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_esc 
                        = (0U == (0xfffffU & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U]));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0U;
                    if ((0x80000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0x13U;
                    }
                    if ((0x40000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0x12U;
                    }
                    if ((0x20000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0x11U;
                    }
                    if ((0x10000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0x10U;
                    }
                    if ((0x8000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0xfU;
                    }
                    if ((0x4000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0xeU;
                    }
                    if ((0x2000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0xdU;
                    }
                    if ((0x1000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0xcU;
                    }
                    if ((0x800U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0xbU;
                    }
                    if ((0x400U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0xaU;
                    }
                    if ((0x200U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 9U;
                    }
                    if ((0x100U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 8U;
                    }
                    if ((0x80U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 7U;
                    }
                    if ((0x40U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 6U;
                    }
                    if ((0x20U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 5U;
                    }
                    if ((0x10U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 4U;
                    }
                    if ((8U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 3U;
                    }
                    if ((4U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 2U;
                    }
                    if ((2U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 1U;
                    }
                    if ((1U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = 0U;
                    }
                    if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_esc) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__codeL 
                            = (0xfffU & ((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U] 
                                          << 0xbU) 
                                         | (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] 
                                            >> 0x15U)));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons = 0x21U;
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_rem 
                            = (0xfffffffffULL & ((0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U])))) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q)))));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__codeL 
                            = (0xffffffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q) 
                                             << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w)) 
                                            | ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_rem) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w)) 
                                                  - (IData)(1U)))));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons 
                            = (0x3fU & ((IData)(1U) 
                                        + ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q) 
                                           + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w))));
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__codeL 
                        = (0xffffffU & (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w)) 
                                           - (IData)(1U))));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w;
                }
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qeL 
                    = (0xffffU & ((1U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__codeL)
                                   ? (- (0xffffffU 
                                         & VL_SHIFTR_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__codeL)), 1U)))
                                   : (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__codeL, 1U))));
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qeL_r 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qeL;
            }
            if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons))) {
                VL_SHIFTR_WWI(128,128,6, __Vtemp_60, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons));
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[0U] 
                    = __Vtemp_60[0U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[1U] 
                    = __Vtemp_60[1U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[2U] 
                    = __Vtemp_60[2U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[3U] 
                    = __Vtemp_60[3U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt 
                    = (0x7fU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt) 
                                - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons)));
            }
            if (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__need_refill) 
                 & (0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons)))) {
                __Vtemp_63[0U] = (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt);
                __Vtemp_63[1U] = (IData)((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt 
                                          >> 0x20U));
                __Vtemp_63[2U] = 0U;
                __Vtemp_63[3U] = 0U;
                VL_SHIFTL_WWI(128,128,7, __Vtemp_64, __Vtemp_63, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt));
                __Vtemp_62[1U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[1U] 
                                  | __Vtemp_64[1U]);
                __Vtemp_62[2U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[2U] 
                                  | __Vtemp_64[2U]);
                __Vtemp_62[3U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[3U] 
                                  | __Vtemp_64[3U]);
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[0U] 
                    = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[0U] 
                       | __Vtemp_64[0U]);
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[1U] 
                    = __Vtemp_62[1U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[2U] 
                    = __Vtemp_62[2U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[3U] 
                    = __Vtemp_62[3U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt 
                    = (0x7fU & ((IData)(0x40U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid = 0U;
            }
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[0U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[1U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[2U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na[3U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt;
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons = 0U;
            if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr) {
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons = 4U;
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w 
                    = (0xfU & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U]);
            } else if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst))) {
                if (vlSelf->clean_disp_tb__DOT__nlc_rice_r) {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_esc 
                        = (0U == (0xfffffU & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U]));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0U;
                    if ((0x80000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0x13U;
                    }
                    if ((0x40000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0x12U;
                    }
                    if ((0x20000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0x11U;
                    }
                    if ((0x10000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0x10U;
                    }
                    if ((0x8000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0xfU;
                    }
                    if ((0x4000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0xeU;
                    }
                    if ((0x2000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0xdU;
                    }
                    if ((0x1000U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0xcU;
                    }
                    if ((0x800U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0xbU;
                    }
                    if ((0x400U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0xaU;
                    }
                    if ((0x200U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 9U;
                    }
                    if ((0x100U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 8U;
                    }
                    if ((0x80U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 7U;
                    }
                    if ((0x40U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 6U;
                    }
                    if ((0x20U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 5U;
                    }
                    if ((0x10U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 4U;
                    }
                    if ((8U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 3U;
                    }
                    if ((4U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 2U;
                    }
                    if ((2U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 1U;
                    }
                    if ((1U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = 0U;
                    }
                    if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_esc) {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__codeL 
                            = (0xfffU & ((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U] 
                                          << 0xbU) 
                                         | (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] 
                                            >> 0x15U)));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons = 0x21U;
                    } else {
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_rem 
                            = (0xfffffffffULL & ((0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U])))) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q)))));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__codeL 
                            = (0xffffffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q) 
                                             << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w)) 
                                            | ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_rem) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w)) 
                                                  - (IData)(1U)))));
                        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons 
                            = (0x3fU & ((IData)(1U) 
                                        + ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q) 
                                           + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w))));
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__codeL 
                        = (0xffffffU & (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w)) 
                                           - (IData)(1U))));
                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w;
                }
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qeL 
                    = (0xffffU & ((1U & vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__codeL)
                                   ? (- (0xffffffU 
                                         & VL_SHIFTR_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__codeL)), 1U)))
                                   : (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__codeL, 1U))));
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qeL_r 
                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qeL;
            }
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[0U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[1U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[2U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[3U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt;
            if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons))) {
                VL_SHIFTR_WWI(128,128,6, __Vtemp_66, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons));
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[0U] 
                    = __Vtemp_66[0U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[1U] 
                    = __Vtemp_66[1U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[2U] 
                    = __Vtemp_66[2U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[3U] 
                    = __Vtemp_66[3U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt 
                    = (0x7fU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt) 
                                - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons)));
            }
            if (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__need_refill) 
                 & (0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons)))) {
                __Vtemp_69[0U] = (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt);
                __Vtemp_69[1U] = (IData)((vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt 
                                          >> 0x20U));
                __Vtemp_69[2U] = 0U;
                __Vtemp_69[3U] = 0U;
                VL_SHIFTL_WWI(128,128,7, __Vtemp_70, __Vtemp_69, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt));
                __Vtemp_68[1U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[1U] 
                                  | __Vtemp_70[1U]);
                __Vtemp_68[2U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[2U] 
                                  | __Vtemp_70[2U]);
                __Vtemp_68[3U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[3U] 
                                  | __Vtemp_70[3U]);
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[0U] 
                    = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[0U] 
                       | __Vtemp_70[0U]);
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[1U] 
                    = __Vtemp_68[1U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[2U] 
                    = __Vtemp_68[2U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[3U] 
                    = __Vtemp_68[3U];
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt 
                    = (0x7fU & ((IData)(0x40U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt)));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid = 0U;
            }
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[0U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[1U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[2U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U] 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na[3U];
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt 
                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt;
        }
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[0U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[1U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[2U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc[3U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[0U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[1U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[2U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U] 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc[3U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg 
            = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__y;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__x;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U] 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[0U];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U] 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[1U];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U] 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[2U];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U] 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc[3U];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt;
    vlSelf->clean_disp_tb__DOT__ce_pix = (0U == (IData)(vlSelf->clean_disp_tb__DOT__cencnt));
    __Vdly__clean_disp_tb__DOT__cmd_fskip = 0U;
    if ((0U != vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) {
        if ((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
              <= (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)) 
             & (0U == vlSelf->clean_disp_tb__DOT__vram_queue))) {
            __Vdly__clean_disp_tb__DOT__cmd_fskip = 1U;
            __Vdly__clean_disp_tb__DOT__PoC_state_frameskip = 0x1bU;
        } else if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb)))) {
            if ((((((((IData)(1U) + ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                                     + (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced))) 
                     >= (IData)(vlSelf->clean_disp_tb__DOT__PoC_V)) 
                    & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                       > vlSelf->clean_disp_tb__DOT__vram_queue)) 
                   & (((IData)(0x14U) + vlSelf->clean_disp_tb__DOT__vram_queue) 
                      < vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)) 
                  & (vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame 
                     > vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)) 
                 & (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                    > (0xffffffU & VL_SHIFTL_III(24,24,32, (IData)(vlSelf->clean_disp_tb__DOT__PoC_H), 2U))))) {
                __Vdly__clean_disp_tb__DOT__cmd_fskip = 1U;
                __Vdly__clean_disp_tb__DOT__PoC_state_frameskip = 0x1dU;
            } else if (((((((IData)(1U) + ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                                           + (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced))) 
                           < (IData)(vlSelf->clean_disp_tb__DOT__PoC_V)) 
                          & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                             > vlSelf->clean_disp_tb__DOT__vram_queue)) 
                         & (((IData)(0x14U) + vlSelf->clean_disp_tb__DOT__vram_queue) 
                            < vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)) 
                        & ((0xffffffU & ((0xffffffU 
                                          & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                             * (0xffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                                                    + (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)))))) 
                                         >> (IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced))) 
                           > vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter))) {
                __Vdly__clean_disp_tb__DOT__cmd_fskip = 1U;
                __Vdly__clean_disp_tb__DOT__PoC_state_frameskip = 0x1cU;
            }
        }
    }
    vlSelf->clean_disp_tb__DOT__eng_wm_stb = 0U;
    if (vlSelf->clean_disp_tb__DOT__eng_adopt_ack) {
        vlSelf->clean_disp_tb__DOT__eng_pend_valid = 0U;
    }
    if (((2U == (IData)(vlSelf->clean_disp_tb__DOT__codec_mode)) 
         & (2U == (IData)(vlSelf->clean_disp_tb__DOT__nlc_disp_mode)))) {
        __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = vlSelf->clean_disp_tb__DOT__eng_busy_w;
    }
    vlSelf->clean_disp_tb__DOT__eng_abort_r = (((IData)(vlSelf->clean_disp_tb__DOT__eng_abort_r) 
                                                | (IData)(vlSelf->clean_disp_tb__DOT__reset_switchres)) 
                                               & (IData)(vlSelf->clean_disp_tb__DOT__eng_busy_w));
    if (vlSelf->clean_disp_tb__DOT__reset_switchres) {
        vlSelf->clean_disp_tb__DOT__eng_pend_valid = 0U;
        __Vdly__clean_disp_tb__DOT__nlc_present_pending = 0U;
        __Vdly__clean_disp_tb__DOT__nlc_present_active = 0U;
    }
    if ((0x80U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        __Vdly__clean_disp_tb__DOT__state = 0U;
    } else if ((0x40U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        if ((0x20U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            __Vdly__clean_disp_tb__DOT__state = 0U;
        } else if ((0x10U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__state = 0U;
                } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        __Vdly__clean_disp_tb__DOT__new_vmode 
                            = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_vmode)));
                        vlSelf->clean_disp_tb__DOT__req_modeline 
                            = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_modeline)));
                        __Vdly__clean_disp_tb__DOT__vga_reset = 1U;
                        __Vdly__clean_disp_tb__DOT__state = 0U;
                    } else {
                        __Vdly__clean_disp_tb__DOT__new_vmode 
                            = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_vmode)));
                        __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                        vlSelf->clean_disp_tb__DOT__r_in = 0U;
                        vlSelf->clean_disp_tb__DOT__g_in = 0U;
                        vlSelf->clean_disp_tb__DOT__b_in = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_H = 0x100U;
                        vlSelf->clean_disp_tb__DOT__PoC_HFP = 0xaU;
                        vlSelf->clean_disp_tb__DOT__PoC_HS = 0x18U;
                        vlSelf->clean_disp_tb__DOT__PoC_HBP = 0x29U;
                        __Vdly__clean_disp_tb__DOT__PoC_V = 0xf0U;
                        vlSelf->clean_disp_tb__DOT__PoC_VFP = 2U;
                        vlSelf->clean_disp_tb__DOT__PoC_VS = 3U;
                        vlSelf->clean_disp_tb__DOT__PoC_VBP = 0x10U;
                        vlSelf->clean_disp_tb__DOT__PoC_ce_pix = 0x10U;
                        __Vdly__clean_disp_tb__DOT__PoC_pll_S = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_interlaced = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_FB_interlaced = 0U;
                        vlSelf->clean_disp_tb__DOT__req_modeline 
                            = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_modeline)));
                        __Vdly__clean_disp_tb__DOT__state = 0x5bU;
                    }
                } else {
                    __Vdly__clean_disp_tb__DOT__state = 0U;
                }
            } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        __Vdly__clean_disp_tb__DOT__state = 0x15U;
                        if (vlSelf->clean_disp_tb__DOT__nlc_present_pending) {
                            __Vdly__clean_disp_tb__DOT__nlc_present_pending = 0U;
                            __Vdly__clean_disp_tb__DOT__nlc_present_active = 1U;
                            __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                                = (0xffffffU & ((IData)(1U) 
                                                + (
                                                   (vlSelf->clean_disp_tb__DOT__PoC_frame_vram 
                                                    >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)
                                                    ? vlSelf->clean_disp_tb__DOT__PoC_frame_vram
                                                    : vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)));
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr 
                                = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 1U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                        } else if ((vlSelf->clean_disp_tb__DOT__PoC_frame_ddr 
                                    <= vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) {
                            __Vdly__clean_disp_tb__DOT__nlc_present_active = 0U;
                            __Vdly__clean_disp_tb__DOT__state = 1U;
                        }
                    } else {
                        vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
                        vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
                        vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
                        vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_out_ready = 0U;
                        vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
                        if (vlSelf->clean_disp_tb__DOT__nlc_fl_pre) {
                            if (vlSelf->clean_disp_tb__DOT__nlc_fl_run) {
                                if (((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                                     & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                                    if (((IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_rd) 
                                         == (0xffU 
                                             & ((IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt) 
                                                - (IData)(1U))))) {
                                        __Vdly__clean_disp_tb__DOT__nlc_flushed_bytes 
                                            = (0xfffffffU 
                                               & (vlSelf->clean_disp_tb__DOT__nlc_flushed_bytes 
                                                  + 
                                                  ((IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt) 
                                                   << 3U)));
                                        __Vdly__clean_disp_tb__DOT__ddr_data_write = 0U;
                                        __Vdly__clean_disp_tb__DOT__nlc_fl_pre = 0U;
                                        __Vdly__clean_disp_tb__DOT__nlc_fl_run = 0U;
                                        __Vdly__clean_disp_tb__DOT__nlc_lb_rd = 0U;
                                        __Vdly__clean_disp_tb__DOT__state 
                                            = ((IData)(vlSelf->clean_disp_tb__DOT__nlc_flush_end)
                                                ? 0x55U
                                                : 0x54U);
                                        __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt = 0U;
                                    } else {
                                        __Vdly__clean_disp_tb__DOT__nlc_lb_rd 
                                            = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_rd)));
                                        vlSelf->clean_disp_tb__DOT__ddr_addr 
                                            = (0xfffffffU 
                                               & ((IData)(8U) 
                                                  + vlSelf->clean_disp_tb__DOT__ddr_addr));
                                        vlSelf->clean_disp_tb__DOT__ddr_data_to_write 
                                            = vlSelf->clean_disp_tb__DOT__nlc_lb_q;
                                    }
                                }
                            } else {
                                __Vdly__clean_disp_tb__DOT__nlc_fl_run = 1U;
                                vlSelf->clean_disp_tb__DOT__ddr_data_to_write 
                                    = vlSelf->clean_disp_tb__DOT__nlc_lb_q;
                                __Vdly__clean_disp_tb__DOT__ddr_data_write = 1U;
                                __Vdly__clean_disp_tb__DOT__nlc_lb_rd = 0U;
                            }
                        } else {
                            vlSelf->clean_disp_tb__DOT__ddr_addr 
                                = (0xfffffffU & ((2U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_field))
                                                  ? 
                                                 ((((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                                    & (1U 
                                                       == 
                                                       (1U 
                                                        & (vlSelf->clean_disp_tb__DOT__PoC_frame_switchres 
                                                           + vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr))))
                                                    ? 0x1950ffU
                                                    : 0xffU) 
                                                  + vlSelf->clean_disp_tb__DOT__nlc_flushed_bytes)
                                                  : 
                                                 ((((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                                    & (1U 
                                                       == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_field)))
                                                    ? 0x1950ffU
                                                    : 0xffU) 
                                                  + vlSelf->clean_disp_tb__DOT__nlc_flushed_bytes)));
                            __Vdly__clean_disp_tb__DOT__nlc_fl_pre = 1U;
                            vlSelf->clean_disp_tb__DOT__ddr_burst 
                                = vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
                    __Vdly__clean_disp_tb__DOT__nlc_out_ready = 0U;
                    vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
                    __Vdly__clean_disp_tb__DOT__ddr_data_write = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit 
                        = vlSelf->clean_disp_tb__DOT__cmd_fskip;
                    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio = 0U;
                    if ((((IData)(7U) + vlSelf->clean_disp_tb__DOT__nlc_writed_bytes) 
                         >= vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes)) {
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 
                            = vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr;
                    }
                    if (vlSelf->clean_disp_tb__DOT__nlc_frame_done) {
                        if ((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                             > vlSelf->clean_disp_tb__DOT__PoC_frame_lz4)) {
                            __Vdly__clean_disp_tb__DOT__PoC_frame_lz4 
                                = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
                        }
                        __Vdly__clean_disp_tb__DOT__nlc_flushed_bytes = 0U;
                        if (((IData)(vlSelf->clean_disp_tb__DOT__vram_drive_lz4) 
                             & (~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)))) {
                            if ((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                                 > vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) {
                                __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                                    = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
                                __Vdly__clean_disp_tb__DOT__PoC_frame_vram 
                                    = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
                            }
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                            vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
                            __Vdly__clean_disp_tb__DOT__vram_reset 
                                = ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync) 
                                   | (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                      != vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame));
                            __Vdly__clean_disp_tb__DOT__state = 1U;
                        } else {
                            __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks));
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr 
                                = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 1U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                            vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 1U;
                            __Vdly__clean_disp_tb__DOT__vram_reset = 1U;
                            __Vdly__clean_disp_tb__DOT__state = 0x15U;
                        }
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio = 0U;
                        vlSelf->clean_disp_tb__DOT__nlc_reset = 1U;
                        __Vdly__clean_disp_tb__DOT__nlc_busy = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_compressed_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0U;
                    } else {
                        __Vdly__clean_disp_tb__DOT__state 
                            = ((IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)
                                ? 1U : 0x52U);
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
                    vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
                    if ((vlSelf->clean_disp_tb__DOT__vram_queue 
                         > (0xffffffU & VL_SHIFTL_III(24,24,32, (IData)(vlSelf->clean_disp_tb__DOT__PoC_H), 2U)))) {
                        vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB)))) {
                        vlSelf->clean_disp_tb__DOT__vga_soft_reset = 0U;
                    }
                    vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
                    vlSelf->clean_disp_tb__DOT__nlc_stall_cnt 
                        = (0x1fffffU & ((IData)(1U) 
                                        + vlSelf->clean_disp_tb__DOT__nlc_stall_cnt));
                    vlSelf->clean_disp_tb__DOT__nlc_commit_v 
                        = ((((IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid) 
                             & (vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes 
                                > vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)) 
                            & (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 
                               < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame)) 
                           & (0x78U > (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt)));
                    __Vdly__clean_disp_tb__DOT__nlc_out_ready 
                        = ((((IData)(vlSelf->clean_disp_tb__DOT__vram_req_ready) 
                             | (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB)) 
                            & (IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid)) 
                           & (0x78U > (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt)));
                    if (vlSelf->clean_disp_tb__DOT__nlc_commit_v) {
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes 
                            = (0xfffffffU & ((IData)(8U) 
                                             + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes));
                        __Vdlyvval__clean_disp_tb__DOT__nlc_lbuf__v0 
                            = vlSelf->clean_disp_tb__DOT__nlc_uncompressed_long;
                        __Vdlyvset__clean_disp_tb__DOT__nlc_lbuf__v0 = 1U;
                        __Vdlyvdim0__clean_disp_tb__DOT__nlc_lbuf__v0 
                            = (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt));
                        vlSelf->clean_disp_tb__DOT__nlc_stall_cnt = 0U;
                        if (((((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                               & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB))) 
                              & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync))) 
                             & (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame))) {
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes 
                                = (0xfffffffU & ((IData)(8U) 
                                                 + vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes));
                            __Vtask_clean_disp_tb__DOT__decode_pixel__0__total_pixels 
                                = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame;
                            __Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                = vlSelf->clean_disp_tb__DOT__nlc_uncompressed_long;
                            __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 1U;
                            __Vtask_clean_disp_tb__DOT__decode_pixel__0__drive_lz4 = 1U;
                            __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset 
                                = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))
                                    ? 0U : (3U & ((IData)(1U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))));
                            if (((2U < (__Vtask_clean_disp_tb__DOT__decode_pixel__0__total_pixels 
                                        - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram)) 
                                 & (0U != (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset)))) {
                                if (__Vtask_clean_disp_tb__DOT__decode_pixel__0__drive_lz4) {
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                        = (0xffffffU 
                                           & ((IData)(3U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                }
                                __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                    = (0xffffffU & 
                                       ((IData)(3U) 
                                        + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                                vlSelf->clean_disp_tb__DOT__vram_wren2 = 1U;
                                vlSelf->clean_disp_tb__DOT__vram_wren3 = 1U;
                            } else if ((1U < (__Vtask_clean_disp_tb__DOT__decode_pixel__0__total_pixels 
                                              - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram))) {
                                if (__Vtask_clean_disp_tb__DOT__decode_pixel__0__drive_lz4) {
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                        = (0xffffffU 
                                           & ((IData)(2U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                }
                                __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                    = (0xffffffU & 
                                       ((IData)(2U) 
                                        + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                                vlSelf->clean_disp_tb__DOT__vram_wren2 = 1U;
                            } else if ((0U < (__Vtask_clean_disp_tb__DOT__decode_pixel__0__total_pixels 
                                              - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram))) {
                                if (__Vtask_clean_disp_tb__DOT__decode_pixel__0__drive_lz4) {
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                }
                                __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                            }
                            if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x10U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 8U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                    = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64));
                                vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x28U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x20U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x18U)));
                                __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                    = ((0xffff0000U 
                                        & __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U]) 
                                       | (0xffffU & (IData)(
                                                            (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                             >> 0x30U))));
                            } else if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                    = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64));
                                vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                    = (0xffU & (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                                >> 8U));
                                vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                    = (0xffU & vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U]);
                                vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x18U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x10U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 8U)));
                                vlSelf->clean_disp_tb__DOT__r_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x30U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x28U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x20U)));
                                __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                    = ((0xffffff00U 
                                        & __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U]) 
                                       | (0xffU & (IData)(
                                                          (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                           >> 0x38U))));
                            } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 8U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                    = (0xffU & vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U]);
                                vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                    = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64));
                                vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x20U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x18U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x10U)));
                                vlSelf->clean_disp_tb__DOT__r_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x38U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x30U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__0__word64 
                                                        >> 0x28U)));
                            }
                        }
                        __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt)));
                    }
                    if (((IData)(vlSelf->clean_disp_tb__DOT__nlc_frame_done) 
                         & (~ ((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                               & (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy))))) {
                        __Vdly__clean_disp_tb__DOT__state 
                            = (((0U != (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt)) 
                                | (IData)(vlSelf->clean_disp_tb__DOT__nlc_commit_v))
                                ? 0x56U : 0x55U);
                        vlSelf->clean_disp_tb__DOT__nlc_flush_end = 1U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_pre = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_run = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_lb_rd = 0U;
                    } else if (((vlSelf->clean_disp_tb__DOT__nlc_writed_bytes 
                                 < vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes) 
                                & ((((IData)(vlSelf->clean_disp_tb__DOT__nlc_paused) 
                                     & (~ (IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid))) 
                                    & (~ ((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                                          & (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) 
                                   | ((IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip) 
                                      & (~ ((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                                            & (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy))))))) {
                        __Vdly__clean_disp_tb__DOT__state 
                            = (((0U != (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt)) 
                                | (IData)(vlSelf->clean_disp_tb__DOT__nlc_commit_v))
                                ? 0x56U : 0x55U);
                        vlSelf->clean_disp_tb__DOT__nlc_flush_end = 1U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_pre = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_run = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_lb_rd = 0U;
                    } else if (((0x78U == (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt)) 
                                & (~ ((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                                      & (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy))))) {
                        __Vdly__clean_disp_tb__DOT__state = 0x56U;
                        vlSelf->clean_disp_tb__DOT__nlc_flush_end = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_pre = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_run = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_lb_rd = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__nlc_out_ready = 0U;
                    if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    }
                    vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
                    if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        vlSelf->clean_disp_tb__DOT__nlc_write_long = 1U;
                        vlSelf->clean_disp_tb__DOT__nlc_compressed_long 
                            = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out;
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                            __Vdly__clean_disp_tb__DOT__state = 0x54U;
                        }
                    }
                } else {
                    __Vdly__clean_disp_tb__DOT__nlc_out_ready = 0U;
                    vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
                    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    vlSelf->clean_disp_tb__DOT__nlc_reset = 0U;
                    __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                    if (((vlSelf->clean_disp_tb__DOT__nlc_writed_bytes 
                          < vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes) 
                         & ((vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes 
                             == vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes) 
                            | (0U < VL_SHIFTR_III(32,32,32, 
                                                  (vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                                   - vlSelf->clean_disp_tb__DOT__nlc_writed_bytes), 3U))))) {
                        if (((~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)) 
                             & (0x88U <= (0x1ffU & 
                                          ((IData)(0x100U) 
                                           - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count)))))) {
                            vlSelf->clean_disp_tb__DOT__ddr_addr 
                                = (0xfffffffU & ((0U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD))
                                                  ? 
                                                 ((IData)(0x3320ffU) 
                                                  + vlSelf->clean_disp_tb__DOT__nlc_writed_bytes)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD))
                                                   ? 
                                                  ((IData)(0x4c70ffU) 
                                                   + vlSelf->clean_disp_tb__DOT__nlc_writed_bytes)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD))
                                                    ? 
                                                   ((IData)(0x65c0ffU) 
                                                    + vlSelf->clean_disp_tb__DOT__nlc_writed_bytes)
                                                    : 
                                                   ((IData)(0x7f10ffU) 
                                                    + vlSelf->clean_disp_tb__DOT__nlc_writed_bytes)))));
                            vlSelf->clean_disp_tb__DOT__ddr_burst 
                                = ((0x3ffU < (vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                              - vlSelf->clean_disp_tb__DOT__nlc_writed_bytes))
                                    ? 0x80U : (0xffU 
                                               & ((vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes 
                                                   == vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes 
                                                                  - vlSelf->clean_disp_tb__DOT__nlc_writed_bytes), 3U))
                                                   : 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                                                 - vlSelf->clean_disp_tb__DOT__nlc_writed_bytes), 3U))));
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                            __Vdly__clean_disp_tb__DOT__state = 0x53U;
                        }
                    } else {
                        __Vdly__clean_disp_tb__DOT__state 
                            = ((IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid)
                                ? 0x54U : 1U);
                    }
                }
            } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                __Vdly__clean_disp_tb__DOT__nlc_out_ready = 0U;
                vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
                __Vdly__clean_disp_tb__DOT__state = 1U;
                __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                if (((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                      > vlSelf->clean_disp_tb__DOT__PoC_frame_lz4) 
                     & (((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                          != vlSelf->clean_disp_tb__DOT__nlc_cur_frame) 
                         | (IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid)) 
                        | ((vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                            > vlSelf->clean_disp_tb__DOT__nlc_writed_bytes) 
                           & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr) 
                              > (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4)))))) {
                    if (((0U == vlSelf->clean_disp_tb__DOT__nlc_writed_bytes) 
                         | (vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                            != vlSelf->clean_disp_tb__DOT__nlc_cur_frame))) {
                        __Vdly__clean_disp_tb__DOT__nlc_flushed_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_cur_frame 
                            = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)))) {
                            __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                        }
                        if ((((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                              & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB))) 
                             & (0U == vlSelf->clean_disp_tb__DOT__vram_queue))) {
                            vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 1U;
                        }
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_compressed_bytes 
                            = vlSelf->clean_disp_tb__DOT__lz4_size;
                        vlSelf->clean_disp_tb__DOT__nlc_reset = 1U;
                        __Vdly__clean_disp_tb__DOT__nlc_busy = 1U;
                        __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = 1U;
                        vlSelf->clean_disp_tb__DOT__nlc_stall_cnt = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt = 0U;
                        vlSelf->clean_disp_tb__DOT__nlc_flush_end = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_pre = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_fl_run = 0U;
                        __Vdly__clean_disp_tb__DOT__nlc_lb_rd = 0U;
                        __Vdly__clean_disp_tb__DOT__vram_reset 
                            = ((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                               & (vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame 
                                  != vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter));
                        __Vdly__clean_disp_tb__DOT__PoC_lz4_ABCD 
                            = vlSelf->clean_disp_tb__DOT__lz4_ABCD;
                        __Vdly__clean_disp_tb__DOT__PoC_lz4_field 
                            = vlSelf->clean_disp_tb__DOT__lz4_field;
                    }
                    __Vdly__clean_disp_tb__DOT__state 
                        = ((0xffffU == (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr))
                            ? 0x55U : 0x52U);
                }
            } else {
                __Vdly__clean_disp_tb__DOT__nlc_out_ready = 0U;
                vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
                if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                }
                __Vdly__clean_disp_tb__DOT__reset_blit_lz4 = 0U;
                __Vdly__clean_disp_tb__DOT__vram_reset 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync;
                __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB 
                    = ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync) 
                       | (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw));
                if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__nlc_disp_mode))) {
                        __Vdly__clean_disp_tb__DOT__state = 1U;
                        if ((1U & (~ (((IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres) 
                                       & ((0xffffffU 
                                           & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                          > vlSelf->clean_disp_tb__DOT__switchres_frame)) 
                                      | ((~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres)) 
                                         & ((0xffffffU 
                                             & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                            <= vlSelf->clean_disp_tb__DOT__switchres_frame)))))) {
                            if (((IData)(vlSelf->clean_disp_tb__DOT__eng_busy_w) 
                                 & ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                    == vlSelf->clean_disp_tb__DOT__eng_cur_frame))) {
                                vlSelf->clean_disp_tb__DOT__eng_wm_bytes 
                                    = (0xffffffU & (IData)(
                                                           (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                            >> 0x18U)));
                                vlSelf->clean_disp_tb__DOT__eng_wm_final 
                                    = ((0xffffU == 
                                        (0xffffU & (IData)(
                                                           (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                            >> 0x30U)))) 
                                       | ((0xffffffU 
                                           & (IData)(
                                                     (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                      >> 0x18U))) 
                                          >= vlSelf->clean_disp_tb__DOT__lz4_size));
                                vlSelf->clean_disp_tb__DOT__eng_wm_stb = 1U;
                            } else if (((0xffffffU 
                                         & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                        > vlSelf->clean_disp_tb__DOT__PoC_frame_lz4)) {
                                vlSelf->clean_disp_tb__DOT__eng_pend_frame 
                                    = (0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out));
                                vlSelf->clean_disp_tb__DOT__eng_pend_bytes 
                                    = (0xffffffU & (IData)(
                                                           (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                            >> 0x18U)));
                                vlSelf->clean_disp_tb__DOT__eng_pend_size 
                                    = vlSelf->clean_disp_tb__DOT__lz4_size;
                                vlSelf->clean_disp_tb__DOT__eng_pend_final 
                                    = ((0xffffU == 
                                        (0xffffU & (IData)(
                                                           (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                            >> 0x30U)))) 
                                       | ((0xffffffU 
                                           & (IData)(
                                                     (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                      >> 0x18U))) 
                                          >= vlSelf->clean_disp_tb__DOT__lz4_size));
                                vlSelf->clean_disp_tb__DOT__eng_pend_src 
                                    = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4_ABCD))
                                        ? 0x3320ffU
                                        : ((1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4_ABCD))
                                            ? 0x4c70ffU
                                            : ((2U 
                                                == (IData)(vlSelf->clean_disp_tb__DOT__lz4_ABCD))
                                                ? 0x65c0ffU
                                                : 0x7f10ffU)));
                                vlSelf->clean_disp_tb__DOT__eng_pend_dst 
                                    = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__lz4_field))
                                        ? (((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                            & (1U == 
                                               (1U 
                                                & (vlSelf->clean_disp_tb__DOT__PoC_frame_switchres 
                                                   + 
                                                   (0xffffffU 
                                                    & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out))))))
                                            ? 0x1950ffU
                                            : 0xffU)
                                        : (((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                            & (1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4_field)))
                                            ? 0x1950ffU
                                            : 0xffU));
                                vlSelf->clean_disp_tb__DOT__eng_pend_valid = 1U;
                            }
                        }
                    } else if (vlSelf->clean_disp_tb__DOT__nlc_busy) {
                        __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = 1U;
                        if (((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                             == vlSelf->clean_disp_tb__DOT__nlc_cur_frame)) {
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                = (0xffffffU & (IData)(
                                                       (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                        >> 0x18U)));
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr 
                                = (0xffffU & (IData)(
                                                     (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                      >> 0x30U)));
                        }
                        __Vdly__clean_disp_tb__DOT__state = 0x54U;
                    } else {
                        __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = 0U;
                        if (vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_audio) {
                            __Vdly__clean_disp_tb__DOT__state = 0x54U;
                        } else {
                            __Vdly__clean_disp_tb__DOT__state 
                                = ((((IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres) 
                                     & ((0xffffffU 
                                         & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                        > vlSelf->clean_disp_tb__DOT__switchres_frame)) 
                                    | ((~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres)) 
                                       & ((0xffffffU 
                                           & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                          <= vlSelf->clean_disp_tb__DOT__switchres_frame)))
                                    ? 1U : 0x51U);
                            __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                                = (0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out));
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                = (0xffffffU & (IData)(
                                                       (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                        >> 0x18U)));
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr 
                                = (0xffffU & (((0xffffffU 
                                                & (IData)(
                                                          (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                           >> 0x18U))) 
                                               == vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4))
                                               : (IData)(
                                                         (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                          >> 0x30U))));
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                __Vdly__clean_disp_tb__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                __Vdly__clean_disp_tb__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                __Vdly__clean_disp_tb__DOT__state = 0U;
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count) 
                        >= (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_samples))) {
                __Vdly__clean_disp_tb__DOT__PoC_audio_samples = 0U;
                __Vdly__clean_disp_tb__DOT__PoC_audio_count = 0U;
                __Vdly__clean_disp_tb__DOT__PoC_audio_ddr_bytes = 0U;
                __Vdly__clean_disp_tb__DOT__PoC_audio_count_bytes = 0U;
                __Vdly__clean_disp_tb__DOT__state = 1U;
            } else {
                __Vdly__clean_disp_tb__DOT__state = 0x46U;
            }
        } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    }
                    if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                        __Vdly__clean_disp_tb__DOT__PoC_audio_count_bytes 
                            = (0xffffffU & ((IData)(8U) 
                                            + vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes));
                        if ((3U < ((IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_samples) 
                                   - (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)))) {
                            __Vdly__clean_disp_tb__DOT__PoC_audio_count 
                                = (0xffffU & ((IData)(4U) 
                                              + (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)));
                        } else if ((2U < ((IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_samples) 
                                          - (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)))) {
                            __Vdly__clean_disp_tb__DOT__PoC_audio_count 
                                = (0xffffU & ((IData)(3U) 
                                              + (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)));
                        } else if ((1U < ((IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_samples) 
                                          - (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)))) {
                            __Vdly__clean_disp_tb__DOT__PoC_audio_count 
                                = (0xffffU & ((IData)(2U) 
                                              + (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)));
                        } else if ((0U < ((IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_samples) 
                                          - (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)))) {
                            __Vdly__clean_disp_tb__DOT__PoC_audio_count 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSelf->clean_disp_tb__DOT__PoC_audio_count)));
                        }
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                            __Vdly__clean_disp_tb__DOT__state = 0x48U;
                        }
                    }
                } else {
                    __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                    if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                        vlSelf->clean_disp_tb__DOT__ddr_burst 
                            = ((0x3ffU < (0xffffffU 
                                          & (vlSelf->clean_disp_tb__DOT__PoC_audio_ddr_bytes 
                                             - vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes)))
                                ? 0x80U : (0xffU & 
                                           ((IData)(1U) 
                                            + VL_SHIFTR_III(24,24,32, 
                                                            (0xffffffU 
                                                             & (vlSelf->clean_disp_tb__DOT__PoC_audio_ddr_bytes 
                                                                - vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes)), 3U))));
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                        __Vdly__clean_disp_tb__DOT__state = 0x47U;
                        vlSelf->clean_disp_tb__DOT__ddr_addr 
                            = (0xfffffffU & ((IData)(0x32a0ffU) 
                                             + vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes));
                    }
                }
            } else {
                __Vdly__clean_disp_tb__DOT__state = 0U;
            }
        } else {
            __Vdly__clean_disp_tb__DOT__state = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        if ((0x10U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        __Vdly__clean_disp_tb__DOT__state = 0U;
                    } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        }
                        if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                            __Vdlyvval__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0 
                                = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out;
                            __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0 
                                = vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_index;
                            __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_index)));
                            if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                                __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index = 0U;
                                __Vdly__clean_disp_tb__DOT__state = 0x36U;
                            }
                        }
                    } else {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_req = 0U;
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                            __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index = 0U;
                            vlSelf->clean_disp_tb__DOT__ddr_burst 
                                = ((0x3ffU < (0xfffffffU 
                                              & (vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_bytes 
                                                 - vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)))
                                    ? 0x80U : (0xffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTR_III(28,28,32, 
                                                                (0xfffffffU 
                                                                 & (vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_bytes 
                                                                    - vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)), 3U))));
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                            __Vdly__clean_disp_tb__DOT__state = 0x3dU;
                            vlSelf->clean_disp_tb__DOT__ddr_addr 
                                = (0xfffffffU & ((2U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_field))
                                                  ? 
                                                 (((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                                   & (1U 
                                                      == 
                                                      (1U 
                                                       & (vlSelf->clean_disp_tb__DOT__PoC_frame_switchres 
                                                          + vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr))))
                                                   ? 
                                                  ((IData)(0x1950ffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)
                                                   : 
                                                  ((IData)(0xffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes))
                                                  : 
                                                 (((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                                   & (1U 
                                                      == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_field)))
                                                   ? 
                                                  ((IData)(0x1950ffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)
                                                   : 
                                                  ((IData)(0xffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes))));
                        }
                    }
                } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__state = 0U;
                } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__state = 0U;
                } else {
                    vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
                    __Vdly__clean_disp_tb__DOT__ddr_data_write = 0U;
                    __Vdly__clean_disp_tb__DOT__lz4_run 
                        = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__long_valid)));
                    __Vdly__clean_disp_tb__DOT__lz4_stop = 1U;
                    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit 
                        = vlSelf->clean_disp_tb__DOT__cmd_fskip;
                    __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio = 0U;
                    if ((((IData)(7U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total) 
                         >= vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes)) {
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 
                            = vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr;
                    }
                    if ((((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__done) 
                          | (0xffffU == (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr))) 
                         | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync))) {
                        if (((IData)(vlSelf->clean_disp_tb__DOT__vram_drive_lz4) 
                             & (~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)))) {
                            if ((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                                 > vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) {
                                __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                                    = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
                                __Vdly__clean_disp_tb__DOT__PoC_frame_vram 
                                    = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
                            }
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                            vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
                            __Vdly__clean_disp_tb__DOT__vram_reset 
                                = ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync) 
                                   | (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                      != vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame));
                        }
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio = 0U;
                        __Vdly__clean_disp_tb__DOT__lz4_reset = 1U;
                        __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__state = 1U;
                        if ((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                             > vlSelf->clean_disp_tb__DOT__PoC_frame_lz4)) {
                            __Vdly__clean_disp_tb__DOT__PoC_frame_lz4 
                                = vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr;
                        }
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0U;
                    } else {
                        __Vdly__clean_disp_tb__DOT__state 
                            = ((IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)
                                ? 1U : ((IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req)
                                         ? 0x3cU : 0x34U));
                    }
                }
            } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
                        vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
                        if ((vlSelf->clean_disp_tb__DOT__vram_queue 
                             > (IData)(vlSelf->clean_disp_tb__DOT__PoC_H))) {
                            vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
                        }
                        vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
                        vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
                        __Vdly__clean_disp_tb__DOT__ddr_data_write 
                            = ((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                               & (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy));
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB)))) {
                            vlSelf->clean_disp_tb__DOT__vga_soft_reset = 0U;
                        }
                        if ((1U & ((~ (IData)(vlSelf->clean_disp_tb__DOT__lz4_run)) 
                                   & (~ ((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                                         & (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))))) {
                            __Vdly__clean_disp_tb__DOT__state = 0x38U;
                        }
                        __Vdly__clean_disp_tb__DOT__lz4_run 
                            = (1U & (~ ((((((~ (IData)(vlSelf->clean_disp_tb__DOT__lz4_run)) 
                                            | (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__paused)) 
                                           | (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__done)) 
                                          | (IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)) 
                                         | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync)) 
                                        | (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req))));
                        __Vdly__clean_disp_tb__DOT__lz4_stop 
                            = (1U & ((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_req_ready)) 
                                     & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB))));
                        if ((((((~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req)) 
                                & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__long_valid)) 
                               & (vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                                  > vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)) 
                              & (~ ((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                                    & (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) 
                             & (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame))) {
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes 
                                = (0xfffffffU & ((IData)(8U) 
                                                 + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes));
                            vlSelf->clean_disp_tb__DOT__ddr_addr 
                                = (0xfffffffU & ((2U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_field))
                                                  ? 
                                                 (((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                                   & (1U 
                                                      == 
                                                      (1U 
                                                       & (vlSelf->clean_disp_tb__DOT__PoC_frame_switchres 
                                                          + vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr))))
                                                   ? 
                                                  ((IData)(0x1950ffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)
                                                   : 
                                                  ((IData)(0xffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes))
                                                  : 
                                                 (((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                                   & (1U 
                                                      == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_field)))
                                                   ? 
                                                  ((IData)(0x1950ffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes)
                                                   : 
                                                  ((IData)(0xffU) 
                                                   + vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes))));
                            __Vdly__clean_disp_tb__DOT__ddr_data_write = 1U;
                            vlSelf->clean_disp_tb__DOT__ddr_burst = 1U;
                            vlSelf->clean_disp_tb__DOT__ddr_data_to_write 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long;
                            if (vlSelf->clean_disp_tb__DOT__PoC_lz4_delta) {
                                __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index 
                                    = (3U & ((IData)(1U) 
                                             + (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_index)));
                                __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_req = 0U;
                            }
                            if (((((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                                   & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB))) 
                                  & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync))) 
                                 & (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                    < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame))) {
                                __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes 
                                    = (0xfffffffU & 
                                       ((IData)(8U) 
                                        + vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes));
                                __Vtask_clean_disp_tb__DOT__decode_pixel__1__total_pixels 
                                    = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame;
                                __Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long;
                                __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 1U;
                                __Vtask_clean_disp_tb__DOT__decode_pixel__1__drive_lz4 = 1U;
                                __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset 
                                    = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))
                                        ? 0U : (3U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))));
                                if (((2U < (__Vtask_clean_disp_tb__DOT__decode_pixel__1__total_pixels 
                                            - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram)) 
                                     & (0U != (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset)))) {
                                    if (__Vtask_clean_disp_tb__DOT__decode_pixel__1__drive_lz4) {
                                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                            = (0xffffffU 
                                               & ((IData)(3U) 
                                                  + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                    }
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                        = (0xffffffU 
                                           & ((IData)(3U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                    vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                                    vlSelf->clean_disp_tb__DOT__vram_wren2 = 1U;
                                    vlSelf->clean_disp_tb__DOT__vram_wren3 = 1U;
                                } else if ((1U < (__Vtask_clean_disp_tb__DOT__decode_pixel__1__total_pixels 
                                                  - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram))) {
                                    if (__Vtask_clean_disp_tb__DOT__decode_pixel__1__drive_lz4) {
                                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                            = (0xffffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                    }
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                        = (0xffffffU 
                                           & ((IData)(2U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                    vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                                    vlSelf->clean_disp_tb__DOT__vram_wren2 = 1U;
                                } else if ((0U < (__Vtask_clean_disp_tb__DOT__decode_pixel__1__total_pixels 
                                                  - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram))) {
                                    if (__Vtask_clean_disp_tb__DOT__decode_pixel__1__drive_lz4) {
                                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                            = (0xffffffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                    }
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                    vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                                }
                                if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                    vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x10U)));
                                    vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 8U)));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                        = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64));
                                    vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x28U)));
                                    vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x20U)));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x18U)));
                                    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                        = ((0xffff0000U 
                                            & __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U]) 
                                           | (0xffffU 
                                              & (IData)(
                                                        (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                         >> 0x30U))));
                                } else if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                    vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                        = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64));
                                    vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                        = (0xffU & 
                                           (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                            >> 8U));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                        = (0xffU & 
                                           vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U]);
                                    vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x18U)));
                                    vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x10U)));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 8U)));
                                    vlSelf->clean_disp_tb__DOT__r_vram_in3 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x30U)));
                                    vlSelf->clean_disp_tb__DOT__g_vram_in3 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x28U)));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in3 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x20U)));
                                    __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                        = ((0xffffff00U 
                                            & __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U]) 
                                           | (0xffU 
                                              & (IData)(
                                                        (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                         >> 0x38U))));
                                } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                    vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 8U)));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                        = (0xffU & 
                                           vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U]);
                                    vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                        = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64));
                                    vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x20U)));
                                    vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x18U)));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x10U)));
                                    vlSelf->clean_disp_tb__DOT__r_vram_in3 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x38U)));
                                    vlSelf->clean_disp_tb__DOT__g_vram_in3 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x30U)));
                                    vlSelf->clean_disp_tb__DOT__b_vram_in3 
                                        = (0xffU & (IData)(
                                                           (__Vtask_clean_disp_tb__DOT__decode_pixel__1__word64 
                                                            >> 0x28U)));
                                }
                            }
                        }
                    } else {
                        __Vdly__clean_disp_tb__DOT__lz4_write_long = 0U;
                        __Vdly__clean_disp_tb__DOT__lz4_stop = 1U;
                        __Vdly__clean_disp_tb__DOT__lz4_run = 1U;
                        __Vdly__clean_disp_tb__DOT__state 
                            = ((IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req)
                                ? 0x3cU : 0x37U);
                    }
                } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    }
                    __Vdly__clean_disp_tb__DOT__lz4_stop = 1U;
                    __Vdly__clean_disp_tb__DOT__lz4_write_long = 0U;
                    __Vdly__clean_disp_tb__DOT__lz4_run = 0U;
                    if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        __Vdly__clean_disp_tb__DOT__lz4_run 
                            = vlSelf->clean_disp_tb__DOT__lz4_write_long;
                        vlSelf->clean_disp_tb__DOT__lz4_compressed_long 
                            = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out;
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                            __Vdly__clean_disp_tb__DOT__state = 0x36U;
                        }
                        __Vdly__clean_disp_tb__DOT__lz4_write_long = 1U;
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    __Vdly__clean_disp_tb__DOT__lz4_reset = 0U;
                    __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                    if (((vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total 
                          < vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes) 
                         & ((vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes 
                             == vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes) 
                            | (0U < VL_SHIFTR_III(32,32,32, 
                                                  (vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                                   - vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total), 3U))))) {
                        if (((~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)) 
                             & (IData)(vlSelf->clean_disp_tb__DOT__lz4_write_ready))) {
                            vlSelf->clean_disp_tb__DOT__ddr_addr 
                                = (0xfffffffU & ((0U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD))
                                                  ? 
                                                 ((IData)(0x3320ffU) 
                                                  + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD))
                                                   ? 
                                                  ((IData)(0x4c70ffU) 
                                                   + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD))
                                                    ? 
                                                   ((IData)(0x65c0ffU) 
                                                    + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total)
                                                    : 
                                                   ((IData)(0x7f10ffU) 
                                                    + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total)))));
                            vlSelf->clean_disp_tb__DOT__ddr_burst 
                                = ((0x3ffU < (vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                              - vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total))
                                    ? 0x80U : (0xffU 
                                               & ((vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes 
                                                   == vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes 
                                                                  - vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total), 3U))
                                                   : 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                                                 - vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total), 3U))));
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                            __Vdly__clean_disp_tb__DOT__state = 0x35U;
                        }
                    } else {
                        __Vdly__clean_disp_tb__DOT__state = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__state = 1U;
                    __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                    if ((((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                           > vlSelf->clean_disp_tb__DOT__PoC_frame_lz4) 
                          & (vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                             > vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total)) 
                         & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr) 
                            > (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4)))) {
                        if ((0U == vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total)) {
                            __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index = 0U;
                            if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)))) {
                                __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                            }
                            if ((((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                                  & (~ (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB))) 
                                 & (0U == vlSelf->clean_disp_tb__DOT__vram_queue))) {
                                vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 1U;
                            }
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0U;
                            __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes 
                                = vlSelf->clean_disp_tb__DOT__lz4_size;
                            __Vdly__clean_disp_tb__DOT__lz4_reset = 1U;
                            __Vdly__clean_disp_tb__DOT__vram_reset 
                                = ((~ (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                                   & (vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame 
                                      != vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter));
                            __Vdly__clean_disp_tb__DOT__PoC_lz4_ABCD 
                                = vlSelf->clean_disp_tb__DOT__lz4_ABCD;
                            __Vdly__clean_disp_tb__DOT__PoC_lz4_field 
                                = vlSelf->clean_disp_tb__DOT__lz4_field;
                            vlSelf->clean_disp_tb__DOT__PoC_lz4_delta = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_req = 0U;
                            vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_bytes 
                                = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame, 1U) 
                                                 + vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame));
                            __Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v1 = 1U;
                        }
                        __Vdly__clean_disp_tb__DOT__state 
                            = ((0xffffU == (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr))
                                ? 0x38U : 0x34U);
                    }
                } else {
                    if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    }
                    __Vdly__clean_disp_tb__DOT__reset_blit_lz4 = 0U;
                    __Vdly__clean_disp_tb__DOT__vram_reset 
                        = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync;
                    __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB 
                        = ((((vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                              < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks) 
                             | (vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                                < vlSelf->clean_disp_tb__DOT__PoC_frame_ddr)) 
                            | (vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                               < vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) 
                           | (((((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
                                   | (~ (IData)((0U 
                                                 != vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)))) 
                                  | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync)) 
                                 | (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                                | (IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)) 
                               | (IData)(vlSelf->clean_disp_tb__DOT__vga_frameskip)) 
                              & (vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                                 <= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)));
                    if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        __Vdly__clean_disp_tb__DOT__auto_blit_lz4 
                            = (vlSelf->clean_disp_tb__DOT__PoC_frame_lz4 
                               < (0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)));
                        if ((((IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_blit) 
                              | (IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_audio)) 
                             | (vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total 
                                > vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total))) {
                            __Vdly__clean_disp_tb__DOT__state = 0x36U;
                        } else if ((((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                     > vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr) 
                                    & (0U != vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total))) {
                            __Vdly__clean_disp_tb__DOT__state = 0x33U;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                = vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes;
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4)));
                        } else {
                            if ((((((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                    < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks) 
                                   | ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                      < vlSelf->clean_disp_tb__DOT__PoC_frame_ddr)) 
                                  | ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                     < vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) 
                                 | (((((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
                                         | (~ (IData)(
                                                      (0U 
                                                       != vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)))) 
                                        | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync)) 
                                       | (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                                      | (IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)) 
                                     | (IData)(vlSelf->clean_disp_tb__DOT__vga_frameskip)) 
                                    & ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                       <= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)))) {
                                __Vdly__clean_disp_tb__DOT__state = 0x33U;
                                __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB = 1U;
                            } else {
                                __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB = 0U;
                                __Vdly__clean_disp_tb__DOT__state 
                                    = (((((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync) 
                                            | (IData)(vlSelf->clean_disp_tb__DOT__vram_drive_raw)) 
                                           | (IData)(vlSelf->clean_disp_tb__DOT__cmd_fskip)) 
                                          | (IData)(vlSelf->clean_disp_tb__DOT__vga_frameskip)) 
                                         | ((IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres) 
                                            & ((0xffffffU 
                                                & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                               > vlSelf->clean_disp_tb__DOT__switchres_frame))) 
                                        | ((~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres)) 
                                           & ((0xffffffU 
                                               & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                              <= vlSelf->clean_disp_tb__DOT__switchres_frame)))
                                        ? 1U : 0x33U);
                            }
                            __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                                = (0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out));
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
                                = (0xffffffU & (IData)(
                                                       (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                        >> 0x18U)));
                            __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr 
                                = (0xffffU & (((0xffffffU 
                                                & (IData)(
                                                          (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                           >> 0x18U))) 
                                               == vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4))
                                               : (IData)(
                                                         (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                          >> 0x30U))));
                        }
                    }
                }
            } else {
                __Vdly__clean_disp_tb__DOT__state = 0U;
            }
        } else if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            __Vdly__clean_disp_tb__DOT__state = 0U;
        } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            __Vdly__clean_disp_tb__DOT__state = 0U;
        } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            __Vdly__clean_disp_tb__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
                  | (0U == vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)) 
                 | ((0U == vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter) 
                    & (0U == vlSelf->clean_disp_tb__DOT__PoC_frame_ddr)))) {
                __Vdly__clean_disp_tb__DOT__new_vmode 
                    = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_vmode)));
                __Vdly__clean_disp_tb__DOT__PoC_pll_S = 0U;
                vlSelf->clean_disp_tb__DOT__req_modeline 
                    = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_modeline)));
                __Vdly__clean_disp_tb__DOT__state = 0x20U;
            }
        } else {
            __Vdly__clean_disp_tb__DOT__PoC_frame_lz4 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks;
            __Vdly__clean_disp_tb__DOT__PoC_frame_vram = 0U;
            __Vdly__clean_disp_tb__DOT__new_vmode = 
                (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_vmode)));
            vlSelf->clean_disp_tb__DOT__vga_soft_reset = 1U;
            __Vdly__clean_disp_tb__DOT__vram_reset = 1U;
            __Vdly__clean_disp_tb__DOT__vga_frameskip = 0U;
            __Vdly__clean_disp_tb__DOT__lz4_reset = 1U;
            __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks;
            __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr 
                = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks;
            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit = 0U;
            __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio = 0U;
            __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0U;
            vlSelf->clean_disp_tb__DOT__vram_drive_raw = 0U;
            __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes = 0U;
            __Vdly__clean_disp_tb__DOT__auto_blit = 0U;
            __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = 0U;
            vlSelf->clean_disp_tb__DOT__req_modeline 
                = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_modeline)));
            __Vdly__clean_disp_tb__DOT__state = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                        if ((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
                              | (0U == vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)) 
                             | ((0U == vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter) 
                                & (0U == vlSelf->clean_disp_tb__DOT__PoC_frame_ddr)))) {
                            __Vdly__clean_disp_tb__DOT__new_vmode 
                                = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_vmode)));
                            __Vdly__clean_disp_tb__DOT__PoC_H 
                                = (0xffffU & vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U]);
                            __Vdly__clean_disp_tb__DOT__PoC_frame_switchres 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks));
                            __Vdly__clean_disp_tb__DOT__PoC_pll_S = 0U;
                            vlSelf->clean_disp_tb__DOT__req_modeline 
                                = (1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__new_modeline)));
                            __Vdly__clean_disp_tb__DOT__state = 0x20U;
                            vlSelf->clean_disp_tb__DOT__PoC_HFP 
                                = (0xffU & (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                            >> 0x10U));
                            vlSelf->clean_disp_tb__DOT__PoC_HS 
                                = (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                   >> 0x18U);
                            vlSelf->clean_disp_tb__DOT__PoC_HBP 
                                = (0xffU & vlSelf->clean_disp_tb__DOT__ddr_data_tmp[1U]);
                            __Vdly__clean_disp_tb__DOT__PoC_V 
                                = (0xffffU & (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[1U] 
                                              >> 8U));
                            vlSelf->clean_disp_tb__DOT__PoC_VFP 
                                = (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[1U] 
                                   >> 0x18U);
                            vlSelf->clean_disp_tb__DOT__PoC_VS 
                                = (0xffU & vlSelf->clean_disp_tb__DOT__ddr_data_tmp[2U]);
                            vlSelf->clean_disp_tb__DOT__PoC_VBP 
                                = (0xffU & (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[2U] 
                                            >> 8U));
                            vlSelf->clean_disp_tb__DOT__PoC_ce_pix 
                                = (0xffU & (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[4U] 
                                            >> 0x10U));
                            __Vdly__clean_disp_tb__DOT__PoC_interlaced 
                                = (1U <= (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[4U] 
                                          >> 0x18U));
                            __Vdly__clean_disp_tb__DOT__PoC_FB_interlaced 
                                = (1U == (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[4U] 
                                          >> 0x18U));
                        }
                    } else {
                        if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        }
                        __Vdly__clean_disp_tb__DOT__reset_switchres = 0U;
                        if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                            vlSelf->clean_disp_tb__DOT____Vlvbound_hf6b8ffcf__0 
                                = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out;
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                            if ((0xbfU >= (0xffU & 
                                           VL_SHIFTL_III(8,32,32, (IData)(vlSelf->clean_disp_tb__DOT__ddr_data_idx), 6U)))) {
                                VL_ASSIGNSEL_WQ(192,64,
                                                (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->clean_disp_tb__DOT__ddr_data_idx), 6U)), __Vdly__clean_disp_tb__DOT__ddr_data_tmp, vlSelf->clean_disp_tb__DOT____Vlvbound_hf6b8ffcf__0);
                            }
                            if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                                __Vdly__clean_disp_tb__DOT__state = 0x1fU;
                            }
                            vlSelf->clean_disp_tb__DOT__ddr_data_idx 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->clean_disp_tb__DOT__ddr_data_idx)));
                        }
                    }
                } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__state = 0U;
                } else {
                    __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                    if (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync) {
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                        __Vdly__clean_disp_tb__DOT__auto_blit = 0U;
                        __Vdly__clean_disp_tb__DOT__vram_reset = 1U;
                        vlSelf->clean_disp_tb__DOT__vram_drive_raw = 0U;
                        __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0U;
                        __Vdly__clean_disp_tb__DOT__state = 1U;
                    } else if ((vlSelf->clean_disp_tb__DOT__PoC_px_frameskip 
                                > vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)) {
                        __Vdly__clean_disp_tb__DOT__vga_frameskip = 1U;
                        __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr 
                            = vlSelf->clean_disp_tb__DOT__PoC_px_frameskip;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram)));
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
                            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->clean_disp_tb__DOT__PoC_px_frameskip, 1U) 
                                             + vlSelf->clean_disp_tb__DOT__PoC_px_frameskip));
                        __Vdly__clean_disp_tb__DOT__auto_blit = 0U;
                        __Vdly__clean_disp_tb__DOT__state = 0x16U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram)));
                    } else {
                        __Vdly__clean_disp_tb__DOT__state = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__vga_frameskip = 1U;
                    __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                        = (0xffffffU & ((IData)(1U) 
                                        + vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks));
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr 
                        = vlSelf->clean_disp_tb__DOT__PoC_px_frameskip;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 1U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 1U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
                        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->clean_disp_tb__DOT__PoC_px_frameskip, 1U) 
                                         + vlSelf->clean_disp_tb__DOT__PoC_px_frameskip));
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                    __Vdly__clean_disp_tb__DOT__vram_reset = 1U;
                    __Vdly__clean_disp_tb__DOT__auto_blit = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_drive_raw = 0U;
                    __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0U;
                    __Vdly__clean_disp_tb__DOT__state = 0x16U;
                } else if ((0x1bU == (IData)(vlSelf->clean_disp_tb__DOT__PoC_state_frameskip))) {
                    vlSelf->clean_disp_tb__DOT__PoC_px_frameskip 
                        = (0xffffffU & ((IData)(3U) 
                                        + ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                           << (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced))));
                    __Vdly__clean_disp_tb__DOT__state = 0x1bU;
                } else {
                    vlSelf->clean_disp_tb__DOT__PoC_px_frameskip 
                        = (0xffffffU & ((0x1dU == (IData)(vlSelf->clean_disp_tb__DOT__PoC_state_frameskip))
                                         ? vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame
                                         : ((IData)(3U) 
                                            + ((0xffffffU 
                                                & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                                   * 
                                                   (0xffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                                                        + (IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced)))))) 
                                               >> (IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced)))));
                    __Vdly__clean_disp_tb__DOT__state = 0x1cU;
                }
            } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                __Vdly__clean_disp_tb__DOT__state = 0U;
            } else {
                vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
                vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
                vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
                vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
                if (((0xfffffffU & ((IData)(7U) + vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes)) 
                     >= vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes)) {
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram 
                        = vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr;
                }
                if (((vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram 
                      >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame) 
                     | (0xffffU == (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr)))) {
                    if ((vlSelf->clean_disp_tb__DOT__PoC_frame_ddr 
                         > vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) {
                        __Vdly__clean_disp_tb__DOT__PoC_frame_vram 
                            = vlSelf->clean_disp_tb__DOT__PoC_frame_ddr;
                    }
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes = 0U;
                    __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                    vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_drive_raw = 0U;
                    __Vdly__clean_disp_tb__DOT__vram_reset 
                        = ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync) 
                           | (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram 
                              != vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame));
                    if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__codec_mode))) {
                        __Vdly__clean_disp_tb__DOT__nlc_present_active = 0U;
                    }
                    __Vdly__clean_disp_tb__DOT__state = 1U;
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                } else {
                    __Vdly__clean_disp_tb__DOT__state = 0x16U;
                }
            }
        } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
            if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                    if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    }
                    vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
                    vlSelf->clean_disp_tb__DOT__vga_soft_reset = 0U;
                    if ((vlSelf->clean_disp_tb__DOT__vram_queue 
                         > (IData)(vlSelf->clean_disp_tb__DOT__PoC_H))) {
                        vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
                    }
                    vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
                    vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
                    if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes 
                            = (0xfffffffU & ((IData)(8U) 
                                             + vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes));
                        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
                            __Vdly__clean_disp_tb__DOT__state = 0x18U;
                        }
                        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync)))) {
                            __Vtask_clean_disp_tb__DOT__decode_pixel__2__total_pixels 
                                = vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr;
                            __Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out;
                            vlSelf->clean_disp_tb__DOT__vram_drive_raw = 1U;
                            __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0U;
                            __Vtask_clean_disp_tb__DOT__decode_pixel__2__drive_lz4 = 0U;
                            __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset 
                                = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))
                                    ? 0U : (3U & ((IData)(1U) 
                                                  + (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))));
                            if (((2U < (__Vtask_clean_disp_tb__DOT__decode_pixel__2__total_pixels 
                                        - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram)) 
                                 & (0U != (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset)))) {
                                if (__Vtask_clean_disp_tb__DOT__decode_pixel__2__drive_lz4) {
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                        = (0xffffffU 
                                           & ((IData)(3U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                }
                                __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                    = (0xffffffU & 
                                       ((IData)(3U) 
                                        + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                                vlSelf->clean_disp_tb__DOT__vram_wren2 = 1U;
                                vlSelf->clean_disp_tb__DOT__vram_wren3 = 1U;
                            } else if ((1U < (__Vtask_clean_disp_tb__DOT__decode_pixel__2__total_pixels 
                                              - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram))) {
                                if (__Vtask_clean_disp_tb__DOT__decode_pixel__2__drive_lz4) {
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                        = (0xffffffU 
                                           & ((IData)(2U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                }
                                __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                    = (0xffffffU & 
                                       ((IData)(2U) 
                                        + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                                vlSelf->clean_disp_tb__DOT__vram_wren2 = 1U;
                            } else if ((0U < (__Vtask_clean_disp_tb__DOT__decode_pixel__2__total_pixels 
                                              - vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram))) {
                                if (__Vtask_clean_disp_tb__DOT__decode_pixel__2__drive_lz4) {
                                    __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4));
                                }
                                __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram 
                                    = (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram));
                                vlSelf->clean_disp_tb__DOT__vram_wren1 = 1U;
                            }
                            if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x10U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 8U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                    = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64));
                                vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x28U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x20U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x18U)));
                                __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                    = ((0xffff0000U 
                                        & __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U]) 
                                       | (0xffffU & (IData)(
                                                            (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                             >> 0x30U))));
                            } else if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                    = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64));
                                vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                    = (0xffU & (vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                                >> 8U));
                                vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                    = (0xffU & vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U]);
                                vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x18U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x10U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 8U)));
                                vlSelf->clean_disp_tb__DOT__r_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x30U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x28U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x20U)));
                                __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U] 
                                    = ((0xffffff00U 
                                        & __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U]) 
                                       | (0xffU & (IData)(
                                                          (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                           >> 0x38U))));
                            } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset))) {
                                vlSelf->clean_disp_tb__DOT__r_vram_in1 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 8U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in1 
                                    = (0xffU & vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U]);
                                vlSelf->clean_disp_tb__DOT__g_vram_in1 
                                    = (0xffU & (IData)(__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64));
                                vlSelf->clean_disp_tb__DOT__r_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x20U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x18U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in2 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x10U)));
                                vlSelf->clean_disp_tb__DOT__r_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x38U)));
                                vlSelf->clean_disp_tb__DOT__g_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x30U)));
                                vlSelf->clean_disp_tb__DOT__b_vram_in3 
                                    = (0xffU & (IData)(
                                                       (__Vtask_clean_disp_tb__DOT__decode_pixel__2__word64 
                                                        >> 0x28U)));
                            }
                        }
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                    if (((vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes 
                          < vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes) 
                         & ((vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame 
                             == vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr) 
                            | (0U < VL_SHIFTR_III(32,32,32, 
                                                  (vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
                                                   - vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes), 3U))))) {
                        if (((~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)) 
                             & (IData)(vlSelf->clean_disp_tb__DOT__vram_req_ready))) {
                            vlSelf->clean_disp_tb__DOT__ddr_burst 
                                = ((0x3ffU < (0xfffffffU 
                                              & (vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
                                                 - vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes)))
                                    ? 0x80U : (0xffU 
                                               & ((vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame 
                                                   == vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   VL_SHIFTR_III(28,28,32, 
                                                                 (0xfffffffU 
                                                                  & (vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
                                                                     - vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes)), 3U))
                                                   : 
                                                  VL_SHIFTR_III(28,28,32, 
                                                                (0xfffffffU 
                                                                 & (vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
                                                                    - vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes)), 3U))));
                            vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                            __Vdly__clean_disp_tb__DOT__state = 0x17U;
                            vlSelf->clean_disp_tb__DOT__ddr_addr 
                                = (0xfffffffU & (((IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced) 
                                                  & (1U 
                                                     == 
                                                     (1U 
                                                      & (vlSelf->clean_disp_tb__DOT__PoC_frame_switchres 
                                                         + vlSelf->clean_disp_tb__DOT__PoC_frame_ddr))))
                                                  ? 
                                                 ((IData)(0x1950ffU) 
                                                  + vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes)
                                                  : 
                                                 ((IData)(0xffU) 
                                                  + vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes)));
                        }
                    } else {
                        __Vdly__clean_disp_tb__DOT__state = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
                __Vdly__clean_disp_tb__DOT__state = 1U;
                __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
                if ((((vlSelf->clean_disp_tb__DOT__PoC_frame_ddr 
                       > vlSelf->clean_disp_tb__DOT__PoC_frame_vram) 
                      & (vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr 
                         > vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram)) 
                     & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr) 
                        > (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram)))) {
                    if ((0U == vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram)) {
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                        __Vdly__clean_disp_tb__DOT__vram_reset 
                            = (vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame 
                               != vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter);
                        if ((0U == vlSelf->clean_disp_tb__DOT__vram_queue)) {
                            vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 1U;
                        }
                    }
                    __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
                        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr, 1U) 
                                         + vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr));
                    __Vdly__clean_disp_tb__DOT__state 
                        = ((0xffffU == (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr))
                            ? 0x18U : 0x16U);
                }
            } else {
                if (vlSelf->clean_disp_tb__DOT__ddr_busy) {
                    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                }
                __Vdly__clean_disp_tb__DOT__reset_blit = 0U;
                __Vdly__clean_disp_tb__DOT__vram_reset 
                    = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync;
                if (vlSelf->clean_disp_tb__DOT__ddr_data_ready) {
                    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
                    __Vdly__clean_disp_tb__DOT__auto_blit 
                        = (1U & (~ ((vlSelf->clean_disp_tb__DOT__PoC_frame_vram 
                                     >= (0xffffffU 
                                         & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out))) 
                                    | ((~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres)) 
                                       & ((0xffffffU 
                                           & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                          <= vlSelf->clean_disp_tb__DOT__switchres_frame)))));
                    __Vdly__clean_disp_tb__DOT__state 
                        = ((((IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres) 
                             & ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                > vlSelf->clean_disp_tb__DOT__switchres_frame)) 
                            & (0U == vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram))
                            ? 1U : 0x15U);
                    if (((((((~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres)) 
                             & ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                <= vlSelf->clean_disp_tb__DOT__switchres_frame)) 
                            | ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                               < vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)) 
                           | ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                              < vlSelf->clean_disp_tb__DOT__PoC_frame_ddr)) 
                          | ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                             < vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) 
                         | ((((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
                              | (~ (IData)((0U != vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter)))) 
                             | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync)) 
                            & ((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                               <= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)))) {
                        __Vdly__clean_disp_tb__DOT__state = 1U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes = 0U;
                        __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
                        if (((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                             > vlSelf->clean_disp_tb__DOT__PoC_frame_vram)) {
                            __Vdly__clean_disp_tb__DOT__PoC_frame_vram 
                                = (0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out));
                            __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                                = (0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out));
                        }
                    } else if ((((((0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out)) 
                                   > vlSelf->clean_disp_tb__DOT__PoC_frame_ddr) 
                                  & (0U != vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram)) 
                                 & (vlSelf->clean_disp_tb__DOT__PoC_frame_vram 
                                    < vlSelf->clean_disp_tb__DOT__PoC_frame_ddr)) 
                                & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync)))) {
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr 
                            = vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame;
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram)));
                    } else {
                        __Vdly__clean_disp_tb__DOT__PoC_frame_ddr 
                            = (0xffffffU & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out));
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr 
                            = (0xffffffU & (IData)(
                                                   (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                    >> 0x18U)));
                        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr 
                            = (0xffffU & (((0xffffffU 
                                            & (IData)(
                                                      (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                       >> 0x18U))) 
                                           == vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram))
                                           : (IData)(
                                                     (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                                                      >> 0x30U))));
                    }
                }
            }
        } else {
            __Vdly__clean_disp_tb__DOT__state = 0U;
        }
    } else if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        __Vdly__clean_disp_tb__DOT__state = 0U;
    } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        __Vdly__clean_disp_tb__DOT__state = 0U;
    } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        __Vdly__clean_disp_tb__DOT__state = 0U;
    } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__state))) {
        vlSelf->clean_disp_tb__DOT__r_in = 0U;
        vlSelf->clean_disp_tb__DOT__g_in = 0U;
        vlSelf->clean_disp_tb__DOT__b_in = 0U;
        vlSelf->clean_disp_tb__DOT__vga_frame_reset = 0U;
        __Vdly__clean_disp_tb__DOT__vram_reset = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
        __Vdly__clean_disp_tb__DOT__ddr_data_write = 0U;
        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
        __Vdly__clean_disp_tb__DOT__lz4_reset = 0U;
        vlSelf->clean_disp_tb__DOT__vram_active = 1U;
        vlSelf->clean_disp_tb__DOT__ddr_addr = 0U;
        if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)))) {
            if (((IData)(vlSelf->clean_disp_tb__DOT__PoC_pll_S) 
                 & ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
                    | (0U == vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram)))) {
                __Vdly__clean_disp_tb__DOT__state = 0x21U;
            } else if ((((IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres) 
                         & (vlSelf->clean_disp_tb__DOT__switchres_frame 
                            <= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)) 
                        & (((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt) 
                            > (IData)(vlSelf->clean_disp_tb__DOT__PoC_V)) 
                           | (0U == vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks)))) {
                vlSelf->clean_disp_tb__DOT__ddr_addr = 8U;
                __Vdly__clean_disp_tb__DOT__reset_switchres = 1U;
                vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                vlSelf->clean_disp_tb__DOT__ddr_burst = 3U;
                vlSelf->clean_disp_tb__DOT__ddr_data_idx = 0U;
                __Vdly__clean_disp_tb__DOT__state = 0x1eU;
            } else if (vlSelf->clean_disp_tb__DOT__cmd_fskip) {
                __Vdly__clean_disp_tb__DOT__state = 0x1aU;
            } else if (((((2U == (IData)(vlSelf->clean_disp_tb__DOT__codec_mode)) 
                          & (2U == (IData)(vlSelf->clean_disp_tb__DOT__nlc_disp_mode))) 
                         & ((IData)(vlSelf->clean_disp_tb__DOT__nlc_present_pending) 
                            | (IData)(vlSelf->clean_disp_tb__DOT__nlc_present_active))) 
                        & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga_frameskip)))) {
                __Vdly__clean_disp_tb__DOT__state = 0x57U;
            } else if ((((IData)(vlSelf->clean_disp_tb__DOT__cmd_blit) 
                         | (IData)(vlSelf->clean_disp_tb__DOT__auto_blit)) 
                        & (~ (IData)(vlSelf->clean_disp_tb__DOT__vga_frameskip)))) {
                __Vdly__clean_disp_tb__DOT__reset_blit 
                    = ((IData)(vlSelf->clean_disp_tb__DOT__cmd_blit) 
                       & (~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres)));
                vlSelf->clean_disp_tb__DOT__ddr_burst = 1U;
                vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                __Vdly__clean_disp_tb__DOT__state = 0x14U;
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__cmd_blit_lz4) 
                        | (IData)(vlSelf->clean_disp_tb__DOT__auto_blit_lz4))) {
                vlSelf->clean_disp_tb__DOT__ddr_addr = 0x20U;
                __Vdly__clean_disp_tb__DOT__reset_blit_lz4 
                    = ((IData)(vlSelf->clean_disp_tb__DOT__cmd_blit_lz4) 
                       & (~ (IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres)));
                vlSelf->clean_disp_tb__DOT__ddr_burst = 1U;
                vlSelf->clean_disp_tb__DOT__ddr_data_req = 1U;
                __Vdly__clean_disp_tb__DOT__state = 
                    ((2U == (IData)(vlSelf->clean_disp_tb__DOT__codec_mode))
                      ? 0x50U : 0x32U);
            }
        }
    } else {
        vlSelf->clean_disp_tb__DOT__ddr_addr = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_frame_vram = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_frame_lz4 = 0U;
        vlSelf->clean_disp_tb__DOT__r_in = 0U;
        vlSelf->clean_disp_tb__DOT__g_in = 0U;
        vlSelf->clean_disp_tb__DOT__b_in = 0U;
        __Vdly__clean_disp_tb__DOT__vga_reset = 0U;
        vlSelf->clean_disp_tb__DOT__vga_frame_reset = 1U;
        vlSelf->clean_disp_tb__DOT__vga_soft_reset = 0U;
        vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
        __Vdly__clean_disp_tb__DOT__vga_frameskip = 0U;
        __Vdly__clean_disp_tb__DOT__vram_reset = 1U;
        vlSelf->clean_disp_tb__DOT__vram_active = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
        vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
        vlSelf->clean_disp_tb__DOT__vram_drive_raw = 0U;
        __Vdly__clean_disp_tb__DOT__vram_drive_lz4 = 0U;
        __Vdly__clean_disp_tb__DOT__ddr_data_write = 0U;
        vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
        vlSelf->clean_disp_tb__DOT__ddr_burst = 1U;
        __Vdly__clean_disp_tb__DOT__PoC_FB_interlaced = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_interlaced = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_frame_switchres = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_frame_ddr = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
        __Vdly__clean_disp_tb__DOT__auto_blit = 0U;
        __Vdly__clean_disp_tb__DOT__lz4_run = 0U;
        __Vdly__clean_disp_tb__DOT__lz4_reset = 0U;
        __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4 = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_lz4_ABCD = 0U;
        __Vdly__clean_disp_tb__DOT__PoC_lz4_field = 0U;
        __Vdly__clean_disp_tb__DOT__auto_blit_lz4 = 0U;
        __Vdly__clean_disp_tb__DOT__state = 1U;
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
         | (IData)(vlSelf->clean_disp_tb__DOT__vram_reset))) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame 
            = (0xffffffU & ((0xffffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_H) 
                                          * (IData)(vlSelf->clean_disp_tb__DOT__PoC_V))) 
                            >> (IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced)));
    }
    if (vlSelf->clean_disp_tb__DOT__dbg_freeze_hit) {
        __Vdly__clean_disp_tb__DOT__vram_reset = 1U;
    }
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd = __Vdly__clean_disp_tb__DOT__u_eng__DOT__lb_rd;
    if (__Vdlyvset__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0) {
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__lbuf[__Vdlyvdim0__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_eng__DOT__lbuf__v0;
    }
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt = __Vdly__clean_disp_tb__DOT__u_eng__DOT__wcnt;
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ififo[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ififo__v0;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_tail 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__if_tail;
    if ((0x59fU >= (0x7ffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ra)))) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP_q 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP
            [(0x7ffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ra))];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP_q 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP
            [(0x7ffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ra))];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP_q 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP
            [(0x7ffU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ra))];
    } else {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP_q = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP_q = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP_q = 0U;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg_q 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg
        [(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank) 
           << 7U) | (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr)))];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg_q 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg
        [(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank) 
           << 7U) | (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr)))];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg_q 
        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg
        [(((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank) 
           << 7U) | (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr)))];
    vlSelf->clean_disp_tb__DOT__cencnt = __Vdly__clean_disp_tb__DOT__cencnt;
    vlSelf->clean_disp_tb__DOT__eng_adopt_ack = __Vdly__clean_disp_tb__DOT__eng_adopt_ack;
    vlSelf->clean_disp_tb__DOT__PoC_state_frameskip 
        = __Vdly__clean_disp_tb__DOT__PoC_state_frameskip;
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4 = __Vdly__clean_disp_tb__DOT__PoC_frame_lz4;
    vlSelf->clean_disp_tb__DOT__new_vmode = __Vdly__clean_disp_tb__DOT__new_vmode;
    vlSelf->clean_disp_tb__DOT__PoC_pll_S = __Vdly__clean_disp_tb__DOT__PoC_pll_S;
    vlSelf->clean_disp_tb__DOT__nlc_present_pending 
        = __Vdly__clean_disp_tb__DOT__nlc_present_pending;
    vlSelf->clean_disp_tb__DOT__PoC_frame_ddr = __Vdly__clean_disp_tb__DOT__PoC_frame_ddr;
    vlSelf->clean_disp_tb__DOT__nlc_flushed_bytes = __Vdly__clean_disp_tb__DOT__nlc_flushed_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_blit 
        = __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_blit;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_audio 
        = __Vdly__clean_disp_tb__DOT__PoC_lz4_resume_audio;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr;
    vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes 
        = __Vdly__clean_disp_tb__DOT__nlc_compressed_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_px_lz4;
    vlSelf->clean_disp_tb__DOT__vram_drive_lz4 = __Vdly__clean_disp_tb__DOT__vram_drive_lz4;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_vram_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset 
        = __Vdly__clean_disp_tb__DOT__PoC_frame_rgb_offset;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_px_vram;
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U] = 
        __Vdly__clean_disp_tb__DOT__ddr_data_tmp[0U];
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[1U] = 
        __Vdly__clean_disp_tb__DOT__ddr_data_tmp[1U];
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[2U] = 
        __Vdly__clean_disp_tb__DOT__ddr_data_tmp[2U];
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[3U] = 
        __Vdly__clean_disp_tb__DOT__ddr_data_tmp[3U];
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[4U] = 
        __Vdly__clean_disp_tb__DOT__ddr_data_tmp[4U];
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[5U] = 
        __Vdly__clean_disp_tb__DOT__ddr_data_tmp[5U];
    vlSelf->clean_disp_tb__DOT__nlc_cur_frame = __Vdly__clean_disp_tb__DOT__nlc_cur_frame;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD = __Vdly__clean_disp_tb__DOT__PoC_lz4_ABCD;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_field = __Vdly__clean_disp_tb__DOT__PoC_lz4_field;
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr = __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_ddr;
    vlSelf->clean_disp_tb__DOT__PoC_audio_samples = __Vdly__clean_disp_tb__DOT__PoC_audio_samples;
    vlSelf->clean_disp_tb__DOT__PoC_audio_count = __Vdly__clean_disp_tb__DOT__PoC_audio_count;
    vlSelf->clean_disp_tb__DOT__PoC_audio_ddr_bytes 
        = __Vdly__clean_disp_tb__DOT__PoC_audio_ddr_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes 
        = __Vdly__clean_disp_tb__DOT__PoC_audio_count_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_index 
        = __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_index;
    vlSelf->clean_disp_tb__DOT__vga_frameskip = __Vdly__clean_disp_tb__DOT__vga_frameskip;
    vlSelf->clean_disp_tb__DOT__auto_blit = __Vdly__clean_disp_tb__DOT__auto_blit;
    vlSelf->clean_disp_tb__DOT__PoC_frame_switchres 
        = __Vdly__clean_disp_tb__DOT__PoC_frame_switchres;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_ddr_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_vram;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_bl_ddr;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_px_ddr;
    vlSelf->clean_disp_tb__DOT__nlc_present_active 
        = __Vdly__clean_disp_tb__DOT__nlc_present_active;
    vlSelf->clean_disp_tb__DOT__auto_blit_lz4 = __Vdly__clean_disp_tb__DOT__auto_blit_lz4;
    vlSelf->clean_disp_tb__DOT__eng_done_stb = __Vdly__clean_disp_tb__DOT__eng_done_stb;
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB = __Vdly__clean_disp_tb__DOT__PoC_frame_lz4_FB;
    vlSelf->clean_disp_tb__DOT__lz4_write_long = __Vdly__clean_disp_tb__DOT__lz4_write_long;
    vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt = __Vdly__clean_disp_tb__DOT__vga__DOT__v_cnt;
    vlSelf->clean_disp_tb__DOT__eng_cur_frame = __Vdly__clean_disp_tb__DOT__eng_cur_frame;
    vlSelf->clean_disp_tb__DOT__eng_busy_w = __Vdly__clean_disp_tb__DOT__eng_busy_w;
    vlSelf->clean_disp_tb__DOT__cmd_fskip = __Vdly__clean_disp_tb__DOT__cmd_fskip;
    if (__Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0) {
        clean_disp_tb__DOT__PoC_lz4_delta_FB[__Vdlyvdim0__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__PoC_lz4_delta_FB__v0;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__PoC_lz4_delta_FB__v1) {
        clean_disp_tb__DOT__PoC_lz4_delta_FB[0U] = 0ULL;
    }
    vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes 
        = __Vdly__clean_disp_tb__DOT__lz4_compressed_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_frame_vram = __Vdly__clean_disp_tb__DOT__PoC_frame_vram;
    vlSelf->clean_disp_tb__DOT__PoC_interlaced = __Vdly__clean_disp_tb__DOT__PoC_interlaced;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes 
        = __Vdly__clean_disp_tb__DOT__PoC_subframe_wr_bytes;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__block_write_total;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__vga_vblanks;
    vlSelf->clean_disp_tb__DOT__nlc_busy = __Vdly__clean_disp_tb__DOT__nlc_busy;
    vlSelf->clean_disp_tb__DOT__nlc_writed_bytes = __Vdly__clean_disp_tb__DOT__nlc_writed_bytes;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count 
        = (0x1ffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_head) 
                     - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_tail)));
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP__v0;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr;
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg__v0;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP__v0;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr;
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg__v0;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP__v0;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr;
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg__v0;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__dec_bank;
    vlSelf->clean_disp_tb__DOT__new_modeline = vlSelf->clean_disp_tb__DOT__req_modeline;
    vlSelf->clean_disp_tb__DOT__vga__DOT____VdfgTmp_hf63363d6__0 
        = ((IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced) 
           & (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__field));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__input_done 
        = ((vlSelf->clean_disp_tb__DOT__nlc_writed_bytes 
            >= vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm) 
           & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem = (vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm 
                                                   - vlSelf->clean_disp_tb__DOT__nlc_writed_bytes);
    __Vtableidx1 = (((IData)(vlSelf->clean_disp_tb__DOT__reset_switchres) 
                     << 5U) | (((IData)(vlSelf->clean_disp_tb__DOT__cmd_switchres_req) 
                                << 4U) | (((IData)(vlSelf->clean_disp_tb__DOT__reset_blit_lz4) 
                                           << 3U) | 
                                          (((IData)(vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req) 
                                            << 2U) 
                                           | (((IData)(vlSelf->clean_disp_tb__DOT__reset_blit) 
                                               << 1U) 
                                              | (IData)(vlSelf->clean_disp_tb__DOT__cmd_blit_req))))));
    if ((1U & Vclean_disp_tb__ConstPool__TABLE_h0ad33419_0
         [__Vtableidx1])) {
        vlSelf->clean_disp_tb__DOT__cmd_blit = Vclean_disp_tb__ConstPool__TABLE_h6451e8c0_0
            [__Vtableidx1];
    }
    if ((2U & Vclean_disp_tb__ConstPool__TABLE_h0ad33419_0
         [__Vtableidx1])) {
        vlSelf->clean_disp_tb__DOT__cmd_blit_lz4 = 
            Vclean_disp_tb__ConstPool__TABLE_h41e59dd1_0
            [__Vtableidx1];
    }
    if ((4U & Vclean_disp_tb__ConstPool__TABLE_h0ad33419_0
         [__Vtableidx1])) {
        vlSelf->clean_disp_tb__DOT__cmd_switchres = 
            Vclean_disp_tb__ConstPool__TABLE_h79b440d2_0
            [__Vtableidx1];
    }
    vlSelf->clean_disp_tb__DOT__nlc_lb_q = vlSelf->clean_disp_tb__DOT__nlc_lbuf
        [(((IData)(vlSelf->clean_disp_tb__DOT__nlc_fl_pre) 
           & (0x56U == (IData)(vlSelf->clean_disp_tb__DOT__state)))
           ? ((IData)(vlSelf->clean_disp_tb__DOT__nlc_fl_run)
               ? (0x7fU & (((IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write) 
                            & ((~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_busy)) 
                               & ((IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_rd) 
                                  < (0xffU & ((IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt) 
                                              - (IData)(1U))))))
                            ? ((IData)(2U) + (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_rd))
                            : ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__nlc_lb_rd))))
               : 1U) : 0U)];
    vlSelf->clean_disp_tb__DOT__dbg_freeze_hit = 0U;
    if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__primed = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__primed = 0U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__primed = 0U;
    } else if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__prime_all) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__primed = 1U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__primed = 1U;
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__primed = 1U;
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__frz_vb_d)))) {
        if (((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync) 
             & (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                == vlSelf->clean_disp_tb__DOT__dbg_prev_px))) {
            if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__dbg_freeze_frames))) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__dbg_freeze_valid))))) {
                    VL_WRITEF("*** FREEZE_LATCH cyc=%0d fsm=%0# eng=%0# busy=%0# px=%0# q=%0# ***\n",
                              32,vlSelf->clean_disp_tb__DOT__cycles,
                              8,(IData)(vlSelf->clean_disp_tb__DOT__state),
                              4,vlSelf->clean_disp_tb__DOT__u_eng__DOT__st,
                              1,(IData)(vlSelf->clean_disp_tb__DOT__dm_busy),
                              24,vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter,
                              24,vlSelf->clean_disp_tb__DOT__vram_queue);
                    vlSelf->clean_disp_tb__DOT__dbg_freeze_valid = 1U;
                }
                vlSelf->clean_disp_tb__DOT__dbg_freeze_hit = 1U;
                __Vdly__clean_disp_tb__DOT__dbg_freeze_frames = 0U;
            } else {
                __Vdly__clean_disp_tb__DOT__dbg_freeze_frames 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__dbg_freeze_frames)));
            }
        } else {
            __Vdly__clean_disp_tb__DOT__dbg_freeze_frames = 0U;
        }
        vlSelf->clean_disp_tb__DOT__dbg_prev_px = vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter;
    }
    if (vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset) {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[0U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[1U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[2U] = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_n = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_flushed = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_head = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_tail = 0U;
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st = 0U;
        __Vdly__clean_disp_tb__DOT__nlc_long_valid = 0U;
        __Vdly__clean_disp_tb__DOT__nlc_uncompressed_bytes = 0U;
    } else {
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_q 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ofifo
            [(0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_tail))];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U] 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[0U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U] 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[1U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[2U] 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[2U];
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_n;
        if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__comb_v) {
            VL_EXTEND_WI(80,8, __Vtemp_77, ([&]() {
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__v 
                            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iB;
                        __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__Vfuncout 
                            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__v)))
                                ? 0U : (VL_LTS_III(32, 0xffU, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__v)))
                                         ? 0xffU : 
                                        (0xffU & (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__v))));
                    }(), (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__55__Vfuncout)));
            VL_CONCAT_WWI(96,80,16, __Vtemp_78, __Vtemp_77, 
                          ((([&]() {
                                __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__v 
                                    = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oG;
                                __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__Vfuncout 
                                    = (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__v)))
                                        ? 0U : (VL_LTS_III(32, 0xffU, 
                                                           VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__v)))
                                                 ? 0xffU
                                                 : 
                                                (0xffU 
                                                 & (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__v))));
                            }(), (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__56__Vfuncout)) 
                            << 8U) | ([&]() {
                            __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__v 
                                = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oR;
                            __Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__Vfuncout 
                                = (VL_GTS_III(32, 0U, 
                                              VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__v)))
                                    ? 0U : (VL_LTS_III(32, 0xffU, 
                                                       VL_EXTENDS_II(32,16, (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__v)))
                                             ? 0xffU
                                             : (0xffU 
                                                & (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__v))));
                        }(), (IData)(__Vfunc_clean_disp_tb__DOT__u_nlc__DOT__clamp8__57__Vfuncout))));
            VL_SHIFTL_WWI(96,96,10, __Vtemp_79, __Vtemp_78, 
                          ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn) 
                           << 3U));
            __Vtemp_76[1U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U] 
                              | __Vtemp_79[1U]);
            __Vtemp_76[2U] = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[2U] 
                              | __Vtemp_79[2U]);
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U] 
                = (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U] 
                   | __Vtemp_79[0U]);
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U] 
                = __Vtemp_76[1U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[2U] 
                = __Vtemp_76[2U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn 
                = (0x7fU & ((IData)(3U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn)));
        }
        if (((IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid) 
             & ((IData)(vlSelf->clean_disp_tb__DOT__nlc_eng_sel)
                 ? (IData)(vlSelf->clean_disp_tb__DOT__eng_dec_oready)
                 : (IData)(vlSelf->clean_disp_tb__DOT__nlc_out_ready)))) {
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_tail 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_tail)));
            __Vdly__clean_disp_tb__DOT__nlc_long_valid = 0U;
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st = 0U;
        } else if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid)))) {
            if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count))) {
                if (vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_pop_st) {
                    __Vdly__clean_disp_tb__DOT__nlc_uncompressed_bytes 
                        = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes);
                    vlSelf->clean_disp_tb__DOT__nlc_uncompressed_long 
                        = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_q;
                    __Vdly__clean_disp_tb__DOT__nlc_long_valid = 1U;
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st = 0U;
                } else {
                    __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st = 1U;
                }
            }
        }
        if ((8U <= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn))) {
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn 
                = (0x7fU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn) 
                            - (IData)(8U)));
            __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0 
                = (((QData)((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U])));
            __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0 = 1U;
            __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0 
                = (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head));
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_head 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head)));
            VL_SHIFTR_WWI(96,96,32, __Vtemp_82, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na, 0x40U);
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U] 
                = __Vtemp_82[0U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U] 
                = __Vtemp_82[1U];
            vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[2U] 
                = __Vtemp_82[2U];
        } else if (((6U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)) 
                    & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_flushed)))) {
            if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn))) {
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn = 0U;
                __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1 
                    = (((QData)((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U])));
                __Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1 = 1U;
                __Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1 
                    = (0x7fU & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head));
                __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_head 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head)));
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U] = 0U;
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U] = 0U;
                vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[2U] = 0U;
            }
            __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_flushed = 1U;
        }
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[0U] 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[0U];
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[1U] 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[1U];
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[2U] 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na[2U];
        __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_n 
            = vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn;
    }
    if (vlSelf->clean_disp_tb__DOT__lz4_reset) {
        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__ML = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__LL = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__MP = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__offset = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr3 = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total = 0U;
        __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 0U;
        vlSelf->clean_disp_tb__DOT__lz4__DOT__done = 0U;
    }
    if (((IData)(vlSelf->clean_disp_tb__DOT__dm_rd) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__unnamedblk1__DOT__old_rd)))) {
        __Vdly__clean_disp_tb__DOT__u_ddram__DOT__read_req = 1U;
    }
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__data_ready = 0U;
    if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__state))) {
        __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd 
            = (0x1ffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd));
        if (((IData)(vlSelf->clean_disp_tb__DOT__AV_DOUT_READY) 
             | (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd_fired))) {
            if (vlSelf->clean_disp_tb__DOT__AV_DOUT_READY) {
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd = 0U;
                vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out 
                    = vlSelf->clean_disp_tb__DOT__AV_DOUT;
            } else {
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd 
                    = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd;
                vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out = 0xdeaddeaddeaddeadULL;
            }
            if (((IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd_fired) 
                 & (0xfU != (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__timeout_cnt)))) {
                vlSelf->clean_disp_tb__DOT__u_ddram__DOT__timeout_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__timeout_cnt)));
            }
            vlSelf->clean_disp_tb__DOT__u_ddram__DOT__data_ready = 1U;
            if (((IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index) 
                 == (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst))) {
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state = 0U;
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__read_req = 0U;
            } else {
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index)));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->clean_disp_tb__DOT__AV_BUSY)))) {
        vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_write = 0U;
        __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_read = 0U;
        if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__state))) {
            if (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__read_req) {
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index = 1U;
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_address 
                    = vlSelf->clean_disp_tb__DOT__dm_addr_h;
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_read = 1U;
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_burst 
                    = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__dm_burst))
                        ? 1U : (IData)(vlSelf->clean_disp_tb__DOT__dm_burst));
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd = 0U;
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state = 2U;
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns)
                         ? (IData)(vlSelf->clean_disp_tb__DOT__eng_wr)
                         : ((0U == (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)) 
                            & (IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write)))) {
                vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_data 
                    = vlSelf->clean_disp_tb__DOT__dm_din;
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_address 
                    = vlSelf->clean_disp_tb__DOT__dm_addr_h;
                vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_write = 1U;
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_burst 
                    = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__dm_burst))
                        ? 1U : (IData)(vlSelf->clean_disp_tb__DOT__dm_burst));
                if ((1U < (IData)(vlSelf->clean_disp_tb__DOT__dm_burst))) {
                    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index = 2U;
                    __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__state))) {
            vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_data 
                = vlSelf->clean_disp_tb__DOT__dm_din;
            vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_write = 1U;
            if (((IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index) 
                 == (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst))) {
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state = 0U;
            } else {
                __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index)));
            }
        }
    }
    vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 0U;
    if (((IData)(vlSelf->clean_disp_tb__DOT__lz4_run) 
         & ((~ (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__long_valid)) 
            | (~ (((IData)(vlSelf->clean_disp_tb__DOT__ddr_busy) 
                   & (IData)(vlSelf->clean_disp_tb__DOT__ddr_data_write)) 
                  | ((IData)(vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req) 
                     | (IData)(vlSelf->clean_disp_tb__DOT__lz4_stop))))))) {
        __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 0U;
        if ((8U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
            if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                    if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0U;
                    } else {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                            = (vlSelf->clean_disp_tb__DOT__lz4__DOT__ML 
                               - (IData)(8U));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__MP 
                            = (0xffffU & ((IData)(8U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP)));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr 
                            = (0xffffU & ((IData)(8U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr)));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 
                            = (0x1fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13)));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W 
                            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__ML_W);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13 
                            = (0x1fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13)));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 1U;
                        if (((((((((1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)) 
                                   | (2U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) 
                                  | (3U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) 
                                 | (4U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) 
                                | (5U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) 
                               | (6U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) 
                              | (7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) 
                             | (8U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)))) {
                            if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) {
                                __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                    = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x38U))))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x38U))))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                        >> 0x38U))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                           >> 0x38U))))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                              >> 0x38U))))) 
                                                  << 0x18U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))) 
                                                     << 0x10U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))))))))));
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x38U))))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x38U))))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                        >> 0x38U))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                           >> 0x38U))))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                              >> 0x38U))))) 
                                                  << 0x18U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))) 
                                                     << 0x10U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))))))))));
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v0 
                                    = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x38U))))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x38U))))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                        >> 0x38U))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                           >> 0x38U))))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                              >> 0x38U))))) 
                                                  << 0x18U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))) 
                                                     << 0x10U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                                >> 0x38U))))))))))));
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v0 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v0 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) {
                                __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x30U))))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x30U))))) 
                                         << 0x20U) 
                                        | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                        >> 0x30U))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                         >> 0x30U))))))));
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x30U))))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x30U))))) 
                                         << 0x20U) 
                                        | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                        >> 0x30U))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                         >> 0x30U))))))));
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v1 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x30U))))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x30U))))) 
                                         << 0x20U) 
                                        | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                        >> 0x30U))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                         >> 0x30U))))))));
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v1 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v1 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            } else if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) {
                                __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x28U))))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x28U))))) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                      >> 0x28U)))))));
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x28U))))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x28U))))) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                      >> 0x28U)))))));
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v2 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x28U))))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x28U))))) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                      >> 0x28U)))))));
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v2 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v2 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            } else if ((4U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) {
                                __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                    = (((QData)((IData)(
                                                        (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x20U))));
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = (((QData)((IData)(
                                                        (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x20U))));
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v3 
                                    = (((QData)((IData)(
                                                        (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                     >> 0x20U))));
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v3 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v3 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            } else if ((5U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) {
                                __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                    = (((QData)((IData)(
                                                        (0xffffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x18U))))) 
                                        << 0x28U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 0x18U));
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = (((QData)((IData)(
                                                        (0xffffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x18U))))) 
                                        << 0x28U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 0x18U));
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v4 
                                    = (((QData)((IData)(
                                                        (0xffffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x18U))))) 
                                        << 0x28U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 0x18U));
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v4 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v4 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            } else if ((6U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) {
                                __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x10U))))) 
                                        << 0x30U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 0x10U));
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x10U))))) 
                                        << 0x30U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 0x10U));
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v5 
                                    = (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 0x10U))))) 
                                        << 0x30U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 0x10U));
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v5 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v5 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            } else if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))) {
                                __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                    = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 8U))))) 
                                        << 0x38U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 8U));
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 8U))))) 
                                        << 0x38U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 8U));
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v6 
                                    = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                    >> 8U))))) 
                                        << 0x38U) | 
                                       (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                        >> 8U));
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v6 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v6 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            } else {
                                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data;
                                __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v7 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data;
                                __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v7 = 1U;
                                __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v7 
                                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                            }
                        }
                        if ((8U == vlSelf->clean_disp_tb__DOT__lz4__DOT__ML)) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0U;
                        } else if ((0x10U > vlSelf->clean_disp_tb__DOT__lz4__DOT__ML)) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xcU;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                        = (vlSelf->clean_disp_tb__DOT__lz4__DOT__ML 
                           - (IData)(8U));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP 
                        = (0xffffU & ((IData)(8U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr 
                        = (0xffffU & ((IData)(8U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                        = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W 
                        = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__ML_W);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13 
                        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 1U;
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 
                        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13)));
                    if ((8U == vlSelf->clean_disp_tb__DOT__lz4__DOT__ML)) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0U;
                    } else if ((0x10U > vlSelf->clean_disp_tb__DOT__lz4__DOT__ML)) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xcU;
                    }
                    if (((((((((0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3)) 
                               | (1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                              | (2U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                             | (3U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                            | (4U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                           | (5U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                          | (6U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                         | (7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3)))) {
                        if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13];
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13];
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v8 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13];
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v8 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v8 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffffffffff00ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                                 [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                                 >> 0x38U))))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v9 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v9 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v9 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffffffff0000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                                 [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                                 >> 0x30U))))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v10 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v10 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v10 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffffff000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                                 [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                                 >> 0x28U))))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                    << 0x18U) | (QData)((IData)(
                                                                (0xffffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v11 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                    << 0x18U) | (QData)((IData)(
                                                                (0xffffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v11 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v11 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((4U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffff00000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                      [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                      >> 0x20U))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(
                                                    vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])) 
                                    << 0x20U) | (QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v12 
                                = (((QData)((IData)(
                                                    vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])) 
                                    << 0x20U) | (QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v12 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v12 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((5U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffff0000000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                      [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                      >> 0x18U));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(
                                                    (0xffffffU 
                                                     & (IData)(
                                                               vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])))) 
                                    << 0x28U) | (0xffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v13 
                                = (((QData)((IData)(
                                                    (0xffffffU 
                                                     & (IData)(
                                                               vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])))) 
                                    << 0x28U) | (0xffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v13 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v13 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((6U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffff000000000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                      [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                      >> 0x10U));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])))) 
                                    << 0x30U) | (0xffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v14 
                                = (((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])))) 
                                    << 0x30U) | (0xffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v14 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v14 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xff00000000000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                      [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                      >> 8U));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])))) 
                                    << 0x38U) | (0xffffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v15 
                                = (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13])))) 
                                    << 0x38U) | (0xffffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v15 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v15 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        }
                    }
                } else {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__ML_W);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                        = (vlSelf->clean_disp_tb__DOT__lz4__DOT__ML 
                           - (IData)(1U));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP3 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13 
                        = (0x1fffU & ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13))
                                       : (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr3 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3), 3U)))) 
                            & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                           | ((QData)((IData)((0xffU 
                                               & (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3) 
                                                   >= (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))
                                                   ? 
                                                  ((0xff00U 
                                                    & ((IData)(
                                                               (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U))))))
                                                   : 
                                                  ((0xff00U 
                                                    & ((IData)(
                                                               (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                                 [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U)))))))))) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3), 3U))));
                    if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 1U;
                        vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                            = (((QData)((IData)((0xffU 
                                                 & (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3) 
                                                     >= (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))
                                                     ? (IData)(
                                                               (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U))))
                                                     : (IData)(
                                                               (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U)))))))) 
                                << 0x38U) | (0xffffffffffffffULL 
                                             & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                        __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v16 
                            = (((QData)((IData)((0xffU 
                                                 & (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3) 
                                                     >= (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset))
                                                     ? (IData)(
                                                               (vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U))))
                                                     : (IData)(
                                                               (vlSelf->clean_disp_tb__DOT__lz4__DOT__window
                                                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13] 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3), 3U)))))))) 
                                << 0x38U) | (0xffffffffffffffULL 
                                             & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                        __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v16 = 1U;
                        __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v16 
                            = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 
                            = (0x1fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13)));
                    }
                    if ((((8U < vlSelf->clean_disp_tb__DOT__lz4__DOT__ML) 
                          & (7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3))) 
                         & ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13) 
                            > ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13))))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xdU;
                    } else if ((((8U < vlSelf->clean_disp_tb__DOT__lz4__DOT__ML) 
                                 & (7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                                & (8U >= (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xeU;
                    } else if ((1U == vlSelf->clean_disp_tb__DOT__lz4__DOT__ML)) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                        = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                            & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                            ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                           [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                            : 0ULL);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xaU;
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                        = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                            [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                            >> (0x3fU 
                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                    if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                    }
                } else if ((0xffU > (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data))) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                        = ((IData)(4U) + (vlSelf->clean_disp_tb__DOT__lz4__DOT__ML 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP 
                        = (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr) 
                                      - (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xcU;
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP3 
                        = (7U & ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr) 
                                 - (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13 
                        = (0x1fffU & (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr) 
                                       - (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)) 
                                      >> 3U));
                } else if (vlSelf->clean_disp_tb__DOT__lz4_read_ready) {
                    if ((1ULL == vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                            = ((IData)(0x7f8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__ML);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                            = ((IData)(7U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index = 0U;
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xbU;
                    } else {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                            = (vlSelf->clean_disp_tb__DOT__lz4__DOT__ML 
                               + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                            = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                                & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                                ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                                : 0ULL);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                            = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                                >> 
                                                (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                        if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                        }
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 1U;
                }
            } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                vlSelf->clean_disp_tb__DOT__lz4__DOT__done = 1U;
            } else if ((0U != (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                    = (vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                       + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3));
                __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 1U;
                vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                    = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data;
                __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 9U;
            } else {
                vlSelf->clean_disp_tb__DOT__lz4__DOT__done = 1U;
            }
        } else if ((4U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
            if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                    if ((((0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)) 
                          & (0U == vlSelf->clean_disp_tb__DOT__lz4__DOT__ML)) 
                         | (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks_readed))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 8U;
                    } else if ((0xfU > vlSelf->clean_disp_tb__DOT__lz4__DOT__ML)) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                            = ((IData)(4U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__ML);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__MP 
                            = (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr) 
                                          - (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xcU;
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__MP3 
                            = (7U & ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr) 
                                     - (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13 
                            = (0x1fffU & (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr) 
                                           - (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__offset)) 
                                          >> 3U));
                    } else if (vlSelf->clean_disp_tb__DOT__lz4_read_ready) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                            = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                                & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                                ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                                : 0ULL);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 0xaU;
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                            = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                                >> 
                                                (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                        if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                        }
                    } else {
                        vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 1U;
                    }
                } else {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__offset 
                        = ((0xffU & (IData)(__Vdly__clean_disp_tb__DOT__lz4__DOT__offset)) 
                           | (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks_readed)
                                ? 0U : (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data)) 
                              << 8U));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                if (((IData)(vlSelf->clean_disp_tb__DOT__lz4_read_ready) 
                     | (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks_readed))) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL 
                        = (vlSelf->clean_disp_tb__DOT__lz4__DOT__LL 
                           - (IData)(8U));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr 
                        = (0xffffU & ((IData)(8U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 
                        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                        = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL_W 
                        = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__LL_W);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 1U;
                    if (((((((((0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3)) 
                               | (1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                              | (2U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                             | (3U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                            | (4U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                           | (5U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                          | (6U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) 
                         | (7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3)))) {
                        if ((0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64;
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64;
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v17 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64;
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v17 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v17 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((1U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffffffffff00ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                                                 >> 0x38U))))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v18 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v18 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v18 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((2U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffffffff0000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                                                 >> 0x30U))))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v19 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v19 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v19 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((3U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffffff000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                                                 >> 0x28U))))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                    << 0x18U) | (QData)((IData)(
                                                                (0xffffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v20 
                                = ((vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                    << 0x18U) | (QData)((IData)(
                                                                (0xffffffU 
                                                                 & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)))));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v20 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v20 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((4U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffffff00000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (IData)((IData)(
                                                     (vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                                      >> 0x20U))));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v21 
                                = (((QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data)));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v21 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v21 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((5U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffffff0000000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                      >> 0x18U));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(
                                                    (0xffffffU 
                                                     & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)))) 
                                    << 0x28U) | (0xffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v22 
                                = (((QData)((IData)(
                                                    (0xffffffU 
                                                     & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)))) 
                                    << 0x28U) | (0xffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v22 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v22 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else if ((6U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xffff000000000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                      >> 0x10U));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)))) 
                                    << 0x30U) | (0xffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v23 
                                = (((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)))) 
                                    << 0x30U) | (0xffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v23 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v23 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        } else {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                                = ((0xff00000000000000ULL 
                                    & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                                   | (vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 
                                      >> 8U));
                            vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                                = (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)))) 
                                    << 0x38U) | (0xffffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v24 
                                = (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)))) 
                                    << 0x38U) | (0xffffffffffffffULL 
                                                 & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                            __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v24 = 1U;
                            __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v24 
                                = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        }
                    }
                    if (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                         & (0x10U <= vlSelf->clean_disp_tb__DOT__lz4__DOT__LL))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                            = vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                            [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr];
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                    } else {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 4U;
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                            = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                                & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                                ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                                : 0ULL);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                            = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                                >> 
                                                (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                        if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                        }
                    }
                } else {
                    vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 1U;
                }
            } else if (((IData)(vlSelf->clean_disp_tb__DOT__lz4_read_ready) 
                        | (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks_readed))) {
                if ((0U == vlSelf->clean_disp_tb__DOT__lz4__DOT__LL)) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__offset 
                        = ((0xff00U & (IData)(__Vdly__clean_disp_tb__DOT__lz4__DOT__offset)) 
                           | ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks_readed)
                               ? 0U : (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 6U;
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                        = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                            & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                            ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                           [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                            : 0ULL);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                        = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                            [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                            >> (0x3fU 
                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                    if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                    }
                } else {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL 
                        = (vlSelf->clean_disp_tb__DOT__lz4__DOT__LL 
                           - (IData)(1U));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL_W 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__LL_W);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr3 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3), 3U)))) 
                            & __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data) 
                           | ((QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3), 3U))));
                    if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
                            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid = 1U;
                        vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long 
                            = (((QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data)) 
                                << 0x38U) | (0xffffffffffffffULL 
                                             & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                        __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v25 
                            = (((QData)((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data)) 
                                << 0x38U) | (0xffffffffffffffULL 
                                             & vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data));
                        __Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v25 = 1U;
                        __Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v25 
                            = vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13;
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13 
                            = (0x1fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13)));
                    }
                    if (((((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                           & (8U < vlSelf->clean_disp_tb__DOT__lz4__DOT__LL)) 
                          & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) 
                         & (vlSelf->clean_disp_tb__DOT__lz4__DOT__LL_W 
                            >= (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3)))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                            = ((IData)(8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 5U;
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                            = vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                            [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr];
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                    } else {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                            = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                            = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                                & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                                ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                               [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                                : 0ULL);
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                            = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                                [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                                >> 
                                                (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                        if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                            __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                        }
                    }
                }
            } else {
                vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 1U;
            }
        } else if ((2U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
            if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
                __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                    = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                        & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                        ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                       [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                        : 0ULL);
                __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 2U;
                __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                    = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                        [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                }
            } else if (vlSelf->clean_disp_tb__DOT__lz4_read_ready) {
                if ((1ULL == vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64)) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL 
                        = ((IData)(0x7f8U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__LL);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                        = ((IData)(7U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index = 0U;
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 3U;
                } else {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__LL 
                        = (vlSelf->clean_disp_tb__DOT__lz4__DOT__LL 
                           + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                        = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                        = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                            & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                            ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                           [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                            : 0ULL);
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                        = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                            [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                            >> (0x3fU 
                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                    if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                        __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                    }
                }
                if ((0xffU != (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data))) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 4U;
                }
            } else {
                vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 1U;
            }
        } else if ((1U & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__state))) {
            if (vlSelf->clean_disp_tb__DOT__lz4_read_ready) {
                __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
                __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W = 0U;
                __Vdly__clean_disp_tb__DOT__lz4__DOT__LL_W = 0U;
                __Vdly__clean_disp_tb__DOT__lz4__DOT__ML 
                    = (0xfU & (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data));
                __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                    = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                        & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                        ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                       [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                        : 0ULL);
                __Vdly__clean_disp_tb__DOT__lz4__DOT__LL 
                    = (0xfU & ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data) 
                               >> 4U));
                __Vdly__clean_disp_tb__DOT__lz4__DOT__state 
                    = ((0xfU == (0xfU & ((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__data) 
                                         >> 4U))) ? 2U
                        : 4U);
                __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                    = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                        [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
                __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
                if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                    __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
                }
            } else {
                vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 1U;
            }
        } else if (vlSelf->clean_disp_tb__DOT__lz4_read_ready) {
            __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total 
                = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
            __Vdly__clean_disp_tb__DOT__lz4__DOT__state = 1U;
            __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64 
                = (((IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64) 
                    & (0U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)))
                    ? vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                   [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr]
                    : 0ULL);
            __Vdly__clean_disp_tb__DOT__lz4__DOT__data 
                = (0xffU & (IData)((vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks
                                    [vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr] 
                                    >> (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index), 3U)))));
            __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index 
                = (7U & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index)));
            if ((7U == (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index))) {
                __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr)));
            }
        } else {
            vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 1U;
        }
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__need_refill 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__primed) 
           & ((~ (IData)((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st)))) 
              & ((0x3fU >= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt)) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__need_refill 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__primed) 
           & ((~ (IData)((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st)))) 
              & ((0x3fU >= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt)) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__need_refill 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__primed) 
           & ((~ (IData)((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st)))) 
              & ((0x3fU >= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt)) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid))));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__feed_ok 
        = ((0x88U <= (0x1ffU & ((IData)(0x100U) - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count)))) 
           & ((vlSelf->clean_disp_tb__DOT__nlc_writed_bytes 
               < vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm) 
              & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk) 
                 | (0U != VL_SHIFTR_III(32,32,32, vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem, 3U)))));
    vlSelf->clean_disp_tb__DOT__reset_blit_lz4 = __Vdly__clean_disp_tb__DOT__reset_blit_lz4;
    vlSelf->clean_disp_tb__DOT__reset_blit = __Vdly__clean_disp_tb__DOT__reset_blit;
    vlSelf->clean_disp_tb__DOT__reset_switchres = __Vdly__clean_disp_tb__DOT__reset_switchres;
    vlSelf->clean_disp_tb__DOT__nlc_fl_pre = __Vdly__clean_disp_tb__DOT__nlc_fl_pre;
    vlSelf->clean_disp_tb__DOT__nlc_fl_run = __Vdly__clean_disp_tb__DOT__nlc_fl_run;
    vlSelf->clean_disp_tb__DOT__nlc_lb_rd = __Vdly__clean_disp_tb__DOT__nlc_lb_rd;
    vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt = __Vdly__clean_disp_tb__DOT__nlc_lb_wcnt;
    if (__Vdlyvset__clean_disp_tb__DOT__nlc_lbuf__v0) {
        vlSelf->clean_disp_tb__DOT__nlc_lbuf[__Vdlyvdim0__clean_disp_tb__DOT__nlc_lbuf__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__nlc_lbuf__v0;
    }
    vlSelf->clean_disp_tb__DOT__vram_reset = __Vdly__clean_disp_tb__DOT__vram_reset;
    vlSelf->clean_disp_tb__DOT__vga_reset = __Vdly__clean_disp_tb__DOT__vga_reset;
    vlSelf->clean_disp_tb__DOT__PoC_H = __Vdly__clean_disp_tb__DOT__PoC_H;
    vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced = __Vdly__clean_disp_tb__DOT__PoC_FB_interlaced;
    vlSelf->clean_disp_tb__DOT__PoC_V = __Vdly__clean_disp_tb__DOT__PoC_V;
    vlSelf->clean_disp_tb__DOT__dbg_freeze_frames = __Vdly__clean_disp_tb__DOT__dbg_freeze_frames;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__vram_out_sync;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
        = __Vdly__clean_disp_tb__DOT__vga__DOT__vram_pixel_counter;
    vlSelf->clean_disp_tb__DOT__state = __Vdly__clean_disp_tb__DOT__state;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__st = __Vdly__clean_disp_tb__DOT__u_eng__DOT__st;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[0U] 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[0U];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[1U] 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[1U];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc[2U] 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_acc[2U];
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_n = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_n;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_pop_st 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_pop_st;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_q = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_q;
    vlSelf->clean_disp_tb__DOT__nlc_out_ready = __Vdly__clean_disp_tb__DOT__nlc_out_ready;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_flushed 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__pk_flushed;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oG = (0xffffU 
                                                  & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec2) 
                                                     + (IData)(clean_disp_tb__DOT__u_nlc__DOT__it)));
    vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes 
        = __Vdly__clean_disp_tb__DOT__nlc_uncompressed_bytes;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iB = (0xffffU 
                                                  & ((IData)(clean_disp_tb__DOT__u_nlc__DOT__it) 
                                                     - 
                                                     VL_SHIFTRS_III(16,16,32, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec1), 1U)));
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ofifo[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v0;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ofifo[__Vdlyvdim0__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1] 
            = __Vdlyvval__clean_disp_tb__DOT__u_nlc__DOT__ofifo__v1;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_head;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_tail 
        = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__of_tail;
    vlSelf->clean_disp_tb__DOT__nlc_long_valid = __Vdly__clean_disp_tb__DOT__nlc_long_valid;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__state 
        = __Vdly__clean_disp_tb__DOT__u_ddram__DOT__state;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index 
        = __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_index;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd 
        = __Vdly__clean_disp_tb__DOT__u_ddram__DOT__rd_wd;
    vlSelf->clean_disp_tb__DOT__eng_wr = __Vdly__clean_disp_tb__DOT__eng_wr;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__read_req 
        = __Vdly__clean_disp_tb__DOT__u_ddram__DOT__read_req;
    vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g = __Vdly__clean_disp_tb__DOT__ddr_mux__DOT__g;
    vlSelf->clean_disp_tb__DOT__lz4_stop = __Vdly__clean_disp_tb__DOT__lz4_stop;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__state = __Vdly__clean_disp_tb__DOT__lz4__DOT__state;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__ML = __Vdly__clean_disp_tb__DOT__lz4__DOT__ML;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__LL = __Vdly__clean_disp_tb__DOT__lz4__DOT__LL;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP = __Vdly__clean_disp_tb__DOT__lz4__DOT__MP;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__offset = __Vdly__clean_disp_tb__DOT__lz4__DOT__offset;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr3;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__window_addr13;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_addr;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_index;
    vlSelf->clean_disp_tb__DOT__lz4_run = __Vdly__clean_disp_tb__DOT__lz4_run;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__long_valid 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__long_valid;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req = __Vdly__clean_disp_tb__DOT__PoC_lz4_delta_req;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__ML_W = __Vdly__clean_disp_tb__DOT__lz4__DOT__ML_W;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13 = __Vdly__clean_disp_tb__DOT__lz4__DOT__MP13;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__window_data;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3 = __Vdly__clean_disp_tb__DOT__lz4__DOT__MP3;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 = __Vdly__clean_disp_tb__DOT__lz4__DOT__data_64;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__data = __Vdly__clean_disp_tb__DOT__lz4__DOT__data;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__LL_W = __Vdly__clean_disp_tb__DOT__lz4__DOT__LL_W;
    vlSelf->clean_disp_tb__DOT__lz4_reset = __Vdly__clean_disp_tb__DOT__lz4_reset;
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__blocks__v0) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__blocks__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__blocks__v0;
    }
    vlSelf->clean_disp_tb__DOT__ddr_data_write = __Vdly__clean_disp_tb__DOT__ddr_data_write;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total 
        = __Vdly__clean_disp_tb__DOT__lz4__DOT__block_read_total;
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v0) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v0;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v1) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v1] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v1;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v2) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v2] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v2;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v3) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v3] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v3;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v4) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v4] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v4;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v5) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v5] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v5;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v6) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v6] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v6;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v7) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v7] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v7;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v8) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v8] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v8;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v9) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v9] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v9;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v10) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v10] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v10;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v11) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v11] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v11;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v12) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v12] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v12;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v13) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v13] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v13;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v14) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v14] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v14;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v15) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v15] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v15;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v16) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v16] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v16;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v17) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v17] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v17;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v18) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v18] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v18;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v19) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v19] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v19;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v20) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v20] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v20;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v21) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v21] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v21;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v22) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v22] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v22;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v23) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v23] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v23;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v24) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v24] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v24;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__lz4__DOT__window__v25) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vdlyvdim0__clean_disp_tb__DOT__lz4__DOT__window__v25] 
            = __Vdlyvval__clean_disp_tb__DOT__lz4__DOT__window__v25;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__all_rdy 
        = (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__primed) 
            & ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st)) 
               & ((0x27U <= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt)) 
                  | (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__need_refill)))) 
           & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__primed) 
               & ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st)) 
                  & ((0x27U <= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt)) 
                     | (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__need_refill)))) 
              & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__primed) 
                 & ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st)) 
                    & ((0x27U <= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt)) 
                       | (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__need_refill))))));
    vlSelf->clean_disp_tb__DOT__nlc_frame_bytes = (0xfffffffU 
                                                   & (VL_SHIFTL_III(28,28,32, vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame, 1U) 
                                                      + vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame));
    vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__cfg_h 
        = (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_V) 
                      >> (IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced)));
    vlSelf->clean_disp_tb__DOT__vram_end_frame = (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                                                  >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit 
        = ((vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd 
            >> 0x14U) & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st) 
                         == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st_d)));
    vlSelf->clean_disp_tb__DOT__frz_vb_d = vlSelf->clean_disp_tb__DOT__vga__DOT__vb;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oR = (0xffffU 
                                                  & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iB) 
                                                     + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec1)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count 
        = (0xffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head) 
                    - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_tail)));
    vlSelf->clean_disp_tb__DOT__eng_dec_oready = ((
                                                   (2U 
                                                    == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
                                                      | (4U 
                                                         == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)))) 
                                                  & ((IData)(vlSelf->clean_disp_tb__DOT__nlc_long_valid) 
                                                     & (0x78U 
                                                        > (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__comb_v 
        = ((~ (IData)(vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset)) 
           & (4U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)));
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd_fired 
        = (1U & (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd 
                 >> 0x10U));
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__unnamedblk1__DOT__old_rd 
        = vlSelf->clean_disp_tb__DOT__dm_rd;
    vlSelf->clean_disp_tb__DOT__eng_gnt = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)) 
                                           & (IData)(vlSelf->clean_disp_tb__DOT__eng_req));
    vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns 
        = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)) 
           | (3U == (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)));
    vlSelf->clean_disp_tb__DOT__AV_DOUT_READY = 0U;
    vlSelf->clean_disp_tb__DOT__av_hazard_r = 0U;
    if ((((IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_read) 
          & (~ (IData)(vlSelf->clean_disp_tb__DOT__AV_BUSY))) 
         & (~ (IData)(vlSelf->clean_disp_tb__DOT__av_reading)))) {
        __Vdly__clean_disp_tb__DOT__av_reading = 1U;
        __Vdly__clean_disp_tb__DOT__av_rd_addr = (0x6000000U 
                                                  | (0x1ffffffU 
                                                     & (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_address 
                                                        >> 2U)));
        __Vdly__clean_disp_tb__DOT__av_rd_left = ((0U 
                                                   == (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst))
                                                   ? 1U
                                                   : (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst));
        __Vdly__clean_disp_tb__DOT__av_rd_lat = vlSelf->clean_disp_tb__DOT__READ_LAT;
    }
    if (vlSelf->clean_disp_tb__DOT__av_reading) {
        if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__DEADBURST_ONCE) 
                            & (~ (IData)(vlSelf->clean_disp_tb__DOT__dead_used))) 
                           & (~ (IData)(vlSelf->clean_disp_tb__DOT__dead_now))) 
                          & VL_GTES_III(32, ((IData)(1U) 
                                             + vlSelf->clean_disp_tb__DOT__av_beatno), vlSelf->clean_disp_tb__DOT__DEADBURST_ONCE)) 
                         & VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__av_rd_left)))) {
            VL_WRITEF("[HZ] DEAD BURST injected: beats %0d..%0d never delivered, cyc=%0d\n",
                      32,((IData)(1U) + vlSelf->clean_disp_tb__DOT__av_beatno),
                      32,(vlSelf->clean_disp_tb__DOT__av_beatno 
                          + vlSelf->clean_disp_tb__DOT__av_rd_left),
                      32,vlSelf->clean_disp_tb__DOT__cycles);
            __Vdly__clean_disp_tb__DOT__dead_now = 1U;
            vlSelf->clean_disp_tb__DOT__dead_used = 1U;
        }
        if (vlSelf->clean_disp_tb__DOT__dead_now) {
            if (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__av_rd_left)) {
                __Vdly__clean_disp_tb__DOT__av_rd_addr 
                    = (0x1fffffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__av_rd_addr));
                __Vdly__clean_disp_tb__DOT__av_rd_left 
                    = (vlSelf->clean_disp_tb__DOT__av_rd_left 
                       - (IData)(1U));
                __Vdly__clean_disp_tb__DOT__av_beatno 
                    = ((IData)(1U) + vlSelf->clean_disp_tb__DOT__av_beatno);
                if ((1U == vlSelf->clean_disp_tb__DOT__av_rd_left)) {
                    __Vdly__clean_disp_tb__DOT__av_reading = 0U;
                    __Vdly__clean_disp_tb__DOT__dead_now = 0U;
                }
            }
        } else if (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__av_rd_lat)) {
            __Vdly__clean_disp_tb__DOT__av_rd_lat = 
                (vlSelf->clean_disp_tb__DOT__av_rd_lat 
                 - (IData)(1U));
        } else if (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__av_rd_left)) {
            __Vdly__clean_disp_tb__DOT__av_rd_left 
                = (vlSelf->clean_disp_tb__DOT__av_rd_left 
                   - (IData)(1U));
            __Vdly__clean_disp_tb__DOT__av_beatno = 
                ((IData)(1U) + vlSelf->clean_disp_tb__DOT__av_beatno);
            vlSelf->clean_disp_tb__DOT__AV_DOUT = vlSelf->clean_disp_tb__DOT__mem
                [(0x1fffffU & vlSelf->clean_disp_tb__DOT__av_rd_addr)];
            vlSelf->clean_disp_tb__DOT__AV_DOUT_READY = 1U;
            vlSelf->clean_disp_tb__DOT__av_hz = (((
                                                   VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__RDVBUSY_EVERY) 
                                                   & (0U 
                                                      == 
                                                      VL_MODDIVS_III(32, 
                                                                     ((IData)(1U) 
                                                                      + vlSelf->clean_disp_tb__DOT__av_beatno), vlSelf->clean_disp_tb__DOT__RDVBUSY_EVERY))) 
                                                  | (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__RDVBUSY_PROB) 
                                                     & (VL_MODDIV_III(32, (IData)(
                                                                                VL_RANDOM_I()), (IData)(0x64U)) 
                                                        < vlSelf->clean_disp_tb__DOT__RDVBUSY_PROB))) 
                                                 | (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__RDVBUSY_ONCE) 
                                                    & (((IData)(1U) 
                                                        + vlSelf->clean_disp_tb__DOT__av_beatno) 
                                                       == vlSelf->clean_disp_tb__DOT__RDVBUSY_ONCE)));
            if ((1U == vlSelf->clean_disp_tb__DOT__av_rd_left)) {
                __Vdly__clean_disp_tb__DOT__av_reading = 0U;
            }
            __Vdly__clean_disp_tb__DOT__av_rd_addr 
                = (0x1fffffffU & ((IData)(1U) + vlSelf->clean_disp_tb__DOT__av_rd_addr));
            if (VL_UNLIKELY(((IData)(vlSelf->clean_disp_tb__DOT__av_hz) 
                             & VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__RDVBUSY_ONCE)))) {
                VL_WRITEF("[HZ] single rdv-during-busy beat injected: beat=%0d cyc=%0d\n",
                          32,((IData)(1U) + vlSelf->clean_disp_tb__DOT__av_beatno),
                          32,vlSelf->clean_disp_tb__DOT__cycles);
            }
            vlSelf->clean_disp_tb__DOT__av_hazard_r 
                = vlSelf->clean_disp_tb__DOT__av_hz;
        }
    }
    vlSelf->clean_disp_tb__DOT__lz4_write_ready = (0x400U 
                                                   > 
                                                   (vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total 
                                                    - vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total));
    vlSelf->clean_disp_tb__DOT__lz4_read_ready = (vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total 
                                                  > vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64 
        = (vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total 
           > ((IData)(7U) + vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total));
    vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks_readed 
        = (vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total 
           >= vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes);
    vlSelf->clean_disp_tb__DOT__nlc_frame_done = ((IData)(vlSelf->clean_disp_tb__DOT__donly)
                                                   ? (IData)(vlSelf->clean_disp_tb__DOT__nlc_done)
                                                   : 
                                                  ((IData)(vlSelf->clean_disp_tb__DOT__nlc_done) 
                                                   | ((vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes 
                                                       >= vlSelf->clean_disp_tb__DOT__nlc_frame_bytes) 
                                                      | ((vlSelf->clean_disp_tb__DOT__nlc_writed_bytes 
                                                          >= vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes) 
                                                         & (0xfffffU 
                                                            < vlSelf->clean_disp_tb__DOT__nlc_stall_cnt)))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_want 
        = (((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st)) 
            | (1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st))) 
           & ((~ ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy) 
                  >> (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank))) 
              & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines) 
                 < (IData)(vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__cfg_h))));
    vlSelf->clean_disp_tb__DOT__vga__DOT__vb = __Vdly__clean_disp_tb__DOT__vga__DOT__vb;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst = __Vdly__clean_disp_tb__DOT__u_nlc__DOT__cst;
    vlSelf->clean_disp_tb__DOT__ddr_data_ready = ((~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns)) 
                                                  & (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__data_ready));
    if (vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns) {
        vlSelf->clean_disp_tb__DOT__dm_addr_h = (0x7ffffffU 
                                                 & (vlSelf->clean_disp_tb__DOT__u_eng__DOT__eng_addr 
                                                    >> 1U));
        vlSelf->clean_disp_tb__DOT__dm_din = vlSelf->clean_disp_tb__DOT__u_eng__DOT__m_din_r;
        vlSelf->clean_disp_tb__DOT__dm_rd = vlSelf->clean_disp_tb__DOT__eng_rd;
        vlSelf->clean_disp_tb__DOT__dm_burst = vlSelf->clean_disp_tb__DOT__eng_burst;
        vlSelf->clean_disp_tb__DOT__eng_dready = vlSelf->clean_disp_tb__DOT__u_ddram__DOT__data_ready;
    } else {
        vlSelf->clean_disp_tb__DOT__dm_addr_h = (0x7ffffffU 
                                                 & (vlSelf->clean_disp_tb__DOT__ddr_addr 
                                                    >> 1U));
        vlSelf->clean_disp_tb__DOT__dm_din = vlSelf->clean_disp_tb__DOT__ddr_data_to_write;
        vlSelf->clean_disp_tb__DOT__dm_rd = vlSelf->clean_disp_tb__DOT__ddr_data_req;
        vlSelf->clean_disp_tb__DOT__dm_burst = vlSelf->clean_disp_tb__DOT__ddr_burst;
        vlSelf->clean_disp_tb__DOT__eng_dready = 0U;
    }
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_read 
        = __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_read;
    vlSelf->clean_disp_tb__DOT__av_reading = __Vdly__clean_disp_tb__DOT__av_reading;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_address 
        = __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_address;
    vlSelf->clean_disp_tb__DOT__av_rd_addr = __Vdly__clean_disp_tb__DOT__av_rd_addr;
    vlSelf->clean_disp_tb__DOT__av_rd_left = __Vdly__clean_disp_tb__DOT__av_rd_left;
    vlSelf->clean_disp_tb__DOT__av_rd_lat = __Vdly__clean_disp_tb__DOT__av_rd_lat;
    vlSelf->clean_disp_tb__DOT__dead_now = __Vdly__clean_disp_tb__DOT__dead_now;
    vlSelf->clean_disp_tb__DOT__av_beatno = __Vdly__clean_disp_tb__DOT__av_beatno;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst 
        = __Vdly__clean_disp_tb__DOT__u_ddram__DOT__ram_burst;
    if (__Vdlyvset__clean_disp_tb__DOT__mem__v0) {
        vlSelf->clean_disp_tb__DOT__mem[__Vdlyvdim0__clean_disp_tb__DOT__mem__v0] 
            = __Vdlyvval__clean_disp_tb__DOT__mem__v0;
    }
    if (__Vdlyvset__clean_disp_tb__DOT__mem__v1) {
        vlSelf->clean_disp_tb__DOT__mem[__Vdlyvdim0__clean_disp_tb__DOT__mem__v1] 
            = __Vdlyvval__clean_disp_tb__DOT__mem__v1;
    }
    vlSelf->clean_disp_tb__DOT__nlc_paused = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count)) 
                                              & ((~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw_valid)) 
                                                 & ((~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__done_r)) 
                                                    & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_want))));
    vlSelf->clean_disp_tb__DOT__vga_de_w = (1U & (~ 
                                                  ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__hb) 
                                                   | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr 
        = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)) 
           & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__all_rdy) 
              & (0xaU <= (0xffU & ((IData)(0x80U) - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count))))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__prime_all 
        = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)) 
           & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy) 
              >> (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ra 
        = (0xffffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp)
                        ? 0U : 0x2d0U) + ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x) 
                                          + (4U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)))));
    vlSelf->clean_disp_tb__DOT__AV_BUSY = (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__av_busy_left) 
                                           | (IData)(vlSelf->clean_disp_tb__DOT__av_hazard_r));
    vlSelf->clean_disp_tb__DOT__dm_busy = ((IData)(vlSelf->clean_disp_tb__DOT__AV_BUSY) 
                                           | (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__read_req));
    vlSelf->clean_disp_tb__DOT__ddr_busy = ((0U != (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)) 
                                            | (IData)(vlSelf->clean_disp_tb__DOT__dm_busy));
    vlSelf->clean_disp_tb__DOT__eng_busy = (1U & ((~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns)) 
                                                  | (IData)(vlSelf->clean_disp_tb__DOT__dm_busy)));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__progress 
        = ((IData)(vlSelf->clean_disp_tb__DOT__eng_dec_oready) 
           | (((4U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
               & (IData)(vlSelf->clean_disp_tb__DOT__eng_dready)) 
              | ((8U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
                 & ((~ (IData)(vlSelf->clean_disp_tb__DOT__eng_busy)) 
                    & (IData)(vlSelf->clean_disp_tb__DOT__eng_wr)))));
}
