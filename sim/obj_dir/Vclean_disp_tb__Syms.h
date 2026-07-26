// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLEAN_DISP_TB__SYMS_H_
#define VERILATED_VCLEAN_DISP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclean_disp_tb.h"

// INCLUDE MODULE CLASSES
#include "Vclean_disp_tb___024root.h"
#include "Vclean_disp_tb_fifo_vga.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vclean_disp_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclean_disp_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclean_disp_tb___024root       TOP;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4;
    Vclean_disp_tb_fifo_vga        TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5;

    // CONSTRUCTORS
    Vclean_disp_tb__Syms(VerilatedContext* contextp, const char* namep, Vclean_disp_tb* modelp);
    ~Vclean_disp_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
