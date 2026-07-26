// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclean_disp_tb__pch.h"

//============================================================
// Constructors

Vclean_disp_tb::Vclean_disp_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclean_disp_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r0{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r0}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g0{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g0}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b0{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b0}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r1{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r1}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g1{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g1}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b1{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b1}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r2{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r2}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g2{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g2}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b2{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b2}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r3{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r3}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g3{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g3}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b3{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b3}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r4{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r4}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g4{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g4}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b4{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b4}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r5{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_r5}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g5{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_g5}
    , __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b5{vlSymsp->TOP.__PVT__clean_disp_tb__DOT__vga__DOT__fifo_b5}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclean_disp_tb::Vclean_disp_tb(const char* _vcname__)
    : Vclean_disp_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclean_disp_tb::~Vclean_disp_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclean_disp_tb___024root___eval_debug_assertions(Vclean_disp_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vclean_disp_tb___024root___eval_static(Vclean_disp_tb___024root* vlSelf);
void Vclean_disp_tb___024root___eval_initial(Vclean_disp_tb___024root* vlSelf);
void Vclean_disp_tb___024root___eval_settle(Vclean_disp_tb___024root* vlSelf);
void Vclean_disp_tb___024root___eval(Vclean_disp_tb___024root* vlSelf);

void Vclean_disp_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclean_disp_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclean_disp_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclean_disp_tb___024root___eval_static(&(vlSymsp->TOP));
        Vclean_disp_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vclean_disp_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclean_disp_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclean_disp_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vclean_disp_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vclean_disp_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclean_disp_tb___024root___eval_final(Vclean_disp_tb___024root* vlSelf);

VL_ATTR_COLD void Vclean_disp_tb::final() {
    Vclean_disp_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclean_disp_tb::hierName() const { return vlSymsp->name(); }
const char* Vclean_disp_tb::modelName() const { return "Vclean_disp_tb"; }
unsigned Vclean_disp_tb::threads() const { return 1; }
void Vclean_disp_tb::prepareClone() const { contextp()->prepareClone(); }
void Vclean_disp_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vclean_disp_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vclean_disp_tb::trace()' called on model that was Verilated without --trace option");
}
