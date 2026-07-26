// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean_disp_tb.h for the primary calling header

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb___024root.h"

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_static__TOP(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->clean_disp_tb__DOT__wmrace_pend = 0U;
    vlSelf->clean_disp_tb__DOT__wmrace_hdr = 0ULL;
    vlSelf->clean_disp_tb__DOT__clk_sys = 0U;
    vlSelf->clean_disp_tb__DOT__cycles = 0U;
    vlSelf->clean_disp_tb__DOT__cencnt = 0U;
    vlSelf->clean_disp_tb__DOT__ce_pix = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_addr = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_burst = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_req = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_write = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_to_write = 0ULL;
    vlSelf->clean_disp_tb__DOT__AV_DOUT = 0ULL;
    vlSelf->clean_disp_tb__DOT__AV_DOUT_READY = 0U;
    vlSelf->clean_disp_tb__DOT__READ_LAT = 0xeU;
    vlSelf->clean_disp_tb__DOT__WR_OVERHEAD = 0x4eU;
    vlSelf->clean_disp_tb__DOT__WR_BEAT = 2U;
    vlSelf->clean_disp_tb__DOT__RDVBUSY_EVERY = 0U;
    vlSelf->clean_disp_tb__DOT__RDVBUSY_PROB = 0U;
    vlSelf->clean_disp_tb__DOT__RDVBUSY_ONCE = 0U;
    vlSelf->clean_disp_tb__DOT__DEADBURST_ONCE = 0U;
    vlSelf->clean_disp_tb__DOT__dead_now = 0U;
    vlSelf->clean_disp_tb__DOT__dead_used = 0U;
    vlSelf->clean_disp_tb__DOT__av_rd_left = 0U;
    vlSelf->clean_disp_tb__DOT__av_rd_lat = 0U;
    vlSelf->clean_disp_tb__DOT__av_wr_left = 0U;
    vlSelf->clean_disp_tb__DOT__av_busy_left = 0U;
    vlSelf->clean_disp_tb__DOT__av_beatno = 0U;
    vlSelf->clean_disp_tb__DOT__av_rd_addr = 0U;
    vlSelf->clean_disp_tb__DOT__av_wr_addr = 0U;
    vlSelf->clean_disp_tb__DOT__av_reading = 0U;
    vlSelf->clean_disp_tb__DOT__av_hazard_r = 0U;
    vlSelf->clean_disp_tb__DOT__av_hz = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_reset = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_run = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_stop = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_write_long = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_compressed_long = 0ULL;
    vlSelf->clean_disp_tb__DOT__codec_mode = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_disp_mode = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_reset = 1U;
    vlSelf->clean_disp_tb__DOT__nlc_write_long = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_out_ready = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_compressed_long = 0ULL;
    vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_cur_frame = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_busy = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_stall_cnt = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_lb_rd = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_flushed_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_flush_end = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_fl_pre = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_fl_run = 0U;
    vlSelf->clean_disp_tb__DOT__suppress_done = 0U;
    vlSelf->clean_disp_tb__DOT__donly = 0U;
    vlSelf->clean_disp_tb__DOT__eng_pend_valid = 0U;
    vlSelf->clean_disp_tb__DOT__eng_pend_final = 0U;
    vlSelf->clean_disp_tb__DOT__eng_pend_frame = 0U;
    vlSelf->clean_disp_tb__DOT__eng_pend_size = 0U;
    vlSelf->clean_disp_tb__DOT__eng_pend_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__eng_pend_src = 0U;
    vlSelf->clean_disp_tb__DOT__eng_pend_dst = 0U;
    vlSelf->clean_disp_tb__DOT__eng_wm_stb = 0U;
    vlSelf->clean_disp_tb__DOT__eng_wm_final = 0U;
    vlSelf->clean_disp_tb__DOT__eng_wm_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__eng_abort_r = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_present_pending = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_present_active = 0U;
    vlSelf->clean_disp_tb__DOT__state = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_H = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_HFP = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_HS = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_HBP = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_V = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_VFP = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_VS = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_VBP = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_interlaced = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_pll_S = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_ce_pix = 6U;
    vlSelf->clean_disp_tb__DOT__PoC_frame_switchres = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_frame_ddr = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_frame_vram = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4 = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4 = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_blit = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_audio = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_field = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_px_frameskip = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_state_frameskip = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB = 0U;
    vlSelf->clean_disp_tb__DOT__vram_drive_lz4 = 0U;
    vlSelf->clean_disp_tb__DOT__vram_drive_raw = 0U;
    vlSelf->clean_disp_tb__DOT__reset_blit = 0U;
    vlSelf->clean_disp_tb__DOT__reset_blit_lz4 = 0U;
    vlSelf->clean_disp_tb__DOT__auto_blit = 0U;
    vlSelf->clean_disp_tb__DOT__auto_blit_lz4 = 0U;
    vlSelf->clean_disp_tb__DOT__vram_reset = 0U;
    vlSelf->clean_disp_tb__DOT__vga_wait_vblank = 0U;
    vlSelf->clean_disp_tb__DOT__vga_soft_reset = 0U;
    vlSelf->clean_disp_tb__DOT__vga_frameskip = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_fskip = 0U;
    vlSelf->clean_disp_tb__DOT__vram_active = 0U;
    vlSelf->clean_disp_tb__DOT__vga_reset = 0U;
    vlSelf->clean_disp_tb__DOT__vga_frame_reset = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_idx = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[0U] = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[1U] = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[2U] = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[3U] = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[4U] = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_data_tmp[5U] = 0U;
    vlSelf->clean_disp_tb__DOT__vram_wren1 = 0U;
    vlSelf->clean_disp_tb__DOT__vram_wren2 = 0U;
    vlSelf->clean_disp_tb__DOT__vram_wren3 = 0U;
    vlSelf->clean_disp_tb__DOT__vram_wren4 = 0U;
    vlSelf->clean_disp_tb__DOT__r_in = 0U;
    vlSelf->clean_disp_tb__DOT__g_in = 0U;
    vlSelf->clean_disp_tb__DOT__b_in = 0U;
    vlSelf->clean_disp_tb__DOT__reset_switchres = 0U;
    vlSelf->clean_disp_tb__DOT__req_modeline = 0U;
    vlSelf->clean_disp_tb__DOT__new_vmode = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_audio_samples = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_audio_ddr_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_audio_count = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_index = 0U;
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_switchres = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_blit = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_blit_lz4 = 0U;
    vlSelf->clean_disp_tb__DOT__switchres_frame = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_size = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_ABCD = 0U;
    vlSelf->clean_disp_tb__DOT__lz4_field = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_blit_req = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = 0U;
    vlSelf->clean_disp_tb__DOT__cmd_switchres_req = 0U;
    vlSelf->clean_disp_tb__DOT__dbg_freeze_hit = 0U;
    vlSelf->clean_disp_tb__DOT__dbg_freeze_valid = 0U;
    vlSelf->clean_disp_tb__DOT__dbg_freeze_frames = 0U;
    vlSelf->clean_disp_tb__DOT__dbg_prev_px = 0U;
    vlSelf->clean_disp_tb__DOT__frz_vb_d = 0U;
    vlSelf->clean_disp_tb__DOT__busfree_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__buswedge_logged = 0U;
    vlSelf->clean_disp_tb__DOT__capx = 0U;
    vlSelf->clean_disp_tb__DOT__capy = 0U;
    vlSelf->clean_disp_tb__DOT__frames_out = 0U;
    vlSelf->clean_disp_tb__DOT__maxrow = 0U;
    vlSelf->clean_disp_tb__DOT__fieldcnt = 0U;
    vlSelf->clean_disp_tb__DOT__vbl_d = 0U;
    vlSelf->clean_disp_tb__DOT__de_d = 0U;
    vlSelf->clean_disp_tb__DOT__eng_prog_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__engwedge_logged = 0U;
    vlSelf->clean_disp_tb__DOT__engfl_d = 0U;
    vlSelf->clean_disp_tb__DOT__engbusy_d = 0U;
    vlSelf->clean_disp_tb__DOT__eng_done_total = 0U;
    vlSelf->clean_disp_tb__DOT__eof_frames = 0U;
    vlSelf->clean_disp_tb__DOT__pfv_d0 = 0U;
    vlSelf->clean_disp_tb__DOT__last_pub_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__pub_period_sum = 0U;
    vlSelf->clean_disp_tb__DOT__pub_period_n = 0U;
    vlSelf->clean_disp_tb__DOT__nb_d = 0U;
    vlSelf->clean_disp_tb__DOT__nb_start = 0U;
    vlSelf->clean_disp_tb__DOT__nb_sum = 0U;
    vlSelf->clean_disp_tb__DOT__nb_n = 0U;
    vlSelf->clean_disp_tb__DOT__nlc_displayed = 0U;
    vlSelf->clean_disp_tb__DOT__last_progress_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__fv_d = 0U;
    vlSelf->clean_disp_tb__DOT__wedged = 0U;
    vlSelf->clean_disp_tb__DOT__vram_unsync_events = 0U;
    vlSelf->clean_disp_tb__DOT__vqmin = 0x5f5e100U;
    vlSelf->clean_disp_tb__DOT__vs_d = 0U;
    vlSelf->clean_disp_tb__DOT__display_up = 0U;
    vlSelf->clean_disp_tb__DOT__fsk_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__inf_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__prep_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__ablit_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__fbw_cnt = 0U;
    vlSelf->clean_disp_tb__DOT__tot_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__dw_d = 0U;
    vlSelf->clean_disp_tb__DOT__fbmode_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__strm_stall_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__fb_sig = 0ULL;
    vlSelf->clean_disp_tb__DOT__fb_sig_prev = 0ULL;
    vlSelf->clean_disp_tb__DOT__fb_changes = 0U;
    vlSelf->clean_disp_tb__DOT__scnt = 0U;
    vlSelf->clean_disp_tb__DOT__st_pd = 0U;
    vlSelf->clean_disp_tb__DOT__blit_log = 0U;
    vlSelf->clean_disp_tb__DOT__vc_d = 0U;
    vlSelf->clean_disp_tb__DOT__fsk_pulses = 0U;
    vlSelf->clean_disp_tb__DOT__auto_first_n = 0U;
    vlSelf->clean_disp_tb__DOT__auto_line_n = 0U;
    vlSelf->clean_disp_tb__DOT__blitraw_n = 0U;
    vlSelf->clean_disp_tb__DOT__stp2 = 0U;
    vlSelf->clean_disp_tb__DOT__st_prev = 0U;
    vlSelf->clean_disp_tb__DOT__pf_frames = 0U;
    vlSelf->clean_disp_tb__DOT__pf_bd = 0U;
    vlSelf->clean_disp_tb__DOT__c_setup = 0U;
    vlSelf->clean_disp_tb__DOT__c_prep = 0U;
    vlSelf->clean_disp_tb__DOT__c_copy = 0U;
    vlSelf->clean_disp_tb__DOT__c_infl = 0U;
    vlSelf->clean_disp_tb__DOT__c_flush = 0U;
    vlSelf->clean_disp_tb__DOT__c_hdrend = 0U;
    vlSelf->clean_disp_tb__DOT__cc_wait = 0U;
    vlSelf->clean_disp_tb__DOT__cc_prime = 0U;
    vlSelf->clean_disp_tb__DOT__cc_hdr = 0U;
    vlSelf->clean_disp_tb__DOT__cc_a = 0U;
    vlSelf->clean_disp_tb__DOT__cc_b = 0U;
    vlSelf->clean_disp_tb__DOT__cc_eol = 0U;
    vlSelf->clean_disp_tb__DOT__cc_flush = 0U;
    vlSelf->clean_disp_tb__DOT__cc_done = 0U;
    vlSelf->clean_disp_tb__DOT__c_offull = 0U;
    vlSelf->clean_disp_tb__DOT__c_iflow = 0U;
    vlSelf->clean_disp_tb__DOT__c_ifempty = 0U;
    vlSelf->clean_disp_tb__DOT__c_busytot = 0U;
    vlSelf->clean_disp_tb__DOT__trc = 0U;
    vlSelf->clean_disp_tb__DOT__feed_prev_cyc = 0U;
    vlSelf->clean_disp_tb__DOT__feed_per_sum = 0U;
    vlSelf->clean_disp_tb__DOT__feed_per_n = 0U;
    vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst = 1U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_read = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_write = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__data_ready = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__read_req = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__state = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd = 0U;
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__timeout_cnt = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__state = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_addr = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3 = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13 = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3 = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13 = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__LL = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__ML = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__LL_W = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__ML_W = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__offset = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long = 0ULL;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__long_valid = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = 0U;
    vlSelf->clean_disp_tb__DOT__lz4__DOT__done = 0U;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__st = 0U;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt = 0U;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd = 0U;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = 0U;
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__st_d = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame = 0xd3a4U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_counter = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__field = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_prev_interlaced = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field = 1U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first = 1U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H = 0x100U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_V = 0xf0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_start = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__vga_started = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next = 1U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1 = 0U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2 = 1U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3 = 2U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4 = 3U;
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_ahead = 0U;
}

extern const VlWide<64>/*2047:0*/ Vclean_disp_tb__ConstPool__CONST_hf52cf109_0;

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_initial__TOP(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    // Body
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x72616d65U;
    __Vtemp_1[2U] = 0x66U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->clean_disp_tb__DOT__N_FRAMES))) {
        vlSelf->clean_disp_tb__DOT__N_FRAMES = 6U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"nmark=%d"}, 
                                vlSelf->clean_disp_tb__DOT__NMARK))) {
        vlSelf->clean_disp_tb__DOT__NMARK = 8U;
    }
    if ((! VL_VALUEPLUSARGS_INW(2048, std::string{"mdir=%s"}, 
                                vlSelf->clean_disp_tb__DOT__MDIR))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->clean_disp_tb__DOT__MDIR[__Vilp] 
                = Vclean_disp_tb__ConstPool__CONST_hf52cf109_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vtemp_2[0U] = 0x653d2564U;
    __Vtemp_2[1U] = 0x64656e63U;
    __Vtemp_2[2U] = 0x6361U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                                vlSelf->clean_disp_tb__DOT__CADENCE))) {
        vlSelf->clean_disp_tb__DOT__CADENCE = 0U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"codec=%d"}, 
                                vlSelf->clean_disp_tb__DOT__CODEC))) {
        vlSelf->clean_disp_tb__DOT__CODEC = 0U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"w=%d"}, 
                                vlSelf->clean_disp_tb__DOT__W))) {
        vlSelf->clean_disp_tb__DOT__W = 0x140U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"h=%d"}, 
                                vlSelf->clean_disp_tb__DOT__H))) {
        vlSelf->clean_disp_tb__DOT__H = 0xf0U;
    }
    __Vtemp_3[0U] = 0x653d2564U;
    __Vtemp_3[1U] = 0x726c6163U;
    __Vtemp_3[2U] = 0x696e7465U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_3), 
                                vlSelf->clean_disp_tb__DOT__ILACE))) {
        vlSelf->clean_disp_tb__DOT__ILACE = 0U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"chunk=%d"}, 
                                vlSelf->clean_disp_tb__DOT__CHUNK))) {
        vlSelf->clean_disp_tb__DOT__CHUNK = 0xea60U;
    }
    __Vtemp_4[0U] = 0x703d2564U;
    __Vtemp_4[1U] = 0x6e6b6761U;
    __Vtemp_4[2U] = 0x636875U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_4), 
                                vlSelf->clean_disp_tb__DOT__CHUNKGAP))) {
        vlSelf->clean_disp_tb__DOT__CHUNKGAP = 0xc8U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"cepix=%d"}, 
                                vlSelf->clean_disp_tb__DOT__CEPIX))) {
        vlSelf->clean_disp_tb__DOT__CEPIX = 0xcU;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"debug=%d"}, 
                                vlSelf->clean_disp_tb__DOT__DEBUG))) {
        vlSelf->clean_disp_tb__DOT__DEBUG = 0U;
    }
    __Vtemp_5[0U] = 0x653d2564U;
    __Vtemp_5[1U] = 0x636d6f64U;
    __Vtemp_5[2U] = 0x6e6cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_5), 
                                vlSelf->clean_disp_tb__DOT__NLCMODE))) {
        vlSelf->clean_disp_tb__DOT__NLCMODE = 0U;
    }
    vlSelf->clean_disp_tb__DOT__nlc_disp_mode = (3U 
                                                 & vlSelf->clean_disp_tb__DOT__NLCMODE);
    VL_WRITEF("NLCMODE = %0d\n",32,vlSelf->clean_disp_tb__DOT__NLCMODE);
    __Vtemp_6[0U] = 0x646f6e65U;
    __Vtemp_6[1U] = 0x6573735fU;
    __Vtemp_6[2U] = 0x75707072U;
    __Vtemp_6[3U] = 0x73U;
    vlSelf->clean_disp_tb__DOT__suppress_done = (1U 
                                                 & VL_TESTPLUSARGS_I(
                                                                     VL_CVT_PACK_STR_NW(4, __Vtemp_6)));
    vlSelf->clean_disp_tb__DOT__donly = (1U & VL_TESTPLUSARGS_I(
                                                                std::string{"donly"}));
    __Vtemp_7[0U] = 0x703d2564U;
    __Vtemp_7[1U] = 0x6d64726fU;
    __Vtemp_7[2U] = 0x77U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_7), 
                                vlSelf->clean_disp_tb__DOT__WMDROP))) {
        vlSelf->clean_disp_tb__DOT__WMDROP = 0U;
    }
    vlSelf->clean_disp_tb__DOT__WMRACE = (1U & VL_TESTPLUSARGS_I(
                                                                 std::string{"wmrace"}));
    __Vtemp_8[0U] = 0x703d2564U;
    __Vtemp_8[1U] = 0x63656761U;
    __Vtemp_8[2U] = 0x776d7261U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_8), 
                                vlSelf->clean_disp_tb__DOT__WMRACEG))) {
        vlSelf->clean_disp_tb__DOT__WMRACEG = 0x14U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"hfp=%d"}, 
                                vlSelf->clean_disp_tb__DOT__HFP))) {
        vlSelf->clean_disp_tb__DOT__HFP = 0x1dU;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"hs=%d"}, 
                                vlSelf->clean_disp_tb__DOT__HSv))) {
        vlSelf->clean_disp_tb__DOT__HSv = 0x45U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"hbp=%d"}, 
                                vlSelf->clean_disp_tb__DOT__HBP))) {
        vlSelf->clean_disp_tb__DOT__HBP = 0x75U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"vfp=%d"}, 
                                vlSelf->clean_disp_tb__DOT__VFP))) {
        vlSelf->clean_disp_tb__DOT__VFP = 3U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"vs=%d"}, 
                                vlSelf->clean_disp_tb__DOT__VSv))) {
        vlSelf->clean_disp_tb__DOT__VSv = 6U;
    }
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"vbp=%d"}, 
                                vlSelf->clean_disp_tb__DOT__VBP))) {
        vlSelf->clean_disp_tb__DOT__VBP = 0x22U;
    }
    __Vtemp_9[0U] = 0x743d2564U;
    __Vtemp_9[1U] = 0x61646c61U;
    __Vtemp_9[2U] = 0x7265U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_9), 
                                vlSelf->clean_disp_tb__DOT__READ_LAT))) {
        vlSelf->clean_disp_tb__DOT__READ_LAT = 0xeU;
    }
    __Vtemp_10[0U] = 0x643d2564U;
    __Vtemp_10[1U] = 0x72686561U;
    __Vtemp_10[2U] = 0x726f7665U;
    __Vtemp_10[3U] = 0x77U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(4, __Vtemp_10), 
                                vlSelf->clean_disp_tb__DOT__WR_OVERHEAD))) {
        vlSelf->clean_disp_tb__DOT__WR_OVERHEAD = 0x4eU;
    }
    __Vtemp_11[0U] = 0x743d2564U;
    __Vtemp_11[1U] = 0x72626561U;
    __Vtemp_11[2U] = 0x77U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_11), 
                                vlSelf->clean_disp_tb__DOT__WR_BEAT))) {
        vlSelf->clean_disp_tb__DOT__WR_BEAT = 2U;
    }
    __Vtemp_12[0U] = 0x793d2564U;
    __Vtemp_12[1U] = 0x65627573U;
    __Vtemp_12[2U] = 0x77726974U;
    if (VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_12), 
                             vlSelf->clean_disp_tb__DOT__WR_OVERHEAD)) {
        vlSelf->clean_disp_tb__DOT__WR_BEAT = 0U;
    }
    __Vtemp_13[0U] = 0x793d2564U;
    __Vtemp_13[1U] = 0x65766572U;
    __Vtemp_13[2U] = 0x7573795fU;
    __Vtemp_13[3U] = 0x72647662U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(4, __Vtemp_13), 
                                vlSelf->clean_disp_tb__DOT__RDVBUSY_EVERY))) {
        vlSelf->clean_disp_tb__DOT__RDVBUSY_EVERY = 0U;
    }
    __Vtemp_14[0U] = 0x623d2564U;
    __Vtemp_14[1U] = 0x5f70726fU;
    __Vtemp_14[2U] = 0x62757379U;
    __Vtemp_14[3U] = 0x726476U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(4, __Vtemp_14), 
                                vlSelf->clean_disp_tb__DOT__RDVBUSY_PROB))) {
        vlSelf->clean_disp_tb__DOT__RDVBUSY_PROB = 0U;
    }
    __Vtemp_15[0U] = 0x653d2564U;
    __Vtemp_15[1U] = 0x5f6f6e63U;
    __Vtemp_15[2U] = 0x62757379U;
    __Vtemp_15[3U] = 0x726476U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(4, __Vtemp_15), 
                                vlSelf->clean_disp_tb__DOT__RDVBUSY_ONCE))) {
        vlSelf->clean_disp_tb__DOT__RDVBUSY_ONCE = 0U;
    }
    __Vtemp_16[0U] = 0x653d2564U;
    __Vtemp_16[1U] = 0x5f6f6e63U;
    __Vtemp_16[2U] = 0x75727374U;
    __Vtemp_16[3U] = 0x65616462U;
    __Vtemp_16[4U] = 0x64U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_16), 
                                vlSelf->clean_disp_tb__DOT__DEADBURST_ONCE))) {
        vlSelf->clean_disp_tb__DOT__DEADBURST_ONCE = 0U;
    }
    vlSelf->clean_disp_tb__DOT__nlc_rice_r = (1U & VL_TESTPLUSARGS_I(
                                                                     std::string{"rice"}));
    vlSelf->clean_disp_tb__DOT__FEEDFAST = (1U & VL_TESTPLUSARGS_I(
                                                                   std::string{"feedfast"}));
    __Vtemp_17[0U] = 0x6c6f6f70U;
    __Vtemp_17[1U] = 0x6f736564U;
    __Vtemp_17[2U] = 0x636cU;
    vlSelf->clean_disp_tb__DOT__CLOSEDLOOP = (1U & VL_TESTPLUSARGS_I(
                                                                     VL_CVT_PACK_STR_NW(3, __Vtemp_17)));
    __Vtemp_18[0U] = 0x303d2564U;
    __Vtemp_18[1U] = 0x6c6d7331U;
    __Vtemp_18[2U] = 0x656d75U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_18), 
                                vlSelf->clean_disp_tb__DOT__EMULMS10))) {
        vlSelf->clean_disp_tb__DOT__EMULMS10 = 0U;
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cdbg = 
        (1U & VL_TESTPLUSARGS_I(std::string{"coredbg"}));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__dbg 
        = (1U & VL_TESTPLUSARGS_I(std::string{"coredbg"}));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__dbg 
        = (1U & VL_TESTPLUSARGS_I(std::string{"coredbg"}));
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__dbg 
        = (1U & VL_TESTPLUSARGS_I(std::string{"coredbg"}));
}

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_final(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__stl(Vclean_disp_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vclean_disp_tb___024root___eval_phase__stl(Vclean_disp_tb___024root* vlSelf);

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_settle(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vclean_disp_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("clean_disp_tb.v", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vclean_disp_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__stl(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclean_disp_tb___024root___eval_triggers__stl(Vclean_disp_tb___024root* vlSelf);
VL_ATTR_COLD void Vclean_disp_tb___024root___eval_stl(Vclean_disp_tb___024root* vlSelf);

VL_ATTR_COLD bool Vclean_disp_tb___024root___eval_phase__stl(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vclean_disp_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vclean_disp_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__act(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clean_disp_tb.clk_sys)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clean_disp_tb.clk_sys or posedge clean_disp_tb.vga.__Vcellinpt__fifo_b5__aclr__strong__out19)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clean_disp_tb.vga.vb)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclean_disp_tb___024root___dump_triggers__nba(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clean_disp_tb.clk_sys)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clean_disp_tb.clk_sys or posedge clean_disp_tb.vga.__Vcellinpt__fifo_b5__aclr__strong__out19)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clean_disp_tb.vga.vb)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclean_disp_tb___024root___ctor_var_reset(Vclean_disp_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclean_disp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclean_disp_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clean_disp_tb__DOT__N_FRAMES = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__CADENCE = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__CODEC = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__DEBUG = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__ILACE = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__W = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__H = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__CHUNK = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__NMARK = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__CEPIX = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__NLCMODE = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__CHUNKGAP = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__WMDROP = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__WMRACEG = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__WMRACE = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__wmrace_pend = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__wmrace_hdr = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__HFP = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__HSv = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__HBP = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__VFP = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__VSv = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__VBP = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048, vlSelf->clean_disp_tb__DOT__MDIR);
    vlSelf->clean_disp_tb__DOT__clk_sys = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cencnt = VL_RAND_RESET_I(4);
    vlSelf->clean_disp_tb__DOT__ce_pix = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__ddr_addr = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__ddr_burst = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__ddr_data_req = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__ddr_data_write = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__ddr_data_to_write = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__ddr_data_ready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__ddr_busy = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__dm_addr_h = VL_RAND_RESET_I(27);
    vlSelf->clean_disp_tb__DOT__dm_din = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__dm_rd = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__dm_burst = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__dm_busy = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_req = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_gnt = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_rd = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_wr = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_burst = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__eng_busy = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_dready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__AV_BUSY = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__AV_DOUT = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__AV_DOUT_READY = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__READ_LAT = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__WR_OVERHEAD = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__WR_BEAT = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__RDVBUSY_EVERY = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__RDVBUSY_PROB = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__RDVBUSY_ONCE = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__DEADBURST_ONCE = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__dead_now = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__dead_used = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__av_rd_left = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__av_rd_lat = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__av_wr_left = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__av_busy_left = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__av_beatno = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__av_rd_addr = VL_RAND_RESET_I(29);
    vlSelf->clean_disp_tb__DOT__av_wr_addr = VL_RAND_RESET_I(29);
    vlSelf->clean_disp_tb__DOT__av_reading = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__av_hazard_r = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__av_hz = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4_reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4_run = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4_stop = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4_write_long = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4_compressed_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4_compressed_long = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__lz4_write_ready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4_read_ready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__codec_mode = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__nlc_disp_mode = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__nlc_reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_write_long = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_out_ready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_compressed_long = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__nlc_compressed_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__nlc_cur_frame = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__nlc_busy = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_stall_cnt = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__nlc_lbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__nlc_lb_q = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__nlc_lb_wcnt = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__nlc_lb_rd = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__nlc_flushed_bytes = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__nlc_flush_end = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_fl_pre = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_fl_run = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_commit_v = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_long_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_paused = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__suppress_done = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_done = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_uncompressed_long = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__nlc_uncompressed_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__nlc_writed_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__nlc_readed_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__donly = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_frame_bytes = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__nlc_frame_done = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_dec_reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_dec_wlong = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_dec_oready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_dec_clong = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__nlc_eng_sel = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_rice_r = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__write_long = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__cfg_h = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT____Vcellinp__u_nlc__reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_pend_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_pend_final = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_pend_frame = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__eng_pend_size = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__eng_pend_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__eng_pend_src = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__eng_pend_dst = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__eng_wm_stb = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_wm_final = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_wm_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__eng_abort_r = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_present_pending = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nlc_present_active = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_adopt_ack = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_busy_w = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_done_stb = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_wd_fired = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_cur_frame = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__eng_flushed = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__state = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_H = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_HFP = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_HS = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_HBP = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_V = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_VFP = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_VS = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_VBP = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_interlaced = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_FB_interlaced = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_pll_S = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_ce_pix = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_frame_switchres = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_frame_ddr = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_frame_vram = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_ddr = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4 = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_ddr = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_vram = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_px_lz4 = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_ddr = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_bl_vram = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_vram_bytes = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_ddr_bytes = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_wr_bytes = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_lz4_ddr_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4_ddr = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_subframe_blit_lz4 = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_blit = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_resume_audio = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_ABCD = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_field = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_req = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_px_frameskip = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_state_frameskip = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__PoC_frame_lz4_FB = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_drive_lz4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_drive_raw = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__reset_blit = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__reset_blit_lz4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__auto_blit = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__auto_blit_lz4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga_wait_vblank = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga_soft_reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga_frameskip = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__cmd_fskip = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_active = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga_reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga_frame_reset = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_frame_rgb_offset = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__ddr_data_idx = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(192, vlSelf->clean_disp_tb__DOT__ddr_data_tmp);
    vlSelf->clean_disp_tb__DOT__vram_wren1 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_wren2 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_wren3 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_wren4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__r_vram_in1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__g_vram_in1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__b_vram_in1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__r_vram_in2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__g_vram_in2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__b_vram_in2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__r_vram_in3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__g_vram_in3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__b_vram_in3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__r_vram_in4 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__g_vram_in4 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__b_vram_in4 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__r_in = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__g_in = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__b_in = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__reset_switchres = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__req_modeline = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__new_vmode = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__new_modeline = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__PoC_audio_samples = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_audio_ddr_bytes = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_audio_count = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__PoC_audio_count_bytes = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_index = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__PoC_lz4_delta_bytes = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__cmd_switchres = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__cmd_blit = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__cmd_blit_lz4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__switchres_frame = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4_size = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4_ABCD = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__lz4_field = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__cmd_blit_req = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__cmd_blit_lz4_req = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__cmd_switchres_req = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_req_ready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_end_frame = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_queue = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga_de_w = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__dbg_freeze_hit = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__dbg_freeze_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__dbg_freeze_frames = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__dbg_prev_px = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__frz_vb_d = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__busfree_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__buswedge_logged = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__capx = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__capy = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__frames_out = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__maxrow = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__fieldcnt = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__row = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2764800; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__img[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->clean_disp_tb__DOT__vbl_d = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__de_d = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->clean_disp_tb__DOT__fname);
    vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__fdo = 0;
    vlSelf->clean_disp_tb__DOT__dump_ppm__Vstatic__rr = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__fdo = 0;
    vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__w = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__dump_fb__Vstatic__b0 = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__lz4buf[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->clean_disp_tb__DOT__lz4cs = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1036800; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__framebuf[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__fd = 0;
    vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__idx = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->clean_disp_tb__DOT__feed_raw__Vstatic__nm);
    vlSelf->clean_disp_tb__DOT__blit_header__Vstatic__hdr = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__w = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__put_byte__Vstatic__sh = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__fd = 0;
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__sent = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nblit = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__idx = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__base = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__w = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__hdr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->clean_disp_tb__DOT__feed_lz4__Vstatic__nm);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__fd = 0;
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__sent = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nblit = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__idx = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__zone = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__base = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__w = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__hdr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->clean_disp_tb__DOT__feed_nlc__Vstatic__nm);
    vlSelf->clean_disp_tb__DOT__eng_prog_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__engwedge_logged = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__engfl_d = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__engbusy_d = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__eng_done_total = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__eof_frames = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__pfv_d0 = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__last_pub_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__pub_period_sum = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__pub_period_n = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__nb_d = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__nb_start = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__nb_sum = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__nb_n = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__nlc_displayed = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__last_progress_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__fv_d = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__wedged = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vram_unsync_events = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__vqmin = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__vs_d = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__display_up = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__fsk_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__inf_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__prep_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__ablit_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__fbw_cnt = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__tot_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__dw_d = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__fbmode_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__strm_stall_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__fb_sig = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__fb_sig_prev = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__fb_changes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__scnt = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__st_pd = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__blit_log = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__vc_d = VL_RAND_RESET_I(10);
    vlSelf->clean_disp_tb__DOT__fsk_pulses = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__auto_first_n = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__auto_line_n = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__blitraw_n = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__stp2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__st_prev = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__pf_frames = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__pf_bd = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__c_setup = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_prep = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_copy = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_infl = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_flush = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_hdrend = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_wait = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_prime = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_hdr = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_a = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_b = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_eol = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_flush = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__cc_done = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_offull = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_iflow = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_ifempty = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__c_busytot = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__trc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wcyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__FEEDFAST = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__CLOSEDLOOP = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__EMULMS10 = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_prev_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_per_sum = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__feed_per_n = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vtotal_l = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__htot_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__frame_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__sleep_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__emul_cyc = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vc1 = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__vc2 = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__wait_sync_api__Vstatic__dif = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT____Vlvbound_hf6b8ffcf__0 = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT____Vlvbound_h6d59f7ef__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT____Vlvbound_ha6730a4e__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT____Vlvbound_ha663fb1a__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__g = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__ddr_mux__DOT__m1_owns = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_burst = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_out = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_data = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_address = VL_RAND_RESET_I(27);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_read = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_write = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__ram_index = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd = VL_RAND_RESET_I(17);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__timeout_cnt = VL_RAND_RESET_I(4);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__rd_wd_fired = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_ddram__DOT__unnamedblk1__DOT__old_rd = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__state = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_addr = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_total = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_read_index = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_addr = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__block_write_total = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__data_64 = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__lz4__DOT__window[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr3 = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__window_addr13 = VL_RAND_RESET_I(13);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP3 = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP13 = VL_RAND_RESET_I(13);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__LL = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__ML = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__MP = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__LL_W = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__ML_W = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__offset = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_long = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__uncompressed_bytes = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__long_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__paused = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__read_ready_64 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__lz4__DOT__blocks_readed = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ififo[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_q = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_head = VL_RAND_RESET_I(9);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_tail = VL_RAND_RESET_I(9);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__if_count = VL_RAND_RESET_I(9);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__dec_bank = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_head = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_tail = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_count = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_flushed = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iw = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ip_st = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_st = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_pl = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left0 = VL_RAND_RESET_I(9);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left1 = VL_RAND_RESET_I(9);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left2 = VL_RAND_RESET_I(9);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_left_cur = VL_RAND_RESET_I(9);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_waddr = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_bank = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__bank_rdy = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_lines = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_we_r = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wa_r = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__seg_wd_r = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ld_want = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__prime_all = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__step_hdr = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__y = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__lp = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec0 = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec1 = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__rec2 = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cst = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__tcnt = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pw = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__all_rdy = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__comb_v = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__cdbg = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__iB = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oR = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__oG = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__ofifo[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_q = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__of_pop_st = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_acc);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_n = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(96, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_na);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__pk_nn = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT____Vlvbound_ha736458d__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__seg_q = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__acc);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bitcnt = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__nxt_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__rd_ptr = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pr_st = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__primed = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__need_refill = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__w = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 1440; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bufP_q = VL_RAND_RESET_I(12);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__above_reg = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__recon_reg = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__predL_r = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qeL_r = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pabove = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__paL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__pleft = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__aL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__bL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mnL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__mxL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__predL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qeL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__qmul = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__reconRawL = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__codeL = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(128, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__na);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__ncnt = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__cons = VL_RAND_RESET_I(6);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_esc = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_q = VL_RAND_RESET_I(5);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__r_rem = VL_RAND_RESET_Q(36);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT__dbg = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreY__DOT____Vlvbound_h3bb8fe6d__0 = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__seg_q = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__acc);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bitcnt = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__nxt_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__rd_ptr = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pr_st = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__primed = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__need_refill = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__w = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 1440; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bufP_q = VL_RAND_RESET_I(12);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__above_reg = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__recon_reg = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__predL_r = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qeL_r = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pabove = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__paL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__pleft = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__aL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__bL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mnL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__mxL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__predL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qeL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__qmul = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__reconRawL = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__codeL = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(128, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__na);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__ncnt = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__cons = VL_RAND_RESET_I(6);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_esc = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_q = VL_RAND_RESET_I(5);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__r_rem = VL_RAND_RESET_Q(36);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT__dbg = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCo__DOT____Vlvbound_h3bb8fe6d__0 = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__seg_q = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__acc);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bitcnt = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__nxt_valid = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__rd_ptr = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pr_st = VL_RAND_RESET_I(2);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__primed = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__need_refill = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__w = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 1440; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bufP_q = VL_RAND_RESET_I(12);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ra = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__above_reg = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__recon_reg = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__predL_r = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qeL_r = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pabove = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__paL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__pleft = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__aL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__bL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mnL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__mxL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__predL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qeL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconL = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__qmul = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__reconRawL = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__codeL = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(128, vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__na);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__ncnt = VL_RAND_RESET_I(7);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__cons = VL_RAND_RESET_I(6);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_esc = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_q = VL_RAND_RESET_I(5);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__r_rem = VL_RAND_RESET_Q(36);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT__dbg = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_nlc__DOT__coreCg__DOT____Vlvbound_h3bb8fe6d__0 = VL_RAND_RESET_I(12);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__st = VL_RAND_RESET_I(4);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_size = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_wm = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_final = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_src = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__cur_dst = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__end_publish = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__u_eng__DOT__lbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_q = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wcnt = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__lb_rd = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__m_din_r = VL_RAND_RESET_Q(64);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__eng_addr = VL_RAND_RESET_I(28);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__beats = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd = VL_RAND_RESET_I(21);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__st_d = VL_RAND_RESET_I(4);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__flush_end = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__rem = VL_RAND_RESET_I(32);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__final_chk = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__feed_ok = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__input_done = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__progress = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__u_eng__DOT__wd_hit = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vga_pixels_frame = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga__DOT__h_cnt = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__vga__DOT__v_cnt = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_counter = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vga_vblanks = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga__DOT__field = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__hb = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vb = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_prev_interlaced = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_field = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_first = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_H = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__vga__DOT__FB_V = VL_RAND_RESET_I(16);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_pixel_counter = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_wait_vblank = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_out_sync = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vram_start = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__vga_started = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_r[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_g[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_b[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rgb_empty[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_rd_next = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr1 = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr2 = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr3 = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_wr4 = VL_RAND_RESET_I(3);
    vlSelf->clean_disp_tb__DOT__vga__DOT__fifo_ahead = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__out_ena = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__out_ena_skip = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga__DOT__pixel_overlay_skip = VL_RAND_RESET_I(24);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19 = 0;
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__0 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__0 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h0cd7ed91__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hf0614c82__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hbb2bd4d7__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__0 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h449ff81d__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha98968e6__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8573bf5b__0 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__0 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__1 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__1 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__2 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__2 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__3 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__3 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__1 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__2 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__3 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__5 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__5 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__6 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__6 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__1 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__5 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__2 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__3 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__7 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__7 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__6 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h199bfe2b__4 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__8 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__8 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h507408d7__7 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__4 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__4 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__4 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__2 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h0cd7ed91__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hf0614c82__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hbb2bd4d7__1 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__9 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h3296e607__9 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__5 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__5 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__5 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h153ad041__3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5683b0d2__3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_hd44ef787__3 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h00c37733__10 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5d373f35__6 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_ha132be0e__6 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h8adb6673__6 = VL_RAND_RESET_I(8);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h5b7009e6__0 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____Vlvbound_h23568af2__0 = VL_RAND_RESET_I(1);
    vlSelf->clean_disp_tb__DOT__vga__DOT____VdfgTmp_hf63363d6__0 = 0;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v0 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v0 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v0 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v0 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v6 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v1 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v1 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v1 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v7 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v2 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v2 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v2 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v8 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v3 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v3 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v3 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v9 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v10 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v11 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v12 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v13 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v14 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v4 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v4 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v4 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v15 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v16 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v17 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v18 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v19 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v20 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v21 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v22 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v5 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v5 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v5 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v6 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v6 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v6 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v23 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v7 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v7 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v7 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v24 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v25 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v26 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v27 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v28 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v29 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v30 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v31 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v32 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v33 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v34 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v35 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v36 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v8 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v8 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v8 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v9 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v9 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v9 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v10 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v10 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v10 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v37 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v38 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v11 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v11 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v11 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v12 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v12 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v12 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_write__v39 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_r_in__v13 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_g_in__v13 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_b_in__v13 = 0;
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v0 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v6 = 0;
    vlSelf->__Vdlyvdim0__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7 = 0;
    vlSelf->__Vdlyvval__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clean_disp_tb__DOT__vga__DOT__fifo_rgb_req__v7 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__clk_sys__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT____Vcellinpt__fifo_b5__aclr__strong__out19__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clean_disp_tb__DOT__vga__DOT__vb__0 = VL_RAND_RESET_I(1);
}
