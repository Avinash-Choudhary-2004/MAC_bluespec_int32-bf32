// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/project_trial1/verilog/mkMac.v", 44, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/project_trial1/verilog/mkMac.v", 44, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
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
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__s_EN) {
            vlTOPp->mkMac__DOT__s = vlTOPp->mkMac__DOT__s_D_IN;
        }
    } else {
        vlTOPp->mkMac__DOT__s = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__out_EN) {
            vlTOPp->mkMac__DOT__out = vlTOPp->mkMac__DOT__out_D_IN;
        }
    } else {
        vlTOPp->mkMac__DOT__out = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__c_EN) {
            vlTOPp->mkMac__DOT__c = vlTOPp->mkMac__DOT__c_D_IN;
        }
    } else {
        vlTOPp->mkMac__DOT__c = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__b_EN) {
            vlTOPp->mkMac__DOT__b = vlTOPp->mkMac__DOT__b_D_IN;
        }
    } else {
        vlTOPp->mkMac__DOT__b = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__a_EN) {
            vlTOPp->mkMac__DOT__a = vlTOPp->mkMac__DOT__a_D_IN;
        }
    } else {
        vlTOPp->mkMac__DOT__a = 0U;
    }
    vlTOPp->mkMac__DOT__mac_calc = vlTOPp->mkMac__DOT__out;
    vlTOPp->mkMac__DOT__c_mant_aligned___05Fh332 = 
        (0x800000U | (0x7fffffU & vlTOPp->mkMac__DOT__c));
    vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkMac__DOT__b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkMac__DOT__b)))
                       : (IData)(vlTOPp->mkMac__DOT__b)));
    vlTOPp->mkMac__DOT__x___05Fh858 = (0xffU & (((IData)(vlTOPp->mkMac__DOT__a) 
                                                 >> 7U) 
                                                + ((IData)(vlTOPp->mkMac__DOT__b) 
                                                   >> 7U)));
    vlTOPp->mkMac__DOT__product___05Fh788 = (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlTOPp->mkMac__DOT__a)));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkMac__DOT__a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkMac__DOT__a)))
                       : (IData)(vlTOPp->mkMac__DOT__a)));
    vlTOPp->mac_calc = vlTOPp->mkMac__DOT__mac_calc;
    vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh841 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkMac__DOT__x___05Fh858)));
    vlTOPp->mkMac__DOT__result_exp___05Fh326 = (0xffU 
                                                & ((IData)(0x81U) 
                                                   + (IData)(vlTOPp->mkMac__DOT__x___05Fh858)));
    vlTOPp->mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16 
        = ((1U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh788)
            : 0U);
    vlTOPp->mkMac__DOT__product___05Fh9273 = (0x7fffU 
                                              & (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1));
    vlTOPp->mkMac__DOT__product___05Fh765 = (0xffffU 
                                             & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16) 
                                                + (0x100U 
                                                   | (0xfeU 
                                                      & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                         << 1U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d268 
        = ((1U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9273
            : 0U);
    vlTOPp->mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19 
        = ((2U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh765)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16));
    vlTOPp->mkMac__DOT__product___05Fh9250 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d268 
                                              + (0xfffeU 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 1U)));
    vlTOPp->mkMac__DOT__product___05Fh742 = (0xffffU 
                                             & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19) 
                                                + (0x200U 
                                                   | (0x1fcU 
                                                      & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                         << 2U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d271 
        = ((2U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9250
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d268);
    vlTOPp->mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23 
        = ((4U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh742)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19));
    vlTOPp->mkMac__DOT__product___05Fh9227 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d271 
                                              + (0x1fffcU 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 2U)));
    vlTOPp->mkMac__DOT__product___05Fh719 = (0xffffU 
                                             & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23) 
                                                + (0x400U 
                                                   | (0x3f8U 
                                                      & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                         << 3U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d275 
        = ((4U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9227
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d271);
    vlTOPp->mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27 
        = ((8U & (IData)(vlTOPp->mkMac__DOT__b)) ? (IData)(vlTOPp->mkMac__DOT__product___05Fh719)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23));
    vlTOPp->mkMac__DOT__product___05Fh9204 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d275 
                                              + (0x3fff8U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 3U)));
    vlTOPp->mkMac__DOT__product___05Fh696 = (0xffffU 
                                             & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27) 
                                                + (0x800U 
                                                   | (0x7f0U 
                                                      & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                         << 4U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d279 
        = ((8U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9204
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d275);
    vlTOPp->mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32 
        = ((0x10U & (IData)(vlTOPp->mkMac__DOT__b))
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh696)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27));
    vlTOPp->mkMac__DOT__product___05Fh9181 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d279 
                                              + (0x7fff0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 4U)));
    vlTOPp->mkMac__DOT__product___05Fh673 = (0xffffU 
                                             & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32) 
                                                + (0x1000U 
                                                   | (0xfe0U 
                                                      & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                         << 5U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d284 
        = ((0x10U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9181
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d279);
    vlTOPp->mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37 
        = ((0x20U & (IData)(vlTOPp->mkMac__DOT__b))
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh673)
            : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32));
    vlTOPp->mkMac__DOT__product___05Fh9158 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d284 
                                              + (0xfffe0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 5U)));
    vlTOPp->mkMac__DOT__product___05Fh650 = (0xffffU 
                                             & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37) 
                                                + (0x2000U 
                                                   | (0x1fc0U 
                                                      & ((IData)(vlTOPp->mkMac__DOT__a) 
                                                         << 6U)))));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d289 
        = ((0x20U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9158
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d284);
    vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48 
        = (0xffffU & (((0x40U & (IData)(vlTOPp->mkMac__DOT__b))
                        ? (IData)(vlTOPp->mkMac__DOT__product___05Fh650)
                        : (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37)) 
                      + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkMac__DOT__a) 
                                               << 7U)))));
    vlTOPp->mkMac__DOT__product___05Fh9135 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d289 
                                              + (0x1fffc0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 6U)));
    vlTOPp->mkMac__DOT__result_mant___05F_1___05Fh840 
        = (0xfffeU & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48) 
                      << 1U));
    vlTOPp->mkMac__DOT__result_mant___05Fh1750 = (0xfffcU 
                                                  & ((IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48) 
                                                     << 2U));
    vlTOPp->mkMac__DOT__result_exp___05Fh330 = ((0x4000U 
                                                 & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48))
                                                 ? (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh326)
                                                 : (IData)(vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh841));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d295 
        = ((0x40U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9135
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d289);
    vlTOPp->mkMac__DOT__result_mant___05Fh329 = ((0x4000U 
                                                  & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48))
                                                  ? (IData)(vlTOPp->mkMac__DOT__result_mant___05Fh1750)
                                                  : (IData)(vlTOPp->mkMac__DOT__result_mant___05F_1___05Fh840));
    vlTOPp->mkMac__DOT__delta_exp___05Fh1726 = (0xffU 
                                                & ((IData)(vlTOPp->mkMac__DOT__result_exp___05Fh330) 
                                                   - 
                                                   (vlTOPp->mkMac__DOT__c 
                                                    >> 0x17U)));
    vlTOPp->mkMac__DOT__delta_exp___05Fh933 = (0xffU 
                                               & ((vlTOPp->mkMac__DOT__c 
                                                   >> 0x17U) 
                                                  - (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh330)));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d58 
        = ((IData)(vlTOPp->mkMac__DOT__result_exp___05Fh330) 
           <= (0xffU & (vlTOPp->mkMac__DOT__c >> 0x17U)));
    vlTOPp->mkMac__DOT__product___05Fh9112 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d295 
                                              + (0x3fff80U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 7U)));
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh1727 
        = (0x800000U | ((IData)(vlTOPp->mkMac__DOT__result_mant___05Fh329) 
                        << 7U));
    vlTOPp->mkMac__DOT__c_mant_aligned___05F_1___05Fh1728 
        = ((0x17U >= (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh1726))
            ? (0xffffffU & (vlTOPp->mkMac__DOT__c_mant_aligned___05Fh332 
                            >> (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh1726)))
            : 0U);
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh934 
        = ((0x17U >= (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh933))
            ? (0xffffffU & ((IData)(vlTOPp->mkMac__DOT__result_mant___05Fh329) 
                            >> (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh933)))
            : 0U);
    vlTOPp->mkMac__DOT___theResult___05F___05F_1_fst___05Fh931 
        = (0xffU & ((IData)(vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d58)
                     ? (vlTOPp->mkMac__DOT__c >> 0x17U)
                     : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh330)));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d301 
        = ((0x80U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9112
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d295);
    if (vlTOPp->mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d58) {
        vlTOPp->mkMac__DOT__x___05Fh1838 = vlTOPp->mkMac__DOT__c_mant_aligned___05Fh332;
        vlTOPp->mkMac__DOT__x___05Fh1721 = vlTOPp->mkMac__DOT__result_mant_aligned___05Fh934;
    } else {
        vlTOPp->mkMac__DOT__x___05Fh1838 = vlTOPp->mkMac__DOT__c_mant_aligned___05F_1___05Fh1728;
        vlTOPp->mkMac__DOT__x___05Fh1721 = vlTOPp->mkMac__DOT__result_mant_aligned___05Fh1727;
    }
    vlTOPp->mkMac__DOT__product___05Fh9089 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d301 
                                              + (0x7fff00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 8U)));
    vlTOPp->mkMac__DOT__x___05Fh5886 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh5943 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh5698 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh5755 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh5510 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh5567 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh5322 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh5379 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh5134 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh5191 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x11U));
    vlTOPp->mkMac__DOT__IF_x721_BIT_0_XOR_x838_BIT_0_THEN_1_ELSE_0___05Fq2 
        = ((1U & (vlTOPp->mkMac__DOT__x___05Fh1721 
                  ^ vlTOPp->mkMac__DOT__x___05Fh1838))
            ? 1U : 0U);
    vlTOPp->mkMac__DOT__x___05Fh4946 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh5003 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh4758 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh4815 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh4570 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh4627 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh4382 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh4439 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh4194 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh4251 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh4006 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh4063 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh3818 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh3875 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh3630 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh3687 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh3442 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh3499 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh3254 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh3311 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh3066 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh3123 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh2878 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh2935 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh2690 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh2747 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh2502 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh2559 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh2314 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh2371 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh2126 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh2183 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               & vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__x___05Fh1938 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh1721 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh1838) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__y___05Fh1939 = (1U & (vlTOPp->mkMac__DOT__x___05Fh1721 
                                              & vlTOPp->mkMac__DOT__x___05Fh1838));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d308 
        = ((0x100U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9089
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d301);
    vlTOPp->mkMac__DOT__y___05Fh2184 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh1939) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh1938));
    vlTOPp->mkMac__DOT__product___05Fh9066 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d308 
                                              + (0xfffe00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 9U)));
    vlTOPp->mkMac__DOT__y___05Fh2127 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2183) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2184));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d315 
        = ((0x200U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9066
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d308);
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d232 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh2126) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2127)) 
            << 2U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh1938) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh1939)) 
                       << 1U) | (1U & vlTOPp->mkMac__DOT__IF_x721_BIT_0_XOR_x838_BIT_0_THEN_1_ELSE_0___05Fq2)));
    vlTOPp->mkMac__DOT__y___05Fh2372 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2127) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2126));
    vlTOPp->mkMac__DOT__product___05Fh9043 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d315 
                                              + (0x1fffc00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xaU)));
    vlTOPp->mkMac__DOT__y___05Fh2315 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2371) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2372));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d323 
        = ((0x400U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9043
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d315);
    vlTOPp->mkMac__DOT__y___05Fh2560 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2315) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2314));
    vlTOPp->mkMac__DOT__product___05Fh9020 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d323 
                                              + (0x3fff800U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xbU)));
    vlTOPp->mkMac__DOT__y___05Fh2503 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2559) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2560));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d331 
        = ((0x800U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh9020
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d323);
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d233 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh2502) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2503)) 
            << 4U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh2314) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2315)) 
                       << 3U) | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d232)));
    vlTOPp->mkMac__DOT__y___05Fh2748 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2503) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2502));
    vlTOPp->mkMac__DOT__product___05Fh8997 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d331 
                                              + (0x7fff000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xcU)));
    vlTOPp->mkMac__DOT__y___05Fh2691 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2747) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2748));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d340 
        = ((0x1000U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh8997
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d331);
    vlTOPp->mkMac__DOT__y___05Fh2936 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2691) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2690));
    vlTOPp->mkMac__DOT__product___05Fh8974 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d340 
                                              + (0xfffe000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xdU)));
    vlTOPp->mkMac__DOT__y___05Fh2879 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh2935) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh2936));
    vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d349 
        = ((0x2000U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh8974
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d340);
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d234 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh2878) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2879)) 
            << 6U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh2690) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh2691)) 
                       << 5U) | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d233)));
    vlTOPp->mkMac__DOT__y___05Fh3124 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh2879) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh2878));
    vlTOPp->mkMac__DOT__product___05Fh8951 = (vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d349 
                                              + (0x1fffc000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                    << 0xeU)));
    vlTOPp->mkMac__DOT__y___05Fh3067 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3123) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3124));
    vlTOPp->mkMac__DOT__product___05F_2___05Fh8503 
        = ((0x4000U & (IData)(vlTOPp->mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247))
            ? vlTOPp->mkMac__DOT__product___05Fh8951
            : vlTOPp->mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d349);
    vlTOPp->mkMac__DOT__y___05Fh3312 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3067) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3066));
    vlTOPp->mkMac__DOT__product___05F_1___05Fh8549 
        = (~ vlTOPp->mkMac__DOT__product___05F_2___05Fh8503);
    vlTOPp->mkMac__DOT__y___05Fh3255 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3311) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3312));
    vlTOPp->mkMac__DOT__product___05F_1___05Fh8550 
        = ((IData)(1U) + vlTOPp->mkMac__DOT__product___05F_1___05Fh8549);
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d235 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh3254) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3255)) 
            << 8U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh3066) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3067)) 
                       << 7U) | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d234)));
    vlTOPp->mkMac__DOT__y___05Fh3500 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3255) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3254));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
        = (((1U & ((IData)(vlTOPp->mkMac__DOT__a) >> 0xfU)) 
            == (1U & ((IData)(vlTOPp->mkMac__DOT__b) 
                      >> 0xfU))) ? vlTOPp->mkMac__DOT__product___05F_2___05Fh8503
            : vlTOPp->mkMac__DOT__product___05F_1___05Fh8550);
    vlTOPp->mkMac__DOT__y___05Fh3443 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3499) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3500));
    vlTOPp->mkMac__DOT__x___05Fh15243 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1fU));
    vlTOPp->mkMac__DOT__x___05Fh15302 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1eU));
    vlTOPp->mkMac__DOT__x___05Fh15049 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1eU));
    vlTOPp->mkMac__DOT__x___05Fh15108 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1dU));
    vlTOPp->mkMac__DOT__x___05Fh14855 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1dU));
    vlTOPp->mkMac__DOT__x___05Fh14914 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1cU));
    vlTOPp->mkMac__DOT__x___05Fh14661 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1cU));
    vlTOPp->mkMac__DOT__x___05Fh14720 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1bU));
    vlTOPp->mkMac__DOT__x___05Fh14467 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1bU));
    vlTOPp->mkMac__DOT__x___05Fh14526 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x1aU));
    vlTOPp->mkMac__DOT__x___05Fh14273 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x1aU));
    vlTOPp->mkMac__DOT__x___05Fh14332 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x19U));
    vlTOPp->mkMac__DOT__x___05Fh14079 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x19U));
    vlTOPp->mkMac__DOT__x___05Fh14138 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x18U));
    vlTOPp->mkMac__DOT__x___05Fh13885 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x18U));
    vlTOPp->mkMac__DOT__IF_IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_ETC___05Fq3 
        = ((1U & (vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                  ^ vlTOPp->mkMac__DOT__c)) ? 1U : 0U);
    vlTOPp->mkMac__DOT__x___05Fh13944 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh13691 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh13750 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh13497 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh13556 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh13303 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh13362 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh13109 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh13168 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh12915 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh12974 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh12721 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh12780 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh12527 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh12586 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh12333 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh12392 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh12139 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh12198 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh11945 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh12004 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh11751 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh11810 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh11557 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh11616 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh11363 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh11422 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh11169 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh11228 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh10975 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh11034 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh10781 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh10840 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh10587 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh10646 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh10393 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh10452 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh10199 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh10258 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh10005 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                ^ vlTOPp->mkMac__DOT__c) 
                                               >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh10064 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                                & vlTOPp->mkMac__DOT__c) 
                                               >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh9811 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                               ^ vlTOPp->mkMac__DOT__c) 
                                              >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh9870 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                               & vlTOPp->mkMac__DOT__c) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh9617 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                               ^ vlTOPp->mkMac__DOT__c) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh9676 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                               & vlTOPp->mkMac__DOT__c) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__x___05Fh9423 = (1U & ((vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                               ^ vlTOPp->mkMac__DOT__c) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__y___05Fh9424 = (1U & (vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362 
                                              & vlTOPp->mkMac__DOT__c));
    vlTOPp->mkMac__DOT__y___05Fh3688 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3443) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3442));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d583 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh9423) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh9424)) 
            << 1U) | (1U & vlTOPp->mkMac__DOT__IF_IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_ETC___05Fq3));
    vlTOPp->mkMac__DOT__y___05Fh9677 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh9424) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh9423));
    vlTOPp->mkMac__DOT__y___05Fh3631 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3687) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3688));
    vlTOPp->mkMac__DOT__y___05Fh9618 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh9676) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh9677));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d236 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh3630) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3631)) 
            << 0xaU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh3442) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3443)) 
                         << 9U) | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d235)));
    vlTOPp->mkMac__DOT__y___05Fh3876 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3631) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3630));
    vlTOPp->mkMac__DOT__y___05Fh9871 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh9618) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh9617));
    vlTOPp->mkMac__DOT__y___05Fh3819 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3875) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh3876));
    vlTOPp->mkMac__DOT__y___05Fh9812 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh9870) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh9871));
    vlTOPp->mkMac__DOT__y___05Fh4064 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3819) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3818));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d584 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh9811) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh9812)) 
            << 3U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh9617) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh9618)) 
                       << 2U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d583)));
    vlTOPp->mkMac__DOT__y___05Fh10065 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh9812) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh9811));
    vlTOPp->mkMac__DOT__y___05Fh4007 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4063) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4064));
    vlTOPp->mkMac__DOT__y___05Fh10006 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10064) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10065));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d237 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh4006) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4007)) 
            << 0xcU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh3818) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3819)) 
                         << 0xbU) | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d236)));
    vlTOPp->mkMac__DOT__y___05Fh4252 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4007) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4006));
    vlTOPp->mkMac__DOT__y___05Fh10259 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10006) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10005));
    vlTOPp->mkMac__DOT__y___05Fh4195 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4251) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4252));
    vlTOPp->mkMac__DOT__y___05Fh10200 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10258) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10259));
    vlTOPp->mkMac__DOT__y___05Fh4440 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4195) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4194));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d585 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10199) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10200)) 
            << 5U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10005) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10006)) 
                       << 4U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d584)));
    vlTOPp->mkMac__DOT__y___05Fh10453 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10200) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10199));
    vlTOPp->mkMac__DOT__y___05Fh4383 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4439) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4440));
    vlTOPp->mkMac__DOT__y___05Fh10394 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10452) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10453));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d238 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh4382) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4383)) 
            << 0xeU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh4194) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4195)) 
                         << 0xdU) | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d237)));
    vlTOPp->mkMac__DOT__y___05Fh4628 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4383) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4382));
    vlTOPp->mkMac__DOT__y___05Fh10647 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10394) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10393));
    vlTOPp->mkMac__DOT__y___05Fh4571 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4627) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4628));
    vlTOPp->mkMac__DOT__y___05Fh10588 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10646) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10647));
    vlTOPp->mkMac__DOT__y___05Fh4816 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4571) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4570));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d586 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10587) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10588)) 
            << 7U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10393) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10394)) 
                       << 6U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d585)));
    vlTOPp->mkMac__DOT__y___05Fh10841 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10588) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10587));
    vlTOPp->mkMac__DOT__y___05Fh4759 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4815) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4816));
    vlTOPp->mkMac__DOT__y___05Fh10782 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10840) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10841));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d239 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh4758) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4759)) 
            << 0x10U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh4570) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4571)) 
                          << 0xfU) | (IData)(vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d238)));
    vlTOPp->mkMac__DOT__y___05Fh5004 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4759) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4758));
    vlTOPp->mkMac__DOT__y___05Fh11035 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10782) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10781));
    vlTOPp->mkMac__DOT__y___05Fh4947 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5003) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5004));
    vlTOPp->mkMac__DOT__y___05Fh10976 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11034) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11035));
    vlTOPp->mkMac__DOT__y___05Fh5192 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4947) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4946));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d587 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10975) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10976)) 
            << 9U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10781) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10782)) 
                       << 8U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d586)));
    vlTOPp->mkMac__DOT__y___05Fh11229 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10976) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10975));
    vlTOPp->mkMac__DOT__y___05Fh5135 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5191) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5192));
    vlTOPp->mkMac__DOT__y___05Fh11170 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11228) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11229));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d240 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh5134) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5135)) 
            << 0x12U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh4946) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4947)) 
                          << 0x11U) | vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d239));
    vlTOPp->mkMac__DOT__y___05Fh5380 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5135) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5134));
    vlTOPp->mkMac__DOT__y___05Fh11423 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11170) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11169));
    vlTOPp->mkMac__DOT__y___05Fh5323 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5379) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5380));
    vlTOPp->mkMac__DOT__y___05Fh11364 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11422) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11423));
    vlTOPp->mkMac__DOT__y___05Fh5568 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5323) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5322));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d588 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11363) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11364)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11169) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11170)) 
                         << 0xaU) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d587)));
    vlTOPp->mkMac__DOT__y___05Fh11617 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11364) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11363));
    vlTOPp->mkMac__DOT__y___05Fh5511 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5567) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5568));
    vlTOPp->mkMac__DOT__y___05Fh11558 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11616) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11617));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d241 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh5510) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5511)) 
            << 0x14U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh5322) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5323)) 
                          << 0x13U) | vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d240));
    vlTOPp->mkMac__DOT__y___05Fh5756 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5511) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5510));
    vlTOPp->mkMac__DOT__y___05Fh11811 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11558) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11557));
    vlTOPp->mkMac__DOT__y___05Fh5699 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5755) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5756));
    vlTOPp->mkMac__DOT__y___05Fh11752 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11810) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11811));
    vlTOPp->mkMac__DOT__y___05Fh5944 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5699) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5698));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d589 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11751) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11752)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11557) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11558)) 
                         << 0xcU) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d588)));
    vlTOPp->mkMac__DOT__y___05Fh12005 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11752) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11751));
    vlTOPp->mkMac__DOT__y___05Fh5887 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5943) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5944));
    vlTOPp->mkMac__DOT__y___05Fh11946 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12004) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12005));
    vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d242 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh5886) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5887)) 
            << 0x16U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh5698) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5699)) 
                          << 0x15U) | vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d241));
    vlTOPp->mkMac__DOT__y___05Fh12199 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11946) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11945));
    vlTOPp->mkMac__DOT__x___05Fh301 = ((0x80000000U 
                                        & (((IData)(vlTOPp->mkMac__DOT__a) 
                                            ^ (IData)(vlTOPp->mkMac__DOT__b)) 
                                           << 0x10U)) 
                                       | (((IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_1_fst___05Fh931) 
                                           << 0x17U) 
                                          | vlTOPp->mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d242));
    vlTOPp->mkMac__DOT__y___05Fh12140 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12198) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12199));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d590 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12139) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12140)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11945) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11946)) 
                         << 0xeU) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d589)));
    vlTOPp->mkMac__DOT__y___05Fh12393 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12140) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12139));
    vlTOPp->mkMac__DOT__y___05Fh12334 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12392) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12393));
    vlTOPp->mkMac__DOT__y___05Fh12587 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12334) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12333));
    vlTOPp->mkMac__DOT__y___05Fh12528 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12586) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12587));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d591 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12527) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12528)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12333) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12334)) 
                          << 0x10U) | (IData)(vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d590)));
    vlTOPp->mkMac__DOT__y___05Fh12781 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12528) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12527));
    vlTOPp->mkMac__DOT__y___05Fh12722 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12780) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12781));
    vlTOPp->mkMac__DOT__y___05Fh12975 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12722) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12721));
    vlTOPp->mkMac__DOT__y___05Fh12916 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12974) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12975));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d592 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12915) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12916)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12721) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12722)) 
                          << 0x12U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d591));
    vlTOPp->mkMac__DOT__y___05Fh13169 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12916) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12915));
    vlTOPp->mkMac__DOT__y___05Fh13110 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13168) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13169));
    vlTOPp->mkMac__DOT__y___05Fh13363 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13110) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13109));
    vlTOPp->mkMac__DOT__y___05Fh13304 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13362) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13363));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d593 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13303) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13304)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13109) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13110)) 
                          << 0x14U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d592));
    vlTOPp->mkMac__DOT__y___05Fh13557 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13304) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13303));
    vlTOPp->mkMac__DOT__y___05Fh13498 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13556) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13557));
    vlTOPp->mkMac__DOT__y___05Fh13751 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13498) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13497));
    vlTOPp->mkMac__DOT__y___05Fh13692 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13750) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13751));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d594 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13691) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13692)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13497) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13498)) 
                          << 0x16U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d593));
    vlTOPp->mkMac__DOT__y___05Fh13945 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13692) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13691));
    vlTOPp->mkMac__DOT__y___05Fh13886 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13944) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13945));
    vlTOPp->mkMac__DOT__y___05Fh14139 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13886) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13885));
    vlTOPp->mkMac__DOT__y___05Fh14080 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14138) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14139));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d595 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14079) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14080)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13885) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13886)) 
                          << 0x18U) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d594));
    vlTOPp->mkMac__DOT__y___05Fh14333 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14080) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14079));
    vlTOPp->mkMac__DOT__y___05Fh14274 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14332) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14333));
    vlTOPp->mkMac__DOT__y___05Fh14527 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14274) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14273));
    vlTOPp->mkMac__DOT__y___05Fh14468 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14526) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14527));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d596 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14467) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14468)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14273) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14274)) 
                          << 0x1aU) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d595));
    vlTOPp->mkMac__DOT__y___05Fh14721 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14468) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14467));
    vlTOPp->mkMac__DOT__y___05Fh14662 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14720) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14721));
    vlTOPp->mkMac__DOT__y___05Fh14915 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14662) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14661));
    vlTOPp->mkMac__DOT__y___05Fh14856 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14914) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14915));
    vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d597 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14855) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14856)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14661) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14662)) 
                          << 0x1cU) | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d596));
    vlTOPp->mkMac__DOT__y___05Fh15109 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14856) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14855));
    vlTOPp->mkMac__DOT__y___05Fh15050 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15108) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15109));
    vlTOPp->mkMac__DOT__y___05Fh15303 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15050) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15049));
    vlTOPp->mkMac__DOT__y___05Fh15244 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15302) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15303));
    vlTOPp->mkMac__DOT__x___05Fh7752 = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15243) 
                                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15244)) 
                                         << 0x1fU) 
                                        | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15049) 
                                             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15050)) 
                                            << 0x1eU) 
                                           | vlTOPp->mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d597));
    vlTOPp->mkMac__DOT__out_D_IN = ((IData)(vlTOPp->mkMac__DOT__s)
                                     ? vlTOPp->mkMac__DOT__x___05Fh301
                                     : vlTOPp->mkMac__DOT__x___05Fh7752);
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMac__DOT__s_EN = vlTOPp->EN_read_S;
    vlTOPp->mkMac__DOT__s_D_IN = vlTOPp->read_S_s_in;
    vlTOPp->mkMac__DOT__out_EN = vlTOPp->EN_mac_calc;
    vlTOPp->mkMac__DOT__c_EN = vlTOPp->EN_read_C;
    vlTOPp->mkMac__DOT__c_D_IN = vlTOPp->read_C_c_in;
    vlTOPp->mkMac__DOT__b_EN = vlTOPp->EN_read_B;
    vlTOPp->mkMac__DOT__b_D_IN = vlTOPp->read_B_b_in;
    vlTOPp->mkMac__DOT__a_EN = vlTOPp->EN_read_A;
    vlTOPp->mkMac__DOT__a_D_IN = vlTOPp->read_A_a_in;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
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
    if (VL_UNLIKELY((EN_read_A & 0xfeU))) {
        Verilated::overWidthError("EN_read_A");}
    if (VL_UNLIKELY((EN_read_B & 0xfeU))) {
        Verilated::overWidthError("EN_read_B");}
    if (VL_UNLIKELY((EN_read_C & 0xfeU))) {
        Verilated::overWidthError("EN_read_C");}
    if (VL_UNLIKELY((read_S_s_in & 0xfeU))) {
        Verilated::overWidthError("read_S_s_in");}
    if (VL_UNLIKELY((EN_read_S & 0xfeU))) {
        Verilated::overWidthError("EN_read_S");}
    if (VL_UNLIKELY((EN_mac_calc & 0xfeU))) {
        Verilated::overWidthError("EN_mac_calc");}
}
#endif  // VL_DEBUG
