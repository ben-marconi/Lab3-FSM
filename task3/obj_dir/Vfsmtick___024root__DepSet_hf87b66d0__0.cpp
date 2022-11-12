// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsmtick.h for the primary calling header

#include "verilated.h"

#include "Vfsmtick___024root.h"

VL_INLINE_OPT void Vfsmtick___024root___sequent__TOP__0(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__fsmtick__DOT__ticker__DOT__count;
    // Body
    __Vdly__fsmtick__DOT__ticker__DOT__count = vlSelf->fsmtick__DOT__ticker__DOT__count;
    if (vlSelf->rst) {
        vlSelf->fsmtick__DOT__machine__DOT__current = 0U;
        vlSelf->fsmtick__DOT__tick = 0U;
        __Vdly__fsmtick__DOT__ticker__DOT__count = 0x1cU;
    } else {
        if (vlSelf->fsmtick__DOT__tick) {
            vlSelf->fsmtick__DOT__machine__DOT__current 
                = vlSelf->fsmtick__DOT__machine__DOT__next_state;
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->fsmtick__DOT__ticker__DOT__count))) {
                vlSelf->fsmtick__DOT__tick = 1U;
                __Vdly__fsmtick__DOT__ticker__DOT__count = 0x1cU;
            } else {
                __Vdly__fsmtick__DOT__ticker__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->fsmtick__DOT__ticker__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->fsmtick__DOT__tick = 0U;
            }
        }
    }
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
    vlSelf->fsmtick__DOT__ticker__DOT__count = __Vdly__fsmtick__DOT__ticker__DOT__count;
}

void Vfsmtick___024root___eval(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vfsmtick___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vfsmtick___024root___eval_debug_assertions(Vfsmtick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
