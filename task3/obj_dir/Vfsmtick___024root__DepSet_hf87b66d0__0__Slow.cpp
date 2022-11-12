// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsmtick.h for the primary calling header

#include "verilated.h"

#include "Vfsmtick___024root.h"

VL_ATTR_COLD void Vfsmtick___024root___settle__TOP__0(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->fsmtick__DOT__machine__DOT__current) 
               | (1U == vlSelf->fsmtick__DOT__machine__DOT__current)) 
              | (2U == vlSelf->fsmtick__DOT__machine__DOT__current)) 
             | (3U == vlSelf->fsmtick__DOT__machine__DOT__current)) 
            | (4U == vlSelf->fsmtick__DOT__machine__DOT__current)) 
           | (5U == vlSelf->fsmtick__DOT__machine__DOT__current)) 
          | (6U == vlSelf->fsmtick__DOT__machine__DOT__current)) 
         | (7U == vlSelf->fsmtick__DOT__machine__DOT__current))) {
        if ((0U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 1U;
            vlSelf->out = 0U;
        } else if ((1U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 2U;
            vlSelf->out = 1U;
        } else if ((2U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 3U;
            vlSelf->out = 3U;
        } else if ((3U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 4U;
            vlSelf->out = 7U;
        } else if ((4U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 5U;
            vlSelf->out = 0xfU;
        } else if ((5U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 6U;
            vlSelf->out = 0x1fU;
        } else if ((6U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 7U;
            vlSelf->out = 0x3fU;
        } else {
            vlSelf->fsmtick__DOT__machine__DOT__next_state = 8U;
            vlSelf->out = 0x7fU;
        }
    } else if ((8U == vlSelf->fsmtick__DOT__machine__DOT__current)) {
        vlSelf->fsmtick__DOT__machine__DOT__next_state = 0U;
        vlSelf->out = 0xffU;
    }
}

VL_ATTR_COLD void Vfsmtick___024root___eval_initial(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vfsmtick___024root___eval_settle(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___eval_settle\n"); );
    // Body
    Vfsmtick___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vfsmtick___024root___final(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___final\n"); );
}

VL_ATTR_COLD void Vfsmtick___024root___ctor_var_reset(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->fsmtick__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->fsmtick__DOT__ticker__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->fsmtick__DOT__machine__DOT__current = 0;
    vlSelf->fsmtick__DOT__machine__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
