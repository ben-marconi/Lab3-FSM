// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1fsm.h for the primary calling header

#ifndef VERILATED_VF1FSM___024ROOT_H_
#define VERILATED_VF1FSM___024ROOT_H_  // guard

#include "verilated.h"

class Vf1fsm__Syms;

class Vf1fsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ f1fsm__DOT__current;
    IData/*31:0*/ f1fsm__DOT__next_state;

    // INTERNAL VARIABLES
    Vf1fsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1fsm___024root(Vf1fsm__Syms* symsp, const char* name);
    ~Vf1fsm___024root();
    VL_UNCOPYABLE(Vf1fsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
