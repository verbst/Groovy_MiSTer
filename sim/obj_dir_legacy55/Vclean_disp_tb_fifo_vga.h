// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclean_disp_tb.h for the primary calling header

#ifndef VERILATED_VCLEAN_DISP_TB_FIFO_VGA_H_
#define VERILATED_VCLEAN_DISP_TB_FIFO_VGA_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vclean_disp_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclean_disp_tb_fifo_vga final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(aclr,0,0);
    VL_IN8(wrclk,0,0);
    VL_IN8(data,7,0);
    VL_IN8(rdclk,0,0);
    VL_IN8(rdreq,0,0);
    VL_IN8(wrreq,0,0);
    VL_OUT8(q,7,0);
    VL_OUT8(rdempty,0,0);
    VL_OUT8(wrfull,0,0);
    CData/*7:0*/ __PVT__sub_wire0;
    VL_OUT8(aclr__out,0,0);
    VL_IN8(aclr__en,0,0);
    VL_OUT16(wrusedw,14,0);
    SData/*14:0*/ __PVT__dcfifo_component__DOT__wptr;
    SData/*14:0*/ __PVT__dcfifo_component__DOT__rptr;
    SData/*14:0*/ __PVT__dcfifo_component__DOT__cnt;
    VlUnpacked<CData/*7:0*/, 16384> __PVT__dcfifo_component__DOT__mem;

    // INTERNAL VARIABLES
    Vclean_disp_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclean_disp_tb_fifo_vga(Vclean_disp_tb__Syms* symsp, const char* v__name);
    ~Vclean_disp_tb_fifo_vga();
    VL_UNCOPYABLE(Vclean_disp_tb_fifo_vga);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
