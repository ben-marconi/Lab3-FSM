// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfsmtick.h"
#include "Vfsmtick__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfsmtick::Vfsmtick(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfsmtick__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfsmtick::Vfsmtick(const char* _vcname__)
    : Vfsmtick(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfsmtick::~Vfsmtick() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfsmtick___024root___eval_initial(Vfsmtick___024root* vlSelf);
void Vfsmtick___024root___eval_settle(Vfsmtick___024root* vlSelf);
void Vfsmtick___024root___eval(Vfsmtick___024root* vlSelf);
#ifdef VL_DEBUG
void Vfsmtick___024root___eval_debug_assertions(Vfsmtick___024root* vlSelf);
#endif  // VL_DEBUG
void Vfsmtick___024root___final(Vfsmtick___024root* vlSelf);

static void _eval_initial_loop(Vfsmtick__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfsmtick___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfsmtick___024root___eval_settle(&(vlSymsp->TOP));
        Vfsmtick___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vfsmtick::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfsmtick::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfsmtick___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfsmtick___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vfsmtick::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vfsmtick::final() {
    Vfsmtick___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfsmtick::hierName() const { return vlSymsp->name(); }
const char* Vfsmtick::modelName() const { return "Vfsmtick"; }
unsigned Vfsmtick::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfsmtick::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfsmtick___024root__trace_init_top(Vfsmtick___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfsmtick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsmtick___024root*>(voidSelf);
    Vfsmtick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfsmtick___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfsmtick___024root__trace_register(Vfsmtick___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfsmtick::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfsmtick::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfsmtick___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
