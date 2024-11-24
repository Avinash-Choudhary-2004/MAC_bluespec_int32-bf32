// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkSam__DOT__CAN_FIRE_get_in = 1U;
    vlTOPp->mkSam__DOT__RDY_get_in = 1U;
    vlTOPp->mkSam__DOT__a_0_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_0_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_0_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_0_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_0_4 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_0_5 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_0_6 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_1_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_1_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_1_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_1_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_1_4 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_1_5 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_1_6 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_2_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_2_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_2_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_2_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_2_4 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_2_5 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_2_6 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_3_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_3_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_3_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_3_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_3_4 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_3_5 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_3_6 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_0_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_0_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_0_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_0_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_1_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_1_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_1_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_1_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_2_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_2_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_2_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_2_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_3_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_3_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_3_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__a_prop_3_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_0_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_0_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_0_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_0_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_1_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_1_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_1_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_1_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_2_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_2_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_2_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_2_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_3_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_3_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_3_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_3_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[0U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[1U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[2U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[3U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[4U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[5U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[6U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[7U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[8U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[9U] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[0xaU] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[0xbU] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[0xcU] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[0xdU] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[0xeU] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__aligned_out_new[0xfU] = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__b_0_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_0_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_0_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_0_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_1_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_1_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_1_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_1_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_2_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_2_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_2_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_2_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_3_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_3_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_3_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_3_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_4_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_4_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_4_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_4_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_5_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_5_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_5_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_5_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_6_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_6_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_6_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_6_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_0_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_0_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_0_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_0_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_1_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_1_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_1_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_1_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_2_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_2_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_2_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_2_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_3_0 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_3_1 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_3_2 = 0xaaaaU;
    vlTOPp->mkSam__DOT__b_prop_3_3 = 0xaaaaU;
    vlTOPp->mkSam__DOT__compute = 0U;
    vlTOPp->mkSam__DOT__counter = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__curr_state = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_a = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_b = 0xaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_c = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_check = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_s = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__mac_out = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__mac_s = 0U;
    vlTOPp->mkSam__DOT__mac_x = 0xaaaaaaaaULL;
    vlTOPp->mkSam__DOT__out_0_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_0_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_0_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_0_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_1_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_1_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_1_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_1_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_2_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_2_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_2_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_2_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_3_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_3_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_3_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_3_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_4_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_4_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_4_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_4_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_5_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_5_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_5_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_5_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_6_0 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_6_1 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_6_2 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__out_6_3 = 0xaaaaaaaaU;
    vlTOPp->mkSam__DOT__s = 0U;
    vlTOPp->mkSam__DOT__a_0_4_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_0_4_EN = 0U;
    vlTOPp->mkSam__DOT__a_0_5_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_0_5_EN = 0U;
    vlTOPp->mkSam__DOT__a_0_6_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_0_6_EN = 0U;
    vlTOPp->mkSam__DOT__a_1_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_1_0_EN = 0U;
    vlTOPp->mkSam__DOT__a_1_5_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_1_5_EN = 0U;
    vlTOPp->mkSam__DOT__a_1_6_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_1_6_EN = 0U;
    vlTOPp->mkSam__DOT__a_2_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_2_0_EN = 0U;
    vlTOPp->mkSam__DOT__a_2_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_2_1_EN = 0U;
    vlTOPp->mkSam__DOT__a_2_6_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_2_6_EN = 0U;
    vlTOPp->mkSam__DOT__a_3_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_3_0_EN = 0U;
    vlTOPp->mkSam__DOT__a_3_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_3_1_EN = 0U;
    vlTOPp->mkSam__DOT__a_3_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__a_3_2_EN = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[0U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[1U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[2U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[3U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[4U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[5U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[6U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[7U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[8U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[9U] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[0xaU] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[0xbU] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[0xcU] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[0xdU] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[0xeU] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_D_IN[0xfU] = 0U;
    vlTOPp->mkSam__DOT__aligned_out_new_EN = 0U;
    vlTOPp->mkSam__DOT__b_0_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_0_1_EN = 0U;
    vlTOPp->mkSam__DOT__b_0_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_0_2_EN = 0U;
    vlTOPp->mkSam__DOT__b_0_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_0_3_EN = 0U;
    vlTOPp->mkSam__DOT__b_1_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_1_2_EN = 0U;
    vlTOPp->mkSam__DOT__b_1_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_1_3_EN = 0U;
    vlTOPp->mkSam__DOT__b_2_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_2_3_EN = 0U;
    vlTOPp->mkSam__DOT__b_4_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_4_0_EN = 0U;
    vlTOPp->mkSam__DOT__b_5_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_5_0_EN = 0U;
    vlTOPp->mkSam__DOT__b_5_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_5_1_EN = 0U;
    vlTOPp->mkSam__DOT__b_6_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_6_0_EN = 0U;
    vlTOPp->mkSam__DOT__b_6_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_6_1_EN = 0U;
    vlTOPp->mkSam__DOT__b_6_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__b_6_2_EN = 0U;
    vlTOPp->mkSam__DOT__counter_D_IN = 1U;
    vlTOPp->mkSam__DOT__mac_a_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_a_EN = 0U;
    vlTOPp->mkSam__DOT__mac_b_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_b_EN = 0U;
    vlTOPp->mkSam__DOT__mac_c_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_c_EN = 0U;
    vlTOPp->mkSam__DOT__mac_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_check_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_check_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_out_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_out_EN = 0U;
    vlTOPp->mkSam__DOT__mac_s_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_s_EN = 0U;
    vlTOPp->mkSam__DOT__mac_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_x_EN = 0U;
    vlTOPp->mkSam__DOT__out_0_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_0_0_EN = 0U;
    vlTOPp->mkSam__DOT__out_0_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_0_1_EN = 0U;
    vlTOPp->mkSam__DOT__out_0_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_0_2_EN = 0U;
    vlTOPp->mkSam__DOT__out_0_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_0_3_EN = 0U;
    vlTOPp->mkSam__DOT__out_1_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_1_0_EN = 0U;
    vlTOPp->mkSam__DOT__out_1_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_1_1_EN = 0U;
    vlTOPp->mkSam__DOT__out_1_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_1_2_EN = 0U;
    vlTOPp->mkSam__DOT__out_1_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_1_3_EN = 0U;
    vlTOPp->mkSam__DOT__out_2_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_2_0_EN = 0U;
    vlTOPp->mkSam__DOT__out_2_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_2_1_EN = 0U;
    vlTOPp->mkSam__DOT__out_2_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_2_2_EN = 0U;
    vlTOPp->mkSam__DOT__out_2_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_2_3_EN = 0U;
    vlTOPp->mkSam__DOT__out_3_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_3_0_EN = 0U;
    vlTOPp->mkSam__DOT__out_3_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_3_1_EN = 0U;
    vlTOPp->mkSam__DOT__out_3_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_3_2_EN = 0U;
    vlTOPp->mkSam__DOT__out_3_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_3_3_EN = 0U;
    vlTOPp->mkSam__DOT__out_4_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_4_0_EN = 0U;
    vlTOPp->mkSam__DOT__out_4_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_4_1_EN = 0U;
    vlTOPp->mkSam__DOT__out_4_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_4_2_EN = 0U;
    vlTOPp->mkSam__DOT__out_4_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_4_3_EN = 0U;
    vlTOPp->mkSam__DOT__out_5_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_5_0_EN = 0U;
    vlTOPp->mkSam__DOT__out_5_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_5_1_EN = 0U;
    vlTOPp->mkSam__DOT__out_5_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_5_2_EN = 0U;
    vlTOPp->mkSam__DOT__out_5_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_5_3_EN = 0U;
    vlTOPp->mkSam__DOT__out_6_0_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_6_0_EN = 0U;
    vlTOPp->mkSam__DOT__out_6_1_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_6_1_EN = 0U;
    vlTOPp->mkSam__DOT__out_6_2_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_6_2_EN = 0U;
    vlTOPp->mkSam__DOT__out_6_3_D_IN = 0U;
    vlTOPp->mkSam__DOT__out_6_3_EN = 0U;
    vlTOPp->RDY_get_in = vlTOPp->mkSam__DOT__RDY_get_in;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkSam__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkSam__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkSam__DOT__get_in_a_in[0U] = vlTOPp->get_in_a_in[0U];
    vlTOPp->mkSam__DOT__get_in_a_in[1U] = vlTOPp->get_in_a_in[1U];
    vlTOPp->mkSam__DOT__get_in_a_in[2U] = vlTOPp->get_in_a_in[2U];
    vlTOPp->mkSam__DOT__get_in_a_in[3U] = vlTOPp->get_in_a_in[3U];
    vlTOPp->mkSam__DOT__get_in_a_in[4U] = vlTOPp->get_in_a_in[4U];
    vlTOPp->mkSam__DOT__get_in_a_in[5U] = vlTOPp->get_in_a_in[5U];
    vlTOPp->mkSam__DOT__get_in_a_in[6U] = vlTOPp->get_in_a_in[6U];
    vlTOPp->mkSam__DOT__get_in_a_in[7U] = vlTOPp->get_in_a_in[7U];
    vlTOPp->mkSam__DOT__get_in_b_in[0U] = vlTOPp->get_in_b_in[0U];
    vlTOPp->mkSam__DOT__get_in_b_in[1U] = vlTOPp->get_in_b_in[1U];
    vlTOPp->mkSam__DOT__get_in_b_in[2U] = vlTOPp->get_in_b_in[2U];
    vlTOPp->mkSam__DOT__get_in_b_in[3U] = vlTOPp->get_in_b_in[3U];
    vlTOPp->mkSam__DOT__get_in_b_in[4U] = vlTOPp->get_in_b_in[4U];
    vlTOPp->mkSam__DOT__get_in_b_in[5U] = vlTOPp->get_in_b_in[5U];
    vlTOPp->mkSam__DOT__get_in_b_in[6U] = vlTOPp->get_in_b_in[6U];
    vlTOPp->mkSam__DOT__get_in_b_in[7U] = vlTOPp->get_in_b_in[7U];
    vlTOPp->mkSam__DOT__get_in_s_in = vlTOPp->get_in_s_in;
    vlTOPp->mkSam__DOT__EN_get_in = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__WILL_FIRE_get_in = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_0_D_IN = (0xffffU & vlTOPp->get_in_a_in[0U]);
    vlTOPp->mkSam__DOT__a_0_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_1_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[0U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_0_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_2_D_IN = (0xffffU & vlTOPp->get_in_a_in[1U]);
    vlTOPp->mkSam__DOT__a_0_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_0_3_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[1U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_0_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_1_D_IN = (0xffffU & vlTOPp->get_in_a_in[2U]);
    vlTOPp->mkSam__DOT__a_1_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_2_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[2U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_1_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_3_D_IN = (0xffffU & vlTOPp->get_in_a_in[3U]);
    vlTOPp->mkSam__DOT__a_1_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_4_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[3U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_1_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_2_D_IN = (0xffffU & vlTOPp->get_in_a_in[4U]);
    vlTOPp->mkSam__DOT__a_2_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_3_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[5U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[4U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_2_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_4_D_IN = (0xffffU & vlTOPp->get_in_a_in[5U]);
    vlTOPp->mkSam__DOT__a_2_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_5_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[6U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[5U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_2_5_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_3_D_IN = (0xffffU & vlTOPp->get_in_a_in[6U]);
    vlTOPp->mkSam__DOT__a_3_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_4_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[7U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[6U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_3_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_5_D_IN = (0xffffU & vlTOPp->get_in_a_in[7U]);
    vlTOPp->mkSam__DOT__a_3_5_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_6_D_IN = (0xffffU & (vlTOPp->get_in_a_in[7U] 
                                                 >> 0x10U));
    vlTOPp->mkSam__DOT__a_3_6_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_0_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[0U]);
    vlTOPp->mkSam__DOT__b_0_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_1_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[2U]);
    vlTOPp->mkSam__DOT__b_1_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_1_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[0U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_1_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_2_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[4U]);
    vlTOPp->mkSam__DOT__b_2_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_2_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[2U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_2_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_2_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[1U]);
    vlTOPp->mkSam__DOT__b_2_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[6U]);
    vlTOPp->mkSam__DOT__b_3_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[5U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[4U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_3_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[3U]);
    vlTOPp->mkSam__DOT__b_3_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_3_3_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[1U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_3_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_4_1_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[7U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[6U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_4_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_4_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[5U]);
    vlTOPp->mkSam__DOT__b_4_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_4_3_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[3U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_4_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_5_2_D_IN = (0xffffU & vlTOPp->get_in_b_in[7U]);
    vlTOPp->mkSam__DOT__b_5_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_5_3_D_IN = (0xffffU & ((vlTOPp->get_in_b_in[6U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_b_in[5U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__b_5_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_6_3_D_IN = (0xffffU & (vlTOPp->get_in_b_in[7U] 
                                                 >> 0x10U));
    vlTOPp->mkSam__DOT__b_6_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__s_D_IN = vlTOPp->get_in_s_in;
    vlTOPp->mkSam__DOT__s_EN = vlTOPp->EN_get_in;
    vlTOPp->RDY_get_in = vlTOPp->mkSam__DOT__RDY_get_in;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_a_D_IN = vlTOPp->mkSam__DOT__a_prop_0_3;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_a_D_IN = vlTOPp->mkSam__DOT__a_prop_1_3;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_a_D_IN = vlTOPp->mkSam__DOT__a_prop_2_3;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_a_D_IN = vlTOPp->mkSam__DOT__a_prop_3_3;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_b_D_IN = vlTOPp->mkSam__DOT__b_prop_3_0;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_b_D_IN = vlTOPp->mkSam__DOT__b_prop_3_1;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_b_D_IN = vlTOPp->mkSam__DOT__b_prop_3_2;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_b_D_IN = vlTOPp->mkSam__DOT__b_prop_3_3;
    vlTOPp->mkSam__DOT__aligned_out_0_0_D_IN = vlTOPp->mkSam__DOT__mac_matrix_0_0_out;
    vlTOPp->mkSam__DOT__aligned_out_0_1_D_IN = vlTOPp->mkSam__DOT__mac_matrix_0_1_out;
    vlTOPp->mkSam__DOT__aligned_out_0_2_D_IN = vlTOPp->mkSam__DOT__mac_matrix_0_2_out;
    vlTOPp->mkSam__DOT__aligned_out_0_3_D_IN = vlTOPp->mkSam__DOT__mac_matrix_0_3_out;
    vlTOPp->mkSam__DOT__aligned_out_1_0_D_IN = vlTOPp->mkSam__DOT__mac_matrix_1_0_out;
    vlTOPp->mkSam__DOT__aligned_out_1_1_D_IN = vlTOPp->mkSam__DOT__mac_matrix_1_1_out;
    vlTOPp->mkSam__DOT__aligned_out_1_2_D_IN = vlTOPp->mkSam__DOT__mac_matrix_1_2_out;
    vlTOPp->mkSam__DOT__aligned_out_1_3_D_IN = vlTOPp->mkSam__DOT__mac_matrix_1_3_out;
    vlTOPp->mkSam__DOT__aligned_out_2_0_D_IN = vlTOPp->mkSam__DOT__mac_matrix_2_0_out;
    vlTOPp->mkSam__DOT__aligned_out_2_1_D_IN = vlTOPp->mkSam__DOT__mac_matrix_2_1_out;
    vlTOPp->mkSam__DOT__aligned_out_2_2_D_IN = vlTOPp->mkSam__DOT__mac_matrix_2_2_out;
    vlTOPp->mkSam__DOT__aligned_out_2_3_D_IN = vlTOPp->mkSam__DOT__mac_matrix_2_3_out;
    vlTOPp->mkSam__DOT__aligned_out_3_0_D_IN = vlTOPp->mkSam__DOT__mac_matrix_3_0_out;
    vlTOPp->mkSam__DOT__aligned_out_3_1_D_IN = vlTOPp->mkSam__DOT__mac_matrix_3_1_out;
    vlTOPp->mkSam__DOT__aligned_out_3_2_D_IN = vlTOPp->mkSam__DOT__mac_matrix_3_2_out;
    vlTOPp->mkSam__DOT__aligned_out_3_3_D_IN = vlTOPp->mkSam__DOT__mac_matrix_3_3_out;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_a_D_IN = vlTOPp->mkSam__DOT__a_prop_0_0;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_a_D_IN = vlTOPp->mkSam__DOT__a_prop_0_1;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_a_D_IN = vlTOPp->mkSam__DOT__a_prop_0_2;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_a_D_IN = vlTOPp->mkSam__DOT__a_prop_1_0;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_a_D_IN = vlTOPp->mkSam__DOT__a_prop_1_1;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_a_D_IN = vlTOPp->mkSam__DOT__a_prop_1_2;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_a_D_IN = vlTOPp->mkSam__DOT__a_prop_2_0;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_a_D_IN = vlTOPp->mkSam__DOT__a_prop_2_1;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_a_D_IN = vlTOPp->mkSam__DOT__a_prop_2_2;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_a_D_IN = vlTOPp->mkSam__DOT__a_prop_3_0;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_a_D_IN = vlTOPp->mkSam__DOT__a_prop_3_1;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_a_D_IN = vlTOPp->mkSam__DOT__a_prop_3_2;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_b_D_IN = vlTOPp->mkSam__DOT__b_prop_0_0;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_b_D_IN = vlTOPp->mkSam__DOT__b_prop_0_1;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_b_D_IN = vlTOPp->mkSam__DOT__b_prop_0_2;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_b_D_IN = vlTOPp->mkSam__DOT__b_prop_0_3;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_b_D_IN = vlTOPp->mkSam__DOT__b_prop_1_0;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_b_D_IN = vlTOPp->mkSam__DOT__b_prop_1_1;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_b_D_IN = vlTOPp->mkSam__DOT__b_prop_1_2;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_b_D_IN = vlTOPp->mkSam__DOT__b_prop_1_3;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_b_D_IN = vlTOPp->mkSam__DOT__b_prop_2_0;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_b_D_IN = vlTOPp->mkSam__DOT__b_prop_2_1;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_b_D_IN = vlTOPp->mkSam__DOT__b_prop_2_2;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_b_D_IN = vlTOPp->mkSam__DOT__b_prop_2_3;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_s_D_IN = vlTOPp->mkSam__DOT__s;
    vlTOPp->mkSam__DOT__curr_state_D_IN = ((IData)(1U) 
                                           + vlTOPp->mkSam__DOT__curr_state);
    if ((2U == vlTOPp->mkSam__DOT__curr_state)) {
        vlTOPp->mkSam__DOT__a_prop_0_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_0_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_0_3_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_1_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_1_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_1_3_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_2_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_2_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_2_3_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_3_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_3_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_3_3_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_1_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_1_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_1_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_1_3_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_2_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_2_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_2_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_2_3_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_3_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_3_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_3_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_3_3_D_IN = 0U;
    } else {
        vlTOPp->mkSam__DOT__a_prop_0_1_D_IN = vlTOPp->mkSam__DOT__a_prop_0_0;
        vlTOPp->mkSam__DOT__a_prop_0_2_D_IN = vlTOPp->mkSam__DOT__a_prop_0_1;
        vlTOPp->mkSam__DOT__a_prop_0_3_D_IN = vlTOPp->mkSam__DOT__a_prop_0_2;
        vlTOPp->mkSam__DOT__a_prop_1_1_D_IN = vlTOPp->mkSam__DOT__a_prop_1_0;
        vlTOPp->mkSam__DOT__a_prop_1_2_D_IN = vlTOPp->mkSam__DOT__a_prop_1_1;
        vlTOPp->mkSam__DOT__a_prop_1_3_D_IN = vlTOPp->mkSam__DOT__a_prop_1_2;
        vlTOPp->mkSam__DOT__a_prop_2_1_D_IN = vlTOPp->mkSam__DOT__a_prop_2_0;
        vlTOPp->mkSam__DOT__a_prop_2_2_D_IN = vlTOPp->mkSam__DOT__a_prop_2_1;
        vlTOPp->mkSam__DOT__a_prop_2_3_D_IN = vlTOPp->mkSam__DOT__a_prop_2_2;
        vlTOPp->mkSam__DOT__a_prop_3_1_D_IN = vlTOPp->mkSam__DOT__a_prop_3_0;
        vlTOPp->mkSam__DOT__a_prop_3_2_D_IN = vlTOPp->mkSam__DOT__a_prop_3_1;
        vlTOPp->mkSam__DOT__a_prop_3_3_D_IN = vlTOPp->mkSam__DOT__a_prop_3_2;
        vlTOPp->mkSam__DOT__b_prop_1_0_D_IN = vlTOPp->mkSam__DOT__b_prop_0_0;
        vlTOPp->mkSam__DOT__b_prop_1_1_D_IN = vlTOPp->mkSam__DOT__b_prop_0_1;
        vlTOPp->mkSam__DOT__b_prop_1_2_D_IN = vlTOPp->mkSam__DOT__b_prop_0_2;
        vlTOPp->mkSam__DOT__b_prop_1_3_D_IN = vlTOPp->mkSam__DOT__b_prop_0_3;
        vlTOPp->mkSam__DOT__b_prop_2_0_D_IN = vlTOPp->mkSam__DOT__b_prop_1_0;
        vlTOPp->mkSam__DOT__b_prop_2_1_D_IN = vlTOPp->mkSam__DOT__b_prop_1_1;
        vlTOPp->mkSam__DOT__b_prop_2_2_D_IN = vlTOPp->mkSam__DOT__b_prop_1_2;
        vlTOPp->mkSam__DOT__b_prop_2_3_D_IN = vlTOPp->mkSam__DOT__b_prop_1_3;
        vlTOPp->mkSam__DOT__b_prop_3_0_D_IN = vlTOPp->mkSam__DOT__b_prop_2_0;
        vlTOPp->mkSam__DOT__b_prop_3_1_D_IN = vlTOPp->mkSam__DOT__b_prop_2_1;
        vlTOPp->mkSam__DOT__b_prop_3_2_D_IN = vlTOPp->mkSam__DOT__b_prop_2_2;
        vlTOPp->mkSam__DOT__b_prop_3_3_D_IN = vlTOPp->mkSam__DOT__b_prop_2_3;
    }
    vlTOPp->mkSam__DOT__x___05Fh15482 = (vlTOPp->mkSam__DOT__curr_state 
                                         - (IData)(2U));
    vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4 = 
        (0x80000008U >= (0x80000000U ^ vlTOPp->mkSam__DOT__curr_state));
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate 
        = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate 
        = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_0_0_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_0_1_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_0_2_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_0_3_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_1_0_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_1_1_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_1_2_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_1_3_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_2_0_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_2_1_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_2_2_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_2_3_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_3_0_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_3_1_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_3_2_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__aligned_out_3_3_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__counter_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_a_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_b_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_c_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_check_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_out_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_s_EN = vlTOPp->mkSam__DOT__compute;
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_matrix_prop = (1U 
                                                   & (~ (IData)(vlTOPp->mkSam__DOT__compute)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh34682 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh66378 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh97824 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh129271 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_3_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh160892 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh192464 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh223910 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh255357 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_3_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh286978 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh318550 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh349996 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh381443 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_3_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh413065 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh444638 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh476085 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh507533 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_3_c));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b)));
    vlTOPp->mkSam__DOT__x___05Fh36128 = (0xffU & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                   >> 7U) 
                                                  + 
                                                  ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b) 
                                                   >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh35894 = (0x80U 
                                               | (0x7fU 
                                                  & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh67824 = (0xffU & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                   >> 7U) 
                                                  + 
                                                  ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b) 
                                                   >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh67590 = (0x80U 
                                               | (0x7fU 
                                                  & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh99270 = (0xffU & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                   >> 7U) 
                                                  + 
                                                  ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b) 
                                                   >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh99036 = (0x80U 
                                               | (0x7fU 
                                                  & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh130717 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh130483 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a)));
    vlTOPp->mkSam__DOT__x___05Fh162338 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh162104 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh193910 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh193676 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh225356 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh225122 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh256803 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh256569 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a)));
    vlTOPp->mkSam__DOT__x___05Fh288424 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh288190 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh319996 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh319762 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh351442 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh351208 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh382889 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh382655 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a)));
    vlTOPp->mkSam__DOT__x___05Fh414511 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh414277 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh446084 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh445850 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh477531 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh477297 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh508979 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh508745 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a)));
    if ((0U == vlTOPp->mkSam__DOT__x___05Fh15482)) {
        vlTOPp->mkSam__DOT__x___05Fh15430 = vlTOPp->mkSam__DOT__a_0_0;
        vlTOPp->mkSam__DOT__x___05Fh15881 = vlTOPp->mkSam__DOT__b_0_0;
        vlTOPp->mkSam__DOT__x___05Fh18208 = vlTOPp->mkSam__DOT__a_1_0;
        vlTOPp->mkSam__DOT__x___05Fh19775 = vlTOPp->mkSam__DOT__a_2_0;
        vlTOPp->mkSam__DOT__x___05Fh18535 = vlTOPp->mkSam__DOT__b_0_1;
        vlTOPp->mkSam__DOT__x___05Fh20102 = vlTOPp->mkSam__DOT__b_0_2;
        vlTOPp->mkSam__DOT__x___05Fh21342 = vlTOPp->mkSam__DOT__a_3_0;
        vlTOPp->mkSam__DOT__x___05Fh21669 = vlTOPp->mkSam__DOT__b_0_3;
    } else {
        vlTOPp->mkSam__DOT__x___05Fh15430 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__a_0_1)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__a_0_2)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_0_3)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_0_4)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__a_0_5)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__a_0_6)
                                                      : 0U))))));
        vlTOPp->mkSam__DOT__x___05Fh15881 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__b_1_0)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__b_2_0)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_3_0)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_4_0)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__b_5_0)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__b_6_0)
                                                      : 0U))))));
        vlTOPp->mkSam__DOT__x___05Fh18208 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__a_1_1)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__a_1_2)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_1_3)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_1_4)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__a_1_5)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__a_1_6)
                                                      : 0U))))));
        vlTOPp->mkSam__DOT__x___05Fh19775 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__a_2_1)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__a_2_2)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_2_3)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_2_4)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__a_2_5)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__a_2_6)
                                                      : 0U))))));
        vlTOPp->mkSam__DOT__x___05Fh18535 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__b_1_1)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__b_2_1)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_3_1)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_4_1)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__b_5_1)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__b_6_1)
                                                      : 0U))))));
        vlTOPp->mkSam__DOT__x___05Fh20102 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__b_1_2)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__b_2_2)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_3_2)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_4_2)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__b_5_2)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__b_6_2)
                                                      : 0U))))));
        vlTOPp->mkSam__DOT__x___05Fh21342 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__a_3_1)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__a_3_2)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_3_3)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_3_4)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__a_3_5)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__a_3_6)
                                                      : 0U))))));
        vlTOPp->mkSam__DOT__x___05Fh21669 = ((1U == vlTOPp->mkSam__DOT__x___05Fh15482)
                                              ? (IData)(vlTOPp->mkSam__DOT__b_1_3)
                                              : ((2U 
                                                  == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                  ? (IData)(vlTOPp->mkSam__DOT__b_2_3)
                                                  : 
                                                 ((3U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_3_3)
                                                   : 
                                                  ((4U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_4_3)
                                                    : 
                                                   ((5U 
                                                     == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                     ? (IData)(vlTOPp->mkSam__DOT__b_5_3)
                                                     : 
                                                    ((6U 
                                                      == vlTOPp->mkSam__DOT__x___05Fh15482)
                                                      ? (IData)(vlTOPp->mkSam__DOT__b_6_3)
                                                      : 0U))))));
    }
    vlTOPp->mkSam__DOT__compute_D_IN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_matrix_prop;
    vlTOPp->mkSam__DOT__curr_state_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_matrix_prop;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop = vlTOPp->mkSam__DOT__CAN_FIRE_RL_matrix_prop;
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh35947 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh36128)));
    vlTOPp->mkSam__DOT__result_exp___05Fh34671 = (0xffU 
                                                  & ((IData)(0x81U) 
                                                     + (IData)(vlTOPp->mkSam__DOT__x___05Fh36128)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_0_52_THEN_1_CONCAT___05FETC___05F_d155 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh35894)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh51709 = (0x7fffU 
                                               & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh67643 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh67824)));
    vlTOPp->mkSam__DOT__result_exp___05Fh66367 = (0xffU 
                                                  & ((IData)(0x81U) 
                                                     + (IData)(vlTOPp->mkSam__DOT__x___05Fh67824)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_0_05_THEN_1_CONCAT___05FETC___05F_d808 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh67590)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh83405 = (0x7fffU 
                                               & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh99089 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh99270)));
    vlTOPp->mkSam__DOT__result_exp___05Fh97813 = (0xffU 
                                                  & ((IData)(0x81U) 
                                                     + (IData)(vlTOPp->mkSam__DOT__x___05Fh99270)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_0_458_THEN_1_CONCA_ETC___05F_d1461 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh99036)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh114851 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh130536 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh130717)));
    vlTOPp->mkSam__DOT__result_exp___05Fh129260 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh130717)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_0_112_THEN_1_CONCA_ETC___05F_d2115 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh130483)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh146298 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh162157 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh162338)));
    vlTOPp->mkSam__DOT__result_exp___05Fh160881 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh162338)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_0_765_THEN_1_CONCA_ETC___05F_d2768 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh162104)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh177919 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh193729 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh193910)));
    vlTOPp->mkSam__DOT__result_exp___05Fh192453 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh193910)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_0_418_THEN_1_CONCA_ETC___05F_d3421 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh193676)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh209491 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh225175 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh225356)));
    vlTOPp->mkSam__DOT__result_exp___05Fh223899 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh225356)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_0_071_THEN_1_CONCA_ETC___05F_d4074 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh225122)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh240937 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh256622 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh256803)));
    vlTOPp->mkSam__DOT__result_exp___05Fh255346 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh256803)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_0_725_THEN_1_CONCA_ETC___05F_d4728 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh256569)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh272384 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh288243 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh288424)));
    vlTOPp->mkSam__DOT__result_exp___05Fh286967 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh288424)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_0_378_THEN_1_CONCA_ETC___05F_d5381 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh288190)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh304005 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh319815 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh319996)));
    vlTOPp->mkSam__DOT__result_exp___05Fh318539 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh319996)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_0_031_THEN_1_CONCA_ETC___05F_d6034 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh319762)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh335577 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh351261 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh351442)));
    vlTOPp->mkSam__DOT__result_exp___05Fh349985 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh351442)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_0_684_THEN_1_CONCA_ETC___05F_d6687 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh351208)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh367023 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh382708 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh382889)));
    vlTOPp->mkSam__DOT__result_exp___05Fh381432 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh382889)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_0_338_THEN_1_CONCA_ETC___05F_d7341 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh382655)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh398470 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh414330 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh414511)));
    vlTOPp->mkSam__DOT__result_exp___05Fh413054 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh414511)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_0_992_THEN_1_CONCA_ETC___05F_d7995 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh414277)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh430092 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh445903 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh446084)));
    vlTOPp->mkSam__DOT__result_exp___05Fh444627 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh446084)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_0_646_THEN_1_CONCA_ETC___05F_d8649 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh445850)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh461665 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh477350 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh477531)));
    vlTOPp->mkSam__DOT__result_exp___05Fh476074 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh477531)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_0_300_THEN_1_CONCA_ETC___05F_d9303 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh477297)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh493112 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh508798 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh508979)));
    vlTOPp->mkSam__DOT__result_exp___05Fh507522 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh508979)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_0_955_THEN_1_CONCA_ETC___05F_d9958 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh508745)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh524560 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15));
    if (vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) {
        vlTOPp->mkSam__DOT__a_prop_0_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh15430;
        vlTOPp->mkSam__DOT__b_prop_0_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh15881;
        vlTOPp->mkSam__DOT__a_prop_1_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh18208;
        vlTOPp->mkSam__DOT__a_prop_2_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh19775;
        vlTOPp->mkSam__DOT__b_prop_0_1_D_IN = vlTOPp->mkSam__DOT__x___05Fh18535;
        vlTOPp->mkSam__DOT__b_prop_0_2_D_IN = vlTOPp->mkSam__DOT__x___05Fh20102;
        vlTOPp->mkSam__DOT__a_prop_3_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh21342;
        vlTOPp->mkSam__DOT__b_prop_0_3_D_IN = vlTOPp->mkSam__DOT__x___05Fh21669;
    } else {
        vlTOPp->mkSam__DOT__a_prop_0_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_1_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_2_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_3_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_3_D_IN = 0U;
    }
    vlTOPp->mkSam__DOT__compute_EN = ((IData)(vlTOPp->mkSam__DOT__compute) 
                                      | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop));
    vlTOPp->mkSam__DOT__a_prop_0_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_0_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_0_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_0_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_1_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_1_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_1_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_1_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_2_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_2_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_2_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_2_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_3_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_3_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_3_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__a_prop_3_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_0_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_0_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_0_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_0_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_1_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_1_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_1_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_1_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_2_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_2_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_2_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_2_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_3_0_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_3_1_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_3_2_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__b_prop_3_3_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop) 
                                         & ((IData)(vlTOPp->mkSam__DOT__curr_state_SLE_8___05F_d4) 
                                            | (0x80000009U 
                                               <= (0x80000000U 
                                                   ^ vlTOPp->mkSam__DOT__curr_state))));
    vlTOPp->mkSam__DOT__product___05Fh35871 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_0_52_THEN_1_CONCAT___05FETC___05F_d155) 
                                                  + 
                                                  (0x100U 
                                                   | (0xfeU 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                         << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d460 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51709
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh67567 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_0_05_THEN_1_CONCAT___05FETC___05F_d808) 
                                                  + 
                                                  (0x100U 
                                                   | (0xfeU 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                         << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1113 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83405
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh99013 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_0_458_THEN_1_CONCA_ETC___05F_d1461) 
                                                  + 
                                                  (0x100U 
                                                   | (0xfeU 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                         << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1766 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114851
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh130460 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_0_112_THEN_1_CONCA_ETC___05F_d2115) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2420 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146298
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh162081 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_0_765_THEN_1_CONCA_ETC___05F_d2768) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3073 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177919
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh193653 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_0_418_THEN_1_CONCA_ETC___05F_d3421) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3726 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209491
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh225099 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_0_071_THEN_1_CONCA_ETC___05F_d4074) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4379 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240937
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh256546 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_0_725_THEN_1_CONCA_ETC___05F_d4728) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5033 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272384
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh288167 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_0_378_THEN_1_CONCA_ETC___05F_d5381) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5686 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh304005
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh319739 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_0_031_THEN_1_CONCA_ETC___05F_d6034) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6339 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335577
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh351185 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_0_684_THEN_1_CONCA_ETC___05F_d6687) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6992 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh367023
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh382632 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_0_338_THEN_1_CONCA_ETC___05F_d7341) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7646 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398470
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh414254 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_0_992_THEN_1_CONCA_ETC___05F_d7995) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8300 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh430092
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh445827 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_0_646_THEN_1_CONCA_ETC___05F_d8649) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8954 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461665
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh477274 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_0_300_THEN_1_CONCA_ETC___05F_d9303) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9608 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh493112
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh508722 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_0_955_THEN_1_CONCA_ETC___05F_d9958) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10263 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524560
            : 0U);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_1_51_THEN_IF_mac_ma_ETC___05F_d158 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh35871)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_0_52_THEN_1_CONCAT___05FETC___05F_d155));
    vlTOPp->mkSam__DOT__product___05Fh51686 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d460 
                                               + (0xfffeU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_1_04_THEN_IF_mac_ma_ETC___05F_d811 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh67567)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_0_05_THEN_1_CONCAT___05FETC___05F_d808));
    vlTOPp->mkSam__DOT__product___05Fh83382 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1113 
                                               + (0xfffeU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_1_457_THEN_IF_mac___05FETC___05F_d1464 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh99013)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_0_458_THEN_1_CONCA_ETC___05F_d1461));
    vlTOPp->mkSam__DOT__product___05Fh114828 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1766 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_1_111_THEN_IF_mac___05FETC___05F_d2118 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh130460)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_0_112_THEN_1_CONCA_ETC___05F_d2115));
    vlTOPp->mkSam__DOT__product___05Fh146275 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2420 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_1_764_THEN_IF_mac___05FETC___05F_d2771 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh162081)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_0_765_THEN_1_CONCA_ETC___05F_d2768));
    vlTOPp->mkSam__DOT__product___05Fh177896 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3073 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_1_417_THEN_IF_mac___05FETC___05F_d3424 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh193653)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_0_418_THEN_1_CONCA_ETC___05F_d3421));
    vlTOPp->mkSam__DOT__product___05Fh209468 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3726 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_1_070_THEN_IF_mac___05FETC___05F_d4077 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh225099)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_0_071_THEN_1_CONCA_ETC___05F_d4074));
    vlTOPp->mkSam__DOT__product___05Fh240914 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4379 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_1_724_THEN_IF_mac___05FETC___05F_d4731 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh256546)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_0_725_THEN_1_CONCA_ETC___05F_d4728));
    vlTOPp->mkSam__DOT__product___05Fh272361 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5033 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_1_377_THEN_IF_mac___05FETC___05F_d5384 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh288167)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_0_378_THEN_1_CONCA_ETC___05F_d5381));
    vlTOPp->mkSam__DOT__product___05Fh303982 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5686 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_1_030_THEN_IF_mac___05FETC___05F_d6037 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh319739)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_0_031_THEN_1_CONCA_ETC___05F_d6034));
    vlTOPp->mkSam__DOT__product___05Fh335554 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6339 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_1_683_THEN_IF_mac___05FETC___05F_d6690 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh351185)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_0_684_THEN_1_CONCA_ETC___05F_d6687));
    vlTOPp->mkSam__DOT__product___05Fh367000 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6992 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_1_337_THEN_IF_mac___05FETC___05F_d7344 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh382632)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_0_338_THEN_1_CONCA_ETC___05F_d7341));
    vlTOPp->mkSam__DOT__product___05Fh398447 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7646 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_1_991_THEN_IF_mac___05FETC___05F_d7998 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh414254)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_0_992_THEN_1_CONCA_ETC___05F_d7995));
    vlTOPp->mkSam__DOT__product___05Fh430069 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8300 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_1_645_THEN_IF_mac___05FETC___05F_d8652 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh445827)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_0_646_THEN_1_CONCA_ETC___05F_d8649));
    vlTOPp->mkSam__DOT__product___05Fh461642 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8954 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_1_299_THEN_IF_mac___05FETC___05F_d9306 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh477274)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_0_300_THEN_1_CONCA_ETC___05F_d9303));
    vlTOPp->mkSam__DOT__product___05Fh493089 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9608 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_1_954_THEN_IF_mac___05FETC___05F_d9961 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh508722)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_0_955_THEN_1_CONCA_ETC___05F_d9958));
    vlTOPp->mkSam__DOT__product___05Fh524537 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10263 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__product___05Fh35848 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_1_51_THEN_IF_mac_ma_ETC___05F_d158) 
                                                  + 
                                                  (0x200U 
                                                   | (0x1fcU 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                         << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d463 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51686
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d460);
    vlTOPp->mkSam__DOT__product___05Fh67544 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_1_04_THEN_IF_mac_ma_ETC___05F_d811) 
                                                  + 
                                                  (0x200U 
                                                   | (0x1fcU 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                         << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1116 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83382
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1113);
    vlTOPp->mkSam__DOT__product___05Fh98990 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_1_457_THEN_IF_mac___05FETC___05F_d1464) 
                                                  + 
                                                  (0x200U 
                                                   | (0x1fcU 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                         << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1769 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114828
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1766);
    vlTOPp->mkSam__DOT__product___05Fh130437 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_1_111_THEN_IF_mac___05FETC___05F_d2118) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2423 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146275
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2420);
    vlTOPp->mkSam__DOT__product___05Fh162058 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_1_764_THEN_IF_mac___05FETC___05F_d2771) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3076 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177896
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3073);
    vlTOPp->mkSam__DOT__product___05Fh193630 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_1_417_THEN_IF_mac___05FETC___05F_d3424) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3729 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209468
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3726);
    vlTOPp->mkSam__DOT__product___05Fh225076 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_1_070_THEN_IF_mac___05FETC___05F_d4077) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4382 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240914
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4379);
    vlTOPp->mkSam__DOT__product___05Fh256523 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_1_724_THEN_IF_mac___05FETC___05F_d4731) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5036 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272361
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5033);
    vlTOPp->mkSam__DOT__product___05Fh288144 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_1_377_THEN_IF_mac___05FETC___05F_d5384) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5689 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303982
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5686);
    vlTOPp->mkSam__DOT__product___05Fh319716 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_1_030_THEN_IF_mac___05FETC___05F_d6037) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6342 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335554
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6339);
    vlTOPp->mkSam__DOT__product___05Fh351162 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_1_683_THEN_IF_mac___05FETC___05F_d6690) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6995 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh367000
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6992);
    vlTOPp->mkSam__DOT__product___05Fh382609 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_1_337_THEN_IF_mac___05FETC___05F_d7344) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7649 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398447
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7646);
    vlTOPp->mkSam__DOT__product___05Fh414231 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_1_991_THEN_IF_mac___05FETC___05F_d7998) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8303 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh430069
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8300);
    vlTOPp->mkSam__DOT__product___05Fh445804 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_1_645_THEN_IF_mac___05FETC___05F_d8652) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8957 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461642
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8954);
    vlTOPp->mkSam__DOT__product___05Fh477251 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_1_299_THEN_IF_mac___05FETC___05F_d9306) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9611 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh493089
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9608);
    vlTOPp->mkSam__DOT__product___05Fh508699 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_1_954_THEN_IF_mac___05FETC___05F_d9961) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10266 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524537
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10263);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_2_50_THEN_IF_mac_ma_ETC___05F_d162 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh35848)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_1_51_THEN_IF_mac_ma_ETC___05F_d158));
    vlTOPp->mkSam__DOT__product___05Fh51663 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d463 
                                               + (0x1fffcU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_2_03_THEN_IF_mac_ma_ETC___05F_d815 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh67544)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_1_04_THEN_IF_mac_ma_ETC___05F_d811));
    vlTOPp->mkSam__DOT__product___05Fh83359 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1116 
                                               + (0x1fffcU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_2_456_THEN_IF_mac___05FETC___05F_d1468 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh98990)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_1_457_THEN_IF_mac___05FETC___05F_d1464));
    vlTOPp->mkSam__DOT__product___05Fh114805 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1769 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_2_110_THEN_IF_mac___05FETC___05F_d2122 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh130437)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_1_111_THEN_IF_mac___05FETC___05F_d2118));
    vlTOPp->mkSam__DOT__product___05Fh146252 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2423 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_2_763_THEN_IF_mac___05FETC___05F_d2775 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh162058)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_1_764_THEN_IF_mac___05FETC___05F_d2771));
    vlTOPp->mkSam__DOT__product___05Fh177873 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3076 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_2_416_THEN_IF_mac___05FETC___05F_d3428 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh193630)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_1_417_THEN_IF_mac___05FETC___05F_d3424));
    vlTOPp->mkSam__DOT__product___05Fh209445 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3729 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_2_069_THEN_IF_mac___05FETC___05F_d4081 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh225076)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_1_070_THEN_IF_mac___05FETC___05F_d4077));
    vlTOPp->mkSam__DOT__product___05Fh240891 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4382 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_2_723_THEN_IF_mac___05FETC___05F_d4735 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh256523)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_1_724_THEN_IF_mac___05FETC___05F_d4731));
    vlTOPp->mkSam__DOT__product___05Fh272338 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5036 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_2_376_THEN_IF_mac___05FETC___05F_d5388 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh288144)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_1_377_THEN_IF_mac___05FETC___05F_d5384));
    vlTOPp->mkSam__DOT__product___05Fh303959 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5689 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_2_029_THEN_IF_mac___05FETC___05F_d6041 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh319716)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_1_030_THEN_IF_mac___05FETC___05F_d6037));
    vlTOPp->mkSam__DOT__product___05Fh335531 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6342 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_2_682_THEN_IF_mac___05FETC___05F_d6694 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh351162)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_1_683_THEN_IF_mac___05FETC___05F_d6690));
    vlTOPp->mkSam__DOT__product___05Fh366977 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6995 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_2_336_THEN_IF_mac___05FETC___05F_d7348 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh382609)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_1_337_THEN_IF_mac___05FETC___05F_d7344));
    vlTOPp->mkSam__DOT__product___05Fh398424 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7649 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_2_990_THEN_IF_mac___05FETC___05F_d8002 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh414231)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_1_991_THEN_IF_mac___05FETC___05F_d7998));
    vlTOPp->mkSam__DOT__product___05Fh430046 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8303 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_2_644_THEN_IF_mac___05FETC___05F_d8656 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh445804)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_1_645_THEN_IF_mac___05FETC___05F_d8652));
    vlTOPp->mkSam__DOT__product___05Fh461619 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8957 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_2_298_THEN_IF_mac___05FETC___05F_d9310 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh477251)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_1_299_THEN_IF_mac___05FETC___05F_d9306));
    vlTOPp->mkSam__DOT__product___05Fh493066 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9611 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_2_953_THEN_IF_mac___05FETC___05F_d9965 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh508699)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_1_954_THEN_IF_mac___05FETC___05F_d9961));
    vlTOPp->mkSam__DOT__product___05Fh524514 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10266 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__product___05Fh35825 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_2_50_THEN_IF_mac_ma_ETC___05F_d162) 
                                                  + 
                                                  (0x400U 
                                                   | (0x3f8U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                         << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d467 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51663
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d463);
    vlTOPp->mkSam__DOT__product___05Fh67521 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_2_03_THEN_IF_mac_ma_ETC___05F_d815) 
                                                  + 
                                                  (0x400U 
                                                   | (0x3f8U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                         << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1120 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83359
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1116);
    vlTOPp->mkSam__DOT__product___05Fh98967 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_2_456_THEN_IF_mac___05FETC___05F_d1468) 
                                                  + 
                                                  (0x400U 
                                                   | (0x3f8U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                         << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1773 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114805
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1769);
    vlTOPp->mkSam__DOT__product___05Fh130414 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_2_110_THEN_IF_mac___05FETC___05F_d2122) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2427 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146252
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2423);
    vlTOPp->mkSam__DOT__product___05Fh162035 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_2_763_THEN_IF_mac___05FETC___05F_d2775) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3080 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177873
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3076);
    vlTOPp->mkSam__DOT__product___05Fh193607 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_2_416_THEN_IF_mac___05FETC___05F_d3428) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3733 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209445
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3729);
    vlTOPp->mkSam__DOT__product___05Fh225053 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_2_069_THEN_IF_mac___05FETC___05F_d4081) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4386 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240891
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4382);
    vlTOPp->mkSam__DOT__product___05Fh256500 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_2_723_THEN_IF_mac___05FETC___05F_d4735) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5040 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272338
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5036);
    vlTOPp->mkSam__DOT__product___05Fh288121 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_2_376_THEN_IF_mac___05FETC___05F_d5388) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5693 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303959
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5689);
    vlTOPp->mkSam__DOT__product___05Fh319693 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_2_029_THEN_IF_mac___05FETC___05F_d6041) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6346 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335531
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6342);
    vlTOPp->mkSam__DOT__product___05Fh351139 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_2_682_THEN_IF_mac___05FETC___05F_d6694) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6999 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366977
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6995);
    vlTOPp->mkSam__DOT__product___05Fh382586 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_2_336_THEN_IF_mac___05FETC___05F_d7348) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7653 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398424
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7649);
    vlTOPp->mkSam__DOT__product___05Fh414208 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_2_990_THEN_IF_mac___05FETC___05F_d8002) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8307 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh430046
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8303);
    vlTOPp->mkSam__DOT__product___05Fh445781 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_2_644_THEN_IF_mac___05FETC___05F_d8656) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8961 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461619
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8957);
    vlTOPp->mkSam__DOT__product___05Fh477228 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_2_298_THEN_IF_mac___05FETC___05F_d9310) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9615 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh493066
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9611);
    vlTOPp->mkSam__DOT__product___05Fh508676 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_2_953_THEN_IF_mac___05FETC___05F_d9965) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10270 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524514
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10266);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_3_49_THEN_IF_mac_ma_ETC___05F_d166 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh35825)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_2_50_THEN_IF_mac_ma_ETC___05F_d162));
    vlTOPp->mkSam__DOT__product___05Fh51640 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d467 
                                               + (0x3fff8U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_3_02_THEN_IF_mac_ma_ETC___05F_d819 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh67521)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_2_03_THEN_IF_mac_ma_ETC___05F_d815));
    vlTOPp->mkSam__DOT__product___05Fh83336 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1120 
                                               + (0x3fff8U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_3_455_THEN_IF_mac___05FETC___05F_d1472 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh98967)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_2_456_THEN_IF_mac___05FETC___05F_d1468));
    vlTOPp->mkSam__DOT__product___05Fh114782 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1773 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_3_109_THEN_IF_mac___05FETC___05F_d2126 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh130414)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_2_110_THEN_IF_mac___05FETC___05F_d2122));
    vlTOPp->mkSam__DOT__product___05Fh146229 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2427 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_3_762_THEN_IF_mac___05FETC___05F_d2779 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh162035)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_2_763_THEN_IF_mac___05FETC___05F_d2775));
    vlTOPp->mkSam__DOT__product___05Fh177850 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3080 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_3_415_THEN_IF_mac___05FETC___05F_d3432 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh193607)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_2_416_THEN_IF_mac___05FETC___05F_d3428));
    vlTOPp->mkSam__DOT__product___05Fh209422 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3733 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_3_068_THEN_IF_mac___05FETC___05F_d4085 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh225053)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_2_069_THEN_IF_mac___05FETC___05F_d4081));
    vlTOPp->mkSam__DOT__product___05Fh240868 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4386 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_3_722_THEN_IF_mac___05FETC___05F_d4739 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh256500)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_2_723_THEN_IF_mac___05FETC___05F_d4735));
    vlTOPp->mkSam__DOT__product___05Fh272315 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5040 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_3_375_THEN_IF_mac___05FETC___05F_d5392 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh288121)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_2_376_THEN_IF_mac___05FETC___05F_d5388));
    vlTOPp->mkSam__DOT__product___05Fh303936 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5693 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_3_028_THEN_IF_mac___05FETC___05F_d6045 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh319693)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_2_029_THEN_IF_mac___05FETC___05F_d6041));
    vlTOPp->mkSam__DOT__product___05Fh335508 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6346 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_3_681_THEN_IF_mac___05FETC___05F_d6698 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh351139)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_2_682_THEN_IF_mac___05FETC___05F_d6694));
    vlTOPp->mkSam__DOT__product___05Fh366954 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6999 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_3_335_THEN_IF_mac___05FETC___05F_d7352 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh382586)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_2_336_THEN_IF_mac___05FETC___05F_d7348));
    vlTOPp->mkSam__DOT__product___05Fh398401 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7653 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_3_989_THEN_IF_mac___05FETC___05F_d8006 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh414208)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_2_990_THEN_IF_mac___05FETC___05F_d8002));
    vlTOPp->mkSam__DOT__product___05Fh430023 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8307 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_3_643_THEN_IF_mac___05FETC___05F_d8660 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh445781)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_2_644_THEN_IF_mac___05FETC___05F_d8656));
    vlTOPp->mkSam__DOT__product___05Fh461596 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8961 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_3_297_THEN_IF_mac___05FETC___05F_d9314 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh477228)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_2_298_THEN_IF_mac___05FETC___05F_d9310));
    vlTOPp->mkSam__DOT__product___05Fh493043 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9615 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_3_952_THEN_IF_mac___05FETC___05F_d9969 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh508676)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_2_953_THEN_IF_mac___05FETC___05F_d9965));
    vlTOPp->mkSam__DOT__product___05Fh524491 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10270 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__product___05Fh35802 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_3_49_THEN_IF_mac_ma_ETC___05F_d166) 
                                                  + 
                                                  (0x800U 
                                                   | (0x7f0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                         << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d471 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51640
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d467);
    vlTOPp->mkSam__DOT__product___05Fh67498 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_3_02_THEN_IF_mac_ma_ETC___05F_d819) 
                                                  + 
                                                  (0x800U 
                                                   | (0x7f0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                         << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1124 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83336
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1120);
    vlTOPp->mkSam__DOT__product___05Fh98944 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_3_455_THEN_IF_mac___05FETC___05F_d1472) 
                                                  + 
                                                  (0x800U 
                                                   | (0x7f0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                         << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1777 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114782
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1773);
    vlTOPp->mkSam__DOT__product___05Fh130391 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_3_109_THEN_IF_mac___05FETC___05F_d2126) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2431 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146229
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2427);
    vlTOPp->mkSam__DOT__product___05Fh162012 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_3_762_THEN_IF_mac___05FETC___05F_d2779) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3084 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177850
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3080);
    vlTOPp->mkSam__DOT__product___05Fh193584 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_3_415_THEN_IF_mac___05FETC___05F_d3432) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3737 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209422
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3733);
    vlTOPp->mkSam__DOT__product___05Fh225030 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_3_068_THEN_IF_mac___05FETC___05F_d4085) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4390 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240868
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4386);
    vlTOPp->mkSam__DOT__product___05Fh256477 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_3_722_THEN_IF_mac___05FETC___05F_d4739) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5044 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272315
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5040);
    vlTOPp->mkSam__DOT__product___05Fh288098 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_3_375_THEN_IF_mac___05FETC___05F_d5392) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5697 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303936
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5693);
    vlTOPp->mkSam__DOT__product___05Fh319670 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_3_028_THEN_IF_mac___05FETC___05F_d6045) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6350 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335508
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6346);
    vlTOPp->mkSam__DOT__product___05Fh351116 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_3_681_THEN_IF_mac___05FETC___05F_d6698) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7003 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366954
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d6999);
    vlTOPp->mkSam__DOT__product___05Fh382563 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_3_335_THEN_IF_mac___05FETC___05F_d7352) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7657 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398401
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7653);
    vlTOPp->mkSam__DOT__product___05Fh414185 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_3_989_THEN_IF_mac___05FETC___05F_d8006) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8311 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh430023
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8307);
    vlTOPp->mkSam__DOT__product___05Fh445758 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_3_643_THEN_IF_mac___05FETC___05F_d8660) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8965 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461596
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8961);
    vlTOPp->mkSam__DOT__product___05Fh477205 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_3_297_THEN_IF_mac___05FETC___05F_d9314) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9619 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh493043
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9615);
    vlTOPp->mkSam__DOT__product___05Fh508653 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_3_952_THEN_IF_mac___05FETC___05F_d9969) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10274 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524491
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10270);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_4_48_THEN_IF_mac_ma_ETC___05F_d171 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh35802)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_3_49_THEN_IF_mac_ma_ETC___05F_d166));
    vlTOPp->mkSam__DOT__product___05Fh51617 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d471 
                                               + (0x7fff0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_4_01_THEN_IF_mac_ma_ETC___05F_d824 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh67498)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_3_02_THEN_IF_mac_ma_ETC___05F_d819));
    vlTOPp->mkSam__DOT__product___05Fh83313 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1124 
                                               + (0x7fff0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_4_454_THEN_IF_mac___05FETC___05F_d1477 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh98944)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_3_455_THEN_IF_mac___05FETC___05F_d1472));
    vlTOPp->mkSam__DOT__product___05Fh114759 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1777 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_4_108_THEN_IF_mac___05FETC___05F_d2131 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh130391)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_3_109_THEN_IF_mac___05FETC___05F_d2126));
    vlTOPp->mkSam__DOT__product___05Fh146206 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2431 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_4_761_THEN_IF_mac___05FETC___05F_d2784 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh162012)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_3_762_THEN_IF_mac___05FETC___05F_d2779));
    vlTOPp->mkSam__DOT__product___05Fh177827 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3084 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_4_414_THEN_IF_mac___05FETC___05F_d3437 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh193584)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_3_415_THEN_IF_mac___05FETC___05F_d3432));
    vlTOPp->mkSam__DOT__product___05Fh209399 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3737 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_4_067_THEN_IF_mac___05FETC___05F_d4090 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh225030)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_3_068_THEN_IF_mac___05FETC___05F_d4085));
    vlTOPp->mkSam__DOT__product___05Fh240845 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4390 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_4_721_THEN_IF_mac___05FETC___05F_d4744 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh256477)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_3_722_THEN_IF_mac___05FETC___05F_d4739));
    vlTOPp->mkSam__DOT__product___05Fh272292 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5044 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_4_374_THEN_IF_mac___05FETC___05F_d5397 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh288098)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_3_375_THEN_IF_mac___05FETC___05F_d5392));
    vlTOPp->mkSam__DOT__product___05Fh303913 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5697 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_4_027_THEN_IF_mac___05FETC___05F_d6050 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh319670)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_3_028_THEN_IF_mac___05FETC___05F_d6045));
    vlTOPp->mkSam__DOT__product___05Fh335485 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6350 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_4_680_THEN_IF_mac___05FETC___05F_d6703 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh351116)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_3_681_THEN_IF_mac___05FETC___05F_d6698));
    vlTOPp->mkSam__DOT__product___05Fh366931 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7003 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_4_334_THEN_IF_mac___05FETC___05F_d7357 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh382563)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_3_335_THEN_IF_mac___05FETC___05F_d7352));
    vlTOPp->mkSam__DOT__product___05Fh398378 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7657 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_4_988_THEN_IF_mac___05FETC___05F_d8011 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh414185)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_3_989_THEN_IF_mac___05FETC___05F_d8006));
    vlTOPp->mkSam__DOT__product___05Fh430000 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8311 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_4_642_THEN_IF_mac___05FETC___05F_d8665 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh445758)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_3_643_THEN_IF_mac___05FETC___05F_d8660));
    vlTOPp->mkSam__DOT__product___05Fh461573 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8965 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_4_296_THEN_IF_mac___05FETC___05F_d9319 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh477205)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_3_297_THEN_IF_mac___05FETC___05F_d9314));
    vlTOPp->mkSam__DOT__product___05Fh493020 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9619 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_4_951_THEN_IF_mac___05FETC___05F_d9974 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh508653)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_3_952_THEN_IF_mac___05FETC___05F_d9969));
    vlTOPp->mkSam__DOT__product___05Fh524468 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10274 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__product___05Fh35779 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_4_48_THEN_IF_mac_ma_ETC___05F_d171) 
                                                  + 
                                                  (0x1000U 
                                                   | (0xfe0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                         << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d476 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51617
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d471);
    vlTOPp->mkSam__DOT__product___05Fh67475 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_4_01_THEN_IF_mac_ma_ETC___05F_d824) 
                                                  + 
                                                  (0x1000U 
                                                   | (0xfe0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                         << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1129 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83313
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1124);
    vlTOPp->mkSam__DOT__product___05Fh98921 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_4_454_THEN_IF_mac___05FETC___05F_d1477) 
                                                  + 
                                                  (0x1000U 
                                                   | (0xfe0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                         << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1782 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114759
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1777);
    vlTOPp->mkSam__DOT__product___05Fh130368 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_4_108_THEN_IF_mac___05FETC___05F_d2131) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2436 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146206
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2431);
    vlTOPp->mkSam__DOT__product___05Fh161989 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_4_761_THEN_IF_mac___05FETC___05F_d2784) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3089 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177827
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3084);
    vlTOPp->mkSam__DOT__product___05Fh193561 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_4_414_THEN_IF_mac___05FETC___05F_d3437) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3742 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209399
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3737);
    vlTOPp->mkSam__DOT__product___05Fh225007 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_4_067_THEN_IF_mac___05FETC___05F_d4090) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4395 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240845
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4390);
    vlTOPp->mkSam__DOT__product___05Fh256454 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_4_721_THEN_IF_mac___05FETC___05F_d4744) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5049 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272292
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5044);
    vlTOPp->mkSam__DOT__product___05Fh288075 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_4_374_THEN_IF_mac___05FETC___05F_d5397) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5702 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303913
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5697);
    vlTOPp->mkSam__DOT__product___05Fh319647 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_4_027_THEN_IF_mac___05FETC___05F_d6050) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6355 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335485
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6350);
    vlTOPp->mkSam__DOT__product___05Fh351093 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_4_680_THEN_IF_mac___05FETC___05F_d6703) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7008 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366931
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7003);
    vlTOPp->mkSam__DOT__product___05Fh382540 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_4_334_THEN_IF_mac___05FETC___05F_d7357) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7662 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398378
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7657);
    vlTOPp->mkSam__DOT__product___05Fh414162 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_4_988_THEN_IF_mac___05FETC___05F_d8011) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8316 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh430000
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8311);
    vlTOPp->mkSam__DOT__product___05Fh445735 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_4_642_THEN_IF_mac___05FETC___05F_d8665) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8970 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461573
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8965);
    vlTOPp->mkSam__DOT__product___05Fh477182 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_4_296_THEN_IF_mac___05FETC___05F_d9319) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9624 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh493020
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9619);
    vlTOPp->mkSam__DOT__product___05Fh508630 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_4_951_THEN_IF_mac___05FETC___05F_d9974) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10279 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524468
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10274);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_5_47_THEN_IF_mac_ma_ETC___05F_d176 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh35779)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_4_48_THEN_IF_mac_ma_ETC___05F_d171));
    vlTOPp->mkSam__DOT__product___05Fh51594 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d476 
                                               + (0xfffe0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_5_00_THEN_IF_mac_ma_ETC___05F_d829 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh67475)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_4_01_THEN_IF_mac_ma_ETC___05F_d824));
    vlTOPp->mkSam__DOT__product___05Fh83290 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1129 
                                               + (0xfffe0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_5_453_THEN_IF_mac___05FETC___05F_d1482 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh98921)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_4_454_THEN_IF_mac___05FETC___05F_d1477));
    vlTOPp->mkSam__DOT__product___05Fh114736 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1782 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_5_107_THEN_IF_mac___05FETC___05F_d2136 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh130368)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_4_108_THEN_IF_mac___05FETC___05F_d2131));
    vlTOPp->mkSam__DOT__product___05Fh146183 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2436 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_5_760_THEN_IF_mac___05FETC___05F_d2789 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh161989)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_4_761_THEN_IF_mac___05FETC___05F_d2784));
    vlTOPp->mkSam__DOT__product___05Fh177804 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3089 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_5_413_THEN_IF_mac___05FETC___05F_d3442 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh193561)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_4_414_THEN_IF_mac___05FETC___05F_d3437));
    vlTOPp->mkSam__DOT__product___05Fh209376 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3742 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_5_066_THEN_IF_mac___05FETC___05F_d4095 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh225007)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_4_067_THEN_IF_mac___05FETC___05F_d4090));
    vlTOPp->mkSam__DOT__product___05Fh240822 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4395 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_5_720_THEN_IF_mac___05FETC___05F_d4749 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh256454)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_4_721_THEN_IF_mac___05FETC___05F_d4744));
    vlTOPp->mkSam__DOT__product___05Fh272269 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5049 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_5_373_THEN_IF_mac___05FETC___05F_d5402 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh288075)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_4_374_THEN_IF_mac___05FETC___05F_d5397));
    vlTOPp->mkSam__DOT__product___05Fh303890 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5702 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_5_026_THEN_IF_mac___05FETC___05F_d6055 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh319647)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_4_027_THEN_IF_mac___05FETC___05F_d6050));
    vlTOPp->mkSam__DOT__product___05Fh335462 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6355 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_5_679_THEN_IF_mac___05FETC___05F_d6708 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh351093)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_4_680_THEN_IF_mac___05FETC___05F_d6703));
    vlTOPp->mkSam__DOT__product___05Fh366908 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7008 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_5_333_THEN_IF_mac___05FETC___05F_d7362 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh382540)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_4_334_THEN_IF_mac___05FETC___05F_d7357));
    vlTOPp->mkSam__DOT__product___05Fh398355 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7662 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_5_987_THEN_IF_mac___05FETC___05F_d8016 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh414162)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_4_988_THEN_IF_mac___05FETC___05F_d8011));
    vlTOPp->mkSam__DOT__product___05Fh429977 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8316 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_5_641_THEN_IF_mac___05FETC___05F_d8670 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh445735)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_4_642_THEN_IF_mac___05FETC___05F_d8665));
    vlTOPp->mkSam__DOT__product___05Fh461550 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8970 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_5_295_THEN_IF_mac___05FETC___05F_d9324 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh477182)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_4_296_THEN_IF_mac___05FETC___05F_d9319));
    vlTOPp->mkSam__DOT__product___05Fh492997 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9624 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_5_950_THEN_IF_mac___05FETC___05F_d9979 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh508630)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_4_951_THEN_IF_mac___05FETC___05F_d9974));
    vlTOPp->mkSam__DOT__product___05Fh524445 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10279 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__product___05Fh35756 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_5_47_THEN_IF_mac_ma_ETC___05F_d176) 
                                                  + 
                                                  (0x2000U 
                                                   | (0x1fc0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                         << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d481 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51594
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d476);
    vlTOPp->mkSam__DOT__product___05Fh67452 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_5_00_THEN_IF_mac_ma_ETC___05F_d829) 
                                                  + 
                                                  (0x2000U 
                                                   | (0x1fc0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                         << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1134 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83290
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1129);
    vlTOPp->mkSam__DOT__product___05Fh98898 = (0xffffU 
                                               & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_5_453_THEN_IF_mac___05FETC___05F_d1482) 
                                                  + 
                                                  (0x2000U 
                                                   | (0x1fc0U 
                                                      & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                         << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1787 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114736
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1782);
    vlTOPp->mkSam__DOT__product___05Fh130345 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_5_107_THEN_IF_mac___05FETC___05F_d2136) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2441 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146183
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2436);
    vlTOPp->mkSam__DOT__product___05Fh161966 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_5_760_THEN_IF_mac___05FETC___05F_d2789) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3094 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177804
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3089);
    vlTOPp->mkSam__DOT__product___05Fh193538 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_5_413_THEN_IF_mac___05FETC___05F_d3442) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3747 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209376
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3742);
    vlTOPp->mkSam__DOT__product___05Fh224984 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_5_066_THEN_IF_mac___05FETC___05F_d4095) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4400 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240822
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4395);
    vlTOPp->mkSam__DOT__product___05Fh256431 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_5_720_THEN_IF_mac___05FETC___05F_d4749) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5054 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272269
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5049);
    vlTOPp->mkSam__DOT__product___05Fh288052 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_5_373_THEN_IF_mac___05FETC___05F_d5402) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5707 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303890
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5702);
    vlTOPp->mkSam__DOT__product___05Fh319624 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_5_026_THEN_IF_mac___05FETC___05F_d6055) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6360 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335462
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6355);
    vlTOPp->mkSam__DOT__product___05Fh351070 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_5_679_THEN_IF_mac___05FETC___05F_d6708) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7013 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366908
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7008);
    vlTOPp->mkSam__DOT__product___05Fh382517 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_5_333_THEN_IF_mac___05FETC___05F_d7362) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7667 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398355
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7662);
    vlTOPp->mkSam__DOT__product___05Fh414139 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_5_987_THEN_IF_mac___05FETC___05F_d8016) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8321 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429977
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8316);
    vlTOPp->mkSam__DOT__product___05Fh445712 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_5_641_THEN_IF_mac___05FETC___05F_d8670) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8975 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461550
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8970);
    vlTOPp->mkSam__DOT__product___05Fh477159 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_5_295_THEN_IF_mac___05FETC___05F_d9324) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9629 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492997
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9624);
    vlTOPp->mkSam__DOT__product___05Fh508607 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_5_950_THEN_IF_mac___05FETC___05F_d9979) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10284 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524445
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10279);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ma_ETC___05F_d187 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh35756)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_5_47_THEN_IF_mac_ma_ETC___05F_d176)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh51571 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d481 
                                               + (0x1fffc0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ma_ETC___05F_d840 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh67452)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_5_00_THEN_IF_mac_ma_ETC___05F_d829)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh83267 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1134 
                                               + (0x1fffc0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_mac___05FETC___05F_d1493 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh98898)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_5_453_THEN_IF_mac___05FETC___05F_d1482)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh114713 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1787 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_mac___05FETC___05F_d2147 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh130345)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_5_107_THEN_IF_mac___05FETC___05F_d2136)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh146160 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2441 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_mac___05FETC___05F_d2800 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh161966)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_5_760_THEN_IF_mac___05FETC___05F_d2789)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh177781 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3094 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_mac___05FETC___05F_d3453 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh193538)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_5_413_THEN_IF_mac___05FETC___05F_d3442)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh209353 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3747 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_mac___05FETC___05F_d4106 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh224984)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_5_066_THEN_IF_mac___05FETC___05F_d4095)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh240799 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4400 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_mac___05FETC___05F_d4760 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh256431)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_5_720_THEN_IF_mac___05FETC___05F_d4749)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh272246 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5054 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_mac___05FETC___05F_d5413 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh288052)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_5_373_THEN_IF_mac___05FETC___05F_d5402)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh303867 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5707 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_mac___05FETC___05F_d6066 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh319624)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_5_026_THEN_IF_mac___05FETC___05F_d6055)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh335439 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6360 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_mac___05FETC___05F_d6719 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh351070)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_5_679_THEN_IF_mac___05FETC___05F_d6708)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh366885 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7013 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_mac___05FETC___05F_d7373 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh382517)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_5_333_THEN_IF_mac___05FETC___05F_d7362)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh398332 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7667 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_mac___05FETC___05F_d8027 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh414139)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_5_987_THEN_IF_mac___05FETC___05F_d8016)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh429954 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8321 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_mac___05FETC___05F_d8681 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh445712)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_5_641_THEN_IF_mac___05FETC___05F_d8670)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh461527 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8975 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_mac___05FETC___05F_d9335 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh477159)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_5_295_THEN_IF_mac___05FETC___05F_d9324)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh492974 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9629 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_mac___05FETC___05F_d9990 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh508607)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_5_950_THEN_IF_mac___05FETC___05F_d9979)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh524422 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10284 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__result_exp___05Fh34675 = ((0x8000U 
                                                   & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ma_ETC___05F_d187))
                                                   ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh35947)
                                                   : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34671));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh35946 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ma_ETC___05F_d187) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh35968 = (0xfffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ma_ETC___05F_d187) 
                                                      << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d487 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51571
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d481);
    vlTOPp->mkSam__DOT__result_exp___05Fh66371 = ((0x8000U 
                                                   & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ma_ETC___05F_d840))
                                                   ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh67643)
                                                   : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66367));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh67642 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ma_ETC___05F_d840) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh67664 = (0xfffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ma_ETC___05F_d840) 
                                                      << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1140 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83267
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1134);
    vlTOPp->mkSam__DOT__result_exp___05Fh97817 = ((0x8000U 
                                                   & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_mac___05FETC___05F_d1493))
                                                   ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh99089)
                                                   : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97813));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh99088 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_mac___05FETC___05F_d1493) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh99110 = (0xfffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_mac___05FETC___05F_d1493) 
                                                      << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1793 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114713
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1787);
    vlTOPp->mkSam__DOT__result_exp___05Fh129264 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_mac___05FETC___05F_d2147))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh130536)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129260));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh130535 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_mac___05FETC___05F_d2147) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh130557 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_mac___05FETC___05F_d2147) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2447 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146160
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2441);
    vlTOPp->mkSam__DOT__result_exp___05Fh160885 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_mac___05FETC___05F_d2800))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh162157)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160881));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh162156 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_mac___05FETC___05F_d2800) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh162178 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_mac___05FETC___05F_d2800) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3100 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177781
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3094);
    vlTOPp->mkSam__DOT__result_exp___05Fh192457 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_mac___05FETC___05F_d3453))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh193729)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192453));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh193728 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_mac___05FETC___05F_d3453) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh193750 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_mac___05FETC___05F_d3453) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3753 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209353
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3747);
    vlTOPp->mkSam__DOT__result_exp___05Fh223903 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_mac___05FETC___05F_d4106))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh225175)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223899));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh225174 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_mac___05FETC___05F_d4106) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh225196 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_mac___05FETC___05F_d4106) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4406 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240799
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4400);
    vlTOPp->mkSam__DOT__result_exp___05Fh255350 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_mac___05FETC___05F_d4760))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh256622)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255346));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh256621 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_mac___05FETC___05F_d4760) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh256643 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_mac___05FETC___05F_d4760) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5060 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272246
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5054);
    vlTOPp->mkSam__DOT__result_exp___05Fh286971 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_mac___05FETC___05F_d5413))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh288243)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286967));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh288242 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_mac___05FETC___05F_d5413) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh288264 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_mac___05FETC___05F_d5413) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5713 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303867
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5707);
    vlTOPp->mkSam__DOT__result_exp___05Fh318543 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_mac___05FETC___05F_d6066))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh319815)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318539));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh319814 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_mac___05FETC___05F_d6066) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh319836 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_mac___05FETC___05F_d6066) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6366 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335439
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6360);
    vlTOPp->mkSam__DOT__result_exp___05Fh349989 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_mac___05FETC___05F_d6719))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh351261)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349985));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh351260 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_mac___05FETC___05F_d6719) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh351282 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_mac___05FETC___05F_d6719) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7019 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366885
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7013);
    vlTOPp->mkSam__DOT__result_exp___05Fh381436 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_mac___05FETC___05F_d7373))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh382708)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381432));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh382707 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_mac___05FETC___05F_d7373) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh382729 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_mac___05FETC___05F_d7373) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7673 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398332
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7667);
    vlTOPp->mkSam__DOT__result_exp___05Fh413058 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_mac___05FETC___05F_d8027))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh414330)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413054));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh414329 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_mac___05FETC___05F_d8027) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh414351 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_mac___05FETC___05F_d8027) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8327 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429954
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8321);
    vlTOPp->mkSam__DOT__result_exp___05Fh444631 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_mac___05FETC___05F_d8681))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh445903)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444627));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh445902 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_mac___05FETC___05F_d8681) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh445924 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_mac___05FETC___05F_d8681) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8981 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461527
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8975);
    vlTOPp->mkSam__DOT__result_exp___05Fh476078 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_mac___05FETC___05F_d9335))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh477350)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476074));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh477349 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_mac___05FETC___05F_d9335) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh477371 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_mac___05FETC___05F_d9335) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9635 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492974
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9629);
    vlTOPp->mkSam__DOT__result_exp___05Fh507526 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_mac___05FETC___05F_d9990))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh508798)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507522));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh508797 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_mac___05FETC___05F_d9990) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh508819 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_mac___05FETC___05F_d9990) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10290 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524422
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10284);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh36111 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34675)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ma_ETC___05F_d187))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh35946)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh35968));
    vlTOPp->mkSam__DOT__product___05Fh51548 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d487 
                                               + (0x3fff80U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh67807 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66371)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ma_ETC___05F_d840))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh67642)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh67664));
    vlTOPp->mkSam__DOT__product___05Fh83244 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1140 
                                               + (0x3fff80U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh99253 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97817)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_mac___05FETC___05F_d1493))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh99088)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh99110));
    vlTOPp->mkSam__DOT__product___05Fh114690 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1793 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh130700 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129264)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_mac___05FETC___05F_d2147))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh130535)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh130557));
    vlTOPp->mkSam__DOT__product___05Fh146137 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2447 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh162321 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160885)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_mac___05FETC___05F_d2800))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh162156)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh162178));
    vlTOPp->mkSam__DOT__product___05Fh177758 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3100 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh193893 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192457)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_mac___05FETC___05F_d3453))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh193728)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh193750));
    vlTOPp->mkSam__DOT__product___05Fh209330 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3753 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh225339 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223903)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_mac___05FETC___05F_d4106))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh225174)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh225196));
    vlTOPp->mkSam__DOT__product___05Fh240776 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4406 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh256786 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255350)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_mac___05FETC___05F_d4760))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh256621)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh256643));
    vlTOPp->mkSam__DOT__product___05Fh272223 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5060 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh288407 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286971)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_mac___05FETC___05F_d5413))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh288242)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh288264));
    vlTOPp->mkSam__DOT__product___05Fh303844 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5713 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh319979 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318543)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_mac___05FETC___05F_d6066))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh319814)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh319836));
    vlTOPp->mkSam__DOT__product___05Fh335416 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6366 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh351425 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349989)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_mac___05FETC___05F_d6719))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh351260)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh351282));
    vlTOPp->mkSam__DOT__product___05Fh366862 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7019 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh382872 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381436)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_mac___05FETC___05F_d7373))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh382707)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh382729));
    vlTOPp->mkSam__DOT__product___05Fh398309 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7673 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh414494 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413058)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_mac___05FETC___05F_d8027))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh414329)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh414351));
    vlTOPp->mkSam__DOT__product___05Fh429931 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8327 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh446067 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444631)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_mac___05FETC___05F_d8681))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh445902)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh445924));
    vlTOPp->mkSam__DOT__product___05Fh461504 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8981 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh477514 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476078)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_mac___05FETC___05F_d9335))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh477349)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh477371));
    vlTOPp->mkSam__DOT__product___05Fh492951 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9635 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh508962 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507526)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_mac___05FETC___05F_d9990))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh508797)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh508819));
    vlTOPp->mkSam__DOT__product___05Fh524399 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10290 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh36062 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d493 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51548
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d487);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh67758 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1146 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83244
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1140);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh99204 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1799 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114690
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1793);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh130651 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2453 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146137
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2447);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh162272 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3106 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177758
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3100);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh193844 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3759 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209330
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3753);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh225290 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4412 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240776
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4406);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh256737 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5066 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272223
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5060);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh288358 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5719 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303844
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5713);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh319930 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6372 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335416
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6366);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh351376 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7025 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366862
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7019);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh382823 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7679 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398309
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7673);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh414445 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8333 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429931
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8327);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh446018 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8987 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461504
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8981);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh477465 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9641 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492951
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9635);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh508913 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10296 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524399
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10290);
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_TH_ETC___05F_d203 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh36062)));
    vlTOPp->mkSam__DOT__product___05Fh51525 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d493 
                                               + (0x7fff00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_TH_ETC___05F_d856 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh67758)));
    vlTOPp->mkSam__DOT__product___05Fh83221 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1146 
                                               + (0x7fff00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_2_b_449_BIT_6_452___05FETC___05F_d1509 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh99204)));
    vlTOPp->mkSam__DOT__product___05Fh114667 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1799 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_3_b_103_BIT_6_106___05FETC___05F_d2163 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh130651)));
    vlTOPp->mkSam__DOT__product___05Fh146114 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2453 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_0_b_756_BIT_6_759___05FETC___05F_d2816 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh162272)));
    vlTOPp->mkSam__DOT__product___05Fh177735 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3106 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_1_b_409_BIT_6_412___05FETC___05F_d3469 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh193844)));
    vlTOPp->mkSam__DOT__product___05Fh209307 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3759 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_2_b_062_BIT_6_065___05FETC___05F_d4122 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh225290)));
    vlTOPp->mkSam__DOT__product___05Fh240753 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4412 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_3_b_716_BIT_6_719___05FETC___05F_d4776 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh256737)));
    vlTOPp->mkSam__DOT__product___05Fh272200 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5066 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_0_b_369_BIT_6_372___05FETC___05F_d5429 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh288358)));
    vlTOPp->mkSam__DOT__product___05Fh303821 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5719 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_1_b_022_BIT_6_025___05FETC___05F_d6082 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh319930)));
    vlTOPp->mkSam__DOT__product___05Fh335393 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6372 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_2_b_675_BIT_6_678___05FETC___05F_d6735 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh351376)));
    vlTOPp->mkSam__DOT__product___05Fh366839 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7025 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_3_b_329_BIT_6_332___05FETC___05F_d7389 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh382823)));
    vlTOPp->mkSam__DOT__product___05Fh398286 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7679 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_0_b_983_BIT_6_986___05FETC___05F_d8043 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh414445)));
    vlTOPp->mkSam__DOT__product___05Fh429908 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8333 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_1_b_637_BIT_6_640___05FETC___05F_d8697 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh446018)));
    vlTOPp->mkSam__DOT__product___05Fh461481 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8987 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_2_b_291_BIT_6_294___05FETC___05F_d9351 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh477465)));
    vlTOPp->mkSam__DOT__product___05Fh492928 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9641 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_3_b_946_BIT_6_949___05FETC___05F_d10006 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh508913)));
    vlTOPp->mkSam__DOT__product___05Fh524376 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10296 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh36058 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_TH_ETC___05F_d203)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh36066 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_TH_ETC___05F_d203))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh36111)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34675));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d500 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51525
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d493);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh67754 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_TH_ETC___05F_d856)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh67762 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_TH_ETC___05F_d856))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh67807)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66371));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1153 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83221
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1146);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh99200 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_2_b_449_BIT_6_452___05FETC___05F_d1509)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh99208 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_2_b_449_BIT_6_452___05FETC___05F_d1509))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh99253)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97817));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1806 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114667
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1799);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh130647 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_3_b_103_BIT_6_106___05FETC___05F_d2163)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh130655 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_3_b_103_BIT_6_106___05FETC___05F_d2163))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh130700)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129264));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2460 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146114
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2453);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh162268 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_0_b_756_BIT_6_759___05FETC___05F_d2816)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh162276 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_0_b_756_BIT_6_759___05FETC___05F_d2816))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh162321)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160885));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3113 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177735
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3106);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh193840 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_1_b_409_BIT_6_412___05FETC___05F_d3469)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh193848 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_1_b_409_BIT_6_412___05FETC___05F_d3469))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh193893)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192457));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3766 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209307
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3759);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh225286 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_2_b_062_BIT_6_065___05FETC___05F_d4122)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh225294 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_2_b_062_BIT_6_065___05FETC___05F_d4122))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh225339)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223903));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4419 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240753
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4412);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh256733 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_3_b_716_BIT_6_719___05FETC___05F_d4776)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh256741 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_3_b_716_BIT_6_719___05FETC___05F_d4776))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh256786)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255350));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5073 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272200
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5066);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh288354 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_0_b_369_BIT_6_372___05FETC___05F_d5429)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh288362 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_0_b_369_BIT_6_372___05FETC___05F_d5429))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh288407)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286971));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5726 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303821
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5719);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh319926 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_1_b_022_BIT_6_025___05FETC___05F_d6082)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh319934 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_1_b_022_BIT_6_025___05FETC___05F_d6082))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh319979)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318543));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6379 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335393
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6372);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh351372 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_2_b_675_BIT_6_678___05FETC___05F_d6735)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh351380 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_2_b_675_BIT_6_678___05FETC___05F_d6735))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh351425)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349989));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7032 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366839
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7025);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh382819 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_3_b_329_BIT_6_332___05FETC___05F_d7389)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh382827 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_3_b_329_BIT_6_332___05FETC___05F_d7389))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh382872)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381436));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7686 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398286
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7679);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh414441 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_0_b_983_BIT_6_986___05FETC___05F_d8043)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh414449 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_0_b_983_BIT_6_986___05FETC___05F_d8043))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh414494)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413058));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8340 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429908
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8333);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh446014 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_1_b_637_BIT_6_640___05FETC___05F_d8697)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh446022 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_1_b_637_BIT_6_640___05FETC___05F_d8697))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh446067)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444631));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8994 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461481
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8987);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh477461 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_2_b_291_BIT_6_294___05FETC___05F_d9351)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh477469 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_2_b_291_BIT_6_294___05FETC___05F_d9351))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh477514)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476078));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9648 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492928
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9641);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh508909 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_3_b_946_BIT_6_949___05FETC___05F_d10006)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh508917 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_3_b_946_BIT_6_949___05FETC___05F_d10006))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh508962)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507526));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10303 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524376
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10296);
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh34681 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh36058) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh34680 = ((1U 
                                                   & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193) 
                                                       >> 8U) 
                                                      & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193) 
                                                          >> 9U) 
                                                         | (0U 
                                                            != 
                                                            (0xffU 
                                                             & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF_mac_ETC___05F_d193))))))
                                                   ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh36066)
                                                   : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34675));
    vlTOPp->mkSam__DOT__product___05Fh51502 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d500 
                                               + (0xfffe00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh66377 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh67754) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh66376 = ((1U 
                                                   & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846) 
                                                       >> 8U) 
                                                      & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846) 
                                                          >> 9U) 
                                                         | (0U 
                                                            != 
                                                            (0xffU 
                                                             & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF_mac_ETC___05F_d846))))))
                                                   ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh67762)
                                                   : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66371));
    vlTOPp->mkSam__DOT__product___05Fh83198 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1153 
                                               + (0xfffe00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh97823 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh99200) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh97822 = ((1U 
                                                   & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499) 
                                                       >> 8U) 
                                                      & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499) 
                                                          >> 9U) 
                                                         | (0U 
                                                            != 
                                                            (0xffU 
                                                             & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_IF_m_ETC___05F_d1499))))))
                                                   ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh99208)
                                                   : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97817));
    vlTOPp->mkSam__DOT__product___05Fh114644 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1806 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh129270 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh130647) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh129269 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_IF_m_ETC___05F_d2153))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh130655)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129264));
    vlTOPp->mkSam__DOT__product___05Fh146091 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2460 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh160891 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh162268) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh160890 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_IF_m_ETC___05F_d2806))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh162276)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160885));
    vlTOPp->mkSam__DOT__product___05Fh177712 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3113 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh192463 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh193840) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh192462 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_IF_m_ETC___05F_d3459))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh193848)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192457));
    vlTOPp->mkSam__DOT__product___05Fh209284 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3766 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh223909 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh225286) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh223908 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_IF_m_ETC___05F_d4112))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh225294)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223903));
    vlTOPp->mkSam__DOT__product___05Fh240730 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4419 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh255356 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh256733) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh255355 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_IF_m_ETC___05F_d4766))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh256741)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255350));
    vlTOPp->mkSam__DOT__product___05Fh272177 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5073 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh286977 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh288354) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh286976 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_IF_m_ETC___05F_d5419))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh288362)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286971));
    vlTOPp->mkSam__DOT__product___05Fh303798 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5726 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh318549 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh319926) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh318548 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_IF_m_ETC___05F_d6072))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh319934)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318543));
    vlTOPp->mkSam__DOT__product___05Fh335370 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6379 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh349995 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh351372) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh349994 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_IF_m_ETC___05F_d6725))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh351380)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349989));
    vlTOPp->mkSam__DOT__product___05Fh366816 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7032 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh381442 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh382819) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh381441 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_IF_m_ETC___05F_d7379))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh382827)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381436));
    vlTOPp->mkSam__DOT__product___05Fh398263 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7686 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh413064 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh414441) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh413063 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_IF_m_ETC___05F_d8033))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh414449)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413058));
    vlTOPp->mkSam__DOT__product___05Fh429885 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8340 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh444637 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh446014) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh444636 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_IF_m_ETC___05F_d8687))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh446022)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444631));
    vlTOPp->mkSam__DOT__product___05Fh461458 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8994 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh476084 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh477461) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh476083 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_IF_m_ETC___05F_d9341))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh477469)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476078));
    vlTOPp->mkSam__DOT__product___05Fh492905 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9648 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh507532 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh508909) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh507531 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_IF_m_ETC___05F_d9996))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh508917)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507526));
    vlTOPp->mkSam__DOT__product___05Fh524353 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10303 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF___05FETC___05F_d216 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34680) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh36369 = (0xffU 
                                                 & ((vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                                                     >> 0x17U) 
                                                    - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34680)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh36444 = (0xffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34680) 
                                                    - 
                                                    (vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                                                     >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d507 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51502
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d500);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF___05FETC___05F_d869 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66376) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh68065 = (0xffU 
                                                 & ((vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                                                     >> 0x17U) 
                                                    - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66376)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh68140 = (0xffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66376) 
                                                    - 
                                                    (vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                                                     >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1160 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83198
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1153);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_I_ETC___05F_d1522 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97822) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh99511 = (0xffU 
                                                 & ((vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                                                     >> 0x17U) 
                                                    - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97822)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh99586 = (0xffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97822) 
                                                    - 
                                                    (vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                                                     >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1813 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114644
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1806);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_I_ETC___05F_d2176 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129269) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh130958 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129269)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh131033 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129269) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2467 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146091
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2460);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_I_ETC___05F_d2829 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160890) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh162579 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160890)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh162654 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160890) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3120 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177712
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3113);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_I_ETC___05F_d3482 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192462) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh194151 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192462)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh194226 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192462) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3773 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209284
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3766);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_I_ETC___05F_d4135 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223908) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh225597 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223908)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh225672 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223908) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4426 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240730
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4419);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_I_ETC___05F_d4789 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255355) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh257044 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255355)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh257119 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255355) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5080 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272177
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5073);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_I_ETC___05F_d5442 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286976) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh288665 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286976)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh288740 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286976) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5733 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303798
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5726);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_I_ETC___05F_d6095 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318548) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh320237 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318548)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh320312 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318548) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6386 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335370
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6379);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_I_ETC___05F_d6748 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349994) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh351683 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349994)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh351758 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349994) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7039 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366816
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7032);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_I_ETC___05F_d7402 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381441) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh383130 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381441)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh383205 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381441) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7693 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398263
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7686);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_I_ETC___05F_d8056 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413063) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh414752 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413063)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh414827 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413063) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8347 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429885
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8340);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_I_ETC___05F_d8710 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444636) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh446325 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444636)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh446400 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444636) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9001 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461458
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d8994);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_I_ETC___05F_d9364 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476083) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh477772 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476083)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh477847 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476083) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9655 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492905
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9648);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_I_ETC___05F_d10019 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507531) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh509220 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507531)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh509295 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507531) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10310 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524353
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10303);
    vlTOPp->mkSam__DOT__result_exp___05Fh34684 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF___05FETC___05F_d216)
                                                      ? 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                                                      >> 0x17U)
                                                      : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34680)));
    vlTOPp->mkSam__DOT__i___05Fh42427 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh36369) 
                                                  - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh36371 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh36369))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh34681 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh36369)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh42412 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh36444) 
                                                  - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh36446 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh36444))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh34682 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh36444)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh51479 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d507 
                                               + (0x1fffc00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh66380 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF___05FETC___05F_d869)
                                                      ? 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                                                      >> 0x17U)
                                                      : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66376)));
    vlTOPp->mkSam__DOT__i___05Fh74123 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh68065) 
                                                  - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh68067 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh68065))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh66377 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh68065)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh74108 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh68140) 
                                                  - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh68142 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh68140))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh66378 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh68140)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh83175 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1160 
                                               + (0x1fffc00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh97826 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_I_ETC___05F_d1522)
                                                      ? 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                                                      >> 0x17U)
                                                      : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97822)));
    vlTOPp->mkSam__DOT__i___05Fh105569 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh99511) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh99513 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh99511))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh97823 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh99511)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh105554 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh99586) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh99588 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh99586))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh97824 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh99586)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh114621 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1813 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh129273 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_I_ETC___05F_d2176)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129269)));
    vlTOPp->mkSam__DOT__i___05Fh137016 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh130958) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh130960 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh130958))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh129270 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh130958)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh137001 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh131033) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh131035 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh131033))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh129271 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh131033)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh146068 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2467 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh160894 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_I_ETC___05F_d2829)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160890)));
    vlTOPp->mkSam__DOT__i___05Fh168637 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh162579) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh162581 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh162579))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh160891 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh162579)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh168622 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh162654) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh162656 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh162654))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh160892 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh162654)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh177689 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3120 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh192466 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_I_ETC___05F_d3482)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192462)));
    vlTOPp->mkSam__DOT__i___05Fh200209 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh194151) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh194153 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh194151))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh192463 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh194151)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh200194 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh194226) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh194228 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh194226))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh192464 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh194226)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh209261 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3773 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh223912 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_I_ETC___05F_d4135)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223908)));
    vlTOPp->mkSam__DOT__i___05Fh231655 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh225597) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh225599 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh225597))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh223909 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh225597)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh231640 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh225672) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh225674 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh225672))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh223910 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh225672)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh240707 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4426 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh255359 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_I_ETC___05F_d4789)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255355)));
    vlTOPp->mkSam__DOT__i___05Fh263102 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh257044) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh257046 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh257044))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh255356 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh257044)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh263087 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh257119) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh257121 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh257119))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh255357 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh257119)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh272154 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5080 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh286980 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_I_ETC___05F_d5442)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286976)));
    vlTOPp->mkSam__DOT__i___05Fh294723 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh288665) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh288667 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh288665))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh286977 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh288665)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh294708 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh288740) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh288742 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh288740))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh286978 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh288740)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh303775 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5733 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh318552 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_I_ETC___05F_d6095)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318548)));
    vlTOPp->mkSam__DOT__i___05Fh326295 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh320237) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh320239 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh320237))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh318549 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh320237)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh326280 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh320312) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh320314 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh320312))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh318550 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh320312)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh335347 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6386 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh349998 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_I_ETC___05F_d6748)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349994)));
    vlTOPp->mkSam__DOT__i___05Fh357741 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh351683) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh351685 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh351683))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh349995 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh351683)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh357726 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh351758) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh351760 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh351758))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh349996 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh351758)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh366793 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7039 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh381445 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_I_ETC___05F_d7402)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381441)));
    vlTOPp->mkSam__DOT__i___05Fh389188 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh383130) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh383132 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh383130))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh381442 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh383130)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh389173 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh383205) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh383207 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh383205))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh381443 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh383205)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh398240 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7693 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh413067 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_I_ETC___05F_d8056)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413063)));
    vlTOPp->mkSam__DOT__i___05Fh420810 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh414752) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh414754 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh414752))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh413064 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh414752)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh420795 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh414827) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh414829 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh414827))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh413065 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh414827)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh429862 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8347 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh444640 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_I_ETC___05F_d8710)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444636)));
    vlTOPp->mkSam__DOT__i___05Fh452383 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh446325) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh446327 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh446325))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh444637 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh446325)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh452368 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh446400) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh446402 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh446400))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh444638 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh446400)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh461435 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9001 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh476087 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_I_ETC___05F_d9364)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476083)));
    vlTOPp->mkSam__DOT__i___05Fh483830 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh477772) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh477774 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh477772))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh476084 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh477772)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh483815 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh477847) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh477849 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh477847))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh476085 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh477847)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh492882 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9655 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh507535 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_I_ETC___05F_d10019)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507531)));
    vlTOPp->mkSam__DOT__i___05Fh515278 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh509220) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh509222 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh509220))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh507532 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh509220)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh515263 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh509295) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh509297 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh509295))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh507533 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh509295)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh524330 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10310 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh42349 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh34684)));
    vlTOPp->mkSam__DOT__round_flag___05Fh36370 = ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__i___05Fh42427))) 
                                                  & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh34681 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->mkSam__DOT__i___05Fh42427))));
    vlTOPp->mkSam__DOT__x___05Fh35482 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF___05FETC___05F_d216)
                                          ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh36371
                                          : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh34681);
    vlTOPp->mkSam__DOT__round_flag___05Fh36445 = ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__i___05Fh42412))) 
                                                  & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh34682 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->mkSam__DOT__i___05Fh42412))));
    vlTOPp->mkSam__DOT__x___05Fh36441 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF___05FETC___05F_d216)
                                          ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh34682
                                          : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh36446);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d515 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51479
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d507);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh74045 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh66380)));
    vlTOPp->mkSam__DOT__round_flag___05Fh68066 = ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__i___05Fh74123))) 
                                                  & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh66377 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->mkSam__DOT__i___05Fh74123))));
    vlTOPp->mkSam__DOT__x___05Fh67178 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF___05FETC___05F_d869)
                                          ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh68067
                                          : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh66377);
    vlTOPp->mkSam__DOT__round_flag___05Fh68141 = ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__i___05Fh74108))) 
                                                  & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh66378 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->mkSam__DOT__i___05Fh74108))));
    vlTOPp->mkSam__DOT__x___05Fh68137 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF___05FETC___05F_d869)
                                          ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh66378
                                          : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh68142);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1168 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83175
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1160);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh105491 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh97826)));
    vlTOPp->mkSam__DOT__round_flag___05Fh99512 = ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__i___05Fh105569))) 
                                                  & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh97823 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->mkSam__DOT__i___05Fh105569))));
    vlTOPp->mkSam__DOT__x___05Fh98624 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_I_ETC___05F_d1522)
                                          ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh99513
                                          : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh97823);
    vlTOPp->mkSam__DOT__round_flag___05Fh99587 = ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__i___05Fh105554))) 
                                                  & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh97824 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->mkSam__DOT__i___05Fh105554))));
    vlTOPp->mkSam__DOT__x___05Fh99583 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_I_ETC___05F_d1522)
                                          ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh97824
                                          : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh99588);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1821 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114621
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1813);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh136938 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh129273)));
    vlTOPp->mkSam__DOT__round_flag___05Fh130959 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh137016))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh129270 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh137016))));
    vlTOPp->mkSam__DOT__x___05Fh130071 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_I_ETC___05F_d2176)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh130960
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh129270);
    vlTOPp->mkSam__DOT__round_flag___05Fh131034 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh137001))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh129271 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh137001))));
    vlTOPp->mkSam__DOT__x___05Fh131030 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_I_ETC___05F_d2176)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh129271
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh131035);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2475 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146068
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2467);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh168559 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh160894)));
    vlTOPp->mkSam__DOT__round_flag___05Fh162580 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh168637))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh160891 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh168637))));
    vlTOPp->mkSam__DOT__x___05Fh161692 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_I_ETC___05F_d2829)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh162581
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh160891);
    vlTOPp->mkSam__DOT__round_flag___05Fh162655 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh168622))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh160892 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh168622))));
    vlTOPp->mkSam__DOT__x___05Fh162651 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_I_ETC___05F_d2829)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh160892
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh162656);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3128 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177689
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3120);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh200131 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh192466)));
    vlTOPp->mkSam__DOT__round_flag___05Fh194152 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh200209))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh192463 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh200209))));
    vlTOPp->mkSam__DOT__x___05Fh193264 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_I_ETC___05F_d3482)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh194153
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh192463);
    vlTOPp->mkSam__DOT__round_flag___05Fh194227 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh200194))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh192464 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh200194))));
    vlTOPp->mkSam__DOT__x___05Fh194223 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_I_ETC___05F_d3482)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh192464
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh194228);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3781 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209261
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3773);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh231577 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh223912)));
    vlTOPp->mkSam__DOT__round_flag___05Fh225598 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh231655))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh223909 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh231655))));
    vlTOPp->mkSam__DOT__x___05Fh224710 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_I_ETC___05F_d4135)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh225599
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh223909);
    vlTOPp->mkSam__DOT__round_flag___05Fh225673 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh231640))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh223910 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh231640))));
    vlTOPp->mkSam__DOT__x___05Fh225669 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_I_ETC___05F_d4135)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh223910
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh225674);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4434 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240707
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4426);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh263024 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh255359)));
    vlTOPp->mkSam__DOT__round_flag___05Fh257045 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh263102))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh255356 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh263102))));
    vlTOPp->mkSam__DOT__x___05Fh256157 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_I_ETC___05F_d4789)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh257046
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh255356);
    vlTOPp->mkSam__DOT__round_flag___05Fh257120 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh263087))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh255357 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh263087))));
    vlTOPp->mkSam__DOT__x___05Fh257116 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_I_ETC___05F_d4789)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh255357
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh257121);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5088 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272154
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5080);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh294645 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh286980)));
    vlTOPp->mkSam__DOT__round_flag___05Fh288666 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh294723))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh286977 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh294723))));
    vlTOPp->mkSam__DOT__x___05Fh287778 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_I_ETC___05F_d5442)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh288667
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh286977);
    vlTOPp->mkSam__DOT__round_flag___05Fh288741 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh294708))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh286978 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh294708))));
    vlTOPp->mkSam__DOT__x___05Fh288737 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_I_ETC___05F_d5442)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh286978
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh288742);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5741 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303775
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5733);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh326217 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh318552)));
    vlTOPp->mkSam__DOT__round_flag___05Fh320238 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh326295))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh318549 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh326295))));
    vlTOPp->mkSam__DOT__x___05Fh319350 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_I_ETC___05F_d6095)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh320239
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh318549);
    vlTOPp->mkSam__DOT__round_flag___05Fh320313 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh326280))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh318550 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh326280))));
    vlTOPp->mkSam__DOT__x___05Fh320309 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_I_ETC___05F_d6095)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh318550
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh320314);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6394 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335347
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6386);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh357663 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh349998)));
    vlTOPp->mkSam__DOT__round_flag___05Fh351684 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh357741))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh349995 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh357741))));
    vlTOPp->mkSam__DOT__x___05Fh350796 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_I_ETC___05F_d6748)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh351685
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh349995);
    vlTOPp->mkSam__DOT__round_flag___05Fh351759 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh357726))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh349996 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh357726))));
    vlTOPp->mkSam__DOT__x___05Fh351755 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_I_ETC___05F_d6748)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh349996
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh351760);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7047 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366793
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7039);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh389110 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh381445)));
    vlTOPp->mkSam__DOT__round_flag___05Fh383131 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh389188))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh381442 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh389188))));
    vlTOPp->mkSam__DOT__x___05Fh382243 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_I_ETC___05F_d7402)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh383132
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh381442);
    vlTOPp->mkSam__DOT__round_flag___05Fh383206 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh389173))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh381443 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh389173))));
    vlTOPp->mkSam__DOT__x___05Fh383202 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_I_ETC___05F_d7402)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh381443
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh383207);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7701 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398240
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7693);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh420732 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh413067)));
    vlTOPp->mkSam__DOT__round_flag___05Fh414753 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh420810))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh413064 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh420810))));
    vlTOPp->mkSam__DOT__x___05Fh413865 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_I_ETC___05F_d8056)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh414754
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh413064);
    vlTOPp->mkSam__DOT__round_flag___05Fh414828 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh420795))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh413065 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh420795))));
    vlTOPp->mkSam__DOT__x___05Fh414824 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_I_ETC___05F_d8056)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh413065
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh414829);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8355 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429862
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8347);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh452305 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh444640)));
    vlTOPp->mkSam__DOT__round_flag___05Fh446326 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh452383))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh444637 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh452383))));
    vlTOPp->mkSam__DOT__x___05Fh445438 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_I_ETC___05F_d8710)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh446327
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh444637);
    vlTOPp->mkSam__DOT__round_flag___05Fh446401 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh452368))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh444638 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh452368))));
    vlTOPp->mkSam__DOT__x___05Fh446397 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_I_ETC___05F_d8710)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh444638
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh446402);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9009 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461435
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9001);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh483752 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh476087)));
    vlTOPp->mkSam__DOT__round_flag___05Fh477773 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh483830))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh476084 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh483830))));
    vlTOPp->mkSam__DOT__x___05Fh476885 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_I_ETC___05F_d9364)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh477774
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh476084);
    vlTOPp->mkSam__DOT__round_flag___05Fh477848 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh483815))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh476085 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh483815))));
    vlTOPp->mkSam__DOT__x___05Fh477844 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_I_ETC___05F_d9364)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh476085
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh477849);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9663 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492882
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9655);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh515200 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh507535)));
    vlTOPp->mkSam__DOT__round_flag___05Fh509221 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh515278))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh507532 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh515278))));
    vlTOPp->mkSam__DOT__x___05Fh508333 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_I_ETC___05F_d10019)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh509222
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh507532);
    vlTOPp->mkSam__DOT__round_flag___05Fh509296 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh515263))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh507533 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh515263))));
    vlTOPp->mkSam__DOT__x___05Fh509292 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_I_ETC___05F_d10019)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh507533
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh509297);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10318 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524330
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10310);
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh36443 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN_IF___05FETC___05F_d216)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh36370)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh36445));
    vlTOPp->mkSam__DOT__IF_x5482_BIT_0_XOR_x6441_BIT_0_THEN_1_ELSE_0___05Fq18 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh35482 
                  ^ vlTOPp->mkSam__DOT__x___05Fh36441))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh40928 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh40683 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh40740 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh40495 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh40552 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh40307 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh40364 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh40119 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh40176 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh39931 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh39988 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh39743 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh39800 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh39555 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh39612 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh39367 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh39424 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh39179 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh39236 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh38991 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh39048 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh38803 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh38860 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh38615 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh38672 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh38427 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh38484 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh38239 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh38296 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh38051 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh38108 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh37863 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh37920 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh37675 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh37732 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh37487 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh37544 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh37299 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh37356 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh37111 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh37168 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh36923 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh36980 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh36735 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh36792 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                & vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh36547 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh35482 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh36441) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh36548 = (1U & (vlTOPp->mkSam__DOT__x___05Fh35482 
                                               & vlTOPp->mkSam__DOT__x___05Fh36441));
    vlTOPp->mkSam__DOT__product___05Fh51456 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d515 
                                               + (0x3fff800U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh68139 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN_IF___05FETC___05F_d869)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh68066)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh68141));
    vlTOPp->mkSam__DOT__IF_x7178_BIT_0_XOR_x8137_BIT_0_THEN_1_ELSE_0___05Fq17 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh67178 
                  ^ vlTOPp->mkSam__DOT__x___05Fh68137))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh72624 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh72379 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh72436 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh72191 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh72248 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh72003 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh72060 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh71815 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh71872 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh71627 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh71684 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh71439 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh71496 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh71251 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh71308 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh71063 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh71120 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh70875 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh70932 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh70687 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh70744 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh70499 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh70556 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh70311 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh70368 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh70123 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh70180 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh69935 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh69992 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh69747 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh69804 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh69559 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh69616 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh69371 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh69428 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh69183 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh69240 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh68995 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh69052 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh68807 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh68864 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh68619 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh68676 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh68431 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh68488 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                & vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh68243 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh67178 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh68137) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh68244 = (1U & (vlTOPp->mkSam__DOT__x___05Fh67178 
                                               & vlTOPp->mkSam__DOT__x___05Fh68137));
    vlTOPp->mkSam__DOT__product___05Fh83152 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1168 
                                               + (0x3fff800U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh99585 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THEN_I_ETC___05F_d1522)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh99512)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh99587));
    vlTOPp->mkSam__DOT__IF_x8624_BIT_0_XOR_x9583_BIT_0_THEN_1_ELSE_0___05Fq19 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh98624 
                  ^ vlTOPp->mkSam__DOT__x___05Fh99583))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh104070 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh103825 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh103882 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh103637 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh103694 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh103449 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh103506 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh103261 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh103318 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh103073 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh103130 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh102885 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh102942 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh102697 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh102754 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh102509 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh102566 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh102321 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh102378 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh102133 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh102190 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh101945 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh102002 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh101757 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh101814 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh101569 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh101626 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh101381 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh101438 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh101193 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh101250 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh101005 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh101062 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh100817 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh100874 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh100629 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh100686 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh100441 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh100498 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh100253 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh100310 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh100065 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh100122 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                 & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh99877 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh99934 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                & vlTOPp->mkSam__DOT__x___05Fh99583) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh99689 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh98624 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh99583) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh99690 = (1U & (vlTOPp->mkSam__DOT__x___05Fh98624 
                                               & vlTOPp->mkSam__DOT__x___05Fh99583));
    vlTOPp->mkSam__DOT__product___05Fh114598 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1821 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh131032 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THEN_I_ETC___05F_d2176)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh130959)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh131034));
    vlTOPp->mkSam__DOT__IF_x30071_BIT_0_XOR_x31030_BIT_0_THEN_1_ELSE_0___05Fq20 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh130071 
                  ^ vlTOPp->mkSam__DOT__x___05Fh131030))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh135517 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh135272 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh135329 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh135084 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh135141 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh134896 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh134953 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh134708 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh134765 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh134520 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh134577 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh134332 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh134389 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh134144 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh134201 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh133956 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh134013 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh133768 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh133825 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh133580 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh133637 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh133392 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh133449 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh133204 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh133261 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh133016 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh133073 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh132828 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh132885 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh132640 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh132697 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh132452 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh132509 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh132264 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh132321 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh132076 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh132133 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh131888 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh131945 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh131700 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh131757 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh131512 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh131569 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh131324 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh131381 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 & vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh131136 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh130071 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh131030) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh131137 = (1U & (vlTOPp->mkSam__DOT__x___05Fh130071 
                                                & vlTOPp->mkSam__DOT__x___05Fh131030));
    vlTOPp->mkSam__DOT__product___05Fh146045 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2475 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh162653 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THEN_I_ETC___05F_d2829)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh162580)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh162655));
    vlTOPp->mkSam__DOT__IF_x61692_BIT_0_XOR_x62651_BIT_0_THEN_1_ELSE_0___05Fq21 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh161692 
                  ^ vlTOPp->mkSam__DOT__x___05Fh162651))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh167138 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh166893 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh166950 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh166705 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh166762 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh166517 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh166574 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh166329 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh166386 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh166141 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh166198 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh165953 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh166010 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh165765 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh165822 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh165577 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh165634 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh165389 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh165446 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh165201 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh165258 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh165013 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh165070 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh164825 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh164882 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh164637 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh164694 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh164449 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh164506 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh164261 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh164318 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh164073 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh164130 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh163885 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh163942 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh163697 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh163754 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh163509 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh163566 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh163321 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh163378 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh163133 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh163190 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh162945 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh163002 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 & vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh162757 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh161692 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh162651) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh162758 = (1U & (vlTOPp->mkSam__DOT__x___05Fh161692 
                                                & vlTOPp->mkSam__DOT__x___05Fh162651));
    vlTOPp->mkSam__DOT__product___05Fh177666 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3128 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh194225 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THEN_I_ETC___05F_d3482)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh194152)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh194227));
    vlTOPp->mkSam__DOT__IF_x93264_BIT_0_XOR_x94223_BIT_0_THEN_1_ELSE_0___05Fq22 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh193264 
                  ^ vlTOPp->mkSam__DOT__x___05Fh194223))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh198710 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh198465 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh198522 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh198277 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh198334 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh198089 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh198146 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh197901 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh197958 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh197713 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh197770 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh197525 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh197582 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh197337 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh197394 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh197149 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh197206 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh196961 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh197018 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh196773 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh196830 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh196585 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh196642 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh196397 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh196454 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh196209 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh196266 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh196021 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh196078 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh195833 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh195890 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh195645 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh195702 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh195457 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh195514 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh195269 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh195326 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh195081 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh195138 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh194893 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh194950 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh194705 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh194762 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh194517 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh194574 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 & vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh194329 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh193264 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh194223) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh194330 = (1U & (vlTOPp->mkSam__DOT__x___05Fh193264 
                                                & vlTOPp->mkSam__DOT__x___05Fh194223));
    vlTOPp->mkSam__DOT__product___05Fh209238 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3781 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh225671 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THEN_I_ETC___05F_d4135)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh225598)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh225673));
    vlTOPp->mkSam__DOT__IF_x24710_BIT_0_XOR_x25669_BIT_0_THEN_1_ELSE_0___05Fq23 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh224710 
                  ^ vlTOPp->mkSam__DOT__x___05Fh225669))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh230156 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh229911 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh229968 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh229723 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh229780 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh229535 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh229592 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh229347 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh229404 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh229159 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh229216 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh228971 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh229028 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh228783 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh228840 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh228595 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh228652 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh228407 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh228464 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh228219 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh228276 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh228031 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh228088 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh227843 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh227900 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh227655 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh227712 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh227467 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh227524 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh227279 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh227336 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh227091 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh227148 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh226903 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh226960 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh226715 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh226772 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh226527 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh226584 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh226339 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh226396 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh226151 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh226208 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh225963 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh226020 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 & vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh225775 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh224710 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh225669) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh225776 = (1U & (vlTOPp->mkSam__DOT__x___05Fh224710 
                                                & vlTOPp->mkSam__DOT__x___05Fh225669));
    vlTOPp->mkSam__DOT__product___05Fh240684 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4434 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh257118 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THEN_I_ETC___05F_d4789)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh257045)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh257120));
    vlTOPp->mkSam__DOT__IF_x56157_BIT_0_XOR_x57116_BIT_0_THEN_1_ELSE_0___05Fq24 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh256157 
                  ^ vlTOPp->mkSam__DOT__x___05Fh257116))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh261603 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh261358 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh261415 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh261170 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh261227 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh260982 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh261039 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh260794 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh260851 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh260606 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh260663 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh260418 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh260475 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh260230 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh260287 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh260042 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh260099 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh259854 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh259911 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh259666 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh259723 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh259478 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh259535 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh259290 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh259347 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh259102 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh259159 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh258914 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh258971 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh258726 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh258783 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh258538 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh258595 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh258350 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh258407 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh258162 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh258219 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh257974 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh258031 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh257786 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh257843 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh257598 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh257655 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh257410 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh257467 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 & vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh257222 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh256157 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh257116) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh257223 = (1U & (vlTOPp->mkSam__DOT__x___05Fh256157 
                                                & vlTOPp->mkSam__DOT__x___05Fh257116));
    vlTOPp->mkSam__DOT__product___05Fh272131 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5088 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh288739 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THEN_I_ETC___05F_d5442)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh288666)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh288741));
    vlTOPp->mkSam__DOT__IF_x87778_BIT_0_XOR_x88737_BIT_0_THEN_1_ELSE_0___05Fq25 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh287778 
                  ^ vlTOPp->mkSam__DOT__x___05Fh288737))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh293224 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh292979 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh293036 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh292791 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh292848 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh292603 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh292660 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh292415 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh292472 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh292227 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh292284 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh292039 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh292096 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh291851 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh291908 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh291663 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh291720 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh291475 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh291532 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh291287 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh291344 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh291099 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh291156 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh290911 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh290968 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh290723 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh290780 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh290535 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh290592 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh290347 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh290404 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh290159 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh290216 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh289971 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh290028 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh289783 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh289840 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh289595 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh289652 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh289407 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh289464 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh289219 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh289276 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh289031 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh289088 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 & vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh288843 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh287778 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh288737) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh288844 = (1U & (vlTOPp->mkSam__DOT__x___05Fh287778 
                                                & vlTOPp->mkSam__DOT__x___05Fh288737));
    vlTOPp->mkSam__DOT__product___05Fh303752 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5741 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh320311 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THEN_I_ETC___05F_d6095)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh320238)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh320313));
    vlTOPp->mkSam__DOT__IF_x19350_BIT_0_XOR_x20309_BIT_0_THEN_1_ELSE_0___05Fq26 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh319350 
                  ^ vlTOPp->mkSam__DOT__x___05Fh320309))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh324796 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh324551 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh324608 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh324363 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh324420 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh324175 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh324232 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh323987 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh324044 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh323799 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh323856 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh323611 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh323668 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh323423 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh323480 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh323235 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh323292 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh323047 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh323104 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh322859 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh322916 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh322671 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh322728 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh322483 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh322540 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh322295 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh322352 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh322107 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh322164 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh321919 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh321976 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh321731 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh321788 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh321543 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh321600 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh321355 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh321412 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh321167 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh321224 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh320979 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh321036 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh320791 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh320848 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh320603 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh320660 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 & vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh320415 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh319350 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh320309) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh320416 = (1U & (vlTOPp->mkSam__DOT__x___05Fh319350 
                                                & vlTOPp->mkSam__DOT__x___05Fh320309));
    vlTOPp->mkSam__DOT__product___05Fh335324 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6394 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh351757 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THEN_I_ETC___05F_d6748)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh351684)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh351759));
    vlTOPp->mkSam__DOT__IF_x50796_BIT_0_XOR_x51755_BIT_0_THEN_1_ELSE_0___05Fq27 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh350796 
                  ^ vlTOPp->mkSam__DOT__x___05Fh351755))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh356242 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh355997 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh356054 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh355809 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh355866 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh355621 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh355678 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh355433 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh355490 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh355245 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh355302 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh355057 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh355114 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh354869 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh354926 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh354681 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh354738 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh354493 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh354550 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh354305 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh354362 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh354117 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh354174 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh353929 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh353986 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh353741 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh353798 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh353553 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh353610 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh353365 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh353422 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh353177 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh353234 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh352989 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh353046 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh352801 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh352858 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh352613 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh352670 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh352425 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh352482 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh352237 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh352294 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh352049 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh352106 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 & vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh351861 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh350796 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh351755) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh351862 = (1U & (vlTOPp->mkSam__DOT__x___05Fh350796 
                                                & vlTOPp->mkSam__DOT__x___05Fh351755));
    vlTOPp->mkSam__DOT__product___05Fh366770 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7047 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh383204 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THEN_I_ETC___05F_d7402)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh383131)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh383206));
    vlTOPp->mkSam__DOT__IF_x82243_BIT_0_XOR_x83202_BIT_0_THEN_1_ELSE_0___05Fq28 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh382243 
                  ^ vlTOPp->mkSam__DOT__x___05Fh383202))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh387689 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh387444 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh387501 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh387256 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh387313 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh387068 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh387125 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh386880 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh386937 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh386692 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh386749 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh386504 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh386561 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh386316 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh386373 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh386128 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh386185 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh385940 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh385997 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh385752 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh385809 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh385564 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh385621 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh385376 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh385433 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh385188 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh385245 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh385000 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh385057 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh384812 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh384869 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh384624 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh384681 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh384436 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh384493 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh384248 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh384305 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh384060 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh384117 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh383872 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh383929 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh383684 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh383741 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh383496 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh383553 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 & vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh383308 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh382243 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh383202) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh383309 = (1U & (vlTOPp->mkSam__DOT__x___05Fh382243 
                                                & vlTOPp->mkSam__DOT__x___05Fh383202));
    vlTOPp->mkSam__DOT__product___05Fh398217 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7701 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh414826 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THEN_I_ETC___05F_d8056)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh414753)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh414828));
    vlTOPp->mkSam__DOT__IF_x13865_BIT_0_XOR_x14824_BIT_0_THEN_1_ELSE_0___05Fq29 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh413865 
                  ^ vlTOPp->mkSam__DOT__x___05Fh414824))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh419311 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh419066 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh419123 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh418878 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh418935 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh418690 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh418747 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh418502 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh418559 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh418314 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh418371 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh418126 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh418183 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh417938 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh417995 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh417750 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh417807 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh417562 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh417619 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh417374 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh417431 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh417186 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh417243 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh416998 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh417055 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh416810 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh416867 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh416622 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh416679 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh416434 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh416491 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh416246 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh416303 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh416058 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh416115 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh415870 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh415927 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh415682 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh415739 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh415494 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh415551 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh415306 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh415363 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh415118 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh415175 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 & vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh414930 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh413865 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh414824) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh414931 = (1U & (vlTOPp->mkSam__DOT__x___05Fh413865 
                                                & vlTOPp->mkSam__DOT__x___05Fh414824));
    vlTOPp->mkSam__DOT__product___05Fh429839 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8355 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh446399 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THEN_I_ETC___05F_d8710)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh446326)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh446401));
    vlTOPp->mkSam__DOT__IF_x45438_BIT_0_XOR_x46397_BIT_0_THEN_1_ELSE_0___05Fq30 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh445438 
                  ^ vlTOPp->mkSam__DOT__x___05Fh446397))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh450884 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh450639 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh450696 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh450451 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh450508 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh450263 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh450320 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh450075 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh450132 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh449887 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh449944 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh449699 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh449756 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh449511 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh449568 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh449323 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh449380 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh449135 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh449192 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh448947 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh449004 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh448759 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh448816 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh448571 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh448628 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh448383 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh448440 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh448195 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh448252 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh448007 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh448064 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh447819 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh447876 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh447631 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh447688 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh447443 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh447500 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh447255 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh447312 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh447067 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh447124 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh446879 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh446936 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh446691 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh446748 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 & vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh446503 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh445438 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh446397) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh446504 = (1U & (vlTOPp->mkSam__DOT__x___05Fh445438 
                                                & vlTOPp->mkSam__DOT__x___05Fh446397));
    vlTOPp->mkSam__DOT__product___05Fh461412 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9009 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh477846 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THEN_I_ETC___05F_d9364)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh477773)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh477848));
    vlTOPp->mkSam__DOT__IF_x76885_BIT_0_XOR_x77844_BIT_0_THEN_1_ELSE_0___05Fq31 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh476885 
                  ^ vlTOPp->mkSam__DOT__x___05Fh477844))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh482331 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh482086 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh482143 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh481898 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh481955 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh481710 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh481767 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh481522 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh481579 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh481334 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh481391 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh481146 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh481203 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh480958 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh481015 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh480770 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh480827 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh480582 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh480639 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh480394 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh480451 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh480206 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh480263 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh480018 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh480075 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xbU));
}
