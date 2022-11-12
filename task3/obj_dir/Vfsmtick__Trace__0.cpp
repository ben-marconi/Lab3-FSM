// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfsmtick__Syms.h"


void Vfsmtick___024root__trace_chg_sub_0(Vfsmtick___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfsmtick___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_chg_top_0\n"); );
    // Init
    Vfsmtick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsmtick___024root*>(voidSelf);
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfsmtick___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vfsmtick___024root__trace_chg_sub_0(Vfsmtick___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->fsmtick__DOT__tick));
        bufp->chgIData(oldp+1,(vlSelf->fsmtick__DOT__machine__DOT__current),32);
        bufp->chgIData(oldp+2,(vlSelf->fsmtick__DOT__machine__DOT__next_state),32);
        bufp->chgSData(oldp+3,(vlSelf->fsmtick__DOT__ticker__DOT__count),16);
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->rst));
    bufp->chgBit(oldp+6,(vlSelf->en));
    bufp->chgCData(oldp+7,(vlSelf->out),8);
}

void Vfsmtick___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_cleanup\n"); );
    // Init
    Vfsmtick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsmtick___024root*>(voidSelf);
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
