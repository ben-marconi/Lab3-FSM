// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfsmtick.h for the primary calling header

#ifndef VERILATED_VFSMTICK___024ROOT_H_
#define VERILATED_VFSMTICK___024ROOT_H_  // guard

#include "verilated.h"

class Vfsmtick__Syms;

class Vfsmtick___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ fsmtick__DOT__tick;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ fsmtick__DOT__ticker__DOT__count;
    IData/*31:0*/ fsmtick__DOT__machine__DOT__current;
    IData/*31:0*/ fsmtick__DOT__machine__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vfsmtick__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfsmtick___024root(Vfsmtick__Syms* symsp, const char* name);
    ~Vfsmtick___024root();
    VL_UNCOPYABLE(Vfsmtick___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
