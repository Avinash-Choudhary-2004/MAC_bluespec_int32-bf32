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
    vlTOPp->mkMac__DOT__CAN_FIRE_read_A = 1U;
    vlTOPp->mkMac__DOT__CAN_FIRE_read_B = 1U;
    vlTOPp->mkMac__DOT__CAN_FIRE_read_C = 1U;
    vlTOPp->mkMac__DOT__CAN_FIRE_read_S = 1U;
    vlTOPp->mkMac__DOT__CAN_FIRE_mac_calc = 1U;
    vlTOPp->mkMac__DOT__RDY_read_A = 1U;
    vlTOPp->mkMac__DOT__RDY_read_B = 1U;
    vlTOPp->mkMac__DOT__RDY_read_C = 1U;
    vlTOPp->mkMac__DOT__RDY_read_S = 1U;
    vlTOPp->mkMac__DOT__RDY_mac_calc = 1U;
    vlTOPp->mkMac__DOT__a = 0xaaaaU;
    vlTOPp->mkMac__DOT__b = 0xaaaaU;
    vlTOPp->mkMac__DOT__c = 0xaaaaaaaaU;
    vlTOPp->mkMac__DOT__out = 0xaaaaaaaaU;
    vlTOPp->mkMac__DOT__s = 0U;
    vlTOPp->RDY_read_A = vlTOPp->mkMac__DOT__RDY_read_A;
    vlTOPp->RDY_read_B = vlTOPp->mkMac__DOT__RDY_read_B;
    vlTOPp->RDY_read_C = vlTOPp->mkMac__DOT__RDY_read_C;
    vlTOPp->RDY_read_S = vlTOPp->mkMac__DOT__RDY_read_S;
    vlTOPp->RDY_mac_calc = vlTOPp->mkMac__DOT__RDY_mac_calc;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMac__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkMac__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkMac__DOT__read_A_a_in = vlTOPp->read_A_a_in;
    vlTOPp->mkMac__DOT__EN_read_A = vlTOPp->EN_read_A;
    vlTOPp->mkMac__DOT__read_B_b_in = vlTOPp->read_B_b_in;
    vlTOPp->mkMac__DOT__EN_read_B = vlTOPp->EN_read_B;
    vlTOPp->mkMac__DOT__read_C_c_in = vlTOPp->read_C_c_in;
    vlTOPp->mkMac__DOT__EN_read_C = vlTOPp->EN_read_C;
    vlTOPp->mkMac__DOT__read_S_s_in = vlTOPp->read_S_s_in;
    vlTOPp->mkMac__DOT__EN_read_S = vlTOPp->EN_read_S;
    vlTOPp->mkMac__DOT__EN_mac_calc = vlTOPp->EN_mac_calc;
    vlTOPp->mkMac__DOT__WILL_FIRE_read_A = vlTOPp->EN_read_A;
    vlTOPp->mkMac__DOT__WILL_FIRE_read_B = vlTOPp->EN_read_B;
    vlTOPp->mkMac__DOT__WILL_FIRE_read_C = vlTOPp->EN_read_C;
    vlTOPp->mkMac__DOT__WILL_FIRE_read_S = vlTOPp->EN_read_S;
    vlTOPp->mkMac__DOT__WILL_FIRE_mac_calc = vlTOPp->EN_mac_calc;
    vlTOPp->mkMac__DOT__a_D_IN = vlTOPp->read_A_a_in;
    vlTOPp->mkMac__DOT__a_EN = vlTOPp->EN_read_A;
    vlTOPp->mkMac__DOT__b_D_IN = vlTOPp->read_B_b_in;
    vlTOPp->mkMac__DOT__b_EN = vlTOPp->EN_read_B;
    vlTOPp->mkMac__DOT__c_D_IN = vlTOPp->read_C_c_in;
    vlTOPp->mkMac__DOT__c_EN = vlTOPp->EN_read_C;
    vlTOPp->mkMac__DOT__out_EN = vlTOPp->EN_mac_calc;
    vlTOPp->mkMac__DOT__s_D_IN = vlTOPp->read_S_s_in;
    vlTOPp->mkMac__DOT__s_EN = vlTOPp->EN_read_S;
    vlTOPp->RDY_read_A = vlTOPp->mkMac__DOT__RDY_read_A;
    vlTOPp->RDY_read_B = vlTOPp->mkMac__DOT__RDY_read_B;
    vlTOPp->RDY_read_C = vlTOPp->mkMac__DOT__RDY_read_C;
    vlTOPp->RDY_read_S = vlTOPp->mkMac__DOT__RDY_read_S;
    vlTOPp->RDY_mac_calc = vlTOPp->mkMac__DOT__RDY_mac_calc;
    vlTOPp->mkMac__DOT__mac_calc = vlTOPp->mkMac__DOT__out;
    vlTOPp->mkMac__DOT__c_mant_aligned___05Fh337 = 
        (0x800000U | (0x7fffffU & vlTOPp->mkMac__DOT__c));
    vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkMac__DOT__b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkMac__DOT__b)))
                       : (IData)(vlTOPp->mkMac__DOT__b)));
    vlTOPp->mkMac__DOT__x___05Fh1800 = (0xffU & (((IData)(vlTOPp->mkMac__DOT__a) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMac__DOT__b) 
                                                  >> 7U)));
    vlTOPp->mkMac__DOT__product___05Fh1566 = (0x80U 
                                              | (0x7fU 
                                                 & (IData)(vlTOPp->mkMac__DOT__a)));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkMac__DOT__a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkMac__DOT__a)))
                       : (IData)(vlTOPp->mkMac__DOT__a)));
    vlTOPp->mac_calc = vlTOPp->mkMac__DOT__mac_calc;
    vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1619 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkMac__DOT__x___05Fh1800)));
    vlTOPp->mkMac__DOT__result_exp___05Fh326 = (0xffU 
                                                & ((IData)(0x81U) 
                                                   + (IData)(vlTOPp->mkMac__DOT__x___05Fh1800)));
    vlTOPp->mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16 
        = ((1U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1566)
            : 0U);
    vlTOPp->mkMac__DOT__product___05Fh9699 = (0x7fffU 
                                              & (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1));
    vlTOPp->mkMac__DOT__product___05Fh1543 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16) 
                                                 + 
                                                 (0x100U 
                                                  | (0xfeU 
                                                     & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                        << 1U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d321 
        = ((1U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9699
            : 0U);
    vlTOPp->mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19 
        = ((2U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1543)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16));
    vlTOPp->mkMac__DOT__product___05Fh9676 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d321 
                                              + (0xfffeU 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 1U)));
    vlTOPp->mkMac__DOT__product___05Fh1520 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19) 
                                                 + 
                                                 (0x200U 
                                                  | (0x1fcU 
                                                     & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                        << 2U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d324 
        = ((2U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9676
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d321);
    vlTOPp->mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23 
        = ((4U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1520)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19));
    vlTOPp->mkMac__DOT__product___05Fh9653 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d324 
                                              + (0x1fffcU 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 2U)));
    vlTOPp->mkMac__DOT__product___05Fh1497 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23) 
                                                 + 
                                                 (0x400U 
                                                  | (0x3f8U 
                                                     & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                        << 3U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d328 
        = ((4U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9653
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d324);
    vlTOPp->mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27 
        = ((8U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1497)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23));
    vlTOPp->mkMac__DOT__product___05Fh9630 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d328 
                                              + (0x3fff8U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 3U)));
    vlTOPp->mkMac__DOT__product___05Fh1474 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27) 
                                                 + 
                                                 (0x800U 
                                                  | (0x7f0U 
                                                     & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                        << 4U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d332 
        = ((8U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9630
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d328);
    vlTOPp->mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32 
        = ((0x10U & (IData)(vlTOPp->mkMac__DOT__b))
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1474)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27));
    vlTOPp->mkMac__DOT__product___05Fh9607 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d332 
                                              + (0x7fff0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 4U)));
    vlTOPp->mkMac__DOT__product___05Fh1451 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32) 
                                                 + 
                                                 (0x1000U 
                                                  | (0xfe0U 
                                                     & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                        << 5U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d337 
        = ((0x10U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9607
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d332);
    vlTOPp->mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37 
        = ((0x20U & (IData)(vlTOPp->mkMac__DOT__b))
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1451)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32));
    vlTOPp->mkMac__DOT__product___05Fh9584 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d337 
                                              + (0xfffe0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 5U)));
    vlTOPp->mkMac__DOT__product___05Fh1428 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37) 
                                                 + 
                                                 (0x2000U 
                                                  | (0x1fc0U 
                                                     & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                        << 6U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d342 
        = ((0x20U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9584
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d337);
    vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkMac__DOT__b))
                        ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1428)
                        : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkMac__DOT__a) 
                                               << 7U)))));
    vlTOPp->mkMac__DOT__product___05Fh9561 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d342 
                                              + (0x1fffc0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 6U)));
    vlTOPp->mkMac__DOT__result_exp___05Fh330 = ((0x8000U 
                                                 & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48))
                                                 ? (IData)(vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1619)
                                                 : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh326));
    vlTOPp->mkMac__DOT__result_mant___05F_1___05Fh1618 
        = (0xfffeU & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48) 
                      << 1U));
    vlTOPp->mkMac__DOT__result_mant___05Fh1640 = (0xfffcU 
                                                  & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48) 
                                                     << 2U));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d348 
        = ((0x40U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9561
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d342);
    vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1783 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh330)));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54 
        = ((0x8000U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48))
            ? (IData)(vlTOPp->mkMac__DOT__result_mant___05F_1___05Fh1618)
            : (IData)(vlTOPp->mkMac__DOT__result_mant___05Fh1640));
    vlTOPp->mkMac__DOT__product___05Fh9538 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d348 
                                              + (0x3fff80U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 7U)));
    vlTOPp->mkMac__DOT__rounded_result_mant___05Fh1734 
        = (0x7fU & ((IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54) 
                    >> 9U));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d354 
        = ((0x80U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9538
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d348);
    vlTOPp->mkMac__DOT___0_CONCAT_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d64 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMac__DOT__rounded_result_mant___05Fh1734)));
    vlTOPp->mkMac__DOT__product___05Fh9515 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d354 
                                              + (0x7fff00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 8U)));
    vlTOPp->mkMac__DOT___theResult___05F___05F_4_fst___05Fh1730 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54) 
                               >> 8U) & (((IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54))))))
                        ? (IData)(vlTOPp->mkMac__DOT___0_CONCAT_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d64)
                        : ((IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54) 
                           >> 9U)) << 9U));
    vlTOPp->mkMac__DOT___theResult___05F___05F_4_snd_fst___05Fh1738 
        = ((0x80U & (IData)(vlTOPp->mkMac__DOT___0_CONCAT_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d64))
            ? (IData)(vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1783)
            : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh330));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d361 
        = ((0x100U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9515
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d354);
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh336 
        = (0x800000U | ((IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_4_fst___05Fh1730) 
                        << 7U));
    vlTOPp->mkMac__DOT__result_exp___05Fh335 = ((1U 
                                                 & (((IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54) 
                                                     >> 8U) 
                                                    & (((IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54) 
                                                        >> 9U) 
                                                       | (0U 
                                                          != 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54))))))
                                                 ? (IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_4_snd_fst___05Fh1738)
                                                 : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh330));
    vlTOPp->mkMac__DOT__product___05Fh9492 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d361 
                                              + (0xfffe00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 9U)));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d77 
        = ((IData)(vlTOPp->mkMac__DOT__result_exp___05Fh335) 
           <= (0xffU & (vlTOPp->mkMac__DOT__c >> 0x17U)));
    vlTOPp->mkMac__DOT__delta_exp___05Fh2042 = (0xffU 
                                                & ((vlTOPp->mkMac__DOT__c 
                                                    >> 0x17U) 
                                                   - (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh335)));
    vlTOPp->mkMac__DOT__delta_exp___05Fh2117 = (0xffU 
                                                & ((IData)(vlTOPp->mkMac__DOT__result_exp___05Fh335) 
                                                   - 
                                                   (vlTOPp->mkMac__DOT__c 
                                                    >> 0x17U)));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d368 
        = ((0x200U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9492
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d361);
    vlTOPp->mkMac__DOT__result_exp___05Fh339 = (0xffU 
                                                & ((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d77)
                                                    ? 
                                                   (vlTOPp->mkMac__DOT__c 
                                                    >> 0x17U)
                                                    : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh335)));
    vlTOPp->mkMac__DOT__i___05Fh8100 = (0xffU & ((IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh2042) 
                                                 - (IData)(1U)));
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2044 
        = ((0x17U >= (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh2042))
            ? (0xffffffU & (vlTOPp->mkMac__DOT__result_mant_aligned___05Fh336 
                            >> (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh2042)))
            : 0U);
    vlTOPp->mkMac__DOT__i___05Fh8085 = (0xffU & ((IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh2117) 
                                                 - (IData)(1U)));
    vlTOPp->mkMac__DOT__c_mant_aligned___05F_1___05Fh2119 
        = ((0x17U >= (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh2117))
            ? (0xffffffU & (vlTOPp->mkMac__DOT__c_mant_aligned___05Fh337 
                            >> (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh2117)))
            : 0U);
    vlTOPp->mkMac__DOT__product___05Fh9469 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d368 
                                              + (0x1fffc00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xaU)));
    vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh8022 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh339)));
    vlTOPp->mkMac__DOT__round_flag___05Fh2043 = ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->mkMac__DOT__i___05Fh8100))) 
                                                 & (vlTOPp->mkMac__DOT__result_mant_aligned___05Fh336 
                                                    >> 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkMac__DOT__i___05Fh8100))));
    vlTOPp->mkMac__DOT__x___05Fh1153 = ((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d77)
                                         ? vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2044
                                         : vlTOPp->mkMac__DOT__result_mant_aligned___05Fh336);
    vlTOPp->mkMac__DOT__round_flag___05Fh2118 = ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->mkMac__DOT__i___05Fh8085))) 
                                                 & (vlTOPp->mkMac__DOT__c_mant_aligned___05Fh337 
                                                    >> 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkMac__DOT__i___05Fh8085))));
    vlTOPp->mkMac__DOT__x___05Fh2114 = ((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d77)
                                         ? vlTOPp->mkMac__DOT__c_mant_aligned___05Fh337
                                         : vlTOPp->mkMac__DOT__c_mant_aligned___05F_1___05Fh2119);
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d376 
        = ((0x400U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9469
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d368);
    vlTOPp->mkMac__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh2116 
        = ((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d77)
            ? (IData)(vlTOPp->mkMac__DOT__round_flag___05Fh2043)
            : (IData)(vlTOPp->mkMac__DOT__round_flag___05Fh2118));
    vlTOPp->mkMac__DOT__IF_x153_BIT_0_XOR_x114_BIT_0_THEN_1_ELSE_0___05Fq2 
        = ((1U & (vlTOPp->mkMac__DOT__x___05Fh1153 
                  ^ vlTOPp->mkMac__DOT__x___05Fh2114))
            ? 1U : 0U);
    vlTOPp->mkMac__DOT__x___05Fh6601 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh6356 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh6413 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh6168 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh6225 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh5980 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh6037 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh5792 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh5849 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh5604 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh5661 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh5416 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh5473 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh5228 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh5285 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh5040 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh5097 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh4852 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh4909 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh4664 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh4721 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh4476 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh4533 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh4288 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh4345 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh4100 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh4157 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh3912 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh3969 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh3724 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh3781 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh3536 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh3593 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh3348 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh3405 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh3160 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh3217 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh2972 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh3029 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh2784 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh2841 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh2596 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh2653 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh2408 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh2465 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               & vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__x___05Fh2220 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1153 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh2114) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__y___05Fh2221 = (1U & (vlTOPp->mkMac__DOT__x___05Fh1153 
                                              & vlTOPp->mkMac__DOT__x___05Fh2114));
    vlTOPp->mkMac__DOT__product___05Fh9446 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d376 
                                              + (0x3fff800U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xbU)));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d268 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2220) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2221));
    vlTOPp->mkMac__DOT__y___05Fh2466 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2221) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2220));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d384 
        = ((0x800U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9446
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d376);
    vlTOPp->mkMac__DOT__y___05Fh2409 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2465) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2466));
    vlTOPp->mkMac__DOT__product___05Fh9423 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d384 
                                              + (0x7fff000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xcU)));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d267 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2408) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2409));
    vlTOPp->mkMac__DOT__y___05Fh2654 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2409) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2408));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d393 
        = ((0x1000U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9423
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d384);
    vlTOPp->mkMac__DOT__y___05Fh2597 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2653) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2654));
    vlTOPp->mkMac__DOT__product___05Fh9400 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d393 
                                              + (0xfffe000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xdU)));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d266 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2596) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2597));
    vlTOPp->mkMac__DOT__y___05Fh2842 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2597) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2596));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d402 
        = ((0x2000U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9400
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d393);
    vlTOPp->mkMac__DOT__y___05Fh2785 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2841) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2842));
    vlTOPp->mkMac__DOT__product___05Fh9377 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d402 
                                              + (0x1fffc000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xeU)));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d265 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2784) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2785));
    vlTOPp->mkMac__DOT__y___05Fh3030 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2785) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2784));
    vlTOPp->mkMac__DOT__product___05F_2___05Fh8929 
        = ((0x4000U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300))
            ? vlTOPp->mkMac__DOT__product___05Fh9377
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d402);
    vlTOPp->mkMac__DOT__y___05Fh2973 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3029) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3030));
    vlTOPp->mkMac__DOT__product___05F_1___05Fh8975 
        = (~ vlTOPp->mkMac__DOT__product___05F_2___05Fh8929);
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d264 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2972) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2973));
    vlTOPp->mkMac__DOT__y___05Fh3218 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2973) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2972));
    vlTOPp->mkMac__DOT__product___05F_1___05Fh8976 
        = ((IData)(1U) + vlTOPp->mkMac__DOT__product___05F_1___05Fh8975);
    vlTOPp->mkMac__DOT__y___05Fh3161 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3217) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3218));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
        = (((1U & ((IData)(vlTOPp->mkMac__DOT__a) >> 0xfU)) 
            == (1U & ((IData)(vlTOPp->mkMac__DOT__b) 
                      >> 0xfU))) ? vlTOPp->mkMac__DOT__product___05F_2___05Fh8929
            : vlTOPp->mkMac__DOT__product___05F_1___05Fh8976);
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d263 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3160) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3161));
    vlTOPp->mkMac__DOT__y___05Fh3406 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3161) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3160));
    vlTOPp->mkMac__DOT__x___05Fh15669 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1fU));
    vlTOPp->mkMac__DOT__x___05Fh15728 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1eU));
    vlTOPp->mkMac__DOT__x___05Fh15475 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1eU));
    vlTOPp->mkMac__DOT__x___05Fh15534 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1dU));
    vlTOPp->mkMac__DOT__x___05Fh15281 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1dU));
    vlTOPp->mkMac__DOT__x___05Fh15340 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1cU));
    vlTOPp->mkMac__DOT__x___05Fh15087 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1cU));
    vlTOPp->mkMac__DOT__x___05Fh15146 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1bU));
    vlTOPp->mkMac__DOT__x___05Fh14893 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1bU));
    vlTOPp->mkMac__DOT__x___05Fh14952 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1aU));
    vlTOPp->mkMac__DOT__x___05Fh14699 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1aU));
    vlTOPp->mkMac__DOT__x___05Fh14758 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x19U));
    vlTOPp->mkMac__DOT__x___05Fh14505 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x19U));
    vlTOPp->mkMac__DOT__x___05Fh14564 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x18U));
    vlTOPp->mkMac__DOT__x___05Fh14311 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x18U));
    vlTOPp->mkMac__DOT__IF_IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_ETC___05Fq3 
        = ((1U & (vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                  ^ vlTOPp->mkMac__DOT__c)) ? 1U : 0U);
    vlTOPp->mkMac__DOT__x___05Fh14370 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh14117 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh14176 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh13923 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh13982 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh13729 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh13788 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh13535 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh13594 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh13341 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh13400 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh13147 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh13206 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh12953 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh13012 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh12759 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh12818 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh12565 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh12624 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh12371 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh12430 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh12177 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh12236 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh11983 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh12042 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh11789 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh11848 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh11595 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh11654 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh11401 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh11460 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh11207 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh11266 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh11013 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh11072 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh10819 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh10878 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh10625 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh10684 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh10431 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh10490 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh10237 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh10296 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh10043 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh10102 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 1U));
    vlTOPp->mkMac__DOT__x___05Fh9849 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                               ^ vlTOPp->mkMac__DOT__c) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__y___05Fh9850 = (1U & (vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 
                                              & vlTOPp->mkMac__DOT__c));
    vlTOPp->mkMac__DOT__y___05Fh3349 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3405) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3406));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d636 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh9849) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh9850)) 
            << 1U) | (1U & vlTOPp->mkMac__DOT__IF_IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_ETC___05Fq3));
    vlTOPp->mkMac__DOT__y___05Fh10103 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh9850) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh9849));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d262 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3348) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3349));
    vlTOPp->mkMac__DOT__y___05Fh3594 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3349) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3348));
    vlTOPp->mkMac__DOT__y___05Fh10044 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10102) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10103));
    vlTOPp->mkMac__DOT__y___05Fh3537 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3593) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3594));
    vlTOPp->mkMac__DOT__y___05Fh10297 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10044) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10043));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d261 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3536) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3537));
    vlTOPp->mkMac__DOT__y___05Fh3782 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3537) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3536));
    vlTOPp->mkMac__DOT__y___05Fh10238 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10296) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10297));
    vlTOPp->mkMac__DOT__y___05Fh3725 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3781) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3782));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d637 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10237) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10238)) 
            << 3U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10043) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10044)) 
                       << 2U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d636)));
    vlTOPp->mkMac__DOT__y___05Fh10491 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10238) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10237));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d260 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3724) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3725));
    vlTOPp->mkMac__DOT__y___05Fh3970 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3725) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3724));
    vlTOPp->mkMac__DOT__y___05Fh10432 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10490) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10491));
    vlTOPp->mkMac__DOT__y___05Fh3913 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3969) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3970));
    vlTOPp->mkMac__DOT__y___05Fh10685 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10432) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10431));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d259 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3912) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3913));
    vlTOPp->mkMac__DOT__y___05Fh4158 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3913) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3912));
    vlTOPp->mkMac__DOT__y___05Fh10626 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10684) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10685));
    vlTOPp->mkMac__DOT__y___05Fh4101 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4157) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4158));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d638 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10625) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10626)) 
            << 5U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10431) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10432)) 
                       << 4U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d637)));
    vlTOPp->mkMac__DOT__y___05Fh10879 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10626) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10625));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d258 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4100) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4101));
    vlTOPp->mkMac__DOT__y___05Fh4346 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4101) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4100));
    vlTOPp->mkMac__DOT__y___05Fh10820 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10878) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10879));
    vlTOPp->mkMac__DOT__y___05Fh4289 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4345) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4346));
    vlTOPp->mkMac__DOT__y___05Fh11073 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10820) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10819));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d257 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4288) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4289));
    vlTOPp->mkMac__DOT__y___05Fh4534 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4289) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4288));
    vlTOPp->mkMac__DOT__y___05Fh11014 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11072) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11073));
    vlTOPp->mkMac__DOT__y___05Fh4477 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4533) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4534));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d639 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11013) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11014)) 
            << 7U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10819) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10820)) 
                       << 6U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d638)));
    vlTOPp->mkMac__DOT__y___05Fh11267 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11014) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11013));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d256 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4476) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4477));
    vlTOPp->mkMac__DOT__y___05Fh4722 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4477) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4476));
    vlTOPp->mkMac__DOT__y___05Fh11208 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11266) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11267));
    vlTOPp->mkMac__DOT__y___05Fh4665 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4721) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4722));
    vlTOPp->mkMac__DOT__y___05Fh11461 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11208) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11207));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d255 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4664) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4665));
    vlTOPp->mkMac__DOT__y___05Fh4910 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4665) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4664));
    vlTOPp->mkMac__DOT__y___05Fh11402 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11460) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11461));
    vlTOPp->mkMac__DOT__y___05Fh4853 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4909) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4910));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d640 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11401) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11402)) 
            << 9U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11207) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11208)) 
                       << 8U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d639)));
    vlTOPp->mkMac__DOT__y___05Fh11655 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11402) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11401));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d254 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4852) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4853));
    vlTOPp->mkMac__DOT__y___05Fh5098 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4853) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4852));
    vlTOPp->mkMac__DOT__y___05Fh11596 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11654) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11655));
    vlTOPp->mkMac__DOT__y___05Fh5041 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5097) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5098));
    vlTOPp->mkMac__DOT__y___05Fh11849 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11596) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11595));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d253 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5040) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5041));
    vlTOPp->mkMac__DOT__y___05Fh5286 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5041) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5040));
    vlTOPp->mkMac__DOT__y___05Fh11790 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11848) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11849));
    vlTOPp->mkMac__DOT__y___05Fh5229 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5285) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5286));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d641 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11789) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11790)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11595) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11596)) 
                         << 0xaU) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d640)));
    vlTOPp->mkMac__DOT__y___05Fh12043 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11790) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11789));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d252 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5228) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5229));
    vlTOPp->mkMac__DOT__y___05Fh5474 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5229) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5228));
    vlTOPp->mkMac__DOT__y___05Fh11984 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12042) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12043));
    vlTOPp->mkMac__DOT__y___05Fh5417 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5473) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5474));
    vlTOPp->mkMac__DOT__y___05Fh12237 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11984) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11983));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d251 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5416) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5417));
    vlTOPp->mkMac__DOT__y___05Fh5662 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5417) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5416));
    vlTOPp->mkMac__DOT__y___05Fh12178 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12236) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12237));
    vlTOPp->mkMac__DOT__y___05Fh5605 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5661) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5662));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d642 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12177) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12178)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11983) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11984)) 
                         << 0xcU) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d641)));
    vlTOPp->mkMac__DOT__y___05Fh12431 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12178) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12177));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d250 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5604) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5605));
    vlTOPp->mkMac__DOT__y___05Fh5850 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5605) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5604));
    vlTOPp->mkMac__DOT__y___05Fh12372 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12430) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12431));
    vlTOPp->mkMac__DOT__y___05Fh5793 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5849) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5850));
    vlTOPp->mkMac__DOT__y___05Fh12625 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12372) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12371));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d249 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5792) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5793));
    vlTOPp->mkMac__DOT__y___05Fh6038 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5793) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5792));
    vlTOPp->mkMac__DOT__y___05Fh12566 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12624) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12625));
    vlTOPp->mkMac__DOT__y___05Fh5981 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6037) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6038));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d643 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12565) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12566)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12371) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12372)) 
                         << 0xeU) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d642)));
    vlTOPp->mkMac__DOT__y___05Fh12819 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12566) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12565));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d248 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5980) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5981));
    vlTOPp->mkMac__DOT__y___05Fh6226 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5981) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5980));
    vlTOPp->mkMac__DOT__y___05Fh12760 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12818) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12819));
    vlTOPp->mkMac__DOT__y___05Fh6169 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6225) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6226));
    vlTOPp->mkMac__DOT__y___05Fh13013 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12760) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12759));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d247 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6168) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6169));
    vlTOPp->mkMac__DOT__y___05Fh6414 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6169) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6168));
    vlTOPp->mkMac__DOT__y___05Fh12954 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13012) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13013));
    vlTOPp->mkMac__DOT__y___05Fh6357 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6413) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6414));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d644 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12953) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12954)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12759) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12760)) 
                          << 0x10U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d643)));
    vlTOPp->mkMac__DOT__y___05Fh13207 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12954) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12953));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d245 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6356) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6357));
    vlTOPp->mkMac__DOT__y___05Fh6602 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6357) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6356));
    vlTOPp->mkMac__DOT__y___05Fh13148 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13206) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13207));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d230 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6601) 
           | (IData)(vlTOPp->mkMac__DOT__y___05Fh6602));
    vlTOPp->mkMac__DOT__y___05Fh13401 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13148) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13147));
    if (vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d230) {
        vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh8018 
            = vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh8022;
        vlTOPp->mkMac__DOT__IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d291 
            = (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d245) 
                << 0x16U) | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d247) 
                              << 0x15U) | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d248) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d249) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d250) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d251) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d252) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d253) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d254) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d255) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d256) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d257) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d258) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d259) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d260) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d261) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d262) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d263) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d264) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d265) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d266) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d267) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d268)))))))))))))))))))))));
    } else {
        vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh8018 
            = vlTOPp->mkMac__DOT__result_exp___05Fh339;
        vlTOPp->mkMac__DOT__IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d291 
            = (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d247) 
                << 0x16U) | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d248) 
                              << 0x15U) | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d249) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d250) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d251) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d252) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d253) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d254) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d255) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d256) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d257) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d258) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d259) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d260) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d261) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d262) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d263) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d264) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d265) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d266) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d267) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d268) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkMac__DOT__IF_x153_BIT_0_XOR_x114_BIT_0_THEN_1_ELSE_0___05Fq2)))))))))))))))))))))));
    }
    vlTOPp->mkMac__DOT__y___05Fh13342 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13400) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13401));
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh347 
        = ((((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d230) 
             | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d245)) 
            << 0x17U) | vlTOPp->mkMac__DOT__IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d291);
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d645 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13341) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13342)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13147) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13148)) 
                          << 0x12U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d644));
    vlTOPp->mkMac__DOT__y___05Fh13595 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13342) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13341));
    vlTOPp->mkMac__DOT__result_mant_aligned___05F_1___05Fh8116 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkMac__DOT__result_mant_aligned___05Fh347));
    vlTOPp->mkMac__DOT__y___05Fh13536 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13594) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13595));
    vlTOPp->mkMac__DOT__IF_IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_ETC___05F_d294 
        = ((1U & ((IData)(vlTOPp->mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d230)
                   ? vlTOPp->mkMac__DOT__IF_x153_BIT_0_XOR_x114_BIT_0_THEN_1_ELSE_0___05Fq2
                   : (IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh2116)))
            ? vlTOPp->mkMac__DOT__result_mant_aligned___05F_1___05Fh8116
            : vlTOPp->mkMac__DOT__result_mant_aligned___05Fh347);
    vlTOPp->mkMac__DOT__y___05Fh13789 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13536) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13535));
    vlTOPp->mkMac__DOT__x___05Fh301 = ((0x80000000U 
                                        & (((IData)(vlTOPp->mkMac__DOT__a) 
                                            ^ (IData)(vlTOPp->mkMac__DOT__b)) 
                                           << 0x10U)) 
                                       | (((IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh8018) 
                                           << 0x17U) 
                                          | (0x7fffffU 
                                             & vlTOPp->mkMac__DOT__IF_IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_ETC___05F_d294)));
    vlTOPp->mkMac__DOT__y___05Fh13730 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13788) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13789));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d646 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13729) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13730)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13535) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13536)) 
                          << 0x14U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d645));
    vlTOPp->mkMac__DOT__y___05Fh13983 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13730) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13729));
    vlTOPp->mkMac__DOT__y___05Fh13924 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13982) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13983));
    vlTOPp->mkMac__DOT__y___05Fh14177 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13924) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13923));
    vlTOPp->mkMac__DOT__y___05Fh14118 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14176) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14177));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d647 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14117) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14118)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13923) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13924)) 
                          << 0x16U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d646));
    vlTOPp->mkMac__DOT__y___05Fh14371 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14118) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14117));
    vlTOPp->mkMac__DOT__y___05Fh14312 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14370) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14371));
    vlTOPp->mkMac__DOT__y___05Fh14565 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14312) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14311));
    vlTOPp->mkMac__DOT__y___05Fh14506 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14564) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14565));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d648 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14505) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14506)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14311) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14312)) 
                          << 0x18U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d647));
    vlTOPp->mkMac__DOT__y___05Fh14759 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14506) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14505));
    vlTOPp->mkMac__DOT__y___05Fh14700 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14758) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14759));
    vlTOPp->mkMac__DOT__y___05Fh14953 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14700) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14699));
    vlTOPp->mkMac__DOT__y___05Fh14894 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14952) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14953));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d649 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14893) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14894)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14699) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14700)) 
                          << 0x1aU) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d648));
    vlTOPp->mkMac__DOT__y___05Fh15147 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14894) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14893));
    vlTOPp->mkMac__DOT__y___05Fh15088 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15146) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15147));
    vlTOPp->mkMac__DOT__y___05Fh15341 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15088) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15087));
    vlTOPp->mkMac__DOT__y___05Fh15282 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15340) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15341));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d650 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15281) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15282)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15087) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15088)) 
                          << 0x1cU) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d649));
    vlTOPp->mkMac__DOT__y___05Fh15535 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15282) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15281));
    vlTOPp->mkMac__DOT__y___05Fh15476 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15534) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15535));
    vlTOPp->mkMac__DOT__y___05Fh15729 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15476) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15475));
    vlTOPp->mkMac__DOT__y___05Fh15670 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15728) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15729));
    vlTOPp->mkMac__DOT__x___05Fh8178 = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15669) 
                                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15670)) 
                                         << 0x1fU) 
                                        | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15475) 
                                             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15476)) 
                                            << 0x1eU) 
                                           | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d650));
    vlTOPp->mkMac__DOT__out_D_IN = ((IData)(vlTOPp->mkMac__DOT__s)
                                     ? vlTOPp->mkMac__DOT__x___05Fh301
                                     : vlTOPp->mkMac__DOT__x___05Fh8178);
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    read_A_a_in = VL_RAND_RESET_I(16);
    EN_read_A = VL_RAND_RESET_I(1);
    RDY_read_A = VL_RAND_RESET_I(1);
    read_B_b_in = VL_RAND_RESET_I(16);
    EN_read_B = VL_RAND_RESET_I(1);
    RDY_read_B = VL_RAND_RESET_I(1);
    read_C_c_in = VL_RAND_RESET_I(32);
    EN_read_C = VL_RAND_RESET_I(1);
    RDY_read_C = VL_RAND_RESET_I(1);
    read_S_s_in = VL_RAND_RESET_I(1);
    EN_read_S = VL_RAND_RESET_I(1);
    RDY_read_S = VL_RAND_RESET_I(1);
    EN_mac_calc = VL_RAND_RESET_I(1);
    mac_calc = VL_RAND_RESET_I(32);
    RDY_mac_calc = VL_RAND_RESET_I(1);
    mkMac__DOT__CLK = VL_RAND_RESET_I(1);
    mkMac__DOT__RST_N = VL_RAND_RESET_I(1);
    mkMac__DOT__read_A_a_in = VL_RAND_RESET_I(16);
    mkMac__DOT__EN_read_A = VL_RAND_RESET_I(1);
    mkMac__DOT__RDY_read_A = VL_RAND_RESET_I(1);
    mkMac__DOT__read_B_b_in = VL_RAND_RESET_I(16);
    mkMac__DOT__EN_read_B = VL_RAND_RESET_I(1);
    mkMac__DOT__RDY_read_B = VL_RAND_RESET_I(1);
    mkMac__DOT__read_C_c_in = VL_RAND_RESET_I(32);
    mkMac__DOT__EN_read_C = VL_RAND_RESET_I(1);
    mkMac__DOT__RDY_read_C = VL_RAND_RESET_I(1);
    mkMac__DOT__read_S_s_in = VL_RAND_RESET_I(1);
    mkMac__DOT__EN_read_S = VL_RAND_RESET_I(1);
    mkMac__DOT__RDY_read_S = VL_RAND_RESET_I(1);
    mkMac__DOT__EN_mac_calc = VL_RAND_RESET_I(1);
    mkMac__DOT__mac_calc = VL_RAND_RESET_I(32);
    mkMac__DOT__RDY_mac_calc = VL_RAND_RESET_I(1);
    mkMac__DOT__a = VL_RAND_RESET_I(16);
    mkMac__DOT__a_D_IN = VL_RAND_RESET_I(16);
    mkMac__DOT__a_EN = VL_RAND_RESET_I(1);
    mkMac__DOT__b = VL_RAND_RESET_I(16);
    mkMac__DOT__b_D_IN = VL_RAND_RESET_I(16);
    mkMac__DOT__b_EN = VL_RAND_RESET_I(1);
    mkMac__DOT__c = VL_RAND_RESET_I(32);
    mkMac__DOT__c_D_IN = VL_RAND_RESET_I(32);
    mkMac__DOT__c_EN = VL_RAND_RESET_I(1);
    mkMac__DOT__out = VL_RAND_RESET_I(32);
    mkMac__DOT__out_D_IN = VL_RAND_RESET_I(32);
    mkMac__DOT__out_EN = VL_RAND_RESET_I(1);
    mkMac__DOT__s = VL_RAND_RESET_I(1);
    mkMac__DOT__s_D_IN = VL_RAND_RESET_I(1);
    mkMac__DOT__s_EN = VL_RAND_RESET_I(1);
    mkMac__DOT__CAN_FIRE_mac_calc = VL_RAND_RESET_I(1);
    mkMac__DOT__CAN_FIRE_read_A = VL_RAND_RESET_I(1);
    mkMac__DOT__CAN_FIRE_read_B = VL_RAND_RESET_I(1);
    mkMac__DOT__CAN_FIRE_read_C = VL_RAND_RESET_I(1);
    mkMac__DOT__CAN_FIRE_read_S = VL_RAND_RESET_I(1);
    mkMac__DOT__WILL_FIRE_mac_calc = VL_RAND_RESET_I(1);
    mkMac__DOT__WILL_FIRE_read_A = VL_RAND_RESET_I(1);
    mkMac__DOT__WILL_FIRE_read_B = VL_RAND_RESET_I(1);
    mkMac__DOT__WILL_FIRE_read_C = VL_RAND_RESET_I(1);
    mkMac__DOT__WILL_FIRE_read_S = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_ETC___05Fq3 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d321 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d324 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d328 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d332 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d337 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d342 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d348 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d354 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d361 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d368 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d376 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d384 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d393 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d402 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_x153_BIT_0_XOR_x114_BIT_0_THEN_1_ELSE_0___05Fq2 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05F_1___05Fh8975 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05F_1___05Fh8976 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05F_2___05Fh8929 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9377 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9400 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9423 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9446 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9469 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9492 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9515 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9538 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9561 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9584 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9607 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9630 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9653 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9676 = VL_RAND_RESET_I(32);
    mkMac__DOT__product___05Fh9699 = VL_RAND_RESET_I(32);
    mkMac__DOT__x___05Fh301 = VL_RAND_RESET_I(32);
    mkMac__DOT__x___05Fh8178 = VL_RAND_RESET_I(32);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d650 = VL_RAND_RESET_I(30);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d649 = VL_RAND_RESET_I(28);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d648 = VL_RAND_RESET_I(26);
    mkMac__DOT__IF_IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_ETC___05F_d294 = VL_RAND_RESET_I(24);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d647 = VL_RAND_RESET_I(24);
    mkMac__DOT__c_mant_aligned___05F_1___05Fh2119 = VL_RAND_RESET_I(24);
    mkMac__DOT__c_mant_aligned___05Fh337 = VL_RAND_RESET_I(24);
    mkMac__DOT__result_mant_aligned___05F_1___05Fh8116 = VL_RAND_RESET_I(24);
    mkMac__DOT__result_mant_aligned___05Fh2044 = VL_RAND_RESET_I(24);
    mkMac__DOT__result_mant_aligned___05Fh336 = VL_RAND_RESET_I(24);
    mkMac__DOT__result_mant_aligned___05Fh347 = VL_RAND_RESET_I(24);
    mkMac__DOT__x___05Fh1153 = VL_RAND_RESET_I(24);
    mkMac__DOT__x___05Fh2114 = VL_RAND_RESET_I(24);
    mkMac__DOT__IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d291 = VL_RAND_RESET_I(23);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d646 = VL_RAND_RESET_I(22);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d645 = VL_RAND_RESET_I(20);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d644 = VL_RAND_RESET_I(18);
    mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d643 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48 = VL_RAND_RESET_I(16);
    mkMac__DOT___theResult___05F___05F_4_fst___05Fh1730 = VL_RAND_RESET_I(16);
    mkMac__DOT__product___05Fh1428 = VL_RAND_RESET_I(16);
    mkMac__DOT__product___05Fh1451 = VL_RAND_RESET_I(16);
    mkMac__DOT__product___05Fh1474 = VL_RAND_RESET_I(16);
    mkMac__DOT__product___05Fh1497 = VL_RAND_RESET_I(16);
    mkMac__DOT__product___05Fh1520 = VL_RAND_RESET_I(16);
    mkMac__DOT__product___05Fh1543 = VL_RAND_RESET_I(16);
    mkMac__DOT__product___05Fh1566 = VL_RAND_RESET_I(16);
    mkMac__DOT__result_mant___05F_1___05Fh1618 = VL_RAND_RESET_I(16);
    mkMac__DOT__result_mant___05Fh1640 = VL_RAND_RESET_I(16);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d642 = VL_RAND_RESET_I(14);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d641 = VL_RAND_RESET_I(12);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d640 = VL_RAND_RESET_I(10);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d639 = VL_RAND_RESET_I(8);
    mkMac__DOT___0_CONCAT_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d64 = VL_RAND_RESET_I(8);
    mkMac__DOT___theResult___05F___05F_2_fst___05Fh8018 = VL_RAND_RESET_I(8);
    mkMac__DOT___theResult___05F___05F_4_snd_fst___05Fh1738 = VL_RAND_RESET_I(8);
    mkMac__DOT__delta_exp___05Fh2042 = VL_RAND_RESET_I(8);
    mkMac__DOT__delta_exp___05Fh2117 = VL_RAND_RESET_I(8);
    mkMac__DOT__i___05Fh8085 = VL_RAND_RESET_I(8);
    mkMac__DOT__i___05Fh8100 = VL_RAND_RESET_I(8);
    mkMac__DOT__result_exp___05F_1___05Fh1619 = VL_RAND_RESET_I(8);
    mkMac__DOT__result_exp___05F_1___05Fh1783 = VL_RAND_RESET_I(8);
    mkMac__DOT__result_exp___05F_1___05Fh8022 = VL_RAND_RESET_I(8);
    mkMac__DOT__result_exp___05Fh326 = VL_RAND_RESET_I(8);
    mkMac__DOT__result_exp___05Fh330 = VL_RAND_RESET_I(8);
    mkMac__DOT__result_exp___05Fh335 = VL_RAND_RESET_I(8);
    mkMac__DOT__result_exp___05Fh339 = VL_RAND_RESET_I(8);
    mkMac__DOT__rounded_result_mant___05Fh1734 = VL_RAND_RESET_I(8);
    mkMac__DOT__x___05Fh1800 = VL_RAND_RESET_I(8);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d638 = VL_RAND_RESET_I(6);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d637 = VL_RAND_RESET_I(4);
    mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d636 = VL_RAND_RESET_I(2);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d230 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d245 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d247 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d248 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d249 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d250 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d251 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d252 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d253 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d254 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d255 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d256 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d257 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d258 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d259 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d260 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d261 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d262 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d263 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d264 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d265 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d266 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d267 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d268 = VL_RAND_RESET_I(1);
    mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d77 = VL_RAND_RESET_I(1);
    mkMac__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh2116 = VL_RAND_RESET_I(1);
    mkMac__DOT__round_flag___05Fh2043 = VL_RAND_RESET_I(1);
    mkMac__DOT__round_flag___05Fh2118 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10043 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10102 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10237 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10296 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10431 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10490 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10625 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10684 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10819 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh10878 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11013 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11072 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11207 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11266 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11401 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11460 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11595 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11654 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11789 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11848 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh11983 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12042 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12177 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12236 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12371 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12430 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12565 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12624 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12759 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12818 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh12953 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13012 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13147 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13206 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13341 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13400 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13535 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13594 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13729 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13788 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13923 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh13982 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14117 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14176 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14311 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14370 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14505 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14564 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14699 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14758 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14893 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh14952 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15087 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15146 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15281 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15340 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15475 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15534 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15669 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh15728 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2220 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2408 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2465 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2596 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2653 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2784 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2841 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh2972 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3029 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3160 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3217 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3348 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3405 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3536 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3593 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3724 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3781 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3912 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh3969 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4100 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4157 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4288 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4345 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4476 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4533 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4664 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4721 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4852 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh4909 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5040 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5097 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5228 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5285 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5416 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5473 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5604 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5661 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5792 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5849 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh5980 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh6037 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh6168 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh6225 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh6356 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh6413 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh6601 = VL_RAND_RESET_I(1);
    mkMac__DOT__x___05Fh9849 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10044 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10103 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10238 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10297 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10432 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10491 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10626 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10685 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10820 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh10879 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11014 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11073 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11208 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11267 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11402 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11461 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11596 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11655 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11790 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11849 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh11984 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12043 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12178 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12237 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12372 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12431 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12566 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12625 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12760 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12819 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh12954 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13013 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13148 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13207 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13342 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13401 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13536 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13595 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13730 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13789 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13924 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh13983 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14118 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14177 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14312 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14371 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14506 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14565 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14700 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14759 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14894 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh14953 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15088 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15147 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15282 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15341 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15476 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15535 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15670 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh15729 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2221 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2409 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2466 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2597 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2654 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2785 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2842 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh2973 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3030 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3161 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3218 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3349 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3406 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3537 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3594 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3725 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3782 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3913 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh3970 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4101 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4158 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4289 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4346 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4477 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4534 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4665 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4722 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4853 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh4910 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5041 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5098 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5229 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5286 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5417 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5474 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5605 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5662 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5793 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5850 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh5981 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh6038 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh6169 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh6226 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh6357 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh6414 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh6602 = VL_RAND_RESET_I(1);
    mkMac__DOT__y___05Fh9850 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
