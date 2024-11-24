// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_combo__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkSam__DOT__a_1_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_4_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[3U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_1_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_3_D_IN = (0xffffU & vlTOPp->get_in_a_in[3U]);
    vlTOPp->mkSam__DOT__a_1_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_1_D_IN = (0xffffU & vlTOPp->get_in_a_in[2U]);
    vlTOPp->mkSam__DOT__a_1_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_2_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[2U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_2_5_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_5_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[6U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[5U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_0_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_0_D_IN = (0xffffU & vlTOPp->get_in_a_in[0U]);
    vlTOPp->mkSam__DOT__a_0_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_1_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[0U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_0_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_2_D_IN = (0xffffU & vlTOPp->get_in_a_in[1U]);
    vlTOPp->mkSam__DOT__a_0_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_3_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[1U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_2_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_2_D_IN = (0xffffU & vlTOPp->get_in_a_in[4U]);
    vlTOPp->mkSam__DOT__a_2_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_3_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[5U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[4U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_2_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_4_D_IN = (0xffffU & vlTOPp->get_in_a_in[5U]);
    vlTOPp->mkSam__DOT__b_0_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_0_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[0U]);
    vlTOPp->mkSam__DOT__a_3_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_3_D_IN = (0xffffU & vlTOPp->get_in_a_in[6U]);
    vlTOPp->mkSam__DOT__a_3_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_4_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[7U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[6U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_3_5_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_5_D_IN = (0xffffU & vlTOPp->get_in_a_in[7U]);
    vlTOPp->mkSam__DOT__a_3_6_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_6_D_IN = (0xffffU & (vlTOPp->get_in_a_in[7U] 
                                                 >> 0x10U));
    vlTOPp->mkSam__DOT__b_1_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_1_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[2U]);
    vlTOPp->mkSam__DOT__b_1_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_1_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[0U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_2_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_2_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[4U]);
    vlTOPp->mkSam__DOT__b_2_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_2_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[2U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_2_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_2_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[1U]);
    vlTOPp->mkSam__DOT__b_3_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[6U]);
    vlTOPp->mkSam__DOT__b_3_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[5U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[4U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_3_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[3U]);
    vlTOPp->mkSam__DOT__b_3_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_3_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[1U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_4_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_4_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[7U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[6U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_4_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_4_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[5U]);
    vlTOPp->mkSam__DOT__b_4_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_4_3_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[3U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_5_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_5_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[7U]);
    vlTOPp->mkSam__DOT__b_5_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_5_3_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[6U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[5U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_6_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_6_3_D_IN = (0xffffU & (vlTOPp->get_in_b_in[7U] 
                                                 >> 0x10U));
    vlTOPp->mkSam__DOT__s_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__s_D_IN = vlTOPp->get_in_s_in;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((get_in_s_in & 0xfeU))) {
        Verilated::overWidthError("get_in_s_in");}
    if (VL_UNLIKELY((EN_get_in & 0xfeU))) {
        Verilated::overWidthError("EN_get_in");}
}
#endif  // VL_DEBUG
