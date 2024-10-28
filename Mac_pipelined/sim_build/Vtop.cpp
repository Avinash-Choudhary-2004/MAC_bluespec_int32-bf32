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
            VL_FATAL_MT("/home/shakti/Mac_pipelined/verilog/mkMac.v", 36, "",
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
            VL_FATAL_MT("/home/shakti/Mac_pipelined/verilog/mkMac.v", 36, "",
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
    vlTOPp->mkMac__DOT__read_in_mul_in[0U] = vlTOPp->read_in_mul_in[0U];
    vlTOPp->mkMac__DOT__read_in_mul_in[1U] = vlTOPp->read_in_mul_in[1U];
    vlTOPp->mkMac__DOT__read_in_mul_in[2U] = vlTOPp->read_in_mul_in[2U];
    vlTOPp->mkMac__DOT__EN_read_in = vlTOPp->EN_read_in;
    vlTOPp->mkMac__DOT__EN_mac_calc = vlTOPp->EN_mac_calc;
    vlTOPp->mkMac__DOT__WILL_FIRE_read_in = vlTOPp->EN_read_in;
    vlTOPp->mkMac__DOT__WILL_FIRE_mac_calc = vlTOPp->EN_mac_calc;
    vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fwrite_1[0U] 
        = vlTOPp->read_in_mul_in[0U];
    vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fwrite_1[1U] 
        = vlTOPp->read_in_mul_in[1U];
    vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fwrite_1[2U] 
        = (2U | vlTOPp->read_in_mul_in[2U]);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__adder_ofifo_rv_EN) {
            vlTOPp->mkMac__DOT__adder_ofifo_rv = vlTOPp->mkMac__DOT__adder_ofifo_rv_D_IN;
        }
    } else {
        vlTOPp->mkMac__DOT__adder_ofifo_rv = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__multiplier_ififo_rv_EN) {
            vlTOPp->mkMac__DOT__multiplier_ififo_rv[0U] 
                = vlTOPp->mkMac__DOT__multiplier_ififo_rv_D_IN[0U];
            vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                = vlTOPp->mkMac__DOT__multiplier_ififo_rv_D_IN[1U];
            vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                = vlTOPp->mkMac__DOT__multiplier_ififo_rv_D_IN[2U];
        }
    } else {
        vlTOPp->mkMac__DOT__multiplier_ififo_rv[0U] = 0U;
        vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] = 0U;
        vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMac__DOT__adder_ififo_rv_EN) {
            vlTOPp->mkMac__DOT__adder_ififo_rv[0U] 
                = vlTOPp->mkMac__DOT__adder_ififo_rv_D_IN[0U];
            vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                = vlTOPp->mkMac__DOT__adder_ififo_rv_D_IN[1U];
            vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                = vlTOPp->mkMac__DOT__adder_ififo_rv_D_IN[2U];
        }
    } else {
        vlTOPp->mkMac__DOT__adder_ififo_rv[0U] = 0U;
        vlTOPp->mkMac__DOT__adder_ififo_rv[1U] = 0U;
        vlTOPp->mkMac__DOT__adder_ififo_rv[2U] = 0U;
    }
    vlTOPp->mkMac__DOT__CAN_FIRE_mac_calc = (1U & (IData)(
                                                          (vlTOPp->mkMac__DOT__adder_ofifo_rv 
                                                           >> 0x20U)));
    vlTOPp->mkMac__DOT__mac_calc = (IData)(vlTOPp->mkMac__DOT__adder_ofifo_rv);
    vlTOPp->mkMac__DOT__RDY_mac_calc = (1U & (IData)(
                                                     (vlTOPp->mkMac__DOT__adder_ofifo_rv 
                                                      >> 0x20U)));
    vlTOPp->mkMac__DOT__x___05Fh1613 = (0xffU & (((
                                                   vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                     >> 0x18U)) 
                                                 + 
                                                 ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                     >> 8U))));
    vlTOPp->mkMac__DOT__product___05Fh1379 = (0x80U 
                                              | (0x7fU 
                                                 & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                     << 0xfU) 
                                                    | (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                       >> 0x11U))));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89 
        = (0xffffU & ((0x10000U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
                       ? ((IData)(1U) + (~ ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                               >> 1U))))
                       : ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                           << 0x1fU) | (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                        >> 1U))));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1 
        = (0xffffU & ((1U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U])
                       ? ((IData)(1U) + (~ ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                             << 0xfU) 
                                            | (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                               >> 0x11U))))
                       : ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                           << 0xfU) | (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                       >> 0x11U))));
    vlTOPp->mkMac__DOT__x___05Fh16311 = (1U & (vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                                               ^ vlTOPp->mkMac__DOT__adder_ififo_rv[1U]));
    vlTOPp->mkMac__DOT__x___05Fh16368 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1fU));
    vlTOPp->mkMac__DOT__x___05Fh16123 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1fU));
    vlTOPp->mkMac__DOT__x___05Fh16180 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1eU));
    vlTOPp->mkMac__DOT__x___05Fh15935 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1eU));
    vlTOPp->mkMac__DOT__x___05Fh15992 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1dU));
    vlTOPp->mkMac__DOT__x___05Fh15747 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1dU));
    vlTOPp->mkMac__DOT__x___05Fh15804 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1cU));
    vlTOPp->mkMac__DOT__x___05Fh15559 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1cU));
    vlTOPp->mkMac__DOT__x___05Fh15616 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1bU));
    vlTOPp->mkMac__DOT__x___05Fh15371 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1bU));
    vlTOPp->mkMac__DOT__x___05Fh15428 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1aU));
    vlTOPp->mkMac__DOT__x___05Fh15183 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x1aU));
    vlTOPp->mkMac__DOT__x___05Fh15240 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x19U));
    vlTOPp->mkMac__DOT__x___05Fh14995 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x19U));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_BIT_33_XOR_adder_ififo_rv_BI_ETC___05Fq3 
        = ((2U & (vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                  ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]))
            ? 1U : 0U);
    vlTOPp->mkMac__DOT__x___05Fh15052 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x18U));
    vlTOPp->mkMac__DOT__x___05Fh14807 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x18U));
    vlTOPp->mkMac__DOT__x___05Fh14864 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh14619 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh14676 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh14431 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh14488 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh14243 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh14300 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh14055 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh14112 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh13867 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh13924 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh13679 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh13736 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh13491 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh13548 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh13303 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh13360 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh13115 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh13172 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh12927 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh12984 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh12739 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh12796 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh12551 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh12608 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh12363 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh12420 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh12175 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh12232 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh11987 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh12044 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh11799 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh11856 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh11611 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh11668 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh11423 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh11480 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh11235 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh11292 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 4U));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_56_1_ETC___05F_d219 
        = ((0xffU & ((vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                      << 8U) | (vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                >> 0x18U))) <= (0xffU 
                                                & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                    << 8U) 
                                                   | (vlTOPp->mkMac__DOT__adder_ififo_rv[0U] 
                                                      >> 0x18U))));
    vlTOPp->mkMac__DOT__delta_exp___05Fh3769 = (0xffU 
                                                & (((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->mkMac__DOT__adder_ififo_rv[0U] 
                                                       >> 0x18U)) 
                                                   - 
                                                   ((vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                       >> 0x18U))));
    vlTOPp->mkMac__DOT__delta_exp___05Fh3846 = (0xffU 
                                                & (((vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                       >> 0x18U)) 
                                                   - 
                                                   ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->mkMac__DOT__adder_ififo_rv[0U] 
                                                       >> 0x18U))));
    vlTOPp->mkMac__DOT__c_mant_aligned___05Fh2919 = 
        (0x800000U | (0x7fffffU & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                    << 0x1fU) | (vlTOPp->mkMac__DOT__adder_ififo_rv[0U] 
                                                 >> 1U))));
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2917 
        = (0x800000U | (0x7fffffU & ((vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                                      << 0x1fU) | (
                                                   vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                   >> 1U))));
    vlTOPp->mkMac__DOT__x___05Fh11047 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh11104 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh10859 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh10916 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh10671 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                ^ vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 2U));
    vlTOPp->mkMac__DOT__y___05Fh10672 = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                & vlTOPp->mkMac__DOT__adder_ififo_rv[0U]) 
                                               >> 1U));
    vlTOPp->mac_calc = vlTOPp->mkMac__DOT__mac_calc;
    vlTOPp->RDY_mac_calc = vlTOPp->mkMac__DOT__RDY_mac_calc;
    vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1432 
        = (0xffU & ((IData)(0x82U) + (IData)(vlTOPp->mkMac__DOT__x___05Fh1613)));
    vlTOPp->mkMac__DOT__result_exp___05Fh914 = (0xffU 
                                                & ((IData)(0x81U) 
                                                   + (IData)(vlTOPp->mkMac__DOT__x___05Fh1613)));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_33_8_TH_ETC___05F_d21 
        = ((2U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1379)
            : 0U);
    vlTOPp->mkMac__DOT__product___05Fh2612 = (0x7fffU 
                                              & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1));
    vlTOPp->mkMac__DOT__result_exp___05Fh2921 = (0xffU 
                                                 & ((IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_56_1_ETC___05F_d219)
                                                     ? 
                                                    ((vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                      << 8U) 
                                                     | (vlTOPp->mkMac__DOT__adder_ififo_rv[0U] 
                                                        >> 0x18U))
                                                     : 
                                                    ((vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                                                      << 8U) 
                                                     | (vlTOPp->mkMac__DOT__adder_ififo_rv[1U] 
                                                        >> 0x18U))));
    vlTOPp->mkMac__DOT__i___05Fh9828 = (0xffU & ((IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh3769) 
                                                 - (IData)(1U)));
    vlTOPp->mkMac__DOT__i___05Fh9813 = (0xffU & ((IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh3846) 
                                                 - (IData)(1U)));
    vlTOPp->mkMac__DOT__c_mant_aligned___05F_1___05Fh3848 
        = ((0x17U >= (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh3846))
            ? (0xffffffU & (vlTOPp->mkMac__DOT__c_mant_aligned___05Fh2919 
                            >> (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh3846)))
            : 0U);
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh3771 
        = ((0x17U >= (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh3769))
            ? (0xffffffU & (vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2917 
                            >> (IData)(vlTOPp->mkMac__DOT__delta_exp___05Fh3769)))
            : 0U);
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_34_26_XOR_a_ETC___05F_d656 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10671) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10672)) 
            << 1U) | (1U & vlTOPp->mkMac__DOT__IF_adder_ififo_rv_BIT_33_XOR_adder_ififo_rv_BI_ETC___05Fq3));
    vlTOPp->mkMac__DOT__y___05Fh10917 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10672) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10671));
    vlTOPp->mkMac__DOT__product___05Fh1356 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_33_8_TH_ETC___05F_d21) 
                                                 + 
                                                 (0x100U 
                                                  | (0xfeU 
                                                     & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                         << 0x10U) 
                                                        | (0xfffeU 
                                                           & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                              >> 0x10U)))))));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d111 
        = ((1U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2612
            : 0U);
    vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh9751 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh2921)));
    vlTOPp->mkMac__DOT__round_flag___05Fh3770 = ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->mkMac__DOT__i___05Fh9828))) 
                                                 & (vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2917 
                                                    >> 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkMac__DOT__i___05Fh9828))));
    vlTOPp->mkMac__DOT__round_flag___05Fh3847 = ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->mkMac__DOT__i___05Fh9813))) 
                                                 & (vlTOPp->mkMac__DOT__c_mant_aligned___05Fh2919 
                                                    >> 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->mkMac__DOT__i___05Fh9813))));
    if (vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_56_1_ETC___05F_d219) {
        vlTOPp->mkMac__DOT__x___05Fh3841 = vlTOPp->mkMac__DOT__c_mant_aligned___05Fh2919;
        vlTOPp->mkMac__DOT__x___05Fh3696 = vlTOPp->mkMac__DOT__result_mant_aligned___05Fh3771;
    } else {
        vlTOPp->mkMac__DOT__x___05Fh3841 = vlTOPp->mkMac__DOT__c_mant_aligned___05F_1___05Fh3848;
        vlTOPp->mkMac__DOT__x___05Fh3696 = vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2917;
    }
    vlTOPp->mkMac__DOT__y___05Fh10860 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh10916) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh10917));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_34_7_TH_ETC___05F_d24 
        = ((4U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1356)
            : (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_33_8_TH_ETC___05F_d21));
    vlTOPp->mkMac__DOT__product___05Fh2589 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d111 
                                              + (0xfffeU 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 1U)));
    vlTOPp->mkMac__DOT___theResult___05F_snd_snd_snd_snd___05Fh3845 
        = ((IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_56_1_ETC___05F_d219)
            ? (IData)(vlTOPp->mkMac__DOT__round_flag___05Fh3770)
            : (IData)(vlTOPp->mkMac__DOT__round_flag___05Fh3847));
    vlTOPp->mkMac__DOT__IF_x696_BIT_0_XOR_x841_BIT_0_THEN_1_ELSE_0___05Fq2 
        = ((1U & (vlTOPp->mkMac__DOT__x___05Fh3696 
                  ^ vlTOPp->mkMac__DOT__x___05Fh3841))
            ? 1U : 0U);
    vlTOPp->mkMac__DOT__x___05Fh8330 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh8085 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x17U));
    vlTOPp->mkMac__DOT__x___05Fh8142 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh7897 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x16U));
    vlTOPp->mkMac__DOT__x___05Fh7954 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh7709 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x15U));
    vlTOPp->mkMac__DOT__x___05Fh7766 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh7521 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x14U));
    vlTOPp->mkMac__DOT__x___05Fh7578 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh7333 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x13U));
    vlTOPp->mkMac__DOT__x___05Fh7390 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh7145 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x12U));
    vlTOPp->mkMac__DOT__x___05Fh7202 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh6957 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x11U));
    vlTOPp->mkMac__DOT__x___05Fh7014 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh6769 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0x10U));
    vlTOPp->mkMac__DOT__x___05Fh6826 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh6581 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xfU));
    vlTOPp->mkMac__DOT__x___05Fh6638 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh6393 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xeU));
    vlTOPp->mkMac__DOT__x___05Fh6450 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh6205 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xdU));
    vlTOPp->mkMac__DOT__x___05Fh6262 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh6017 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xcU));
    vlTOPp->mkMac__DOT__x___05Fh6074 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh5829 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xbU));
    vlTOPp->mkMac__DOT__x___05Fh5886 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh5641 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 0xaU));
    vlTOPp->mkMac__DOT__x___05Fh5698 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh5453 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 9U));
    vlTOPp->mkMac__DOT__x___05Fh5510 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh5265 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 8U));
    vlTOPp->mkMac__DOT__x___05Fh5322 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh5077 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 7U));
    vlTOPp->mkMac__DOT__x___05Fh5134 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh4889 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 6U));
    vlTOPp->mkMac__DOT__x___05Fh4946 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh4701 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 5U));
    vlTOPp->mkMac__DOT__x___05Fh4758 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh4513 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 4U));
    vlTOPp->mkMac__DOT__x___05Fh4570 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh4325 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 3U));
    vlTOPp->mkMac__DOT__x___05Fh4382 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh4137 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 2U));
    vlTOPp->mkMac__DOT__x___05Fh4194 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               & vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__x___05Fh3949 = (1U & ((vlTOPp->mkMac__DOT__x___05Fh3696 
                                               ^ vlTOPp->mkMac__DOT__x___05Fh3841) 
                                              >> 1U));
    vlTOPp->mkMac__DOT__y___05Fh3950 = (1U & (vlTOPp->mkMac__DOT__x___05Fh3696 
                                              & vlTOPp->mkMac__DOT__x___05Fh3841));
    vlTOPp->mkMac__DOT__y___05Fh11105 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh10860) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh10859));
    vlTOPp->mkMac__DOT__product___05Fh1333 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_34_7_TH_ETC___05F_d24) 
                                                 + 
                                                 (0x200U 
                                                  | (0x1fcU 
                                                     & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                         << 0x11U) 
                                                        | (0x1fffcU 
                                                           & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                              >> 0xfU)))))));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d114 
        = ((2U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2589
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d111);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d408 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh3949) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh3950));
    vlTOPp->mkMac__DOT__y___05Fh4195 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh3950) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh3949));
    vlTOPp->mkMac__DOT__y___05Fh11048 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11104) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11105));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_35_6_TH_ETC___05F_d28 
        = ((8U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1333)
            : (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_34_7_TH_ETC___05F_d24));
    vlTOPp->mkMac__DOT__product___05Fh2566 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d114 
                                              + (0x1fffcU 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 2U)));
    vlTOPp->mkMac__DOT__y___05Fh4138 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4194) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4195));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_36_20_XOR_a_ETC___05F_d657 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11047) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11048)) 
            << 3U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh10859) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh10860)) 
                       << 2U) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_34_26_XOR_a_ETC___05F_d656)));
    vlTOPp->mkMac__DOT__y___05Fh11293 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11048) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11047));
    vlTOPp->mkMac__DOT__product___05Fh1310 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_35_6_TH_ETC___05F_d28) 
                                                 + 
                                                 (0x400U 
                                                  | (0x3f8U 
                                                     & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                         << 0x12U) 
                                                        | (0x3fff8U 
                                                           & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                              >> 0xeU)))))));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d118 
        = ((4U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2566
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d114);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d407 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4137) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4138));
    vlTOPp->mkMac__DOT__y___05Fh4383 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4138) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4137));
    vlTOPp->mkMac__DOT__y___05Fh11236 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11292) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11293));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_36_5_TH_ETC___05F_d32 
        = ((0x10U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1310)
            : (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_35_6_TH_ETC___05F_d28));
    vlTOPp->mkMac__DOT__product___05Fh2543 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d118 
                                              + (0x3fff8U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 3U)));
    vlTOPp->mkMac__DOT__y___05Fh4326 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4382) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4383));
    vlTOPp->mkMac__DOT__y___05Fh11481 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11236) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11235));
    vlTOPp->mkMac__DOT__product___05Fh1287 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_36_5_TH_ETC___05F_d32) 
                                                 + 
                                                 (0x800U 
                                                  | (0x7f0U 
                                                     & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                         << 0x13U) 
                                                        | (0x7fff0U 
                                                           & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                              >> 0xdU)))))));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d122 
        = ((8U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2543
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d118);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d406 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4325) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4326));
    vlTOPp->mkMac__DOT__y___05Fh4571 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4326) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4325));
    vlTOPp->mkMac__DOT__y___05Fh11424 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11480) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11481));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_37_4_TH_ETC___05F_d37 
        = ((0x20U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1287)
            : (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_36_5_TH_ETC___05F_d32));
    vlTOPp->mkMac__DOT__product___05Fh2520 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d122 
                                              + (0x7fff0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 4U)));
    vlTOPp->mkMac__DOT__y___05Fh4514 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4570) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4571));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_38_14_XOR_a_ETC___05F_d658 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11423) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11424)) 
            << 5U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11235) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11236)) 
                       << 4U) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_36_20_XOR_a_ETC___05F_d657)));
    vlTOPp->mkMac__DOT__y___05Fh11669 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11424) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11423));
    vlTOPp->mkMac__DOT__product___05Fh1264 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_37_4_TH_ETC___05F_d37) 
                                                 + 
                                                 (0x1000U 
                                                  | (0xfe0U 
                                                     & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                         << 0x14U) 
                                                        | (0xfffe0U 
                                                           & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                              >> 0xcU)))))));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d127 
        = ((0x10U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2520
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d122);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d405 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4513) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4514));
    vlTOPp->mkMac__DOT__y___05Fh4759 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4514) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4513));
    vlTOPp->mkMac__DOT__y___05Fh11612 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11668) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11669));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_38_3_TH_ETC___05F_d42 
        = ((0x40U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
            ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1264)
            : (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_37_4_TH_ETC___05F_d37));
    vlTOPp->mkMac__DOT__product___05Fh2497 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d127 
                                              + (0xfffe0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 5U)));
    vlTOPp->mkMac__DOT__y___05Fh4702 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4758) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4759));
    vlTOPp->mkMac__DOT__y___05Fh11857 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11612) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11611));
    vlTOPp->mkMac__DOT__product___05Fh1241 = (0xffffU 
                                              & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_38_3_TH_ETC___05F_d42) 
                                                 + 
                                                 (0x2000U 
                                                  | (0x1fc0U 
                                                     & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                         << 0x15U) 
                                                        | (0x1fffc0U 
                                                           & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                              >> 0xbU)))))));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d132 
        = ((0x20U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2497
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d127);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d404 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4701) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4702));
    vlTOPp->mkMac__DOT__y___05Fh4947 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4702) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4701));
    vlTOPp->mkMac__DOT__y___05Fh11800 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh11856) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh11857));
    vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_TH_ETC___05F_d53 
        = (0xffffU & (((0x80U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])
                        ? (IData)(vlTOPp->mkMac__DOT__product___05Fh1241)
                        : (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_38_3_TH_ETC___05F_d42)) 
                      + (0x4000U | (0x3f80U & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                << 0x16U) 
                                               | (0x3fff80U 
                                                  & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                     >> 0xaU)))))));
    vlTOPp->mkMac__DOT__product___05Fh2474 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d132 
                                              + (0x1fffc0U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 6U)));
    vlTOPp->mkMac__DOT__y___05Fh4890 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4946) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh4947));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_40_08_XOR_a_ETC___05F_d659 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11799) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11800)) 
            << 7U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11611) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11612)) 
                       << 6U) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_38_14_XOR_a_ETC___05F_d658)));
    vlTOPp->mkMac__DOT__y___05Fh12045 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11800) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11799));
    vlTOPp->mkMac__DOT__result_exp___05Fh917 = ((0x8000U 
                                                 & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_TH_ETC___05F_d53))
                                                 ? (IData)(vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1432)
                                                 : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh914));
    vlTOPp->mkMac__DOT__result_mant___05F_1___05Fh1431 
        = (0xfffeU & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_TH_ETC___05F_d53) 
                      << 1U));
    vlTOPp->mkMac__DOT__result_mant___05Fh1453 = (0xfffcU 
                                                  & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_TH_ETC___05F_d53) 
                                                     << 2U));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d138 
        = ((0x40U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2474
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d132);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d403 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh4889) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh4890));
    vlTOPp->mkMac__DOT__y___05Fh5135 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh4890) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh4889));
    vlTOPp->mkMac__DOT__y___05Fh11988 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12044) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12045));
    vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1596 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh917)));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59 
        = ((0x8000U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_TH_ETC___05F_d53))
            ? (IData)(vlTOPp->mkMac__DOT__result_mant___05F_1___05Fh1431)
            : (IData)(vlTOPp->mkMac__DOT__result_mant___05Fh1453));
    vlTOPp->mkMac__DOT__product___05Fh2451 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d138 
                                              + (0x3fff80U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 7U)));
    vlTOPp->mkMac__DOT__y___05Fh5078 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5134) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5135));
    vlTOPp->mkMac__DOT__y___05Fh12233 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh11988) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh11987));
    vlTOPp->mkMac__DOT__rounded_result_mant___05Fh1547 
        = (0x7fU & ((IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59) 
                    >> 9U));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d144 
        = ((0x80U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2451
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d138);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d402 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5077) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5078));
    vlTOPp->mkMac__DOT__y___05Fh5323 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5078) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5077));
    vlTOPp->mkMac__DOT__y___05Fh12176 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12232) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12233));
    vlTOPp->mkMac__DOT___0_CONCAT_IF_IF_multiplier_ififo_rv_port0___05Fread_ETC___05F_d69 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMac__DOT__rounded_result_mant___05Fh1547)));
    vlTOPp->mkMac__DOT__product___05Fh2428 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d144 
                                              + (0x7fff00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 8U)));
    vlTOPp->mkMac__DOT__y___05Fh5266 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5322) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5323));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_42_02_XOR_a_ETC___05F_d660 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12175) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12176)) 
            << 9U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh11987) 
                        ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh11988)) 
                       << 8U) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_40_08_XOR_a_ETC___05F_d659)));
    vlTOPp->mkMac__DOT__y___05Fh12421 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12176) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12175));
    vlTOPp->mkMac__DOT___theResult___05F___05F_1_fst___05Fh1543 
        = (0xfe00U & (((1U & (((IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59) 
                               >> 8U) & (((IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59) 
                                          >> 9U) | 
                                         (0U != (0xffU 
                                                 & (IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59))))))
                        ? (IData)(vlTOPp->mkMac__DOT___0_CONCAT_IF_IF_multiplier_ififo_rv_port0___05Fread_ETC___05F_d69)
                        : ((IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59) 
                           >> 9U)) << 9U));
    vlTOPp->mkMac__DOT___theResult___05F___05F_1_snd_fst___05Fh1551 
        = ((0x80U & (IData)(vlTOPp->mkMac__DOT___0_CONCAT_IF_IF_multiplier_ififo_rv_port0___05Fread_ETC___05F_d69))
            ? (IData)(vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh1596)
            : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh917));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d151 
        = ((0x100U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2428
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d144);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d401 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5265) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5266));
    vlTOPp->mkMac__DOT__y___05Fh5511 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5266) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5265));
    vlTOPp->mkMac__DOT__y___05Fh12364 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12420) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12421));
    vlTOPp->mkMac__DOT___theResult___05F___05F_1_snd_fst___05Fh1545 
        = ((1U & (((IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59) 
                   >> 8U) & (((IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59) 
                              >> 9U) | (0U != (0xffU 
                                               & (IData)(vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59))))))
            ? (IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_1_snd_fst___05Fh1551)
            : (IData)(vlTOPp->mkMac__DOT__result_exp___05Fh917));
    vlTOPp->mkMac__DOT__product___05Fh2405 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d151 
                                              + (0xfffe00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 9U)));
    vlTOPp->mkMac__DOT__y___05Fh5454 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5510) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5511));
    vlTOPp->mkMac__DOT__y___05Fh12609 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12364) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12363));
    vlTOPp->mkMac__DOT__product___05Fh910 = ((0x80000000U 
                                              & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                                                  << 0x1fU) 
                                                 ^ 
                                                 (0x80000000U 
                                                  & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                     << 0xfU)))) 
                                             | (((IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_1_snd_fst___05Fh1545) 
                                                 << 0x17U) 
                                                | ((IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_1_fst___05Fh1543) 
                                                   << 7U)));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d158 
        = ((0x200U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2405
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d151);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d400 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5453) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5454));
    vlTOPp->mkMac__DOT__y___05Fh5699 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5454) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5453));
    vlTOPp->mkMac__DOT__y___05Fh12552 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12608) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12609));
    vlTOPp->mkMac__DOT__product___05Fh2382 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d158 
                                              + (0x1fffc00U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 0xaU)));
    vlTOPp->mkMac__DOT__y___05Fh5642 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5698) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5699));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_44_96_XOR_a_ETC___05F_d661 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12551) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12552)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12363) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12364)) 
                         << 0xaU) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_42_02_XOR_a_ETC___05F_d660)));
    vlTOPp->mkMac__DOT__y___05Fh12797 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12552) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12551));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d166 
        = ((0x400U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2382
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d158);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d399 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5641) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5642));
    vlTOPp->mkMac__DOT__y___05Fh5887 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5642) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5641));
    vlTOPp->mkMac__DOT__y___05Fh12740 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12796) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12797));
    vlTOPp->mkMac__DOT__product___05Fh2359 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d166 
                                              + (0x3fff800U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 0xbU)));
    vlTOPp->mkMac__DOT__y___05Fh5830 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5886) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh5887));
    vlTOPp->mkMac__DOT__y___05Fh12985 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12740) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12739));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d174 
        = ((0x800U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2359
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d166);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d398 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh5829) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh5830));
    vlTOPp->mkMac__DOT__y___05Fh6075 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh5830) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh5829));
    vlTOPp->mkMac__DOT__y___05Fh12928 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh12984) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh12985));
    vlTOPp->mkMac__DOT__product___05Fh2336 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d174 
                                              + (0x7fff000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 0xcU)));
    vlTOPp->mkMac__DOT__y___05Fh6018 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6074) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6075));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_46_90_XOR_a_ETC___05F_d662 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12927) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12928)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh12739) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh12740)) 
                         << 0xcU) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_44_96_XOR_a_ETC___05F_d661)));
    vlTOPp->mkMac__DOT__y___05Fh13173 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh12928) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh12927));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d183 
        = ((0x1000U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2336
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d174);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d397 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6017) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6018));
    vlTOPp->mkMac__DOT__y___05Fh6263 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6018) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6017));
    vlTOPp->mkMac__DOT__y___05Fh13116 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13172) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13173));
    vlTOPp->mkMac__DOT__product___05Fh2313 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d183 
                                              + (0xfffe000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 0xdU)));
    vlTOPp->mkMac__DOT__y___05Fh6206 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6262) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6263));
    vlTOPp->mkMac__DOT__y___05Fh13361 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13116) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13115));
    vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d192 
        = ((0x2000U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2313
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d183);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d396 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6205) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6206));
    vlTOPp->mkMac__DOT__y___05Fh6451 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6206) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6205));
    vlTOPp->mkMac__DOT__y___05Fh13304 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13360) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13361));
    vlTOPp->mkMac__DOT__product___05Fh2290 = (vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d192 
                                              + (0x1fffc000U 
                                                 & ((IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1) 
                                                    << 0xeU)));
    vlTOPp->mkMac__DOT__y___05Fh6394 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6450) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6451));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_48_84_XOR_a_ETC___05F_d663 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13303) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13304)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13115) 
                          ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13116)) 
                         << 0xeU) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_46_90_XOR_a_ETC___05F_d662)));
    vlTOPp->mkMac__DOT__y___05Fh13549 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13304) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13303));
    vlTOPp->mkMac__DOT__product___05F_2___05Fh1842 
        = ((0x4000U & (IData)(vlTOPp->mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89))
            ? vlTOPp->mkMac__DOT__product___05Fh2290
            : vlTOPp->mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d192);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d395 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6393) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6394));
    vlTOPp->mkMac__DOT__y___05Fh6639 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6394) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6393));
    vlTOPp->mkMac__DOT__y___05Fh13492 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13548) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13549));
    vlTOPp->mkMac__DOT__product___05F_1___05Fh1888 
        = (~ vlTOPp->mkMac__DOT__product___05F_2___05Fh1842);
    vlTOPp->mkMac__DOT__y___05Fh6582 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6638) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6639));
    vlTOPp->mkMac__DOT__y___05Fh13737 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13492) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13491));
    vlTOPp->mkMac__DOT__product___05F_1___05Fh1889 
        = ((IData)(1U) + vlTOPp->mkMac__DOT__product___05F_1___05Fh1888);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d394 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6581) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6582));
    vlTOPp->mkMac__DOT__y___05Fh6827 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6582) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6581));
    vlTOPp->mkMac__DOT__y___05Fh13680 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13736) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13737));
    vlTOPp->mkMac__DOT__product___05Fh1837 = (((1U 
                                                & vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U]) 
                                               == (1U 
                                                   & (vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U] 
                                                      >> 0x10U)))
                                               ? vlTOPp->mkMac__DOT__product___05F_2___05Fh1842
                                               : vlTOPp->mkMac__DOT__product___05F_1___05Fh1889);
    vlTOPp->mkMac__DOT__y___05Fh6770 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6826) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh6827));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_50_78_XOR_a_ETC___05F_d664 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13679) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13680)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13491) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13492)) 
                          << 0x10U) | (IData)(vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_48_84_XOR_a_ETC___05F_d663)));
    vlTOPp->mkMac__DOT__y___05Fh13925 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13680) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13679));
    vlTOPp->mkMac__DOT__x___05Fh867 = ((1U & vlTOPp->mkMac__DOT__multiplier_ififo_rv[0U])
                                        ? vlTOPp->mkMac__DOT__product___05Fh910
                                        : vlTOPp->mkMac__DOT__product___05Fh1837);
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d393 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6769) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6770));
    vlTOPp->mkMac__DOT__y___05Fh7015 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6770) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6769));
    vlTOPp->mkMac__DOT__y___05Fh13868 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh13924) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh13925));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fwrite_1[0U] 
        = (IData)((0x1ffffffffULL & (((QData)((IData)(
                                                      vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->mkMac__DOT__multiplier_ififo_rv[0U])))));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fwrite_1[1U] 
        = ((0xfffffffeU & (vlTOPp->mkMac__DOT__x___05Fh867 
                           << 1U)) | (IData)(((0x1ffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkMac__DOT__multiplier_ififo_rv[0U])))) 
                                              >> 0x20U)));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fwrite_1[2U] 
        = (2U | (1U & (vlTOPp->mkMac__DOT__x___05Fh867 
                       >> 0x1fU)));
    vlTOPp->mkMac__DOT__y___05Fh6958 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7014) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh7015));
    vlTOPp->mkMac__DOT__y___05Fh14113 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh13868) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh13867));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d392 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh6957) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh6958));
    vlTOPp->mkMac__DOT__y___05Fh7203 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh6958) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh6957));
    vlTOPp->mkMac__DOT__y___05Fh14056 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14112) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14113));
    vlTOPp->mkMac__DOT__y___05Fh7146 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7202) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh7203));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_52_72_XOR_a_ETC___05F_d665 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14055) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14056)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh13867) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh13868)) 
                          << 0x12U) | vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_50_78_XOR_a_ETC___05F_d664));
    vlTOPp->mkMac__DOT__y___05Fh14301 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14056) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14055));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d391 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7145) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh7146));
    vlTOPp->mkMac__DOT__y___05Fh7391 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh7146) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh7145));
    vlTOPp->mkMac__DOT__y___05Fh14244 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14300) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14301));
    vlTOPp->mkMac__DOT__y___05Fh7334 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7390) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh7391));
    vlTOPp->mkMac__DOT__y___05Fh14489 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14244) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14243));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d390 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7333) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh7334));
    vlTOPp->mkMac__DOT__y___05Fh7579 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh7334) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh7333));
    vlTOPp->mkMac__DOT__y___05Fh14432 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14488) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14489));
    vlTOPp->mkMac__DOT__y___05Fh7522 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7578) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh7579));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_54_66_XOR_a_ETC___05F_d666 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14431) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14432)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14243) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14244)) 
                          << 0x14U) | vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_52_72_XOR_a_ETC___05F_d665));
    vlTOPp->mkMac__DOT__y___05Fh14677 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14432) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14431));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d389 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7521) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh7522));
    vlTOPp->mkMac__DOT__y___05Fh7767 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh7522) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh7521));
    vlTOPp->mkMac__DOT__y___05Fh14620 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14676) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14677));
    vlTOPp->mkMac__DOT__y___05Fh7710 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7766) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh7767));
    vlTOPp->mkMac__DOT__y___05Fh14865 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14620) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14619));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d388 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7709) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh7710));
    vlTOPp->mkMac__DOT__y___05Fh7955 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh7710) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh7709));
    vlTOPp->mkMac__DOT__y___05Fh14808 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh14864) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh14865));
    vlTOPp->mkMac__DOT__y___05Fh7898 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7954) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh7955));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_56_60_XOR_a_ETC___05F_d667 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14807) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14808)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14619) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14620)) 
                          << 0x16U) | vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_54_66_XOR_a_ETC___05F_d666));
    vlTOPp->mkMac__DOT__y___05Fh15053 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14808) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14807));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d387 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh7897) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh7898));
    vlTOPp->mkMac__DOT__y___05Fh8143 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh7898) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh7897));
    vlTOPp->mkMac__DOT__y___05Fh14996 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15052) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15053));
    vlTOPp->mkMac__DOT__y___05Fh8086 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh8142) 
                                        | (IData)(vlTOPp->mkMac__DOT__y___05Fh8143));
    vlTOPp->mkMac__DOT__y___05Fh15241 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh14996) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh14995));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d385 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh8085) 
           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh8086));
    vlTOPp->mkMac__DOT__y___05Fh8331 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh8086) 
                                        & (IData)(vlTOPp->mkMac__DOT__x___05Fh8085));
    vlTOPp->mkMac__DOT__y___05Fh15184 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15240) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15241));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d370 
        = ((IData)(vlTOPp->mkMac__DOT__x___05Fh8330) 
           | (IData)(vlTOPp->mkMac__DOT__y___05Fh8331));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_58_54_XOR_a_ETC___05F_d668 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15183) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15184)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh14995) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh14996)) 
                          << 0x18U) | vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_56_60_XOR_a_ETC___05F_d667));
    vlTOPp->mkMac__DOT__y___05Fh15429 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15184) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15183));
    if (vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d370) {
        vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh9747 
            = vlTOPp->mkMac__DOT__result_exp___05F_1___05Fh9751;
        vlTOPp->mkMac__DOT__IF_IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_T_ETC___05F_d431 
            = (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d385) 
                << 0x16U) | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d387) 
                              << 0x15U) | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d388) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d389) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d390) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d391) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d392) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d393) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d394) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d395) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d396) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d397) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d398) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d399) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d400) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d401) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d402) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d403) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d404) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d405) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d406) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d407) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d408)))))))))))))))))))))));
    } else {
        vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh9747 
            = vlTOPp->mkMac__DOT__result_exp___05Fh2921;
        vlTOPp->mkMac__DOT__IF_IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_T_ETC___05F_d431 
            = (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d387) 
                << 0x16U) | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d388) 
                              << 0x15U) | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d389) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d390) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d391) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d392) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d393) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d394) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d395) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d396) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d397) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d398) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d399) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d400) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d401) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d402) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d403) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d404) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d405) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d406) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d407) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d408) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkMac__DOT__IF_x696_BIT_0_XOR_x841_BIT_0_THEN_1_ELSE_0___05Fq2)))))))))))))))))))))));
    }
    vlTOPp->mkMac__DOT__y___05Fh15372 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15428) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15429));
    vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2929 
        = ((((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d370) 
             | (IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d385)) 
            << 0x17U) | vlTOPp->mkMac__DOT__IF_IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_T_ETC___05F_d431);
    vlTOPp->mkMac__DOT__y___05Fh15617 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15372) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15371));
    vlTOPp->mkMac__DOT__result_mant_aligned___05F_1___05Fh9844 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2929));
    vlTOPp->mkMac__DOT__y___05Fh15560 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15616) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15617));
    vlTOPp->mkMac__DOT__IF_IF_IF_adder_ififo_rv_port0___05Fread___05F09_BITS_6_ETC___05F_d434 
        = ((1U & ((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d370)
                   ? vlTOPp->mkMac__DOT__IF_x696_BIT_0_XOR_x841_BIT_0_THEN_1_ELSE_0___05Fq2
                   : (IData)(vlTOPp->mkMac__DOT___theResult___05F_snd_snd_snd_snd___05Fh3845)))
            ? vlTOPp->mkMac__DOT__result_mant_aligned___05F_1___05Fh9844
            : vlTOPp->mkMac__DOT__result_mant_aligned___05Fh2929);
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_60_48_XOR_a_ETC___05F_d669 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15559) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15560)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15371) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15372)) 
                          << 0x1aU) | vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_58_54_XOR_a_ETC___05F_d668));
    vlTOPp->mkMac__DOT__y___05Fh15805 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15560) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15559));
    vlTOPp->mkMac__DOT__y___05Fh15748 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15804) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15805));
    vlTOPp->mkMac__DOT__y___05Fh15993 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15748) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15747));
    vlTOPp->mkMac__DOT__y___05Fh15936 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh15992) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh15993));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_62_42_XOR_a_ETC___05F_d670 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15935) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15936)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh15747) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh15748)) 
                          << 0x1cU) | vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_60_48_XOR_a_ETC___05F_d669));
    vlTOPp->mkMac__DOT__y___05Fh16181 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh15936) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh15935));
    vlTOPp->mkMac__DOT__y___05Fh16124 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh16180) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh16181));
    vlTOPp->mkMac__DOT__y___05Fh16369 = ((IData)(vlTOPp->mkMac__DOT__y___05Fh16124) 
                                         & (IData)(vlTOPp->mkMac__DOT__x___05Fh16123));
    vlTOPp->mkMac__DOT__y___05Fh16312 = ((IData)(vlTOPp->mkMac__DOT__x___05Fh16368) 
                                         | (IData)(vlTOPp->mkMac__DOT__y___05Fh16369));
    vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_64_16_XOR_a_ETC___05F_d671 
        = ((((IData)(vlTOPp->mkMac__DOT__x___05Fh16311) 
             ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh16312)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMac__DOT__x___05Fh16123) 
                           ^ (IData)(vlTOPp->mkMac__DOT__y___05Fh16124)) 
                          << 0x1eU) | vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_62_42_XOR_a_ETC___05F_d670));
    vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BIT_0_15_THE_ETC___05F_d672 
        = ((1U & vlTOPp->mkMac__DOT__adder_ififo_rv[0U])
            ? ((0x80000000U & (vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                               << 0x1fU)) | (((IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh9747) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkMac__DOT__IF_IF_IF_adder_ififo_rv_port0___05Fread___05F09_BITS_6_ETC___05F_d434)))
            : vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_64_16_XOR_a_ETC___05F_d671);
    vlTOPp->mkMac__DOT__adder_ofifo_rv_port1___05Fwrite_1 
        = (0x100000000ULL | (QData)((IData)(vlTOPp->mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BIT_0_15_THE_ETC___05F_d672)));
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMac__DOT__adder_ofifo_rv_port1___05Fread 
        = ((IData)(vlTOPp->EN_mac_calc) ? vlTOPp->mkMac__DOT__adder_ofifo_rv_port0___05Fwrite_1
            : vlTOPp->mkMac__DOT__adder_ofifo_rv);
    vlTOPp->mkMac__DOT__CAN_FIRE_RL_rl_pipeline_addStage 
        = (1U & ((vlTOPp->mkMac__DOT__adder_ififo_rv[2U] 
                  >> 1U) & (~ (IData)((vlTOPp->mkMac__DOT__adder_ofifo_rv_port1___05Fread 
                                       >> 0x20U)))));
    vlTOPp->mkMac__DOT__WILL_FIRE_RL_rl_pipeline_addStage 
        = vlTOPp->mkMac__DOT__CAN_FIRE_RL_rl_pipeline_addStage;
    if (vlTOPp->mkMac__DOT__CAN_FIRE_RL_rl_pipeline_addStage) {
        vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[0U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fwrite_1[0U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[1U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fwrite_1[1U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[2U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fwrite_1[2U];
        vlTOPp->mkMac__DOT__adder_ofifo_rv_port2___05Fread 
            = vlTOPp->mkMac__DOT__adder_ofifo_rv_port1___05Fwrite_1;
    } else {
        vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[0U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv[0U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[1U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv[1U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[2U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv[2U];
        vlTOPp->mkMac__DOT__adder_ofifo_rv_port2___05Fread 
            = vlTOPp->mkMac__DOT__adder_ofifo_rv_port1___05Fread;
    }
    vlTOPp->mkMac__DOT__CAN_FIRE_RL_rl_pipeline_mulStage 
        = (1U & ((vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U] 
                  >> 1U) & (~ (vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[2U] 
                               >> 1U))));
    vlTOPp->mkMac__DOT__adder_ofifo_rv_D_IN = vlTOPp->mkMac__DOT__adder_ofifo_rv_port2___05Fread;
    vlTOPp->mkMac__DOT__WILL_FIRE_RL_rl_pipeline_mulStage 
        = vlTOPp->mkMac__DOT__CAN_FIRE_RL_rl_pipeline_mulStage;
    if (vlTOPp->mkMac__DOT__CAN_FIRE_RL_rl_pipeline_mulStage) {
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[0U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fwrite_1[0U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[1U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fwrite_1[1U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[2U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port0___05Fwrite_1[2U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fwrite_1[0U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fwrite_1[1U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fwrite_1[2U];
    } else {
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[0U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv[0U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[1U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv[1U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[2U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv[2U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[0U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[1U];
        vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__adder_ififo_rv_port1___05Fread[2U];
    }
    vlTOPp->mkMac__DOT__CAN_FIRE_read_in = (1U & (~ 
                                                  (vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[2U] 
                                                   >> 1U)));
    vlTOPp->mkMac__DOT__RDY_read_in = (1U & (~ (vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[2U] 
                                                >> 1U)));
    if (vlTOPp->EN_read_in) {
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fwrite_1[0U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fwrite_1[1U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fwrite_1[2U];
    } else {
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[0U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[1U];
        vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port1___05Fread[2U];
    }
    vlTOPp->mkMac__DOT__adder_ififo_rv_D_IN[0U] = vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[0U];
    vlTOPp->mkMac__DOT__adder_ififo_rv_D_IN[1U] = vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[1U];
    vlTOPp->mkMac__DOT__adder_ififo_rv_D_IN[2U] = vlTOPp->mkMac__DOT__adder_ififo_rv_port2___05Fread[2U];
    vlTOPp->RDY_read_in = vlTOPp->mkMac__DOT__RDY_read_in;
    vlTOPp->mkMac__DOT__multiplier_ififo_rv_D_IN[0U] 
        = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[0U];
    vlTOPp->mkMac__DOT__multiplier_ififo_rv_D_IN[1U] 
        = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[1U];
    vlTOPp->mkMac__DOT__multiplier_ififo_rv_D_IN[2U] 
        = vlTOPp->mkMac__DOT__multiplier_ififo_rv_port2___05Fread[2U];
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
    if (VL_UNLIKELY((read_in_mul_in[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("read_in_mul_in");}
    if (VL_UNLIKELY((EN_read_in & 0xfeU))) {
        Verilated::overWidthError("EN_read_in");}
    if (VL_UNLIKELY((EN_mac_calc & 0xfeU))) {
        Verilated::overWidthError("EN_mac_calc");}
}
#endif  // VL_DEBUG
