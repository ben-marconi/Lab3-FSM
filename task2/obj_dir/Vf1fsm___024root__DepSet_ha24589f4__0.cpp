// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1fsm___024root.h"

VL_INLINE_OPT void Vf1fsm___024root___sequent__TOP__0(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->f1fsm__DOT__current = 0U;
    } else if (vlSelf->en) {
        vlSelf->f1fsm__DOT__current = vlSelf->f1fsm__DOT__next_state;
    }
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

void Vf1fsm___024root___eval(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1fsm___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1fsm___024root___eval_debug_assertions(Vf1fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
