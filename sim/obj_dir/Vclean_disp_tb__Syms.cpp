// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vclean_disp_tb__pch.h"
#include "Vclean_disp_tb.h"
#include "Vclean_disp_tb___024root.h"
#include "Vclean_disp_tb_fifo_vga.h"

// FUNCTIONS
Vclean_disp_tb__Syms::~Vclean_disp_tb__Syms()
{
}

Vclean_disp_tb__Syms::Vclean_disp_tb__Syms(VerilatedContext* contextp, const char* namep, Vclean_disp_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_b0")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_b1")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_b2")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_b3")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_b4")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_b5")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_g0")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_g1")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_g2")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_g3")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_g4")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_g5")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_r0")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_r1")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_r2")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_r3")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_r4")}
    , TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5{this, Verilated::catName(namep, "clean_disp_tb.vga.fifo_r5")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b0 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b1 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b2 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b3 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b4 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b5 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g0 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g1 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g2 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g3 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g4 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g5 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r0 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r1 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r2 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r3 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r4 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4;
    TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r5 = &TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_b0.__Vconfigure(true);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_b1.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_b2.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_b3.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_b4.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_b5.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_g0.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_g1.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_g2.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_g3.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_g4.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_g5.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_r0.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_r1.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_r2.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_r3.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_r4.__Vconfigure(false);
    TOP__clean_disp_tb__DOT__vga__DOT__fifo_r5.__Vconfigure(false);
}
