// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsmtick.h for the primary calling header

#include "verilated.h"

#include "Vfsmtick__Syms.h"
#include "Vfsmtick___024root.h"

void Vfsmtick___024root___ctor_var_reset(Vfsmtick___024root* vlSelf);

Vfsmtick___024root::Vfsmtick___024root(Vfsmtick__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfsmtick___024root___ctor_var_reset(this);
}

void Vfsmtick___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfsmtick___024root::~Vfsmtick___024root() {
}
