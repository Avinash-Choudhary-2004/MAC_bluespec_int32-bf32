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
            VL_FATAL_MT("/home/shakti/project_trial1/verilog/mkCounter.v", 44, "",
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
            VL_FATAL_MT("/home/shakti/project_trial1/verilog/mkCounter.v", 44, "",
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
    vlTOPp->mkCounter__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkCounter__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkCounter__DOT__read_A_a_in = vlTOPp->read_A_a_in;
    vlTOPp->mkCounter__DOT__EN_read_A = vlTOPp->EN_read_A;
    vlTOPp->mkCounter__DOT__read_B_b_in = vlTOPp->read_B_b_in;
    vlTOPp->mkCounter__DOT__EN_read_B = vlTOPp->EN_read_B;
    vlTOPp->mkCounter__DOT__read_C_c_in = vlTOPp->read_C_c_in;
    vlTOPp->mkCounter__DOT__EN_read_C = vlTOPp->EN_read_C;
    vlTOPp->mkCounter__DOT__read_S_s_in = vlTOPp->read_S_s_in;
    vlTOPp->mkCounter__DOT__EN_read_S = vlTOPp->EN_read_S;
    vlTOPp->mkCounter__DOT__EN_mac_calc = vlTOPp->EN_mac_calc;
    vlTOPp->mkCounter__DOT__WILL_FIRE_read_A = vlTOPp->EN_read_A;
    vlTOPp->mkCounter__DOT__WILL_FIRE_read_B = vlTOPp->EN_read_B;
    vlTOPp->mkCounter__DOT__WILL_FIRE_read_C = vlTOPp->EN_read_C;
    vlTOPp->mkCounter__DOT__WILL_FIRE_read_S = vlTOPp->EN_read_S;
    vlTOPp->mkCounter__DOT__WILL_FIRE_mac_calc = vlTOPp->EN_mac_calc;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkCounter__DOT__s_EN) {
            vlTOPp->mkCounter__DOT__s = vlTOPp->mkCounter__DOT__s_D_IN;
        }
    } else {
        vlTOPp->mkCounter__DOT__s = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkCounter__DOT__out_EN) {
            vlTOPp->mkCounter__DOT__out = vlTOPp->mkCounter__DOT__out_D_IN;
        }
    } else {
        vlTOPp->mkCounter__DOT__out = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkCounter__DOT__c_EN) {
            vlTOPp->mkCounter__DOT__c = vlTOPp->mkCounter__DOT__c_D_IN;
        }
    } else {
        vlTOPp->mkCounter__DOT__c = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkCounter__DOT__b_EN) {
            vlTOPp->mkCounter__DOT__b = vlTOPp->mkCounter__DOT__b_D_IN;
        }
    } else {
        vlTOPp->mkCounter__DOT__b = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkCounter__DOT__a_EN) {
            vlTOPp->mkCounter__DOT__a = vlTOPp->mkCounter__DOT__a_D_IN;
        }
    } else {
        vlTOPp->mkCounter__DOT__a = 0U;
    }
    vlTOPp->mkCounter__DOT__mac_calc = vlTOPp->mkCounter__DOT__out;
    vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkCounter__DOT__b))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkCounter__DOT__b)))
                       : (IData)(vlTOPp->mkCounter__DOT__b)));
    vlTOPp->mkCounter__DOT__product___05Fh724 = (0x80U 
                                                 | (0x7fU 
                                                    & (IData)(vlTOPp->mkCounter__DOT__a)));
    vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1 
        = (0xffffU & ((0x8000U & (IData)(vlTOPp->mkCounter__DOT__a))
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->mkCounter__DOT__a)))
                       : (IData)(vlTOPp->mkCounter__DOT__a)));
    vlTOPp->mac_calc = vlTOPp->mkCounter__DOT__mac_calc;
    vlTOPp->mkCounter__DOT__IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___05F_d13 
        = ((1U & (IData)(vlTOPp->mkCounter__DOT__b))
            ? (IData)(vlTOPp->mkCounter__DOT__product___05Fh724)
            : 0U);
    vlTOPp->mkCounter__DOT__product___05Fh2342 = (0x7fffU 
                                                  & (IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1));
    vlTOPp->mkCounter__DOT__product___05Fh701 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___05F_d13) 
                                                    + 
                                                    (0x100U 
                                                     | (0xfeU 
                                                        & ((IData)(vlTOPp->mkCounter__DOT__a) 
                                                           << 1U)))));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d73 
        = ((1U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2342
            : 0U);
    vlTOPp->mkCounter__DOT__IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___05F_d16 
        = ((2U & (IData)(vlTOPp->mkCounter__DOT__b))
            ? (IData)(vlTOPp->mkCounter__DOT__product___05Fh701)
            : (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___05F_d13));
    vlTOPp->mkCounter__DOT__product___05Fh2319 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d73 
                                                  + 
                                                  (0xfffeU 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 1U)));
    vlTOPp->mkCounter__DOT__product___05Fh678 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___05F_d16) 
                                                    + 
                                                    (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlTOPp->mkCounter__DOT__a) 
                                                           << 2U)))));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d76 
        = ((2U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2319
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d73);
    vlTOPp->mkCounter__DOT__IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___05F_d20 
        = ((4U & (IData)(vlTOPp->mkCounter__DOT__b))
            ? (IData)(vlTOPp->mkCounter__DOT__product___05Fh678)
            : (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___05F_d16));
    vlTOPp->mkCounter__DOT__product___05Fh2296 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d76 
                                                  + 
                                                  (0x1fffcU 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 2U)));
    vlTOPp->mkCounter__DOT__product___05Fh655 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___05F_d20) 
                                                    + 
                                                    (0x400U 
                                                     | (0x3f8U 
                                                        & ((IData)(vlTOPp->mkCounter__DOT__a) 
                                                           << 3U)))));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d80 
        = ((4U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2296
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d76);
    vlTOPp->mkCounter__DOT__IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___05F_d24 
        = ((8U & (IData)(vlTOPp->mkCounter__DOT__b))
            ? (IData)(vlTOPp->mkCounter__DOT__product___05Fh655)
            : (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___05F_d20));
    vlTOPp->mkCounter__DOT__product___05Fh2273 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d80 
                                                  + 
                                                  (0x3fff8U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 3U)));
    vlTOPp->mkCounter__DOT__product___05Fh632 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___05F_d24) 
                                                    + 
                                                    (0x800U 
                                                     | (0x7f0U 
                                                        & ((IData)(vlTOPp->mkCounter__DOT__a) 
                                                           << 4U)))));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d84 
        = ((8U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2273
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d80);
    vlTOPp->mkCounter__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___05F_d29 
        = ((0x10U & (IData)(vlTOPp->mkCounter__DOT__b))
            ? (IData)(vlTOPp->mkCounter__DOT__product___05Fh632)
            : (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___05F_d24));
    vlTOPp->mkCounter__DOT__product___05Fh2250 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d84 
                                                  + 
                                                  (0x7fff0U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 4U)));
    vlTOPp->mkCounter__DOT__product___05Fh609 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___05F_d29) 
                                                    + 
                                                    (0x1000U 
                                                     | (0xfe0U 
                                                        & ((IData)(vlTOPp->mkCounter__DOT__a) 
                                                           << 5U)))));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d89 
        = ((0x10U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2250
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d84);
    vlTOPp->mkCounter__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___05F_d34 
        = ((0x20U & (IData)(vlTOPp->mkCounter__DOT__b))
            ? (IData)(vlTOPp->mkCounter__DOT__product___05Fh609)
            : (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___05F_d29));
    vlTOPp->mkCounter__DOT__product___05Fh2227 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d89 
                                                  + 
                                                  (0xfffe0U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 5U)));
    vlTOPp->mkCounter__DOT__product___05Fh586 = (0xffffU 
                                                 & ((IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___05F_d34) 
                                                    + 
                                                    (0x2000U 
                                                     | (0x1fc0U 
                                                        & ((IData)(vlTOPp->mkCounter__DOT__a) 
                                                           << 6U)))));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d94 
        = ((0x20U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2227
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d89);
    vlTOPp->mkCounter__DOT__result_mant___05Fh323 = 
        (0xffffU & (((0x40U & (IData)(vlTOPp->mkCounter__DOT__b))
                      ? (IData)(vlTOPp->mkCounter__DOT__product___05Fh586)
                      : (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___05F_d34)) 
                    + (0x4000U | (0x3f80U & ((IData)(vlTOPp->mkCounter__DOT__a) 
                                             << 7U)))));
    vlTOPp->mkCounter__DOT__product___05Fh2204 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d94 
                                                  + 
                                                  (0x1fffc0U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 6U)));
    vlTOPp->mkCounter__DOT__x___05Fh301 = vlTOPp->mkCounter__DOT__result_mant___05Fh323;
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d100 
        = ((0x40U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2204
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d94);
    vlTOPp->mkCounter__DOT__product___05Fh2181 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d100 
                                                  + 
                                                  (0x3fff80U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 7U)));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d106 
        = ((0x80U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2181
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d100);
    vlTOPp->mkCounter__DOT__product___05Fh2158 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d106 
                                                  + 
                                                  (0x7fff00U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 8U)));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d113 
        = ((0x100U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2158
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d106);
    vlTOPp->mkCounter__DOT__product___05Fh2135 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d113 
                                                  + 
                                                  (0xfffe00U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 9U)));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d120 
        = ((0x200U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2135
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d113);
    vlTOPp->mkCounter__DOT__product___05Fh2112 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d120 
                                                  + 
                                                  (0x1fffc00U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 0xaU)));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d128 
        = ((0x400U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2112
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d120);
    vlTOPp->mkCounter__DOT__product___05Fh2089 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d128 
                                                  + 
                                                  (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 0xbU)));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d136 
        = ((0x800U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2089
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d128);
    vlTOPp->mkCounter__DOT__product___05Fh2066 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d136 
                                                  + 
                                                  (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 0xcU)));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d145 
        = ((0x1000U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2066
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d136);
    vlTOPp->mkCounter__DOT__product___05Fh2043 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d145 
                                                  + 
                                                  (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 0xdU)));
    vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d154 
        = ((0x2000U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2043
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d145);
    vlTOPp->mkCounter__DOT__product___05Fh2020 = (vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d154 
                                                  + 
                                                  (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1) 
                                                      << 0xeU)));
    vlTOPp->mkCounter__DOT__product___05F_2___05Fh1572 
        = ((0x4000U & (IData)(vlTOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52))
            ? vlTOPp->mkCounter__DOT__product___05Fh2020
            : vlTOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d154);
    vlTOPp->mkCounter__DOT__product___05F_1___05Fh1618 
        = (~ vlTOPp->mkCounter__DOT__product___05F_2___05Fh1572);
    vlTOPp->mkCounter__DOT__product___05F_1___05Fh1619 
        = ((IData)(1U) + vlTOPp->mkCounter__DOT__product___05F_1___05Fh1618);
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
        = (((1U & ((IData)(vlTOPp->mkCounter__DOT__a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkCounter__DOT__b) 
                                       >> 0xfU))) ? vlTOPp->mkCounter__DOT__product___05F_2___05Fh1572
            : vlTOPp->mkCounter__DOT__product___05F_1___05Fh1619);
    vlTOPp->mkCounter__DOT__x___05Fh8313 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1fU));
    vlTOPp->mkCounter__DOT__x___05Fh8372 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1eU));
    vlTOPp->mkCounter__DOT__x___05Fh8119 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1eU));
    vlTOPp->mkCounter__DOT__x___05Fh8178 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1dU));
    vlTOPp->mkCounter__DOT__x___05Fh7925 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1dU));
    vlTOPp->mkCounter__DOT__x___05Fh7984 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1cU));
    vlTOPp->mkCounter__DOT__x___05Fh7731 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1cU));
    vlTOPp->mkCounter__DOT__x___05Fh7790 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1bU));
    vlTOPp->mkCounter__DOT__x___05Fh7537 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1bU));
    vlTOPp->mkCounter__DOT__x___05Fh7596 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1aU));
    vlTOPp->mkCounter__DOT__x___05Fh7343 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x1aU));
    vlTOPp->mkCounter__DOT__x___05Fh7402 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x19U));
    vlTOPp->mkCounter__DOT__x___05Fh7149 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x19U));
    vlTOPp->mkCounter__DOT__x___05Fh7208 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x18U));
    vlTOPp->mkCounter__DOT__x___05Fh6955 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x18U));
    vlTOPp->mkCounter__DOT__IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF___05FETC___05Fq2 
        = ((1U & (vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                  ^ vlTOPp->mkCounter__DOT__c)) ? 1U
            : 0U);
    vlTOPp->mkCounter__DOT__x___05Fh7014 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x17U));
    vlTOPp->mkCounter__DOT__x___05Fh6761 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x17U));
    vlTOPp->mkCounter__DOT__x___05Fh6820 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x16U));
    vlTOPp->mkCounter__DOT__x___05Fh6567 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x16U));
    vlTOPp->mkCounter__DOT__x___05Fh6626 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x15U));
    vlTOPp->mkCounter__DOT__x___05Fh6373 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x15U));
    vlTOPp->mkCounter__DOT__x___05Fh6432 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x14U));
    vlTOPp->mkCounter__DOT__x___05Fh6179 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x14U));
    vlTOPp->mkCounter__DOT__x___05Fh6238 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x13U));
    vlTOPp->mkCounter__DOT__x___05Fh5985 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x13U));
    vlTOPp->mkCounter__DOT__x___05Fh6044 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x12U));
    vlTOPp->mkCounter__DOT__x___05Fh5791 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x12U));
    vlTOPp->mkCounter__DOT__x___05Fh5850 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x11U));
    vlTOPp->mkCounter__DOT__x___05Fh5597 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x11U));
    vlTOPp->mkCounter__DOT__x___05Fh5656 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x10U));
    vlTOPp->mkCounter__DOT__x___05Fh5403 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0x10U));
    vlTOPp->mkCounter__DOT__x___05Fh5462 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xfU));
    vlTOPp->mkCounter__DOT__x___05Fh5209 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xfU));
    vlTOPp->mkCounter__DOT__x___05Fh5268 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xeU));
    vlTOPp->mkCounter__DOT__x___05Fh5015 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xeU));
    vlTOPp->mkCounter__DOT__x___05Fh5074 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xdU));
    vlTOPp->mkCounter__DOT__x___05Fh4821 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xdU));
    vlTOPp->mkCounter__DOT__x___05Fh4880 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xcU));
    vlTOPp->mkCounter__DOT__x___05Fh4627 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xcU));
    vlTOPp->mkCounter__DOT__x___05Fh4686 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xbU));
    vlTOPp->mkCounter__DOT__x___05Fh4433 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xbU));
    vlTOPp->mkCounter__DOT__x___05Fh4492 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xaU));
    vlTOPp->mkCounter__DOT__x___05Fh4239 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 0xaU));
    vlTOPp->mkCounter__DOT__x___05Fh4298 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 9U));
    vlTOPp->mkCounter__DOT__x___05Fh4045 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 9U));
    vlTOPp->mkCounter__DOT__x___05Fh4104 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 8U));
    vlTOPp->mkCounter__DOT__x___05Fh3851 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 8U));
    vlTOPp->mkCounter__DOT__x___05Fh3910 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 7U));
    vlTOPp->mkCounter__DOT__x___05Fh3657 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 7U));
    vlTOPp->mkCounter__DOT__x___05Fh3716 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 6U));
    vlTOPp->mkCounter__DOT__x___05Fh3463 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 6U));
    vlTOPp->mkCounter__DOT__x___05Fh3522 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 5U));
    vlTOPp->mkCounter__DOT__x___05Fh3269 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 5U));
    vlTOPp->mkCounter__DOT__x___05Fh3328 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 4U));
    vlTOPp->mkCounter__DOT__x___05Fh3075 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 4U));
    vlTOPp->mkCounter__DOT__x___05Fh3134 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 3U));
    vlTOPp->mkCounter__DOT__x___05Fh2881 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 3U));
    vlTOPp->mkCounter__DOT__x___05Fh2940 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 2U));
    vlTOPp->mkCounter__DOT__x___05Fh2687 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 2U));
    vlTOPp->mkCounter__DOT__x___05Fh2746 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   & vlTOPp->mkCounter__DOT__c) 
                                                  >> 1U));
    vlTOPp->mkCounter__DOT__x___05Fh2493 = (1U & ((vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                   ^ vlTOPp->mkCounter__DOT__c) 
                                                  >> 1U));
    vlTOPp->mkCounter__DOT__y___05Fh2494 = (1U & (vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167 
                                                  & vlTOPp->mkCounter__DOT__c));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d389 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh2493) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh2494)) 
            << 1U) | (1U & vlTOPp->mkCounter__DOT__IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF___05FETC___05Fq2));
    vlTOPp->mkCounter__DOT__y___05Fh2747 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh2494) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh2493));
    vlTOPp->mkCounter__DOT__y___05Fh2688 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh2746) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh2747));
    vlTOPp->mkCounter__DOT__y___05Fh2941 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh2688) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh2687));
    vlTOPp->mkCounter__DOT__y___05Fh2882 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh2940) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh2941));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d390 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh2881) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh2882)) 
            << 3U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh2687) 
                        ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh2688)) 
                       << 2U) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d389)));
    vlTOPp->mkCounter__DOT__y___05Fh3135 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh2882) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh2881));
    vlTOPp->mkCounter__DOT__y___05Fh3076 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh3134) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh3135));
    vlTOPp->mkCounter__DOT__y___05Fh3329 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh3076) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh3075));
    vlTOPp->mkCounter__DOT__y___05Fh3270 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh3328) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh3329));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d391 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh3269) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh3270)) 
            << 5U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh3075) 
                        ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh3076)) 
                       << 4U) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d390)));
    vlTOPp->mkCounter__DOT__y___05Fh3523 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh3270) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh3269));
    vlTOPp->mkCounter__DOT__y___05Fh3464 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh3522) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh3523));
    vlTOPp->mkCounter__DOT__y___05Fh3717 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh3464) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh3463));
    vlTOPp->mkCounter__DOT__y___05Fh3658 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh3716) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh3717));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d392 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh3657) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh3658)) 
            << 7U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh3463) 
                        ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh3464)) 
                       << 6U) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d391)));
    vlTOPp->mkCounter__DOT__y___05Fh3911 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh3658) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh3657));
    vlTOPp->mkCounter__DOT__y___05Fh3852 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh3910) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh3911));
    vlTOPp->mkCounter__DOT__y___05Fh4105 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh3852) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh3851));
    vlTOPp->mkCounter__DOT__y___05Fh4046 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh4104) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh4105));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d393 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh4045) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh4046)) 
            << 9U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh3851) 
                        ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh3852)) 
                       << 8U) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d392)));
    vlTOPp->mkCounter__DOT__y___05Fh4299 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh4046) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh4045));
    vlTOPp->mkCounter__DOT__y___05Fh4240 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh4298) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh4299));
    vlTOPp->mkCounter__DOT__y___05Fh4493 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh4240) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh4239));
    vlTOPp->mkCounter__DOT__y___05Fh4434 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh4492) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh4493));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d394 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh4433) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh4434)) 
            << 0xbU) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh4239) 
                          ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh4240)) 
                         << 0xaU) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d393)));
    vlTOPp->mkCounter__DOT__y___05Fh4687 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh4434) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh4433));
    vlTOPp->mkCounter__DOT__y___05Fh4628 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh4686) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh4687));
    vlTOPp->mkCounter__DOT__y___05Fh4881 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh4628) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh4627));
    vlTOPp->mkCounter__DOT__y___05Fh4822 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh4880) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh4881));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d395 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh4821) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh4822)) 
            << 0xdU) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh4627) 
                          ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh4628)) 
                         << 0xcU) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d394)));
    vlTOPp->mkCounter__DOT__y___05Fh5075 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh4822) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh4821));
    vlTOPp->mkCounter__DOT__y___05Fh5016 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh5074) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh5075));
    vlTOPp->mkCounter__DOT__y___05Fh5269 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh5016) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh5015));
    vlTOPp->mkCounter__DOT__y___05Fh5210 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh5268) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh5269));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d396 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh5209) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh5210)) 
            << 0xfU) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh5015) 
                          ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh5016)) 
                         << 0xeU) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d395)));
    vlTOPp->mkCounter__DOT__y___05Fh5463 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh5210) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh5209));
    vlTOPp->mkCounter__DOT__y___05Fh5404 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh5462) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh5463));
    vlTOPp->mkCounter__DOT__y___05Fh5657 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh5404) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh5403));
    vlTOPp->mkCounter__DOT__y___05Fh5598 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh5656) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh5657));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d397 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh5597) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh5598)) 
            << 0x11U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh5403) 
                           ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh5404)) 
                          << 0x10U) | (IData)(vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d396)));
    vlTOPp->mkCounter__DOT__y___05Fh5851 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh5598) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh5597));
    vlTOPp->mkCounter__DOT__y___05Fh5792 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh5850) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh5851));
    vlTOPp->mkCounter__DOT__y___05Fh6045 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh5792) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh5791));
    vlTOPp->mkCounter__DOT__y___05Fh5986 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh6044) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh6045));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d398 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh5985) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh5986)) 
            << 0x13U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh5791) 
                           ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh5792)) 
                          << 0x12U) | vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d397));
    vlTOPp->mkCounter__DOT__y___05Fh6239 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh5986) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh5985));
    vlTOPp->mkCounter__DOT__y___05Fh6180 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh6238) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh6239));
    vlTOPp->mkCounter__DOT__y___05Fh6433 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh6180) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh6179));
    vlTOPp->mkCounter__DOT__y___05Fh6374 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh6432) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh6433));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d399 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh6373) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh6374)) 
            << 0x15U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh6179) 
                           ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh6180)) 
                          << 0x14U) | vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d398));
    vlTOPp->mkCounter__DOT__y___05Fh6627 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh6374) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh6373));
    vlTOPp->mkCounter__DOT__y___05Fh6568 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh6626) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh6627));
    vlTOPp->mkCounter__DOT__y___05Fh6821 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh6568) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh6567));
    vlTOPp->mkCounter__DOT__y___05Fh6762 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh6820) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh6821));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d400 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh6761) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh6762)) 
            << 0x17U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh6567) 
                           ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh6568)) 
                          << 0x16U) | vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d399));
    vlTOPp->mkCounter__DOT__y___05Fh7015 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh6762) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh6761));
    vlTOPp->mkCounter__DOT__y___05Fh6956 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh7014) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh7015));
    vlTOPp->mkCounter__DOT__y___05Fh7209 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh6956) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh6955));
    vlTOPp->mkCounter__DOT__y___05Fh7150 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh7208) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh7209));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d401 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh7149) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh7150)) 
            << 0x19U) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh6955) 
                           ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh6956)) 
                          << 0x18U) | vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d400));
    vlTOPp->mkCounter__DOT__y___05Fh7403 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh7150) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh7149));
    vlTOPp->mkCounter__DOT__y___05Fh7344 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh7402) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh7403));
    vlTOPp->mkCounter__DOT__y___05Fh7597 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh7344) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh7343));
    vlTOPp->mkCounter__DOT__y___05Fh7538 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh7596) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh7597));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d402 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh7537) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh7538)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh7343) 
                           ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh7344)) 
                          << 0x1aU) | vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d401));
    vlTOPp->mkCounter__DOT__y___05Fh7791 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh7538) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh7537));
    vlTOPp->mkCounter__DOT__y___05Fh7732 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh7790) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh7791));
    vlTOPp->mkCounter__DOT__y___05Fh7985 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh7732) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh7731));
    vlTOPp->mkCounter__DOT__y___05Fh7926 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh7984) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh7985));
    vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d403 
        = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh7925) 
             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh7926)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh7731) 
                           ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh7732)) 
                          << 0x1cU) | vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d402));
    vlTOPp->mkCounter__DOT__y___05Fh8179 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh7926) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh7925));
    vlTOPp->mkCounter__DOT__y___05Fh8120 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh8178) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh8179));
    vlTOPp->mkCounter__DOT__y___05Fh8373 = ((IData)(vlTOPp->mkCounter__DOT__y___05Fh8120) 
                                            & (IData)(vlTOPp->mkCounter__DOT__x___05Fh8119));
    vlTOPp->mkCounter__DOT__y___05Fh8314 = ((IData)(vlTOPp->mkCounter__DOT__x___05Fh8372) 
                                            | (IData)(vlTOPp->mkCounter__DOT__y___05Fh8373));
    vlTOPp->mkCounter__DOT__x___05Fh821 = ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh8313) 
                                             ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh8314)) 
                                            << 0x1fU) 
                                           | ((((IData)(vlTOPp->mkCounter__DOT__x___05Fh8119) 
                                                ^ (IData)(vlTOPp->mkCounter__DOT__y___05Fh8120)) 
                                               << 0x1eU) 
                                              | vlTOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d403));
    vlTOPp->mkCounter__DOT__out_D_IN = ((IData)(vlTOPp->mkCounter__DOT__s)
                                         ? vlTOPp->mkCounter__DOT__x___05Fh301
                                         : vlTOPp->mkCounter__DOT__x___05Fh821);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->EN_mac_calc) 
                         & (IData)(vlTOPp->mkCounter__DOT__s)))) {
            VL_WRITEF("----this is mac_flt-----\n");
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->EN_mac_calc) 
                         & (~ (IData)(vlTOPp->mkCounter__DOT__s))))) {
            VL_WRITEF("----this is mac_int-----\n");
        }
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkCounter__DOT__s_EN = vlTOPp->EN_read_S;
    vlTOPp->mkCounter__DOT__s_D_IN = vlTOPp->read_S_s_in;
    vlTOPp->mkCounter__DOT__out_EN = vlTOPp->EN_mac_calc;
    vlTOPp->mkCounter__DOT__c_EN = vlTOPp->EN_read_C;
    vlTOPp->mkCounter__DOT__c_D_IN = vlTOPp->read_C_c_in;
    vlTOPp->mkCounter__DOT__b_EN = vlTOPp->EN_read_B;
    vlTOPp->mkCounter__DOT__b_D_IN = vlTOPp->read_B_b_in;
    vlTOPp->mkCounter__DOT__a_EN = vlTOPp->EN_read_A;
    vlTOPp->mkCounter__DOT__a_D_IN = vlTOPp->read_A_a_in;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
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
