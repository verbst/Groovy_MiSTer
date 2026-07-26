// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb__Syms.h"
#include "Vclean_disp_tb___024root.h"

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_static__TOP(Vclean_disp_tb___024root* vlSelf);
VL_ATTR_COLD void Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0(Vclean_disp_tb_fifo_vga* vlSelf);

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_static(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_static\n"); );
    // Body
    Vclean_disp_tb___024root___eval_static__TOP(vlSelf);
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5));
    Vclean_disp_tb_fifo_vga___eval_static__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__stl(Vclean_disp_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_triggers__stl(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclean_disp_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vclean_disp_tb___024root___stl_sequent__TOP__0(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ clean_disp_tb__DOT__u_nlc__DOT__it;
    clean_disp_tb__DOT__u_nlc__DOT__it = 0;
    // Body
    vlSelf->clean_disp_tb__DOT__new_modeline = vlSelf->clean_disp_tb__DOT__req_modeline;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd_fired 
        = (1U & (vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd 
                 >> 0x10U));
    vlSelf->clean_disp_tb__DOT__eng_gnt = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)) 
                                           & (IData)(vlSelf->clean_disp_tb__DOT__eng_req));
    vlSelf->clean_disp_tb__DOT__vram_end_frame = (vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter 
                                                  >= vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame);
    vlSelf->clean_disp_tb__DOT__vga__DOT____VdfgTmp_hf63363d6__0 
        = ((IData)(vlSelf->clean_disp_tb__DOT__PoC_interlaced) 
           & (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__field));
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
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19 
        = ((IData)(vlSelf->clean_disp_tb__DOT__vga_reset) 
           | (IData)(vlSelf->clean_disp_tb__DOT__vram_reset));
    vlSelf->clean_disp_tb__DOT__vga_de_w = (1U & (~ 
                                                  ((IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__hb) 
                                                   | (IData)(vlSelf->clean_disp_tb__DOT__vga__DOT__vb))));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit 
        = ((vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd 
            >> 0x14U) & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st) 
                         == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st_d)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__prime_all 
        = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)) 
           & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy) 
              >> (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ra 
        = (0xffffU & (((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp)
                        ? 0U : 0x2d0U) + ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x) 
                                          + (4U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left_cur 
        = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))
            ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left0)
            : ((1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl))
                ? (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left1)
                : (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left2)));
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
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[0U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[1U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[2U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[3U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[4U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[5U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[0U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[1U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[2U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[3U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[4U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[5U] 
        = (0U == (IData)(vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5.__PVT__dcfifo_component__DOT__cnt));
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[0U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[1U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[2U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[3U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[4U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[5U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[0U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[1U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[2U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[3U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[4U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[5U] 
        = vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5.__PVT__sub_wire0;
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count 
        = (0xffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head) 
                    - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_tail)));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem = (vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm 
                                                   - vlSelf->clean_disp_tb__DOT__nlc_writed_bytes);
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
    vlSelf->clean_disp_tb__DOT__nlc_frame_bytes = (0xfffffffU 
                                                   & (VL_SHIFTL_III(28,28,32, vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame, 1U) 
                                                      + vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame));
    vlSelf->clean_disp_tb__DOT__nlc_done = ((~ (IData)(vlSelf->clean_disp_tb__DOT__suppress_done)) 
                                            & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__done_r));
    vlSelf->clean_disp_tb__DOT__nlc_eng_sel = ((2U 
                                                == (IData)(vlSelf->clean_disp_tb__DOT__nlc_disp_mode)) 
                                               & (2U 
                                                  == (IData)(vlSelf->clean_disp_tb__DOT__codec_mode)));
    clean_disp_tb__DOT__u_nlc__DOT__it = (0xffffU & 
                                          ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec0) 
                                           - VL_SHIFTRS_III(16,16,32, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec2), 1U)));
    vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__cfg_h 
        = (0xffffU & ((IData)(vlSelf->clean_disp_tb__DOT__PoC_V) 
                      >> (IData)(vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count 
        = (0x1ffU & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_head) 
                     - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_tail)));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_final) 
           & (vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm 
              >= vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_size));
    vlSelf->clean_disp_tb__DOT__AV_BUSY = (VL_LTS_III(32, 0U, vlSelf->clean_disp_tb__DOT__av_busy_left) 
                                           | (IData)(vlSelf->clean_disp_tb__DOT__av_hazard_r));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__need_refill 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__primed) 
           & ((~ (IData)((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st)))) 
              & ((0x3fU >= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt)) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__need_refill 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__primed) 
           & ((~ (IData)((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st)))) 
              & ((0x3fU >= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt)) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid))));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__need_refill 
        = ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__primed) 
           & ((~ (IData)((0U != (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st)))) 
              & ((0x3fU >= (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt)) 
                 & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid))));
    vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns 
        = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)) 
           | (3U == (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)));
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
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oG = (0xffffU 
                                                  & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec2) 
                                                     + (IData)(clean_disp_tb__DOT__u_nlc__DOT__it)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iB = (0xffffU 
                                                  & ((IData)(clean_disp_tb__DOT__u_nlc__DOT__it) 
                                                     - 
                                                     VL_SHIFTRS_III(16,16,32, (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec1), 1U)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_want 
        = (((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st)) 
            | (1U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st))) 
           & ((~ ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy) 
                  >> (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank))) 
              & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines) 
                 < (IData)(vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__cfg_h))));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__input_done 
        = ((vlSelf->clean_disp_tb__DOT__nlc_writed_bytes 
            >= vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm) 
           & (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__feed_ok 
        = ((0x88U <= (0x1ffU & ((IData)(0x100U) - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count)))) 
           & ((vlSelf->clean_disp_tb__DOT__nlc_writed_bytes 
               < vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm) 
              & ((IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk) 
                 | (0U != VL_SHIFTR_III(32,32,32, vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem, 3U)))));
    vlSelf->clean_disp_tb__DOT__dm_busy = ((IData)(vlSelf->clean_disp_tb__DOT__AV_BUSY) 
                                           | (IData)(vlSelf->clean_disp_tb__DOT__u_ddram__DOT__read_req));
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
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oR = (0xffffU 
                                                  & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iB) 
                                                     + (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec1)));
    vlSelf->clean_disp_tb__DOT__nlc_paused = ((0U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count)) 
                                              & ((~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw_valid)) 
                                                 & ((~ (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__done_r)) 
                                                    & (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_want))));
    vlSelf->clean_disp_tb__DOT__ddr_busy = ((0U != (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g)) 
                                            | (IData)(vlSelf->clean_disp_tb__DOT__dm_busy));
    vlSelf->clean_disp_tb__DOT__eng_busy = (1U & ((~ (IData)(vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns)) 
                                                  | (IData)(vlSelf->clean_disp_tb__DOT__dm_busy)));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr 
        = ((2U == (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst)) 
           & ((IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__all_rdy) 
              & (0xaU <= (0xffU & ((IData)(0x80U) - (IData)(vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count))))));
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__progress 
        = ((IData)(vlSelf->clean_disp_tb__DOT__eng_dec_oready) 
           | (((4U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
               & (IData)(vlSelf->clean_disp_tb__DOT__eng_dready)) 
              | ((8U == (IData)(vlSelf->clean_disp_tb__DOT__u_eng__DOT__st)) 
                 & ((~ (IData)(vlSelf->clean_disp_tb__DOT__eng_busy)) 
                    & (IData)(vlSelf->clean_disp_tb__DOT__eng_wr)))));
}

VL_ATTR_COLD void Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0(Vclean_disp_tb_fifo_vga* vlSelf);

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_stl(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vclean_disp_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5));
        Vclean_disp_tb_fifo_vga___stl_sequent__TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0__0((&vlSymsp->TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5));
    }
}
