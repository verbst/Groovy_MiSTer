// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCLEAN_DISP_TB_H_
#define VERILATED_VCLEAN_DISP_TB_H_  // guard

#include "verilated.h"

class Vclean_disp_tb__Syms;
class Vclean_disp_tb___024root;
class Vclean_disp_tb_fifo_vga;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vclean_disp_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vclean_disp_tb__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r0;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g0;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b0;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r1;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g1;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b1;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r2;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g2;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b2;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r3;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g3;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b3;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r4;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g4;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b4;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_r5;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_g5;
    Vclean_disp_tb_fifo_vga* const __PVT__clean_disp_tb__DOT__vga__DOT__fifo_b5;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vclean_disp_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vclean_disp_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vclean_disp_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vclean_disp_tb();
  private:
    VL_UNCOPYABLE(Vclean_disp_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
