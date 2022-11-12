// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfsmtick__Syms.h"


VL_ATTR_COLD void Vfsmtick___024root__trace_init_sub__TOP__0(Vfsmtick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"out", false,-1, 7,0);
    tracep->pushNamePrefix("fsmtick ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"out", false,-1, 7,0);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->pushNamePrefix("machine ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+8,"out", false,-1, 7,0);
    tracep->declBus(c+2,"current", false,-1, 31,0);
    tracep->declBus(c+3,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ticker ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+4,"count", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vfsmtick___024root__trace_init_top(Vfsmtick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_init_top\n"); );
    // Body
    Vfsmtick___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfsmtick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsmtick___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsmtick___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfsmtick___024root__trace_register(Vfsmtick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfsmtick___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfsmtick___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfsmtick___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfsmtick___024root__trace_full_sub_0(Vfsmtick___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfsmtick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_full_top_0\n"); );
    // Init
    Vfsmtick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsmtick___024root*>(voidSelf);
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfsmtick___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfsmtick___024root__trace_full_sub_0(Vfsmtick___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmtick___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->fsmtick__DOT__tick));
    bufp->fullIData(oldp+2,(vlSelf->fsmtick__DOT__machine__DOT__current),32);
    bufp->fullIData(oldp+3,(vlSelf->fsmtick__DOT__machine__DOT__next_state),32);
    bufp->fullSData(oldp+4,(vlSelf->fsmtick__DOT__ticker__DOT__count),16);
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->rst));
    bufp->fullBit(oldp+7,(vlSelf->en));
    bufp->fullCData(oldp+8,(vlSelf->out),8);
    bufp->fullSData(oldp+9,(0x1cU),16);
    bufp->fullIData(oldp+10,(0x10U),32);
}
