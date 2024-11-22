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
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_assign_output = 1U;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_assign_output = 1U;
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_matrix_prop = 1U;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_matrix_prop = 1U;
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
    vlTOPp->mkSam__DOT__a_prop_0_0_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_0_1_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_0_2_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_0_3_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_1_0_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_1_1_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_1_2_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_1_3_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_2_0_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_2_1_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_2_2_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_2_3_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_3_0_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_3_1_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_3_2_EN = 1U;
    vlTOPp->mkSam__DOT__a_prop_3_3_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_0_0_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_0_1_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_0_2_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_0_3_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_1_0_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_1_1_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_1_2_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_1_3_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_2_0_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_2_1_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_2_2_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_2_3_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_3_0_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_3_1_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_3_2_EN = 1U;
    vlTOPp->mkSam__DOT__aligned_out_3_3_EN = 1U;
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
    vlTOPp->mkSam__DOT__b_prop_0_0_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_0_1_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_0_2_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_0_3_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_1_0_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_1_1_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_1_2_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_1_3_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_2_0_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_2_1_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_2_2_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_2_3_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_3_0_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_3_1_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_3_2_EN = 1U;
    vlTOPp->mkSam__DOT__b_prop_3_3_EN = 1U;
    vlTOPp->mkSam__DOT__compute_D_IN = 1U;
    vlTOPp->mkSam__DOT__compute_EN = 1U;
    vlTOPp->mkSam__DOT__counter_D_IN = 1U;
    vlTOPp->mkSam__DOT__curr_state_EN = 1U;
    vlTOPp->mkSam__DOT__mac_a_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_a_EN = 0U;
    vlTOPp->mkSam__DOT__mac_b_D_IN = 0U;
    vlTOPp->mkSam__DOT__mac_b_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_x_EN = 0U;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_x_D_IN = 0ULL;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_x_EN = 0U;
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
    vlTOPp->mkSam__DOT__mac_check_D_IN = ((IData)(1U) 
                                          + vlTOPp->mkSam__DOT__mac_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_calc_out = 
        (0U == vlTOPp->mkSam__DOT__mac_check);
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
    vlTOPp->mkSam__DOT__x___05Fh544910 = (vlTOPp->mkSam__DOT__curr_state 
                                          - (IData)(2U));
    vlTOPp->mkSam__DOT__curr_state_1136_SLE_8___05F_d11137 
        = (0x80000008U >= (0x80000000U ^ vlTOPp->mkSam__DOT__curr_state));
    vlTOPp->mkSam__DOT__MUX_mac_matrix_0_0_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_0_0_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_0_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_0_0_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_0_1_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_0_1_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_1_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_0_1_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_0_2_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_0_2_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_2_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_0_2_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_0_3_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_0_3_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_3_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_0_3_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_1_0_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_1_0_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_0_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_1_0_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_1_1_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_1_1_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_1_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_1_1_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_1_2_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_1_2_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_2_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_1_2_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_1_3_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_1_3_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_3_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_1_3_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_2_0_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_2_0_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_0_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_2_0_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_2_1_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_2_1_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_1_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_2_1_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_2_2_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_2_2_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_2_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_2_2_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_2_3_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_2_3_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_3_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_2_3_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_3_0_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_3_0_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_0_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_3_0_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_3_1_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_3_1_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_1_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_3_1_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_3_2_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_3_2_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_2_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_3_2_check);
    vlTOPp->mkSam__DOT__MUX_mac_matrix_3_3_check_write_1___05FVAL_1 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__mac_matrix_3_3_check);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_3_calc_out 
        = (0U == vlTOPp->mkSam__DOT__mac_matrix_3_3_check);
    vlTOPp->mkSam__DOT__NOT_mac_matrix_2_1_check_551_EQ_0_552_1278_AND_ETC___05F_d11290 
        = (((((((0U != vlTOPp->mkSam__DOT__mac_matrix_2_1_check) 
                & (0U != vlTOPp->mkSam__DOT__mac_matrix_2_2_check)) 
               & (0U != vlTOPp->mkSam__DOT__mac_matrix_2_3_check)) 
              & (0U != vlTOPp->mkSam__DOT__mac_matrix_3_0_check)) 
             & (0U != vlTOPp->mkSam__DOT__mac_matrix_3_1_check)) 
            & (0U != vlTOPp->mkSam__DOT__mac_matrix_3_2_check)) 
           & (0U != vlTOPp->mkSam__DOT__mac_matrix_3_3_check));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh8261 = 
        (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh561484 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh592860 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh624236 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh655613 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_0_3_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh687164 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh718540 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh749916 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh781293 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_1_3_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh812844 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh844220 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh875596 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh906973 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_2_3_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh938525 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_0_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh969902 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_1_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1001279 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_2_c));
    vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1032657 
        = (0x800000U | (0x7fffffU & vlTOPp->mkSam__DOT__mac_matrix_3_3_c));
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b)));
    vlTOPp->mkSam__DOT__x___05Fh9707 = (0xffU & (((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkSam__DOT__mac_b) 
                                                  >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh9473 = (0x80U 
                                              | (0x7fU 
                                                 & (IData)(vlTOPp->mkSam__DOT__mac_a)));
    vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_a)));
    vlTOPp->mkSam__DOT__x___05Fh562930 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh562696 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh594306 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh594072 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh625682 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh625448 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh657059 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh656825 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a)));
    vlTOPp->mkSam__DOT__x___05Fh688610 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh688376 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh719986 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh719752 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh751362 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh751128 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh782739 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh782505 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a)));
    vlTOPp->mkSam__DOT__x___05Fh814290 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh814056 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh845666 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh845432 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh877042 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh876808 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh908419 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh908185 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a)));
    vlTOPp->mkSam__DOT__x___05Fh939971 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh939737 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a)));
    vlTOPp->mkSam__DOT__x___05Fh971348 = (0xffU & (
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                    >> 7U) 
                                                   + 
                                                   ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b) 
                                                    >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh971114 = (0x80U 
                                                | (0x7fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a)));
    vlTOPp->mkSam__DOT__x___05Fh1002725 = (0xffU & 
                                           (((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                             >> 7U) 
                                            + ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b) 
                                               >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh1002491 = (0x80U 
                                                 | (0x7fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a)));
    vlTOPp->mkSam__DOT__x___05Fh1034103 = (0xffU & 
                                           (((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                             >> 7U) 
                                            + ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b) 
                                               >> 7U)));
    vlTOPp->mkSam__DOT__product___05Fh1033869 = (0x80U 
                                                 | (0x7fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a)))
                       : (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a)));
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_calc_out = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_calc_out;
    vlTOPp->mkSam__DOT__mac_c_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_calc_out;
    vlTOPp->mkSam__DOT__mac_check_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_calc_out;
    vlTOPp->mkSam__DOT__mac_out_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_calc_out;
    if ((0U == vlTOPp->mkSam__DOT__x___05Fh544910)) {
        vlTOPp->mkSam__DOT__x___05Fh544852 = vlTOPp->mkSam__DOT__a_0_0;
        vlTOPp->mkSam__DOT__x___05Fh545923 = vlTOPp->mkSam__DOT__b_0_0;
        vlTOPp->mkSam__DOT__x___05Fh547469 = vlTOPp->mkSam__DOT__a_0_1;
        vlTOPp->mkSam__DOT__x___05Fh547588 = vlTOPp->mkSam__DOT__b_1_0;
        vlTOPp->mkSam__DOT__x___05Fh548929 = vlTOPp->mkSam__DOT__a_0_2;
        vlTOPp->mkSam__DOT__x___05Fh549048 = vlTOPp->mkSam__DOT__b_2_0;
        vlTOPp->mkSam__DOT__x___05Fh550389 = vlTOPp->mkSam__DOT__a_0_3;
        vlTOPp->mkSam__DOT__x___05Fh550508 = vlTOPp->mkSam__DOT__b_3_0;
    } else {
        vlTOPp->mkSam__DOT__x___05Fh544852 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__a_1_0)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_2_0)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_3_0)
                                                    : 0U)));
        vlTOPp->mkSam__DOT__x___05Fh545923 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__b_0_1)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_0_2)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_0_3)
                                                    : 0U)));
        vlTOPp->mkSam__DOT__x___05Fh547469 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__a_1_1)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_2_1)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_3_1)
                                                    : 0U)));
        vlTOPp->mkSam__DOT__x___05Fh547588 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__b_1_1)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_1_2)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_1_3)
                                                    : 0U)));
        vlTOPp->mkSam__DOT__x___05Fh548929 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__a_1_2)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_2_2)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_3_2)
                                                    : 0U)));
        vlTOPp->mkSam__DOT__x___05Fh549048 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__b_2_1)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_2_2)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_2_3)
                                                    : 0U)));
        vlTOPp->mkSam__DOT__x___05Fh550389 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__a_1_3)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__a_2_3)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__a_3_3)
                                                    : 0U)));
        vlTOPp->mkSam__DOT__x___05Fh550508 = ((1U == vlTOPp->mkSam__DOT__x___05Fh544910)
                                               ? (IData)(vlTOPp->mkSam__DOT__b_3_1)
                                               : ((2U 
                                                   == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                   ? (IData)(vlTOPp->mkSam__DOT__b_3_2)
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->mkSam__DOT__x___05Fh544910)
                                                    ? (IData)(vlTOPp->mkSam__DOT__b_3_3)
                                                    : 0U)));
    }
    if (vlTOPp->mkSam__DOT__curr_state_1136_SLE_8___05F_d11137) {
        vlTOPp->mkSam__DOT__a_prop_0_1_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_0_0));
        vlTOPp->mkSam__DOT__a_prop_0_2_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_0_1));
        vlTOPp->mkSam__DOT__a_prop_0_3_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_0_2));
        vlTOPp->mkSam__DOT__a_prop_1_1_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_1_0));
        vlTOPp->mkSam__DOT__a_prop_1_2_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_1_1));
        vlTOPp->mkSam__DOT__a_prop_1_3_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_1_2));
        vlTOPp->mkSam__DOT__a_prop_2_1_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_2_0));
        vlTOPp->mkSam__DOT__a_prop_2_2_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_2_1));
        vlTOPp->mkSam__DOT__a_prop_2_3_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_2_2));
        vlTOPp->mkSam__DOT__a_prop_3_1_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_3_0));
        vlTOPp->mkSam__DOT__a_prop_3_2_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_3_1));
        vlTOPp->mkSam__DOT__a_prop_3_3_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__a_prop_3_2));
        vlTOPp->mkSam__DOT__b_prop_1_0_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_0_0));
        vlTOPp->mkSam__DOT__b_prop_1_1_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_0_1));
        vlTOPp->mkSam__DOT__b_prop_1_2_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_0_2));
        vlTOPp->mkSam__DOT__b_prop_1_3_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_0_3));
        vlTOPp->mkSam__DOT__b_prop_2_0_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_1_0));
        vlTOPp->mkSam__DOT__b_prop_2_1_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_1_1));
        vlTOPp->mkSam__DOT__b_prop_2_2_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_1_2));
        vlTOPp->mkSam__DOT__b_prop_2_3_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_1_3));
        vlTOPp->mkSam__DOT__b_prop_3_0_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_2_0));
        vlTOPp->mkSam__DOT__b_prop_3_1_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_2_1));
        vlTOPp->mkSam__DOT__b_prop_3_2_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_2_2));
        vlTOPp->mkSam__DOT__b_prop_3_3_D_IN = ((0U 
                                                == vlTOPp->mkSam__DOT__curr_state)
                                                ? 0U
                                                : (IData)(vlTOPp->mkSam__DOT__b_prop_2_3));
    } else {
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
    }
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_0_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_0_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_1_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_1_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_2_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_2_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_3_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_0_3_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_0_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_0_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_1_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_1_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_2_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_2_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_3_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_1_3_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_0_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_0_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_1_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_1_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_2_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_2_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_3_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_2_3_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_0_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_0_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_1_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_1_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_2_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_2_calc_out;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_3_calc_out 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_mac_matrix_3_3_calc_out;
    vlTOPp->mkSam__DOT__NOT_mac_matrix_0_3_check_621_EQ_0_622_1272_AND_ETC___05F_d11296 
        = (((((((0U != vlTOPp->mkSam__DOT__mac_matrix_0_3_check) 
                & (0U != vlTOPp->mkSam__DOT__mac_matrix_1_0_check)) 
               & (0U != vlTOPp->mkSam__DOT__mac_matrix_1_1_check)) 
              & (0U != vlTOPp->mkSam__DOT__mac_matrix_1_2_check)) 
             & (0U != vlTOPp->mkSam__DOT__mac_matrix_1_3_check)) 
            & (0U != vlTOPp->mkSam__DOT__mac_matrix_2_0_check)) 
           & (IData)(vlTOPp->mkSam__DOT__NOT_mac_matrix_2_1_check_551_EQ_0_552_1278_AND_ETC___05F_d11290));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh9526 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh9707)));
    vlTOPp->mkSam__DOT__result_exp___05Fh8250 = (0xffU 
                                                 & ((IData)(0x81U) 
                                                    + (IData)(vlTOPp->mkSam__DOT__x___05Fh9707)));
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_0_5_THEN_1_CONCAT_mac_a_BITS_6_TO_ETC___05F_d18 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh9473)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh25289 = (0x7fffU 
                                               & (IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh562749 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh562930)));
    vlTOPp->mkSam__DOT__result_exp___05Fh561473 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh562930)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_0_70_THEN_1_CONCAT___05FETC___05F_d673 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh562696)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh578511 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh594125 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh594306)));
    vlTOPp->mkSam__DOT__result_exp___05Fh592849 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh594306)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_0_325_THEN_1_CONCA_ETC___05F_d1328 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh594072)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh609887 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh625501 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh625682)));
    vlTOPp->mkSam__DOT__result_exp___05Fh624225 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh625682)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_0_980_THEN_1_CONCA_ETC___05F_d1983 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh625448)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh641263 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh656878 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh657059)));
    vlTOPp->mkSam__DOT__result_exp___05Fh655602 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh657059)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_0_635_THEN_1_CONCA_ETC___05F_d2638 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh656825)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh672640 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh688429 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh688610)));
    vlTOPp->mkSam__DOT__result_exp___05Fh687153 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh688610)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_0_290_THEN_1_CONCA_ETC___05F_d3293 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh688376)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh704191 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh719805 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh719986)));
    vlTOPp->mkSam__DOT__result_exp___05Fh718529 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh719986)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_0_945_THEN_1_CONCA_ETC___05F_d3948 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh719752)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh735567 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh751181 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh751362)));
    vlTOPp->mkSam__DOT__result_exp___05Fh749905 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh751362)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_0_600_THEN_1_CONCA_ETC___05F_d4603 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh751128)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh766943 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh782558 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh782739)));
    vlTOPp->mkSam__DOT__result_exp___05Fh781282 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh782739)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_0_255_THEN_1_CONCA_ETC___05F_d5258 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh782505)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh798320 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh814109 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh814290)));
    vlTOPp->mkSam__DOT__result_exp___05Fh812833 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh814290)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_0_910_THEN_1_CONCA_ETC___05F_d5913 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh814056)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh829871 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh845485 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh845666)));
    vlTOPp->mkSam__DOT__result_exp___05Fh844209 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh845666)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_0_565_THEN_1_CONCA_ETC___05F_d6568 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh845432)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh861247 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh876861 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh877042)));
    vlTOPp->mkSam__DOT__result_exp___05Fh875585 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh877042)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_0_220_THEN_1_CONCA_ETC___05F_d7223 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh876808)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh892623 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh908238 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh908419)));
    vlTOPp->mkSam__DOT__result_exp___05Fh906962 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh908419)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_0_875_THEN_1_CONCA_ETC___05F_d7878 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh908185)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh924000 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh939790 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh939971)));
    vlTOPp->mkSam__DOT__result_exp___05Fh938514 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh939971)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_0_530_THEN_1_CONCA_ETC___05F_d8533 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh939737)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh955552 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh971167 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh971348)));
    vlTOPp->mkSam__DOT__result_exp___05Fh969891 = (0xffU 
                                                   & ((IData)(0x81U) 
                                                      + (IData)(vlTOPp->mkSam__DOT__x___05Fh971348)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_0_185_THEN_1_CONCA_ETC___05F_d9188 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh971114)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh986929 = (0x7fffU 
                                                & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1002544 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh1002725)));
    vlTOPp->mkSam__DOT__result_exp___05Fh1001268 = 
        (0xffU & ((IData)(0x81U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh1002725)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_0_840_THEN_1_CONCA_ETC___05F_d9843 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1002491)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh1018306 = (0x7fffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1033922 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh1034103)));
    vlTOPp->mkSam__DOT__result_exp___05Fh1032646 = 
        (0xffU & ((IData)(0x81U) + (IData)(vlTOPp->mkSam__DOT__x___05Fh1034103)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_0_0495_THEN_1_CON_ETC___05F_d10498 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1033869)
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh1049684 = (0x7fffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17));
    if (vlTOPp->mkSam__DOT__curr_state_1136_SLE_8___05F_d11137) {
        vlTOPp->mkSam__DOT__a_prop_0_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh544852;
        vlTOPp->mkSam__DOT__b_prop_0_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh545923;
        vlTOPp->mkSam__DOT__a_prop_1_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh547469;
        vlTOPp->mkSam__DOT__b_prop_0_1_D_IN = vlTOPp->mkSam__DOT__x___05Fh547588;
        vlTOPp->mkSam__DOT__a_prop_2_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh548929;
        vlTOPp->mkSam__DOT__b_prop_0_2_D_IN = vlTOPp->mkSam__DOT__x___05Fh549048;
        vlTOPp->mkSam__DOT__a_prop_3_0_D_IN = vlTOPp->mkSam__DOT__x___05Fh550389;
        vlTOPp->mkSam__DOT__b_prop_0_3_D_IN = vlTOPp->mkSam__DOT__x___05Fh550508;
    } else {
        vlTOPp->mkSam__DOT__a_prop_0_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_1_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_1_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_2_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_2_D_IN = 0U;
        vlTOPp->mkSam__DOT__a_prop_3_0_D_IN = 0U;
        vlTOPp->mkSam__DOT__b_prop_0_3_D_IN = 0U;
    }
    vlTOPp->mkSam__DOT__mac_matrix_0_0_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_0_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_0_0_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_0_1_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_1_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_0_1_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_0_2_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_2_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_0_2_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_0_3_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_3_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_0_3_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_1_0_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_0_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_1_0_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_1_1_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_1_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_1_1_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_1_2_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_2_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_1_2_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_1_3_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_3_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_1_3_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_2_0_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_0_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_2_0_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_2_1_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_1_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_2_1_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_2_2_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_2_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_2_2_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_2_3_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_3_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_2_3_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_3_0_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_0_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_3_0_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_3_1_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_1_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_3_1_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_3_2_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_2_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_3_2_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__mac_matrix_3_3_check_D_IN = 
        ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_3_calc_out)
          ? vlTOPp->mkSam__DOT__MUX_mac_matrix_3_3_check_write_1___05FVAL_1
          : 0U);
    vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate 
        = ((((0U != vlTOPp->mkSam__DOT__mac_matrix_0_0_check) 
             & (0U != vlTOPp->mkSam__DOT__mac_matrix_0_1_check)) 
            & (0U != vlTOPp->mkSam__DOT__mac_matrix_0_2_check)) 
           & (IData)(vlTOPp->mkSam__DOT__NOT_mac_matrix_0_3_check_621_EQ_0_622_1272_AND_ETC___05F_d11296));
    vlTOPp->mkSam__DOT__product___05Fh9450 = (0xffffU 
                                              & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_0_5_THEN_1_CONCAT_mac_a_BITS_6_TO_ETC___05F_d18) 
                                                 + 
                                                 (0x100U 
                                                  | (0xfeU 
                                                     & ((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                                        << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d323 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25289
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh562673 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_0_70_THEN_1_CONCAT___05FETC___05F_d673) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d978 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578511
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh594049 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_0_325_THEN_1_CONCA_ETC___05F_d1328) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1633 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609887
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh625425 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_0_980_THEN_1_CONCA_ETC___05F_d1983) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2288 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641263
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh656802 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_0_635_THEN_1_CONCA_ETC___05F_d2638) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2943 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672640
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh688353 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_0_290_THEN_1_CONCA_ETC___05F_d3293) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3598 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704191
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh719729 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_0_945_THEN_1_CONCA_ETC___05F_d3948) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4253 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735567
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh751105 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_0_600_THEN_1_CONCA_ETC___05F_d4603) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4908 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766943
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh782482 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_0_255_THEN_1_CONCA_ETC___05F_d5258) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5563 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798320
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh814033 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_0_910_THEN_1_CONCA_ETC___05F_d5913) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6218 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829871
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh845409 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_0_565_THEN_1_CONCA_ETC___05F_d6568) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6873 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861247
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh876785 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_0_220_THEN_1_CONCA_ETC___05F_d7223) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7528 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892623
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh908162 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_0_875_THEN_1_CONCA_ETC___05F_d7878) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8183 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh924000
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh939714 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_0_530_THEN_1_CONCA_ETC___05F_d8533) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8838 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955552
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh971091 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_0_185_THEN_1_CONCA_ETC___05F_d9188) 
                                                   + 
                                                   (0x100U 
                                                    | (0xfeU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9493 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986929
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh1002468 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_0_840_THEN_1_CONCA_ETC___05F_d9843) 
                                                    + 
                                                    (0x100U 
                                                     | (0xfeU 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                           << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10148 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018306
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh1033846 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_0_0495_THEN_1_CON_ETC___05F_d10498) 
                                                    + 
                                                    (0x100U 
                                                     | (0xfeU 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                           << 1U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10803 
        = ((1U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049684
            : 0U);
    vlTOPp->mkSam__DOT__counter_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_0_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_1_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_2_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_0_3_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_0_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_1_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_2_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_1_3_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_0_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_1_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_2_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_2_3_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_0_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_1_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_2_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_a_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_b_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__mac_matrix_3_3_s_EN = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate 
        = vlTOPp->mkSam__DOT__CAN_FIRE_RL_rl_instantiate;
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_1_4_THEN_IF_mac_b_BIT_0_5_THEN_1___05FETC___05F_d21 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh9450)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_0_5_THEN_1_CONCAT_mac_a_BITS_6_TO_ETC___05F_d18));
    vlTOPp->mkSam__DOT__product___05Fh25266 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d323 
                                               + (0xfffeU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_1_69_THEN_IF_mac_ma_ETC___05F_d676 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh562673)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_0_70_THEN_1_CONCAT___05FETC___05F_d673));
    vlTOPp->mkSam__DOT__product___05Fh578488 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d978 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_1_324_THEN_IF_mac___05FETC___05F_d1331 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh594049)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_0_325_THEN_1_CONCA_ETC___05F_d1328));
    vlTOPp->mkSam__DOT__product___05Fh609864 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1633 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_1_979_THEN_IF_mac___05FETC___05F_d1986 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh625425)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_0_980_THEN_1_CONCA_ETC___05F_d1983));
    vlTOPp->mkSam__DOT__product___05Fh641240 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2288 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_1_634_THEN_IF_mac___05FETC___05F_d2641 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh656802)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_0_635_THEN_1_CONCA_ETC___05F_d2638));
    vlTOPp->mkSam__DOT__product___05Fh672617 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2943 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_1_289_THEN_IF_mac___05FETC___05F_d3296 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh688353)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_0_290_THEN_1_CONCA_ETC___05F_d3293));
    vlTOPp->mkSam__DOT__product___05Fh704168 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3598 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_1_944_THEN_IF_mac___05FETC___05F_d3951 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh719729)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_0_945_THEN_1_CONCA_ETC___05F_d3948));
    vlTOPp->mkSam__DOT__product___05Fh735544 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4253 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_1_599_THEN_IF_mac___05FETC___05F_d4606 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh751105)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_0_600_THEN_1_CONCA_ETC___05F_d4603));
    vlTOPp->mkSam__DOT__product___05Fh766920 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4908 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_1_254_THEN_IF_mac___05FETC___05F_d5261 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh782482)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_0_255_THEN_1_CONCA_ETC___05F_d5258));
    vlTOPp->mkSam__DOT__product___05Fh798297 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5563 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_1_909_THEN_IF_mac___05FETC___05F_d5916 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh814033)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_0_910_THEN_1_CONCA_ETC___05F_d5913));
    vlTOPp->mkSam__DOT__product___05Fh829848 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6218 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_1_564_THEN_IF_mac___05FETC___05F_d6571 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh845409)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_0_565_THEN_1_CONCA_ETC___05F_d6568));
    vlTOPp->mkSam__DOT__product___05Fh861224 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6873 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_1_219_THEN_IF_mac___05FETC___05F_d7226 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh876785)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_0_220_THEN_1_CONCA_ETC___05F_d7223));
    vlTOPp->mkSam__DOT__product___05Fh892600 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7528 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_1_874_THEN_IF_mac___05FETC___05F_d7881 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh908162)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_0_875_THEN_1_CONCA_ETC___05F_d7878));
    vlTOPp->mkSam__DOT__product___05Fh923977 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8183 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_1_529_THEN_IF_mac___05FETC___05F_d8536 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh939714)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_0_530_THEN_1_CONCA_ETC___05F_d8533));
    vlTOPp->mkSam__DOT__product___05Fh955529 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8838 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_1_184_THEN_IF_mac___05FETC___05F_d9191 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh971091)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_0_185_THEN_1_CONCA_ETC___05F_d9188));
    vlTOPp->mkSam__DOT__product___05Fh986906 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9493 
                                                + (0xfffeU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_1_839_THEN_IF_mac___05FETC___05F_d9846 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1002468)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_0_840_THEN_1_CONCA_ETC___05F_d9843));
    vlTOPp->mkSam__DOT__product___05Fh1018283 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10148 
                                                 + 
                                                 (0xfffeU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 1U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_1_0494_THEN_IF_ma_ETC___05F_d10501 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1033846)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_0_0495_THEN_1_CON_ETC___05F_d10498));
    vlTOPp->mkSam__DOT__product___05Fh1049661 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10803 
                                                 + 
                                                 (0xfffeU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 1U)));
    vlTOPp->mkSam__DOT__mac_matrix_0_0_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_0_0_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_0_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_0_0_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_0_1_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_0_1_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_1_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_0_1_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_0_2_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_0_2_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_2_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_0_2_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_0_3_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_3_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_0_3_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_3_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_0_3_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_0_3_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_0_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_0_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_0_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_1_0_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_1_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_1_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_1_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_1_1_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_2_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_2_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_2_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_1_2_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_3_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_3_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_1_3_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_3_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_1_3_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_1_3_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_0_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_0_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_0_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_2_0_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_1_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_1_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_1_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_2_1_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_2_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_2_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_2_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_2_2_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_3_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_3_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_2_3_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_3_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_2_3_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_2_3_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_0_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_0_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_0_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_3_0_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_0_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_1_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_1_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_1_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_3_1_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_1_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_2_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_2_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_2_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_3_2_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_2_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_3_c_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                               | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_3_calc_out));
    vlTOPp->mkSam__DOT__mac_matrix_3_3_check_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_3_calc_out) 
                                                   | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate));
    vlTOPp->mkSam__DOT__mac_matrix_3_3_out_EN = ((IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_rl_instantiate) 
                                                 | (IData)(vlTOPp->mkSam__DOT__WILL_FIRE_RL_mac_matrix_3_3_calc_out));
    vlTOPp->mkSam__DOT__product___05Fh9427 = (0xffffU 
                                              & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_1_4_THEN_IF_mac_b_BIT_0_5_THEN_1___05FETC___05F_d21) 
                                                 + 
                                                 (0x200U 
                                                  | (0x1fcU 
                                                     & ((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                                        << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d326 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25266
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d323);
    vlTOPp->mkSam__DOT__product___05Fh562650 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_1_69_THEN_IF_mac_ma_ETC___05F_d676) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d981 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578488
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d978);
    vlTOPp->mkSam__DOT__product___05Fh594026 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_1_324_THEN_IF_mac___05FETC___05F_d1331) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1636 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609864
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1633);
    vlTOPp->mkSam__DOT__product___05Fh625402 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_1_979_THEN_IF_mac___05FETC___05F_d1986) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2291 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641240
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2288);
    vlTOPp->mkSam__DOT__product___05Fh656779 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_1_634_THEN_IF_mac___05FETC___05F_d2641) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2946 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672617
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2943);
    vlTOPp->mkSam__DOT__product___05Fh688330 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_1_289_THEN_IF_mac___05FETC___05F_d3296) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3601 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704168
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3598);
    vlTOPp->mkSam__DOT__product___05Fh719706 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_1_944_THEN_IF_mac___05FETC___05F_d3951) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4256 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735544
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4253);
    vlTOPp->mkSam__DOT__product___05Fh751082 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_1_599_THEN_IF_mac___05FETC___05F_d4606) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4911 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766920
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4908);
    vlTOPp->mkSam__DOT__product___05Fh782459 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_1_254_THEN_IF_mac___05FETC___05F_d5261) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5566 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798297
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5563);
    vlTOPp->mkSam__DOT__product___05Fh814010 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_1_909_THEN_IF_mac___05FETC___05F_d5916) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6221 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829848
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6218);
    vlTOPp->mkSam__DOT__product___05Fh845386 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_1_564_THEN_IF_mac___05FETC___05F_d6571) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6876 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861224
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6873);
    vlTOPp->mkSam__DOT__product___05Fh876762 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_1_219_THEN_IF_mac___05FETC___05F_d7226) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7531 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892600
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7528);
    vlTOPp->mkSam__DOT__product___05Fh908139 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_1_874_THEN_IF_mac___05FETC___05F_d7881) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8186 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923977
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8183);
    vlTOPp->mkSam__DOT__product___05Fh939691 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_1_529_THEN_IF_mac___05FETC___05F_d8536) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8841 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955529
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8838);
    vlTOPp->mkSam__DOT__product___05Fh971068 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_1_184_THEN_IF_mac___05FETC___05F_d9191) 
                                                   + 
                                                   (0x200U 
                                                    | (0x1fcU 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9496 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986906
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9493);
    vlTOPp->mkSam__DOT__product___05Fh1002445 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_1_839_THEN_IF_mac___05FETC___05F_d9846) 
                                                    + 
                                                    (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                           << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10151 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018283
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10148);
    vlTOPp->mkSam__DOT__product___05Fh1033823 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_1_0494_THEN_IF_ma_ETC___05F_d10501) 
                                                    + 
                                                    (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                           << 2U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10806 
        = ((2U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049661
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10803);
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_2_3_THEN_IF_mac_b_BIT_1_4_THEN_IF_ETC___05F_d25 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh9427)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_1_4_THEN_IF_mac_b_BIT_0_5_THEN_1___05FETC___05F_d21));
    vlTOPp->mkSam__DOT__product___05Fh25243 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d326 
                                               + (0x1fffcU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_2_68_THEN_IF_mac_ma_ETC___05F_d680 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh562650)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_1_69_THEN_IF_mac_ma_ETC___05F_d676));
    vlTOPp->mkSam__DOT__product___05Fh578465 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d981 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_2_323_THEN_IF_mac___05FETC___05F_d1335 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh594026)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_1_324_THEN_IF_mac___05FETC___05F_d1331));
    vlTOPp->mkSam__DOT__product___05Fh609841 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1636 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_2_978_THEN_IF_mac___05FETC___05F_d1990 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh625402)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_1_979_THEN_IF_mac___05FETC___05F_d1986));
    vlTOPp->mkSam__DOT__product___05Fh641217 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2291 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_2_633_THEN_IF_mac___05FETC___05F_d2645 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh656779)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_1_634_THEN_IF_mac___05FETC___05F_d2641));
    vlTOPp->mkSam__DOT__product___05Fh672594 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2946 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_2_288_THEN_IF_mac___05FETC___05F_d3300 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh688330)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_1_289_THEN_IF_mac___05FETC___05F_d3296));
    vlTOPp->mkSam__DOT__product___05Fh704145 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3601 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_2_943_THEN_IF_mac___05FETC___05F_d3955 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh719706)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_1_944_THEN_IF_mac___05FETC___05F_d3951));
    vlTOPp->mkSam__DOT__product___05Fh735521 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4256 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_2_598_THEN_IF_mac___05FETC___05F_d4610 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh751082)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_1_599_THEN_IF_mac___05FETC___05F_d4606));
    vlTOPp->mkSam__DOT__product___05Fh766897 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4911 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_2_253_THEN_IF_mac___05FETC___05F_d5265 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh782459)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_1_254_THEN_IF_mac___05FETC___05F_d5261));
    vlTOPp->mkSam__DOT__product___05Fh798274 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5566 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_2_908_THEN_IF_mac___05FETC___05F_d5920 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh814010)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_1_909_THEN_IF_mac___05FETC___05F_d5916));
    vlTOPp->mkSam__DOT__product___05Fh829825 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6221 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_2_563_THEN_IF_mac___05FETC___05F_d6575 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh845386)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_1_564_THEN_IF_mac___05FETC___05F_d6571));
    vlTOPp->mkSam__DOT__product___05Fh861201 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6876 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_2_218_THEN_IF_mac___05FETC___05F_d7230 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh876762)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_1_219_THEN_IF_mac___05FETC___05F_d7226));
    vlTOPp->mkSam__DOT__product___05Fh892577 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7531 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_2_873_THEN_IF_mac___05FETC___05F_d7885 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh908139)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_1_874_THEN_IF_mac___05FETC___05F_d7881));
    vlTOPp->mkSam__DOT__product___05Fh923954 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8186 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_2_528_THEN_IF_mac___05FETC___05F_d8540 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh939691)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_1_529_THEN_IF_mac___05FETC___05F_d8536));
    vlTOPp->mkSam__DOT__product___05Fh955506 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8841 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_2_183_THEN_IF_mac___05FETC___05F_d9195 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh971068)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_1_184_THEN_IF_mac___05FETC___05F_d9191));
    vlTOPp->mkSam__DOT__product___05Fh986883 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9496 
                                                + (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_2_838_THEN_IF_mac___05FETC___05F_d9850 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1002445)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_1_839_THEN_IF_mac___05FETC___05F_d9846));
    vlTOPp->mkSam__DOT__product___05Fh1018260 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10151 
                                                 + 
                                                 (0x1fffcU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 2U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_2_0493_THEN_IF_ma_ETC___05F_d10505 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1033823)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_1_0494_THEN_IF_ma_ETC___05F_d10501));
    vlTOPp->mkSam__DOT__product___05Fh1049638 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10806 
                                                 + 
                                                 (0x1fffcU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 2U)));
    vlTOPp->mkSam__DOT__product___05Fh9404 = (0xffffU 
                                              & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_2_3_THEN_IF_mac_b_BIT_1_4_THEN_IF_ETC___05F_d25) 
                                                 + 
                                                 (0x400U 
                                                  | (0x3f8U 
                                                     & ((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                                        << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d330 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25243
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d326);
    vlTOPp->mkSam__DOT__product___05Fh562627 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_2_68_THEN_IF_mac_ma_ETC___05F_d680) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d985 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578465
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d981);
    vlTOPp->mkSam__DOT__product___05Fh594003 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_2_323_THEN_IF_mac___05FETC___05F_d1335) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1640 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609841
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1636);
    vlTOPp->mkSam__DOT__product___05Fh625379 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_2_978_THEN_IF_mac___05FETC___05F_d1990) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2295 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641217
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2291);
    vlTOPp->mkSam__DOT__product___05Fh656756 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_2_633_THEN_IF_mac___05FETC___05F_d2645) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2950 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672594
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2946);
    vlTOPp->mkSam__DOT__product___05Fh688307 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_2_288_THEN_IF_mac___05FETC___05F_d3300) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3605 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704145
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3601);
    vlTOPp->mkSam__DOT__product___05Fh719683 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_2_943_THEN_IF_mac___05FETC___05F_d3955) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4260 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735521
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4256);
    vlTOPp->mkSam__DOT__product___05Fh751059 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_2_598_THEN_IF_mac___05FETC___05F_d4610) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4915 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766897
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4911);
    vlTOPp->mkSam__DOT__product___05Fh782436 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_2_253_THEN_IF_mac___05FETC___05F_d5265) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5570 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798274
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5566);
    vlTOPp->mkSam__DOT__product___05Fh813987 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_2_908_THEN_IF_mac___05FETC___05F_d5920) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6225 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829825
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6221);
    vlTOPp->mkSam__DOT__product___05Fh845363 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_2_563_THEN_IF_mac___05FETC___05F_d6575) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6880 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861201
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6876);
    vlTOPp->mkSam__DOT__product___05Fh876739 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_2_218_THEN_IF_mac___05FETC___05F_d7230) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7535 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892577
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7531);
    vlTOPp->mkSam__DOT__product___05Fh908116 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_2_873_THEN_IF_mac___05FETC___05F_d7885) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8190 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923954
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8186);
    vlTOPp->mkSam__DOT__product___05Fh939668 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_2_528_THEN_IF_mac___05FETC___05F_d8540) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8845 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955506
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8841);
    vlTOPp->mkSam__DOT__product___05Fh971045 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_2_183_THEN_IF_mac___05FETC___05F_d9195) 
                                                   + 
                                                   (0x400U 
                                                    | (0x3f8U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9500 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986883
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9496);
    vlTOPp->mkSam__DOT__product___05Fh1002422 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_2_838_THEN_IF_mac___05FETC___05F_d9850) 
                                                    + 
                                                    (0x400U 
                                                     | (0x3f8U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                           << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10155 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018260
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10151);
    vlTOPp->mkSam__DOT__product___05Fh1033800 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_2_0493_THEN_IF_ma_ETC___05F_d10505) 
                                                    + 
                                                    (0x400U 
                                                     | (0x3f8U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                           << 3U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10810 
        = ((4U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049638
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10806);
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_3_2_THEN_IF_mac_b_BIT_2_3_THEN_IF_ETC___05F_d29 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh9404)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_2_3_THEN_IF_mac_b_BIT_1_4_THEN_IF_ETC___05F_d25));
    vlTOPp->mkSam__DOT__product___05Fh25220 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d330 
                                               + (0x3fff8U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_3_67_THEN_IF_mac_ma_ETC___05F_d684 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh562627)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_2_68_THEN_IF_mac_ma_ETC___05F_d680));
    vlTOPp->mkSam__DOT__product___05Fh578442 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d985 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_3_322_THEN_IF_mac___05FETC___05F_d1339 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh594003)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_2_323_THEN_IF_mac___05FETC___05F_d1335));
    vlTOPp->mkSam__DOT__product___05Fh609818 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1640 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_3_977_THEN_IF_mac___05FETC___05F_d1994 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh625379)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_2_978_THEN_IF_mac___05FETC___05F_d1990));
    vlTOPp->mkSam__DOT__product___05Fh641194 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2295 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_3_632_THEN_IF_mac___05FETC___05F_d2649 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh656756)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_2_633_THEN_IF_mac___05FETC___05F_d2645));
    vlTOPp->mkSam__DOT__product___05Fh672571 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2950 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_3_287_THEN_IF_mac___05FETC___05F_d3304 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh688307)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_2_288_THEN_IF_mac___05FETC___05F_d3300));
    vlTOPp->mkSam__DOT__product___05Fh704122 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3605 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_3_942_THEN_IF_mac___05FETC___05F_d3959 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh719683)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_2_943_THEN_IF_mac___05FETC___05F_d3955));
    vlTOPp->mkSam__DOT__product___05Fh735498 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4260 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_3_597_THEN_IF_mac___05FETC___05F_d4614 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh751059)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_2_598_THEN_IF_mac___05FETC___05F_d4610));
    vlTOPp->mkSam__DOT__product___05Fh766874 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4915 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_3_252_THEN_IF_mac___05FETC___05F_d5269 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh782436)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_2_253_THEN_IF_mac___05FETC___05F_d5265));
    vlTOPp->mkSam__DOT__product___05Fh798251 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5570 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_3_907_THEN_IF_mac___05FETC___05F_d5924 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh813987)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_2_908_THEN_IF_mac___05FETC___05F_d5920));
    vlTOPp->mkSam__DOT__product___05Fh829802 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6225 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_3_562_THEN_IF_mac___05FETC___05F_d6579 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh845363)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_2_563_THEN_IF_mac___05FETC___05F_d6575));
    vlTOPp->mkSam__DOT__product___05Fh861178 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6880 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_3_217_THEN_IF_mac___05FETC___05F_d7234 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh876739)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_2_218_THEN_IF_mac___05FETC___05F_d7230));
    vlTOPp->mkSam__DOT__product___05Fh892554 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7535 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_3_872_THEN_IF_mac___05FETC___05F_d7889 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh908116)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_2_873_THEN_IF_mac___05FETC___05F_d7885));
    vlTOPp->mkSam__DOT__product___05Fh923931 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8190 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_3_527_THEN_IF_mac___05FETC___05F_d8544 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh939668)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_2_528_THEN_IF_mac___05FETC___05F_d8540));
    vlTOPp->mkSam__DOT__product___05Fh955483 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8845 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_3_182_THEN_IF_mac___05FETC___05F_d9199 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh971045)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_2_183_THEN_IF_mac___05FETC___05F_d9195));
    vlTOPp->mkSam__DOT__product___05Fh986860 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9500 
                                                + (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_3_837_THEN_IF_mac___05FETC___05F_d9854 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1002422)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_2_838_THEN_IF_mac___05FETC___05F_d9850));
    vlTOPp->mkSam__DOT__product___05Fh1018237 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10155 
                                                 + 
                                                 (0x3fff8U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 3U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_3_0492_THEN_IF_ma_ETC___05F_d10509 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1033800)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_2_0493_THEN_IF_ma_ETC___05F_d10505));
    vlTOPp->mkSam__DOT__product___05Fh1049615 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10810 
                                                 + 
                                                 (0x3fff8U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 3U)));
    vlTOPp->mkSam__DOT__product___05Fh9381 = (0xffffU 
                                              & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_3_2_THEN_IF_mac_b_BIT_2_3_THEN_IF_ETC___05F_d29) 
                                                 + 
                                                 (0x800U 
                                                  | (0x7f0U 
                                                     & ((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                                        << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d334 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25220
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d330);
    vlTOPp->mkSam__DOT__product___05Fh562604 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_3_67_THEN_IF_mac_ma_ETC___05F_d684) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d989 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578442
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d985);
    vlTOPp->mkSam__DOT__product___05Fh593980 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_3_322_THEN_IF_mac___05FETC___05F_d1339) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1644 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609818
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1640);
    vlTOPp->mkSam__DOT__product___05Fh625356 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_3_977_THEN_IF_mac___05FETC___05F_d1994) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2299 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641194
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2295);
    vlTOPp->mkSam__DOT__product___05Fh656733 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_3_632_THEN_IF_mac___05FETC___05F_d2649) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2954 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672571
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2950);
    vlTOPp->mkSam__DOT__product___05Fh688284 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_3_287_THEN_IF_mac___05FETC___05F_d3304) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3609 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704122
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3605);
    vlTOPp->mkSam__DOT__product___05Fh719660 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_3_942_THEN_IF_mac___05FETC___05F_d3959) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4264 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735498
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4260);
    vlTOPp->mkSam__DOT__product___05Fh751036 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_3_597_THEN_IF_mac___05FETC___05F_d4614) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4919 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766874
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4915);
    vlTOPp->mkSam__DOT__product___05Fh782413 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_3_252_THEN_IF_mac___05FETC___05F_d5269) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5574 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798251
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5570);
    vlTOPp->mkSam__DOT__product___05Fh813964 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_3_907_THEN_IF_mac___05FETC___05F_d5924) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6229 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829802
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6225);
    vlTOPp->mkSam__DOT__product___05Fh845340 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_3_562_THEN_IF_mac___05FETC___05F_d6579) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6884 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861178
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6880);
    vlTOPp->mkSam__DOT__product___05Fh876716 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_3_217_THEN_IF_mac___05FETC___05F_d7234) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7539 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892554
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7535);
    vlTOPp->mkSam__DOT__product___05Fh908093 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_3_872_THEN_IF_mac___05FETC___05F_d7889) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8194 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923931
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8190);
    vlTOPp->mkSam__DOT__product___05Fh939645 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_3_527_THEN_IF_mac___05FETC___05F_d8544) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8849 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955483
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8845);
    vlTOPp->mkSam__DOT__product___05Fh971022 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_3_182_THEN_IF_mac___05FETC___05F_d9199) 
                                                   + 
                                                   (0x800U 
                                                    | (0x7f0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9504 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986860
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9500);
    vlTOPp->mkSam__DOT__product___05Fh1002399 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_3_837_THEN_IF_mac___05FETC___05F_d9854) 
                                                    + 
                                                    (0x800U 
                                                     | (0x7f0U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                           << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10159 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018237
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10155);
    vlTOPp->mkSam__DOT__product___05Fh1033777 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_3_0492_THEN_IF_ma_ETC___05F_d10509) 
                                                    + 
                                                    (0x800U 
                                                     | (0x7f0U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                           << 4U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10814 
        = ((8U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049615
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10810);
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_4_1_THEN_IF_mac_b_BIT_3_2_THEN_IF_ETC___05F_d34 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh9381)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_3_2_THEN_IF_mac_b_BIT_2_3_THEN_IF_ETC___05F_d29));
    vlTOPp->mkSam__DOT__product___05Fh25197 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d334 
                                               + (0x7fff0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_4_66_THEN_IF_mac_ma_ETC___05F_d689 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh562604)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_3_67_THEN_IF_mac_ma_ETC___05F_d684));
    vlTOPp->mkSam__DOT__product___05Fh578419 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d989 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_4_321_THEN_IF_mac___05FETC___05F_d1344 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh593980)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_3_322_THEN_IF_mac___05FETC___05F_d1339));
    vlTOPp->mkSam__DOT__product___05Fh609795 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1644 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_4_976_THEN_IF_mac___05FETC___05F_d1999 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh625356)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_3_977_THEN_IF_mac___05FETC___05F_d1994));
    vlTOPp->mkSam__DOT__product___05Fh641171 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2299 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_4_631_THEN_IF_mac___05FETC___05F_d2654 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh656733)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_3_632_THEN_IF_mac___05FETC___05F_d2649));
    vlTOPp->mkSam__DOT__product___05Fh672548 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2954 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_4_286_THEN_IF_mac___05FETC___05F_d3309 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh688284)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_3_287_THEN_IF_mac___05FETC___05F_d3304));
    vlTOPp->mkSam__DOT__product___05Fh704099 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3609 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_4_941_THEN_IF_mac___05FETC___05F_d3964 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh719660)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_3_942_THEN_IF_mac___05FETC___05F_d3959));
    vlTOPp->mkSam__DOT__product___05Fh735475 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4264 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_4_596_THEN_IF_mac___05FETC___05F_d4619 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh751036)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_3_597_THEN_IF_mac___05FETC___05F_d4614));
    vlTOPp->mkSam__DOT__product___05Fh766851 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4919 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_4_251_THEN_IF_mac___05FETC___05F_d5274 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh782413)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_3_252_THEN_IF_mac___05FETC___05F_d5269));
    vlTOPp->mkSam__DOT__product___05Fh798228 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5574 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_4_906_THEN_IF_mac___05FETC___05F_d5929 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh813964)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_3_907_THEN_IF_mac___05FETC___05F_d5924));
    vlTOPp->mkSam__DOT__product___05Fh829779 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6229 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_4_561_THEN_IF_mac___05FETC___05F_d6584 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh845340)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_3_562_THEN_IF_mac___05FETC___05F_d6579));
    vlTOPp->mkSam__DOT__product___05Fh861155 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6884 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_4_216_THEN_IF_mac___05FETC___05F_d7239 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh876716)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_3_217_THEN_IF_mac___05FETC___05F_d7234));
    vlTOPp->mkSam__DOT__product___05Fh892531 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7539 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_4_871_THEN_IF_mac___05FETC___05F_d7894 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh908093)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_3_872_THEN_IF_mac___05FETC___05F_d7889));
    vlTOPp->mkSam__DOT__product___05Fh923908 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8194 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_4_526_THEN_IF_mac___05FETC___05F_d8549 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh939645)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_3_527_THEN_IF_mac___05FETC___05F_d8544));
    vlTOPp->mkSam__DOT__product___05Fh955460 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8849 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_4_181_THEN_IF_mac___05FETC___05F_d9204 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh971022)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_3_182_THEN_IF_mac___05FETC___05F_d9199));
    vlTOPp->mkSam__DOT__product___05Fh986837 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9504 
                                                + (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_4_836_THEN_IF_mac___05FETC___05F_d9859 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1002399)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_3_837_THEN_IF_mac___05FETC___05F_d9854));
    vlTOPp->mkSam__DOT__product___05Fh1018214 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10159 
                                                 + 
                                                 (0x7fff0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 4U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_4_0491_THEN_IF_ma_ETC___05F_d10514 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1033777)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_3_0492_THEN_IF_ma_ETC___05F_d10509));
    vlTOPp->mkSam__DOT__product___05Fh1049592 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10814 
                                                 + 
                                                 (0x7fff0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 4U)));
    vlTOPp->mkSam__DOT__product___05Fh9358 = (0xffffU 
                                              & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_4_1_THEN_IF_mac_b_BIT_3_2_THEN_IF_ETC___05F_d34) 
                                                 + 
                                                 (0x1000U 
                                                  | (0xfe0U 
                                                     & ((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                                        << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d339 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25197
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d334);
    vlTOPp->mkSam__DOT__product___05Fh562581 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_4_66_THEN_IF_mac_ma_ETC___05F_d689) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d994 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578419
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d989);
    vlTOPp->mkSam__DOT__product___05Fh593957 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_4_321_THEN_IF_mac___05FETC___05F_d1344) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1649 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609795
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1644);
    vlTOPp->mkSam__DOT__product___05Fh625333 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_4_976_THEN_IF_mac___05FETC___05F_d1999) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2304 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641171
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2299);
    vlTOPp->mkSam__DOT__product___05Fh656710 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_4_631_THEN_IF_mac___05FETC___05F_d2654) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2959 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672548
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2954);
    vlTOPp->mkSam__DOT__product___05Fh688261 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_4_286_THEN_IF_mac___05FETC___05F_d3309) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3614 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704099
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3609);
    vlTOPp->mkSam__DOT__product___05Fh719637 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_4_941_THEN_IF_mac___05FETC___05F_d3964) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4269 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735475
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4264);
    vlTOPp->mkSam__DOT__product___05Fh751013 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_4_596_THEN_IF_mac___05FETC___05F_d4619) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4924 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766851
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4919);
    vlTOPp->mkSam__DOT__product___05Fh782390 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_4_251_THEN_IF_mac___05FETC___05F_d5274) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5579 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798228
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5574);
    vlTOPp->mkSam__DOT__product___05Fh813941 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_4_906_THEN_IF_mac___05FETC___05F_d5929) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6234 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829779
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6229);
    vlTOPp->mkSam__DOT__product___05Fh845317 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_4_561_THEN_IF_mac___05FETC___05F_d6584) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6889 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861155
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6884);
    vlTOPp->mkSam__DOT__product___05Fh876693 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_4_216_THEN_IF_mac___05FETC___05F_d7239) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7544 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892531
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7539);
    vlTOPp->mkSam__DOT__product___05Fh908070 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_4_871_THEN_IF_mac___05FETC___05F_d7894) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8199 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923908
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8194);
    vlTOPp->mkSam__DOT__product___05Fh939622 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_4_526_THEN_IF_mac___05FETC___05F_d8549) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8854 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955460
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8849);
    vlTOPp->mkSam__DOT__product___05Fh970999 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_4_181_THEN_IF_mac___05FETC___05F_d9204) 
                                                   + 
                                                   (0x1000U 
                                                    | (0xfe0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9509 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986837
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9504);
    vlTOPp->mkSam__DOT__product___05Fh1002376 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_4_836_THEN_IF_mac___05FETC___05F_d9859) 
                                                    + 
                                                    (0x1000U 
                                                     | (0xfe0U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                           << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10164 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018214
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10159);
    vlTOPp->mkSam__DOT__product___05Fh1033754 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_4_0491_THEN_IF_ma_ETC___05F_d10514) 
                                                    + 
                                                    (0x1000U 
                                                     | (0xfe0U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                           << 5U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10819 
        = ((0x10U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049592
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10814);
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_5_0_THEN_IF_mac_b_BIT_4_1_THEN_IF_ETC___05F_d39 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh9358)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_4_1_THEN_IF_mac_b_BIT_3_2_THEN_IF_ETC___05F_d34));
    vlTOPp->mkSam__DOT__product___05Fh25174 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d339 
                                               + (0xfffe0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_5_65_THEN_IF_mac_ma_ETC___05F_d694 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh562581)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_4_66_THEN_IF_mac_ma_ETC___05F_d689));
    vlTOPp->mkSam__DOT__product___05Fh578396 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d994 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_5_320_THEN_IF_mac___05FETC___05F_d1349 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh593957)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_4_321_THEN_IF_mac___05FETC___05F_d1344));
    vlTOPp->mkSam__DOT__product___05Fh609772 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1649 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_5_975_THEN_IF_mac___05FETC___05F_d2004 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh625333)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_4_976_THEN_IF_mac___05FETC___05F_d1999));
    vlTOPp->mkSam__DOT__product___05Fh641148 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2304 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_5_630_THEN_IF_mac___05FETC___05F_d2659 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh656710)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_4_631_THEN_IF_mac___05FETC___05F_d2654));
    vlTOPp->mkSam__DOT__product___05Fh672525 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2959 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_5_285_THEN_IF_mac___05FETC___05F_d3314 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh688261)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_4_286_THEN_IF_mac___05FETC___05F_d3309));
    vlTOPp->mkSam__DOT__product___05Fh704076 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3614 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_5_940_THEN_IF_mac___05FETC___05F_d3969 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh719637)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_4_941_THEN_IF_mac___05FETC___05F_d3964));
    vlTOPp->mkSam__DOT__product___05Fh735452 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4269 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_5_595_THEN_IF_mac___05FETC___05F_d4624 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh751013)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_4_596_THEN_IF_mac___05FETC___05F_d4619));
    vlTOPp->mkSam__DOT__product___05Fh766828 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4924 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_5_250_THEN_IF_mac___05FETC___05F_d5279 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh782390)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_4_251_THEN_IF_mac___05FETC___05F_d5274));
    vlTOPp->mkSam__DOT__product___05Fh798205 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5579 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_5_905_THEN_IF_mac___05FETC___05F_d5934 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh813941)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_4_906_THEN_IF_mac___05FETC___05F_d5929));
    vlTOPp->mkSam__DOT__product___05Fh829756 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6234 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_5_560_THEN_IF_mac___05FETC___05F_d6589 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh845317)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_4_561_THEN_IF_mac___05FETC___05F_d6584));
    vlTOPp->mkSam__DOT__product___05Fh861132 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6889 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_5_215_THEN_IF_mac___05FETC___05F_d7244 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh876693)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_4_216_THEN_IF_mac___05FETC___05F_d7239));
    vlTOPp->mkSam__DOT__product___05Fh892508 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7544 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_5_870_THEN_IF_mac___05FETC___05F_d7899 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh908070)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_4_871_THEN_IF_mac___05FETC___05F_d7894));
    vlTOPp->mkSam__DOT__product___05Fh923885 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8199 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_5_525_THEN_IF_mac___05FETC___05F_d8554 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh939622)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_4_526_THEN_IF_mac___05FETC___05F_d8549));
    vlTOPp->mkSam__DOT__product___05Fh955437 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8854 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_5_180_THEN_IF_mac___05FETC___05F_d9209 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh970999)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_4_181_THEN_IF_mac___05FETC___05F_d9204));
    vlTOPp->mkSam__DOT__product___05Fh986814 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9509 
                                                + (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_5_835_THEN_IF_mac___05FETC___05F_d9864 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1002376)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_4_836_THEN_IF_mac___05FETC___05F_d9859));
    vlTOPp->mkSam__DOT__product___05Fh1018191 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10164 
                                                 + 
                                                 (0xfffe0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 5U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_5_0490_THEN_IF_ma_ETC___05F_d10519 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
            ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1033754)
            : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_4_0491_THEN_IF_ma_ETC___05F_d10514));
    vlTOPp->mkSam__DOT__product___05Fh1049569 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10819 
                                                 + 
                                                 (0xfffe0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 5U)));
    vlTOPp->mkSam__DOT__product___05Fh9335 = (0xffffU 
                                              & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_5_0_THEN_IF_mac_b_BIT_4_1_THEN_IF_ETC___05F_d39) 
                                                 + 
                                                 (0x2000U 
                                                  | (0x1fc0U 
                                                     & ((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                                        << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d344 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25174
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d339);
    vlTOPp->mkSam__DOT__product___05Fh562558 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_5_65_THEN_IF_mac_ma_ETC___05F_d694) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d999 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578396
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d994);
    vlTOPp->mkSam__DOT__product___05Fh593934 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_5_320_THEN_IF_mac___05FETC___05F_d1349) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1654 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609772
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1649);
    vlTOPp->mkSam__DOT__product___05Fh625310 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_5_975_THEN_IF_mac___05FETC___05F_d2004) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2309 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641148
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2304);
    vlTOPp->mkSam__DOT__product___05Fh656687 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_5_630_THEN_IF_mac___05FETC___05F_d2659) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2964 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672525
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2959);
    vlTOPp->mkSam__DOT__product___05Fh688238 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_5_285_THEN_IF_mac___05FETC___05F_d3314) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3619 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704076
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3614);
    vlTOPp->mkSam__DOT__product___05Fh719614 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_5_940_THEN_IF_mac___05FETC___05F_d3969) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4274 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735452
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4269);
    vlTOPp->mkSam__DOT__product___05Fh750990 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_5_595_THEN_IF_mac___05FETC___05F_d4624) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4929 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766828
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4924);
    vlTOPp->mkSam__DOT__product___05Fh782367 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_5_250_THEN_IF_mac___05FETC___05F_d5279) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5584 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798205
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5579);
    vlTOPp->mkSam__DOT__product___05Fh813918 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_5_905_THEN_IF_mac___05FETC___05F_d5934) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6239 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829756
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6234);
    vlTOPp->mkSam__DOT__product___05Fh845294 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_5_560_THEN_IF_mac___05FETC___05F_d6589) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6894 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861132
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6889);
    vlTOPp->mkSam__DOT__product___05Fh876670 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_5_215_THEN_IF_mac___05FETC___05F_d7244) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7549 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892508
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7544);
    vlTOPp->mkSam__DOT__product___05Fh908047 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_5_870_THEN_IF_mac___05FETC___05F_d7899) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8204 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923885
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8199);
    vlTOPp->mkSam__DOT__product___05Fh939599 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_5_525_THEN_IF_mac___05FETC___05F_d8554) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8859 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955437
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8854);
    vlTOPp->mkSam__DOT__product___05Fh970976 = (0xffffU 
                                                & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_5_180_THEN_IF_mac___05FETC___05F_d9209) 
                                                   + 
                                                   (0x2000U 
                                                    | (0x1fc0U 
                                                       & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                                          << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9514 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986814
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9509);
    vlTOPp->mkSam__DOT__product___05Fh1002353 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_5_835_THEN_IF_mac___05FETC___05F_d9864) 
                                                    + 
                                                    (0x2000U 
                                                     | (0x1fc0U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                                           << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10169 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018191
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10164);
    vlTOPp->mkSam__DOT__product___05Fh1033731 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_5_0490_THEN_IF_ma_ETC___05F_d10519) 
                                                    + 
                                                    (0x2000U 
                                                     | (0x1fc0U 
                                                        & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                                           << 6U)))));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10824 
        = ((0x20U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049569
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10819);
    vlTOPp->mkSam__DOT__IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_IF_m_ETC___05F_d50 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh9335)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_5_0_THEN_IF_mac_b_BIT_4_1_THEN_IF_ETC___05F_d39)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh25151 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d344 
                                               + (0x1fffc0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ma_ETC___05F_d705 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh562558)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_5_65_THEN_IF_mac_ma_ETC___05F_d694)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh578373 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d999 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_mac___05FETC___05F_d1360 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh593934)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_5_320_THEN_IF_mac___05FETC___05F_d1349)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh609749 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1654 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_mac___05FETC___05F_d2015 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh625310)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_5_975_THEN_IF_mac___05FETC___05F_d2004)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh641125 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2309 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_mac___05FETC___05F_d2670 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh656687)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_5_630_THEN_IF_mac___05FETC___05F_d2659)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh672502 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2964 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_mac___05FETC___05F_d3325 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh688238)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_5_285_THEN_IF_mac___05FETC___05F_d3314)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh704053 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3619 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_mac___05FETC___05F_d3980 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh719614)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_5_940_THEN_IF_mac___05FETC___05F_d3969)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh735429 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4274 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_mac___05FETC___05F_d4635 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh750990)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_5_595_THEN_IF_mac___05FETC___05F_d4624)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh766805 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4929 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_mac___05FETC___05F_d5290 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh782367)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_5_250_THEN_IF_mac___05FETC___05F_d5279)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh798182 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5584 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_mac___05FETC___05F_d5945 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh813918)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_5_905_THEN_IF_mac___05FETC___05F_d5934)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh829733 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6239 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_mac___05FETC___05F_d6600 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh845294)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_5_560_THEN_IF_mac___05FETC___05F_d6589)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh861109 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6894 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_mac___05FETC___05F_d7255 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh876670)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_5_215_THEN_IF_mac___05FETC___05F_d7244)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh892485 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7549 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_mac___05FETC___05F_d7910 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh908047)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_5_870_THEN_IF_mac___05FETC___05F_d7899)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh923862 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8204 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_mac___05FETC___05F_d8565 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh939599)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_5_525_THEN_IF_mac___05FETC___05F_d8554)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh955414 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8859 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_mac___05FETC___05F_d9220 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh970976)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_5_180_THEN_IF_mac___05FETC___05F_d9209)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh986791 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9514 
                                                + (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_mac___05FETC___05F_d9875 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1002353)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_5_835_THEN_IF_mac___05FETC___05F_d9864)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh1018168 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10169 
                                                 + 
                                                 (0x1fffc0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 6U)));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ma_ETC___05F_d10530 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b))
                        ? (IData)(vlTOPp->mkSam__DOT__product___05Fh1033731)
                        : (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_5_0490_THEN_IF_ma_ETC___05F_d10519)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                               << 7U)))));
    vlTOPp->mkSam__DOT__product___05Fh1049546 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10824 
                                                 + 
                                                 (0x1fffc0U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 6U)));
    vlTOPp->mkSam__DOT__result_exp___05Fh8254 = ((0x8000U 
                                                  & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_IF_m_ETC___05F_d50))
                                                  ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh9526)
                                                  : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8250));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh9525 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_IF_m_ETC___05F_d50) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh9547 = (0xfffcU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_IF_m_ETC___05F_d50) 
                                                     << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d350 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25151
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d344);
    vlTOPp->mkSam__DOT__result_exp___05Fh561477 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ma_ETC___05F_d705))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh562749)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561473));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh562748 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ma_ETC___05F_d705) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh562770 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ma_ETC___05F_d705) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1005 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578373
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d999);
    vlTOPp->mkSam__DOT__result_exp___05Fh592853 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_mac___05FETC___05F_d1360))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh594125)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592849));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh594124 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_mac___05FETC___05F_d1360) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh594146 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_mac___05FETC___05F_d1360) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1660 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609749
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1654);
    vlTOPp->mkSam__DOT__result_exp___05Fh624229 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_mac___05FETC___05F_d2015))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh625501)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624225));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh625500 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_mac___05FETC___05F_d2015) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh625522 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_mac___05FETC___05F_d2015) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2315 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641125
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2309);
    vlTOPp->mkSam__DOT__result_exp___05Fh655606 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_mac___05FETC___05F_d2670))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh656878)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655602));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh656877 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_mac___05FETC___05F_d2670) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh656899 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_mac___05FETC___05F_d2670) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2970 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672502
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2964);
    vlTOPp->mkSam__DOT__result_exp___05Fh687157 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_mac___05FETC___05F_d3325))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh688429)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687153));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh688428 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_mac___05FETC___05F_d3325) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh688450 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_mac___05FETC___05F_d3325) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3625 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704053
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3619);
    vlTOPp->mkSam__DOT__result_exp___05Fh718533 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_mac___05FETC___05F_d3980))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh719805)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718529));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh719804 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_mac___05FETC___05F_d3980) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh719826 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_mac___05FETC___05F_d3980) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4280 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735429
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4274);
    vlTOPp->mkSam__DOT__result_exp___05Fh749909 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_mac___05FETC___05F_d4635))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh751181)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749905));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh751180 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_mac___05FETC___05F_d4635) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh751202 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_mac___05FETC___05F_d4635) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4935 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766805
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4929);
    vlTOPp->mkSam__DOT__result_exp___05Fh781286 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_mac___05FETC___05F_d5290))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh782558)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781282));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh782557 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_mac___05FETC___05F_d5290) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh782579 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_mac___05FETC___05F_d5290) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5590 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798182
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5584);
    vlTOPp->mkSam__DOT__result_exp___05Fh812837 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_mac___05FETC___05F_d5945))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh814109)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812833));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh814108 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_mac___05FETC___05F_d5945) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh814130 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_mac___05FETC___05F_d5945) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6245 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829733
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6239);
    vlTOPp->mkSam__DOT__result_exp___05Fh844213 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_mac___05FETC___05F_d6600))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh845485)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844209));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh845484 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_mac___05FETC___05F_d6600) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh845506 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_mac___05FETC___05F_d6600) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6900 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861109
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6894);
    vlTOPp->mkSam__DOT__result_exp___05Fh875589 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_mac___05FETC___05F_d7255))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh876861)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875585));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh876860 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_mac___05FETC___05F_d7255) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh876882 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_mac___05FETC___05F_d7255) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7555 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892485
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7549);
    vlTOPp->mkSam__DOT__result_exp___05Fh906966 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_mac___05FETC___05F_d7910))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh908238)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906962));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh908237 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_mac___05FETC___05F_d7910) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh908259 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_mac___05FETC___05F_d7910) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8210 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923862
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8204);
    vlTOPp->mkSam__DOT__result_exp___05Fh938518 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_mac___05FETC___05F_d8565))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh939790)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938514));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh939789 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_mac___05FETC___05F_d8565) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh939811 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_mac___05FETC___05F_d8565) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8865 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955414
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8859);
    vlTOPp->mkSam__DOT__result_exp___05Fh969895 = (
                                                   (0x8000U 
                                                    & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_mac___05FETC___05F_d9220))
                                                    ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh971167)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969891));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh971166 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_mac___05FETC___05F_d9220) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh971188 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_mac___05FETC___05F_d9220) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9520 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986791
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9514);
    vlTOPp->mkSam__DOT__result_exp___05Fh1001272 = 
        ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_mac___05FETC___05F_d9875))
          ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1002544)
          : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001268));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh1002543 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_mac___05FETC___05F_d9875) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh1002565 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_mac___05FETC___05F_d9875) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10175 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018168
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10169);
    vlTOPp->mkSam__DOT__result_exp___05Fh1032650 = 
        ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ma_ETC___05F_d10530))
          ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1033922)
          : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032646));
    vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh1033921 
        = (0xfffeU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ma_ETC___05F_d10530) 
                      << 1U));
    vlTOPp->mkSam__DOT__result_mant___05Fh1033943 = 
        (0xfffcU & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ma_ETC___05F_d10530) 
                    << 2U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10830 
        = ((0x40U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049546
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10824);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh9690 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8254)));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_IF_m_ETC___05F_d50))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh9525)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh9547));
    vlTOPp->mkSam__DOT__product___05Fh25128 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d350 
                                               + (0x3fff80U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh562913 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561477)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ma_ETC___05F_d705))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh562748)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh562770));
    vlTOPp->mkSam__DOT__product___05Fh578350 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1005 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh594289 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592853)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_mac___05FETC___05F_d1360))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh594124)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh594146));
    vlTOPp->mkSam__DOT__product___05Fh609726 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1660 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh625665 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624229)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_mac___05FETC___05F_d2015))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh625500)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh625522));
    vlTOPp->mkSam__DOT__product___05Fh641102 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2315 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh657042 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655606)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_mac___05FETC___05F_d2670))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh656877)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh656899));
    vlTOPp->mkSam__DOT__product___05Fh672479 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2970 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh688593 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687157)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_mac___05FETC___05F_d3325))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh688428)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh688450));
    vlTOPp->mkSam__DOT__product___05Fh704030 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3625 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh719969 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718533)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_mac___05FETC___05F_d3980))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh719804)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh719826));
    vlTOPp->mkSam__DOT__product___05Fh735406 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4280 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh751345 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749909)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_mac___05FETC___05F_d4635))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh751180)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh751202));
    vlTOPp->mkSam__DOT__product___05Fh766782 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4935 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh782722 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781286)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_mac___05FETC___05F_d5290))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh782557)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh782579));
    vlTOPp->mkSam__DOT__product___05Fh798159 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5590 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh814273 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812837)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_mac___05FETC___05F_d5945))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh814108)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh814130));
    vlTOPp->mkSam__DOT__product___05Fh829710 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6245 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh845649 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844213)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_mac___05FETC___05F_d6600))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh845484)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh845506));
    vlTOPp->mkSam__DOT__product___05Fh861086 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6900 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh877025 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875589)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_mac___05FETC___05F_d7255))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh876860)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh876882));
    vlTOPp->mkSam__DOT__product___05Fh892462 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7555 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh908402 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906966)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_mac___05FETC___05F_d7910))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh908237)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh908259));
    vlTOPp->mkSam__DOT__product___05Fh923839 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8210 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh939954 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938518)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_mac___05FETC___05F_d8565))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh939789)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh939811));
    vlTOPp->mkSam__DOT__product___05Fh955391 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8865 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh971331 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969895)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_mac___05FETC___05F_d9220))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh971166)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh971188));
    vlTOPp->mkSam__DOT__product___05Fh986768 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9520 
                                                + (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1002708 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001272)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_mac___05FETC___05F_d9875))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh1002543)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh1002565));
    vlTOPp->mkSam__DOT__product___05Fh1018145 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10175 
                                                 + 
                                                 (0x3fff80U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 7U)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1034086 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032650)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536 
        = ((0x8000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ma_ETC___05F_d10530))
            ? (IData)(vlTOPp->mkSam__DOT__result_mant___05F_1___05Fh1033921)
            : (IData)(vlTOPp->mkSam__DOT__result_mant___05Fh1033943));
    vlTOPp->mkSam__DOT__product___05Fh1049523 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10830 
                                                 + 
                                                 (0x3fff80U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 7U)));
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh9641 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d356 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25128
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d350);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh562864 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1011 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578350
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1005);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh594240 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1666 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609726
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1660);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh625616 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2321 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641102
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2315);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh656993 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2976 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672479
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2970);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh688544 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3631 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704030
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3625);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh719920 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4286 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735406
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4280);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh751296 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4941 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766782
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4935);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh782673 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5596 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798159
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5590);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh814224 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6251 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829710
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6245);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh845600 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6906 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861086
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6900);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh876976 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7561 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892462
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7555);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh908353 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8216 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923839
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8210);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh939905 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8871 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955391
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8865);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh971282 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9526 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986768
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9520);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh1002659 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10181 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018145
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10175);
    vlTOPp->mkSam__DOT__rounded_result_mant___05Fh1034037 
        = (0x7fU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536) 
                    >> 9U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10836 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049523
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10830);
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_ETC___05F_d66 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh9641)));
    vlTOPp->mkSam__DOT__product___05Fh25105 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d356 
                                               + (0x7fff00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_TH_ETC___05F_d721 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh562864)));
    vlTOPp->mkSam__DOT__product___05Fh578327 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1011 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_1_b_316_BIT_6_319___05FETC___05F_d1376 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh594240)));
    vlTOPp->mkSam__DOT__product___05Fh609703 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1666 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_2_b_971_BIT_6_974___05FETC___05F_d2031 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh625616)));
    vlTOPp->mkSam__DOT__product___05Fh641079 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2321 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_3_b_626_BIT_6_629___05FETC___05F_d2686 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh656993)));
    vlTOPp->mkSam__DOT__product___05Fh672456 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2976 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_0_b_281_BIT_6_284___05FETC___05F_d3341 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh688544)));
    vlTOPp->mkSam__DOT__product___05Fh704007 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3631 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_1_b_936_BIT_6_939___05FETC___05F_d3996 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh719920)));
    vlTOPp->mkSam__DOT__product___05Fh735383 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4286 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_2_b_591_BIT_6_594___05FETC___05F_d4651 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh751296)));
    vlTOPp->mkSam__DOT__product___05Fh766759 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4941 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_3_b_246_BIT_6_249___05FETC___05F_d5306 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh782673)));
    vlTOPp->mkSam__DOT__product___05Fh798136 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5596 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_0_b_901_BIT_6_904___05FETC___05F_d5961 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh814224)));
    vlTOPp->mkSam__DOT__product___05Fh829687 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6251 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_1_b_556_BIT_6_559___05FETC___05F_d6616 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh845600)));
    vlTOPp->mkSam__DOT__product___05Fh861063 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6906 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_2_b_211_BIT_6_214___05FETC___05F_d7271 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh876976)));
    vlTOPp->mkSam__DOT__product___05Fh892439 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7561 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_3_b_866_BIT_6_869___05FETC___05F_d7926 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh908353)));
    vlTOPp->mkSam__DOT__product___05Fh923816 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8216 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_0_b_521_BIT_6_524___05FETC___05F_d8581 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh939905)));
    vlTOPp->mkSam__DOT__product___05Fh955368 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8871 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_1_b_176_BIT_6_179___05FETC___05F_d9236 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh971282)));
    vlTOPp->mkSam__DOT__product___05Fh986745 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9526 
                                                + (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_2_b_831_BIT_6_834___05FETC___05F_d9891 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh1002659)));
    vlTOPp->mkSam__DOT__product___05Fh1018122 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10181 
                                                 + 
                                                 (0x7fff00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 8U)));
    vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_3_b_0486_BIT_6_048_ETC___05F_d10546 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__rounded_result_mant___05Fh1034037)));
    vlTOPp->mkSam__DOT__product___05Fh1049500 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10836 
                                                 + 
                                                 (0x7fff00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 8U)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh9637 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_ETC___05F_d66)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh9645 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_ETC___05F_d66))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh9690)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8254));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d363 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25105
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d356);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh562860 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_TH_ETC___05F_d721)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh562868 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_TH_ETC___05F_d721))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh562913)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561477));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1018 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578327
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1011);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh594236 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_1_b_316_BIT_6_319___05FETC___05F_d1376)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh594244 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_1_b_316_BIT_6_319___05FETC___05F_d1376))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh594289)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592853));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1673 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609703
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1666);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh625612 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_2_b_971_BIT_6_974___05FETC___05F_d2031)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh625620 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_2_b_971_BIT_6_974___05FETC___05F_d2031))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh625665)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624229));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2328 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641079
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2321);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh656989 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_3_b_626_BIT_6_629___05FETC___05F_d2686)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh656997 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_0_3_b_626_BIT_6_629___05FETC___05F_d2686))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh657042)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655606));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2983 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672456
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2976);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh688540 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_0_b_281_BIT_6_284___05FETC___05F_d3341)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh688548 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_0_b_281_BIT_6_284___05FETC___05F_d3341))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh688593)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687157));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3638 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh704007
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3631);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh719916 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_1_b_936_BIT_6_939___05FETC___05F_d3996)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh719924 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_1_b_936_BIT_6_939___05FETC___05F_d3996))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh719969)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718533));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4293 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735383
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4286);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh751292 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_2_b_591_BIT_6_594___05FETC___05F_d4651)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh751300 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_2_b_591_BIT_6_594___05FETC___05F_d4651))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh751345)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749909));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4948 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766759
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4941);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh782669 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_3_b_246_BIT_6_249___05FETC___05F_d5306)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh782677 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_1_3_b_246_BIT_6_249___05FETC___05F_d5306))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh782722)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781286));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5603 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798136
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5596);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh814220 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_0_b_901_BIT_6_904___05FETC___05F_d5961)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh814228 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_0_b_901_BIT_6_904___05FETC___05F_d5961))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh814273)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812837));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6258 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829687
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6251);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh845596 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_1_b_556_BIT_6_559___05FETC___05F_d6616)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh845604 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_1_b_556_BIT_6_559___05FETC___05F_d6616))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh845649)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844213));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6913 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861063
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6906);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh876972 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_2_b_211_BIT_6_214___05FETC___05F_d7271)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh876980 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_2_b_211_BIT_6_214___05FETC___05F_d7271))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh877025)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875589));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7568 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892439
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7561);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh908349 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_3_b_866_BIT_6_869___05FETC___05F_d7926)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh908357 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_2_3_b_866_BIT_6_869___05FETC___05F_d7926))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh908402)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906966));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8223 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923816
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8216);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh939901 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_0_b_521_BIT_6_524___05FETC___05F_d8581)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh939909 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_0_b_521_BIT_6_524___05FETC___05F_d8581))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh939954)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938518));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8878 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955368
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8871);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh971278 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_1_b_176_BIT_6_179___05FETC___05F_d9236)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh971286 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_1_b_176_BIT_6_179___05FETC___05F_d9236))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh971331)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969895));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9533 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986745
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9526);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh1002655 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_2_b_831_BIT_6_834___05FETC___05F_d9891)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh1002663 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_2_b_831_BIT_6_834___05FETC___05F_d9891))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1002708)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001272));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10188 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018122
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10181);
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh1034033 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536) 
                               >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536))))))
                        ? (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_3_b_0486_BIT_6_048_ETC___05F_d10546)
                        : ((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536) 
                           >> 9U)) << 9U));
    vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh1034041 
        = ((0x80U & (IData)(vlTOPp->mkSam__DOT___0_CONCAT_IF_IF_mac_matrix_3_3_b_0486_BIT_6_048_ETC___05F_d10546))
            ? (IData)(vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1034086)
            : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032650));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10843 
        = ((0x100U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049500
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10836);
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh8260 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh9637) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh8259 = ((1U 
                                                  & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56) 
                                                      >> 8U) 
                                                     & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56) 
                                                         >> 9U) 
                                                        | (0U 
                                                           != 
                                                           (0xffU 
                                                            & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THEN_I_ETC___05F_d56))))))
                                                  ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh9645)
                                                  : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8254));
    vlTOPp->mkSam__DOT__product___05Fh25082 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d363 
                                               + (0xfffe00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh561483 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh562860) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh561482 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF_mac_ETC___05F_d711))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh562868)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561477));
    vlTOPp->mkSam__DOT__product___05Fh578304 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1018 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh592859 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh594236) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh592858 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_IF_m_ETC___05F_d1366))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh594244)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592853));
    vlTOPp->mkSam__DOT__product___05Fh609680 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1673 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh624235 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh625612) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh624234 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_IF_m_ETC___05F_d2021))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh625620)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624229));
    vlTOPp->mkSam__DOT__product___05Fh641056 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2328 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh655612 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh656989) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh655611 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_IF_m_ETC___05F_d2676))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh656997)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655606));
    vlTOPp->mkSam__DOT__product___05Fh672433 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2983 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh687163 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh688540) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh687162 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_IF_m_ETC___05F_d3331))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh688548)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687157));
    vlTOPp->mkSam__DOT__product___05Fh703984 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3638 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh718539 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh719916) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh718538 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_IF_m_ETC___05F_d3986))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh719924)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718533));
    vlTOPp->mkSam__DOT__product___05Fh735360 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4293 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh749915 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh751292) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh749914 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_IF_m_ETC___05F_d4641))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh751300)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749909));
    vlTOPp->mkSam__DOT__product___05Fh766736 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4948 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh781292 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh782669) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh781291 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_IF_m_ETC___05F_d5296))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh782677)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781286));
    vlTOPp->mkSam__DOT__product___05Fh798113 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5603 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh812843 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh814220) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh812842 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_IF_m_ETC___05F_d5951))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh814228)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812837));
    vlTOPp->mkSam__DOT__product___05Fh829664 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6258 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh844219 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh845596) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh844218 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_IF_m_ETC___05F_d6606))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh845604)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844213));
    vlTOPp->mkSam__DOT__product___05Fh861040 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6913 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh875595 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh876972) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh875594 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_IF_m_ETC___05F_d7261))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh876980)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875589));
    vlTOPp->mkSam__DOT__product___05Fh892416 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7568 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh906972 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh908349) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh906971 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_IF_m_ETC___05F_d7916))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh908357)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906966));
    vlTOPp->mkSam__DOT__product___05Fh923793 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8223 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh938524 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh939901) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh938523 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_IF_m_ETC___05F_d8571))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh939909)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938518));
    vlTOPp->mkSam__DOT__product___05Fh955345 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8878 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh969901 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh971278) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh969900 = (
                                                   (1U 
                                                    & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226) 
                                                        >> 8U) 
                                                       & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226) 
                                                           >> 9U) 
                                                          | (0U 
                                                             != 
                                                             (0xffU 
                                                              & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_IF_m_ETC___05F_d9226))))))
                                                    ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh971286)
                                                    : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969895));
    vlTOPp->mkSam__DOT__product___05Fh986722 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9533 
                                                + (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1001278 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh1002655) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh1001277 = 
        ((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881) 
                 >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881) 
                            >> 9U) | (0U != (0xffU 
                                             & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_IF_m_ETC___05F_d9881))))))
          ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh1002663)
          : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001272));
    vlTOPp->mkSam__DOT__product___05Fh1018099 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10188 
                                                 + 
                                                 (0xfffe00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 9U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1032656 
        = (0x800000U | ((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_fst___05Fh1034033) 
                        << 7U));
    vlTOPp->mkSam__DOT__result_exp___05Fh1032655 = 
        ((1U & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536) 
                 >> 8U) & (((IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536) 
                            >> 9U) | (0U != (0xffU 
                                             & (IData)(vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_IF_ETC___05F_d10536))))))
          ? (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_4_snd_fst___05Fh1034041)
          : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032650));
    vlTOPp->mkSam__DOT__product___05Fh1049477 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10843 
                                                 + 
                                                 (0xfffe00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 9U)));
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THE_ETC___05F_d79 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8259) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_c >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh10023 = (0xffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8259) 
                                                    - 
                                                    (vlTOPp->mkSam__DOT__mac_c 
                                                     >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh9948 = (0xffU 
                                                & ((vlTOPp->mkSam__DOT__mac_c 
                                                    >> 0x17U) 
                                                   - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8259)));
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d370 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25082
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d363);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF___05FETC___05F_d734 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561482) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh563171 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561482)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh563246 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561482) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1025 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578304
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1018);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_I_ETC___05F_d1389 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592858) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh594547 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592858)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh594622 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592858) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1680 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609680
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1673);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_I_ETC___05F_d2044 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624234) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh625923 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624234)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh625998 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624234) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2335 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641056
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2328);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_I_ETC___05F_d2699 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655611) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh657300 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655611)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh657375 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655611) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2990 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672433
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2983);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_I_ETC___05F_d3354 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687162) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh688851 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687162)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh688926 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687162) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3645 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh703984
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3638);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_I_ETC___05F_d4009 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718538) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh720227 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718538)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh720302 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718538) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4300 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735360
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4293);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_I_ETC___05F_d4664 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749914) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh751603 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749914)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh751678 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749914) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4955 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766736
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4948);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_I_ETC___05F_d5319 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781291) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh782980 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781291)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh783055 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781291) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5610 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798113
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5603);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_I_ETC___05F_d5974 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812842) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh814531 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812842)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh814606 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812842) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6265 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829664
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6258);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_I_ETC___05F_d6629 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844218) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh845907 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844218)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh845982 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844218) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6920 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861040
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6913);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_I_ETC___05F_d7284 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875594) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh877283 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875594)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh877358 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875594) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7575 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892416
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7568);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_I_ETC___05F_d7939 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906971) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh908660 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906971)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh908735 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906971) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8230 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923793
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8223);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_I_ETC___05F_d8594 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938523) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh940212 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938523)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh940287 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938523) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8885 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955345
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8878);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_I_ETC___05F_d9249 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969900) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh971589 = (0xffU 
                                                  & ((vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                                                      >> 0x17U) 
                                                     - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969900)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh971664 = (0xffU 
                                                  & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969900) 
                                                     - 
                                                     (vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                                                      >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9540 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986722
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9533);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_I_ETC___05F_d9904 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001277) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh1002966 = (0xffU 
                                                   & ((vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                                                       >> 0x17U) 
                                                      - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001277)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh1003041 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001277) 
                                                      - 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                                                       >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10195 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018099
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10188);
    vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_ETC___05F_d10559 
        = ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032655) 
           <= (0xffU & (vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                        >> 0x17U)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh1034344 = (0xffU 
                                                   & ((vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                                                       >> 0x17U) 
                                                      - (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032655)));
    vlTOPp->mkSam__DOT__delta_exp___05Fh1034419 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032655) 
                                                      - 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                                                       >> 0x17U)));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10850 
        = ((0x200U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049477
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10843);
    vlTOPp->mkSam__DOT__result_exp___05Fh8263 = (0xffU 
                                                 & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THE_ETC___05F_d79)
                                                     ? 
                                                    (vlTOPp->mkSam__DOT__mac_c 
                                                     >> 0x17U)
                                                     : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8259)));
    vlTOPp->mkSam__DOT__i___05Fh15991 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh10023) 
                                                  - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh10025 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh10023))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh8261 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh10023)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh16006 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh9948) 
                                                  - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh9950 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh9948))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh8260 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh9948)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh25059 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d370 
                                               + (0x1fffc00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh561486 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF___05FETC___05F_d734)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_0_0_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561482)));
    vlTOPp->mkSam__DOT__i___05Fh569229 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh563171) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh563173 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh563171))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh561483 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh563171)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh569214 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh563246) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh563248 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh563246))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh561484 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh563246)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh578281 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1025 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh592862 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_I_ETC___05F_d1389)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_0_1_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592858)));
    vlTOPp->mkSam__DOT__i___05Fh600605 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh594547) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh594549 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh594547))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh592859 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh594547)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh600590 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh594622) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh594624 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh594622))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh592860 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh594622)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh609657 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1680 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh624238 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_I_ETC___05F_d2044)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_0_2_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624234)));
    vlTOPp->mkSam__DOT__i___05Fh631981 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh625923) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh625925 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh625923))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh624235 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh625923)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh631966 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh625998) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh626000 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh625998))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh624236 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh625998)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh641033 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2335 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh655615 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_I_ETC___05F_d2699)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_0_3_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655611)));
    vlTOPp->mkSam__DOT__i___05Fh663358 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh657300) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh657302 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh657300))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh655612 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh657300)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh663343 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh657375) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh657377 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh657375))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh655613 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh657375)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh672410 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2990 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh687166 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_I_ETC___05F_d3354)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_0_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687162)));
    vlTOPp->mkSam__DOT__i___05Fh694909 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh688851) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh688853 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh688851))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh687163 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh688851)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh694894 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh688926) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh688928 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh688926))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh687164 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh688926)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh703961 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3645 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh718542 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_I_ETC___05F_d4009)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_1_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718538)));
    vlTOPp->mkSam__DOT__i___05Fh726285 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh720227) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh720229 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh720227))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh718539 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh720227)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh726270 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh720302) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh720304 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh720302))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh718540 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh720302)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh735337 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4300 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh749918 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_I_ETC___05F_d4664)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_2_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749914)));
    vlTOPp->mkSam__DOT__i___05Fh757661 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh751603) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh751605 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh751603))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh749915 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh751603)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh757646 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh751678) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh751680 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh751678))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh749916 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh751678)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh766713 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4955 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh781295 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_I_ETC___05F_d5319)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_1_3_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781291)));
    vlTOPp->mkSam__DOT__i___05Fh789038 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh782980) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh782982 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh782980))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh781292 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh782980)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh789023 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh783055) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh783057 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh783055))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh781293 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh783055)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh798090 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5610 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh812846 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_I_ETC___05F_d5974)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_0_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812842)));
    vlTOPp->mkSam__DOT__i___05Fh820589 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh814531) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh814533 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh814531))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh812843 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh814531)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh820574 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh814606) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh814608 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh814606))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh812844 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh814606)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh829641 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6265 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh844222 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_I_ETC___05F_d6629)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_1_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844218)));
    vlTOPp->mkSam__DOT__i___05Fh851965 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh845907) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh845909 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh845907))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh844219 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh845907)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh851950 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh845982) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh845984 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh845982))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh844220 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh845982)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh861017 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6920 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh875598 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_I_ETC___05F_d7284)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_2_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875594)));
    vlTOPp->mkSam__DOT__i___05Fh883341 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh877283) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh877285 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh877283))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh875595 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh877283)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh883326 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh877358) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh877360 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh877358))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh875596 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh877358)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh892393 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7575 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh906975 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_I_ETC___05F_d7939)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_2_3_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906971)));
    vlTOPp->mkSam__DOT__i___05Fh914718 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh908660) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh908662 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh908660))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh906972 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh908660)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh914703 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh908735) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh908737 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh908735))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh906973 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh908735)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh923770 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8230 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh938527 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_I_ETC___05F_d8594)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_0_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938523)));
    vlTOPp->mkSam__DOT__i___05Fh946270 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh940212) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh940214 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh940212))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh938524 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh940212)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh946255 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh940287) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh940289 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh940287))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh938525 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh940287)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh955322 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8885 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh969904 = (0xffU 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_I_ETC___05F_d9249)
                                                       ? 
                                                      (vlTOPp->mkSam__DOT__mac_matrix_3_1_c 
                                                       >> 0x17U)
                                                       : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969900)));
    vlTOPp->mkSam__DOT__i___05Fh977647 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh971589) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh971591 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh971589))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh969901 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh971589)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh977632 = (0xffU & ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh971664) 
                                                   - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh971666 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh971664))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh969902 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh971664)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh986699 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9540 
                                                + (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh1001281 = 
        (0xffU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_I_ETC___05F_d9904)
                   ? (vlTOPp->mkSam__DOT__mac_matrix_3_2_c 
                      >> 0x17U) : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001277)));
    vlTOPp->mkSam__DOT__i___05Fh1009024 = (0xffU & 
                                           ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1002966) 
                                            - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1002968 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1002966))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1001278 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1002966)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh1009009 = (0xffU & 
                                           ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1003041) 
                                            - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh1003043 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1003041))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1001279 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1003041)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh1018076 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10195 
                                                 + 
                                                 (0x1fffc00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                     << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05Fh1032659 = 
        (0xffU & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_ETC___05F_d10559)
                   ? (vlTOPp->mkSam__DOT__mac_matrix_3_3_c 
                      >> 0x17U) : (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032655)));
    vlTOPp->mkSam__DOT__i___05Fh1040402 = (0xffU & 
                                           ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1034344) 
                                            - (IData)(1U)));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1034346 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1034344))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1032656 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1034344)))
            : 0U);
    vlTOPp->mkSam__DOT__i___05Fh1040387 = (0xffU & 
                                           ((IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1034419) 
                                            - (IData)(1U)));
    vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh1034421 
        = ((0x17U >= (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1034419))
            ? (0xffffffU & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1032657 
                            >> (IData)(vlTOPp->mkSam__DOT__delta_exp___05Fh1034419)))
            : 0U);
    vlTOPp->mkSam__DOT__product___05Fh1049454 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10850 
                                                 + 
                                                 (0x1fffc00U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq17) 
                                                     << 0xaU)));
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh15928 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh8263)));
    vlTOPp->mkSam__DOT__round_flag___05Fh10024 = ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->mkSam__DOT__i___05Fh15991))) 
                                                  & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh8261 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->mkSam__DOT__i___05Fh15991))));
    vlTOPp->mkSam__DOT__x___05Fh10020 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THE_ETC___05F_d79)
                                          ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh8261
                                          : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh10025);
    vlTOPp->mkSam__DOT__round_flag___05Fh9949 = ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->mkSam__DOT__i___05Fh16006))) 
                                                 & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh8260 
                                                    >> 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh16006))));
    vlTOPp->mkSam__DOT__x___05Fh9061 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THE_ETC___05F_d79)
                                         ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh9950
                                         : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh8260);
    vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d378 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_EL_ETC___05F_d302))
            ? vlTOPp->mkSam__DOT__product___05Fh25059
            : vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d370);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh569151 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh561486)));
    vlTOPp->mkSam__DOT__round_flag___05Fh563172 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh569229))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh561483 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh569229))));
    vlTOPp->mkSam__DOT__x___05Fh562284 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF___05FETC___05F_d734)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh563173
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh561483);
    vlTOPp->mkSam__DOT__round_flag___05Fh563247 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh569214))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh561484 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh569214))));
    vlTOPp->mkSam__DOT__x___05Fh563243 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF___05FETC___05F_d734)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh561484
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh563248);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1033 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_mac___05FETC___05F_d957))
            ? vlTOPp->mkSam__DOT__product___05Fh578281
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1025);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh600527 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh592862)));
    vlTOPp->mkSam__DOT__round_flag___05Fh594548 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh600605))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh592859 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh600605))));
    vlTOPp->mkSam__DOT__x___05Fh593660 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_I_ETC___05F_d1389)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh594549
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh592859);
    vlTOPp->mkSam__DOT__round_flag___05Fh594623 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh600590))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh592860 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh600590))));
    vlTOPp->mkSam__DOT__x___05Fh594619 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_I_ETC___05F_d1389)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh592860
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh594624);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1688 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ma_ETC___05F_d1612))
            ? vlTOPp->mkSam__DOT__product___05Fh609657
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1680);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh631903 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh624238)));
    vlTOPp->mkSam__DOT__round_flag___05Fh625924 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh631981))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh624235 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh631981))));
    vlTOPp->mkSam__DOT__x___05Fh625036 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_I_ETC___05F_d2044)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh625925
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh624235);
    vlTOPp->mkSam__DOT__round_flag___05Fh625999 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh631966))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh624236 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh631966))));
    vlTOPp->mkSam__DOT__x___05Fh625995 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_I_ETC___05F_d2044)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh624236
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh626000);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2343 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ma_ETC___05F_d2267))
            ? vlTOPp->mkSam__DOT__product___05Fh641033
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2335);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh663280 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh655615)));
    vlTOPp->mkSam__DOT__round_flag___05Fh657301 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh663358))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh655612 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh663358))));
    vlTOPp->mkSam__DOT__x___05Fh656413 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_I_ETC___05F_d2699)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh657302
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh655612);
    vlTOPp->mkSam__DOT__round_flag___05Fh657376 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh663343))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh655613 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh663343))));
    vlTOPp->mkSam__DOT__x___05Fh657372 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_I_ETC___05F_d2699)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh655613
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh657377);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2998 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ma_ETC___05F_d2922))
            ? vlTOPp->mkSam__DOT__product___05Fh672410
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2990);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh694831 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh687166)));
    vlTOPp->mkSam__DOT__round_flag___05Fh688852 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh694909))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh687163 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh694909))));
    vlTOPp->mkSam__DOT__x___05Fh687964 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_I_ETC___05F_d3354)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh688853
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh687163);
    vlTOPp->mkSam__DOT__round_flag___05Fh688927 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh694894))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh687164 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh694894))));
    vlTOPp->mkSam__DOT__x___05Fh688923 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_I_ETC___05F_d3354)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh687164
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh688928);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3653 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ma_ETC___05F_d3577))
            ? vlTOPp->mkSam__DOT__product___05Fh703961
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3645);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh726207 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh718542)));
    vlTOPp->mkSam__DOT__round_flag___05Fh720228 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh726285))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh718539 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh726285))));
    vlTOPp->mkSam__DOT__x___05Fh719340 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_I_ETC___05F_d4009)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh720229
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh718539);
    vlTOPp->mkSam__DOT__round_flag___05Fh720303 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh726270))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh718540 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh726270))));
    vlTOPp->mkSam__DOT__x___05Fh720299 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_I_ETC___05F_d4009)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh718540
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh720304);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4308 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ma_ETC___05F_d4232))
            ? vlTOPp->mkSam__DOT__product___05Fh735337
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4300);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh757583 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh749918)));
    vlTOPp->mkSam__DOT__round_flag___05Fh751604 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh757661))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh749915 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh757661))));
    vlTOPp->mkSam__DOT__x___05Fh750716 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_I_ETC___05F_d4664)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh751605
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh749915);
    vlTOPp->mkSam__DOT__round_flag___05Fh751679 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh757646))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh749916 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh757646))));
    vlTOPp->mkSam__DOT__x___05Fh751675 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_I_ETC___05F_d4664)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh749916
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh751680);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4963 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ma_ETC___05F_d4887))
            ? vlTOPp->mkSam__DOT__product___05Fh766713
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4955);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh788960 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh781295)));
    vlTOPp->mkSam__DOT__round_flag___05Fh782981 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh789038))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh781292 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh789038))));
    vlTOPp->mkSam__DOT__x___05Fh782093 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_I_ETC___05F_d5319)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh782982
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh781292);
    vlTOPp->mkSam__DOT__round_flag___05Fh783056 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh789023))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh781293 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh789023))));
    vlTOPp->mkSam__DOT__x___05Fh783052 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_I_ETC___05F_d5319)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh781293
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh783057);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5618 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ma_ETC___05F_d5542))
            ? vlTOPp->mkSam__DOT__product___05Fh798090
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5610);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh820511 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh812846)));
    vlTOPp->mkSam__DOT__round_flag___05Fh814532 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh820589))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh812843 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh820589))));
    vlTOPp->mkSam__DOT__x___05Fh813644 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_I_ETC___05F_d5974)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh814533
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh812843);
    vlTOPp->mkSam__DOT__round_flag___05Fh814607 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh820574))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh812844 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh820574))));
    vlTOPp->mkSam__DOT__x___05Fh814603 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_I_ETC___05F_d5974)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh812844
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh814608);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6273 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ma_ETC___05F_d6197))
            ? vlTOPp->mkSam__DOT__product___05Fh829641
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6265);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh851887 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh844222)));
    vlTOPp->mkSam__DOT__round_flag___05Fh845908 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh851965))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh844219 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh851965))));
    vlTOPp->mkSam__DOT__x___05Fh845020 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_I_ETC___05F_d6629)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh845909
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh844219);
    vlTOPp->mkSam__DOT__round_flag___05Fh845983 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh851950))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh844220 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh851950))));
    vlTOPp->mkSam__DOT__x___05Fh845979 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_I_ETC___05F_d6629)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh844220
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh845984);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6928 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ma_ETC___05F_d6852))
            ? vlTOPp->mkSam__DOT__product___05Fh861017
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6920);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh883263 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh875598)));
    vlTOPp->mkSam__DOT__round_flag___05Fh877284 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh883341))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh875595 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh883341))));
    vlTOPp->mkSam__DOT__x___05Fh876396 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_I_ETC___05F_d7284)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh877285
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh875595);
    vlTOPp->mkSam__DOT__round_flag___05Fh877359 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh883326))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh875596 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh883326))));
    vlTOPp->mkSam__DOT__x___05Fh877355 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_I_ETC___05F_d7284)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh875596
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh877360);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7583 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ma_ETC___05F_d7507))
            ? vlTOPp->mkSam__DOT__product___05Fh892393
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7575);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh914640 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh906975)));
    vlTOPp->mkSam__DOT__round_flag___05Fh908661 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh914718))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh906972 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh914718))));
    vlTOPp->mkSam__DOT__x___05Fh907773 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_I_ETC___05F_d7939)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh908662
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh906972);
    vlTOPp->mkSam__DOT__round_flag___05Fh908736 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh914703))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh906973 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh914703))));
    vlTOPp->mkSam__DOT__x___05Fh908732 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_I_ETC___05F_d7939)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh906973
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh908737);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8238 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ma_ETC___05F_d8162))
            ? vlTOPp->mkSam__DOT__product___05Fh923770
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8230);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh946192 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh938527)));
    vlTOPp->mkSam__DOT__round_flag___05Fh940213 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh946270))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh938524 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh946270))));
    vlTOPp->mkSam__DOT__x___05Fh939325 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_I_ETC___05F_d8594)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh940214
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh938524);
    vlTOPp->mkSam__DOT__round_flag___05Fh940288 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh946255))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh938525 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh946255))));
    vlTOPp->mkSam__DOT__x___05Fh940284 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_I_ETC___05F_d8594)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh938525
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh940289);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8893 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ma_ETC___05F_d8817))
            ? vlTOPp->mkSam__DOT__product___05Fh955322
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_521_BIT_15_522_THEN_INV_ETC___05F_d8885);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh977569 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh969904)));
    vlTOPp->mkSam__DOT__round_flag___05Fh971590 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh977647))) 
                                                   & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh969901 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh977647))));
    vlTOPp->mkSam__DOT__x___05Fh970702 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_I_ETC___05F_d9249)
                                           ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh971591
                                           : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh969901);
    vlTOPp->mkSam__DOT__round_flag___05Fh971665 = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkSam__DOT__i___05Fh977632))) 
                                                   & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh969902 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->mkSam__DOT__i___05Fh977632))));
    vlTOPp->mkSam__DOT__x___05Fh971661 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_1_b_176_BIT_6_179_THEN_I_ETC___05F_d9249)
                                           ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh969902
                                           : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh971666);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9548 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ma_ETC___05F_d9472))
            ? vlTOPp->mkSam__DOT__product___05Fh986699
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_176_BIT_15_177_THEN_INV_ETC___05F_d9540);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1008946 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1001281)));
    vlTOPp->mkSam__DOT__round_flag___05Fh1002967 = 
        ((0x17U >= (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1009024))) 
         & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1001278 
            >> (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1009024))));
    vlTOPp->mkSam__DOT__x___05Fh1002079 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_I_ETC___05F_d9904)
                                            ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1002968
                                            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1001278);
    vlTOPp->mkSam__DOT__round_flag___05Fh1003042 = 
        ((0x17U >= (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1009009))) 
         & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1001279 
            >> (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1009009))));
    vlTOPp->mkSam__DOT__x___05Fh1003038 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_2_b_831_BIT_6_834_THEN_I_ETC___05F_d9904)
                                            ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1001279
                                            : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh1003043);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10203 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ma_ETC___05F_d10127))
            ? vlTOPp->mkSam__DOT__product___05Fh1018076
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_831_BIT_15_832_THEN_INV_ETC___05F_d10195);
    vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh1040324 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkSam__DOT__result_exp___05Fh1032659)));
    vlTOPp->mkSam__DOT__round_flag___05Fh1034345 = 
        ((0x17U >= (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1040402))) 
         & (vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1032656 
            >> (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1040402))));
    vlTOPp->mkSam__DOT__x___05Fh1033457 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_ETC___05F_d10559)
                                            ? vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1034346
                                            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh1032656);
    vlTOPp->mkSam__DOT__round_flag___05Fh1034420 = 
        ((0x17U >= (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1040387))) 
         & (vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1032657 
            >> (0x1fU & (IData)(vlTOPp->mkSam__DOT__i___05Fh1040387))));
    vlTOPp->mkSam__DOT__x___05Fh1034416 = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_0486_BIT_6_0489_THEN_ETC___05F_d10559)
                                            ? vlTOPp->mkSam__DOT__c_mant_aligned___05Fh1032657
                                            : vlTOPp->mkSam__DOT__c_mant_aligned___05F_1___05Fh1034421);
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10858 
        = ((0x400U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_INV___05FETC___05F_d10782))
            ? vlTOPp->mkSam__DOT__product___05Fh1049454
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_0486_BIT_15_0487_THEN_I_ETC___05F_d10850);
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh10022 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_b_BIT_6_THEN_IF_mac_b_BIT_5_0_THE_ETC___05F_d79)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh9949)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh10024));
    vlTOPp->mkSam__DOT__IF_x061_BIT_0_XOR_x0020_BIT_0_THEN_1_ELSE_0___05Fq19 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh9061 
                  ^ vlTOPp->mkSam__DOT__x___05Fh10020))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh14507 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh14262 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh14319 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh14074 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh14131 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh13886 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh13943 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh13698 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh13755 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh13510 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh13567 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh13322 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh13379 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh13134 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh13191 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh12946 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh13003 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh12758 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh12815 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh12570 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh12627 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh12382 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh12439 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh12194 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh12251 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh12006 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh12063 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh11818 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh11875 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh11630 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh11687 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh11442 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh11499 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh11254 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh11311 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh11066 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh11123 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh10878 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh10935 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh10690 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh10747 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh10502 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh10559 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh10314 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh10371 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                & vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh10126 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh9061 
                                                ^ vlTOPp->mkSam__DOT__x___05Fh10020) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh10127 = (1U & (vlTOPp->mkSam__DOT__x___05Fh9061 
                                               & vlTOPp->mkSam__DOT__x___05Fh10020));
    vlTOPp->mkSam__DOT__product___05Fh25036 = (vlTOPp->mkSam__DOT__IF_IF_mac_b_BIT_15_THEN_INV_mac_b_00_PLUS_1_01_ETC___05F_d378 
                                               + (0x3fff800U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_THEN_INV_mac_a_PLUS_1_ELSE_mac_a___05Fq1) 
                                                     << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh563245 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_0_b_61_BIT_6_64_THEN_IF___05FETC___05F_d734)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh563172)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh563247));
    vlTOPp->mkSam__DOT__IF_x62284_BIT_0_XOR_x63243_BIT_0_THEN_1_ELSE_0___05Fq18 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh562284 
                  ^ vlTOPp->mkSam__DOT__x___05Fh563243))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh567730 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh567485 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh567542 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh567297 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh567354 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh567109 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh567166 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh566921 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh566978 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh566733 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh566790 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh566545 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh566602 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh566357 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh566414 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh566169 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh566226 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh565981 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh566038 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh565793 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh565850 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh565605 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh565662 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh565417 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh565474 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh565229 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh565286 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh565041 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh565098 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh564853 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh564910 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh564665 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh564722 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh564477 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh564534 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh564289 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh564346 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh564101 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh564158 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh563913 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh563970 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh563725 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh563782 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh563537 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh563594 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 & vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh563349 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh562284 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh563243) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh563350 = (1U & (vlTOPp->mkSam__DOT__x___05Fh562284 
                                                & vlTOPp->mkSam__DOT__x___05Fh563243));
    vlTOPp->mkSam__DOT__product___05Fh578258 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_61_BIT_15_62_THEN_INV_m_ETC___05F_d1033 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh594621 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_1_b_316_BIT_6_319_THEN_I_ETC___05F_d1389)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh594548)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh594623));
    vlTOPp->mkSam__DOT__IF_x93660_BIT_0_XOR_x94619_BIT_0_THEN_1_ELSE_0___05Fq20 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh593660 
                  ^ vlTOPp->mkSam__DOT__x___05Fh594619))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh599106 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh598861 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh598918 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh598673 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh598730 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh598485 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh598542 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh598297 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh598354 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh598109 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh598166 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh597921 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh597978 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh597733 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh597790 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh597545 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh597602 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh597357 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh597414 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh597169 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh597226 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh596981 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh597038 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh596793 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh596850 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh596605 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh596662 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh596417 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh596474 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh596229 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh596286 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh596041 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh596098 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh595853 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh595910 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh595665 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh595722 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh595477 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh595534 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh595289 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh595346 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh595101 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh595158 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh594913 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh594970 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 & vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh594725 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh593660 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh594619) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh594726 = (1U & (vlTOPp->mkSam__DOT__x___05Fh593660 
                                                & vlTOPp->mkSam__DOT__x___05Fh594619));
    vlTOPp->mkSam__DOT__product___05Fh609634 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_316_BIT_15_317_THEN_INV_ETC___05F_d1688 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh625997 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_2_b_971_BIT_6_974_THEN_I_ETC___05F_d2044)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh625924)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh625999));
    vlTOPp->mkSam__DOT__IF_x25036_BIT_0_XOR_x25995_BIT_0_THEN_1_ELSE_0___05Fq21 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh625036 
                  ^ vlTOPp->mkSam__DOT__x___05Fh625995))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh630482 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh630237 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh630294 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh630049 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh630106 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh629861 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh629918 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh629673 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh629730 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh629485 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh629542 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh629297 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh629354 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh629109 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh629166 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh628921 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh628978 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh628733 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh628790 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh628545 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh628602 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh628357 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh628414 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh628169 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh628226 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh627981 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh628038 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh627793 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh627850 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh627605 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh627662 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh627417 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh627474 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh627229 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh627286 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh627041 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh627098 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh626853 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh626910 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh626665 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh626722 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh626477 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh626534 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh626289 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh626346 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 & vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh626101 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh625036 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh625995) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh626102 = (1U & (vlTOPp->mkSam__DOT__x___05Fh625036 
                                                & vlTOPp->mkSam__DOT__x___05Fh625995));
    vlTOPp->mkSam__DOT__product___05Fh641010 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_971_BIT_15_972_THEN_INV_ETC___05F_d2343 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh657374 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_0_3_b_626_BIT_6_629_THEN_I_ETC___05F_d2699)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh657301)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh657376));
    vlTOPp->mkSam__DOT__IF_x56413_BIT_0_XOR_x57372_BIT_0_THEN_1_ELSE_0___05Fq22 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh656413 
                  ^ vlTOPp->mkSam__DOT__x___05Fh657372))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh661859 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh661614 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh661671 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh661426 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh661483 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh661238 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh661295 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh661050 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh661107 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh660862 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh660919 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh660674 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh660731 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh660486 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh660543 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh660298 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh660355 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh660110 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh660167 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh659922 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh659979 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh659734 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh659791 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh659546 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh659603 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh659358 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh659415 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh659170 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh659227 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh658982 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh659039 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh658794 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh658851 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh658606 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh658663 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh658418 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh658475 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh658230 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh658287 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh658042 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh658099 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh657854 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh657911 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh657666 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh657723 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 & vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh657478 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh656413 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh657372) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh657479 = (1U & (vlTOPp->mkSam__DOT__x___05Fh656413 
                                                & vlTOPp->mkSam__DOT__x___05Fh657372));
    vlTOPp->mkSam__DOT__product___05Fh672387 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_626_BIT_15_627_THEN_INV_ETC___05F_d2998 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh688925 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_0_b_281_BIT_6_284_THEN_I_ETC___05F_d3354)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh688852)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh688927));
    vlTOPp->mkSam__DOT__IF_x87964_BIT_0_XOR_x88923_BIT_0_THEN_1_ELSE_0___05Fq23 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh687964 
                  ^ vlTOPp->mkSam__DOT__x___05Fh688923))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh693410 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh693165 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh693222 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh692977 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh693034 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh692789 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh692846 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh692601 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh692658 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh692413 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh692470 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh692225 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh692282 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh692037 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh692094 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh691849 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh691906 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh691661 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh691718 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh691473 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh691530 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh691285 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh691342 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh691097 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh691154 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh690909 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh690966 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh690721 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh690778 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh690533 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh690590 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh690345 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh690402 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh690157 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh690214 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh689969 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh690026 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh689781 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh689838 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh689593 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh689650 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh689405 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh689462 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh689217 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh689274 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 & vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh689029 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh687964 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh688923) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh689030 = (1U & (vlTOPp->mkSam__DOT__x___05Fh687964 
                                                & vlTOPp->mkSam__DOT__x___05Fh688923));
    vlTOPp->mkSam__DOT__product___05Fh703938 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_281_BIT_15_282_THEN_INV_ETC___05F_d3653 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh720301 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_1_b_936_BIT_6_939_THEN_I_ETC___05F_d4009)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh720228)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh720303));
    vlTOPp->mkSam__DOT__IF_x19340_BIT_0_XOR_x20299_BIT_0_THEN_1_ELSE_0___05Fq24 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh719340 
                  ^ vlTOPp->mkSam__DOT__x___05Fh720299))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh724786 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh724541 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh724598 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh724353 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh724410 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh724165 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh724222 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh723977 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh724034 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh723789 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh723846 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh723601 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh723658 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh723413 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh723470 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh723225 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh723282 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh723037 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh723094 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh722849 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh722906 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh722661 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh722718 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh722473 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh722530 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh722285 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh722342 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh722097 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh722154 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh721909 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh721966 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh721721 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh721778 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh721533 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh721590 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh721345 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh721402 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh721157 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh721214 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh720969 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh721026 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh720781 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh720838 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh720593 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh720650 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 & vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh720405 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh719340 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh720299) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh720406 = (1U & (vlTOPp->mkSam__DOT__x___05Fh719340 
                                                & vlTOPp->mkSam__DOT__x___05Fh720299));
    vlTOPp->mkSam__DOT__product___05Fh735314 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_936_BIT_15_937_THEN_INV_ETC___05F_d4308 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh751677 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_2_b_591_BIT_6_594_THEN_I_ETC___05F_d4664)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh751604)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh751679));
    vlTOPp->mkSam__DOT__IF_x50716_BIT_0_XOR_x51675_BIT_0_THEN_1_ELSE_0___05Fq25 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh750716 
                  ^ vlTOPp->mkSam__DOT__x___05Fh751675))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh756162 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh755917 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh755974 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh755729 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh755786 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh755541 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh755598 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh755353 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh755410 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh755165 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh755222 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh754977 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh755034 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh754789 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh754846 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh754601 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh754658 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh754413 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh754470 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh754225 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh754282 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh754037 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh754094 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh753849 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh753906 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh753661 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh753718 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh753473 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh753530 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh753285 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh753342 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh753097 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh753154 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh752909 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh752966 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh752721 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh752778 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh752533 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh752590 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh752345 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh752402 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh752157 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh752214 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh751969 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh752026 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 & vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh751781 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh750716 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh751675) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh751782 = (1U & (vlTOPp->mkSam__DOT__x___05Fh750716 
                                                & vlTOPp->mkSam__DOT__x___05Fh751675));
    vlTOPp->mkSam__DOT__product___05Fh766690 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_591_BIT_15_592_THEN_INV_ETC___05F_d4963 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh783054 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_1_3_b_246_BIT_6_249_THEN_I_ETC___05F_d5319)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh782981)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh783056));
    vlTOPp->mkSam__DOT__IF_x82093_BIT_0_XOR_x83052_BIT_0_THEN_1_ELSE_0___05Fq26 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh782093 
                  ^ vlTOPp->mkSam__DOT__x___05Fh783052))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh787539 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh787294 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh787351 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh787106 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh787163 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh786918 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh786975 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh786730 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh786787 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh786542 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh786599 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh786354 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh786411 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh786166 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh786223 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh785978 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh786035 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh785790 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh785847 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh785602 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh785659 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh785414 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh785471 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh785226 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh785283 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh785038 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh785095 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh784850 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh784907 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh784662 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh784719 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh784474 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh784531 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh784286 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh784343 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh784098 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh784155 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh783910 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh783967 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh783722 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh783779 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh783534 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh783591 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh783346 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh783403 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 & vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh783158 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh782093 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh783052) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh783159 = (1U & (vlTOPp->mkSam__DOT__x___05Fh782093 
                                                & vlTOPp->mkSam__DOT__x___05Fh783052));
    vlTOPp->mkSam__DOT__product___05Fh798067 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_246_BIT_15_247_THEN_INV_ETC___05F_d5618 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh814605 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_0_b_901_BIT_6_904_THEN_I_ETC___05F_d5974)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh814532)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh814607));
    vlTOPp->mkSam__DOT__IF_x13644_BIT_0_XOR_x14603_BIT_0_THEN_1_ELSE_0___05Fq27 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh813644 
                  ^ vlTOPp->mkSam__DOT__x___05Fh814603))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh819090 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh818845 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh818902 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh818657 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh818714 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh818469 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh818526 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh818281 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh818338 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh818093 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh818150 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh817905 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh817962 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh817717 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh817774 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh817529 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh817586 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh817341 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh817398 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh817153 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh817210 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh816965 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh817022 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh816777 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh816834 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh816589 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh816646 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh816401 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh816458 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh816213 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh816270 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh816025 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh816082 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh815837 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh815894 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh815649 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh815706 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh815461 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh815518 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh815273 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh815330 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh815085 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh815142 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh814897 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh814954 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 & vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh814709 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh813644 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh814603) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh814710 = (1U & (vlTOPp->mkSam__DOT__x___05Fh813644 
                                                & vlTOPp->mkSam__DOT__x___05Fh814603));
    vlTOPp->mkSam__DOT__product___05Fh829618 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_901_BIT_15_902_THEN_INV_ETC___05F_d6273 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh845981 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_1_b_556_BIT_6_559_THEN_I_ETC___05F_d6629)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh845908)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh845983));
    vlTOPp->mkSam__DOT__IF_x45020_BIT_0_XOR_x45979_BIT_0_THEN_1_ELSE_0___05Fq28 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh845020 
                  ^ vlTOPp->mkSam__DOT__x___05Fh845979))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh850466 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh850221 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh850278 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh850033 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh850090 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh849845 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh849902 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh849657 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh849714 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh849469 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh849526 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh849281 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh849338 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh849093 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh849150 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh848905 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh848962 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh848717 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh848774 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh848529 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh848586 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh848341 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh848398 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh848153 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh848210 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh847965 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh848022 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh847777 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh847834 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh847589 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh847646 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh847401 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh847458 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh847213 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh847270 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh847025 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh847082 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh846837 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh846894 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh846649 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh846706 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh846461 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh846518 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh846273 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh846330 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 & vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh846085 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh845020 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh845979) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh846086 = (1U & (vlTOPp->mkSam__DOT__x___05Fh845020 
                                                & vlTOPp->mkSam__DOT__x___05Fh845979));
    vlTOPp->mkSam__DOT__product___05Fh860994 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_556_BIT_15_557_THEN_INV_ETC___05F_d6928 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh877357 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_2_b_211_BIT_6_214_THEN_I_ETC___05F_d7284)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh877284)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh877359));
    vlTOPp->mkSam__DOT__IF_x76396_BIT_0_XOR_x77355_BIT_0_THEN_1_ELSE_0___05Fq29 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh876396 
                  ^ vlTOPp->mkSam__DOT__x___05Fh877355))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh881842 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh881597 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh881654 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh881409 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh881466 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh881221 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh881278 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh881033 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh881090 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh880845 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh880902 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh880657 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh880714 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh880469 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh880526 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh880281 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh880338 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh880093 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh880150 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh879905 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh879962 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh879717 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh879774 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh879529 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh879586 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh879341 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh879398 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh879153 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh879210 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh878965 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh879022 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh878777 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh878834 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh878589 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh878646 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh878401 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh878458 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh878213 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh878270 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh878025 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh878082 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh877837 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh877894 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh877649 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh877706 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 & vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh877461 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh876396 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh877355) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh877462 = (1U & (vlTOPp->mkSam__DOT__x___05Fh876396 
                                                & vlTOPp->mkSam__DOT__x___05Fh877355));
    vlTOPp->mkSam__DOT__product___05Fh892370 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_211_BIT_15_212_THEN_INV_ETC___05F_d7583 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh908734 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_2_3_b_866_BIT_6_869_THEN_I_ETC___05F_d7939)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh908661)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh908736));
    vlTOPp->mkSam__DOT__IF_x07773_BIT_0_XOR_x08732_BIT_0_THEN_1_ELSE_0___05Fq30 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh907773 
                  ^ vlTOPp->mkSam__DOT__x___05Fh908732))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh913219 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh912974 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh913031 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh912786 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh912843 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh912598 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh912655 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh912410 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh912467 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh912222 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh912279 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh912034 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh912091 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh911846 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh911903 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh911658 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh911715 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh911470 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh911527 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh911282 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh911339 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh911094 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh911151 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh910906 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh910963 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh910718 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh910775 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh910530 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh910587 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh910342 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh910399 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh910154 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh910211 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh909966 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh910023 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh909778 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh909835 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh909590 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh909647 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh909402 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh909459 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh909214 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh909271 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh909026 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh909083 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 & vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh908838 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh907773 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh908732) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh908839 = (1U & (vlTOPp->mkSam__DOT__x___05Fh907773 
                                                & vlTOPp->mkSam__DOT__x___05Fh908732));
    vlTOPp->mkSam__DOT__product___05Fh923747 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_866_BIT_15_867_THEN_INV_ETC___05F_d8238 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh940286 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_0_b_521_BIT_6_524_THEN_I_ETC___05F_d8594)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh940213)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh940288));
    vlTOPp->mkSam__DOT__IF_x39325_BIT_0_XOR_x40284_BIT_0_THEN_1_ELSE_0___05Fq31 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh939325 
                  ^ vlTOPp->mkSam__DOT__x___05Fh940284))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh944771 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh944526 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh944583 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh944338 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh944395 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh944150 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh944207 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh943962 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh944019 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh943774 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh943831 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh943586 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh943643 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh943398 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh943455 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh939325 
                                                 & vlTOPp->mkSam__DOT__x___05Fh940284) 
                                                >> 0x10U));
}
