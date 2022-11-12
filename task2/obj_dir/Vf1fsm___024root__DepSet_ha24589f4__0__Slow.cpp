// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1fsm___024root.h"

VL_ATTR_COLD void Vf1fsm___024root___settle__TOP__0(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1fsm__DOT__current) 
               | (1U == vlSelf->f1fsm__DOT__current)) 
              | (2U == vlSelf->f1fsm__DOT__current)) 
             | (3U == vlSelf->f1fsm__DOT__current)) 
            | (4U == vlSelf->f1fsm__DOT__current)) 
           | (5U == vlSelf->f1fsm__DOT__current)) | 
          (6U == vlSelf->f1fsm__DOT__current)) | (7U 
                                                  == vlSelf->f1fsm__DOT__current))) {
        if ((0U == vlSelf->f1fsm__DOT__current)) {
            vlSelf->f1fsm__DOT__next_state = 1U;
            vlSelf->out = 0U;
        } else if ((1U == vlSelf->f1fsm__DOT__current)) {
            vlSelf->f1fsm__DOT__next_state = 2U;
            vlSelf->out = 1U;
        } else if ((2U == vlSelf->f1fsm__DOT__current)) {
            vlSelf->f1fsm__DOT__next_state = 3U;
            vlSelf->out = 3U;
        } else if ((3U == vlSelf->f1fsm__DOT__current)) {
            vlSelf->f1fsm__DOT__next_state = 4U;
            vlSelf->out = 7U;
        } else if ((4U == vlSelf->f1fsm__DOT__current)) {
            vlSelf->f1fsm__DOT__next_state = 5U;
            vlSelf->out = 0xfU;
        } else if ((5U == vlSelf->f1fsm__DOT__current)) {
            vlSelf->f1fsm__DOT__next_state = 6U;
            vlSelf->out = 0x1fU;
        } else if ((6U == vlSelf->f1fsm__DOT__current)) {
            vlSelf->f1fsm__DOT__next_state = 7U;
            vlSelf->out = 0x3fU;
        } else {
            vlSelf->f1fsm__DOT__next_state = 8U;
            vlSelf->out = 0x7fU;
        }
    } else if ((8U == vlSelf->f1fsm__DOT__current)) {
        vlSelf->f1fsm__DOT__next_state = 0U;
        vlSelf->out = 0xffU;
    }
}

VL_ATTR_COLD void Vf1fsm___024root___eval_initial(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vf1fsm___024root___eval_settle(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___eval_settle\n"); );
    // Body
    Vf1fsm___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vf1fsm___024root___final(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___final\n"); );
}

VL_ATTR_COLD void Vf1fsm___024root___ctor_var_reset(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->f1fsm__DOT__current = 0;
    vlSelf->f1fsm__DOT__next_state = 0;
}
