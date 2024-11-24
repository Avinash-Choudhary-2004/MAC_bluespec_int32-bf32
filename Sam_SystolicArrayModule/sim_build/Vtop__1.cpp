// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkSam__DOT__x___05Fh466665 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh466724 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh466471 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh466530 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh466277 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_m_ETC___05Fq46 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh466336 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh466083 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh466142 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh465889 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh465948 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh465695 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh465754 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh465501 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh465560 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh465307 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh465366 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh465113 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh465172 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh464919 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh464978 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh464725 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh464784 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh464531 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh464590 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh464337 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh464396 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh464143 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh464202 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh463949 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh464008 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh463755 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh463814 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh463561 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh463620 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh463367 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh463426 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh463173 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh463232 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh462979 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh463038 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh462785 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh462844 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh462591 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh462650 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh462397 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh462456 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh462203 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh462262 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh462009 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh462068 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh461815 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh461816 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                & vlTOPp->mkSam__DOT__mac_matrix_3_1_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8242 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415870) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh415871));
    vlTOPp->mkSam__DOT__y___05Fh416116 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh415871) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh415870));
    vlTOPp->mkSam__DOT__x___05Fh436062 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh436121 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh435868 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh435927 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh435674 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh435733 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh435480 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh435539 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh435286 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh435345 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh435092 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh435151 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh434898 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh434957 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh434704 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_m_ETC___05Fq45 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh434763 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh434510 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh434569 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh434316 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh434375 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh434122 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh434181 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh433928 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh433987 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh433734 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh433793 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh433540 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh433599 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh433346 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh433405 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh433152 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh433211 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh432958 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh433017 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh432764 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh432823 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh432570 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh432629 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh432376 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh432435 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh432182 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh432241 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh431988 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh432047 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh431794 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh431853 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh431600 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh431659 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh431406 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh431465 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh431212 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh431271 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh431018 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh431077 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh430824 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh430883 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh430630 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh430689 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh430436 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh430495 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh430242 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_0_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh430243 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
                                                & vlTOPp->mkSam__DOT__mac_matrix_3_0_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d402 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37487) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh37488));
    vlTOPp->mkSam__DOT__y___05Fh37733 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh37488) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh37487));
    vlTOPp->mkSam__DOT__x___05Fh57679 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh57738 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh57485 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh57544 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh57291 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh57350 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh57097 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh57156 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh56903 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh56962 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh56709 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh56768 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh56515 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh56574 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh56321 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_mat_ETC___05Fq33 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh56380 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh56127 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh56186 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh55933 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh55992 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh55739 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh55798 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh55545 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh55604 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh55351 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh55410 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh55157 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh55216 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh54963 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh55022 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh54769 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh54828 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh54575 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh54634 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh54381 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh54440 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh54187 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh54246 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh53993 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh54052 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh53799 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh53858 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh53605 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh53664 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh53411 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh53470 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh53217 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh53276 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh53023 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh53082 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh52829 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh52888 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh52635 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh52694 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh52441 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh52500 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh52247 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh52306 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh52053 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh52112 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh51859 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_0_c) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh51860 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
                                               & vlTOPp->mkSam__DOT__mac_matrix_0_0_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1055 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69183) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh69184));
    vlTOPp->mkSam__DOT__y___05Fh69429 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh69184) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh69183));
    vlTOPp->mkSam__DOT__x___05Fh89375 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh89434 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh89181 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh89240 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh88987 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh89046 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh88793 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh88852 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh88599 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh88658 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh88405 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh88464 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh88211 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh88270 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh88017 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_mat_ETC___05Fq34 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh88076 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh87823 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh87882 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh87629 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh87688 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh87435 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh87494 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh87241 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh87300 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh87047 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh87106 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh86853 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh86912 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh86659 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh86718 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh86465 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh86524 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh86271 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh86330 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh86077 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh86136 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh85883 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh85942 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh85689 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh85748 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh85495 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh85554 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh85301 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh85360 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh85107 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh85166 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh84913 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh84972 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh84719 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh84778 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh84525 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh84584 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh84331 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh84390 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh84137 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh84196 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh83943 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh84002 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh83749 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh83808 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh83555 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                                ^ vlTOPp->mkSam__DOT__mac_matrix_0_1_c) 
                                               >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh83556 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
                                               & vlTOPp->mkSam__DOT__mac_matrix_0_1_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1708 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100629) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh100630));
    vlTOPp->mkSam__DOT__y___05Fh100875 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh100630) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh100629));
    vlTOPp->mkSam__DOT__x___05Fh120821 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh120880 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh120627 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh120686 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh120433 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh120492 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh120239 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh120298 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh120045 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh120104 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh119851 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh119910 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh119657 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh119716 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh119463 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_m_ETC___05Fq35 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh119522 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh119269 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh119328 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh119075 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh119134 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh118881 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh118940 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh118687 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh118746 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh118493 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh118552 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh118299 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh118358 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh118105 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh118164 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh117911 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh117970 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh117717 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh117776 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh117523 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh117582 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh117329 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh117388 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh117135 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh117194 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh116941 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh117000 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh116747 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh116806 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh116553 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh116612 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh116359 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh116418 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh116165 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh116224 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh115971 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh116030 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh115777 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh115836 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh115583 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh115642 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh115389 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh115448 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh115195 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh115254 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh115001 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh115002 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_2_c));
    vlTOPp->mkSam__DOT__y___05Fh321544 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321600) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321601));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6654 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh335727) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh335728)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_m_ETC___05Fq42));
    vlTOPp->mkSam__DOT__y___05Fh335981 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh335728) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh335727));
    vlTOPp->mkSam__DOT__y___05Fh289972 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290028) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290029));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6001 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh304155) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh304156)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_m_ETC___05Fq41));
    vlTOPp->mkSam__DOT__y___05Fh304409 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304156) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304155));
    vlTOPp->mkSam__DOT__y___05Fh258351 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258407) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258408));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5348 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh272534) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh272535)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_m_ETC___05Fq40));
    vlTOPp->mkSam__DOT__y___05Fh272788 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh272535) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh272534));
    vlTOPp->mkSam__DOT__y___05Fh226904 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226960) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh226961));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4694 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh241087) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh241088)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_m_ETC___05Fq39));
    vlTOPp->mkSam__DOT__y___05Fh241341 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241088) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241087));
    vlTOPp->mkSam__DOT__y___05Fh195458 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195514) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh195515));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4041 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh209641) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh209642)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_m_ETC___05Fq38));
    vlTOPp->mkSam__DOT__y___05Fh209895 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh209642) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh209641));
    vlTOPp->mkSam__DOT__y___05Fh163886 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163942) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh163943));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3388 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh178069) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh178070)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_m_ETC___05Fq37));
    vlTOPp->mkSam__DOT__y___05Fh178323 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178070) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178069));
    vlTOPp->mkSam__DOT__y___05Fh132265 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132321) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132322));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2735 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh146448) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh146449)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_m_ETC___05Fq36));
    vlTOPp->mkSam__DOT__y___05Fh146702 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh146449) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh146448));
    vlTOPp->mkSam__DOT__y___05Fh510527 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510583) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510584));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10578 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh524710) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh524711)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_m_ETC___05Fq48));
    vlTOPp->mkSam__DOT__y___05Fh524964 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh524711) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh524710));
    vlTOPp->mkSam__DOT__y___05Fh479079 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479135) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479136));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9923 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh493262) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh493263)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_m_ETC___05Fq47));
    vlTOPp->mkSam__DOT__y___05Fh493516 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh493263) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh493262));
    vlTOPp->mkSam__DOT__y___05Fh384437 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384493) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh384494));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7961 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh398620) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh398621)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_m_ETC___05Fq44));
    vlTOPp->mkSam__DOT__y___05Fh398874 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh398621) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh398620));
    vlTOPp->mkSam__DOT__y___05Fh352990 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353046) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353047));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7307 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh367173) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh367174)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_m_ETC___05Fq43));
    vlTOPp->mkSam__DOT__y___05Fh367427 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367174) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367173));
    vlTOPp->mkSam__DOT__y___05Fh447632 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447688) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh447689));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9269 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh461815) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh461816)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_m_ETC___05Fq46));
    vlTOPp->mkSam__DOT__y___05Fh462069 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh461816) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh461815));
    vlTOPp->mkSam__DOT__y___05Fh416059 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416115) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416116));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8615 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh430242) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh430243)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_m_ETC___05Fq45));
    vlTOPp->mkSam__DOT__y___05Fh430496 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh430243) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh430242));
    vlTOPp->mkSam__DOT__y___05Fh37676 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37732) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh37733));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d775 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh51859) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh51860)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_mat_ETC___05Fq33));
    vlTOPp->mkSam__DOT__y___05Fh52113 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh51860) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh51859));
    vlTOPp->mkSam__DOT__y___05Fh69372 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69428) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh69429));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1428 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh83555) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh83556)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_mat_ETC___05Fq34));
    vlTOPp->mkSam__DOT__y___05Fh83809 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh83556) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh83555));
    vlTOPp->mkSam__DOT__y___05Fh100818 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100874) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh100875));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2081 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh115001) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh115002)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_m_ETC___05Fq35));
    vlTOPp->mkSam__DOT__y___05Fh115255 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh115002) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh115001));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6280 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321543) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321544));
    vlTOPp->mkSam__DOT__y___05Fh321789 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321544) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321543));
    vlTOPp->mkSam__DOT__y___05Fh335922 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh335980) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh335981));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5627 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289971) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh289972));
    vlTOPp->mkSam__DOT__y___05Fh290217 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh289972) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh289971));
    vlTOPp->mkSam__DOT__y___05Fh304350 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304408) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304409));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4974 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258350) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258351));
    vlTOPp->mkSam__DOT__y___05Fh258596 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258351) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258350));
    vlTOPp->mkSam__DOT__y___05Fh272729 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh272787) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh272788));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4320 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226903) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh226904));
    vlTOPp->mkSam__DOT__y___05Fh227149 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh226904) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh226903));
    vlTOPp->mkSam__DOT__y___05Fh241282 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241340) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241341));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3667 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195457) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195458));
    vlTOPp->mkSam__DOT__y___05Fh195703 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195458) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195457));
    vlTOPp->mkSam__DOT__y___05Fh209836 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh209894) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh209895));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3014 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163885) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh163886));
    vlTOPp->mkSam__DOT__y___05Fh164131 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh163886) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh163885));
    vlTOPp->mkSam__DOT__y___05Fh178264 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178322) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178323));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2361 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132264) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132265));
    vlTOPp->mkSam__DOT__y___05Fh132510 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132265) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132264));
    vlTOPp->mkSam__DOT__y___05Fh146643 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh146701) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh146702));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10204 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510526) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510527));
    vlTOPp->mkSam__DOT__y___05Fh510772 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510527) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510526));
    vlTOPp->mkSam__DOT__y___05Fh524905 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh524963) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh524964));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9549 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479078) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479079));
    vlTOPp->mkSam__DOT__y___05Fh479324 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479079) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479078));
    vlTOPp->mkSam__DOT__y___05Fh493457 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh493515) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh493516));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7587 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384436) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384437));
    vlTOPp->mkSam__DOT__y___05Fh384682 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384437) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384436));
    vlTOPp->mkSam__DOT__y___05Fh398815 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh398873) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh398874));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6933 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352989) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh352990));
    vlTOPp->mkSam__DOT__y___05Fh353235 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh352990) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh352989));
    vlTOPp->mkSam__DOT__y___05Fh367368 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh367426) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh367427));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8895 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447631) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh447632));
    vlTOPp->mkSam__DOT__y___05Fh447877 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh447632) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh447631));
    vlTOPp->mkSam__DOT__y___05Fh462010 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462068) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462069));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8241 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416058) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416059));
    vlTOPp->mkSam__DOT__y___05Fh416304 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416059) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416058));
    vlTOPp->mkSam__DOT__y___05Fh430437 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh430495) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh430496));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d401 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37675) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh37676));
    vlTOPp->mkSam__DOT__y___05Fh37921 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh37676) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh37675));
    vlTOPp->mkSam__DOT__y___05Fh52054 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh52112) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh52113));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1054 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69371) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh69372));
    vlTOPp->mkSam__DOT__y___05Fh69617 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh69372) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh69371));
    vlTOPp->mkSam__DOT__y___05Fh83750 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh83808) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh83809));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1707 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100817) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh100818));
    vlTOPp->mkSam__DOT__y___05Fh101063 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh100818) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh100817));
    vlTOPp->mkSam__DOT__y___05Fh115196 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh115254) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh115255));
    vlTOPp->mkSam__DOT__y___05Fh321732 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321788) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321789));
    vlTOPp->mkSam__DOT__y___05Fh336175 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh335922) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh335921));
    vlTOPp->mkSam__DOT__y___05Fh290160 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290216) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290217));
    vlTOPp->mkSam__DOT__y___05Fh304603 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304350) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304349));
    vlTOPp->mkSam__DOT__y___05Fh258539 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258595) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258596));
    vlTOPp->mkSam__DOT__y___05Fh272982 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh272729) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh272728));
    vlTOPp->mkSam__DOT__y___05Fh227092 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227148) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227149));
    vlTOPp->mkSam__DOT__y___05Fh241535 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241282) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241281));
    vlTOPp->mkSam__DOT__y___05Fh195646 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195702) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh195703));
    vlTOPp->mkSam__DOT__y___05Fh210089 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh209836) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh209835));
    vlTOPp->mkSam__DOT__y___05Fh164074 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164130) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164131));
    vlTOPp->mkSam__DOT__y___05Fh178517 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178264) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178263));
    vlTOPp->mkSam__DOT__y___05Fh132453 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132509) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132510));
    vlTOPp->mkSam__DOT__y___05Fh146896 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh146643) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh146642));
    vlTOPp->mkSam__DOT__y___05Fh510715 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510771) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510772));
    vlTOPp->mkSam__DOT__y___05Fh525158 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh524905) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh524904));
    vlTOPp->mkSam__DOT__y___05Fh479267 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479323) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479324));
    vlTOPp->mkSam__DOT__y___05Fh493710 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh493457) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh493456));
    vlTOPp->mkSam__DOT__y___05Fh384625 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384681) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh384682));
    vlTOPp->mkSam__DOT__y___05Fh399068 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh398815) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh398814));
    vlTOPp->mkSam__DOT__y___05Fh353178 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353234) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353235));
    vlTOPp->mkSam__DOT__y___05Fh367621 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367368) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367367));
    vlTOPp->mkSam__DOT__y___05Fh447820 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447876) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh447877));
    vlTOPp->mkSam__DOT__y___05Fh462263 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462010) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462009));
    vlTOPp->mkSam__DOT__y___05Fh416247 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416303) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416304));
    vlTOPp->mkSam__DOT__y___05Fh430690 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh430437) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh430436));
    vlTOPp->mkSam__DOT__y___05Fh37864 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37920) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh37921));
    vlTOPp->mkSam__DOT__y___05Fh52307 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh52054) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh52053));
    vlTOPp->mkSam__DOT__y___05Fh69560 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69616) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh69617));
    vlTOPp->mkSam__DOT__y___05Fh84003 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh83750) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh83749));
    vlTOPp->mkSam__DOT__y___05Fh101006 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101062) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh101063));
    vlTOPp->mkSam__DOT__y___05Fh115449 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh115196) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh115195));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6279 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321731) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321732));
    vlTOPp->mkSam__DOT__y___05Fh321977 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321732) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321731));
    vlTOPp->mkSam__DOT__y___05Fh336116 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336174) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336175));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5626 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290159) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290160));
    vlTOPp->mkSam__DOT__y___05Fh290405 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290160) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290159));
    vlTOPp->mkSam__DOT__y___05Fh304544 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304602) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304603));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4973 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258538) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258539));
    vlTOPp->mkSam__DOT__y___05Fh258784 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258539) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258538));
    vlTOPp->mkSam__DOT__y___05Fh272923 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh272981) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh272982));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4319 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227091) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227092));
    vlTOPp->mkSam__DOT__y___05Fh227337 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227092) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227091));
    vlTOPp->mkSam__DOT__y___05Fh241476 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241534) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241535));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3666 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195645) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195646));
    vlTOPp->mkSam__DOT__y___05Fh195891 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195646) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195645));
    vlTOPp->mkSam__DOT__y___05Fh210030 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210088) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210089));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3013 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164073) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164074));
    vlTOPp->mkSam__DOT__y___05Fh164319 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164074) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164073));
    vlTOPp->mkSam__DOT__y___05Fh178458 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178516) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178517));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2360 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132452) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132453));
    vlTOPp->mkSam__DOT__y___05Fh132698 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132453) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132452));
    vlTOPp->mkSam__DOT__y___05Fh146837 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh146895) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh146896));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10203 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510714) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510715));
    vlTOPp->mkSam__DOT__y___05Fh510960 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510715) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510714));
    vlTOPp->mkSam__DOT__y___05Fh525099 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525157) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525158));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9548 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479266) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479267));
    vlTOPp->mkSam__DOT__y___05Fh479512 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479267) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479266));
    vlTOPp->mkSam__DOT__y___05Fh493651 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh493709) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh493710));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7586 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384624) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384625));
    vlTOPp->mkSam__DOT__y___05Fh384870 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384625) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384624));
    vlTOPp->mkSam__DOT__y___05Fh399009 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399067) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399068));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6932 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353177) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353178));
    vlTOPp->mkSam__DOT__y___05Fh353423 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353178) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353177));
    vlTOPp->mkSam__DOT__y___05Fh367562 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh367620) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh367621));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8894 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447819) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh447820));
    vlTOPp->mkSam__DOT__y___05Fh448065 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh447820) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh447819));
    vlTOPp->mkSam__DOT__y___05Fh462204 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462262) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462263));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8240 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416246) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416247));
    vlTOPp->mkSam__DOT__y___05Fh416492 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416247) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416246));
    vlTOPp->mkSam__DOT__y___05Fh430631 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh430689) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh430690));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d400 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37863) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh37864));
    vlTOPp->mkSam__DOT__y___05Fh38109 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh37864) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh37863));
    vlTOPp->mkSam__DOT__y___05Fh52248 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh52306) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh52307));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1053 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69559) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh69560));
    vlTOPp->mkSam__DOT__y___05Fh69805 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh69560) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh69559));
    vlTOPp->mkSam__DOT__y___05Fh83944 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh84002) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh84003));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1706 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101005) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh101006));
    vlTOPp->mkSam__DOT__y___05Fh101251 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh101006) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh101005));
    vlTOPp->mkSam__DOT__y___05Fh115390 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh115448) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh115449));
    vlTOPp->mkSam__DOT__y___05Fh321920 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321976) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321977));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6655 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh336115) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh336116)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh335921) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh335922)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6654)));
    vlTOPp->mkSam__DOT__y___05Fh336369 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh336116) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh336115));
    vlTOPp->mkSam__DOT__y___05Fh290348 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290404) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290405));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6002 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh304543) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh304544)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh304349) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh304350)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6001)));
    vlTOPp->mkSam__DOT__y___05Fh304797 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304544) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304543));
    vlTOPp->mkSam__DOT__y___05Fh258727 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258783) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258784));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5349 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh272922) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh272923)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh272728) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh272729)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5348)));
    vlTOPp->mkSam__DOT__y___05Fh273176 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh272923) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh272922));
    vlTOPp->mkSam__DOT__y___05Fh227280 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227336) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227337));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4695 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh241475) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh241476)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh241281) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh241282)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4694)));
    vlTOPp->mkSam__DOT__y___05Fh241729 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241476) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241475));
    vlTOPp->mkSam__DOT__y___05Fh195834 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195890) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh195891));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4042 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh210029) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh210030)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh209835) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh209836)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4041)));
    vlTOPp->mkSam__DOT__y___05Fh210283 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh210030) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210029));
    vlTOPp->mkSam__DOT__y___05Fh164262 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164318) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164319));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3389 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh178457) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh178458)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh178263) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh178264)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3388)));
    vlTOPp->mkSam__DOT__y___05Fh178711 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178458) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178457));
    vlTOPp->mkSam__DOT__y___05Fh132641 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132697) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132698));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2736 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh146836) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh146837)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh146642) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh146643)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2735)));
    vlTOPp->mkSam__DOT__y___05Fh147090 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh146837) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh146836));
    vlTOPp->mkSam__DOT__y___05Fh510903 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510959) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510960));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10579 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh525098) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh525099)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh524904) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh524905)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10578)));
    vlTOPp->mkSam__DOT__y___05Fh525352 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh525099) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh525098));
    vlTOPp->mkSam__DOT__y___05Fh479455 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479511) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479512));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9924 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh493650) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh493651)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh493456) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh493457)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9923)));
    vlTOPp->mkSam__DOT__y___05Fh493904 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh493651) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh493650));
    vlTOPp->mkSam__DOT__y___05Fh384813 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384869) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh384870));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7962 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh399008) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh399009)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh398814) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh398815)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7961)));
    vlTOPp->mkSam__DOT__y___05Fh399262 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399009) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399008));
    vlTOPp->mkSam__DOT__y___05Fh353366 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353422) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353423));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7308 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh367561) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh367562)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh367367) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh367368)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7307)));
    vlTOPp->mkSam__DOT__y___05Fh367815 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367562) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367561));
    vlTOPp->mkSam__DOT__y___05Fh448008 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448064) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh448065));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9270 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh462203) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh462204)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh462009) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh462010)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9269)));
    vlTOPp->mkSam__DOT__y___05Fh462457 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462204) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462203));
    vlTOPp->mkSam__DOT__y___05Fh416435 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416491) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416492));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8616 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh430630) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh430631)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh430436) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh430437)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8615)));
    vlTOPp->mkSam__DOT__y___05Fh430884 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh430631) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh430630));
    vlTOPp->mkSam__DOT__y___05Fh38052 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38108) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh38109));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d776 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh52247) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh52248)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh52053) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh52054)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d775)));
    vlTOPp->mkSam__DOT__y___05Fh52501 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh52248) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh52247));
    vlTOPp->mkSam__DOT__y___05Fh69748 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69804) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh69805));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1429 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh83943) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh83944)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh83749) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh83750)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1428)));
    vlTOPp->mkSam__DOT__y___05Fh84197 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh83944) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh83943));
    vlTOPp->mkSam__DOT__y___05Fh101194 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101250) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh101251));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2082 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh115389) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh115390)) 
            << 3U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh115195) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh115196)) 
                       << 2U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2081)));
    vlTOPp->mkSam__DOT__y___05Fh115643 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh115390) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh115389));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6278 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321919) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321920));
    vlTOPp->mkSam__DOT__y___05Fh322165 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321920) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321919));
    vlTOPp->mkSam__DOT__y___05Fh336310 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336368) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336369));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5625 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290347) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290348));
    vlTOPp->mkSam__DOT__y___05Fh290593 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290348) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290347));
    vlTOPp->mkSam__DOT__y___05Fh304738 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304796) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304797));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4972 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258726) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258727));
    vlTOPp->mkSam__DOT__y___05Fh258972 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258727) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258726));
    vlTOPp->mkSam__DOT__y___05Fh273117 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273175) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273176));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4318 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227279) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227280));
    vlTOPp->mkSam__DOT__y___05Fh227525 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227280) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227279));
    vlTOPp->mkSam__DOT__y___05Fh241670 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241728) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241729));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3665 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195833) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195834));
    vlTOPp->mkSam__DOT__y___05Fh196079 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195834) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195833));
    vlTOPp->mkSam__DOT__y___05Fh210224 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210282) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210283));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3012 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164261) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164262));
    vlTOPp->mkSam__DOT__y___05Fh164507 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164262) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164261));
    vlTOPp->mkSam__DOT__y___05Fh178652 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178710) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178711));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2359 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132640) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132641));
    vlTOPp->mkSam__DOT__y___05Fh132886 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132641) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132640));
    vlTOPp->mkSam__DOT__y___05Fh147031 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147089) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147090));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10202 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510902) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510903));
    vlTOPp->mkSam__DOT__y___05Fh511148 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510903) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510902));
    vlTOPp->mkSam__DOT__y___05Fh525293 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525351) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525352));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9547 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479454) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479455));
    vlTOPp->mkSam__DOT__y___05Fh479700 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479455) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479454));
    vlTOPp->mkSam__DOT__y___05Fh493845 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh493903) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh493904));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7585 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384812) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384813));
    vlTOPp->mkSam__DOT__y___05Fh385058 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384813) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384812));
    vlTOPp->mkSam__DOT__y___05Fh399203 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399261) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399262));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6931 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353365) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353366));
    vlTOPp->mkSam__DOT__y___05Fh353611 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353366) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353365));
    vlTOPp->mkSam__DOT__y___05Fh367756 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh367814) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh367815));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8893 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448007) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448008));
    vlTOPp->mkSam__DOT__y___05Fh448253 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448008) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448007));
    vlTOPp->mkSam__DOT__y___05Fh462398 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462456) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462457));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8239 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416434) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416435));
    vlTOPp->mkSam__DOT__y___05Fh416680 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416435) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416434));
    vlTOPp->mkSam__DOT__y___05Fh430825 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh430883) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh430884));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d399 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38051) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh38052));
    vlTOPp->mkSam__DOT__y___05Fh38297 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh38052) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh38051));
    vlTOPp->mkSam__DOT__y___05Fh52442 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh52500) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh52501));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1052 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69747) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh69748));
    vlTOPp->mkSam__DOT__y___05Fh69993 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh69748) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh69747));
    vlTOPp->mkSam__DOT__y___05Fh84138 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh84196) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh84197));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1705 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101193) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh101194));
    vlTOPp->mkSam__DOT__y___05Fh101439 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh101194) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh101193));
    vlTOPp->mkSam__DOT__y___05Fh115584 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh115642) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh115643));
    vlTOPp->mkSam__DOT__y___05Fh322108 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322164) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322165));
    vlTOPp->mkSam__DOT__y___05Fh336563 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh336310) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh336309));
    vlTOPp->mkSam__DOT__y___05Fh290536 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290592) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290593));
    vlTOPp->mkSam__DOT__y___05Fh304991 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304738) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304737));
    vlTOPp->mkSam__DOT__y___05Fh258915 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258971) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258972));
    vlTOPp->mkSam__DOT__y___05Fh273370 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273117) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273116));
    vlTOPp->mkSam__DOT__y___05Fh227468 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227524) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227525));
    vlTOPp->mkSam__DOT__y___05Fh241923 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241670) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241669));
    vlTOPp->mkSam__DOT__y___05Fh196022 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196078) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196079));
    vlTOPp->mkSam__DOT__y___05Fh210477 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh210224) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210223));
    vlTOPp->mkSam__DOT__y___05Fh164450 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164506) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164507));
    vlTOPp->mkSam__DOT__y___05Fh178905 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178652) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178651));
    vlTOPp->mkSam__DOT__y___05Fh132829 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132885) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132886));
    vlTOPp->mkSam__DOT__y___05Fh147284 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147031) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147030));
    vlTOPp->mkSam__DOT__y___05Fh511091 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511147) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511148));
    vlTOPp->mkSam__DOT__y___05Fh525546 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh525293) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh525292));
    vlTOPp->mkSam__DOT__y___05Fh479643 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479699) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479700));
    vlTOPp->mkSam__DOT__y___05Fh494098 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh493845) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh493844));
    vlTOPp->mkSam__DOT__y___05Fh385001 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385057) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385058));
    vlTOPp->mkSam__DOT__y___05Fh399456 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399203) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399202));
    vlTOPp->mkSam__DOT__y___05Fh353554 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353610) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353611));
    vlTOPp->mkSam__DOT__y___05Fh368009 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367756) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367755));
    vlTOPp->mkSam__DOT__y___05Fh448196 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448252) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh448253));
    vlTOPp->mkSam__DOT__y___05Fh462651 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462398) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462397));
    vlTOPp->mkSam__DOT__y___05Fh416623 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416679) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416680));
    vlTOPp->mkSam__DOT__y___05Fh431078 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh430825) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh430824));
    vlTOPp->mkSam__DOT__y___05Fh38240 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38296) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh38297));
    vlTOPp->mkSam__DOT__y___05Fh52695 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh52442) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh52441));
    vlTOPp->mkSam__DOT__y___05Fh69936 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69992) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh69993));
    vlTOPp->mkSam__DOT__y___05Fh84391 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh84138) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh84137));
    vlTOPp->mkSam__DOT__y___05Fh101382 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101438) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh101439));
    vlTOPp->mkSam__DOT__y___05Fh115837 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh115584) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh115583));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6277 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322107) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322108));
    vlTOPp->mkSam__DOT__y___05Fh322353 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322108) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322107));
    vlTOPp->mkSam__DOT__y___05Fh336504 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336562) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336563));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5624 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290535) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290536));
    vlTOPp->mkSam__DOT__y___05Fh290781 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290536) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290535));
    vlTOPp->mkSam__DOT__y___05Fh304932 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304990) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304991));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4971 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258914) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258915));
    vlTOPp->mkSam__DOT__y___05Fh259160 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258915) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258914));
    vlTOPp->mkSam__DOT__y___05Fh273311 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273369) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273370));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4317 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227467) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227468));
    vlTOPp->mkSam__DOT__y___05Fh227713 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227468) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227467));
    vlTOPp->mkSam__DOT__y___05Fh241864 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241922) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241923));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3664 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196021) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196022));
    vlTOPp->mkSam__DOT__y___05Fh196267 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196022) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196021));
    vlTOPp->mkSam__DOT__y___05Fh210418 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210476) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210477));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3011 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164449) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164450));
    vlTOPp->mkSam__DOT__y___05Fh164695 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164450) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164449));
    vlTOPp->mkSam__DOT__y___05Fh178846 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178904) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178905));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2358 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132828) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132829));
    vlTOPp->mkSam__DOT__y___05Fh133074 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132829) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132828));
    vlTOPp->mkSam__DOT__y___05Fh147225 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147283) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147284));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10201 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511090) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511091));
    vlTOPp->mkSam__DOT__y___05Fh511336 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511091) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511090));
    vlTOPp->mkSam__DOT__y___05Fh525487 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525545) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525546));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9546 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479642) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479643));
    vlTOPp->mkSam__DOT__y___05Fh479888 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479643) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479642));
    vlTOPp->mkSam__DOT__y___05Fh494039 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494097) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494098));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7584 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385000) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385001));
    vlTOPp->mkSam__DOT__y___05Fh385246 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385001) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385000));
    vlTOPp->mkSam__DOT__y___05Fh399397 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399455) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399456));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6930 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353553) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353554));
    vlTOPp->mkSam__DOT__y___05Fh353799 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353554) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353553));
    vlTOPp->mkSam__DOT__y___05Fh367950 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368008) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368009));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8892 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448195) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448196));
    vlTOPp->mkSam__DOT__y___05Fh448441 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448196) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448195));
    vlTOPp->mkSam__DOT__y___05Fh462592 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462650) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462651));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8238 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416622) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416623));
    vlTOPp->mkSam__DOT__y___05Fh416868 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416623) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416622));
    vlTOPp->mkSam__DOT__y___05Fh431019 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431077) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431078));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d398 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38239) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh38240));
    vlTOPp->mkSam__DOT__y___05Fh38485 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh38240) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh38239));
    vlTOPp->mkSam__DOT__y___05Fh52636 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh52694) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh52695));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1051 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69935) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh69936));
    vlTOPp->mkSam__DOT__y___05Fh70181 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh69936) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh69935));
    vlTOPp->mkSam__DOT__y___05Fh84332 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh84390) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh84391));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1704 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101381) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh101382));
    vlTOPp->mkSam__DOT__y___05Fh101627 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh101382) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh101381));
    vlTOPp->mkSam__DOT__y___05Fh115778 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh115836) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh115837));
    vlTOPp->mkSam__DOT__y___05Fh322296 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322352) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322353));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6656 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh336503) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh336504)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh336309) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh336310)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6655)));
    vlTOPp->mkSam__DOT__y___05Fh336757 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh336504) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh336503));
    vlTOPp->mkSam__DOT__y___05Fh290724 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290780) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290781));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6003 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh304931) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh304932)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh304737) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh304738)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6002)));
    vlTOPp->mkSam__DOT__y___05Fh305185 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304932) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304931));
    vlTOPp->mkSam__DOT__y___05Fh259103 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259159) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh259160));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5350 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh273310) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh273311)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh273116) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh273117)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5349)));
    vlTOPp->mkSam__DOT__y___05Fh273564 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273311) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273310));
    vlTOPp->mkSam__DOT__y___05Fh227656 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227712) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227713));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4696 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh241863) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh241864)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh241669) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh241670)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4695)));
    vlTOPp->mkSam__DOT__y___05Fh242117 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241864) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241863));
    vlTOPp->mkSam__DOT__y___05Fh196210 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196266) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196267));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4043 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh210417) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh210418)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh210223) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh210224)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4042)));
    vlTOPp->mkSam__DOT__y___05Fh210671 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh210418) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210417));
    vlTOPp->mkSam__DOT__y___05Fh164638 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164694) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164695));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3390 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh178845) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh178846)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh178651) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh178652)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3389)));
    vlTOPp->mkSam__DOT__y___05Fh179099 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178846) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178845));
    vlTOPp->mkSam__DOT__y___05Fh133017 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133073) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh133074));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2737 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh147224) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh147225)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh147030) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh147031)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2736)));
    vlTOPp->mkSam__DOT__y___05Fh147478 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147225) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147224));
    vlTOPp->mkSam__DOT__y___05Fh511279 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511335) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511336));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10580 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh525486) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh525487)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh525292) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh525293)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10579)));
    vlTOPp->mkSam__DOT__y___05Fh525740 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh525487) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh525486));
    vlTOPp->mkSam__DOT__y___05Fh479831 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479887) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479888));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9925 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh494038) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh494039)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh493844) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh493845)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9924)));
    vlTOPp->mkSam__DOT__y___05Fh494292 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh494039) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh494038));
    vlTOPp->mkSam__DOT__y___05Fh385189 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385245) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385246));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7963 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh399396) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh399397)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh399202) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh399203)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7962)));
    vlTOPp->mkSam__DOT__y___05Fh399650 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399397) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399396));
    vlTOPp->mkSam__DOT__y___05Fh353742 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353798) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353799));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7309 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh367949) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh367950)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh367755) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh367756)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7308)));
    vlTOPp->mkSam__DOT__y___05Fh368203 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367950) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367949));
    vlTOPp->mkSam__DOT__y___05Fh448384 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448440) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh448441));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9271 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh462591) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh462592)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh462397) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh462398)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9270)));
    vlTOPp->mkSam__DOT__y___05Fh462845 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462592) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462591));
    vlTOPp->mkSam__DOT__y___05Fh416811 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416867) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416868));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8617 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh431018) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh431019)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh430824) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh430825)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8616)));
    vlTOPp->mkSam__DOT__y___05Fh431272 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431019) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431018));
    vlTOPp->mkSam__DOT__y___05Fh38428 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38484) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh38485));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d777 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh52635) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh52636)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh52441) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh52442)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d776)));
    vlTOPp->mkSam__DOT__y___05Fh52889 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh52636) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh52635));
    vlTOPp->mkSam__DOT__y___05Fh70124 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70180) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh70181));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1430 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh84331) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh84332)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh84137) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh84138)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1429)));
    vlTOPp->mkSam__DOT__y___05Fh84585 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh84332) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh84331));
    vlTOPp->mkSam__DOT__y___05Fh101570 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101626) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh101627));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2083 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh115777) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh115778)) 
            << 5U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh115583) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh115584)) 
                       << 4U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2082)));
    vlTOPp->mkSam__DOT__y___05Fh116031 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh115778) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh115777));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6276 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322295) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322296));
    vlTOPp->mkSam__DOT__y___05Fh322541 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322296) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322295));
    vlTOPp->mkSam__DOT__y___05Fh336698 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336756) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336757));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5623 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290723) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290724));
    vlTOPp->mkSam__DOT__y___05Fh290969 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290724) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290723));
    vlTOPp->mkSam__DOT__y___05Fh305126 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305184) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305185));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4970 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259102) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259103));
    vlTOPp->mkSam__DOT__y___05Fh259348 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259103) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259102));
    vlTOPp->mkSam__DOT__y___05Fh273505 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273563) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273564));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4316 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227655) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227656));
    vlTOPp->mkSam__DOT__y___05Fh227901 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227656) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227655));
    vlTOPp->mkSam__DOT__y___05Fh242058 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242116) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242117));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3663 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196209) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196210));
    vlTOPp->mkSam__DOT__y___05Fh196455 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196210) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196209));
    vlTOPp->mkSam__DOT__y___05Fh210612 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210670) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210671));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3010 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164637) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164638));
    vlTOPp->mkSam__DOT__y___05Fh164883 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164638) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164637));
    vlTOPp->mkSam__DOT__y___05Fh179040 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179098) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179099));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2357 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133016) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133017));
    vlTOPp->mkSam__DOT__y___05Fh133262 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133017) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133016));
    vlTOPp->mkSam__DOT__y___05Fh147419 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147477) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147478));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10200 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511278) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511279));
    vlTOPp->mkSam__DOT__y___05Fh511524 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511279) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511278));
    vlTOPp->mkSam__DOT__y___05Fh525681 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525739) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525740));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9545 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479830) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479831));
    vlTOPp->mkSam__DOT__y___05Fh480076 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479831) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479830));
    vlTOPp->mkSam__DOT__y___05Fh494233 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494291) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494292));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7583 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385188) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385189));
    vlTOPp->mkSam__DOT__y___05Fh385434 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385189) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385188));
    vlTOPp->mkSam__DOT__y___05Fh399591 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399649) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399650));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6929 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353741) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353742));
    vlTOPp->mkSam__DOT__y___05Fh353987 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353742) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353741));
    vlTOPp->mkSam__DOT__y___05Fh368144 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368202) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368203));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8891 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448383) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448384));
    vlTOPp->mkSam__DOT__y___05Fh448629 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448384) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448383));
    vlTOPp->mkSam__DOT__y___05Fh462786 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462844) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462845));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8237 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416810) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416811));
    vlTOPp->mkSam__DOT__y___05Fh417056 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416811) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416810));
    vlTOPp->mkSam__DOT__y___05Fh431213 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431271) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431272));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d397 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38427) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh38428));
    vlTOPp->mkSam__DOT__y___05Fh38673 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh38428) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh38427));
    vlTOPp->mkSam__DOT__y___05Fh52830 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh52888) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh52889));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1050 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70123) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh70124));
    vlTOPp->mkSam__DOT__y___05Fh70369 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh70124) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh70123));
    vlTOPp->mkSam__DOT__y___05Fh84526 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh84584) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh84585));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1703 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101569) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh101570));
    vlTOPp->mkSam__DOT__y___05Fh101815 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh101570) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh101569));
    vlTOPp->mkSam__DOT__y___05Fh115972 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh116030) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh116031));
    vlTOPp->mkSam__DOT__y___05Fh322484 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322540) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322541));
    vlTOPp->mkSam__DOT__y___05Fh336951 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh336698) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh336697));
    vlTOPp->mkSam__DOT__y___05Fh290912 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290968) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290969));
    vlTOPp->mkSam__DOT__y___05Fh305379 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305126) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305125));
    vlTOPp->mkSam__DOT__y___05Fh259291 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259347) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh259348));
    vlTOPp->mkSam__DOT__y___05Fh273758 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273505) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273504));
    vlTOPp->mkSam__DOT__y___05Fh227844 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227900) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227901));
    vlTOPp->mkSam__DOT__y___05Fh242311 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242058) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242057));
    vlTOPp->mkSam__DOT__y___05Fh196398 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196454) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196455));
    vlTOPp->mkSam__DOT__y___05Fh210865 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh210612) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210611));
    vlTOPp->mkSam__DOT__y___05Fh164826 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164882) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164883));
    vlTOPp->mkSam__DOT__y___05Fh179293 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179040) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179039));
    vlTOPp->mkSam__DOT__y___05Fh133205 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133261) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh133262));
    vlTOPp->mkSam__DOT__y___05Fh147672 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147419) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147418));
    vlTOPp->mkSam__DOT__y___05Fh511467 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511523) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511524));
    vlTOPp->mkSam__DOT__y___05Fh525934 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh525681) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh525680));
    vlTOPp->mkSam__DOT__y___05Fh480019 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480075) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480076));
    vlTOPp->mkSam__DOT__y___05Fh494486 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh494233) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh494232));
    vlTOPp->mkSam__DOT__y___05Fh385377 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385433) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385434));
    vlTOPp->mkSam__DOT__y___05Fh399844 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399591) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399590));
    vlTOPp->mkSam__DOT__y___05Fh353930 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353986) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353987));
    vlTOPp->mkSam__DOT__y___05Fh368397 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368144) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368143));
    vlTOPp->mkSam__DOT__y___05Fh448572 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448628) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh448629));
    vlTOPp->mkSam__DOT__y___05Fh463039 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462786) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462785));
    vlTOPp->mkSam__DOT__y___05Fh416999 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417055) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417056));
    vlTOPp->mkSam__DOT__y___05Fh431466 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431213) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431212));
    vlTOPp->mkSam__DOT__y___05Fh38616 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38672) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh38673));
    vlTOPp->mkSam__DOT__y___05Fh53083 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh52830) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh52829));
    vlTOPp->mkSam__DOT__y___05Fh70312 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70368) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh70369));
    vlTOPp->mkSam__DOT__y___05Fh84779 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh84526) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh84525));
    vlTOPp->mkSam__DOT__y___05Fh101758 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101814) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh101815));
    vlTOPp->mkSam__DOT__y___05Fh116225 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh115972) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh115971));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6275 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322483) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322484));
    vlTOPp->mkSam__DOT__y___05Fh322729 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322484) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322483));
    vlTOPp->mkSam__DOT__y___05Fh336892 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336950) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336951));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5622 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290911) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290912));
    vlTOPp->mkSam__DOT__y___05Fh291157 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290912) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290911));
    vlTOPp->mkSam__DOT__y___05Fh305320 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305378) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305379));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4969 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259290) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259291));
    vlTOPp->mkSam__DOT__y___05Fh259536 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259291) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259290));
    vlTOPp->mkSam__DOT__y___05Fh273699 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273757) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273758));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4315 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227843) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227844));
    vlTOPp->mkSam__DOT__y___05Fh228089 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227844) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227843));
    vlTOPp->mkSam__DOT__y___05Fh242252 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242310) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242311));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3662 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196397) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196398));
    vlTOPp->mkSam__DOT__y___05Fh196643 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196398) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196397));
    vlTOPp->mkSam__DOT__y___05Fh210806 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210864) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210865));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3009 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164825) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164826));
    vlTOPp->mkSam__DOT__y___05Fh165071 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164826) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164825));
    vlTOPp->mkSam__DOT__y___05Fh179234 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179292) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179293));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2356 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133204) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133205));
    vlTOPp->mkSam__DOT__y___05Fh133450 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133205) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133204));
    vlTOPp->mkSam__DOT__y___05Fh147613 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147671) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147672));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10199 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511466) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511467));
    vlTOPp->mkSam__DOT__y___05Fh511712 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511467) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511466));
    vlTOPp->mkSam__DOT__y___05Fh525875 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525933) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525934));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9544 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480018) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480019));
    vlTOPp->mkSam__DOT__y___05Fh480264 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480019) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480018));
    vlTOPp->mkSam__DOT__y___05Fh494427 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494485) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494486));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7582 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385376) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385377));
    vlTOPp->mkSam__DOT__y___05Fh385622 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385377) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385376));
    vlTOPp->mkSam__DOT__y___05Fh399785 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399843) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399844));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6928 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353929) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353930));
    vlTOPp->mkSam__DOT__y___05Fh354175 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353930) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353929));
    vlTOPp->mkSam__DOT__y___05Fh368338 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368396) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368397));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8890 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448571) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448572));
    vlTOPp->mkSam__DOT__y___05Fh448817 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448572) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448571));
    vlTOPp->mkSam__DOT__y___05Fh462980 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463038) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463039));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8236 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416998) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416999));
    vlTOPp->mkSam__DOT__y___05Fh417244 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416999) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416998));
    vlTOPp->mkSam__DOT__y___05Fh431407 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431465) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431466));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d396 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38615) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh38616));
    vlTOPp->mkSam__DOT__y___05Fh38861 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh38616) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh38615));
    vlTOPp->mkSam__DOT__y___05Fh53024 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh53082) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh53083));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1049 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70311) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh70312));
    vlTOPp->mkSam__DOT__y___05Fh70557 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh70312) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh70311));
    vlTOPp->mkSam__DOT__y___05Fh84720 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh84778) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh84779));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1702 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101757) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh101758));
    vlTOPp->mkSam__DOT__y___05Fh102003 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh101758) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh101757));
    vlTOPp->mkSam__DOT__y___05Fh116166 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh116224) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh116225));
    vlTOPp->mkSam__DOT__y___05Fh322672 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322728) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322729));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6657 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh336891) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh336892)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh336697) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh336698)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6656)));
    vlTOPp->mkSam__DOT__y___05Fh337145 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh336892) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh336891));
    vlTOPp->mkSam__DOT__y___05Fh291100 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291156) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh291157));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6004 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh305319) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh305320)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh305125) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh305126)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6003)));
    vlTOPp->mkSam__DOT__y___05Fh305573 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305320) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305319));
    vlTOPp->mkSam__DOT__y___05Fh259479 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259535) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh259536));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5351 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh273698) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh273699)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh273504) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh273505)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5350)));
    vlTOPp->mkSam__DOT__y___05Fh273952 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273699) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273698));
    vlTOPp->mkSam__DOT__y___05Fh228032 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228088) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh228089));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4697 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh242251) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh242252)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh242057) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh242058)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4696)));
    vlTOPp->mkSam__DOT__y___05Fh242505 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242252) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242251));
    vlTOPp->mkSam__DOT__y___05Fh196586 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196642) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196643));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4044 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh210805) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh210806)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh210611) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh210612)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4043)));
    vlTOPp->mkSam__DOT__y___05Fh211059 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh210806) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210805));
    vlTOPp->mkSam__DOT__y___05Fh165014 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165070) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh165071));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3391 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh179233) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh179234)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh179039) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh179040)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3390)));
    vlTOPp->mkSam__DOT__y___05Fh179487 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179234) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179233));
    vlTOPp->mkSam__DOT__y___05Fh133393 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133449) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh133450));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2738 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh147612) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh147613)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh147418) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh147419)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2737)));
    vlTOPp->mkSam__DOT__y___05Fh147866 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147613) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147612));
    vlTOPp->mkSam__DOT__y___05Fh511655 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511711) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511712));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10581 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh525874) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh525875)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh525680) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh525681)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10580)));
    vlTOPp->mkSam__DOT__y___05Fh526128 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh525875) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh525874));
    vlTOPp->mkSam__DOT__y___05Fh480207 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480263) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480264));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9926 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh494426) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh494427)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh494232) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh494233)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9925)));
    vlTOPp->mkSam__DOT__y___05Fh494680 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh494427) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh494426));
    vlTOPp->mkSam__DOT__y___05Fh385565 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385621) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385622));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7964 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh399784) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh399785)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh399590) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh399591)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7963)));
    vlTOPp->mkSam__DOT__y___05Fh400038 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399785) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399784));
    vlTOPp->mkSam__DOT__y___05Fh354118 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354174) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh354175));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7310 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh368337) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh368338)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh368143) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh368144)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7309)));
    vlTOPp->mkSam__DOT__y___05Fh368591 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368338) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368337));
    vlTOPp->mkSam__DOT__y___05Fh448760 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448816) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh448817));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9272 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh462979) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh462980)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh462785) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh462786)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9271)));
    vlTOPp->mkSam__DOT__y___05Fh463233 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462980) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462979));
    vlTOPp->mkSam__DOT__y___05Fh417187 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417243) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417244));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8618 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh431406) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh431407)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh431212) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh431213)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8617)));
    vlTOPp->mkSam__DOT__y___05Fh431660 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431407) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431406));
    vlTOPp->mkSam__DOT__y___05Fh38804 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38860) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh38861));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d778 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh53023) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh53024)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh52829) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh52830)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d777)));
    vlTOPp->mkSam__DOT__y___05Fh53277 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh53024) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh53023));
    vlTOPp->mkSam__DOT__y___05Fh70500 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70556) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh70557));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1431 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh84719) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh84720)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh84525) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh84526)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1430)));
    vlTOPp->mkSam__DOT__y___05Fh84973 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh84720) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh84719));
    vlTOPp->mkSam__DOT__y___05Fh101946 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102002) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh102003));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2084 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh116165) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh116166)) 
            << 7U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh115971) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh115972)) 
                       << 6U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2083)));
    vlTOPp->mkSam__DOT__y___05Fh116419 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh116166) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh116165));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6274 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322671) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322672));
    vlTOPp->mkSam__DOT__y___05Fh322917 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322672) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322671));
    vlTOPp->mkSam__DOT__y___05Fh337086 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337144) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337145));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5621 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291099) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291100));
    vlTOPp->mkSam__DOT__y___05Fh291345 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291100) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291099));
    vlTOPp->mkSam__DOT__y___05Fh305514 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305572) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305573));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4968 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259478) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259479));
    vlTOPp->mkSam__DOT__y___05Fh259724 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259479) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259478));
    vlTOPp->mkSam__DOT__y___05Fh273893 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273951) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273952));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4314 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228031) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228032));
    vlTOPp->mkSam__DOT__y___05Fh228277 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228032) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228031));
    vlTOPp->mkSam__DOT__y___05Fh242446 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242504) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242505));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3661 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196585) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196586));
    vlTOPp->mkSam__DOT__y___05Fh196831 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196586) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196585));
    vlTOPp->mkSam__DOT__y___05Fh211000 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211058) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211059));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3008 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165013) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165014));
    vlTOPp->mkSam__DOT__y___05Fh165259 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165014) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165013));
    vlTOPp->mkSam__DOT__y___05Fh179428 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179486) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179487));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2355 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133392) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133393));
    vlTOPp->mkSam__DOT__y___05Fh133638 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133393) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133392));
    vlTOPp->mkSam__DOT__y___05Fh147807 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147865) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147866));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10198 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511654) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511655));
    vlTOPp->mkSam__DOT__y___05Fh511900 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511655) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511654));
    vlTOPp->mkSam__DOT__y___05Fh526069 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526127) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526128));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9543 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480206) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480207));
    vlTOPp->mkSam__DOT__y___05Fh480452 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480207) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480206));
    vlTOPp->mkSam__DOT__y___05Fh494621 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494679) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494680));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7581 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385564) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385565));
    vlTOPp->mkSam__DOT__y___05Fh385810 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385565) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385564));
    vlTOPp->mkSam__DOT__y___05Fh399979 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400037) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400038));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6927 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354117) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354118));
    vlTOPp->mkSam__DOT__y___05Fh354363 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354118) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354117));
    vlTOPp->mkSam__DOT__y___05Fh368532 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368590) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368591));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8889 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448759) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448760));
    vlTOPp->mkSam__DOT__y___05Fh449005 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448760) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448759));
    vlTOPp->mkSam__DOT__y___05Fh463174 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463232) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463233));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8235 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417186) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417187));
    vlTOPp->mkSam__DOT__y___05Fh417432 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417187) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417186));
    vlTOPp->mkSam__DOT__y___05Fh431601 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431659) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431660));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d395 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38803) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh38804));
    vlTOPp->mkSam__DOT__y___05Fh39049 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh38804) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh38803));
    vlTOPp->mkSam__DOT__y___05Fh53218 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh53276) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh53277));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1048 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70499) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh70500));
    vlTOPp->mkSam__DOT__y___05Fh70745 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh70500) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh70499));
    vlTOPp->mkSam__DOT__y___05Fh84914 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh84972) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh84973));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1701 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh101945) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh101946));
    vlTOPp->mkSam__DOT__y___05Fh102191 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh101946) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh101945));
    vlTOPp->mkSam__DOT__y___05Fh116360 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh116418) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh116419));
    vlTOPp->mkSam__DOT__y___05Fh322860 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322916) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322917));
    vlTOPp->mkSam__DOT__y___05Fh337339 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh337086) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh337085));
    vlTOPp->mkSam__DOT__y___05Fh291288 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291344) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh291345));
    vlTOPp->mkSam__DOT__y___05Fh305767 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305514) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305513));
    vlTOPp->mkSam__DOT__y___05Fh259667 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259723) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh259724));
    vlTOPp->mkSam__DOT__y___05Fh274146 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273893) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273892));
    vlTOPp->mkSam__DOT__y___05Fh228220 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228276) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh228277));
    vlTOPp->mkSam__DOT__y___05Fh242699 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242446) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242445));
    vlTOPp->mkSam__DOT__y___05Fh196774 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196830) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196831));
    vlTOPp->mkSam__DOT__y___05Fh211253 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211000) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210999));
    vlTOPp->mkSam__DOT__y___05Fh165202 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165258) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh165259));
    vlTOPp->mkSam__DOT__y___05Fh179681 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179428) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179427));
    vlTOPp->mkSam__DOT__y___05Fh133581 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133637) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh133638));
    vlTOPp->mkSam__DOT__y___05Fh148060 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147807) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147806));
    vlTOPp->mkSam__DOT__y___05Fh511843 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511899) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511900));
    vlTOPp->mkSam__DOT__y___05Fh526322 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh526069) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh526068));
    vlTOPp->mkSam__DOT__y___05Fh480395 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480451) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480452));
    vlTOPp->mkSam__DOT__y___05Fh494874 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh494621) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh494620));
    vlTOPp->mkSam__DOT__y___05Fh385753 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385809) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385810));
    vlTOPp->mkSam__DOT__y___05Fh400232 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399979) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399978));
    vlTOPp->mkSam__DOT__y___05Fh354306 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354362) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh354363));
    vlTOPp->mkSam__DOT__y___05Fh368785 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368532) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368531));
    vlTOPp->mkSam__DOT__y___05Fh448948 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449004) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449005));
    vlTOPp->mkSam__DOT__y___05Fh463427 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh463174) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh463173));
    vlTOPp->mkSam__DOT__y___05Fh417375 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417431) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417432));
    vlTOPp->mkSam__DOT__y___05Fh431854 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431601) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431600));
    vlTOPp->mkSam__DOT__y___05Fh38992 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39048) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh39049));
    vlTOPp->mkSam__DOT__y___05Fh53471 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh53218) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh53217));
    vlTOPp->mkSam__DOT__y___05Fh70688 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70744) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh70745));
    vlTOPp->mkSam__DOT__y___05Fh85167 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh84914) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh84913));
    vlTOPp->mkSam__DOT__y___05Fh102134 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102190) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh102191));
    vlTOPp->mkSam__DOT__y___05Fh116613 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh116360) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh116359));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6273 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322859) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322860));
    vlTOPp->mkSam__DOT__y___05Fh323105 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322860) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322859));
    vlTOPp->mkSam__DOT__y___05Fh337280 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337338) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337339));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5620 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291287) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291288));
    vlTOPp->mkSam__DOT__y___05Fh291533 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291288) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291287));
    vlTOPp->mkSam__DOT__y___05Fh305708 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305766) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305767));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4967 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259666) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259667));
    vlTOPp->mkSam__DOT__y___05Fh259912 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259667) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259666));
    vlTOPp->mkSam__DOT__y___05Fh274087 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274145) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274146));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4313 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228219) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228220));
    vlTOPp->mkSam__DOT__y___05Fh228465 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228220) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228219));
    vlTOPp->mkSam__DOT__y___05Fh242640 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242698) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242699));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3660 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196773) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196774));
    vlTOPp->mkSam__DOT__y___05Fh197019 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196774) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196773));
    vlTOPp->mkSam__DOT__y___05Fh211194 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211252) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211253));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3007 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165201) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165202));
    vlTOPp->mkSam__DOT__y___05Fh165447 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165202) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165201));
    vlTOPp->mkSam__DOT__y___05Fh179622 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179680) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179681));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2354 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133580) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133581));
    vlTOPp->mkSam__DOT__y___05Fh133826 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133581) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133580));
    vlTOPp->mkSam__DOT__y___05Fh148001 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148059) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148060));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10197 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511842) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511843));
    vlTOPp->mkSam__DOT__y___05Fh512088 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511843) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511842));
    vlTOPp->mkSam__DOT__y___05Fh526263 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526321) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526322));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9542 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480394) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480395));
    vlTOPp->mkSam__DOT__y___05Fh480640 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480395) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480394));
    vlTOPp->mkSam__DOT__y___05Fh494815 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494873) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494874));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7580 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385752) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385753));
    vlTOPp->mkSam__DOT__y___05Fh385998 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385753) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385752));
    vlTOPp->mkSam__DOT__y___05Fh400173 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400231) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400232));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6926 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354305) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354306));
    vlTOPp->mkSam__DOT__y___05Fh354551 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354306) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354305));
    vlTOPp->mkSam__DOT__y___05Fh368726 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368784) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368785));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8888 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448947) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448948));
    vlTOPp->mkSam__DOT__y___05Fh449193 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448948) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448947));
    vlTOPp->mkSam__DOT__y___05Fh463368 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463426) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463427));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8234 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417374) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417375));
    vlTOPp->mkSam__DOT__y___05Fh417620 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417375) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417374));
    vlTOPp->mkSam__DOT__y___05Fh431795 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431853) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431854));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d394 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh38991) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh38992));
    vlTOPp->mkSam__DOT__y___05Fh39237 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh38992) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh38991));
    vlTOPp->mkSam__DOT__y___05Fh53412 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh53470) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh53471));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1047 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70687) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh70688));
    vlTOPp->mkSam__DOT__y___05Fh70933 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh70688) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh70687));
    vlTOPp->mkSam__DOT__y___05Fh85108 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh85166) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh85167));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1700 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102133) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh102134));
    vlTOPp->mkSam__DOT__y___05Fh102379 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh102134) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh102133));
    vlTOPp->mkSam__DOT__y___05Fh116554 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh116612) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh116613));
    vlTOPp->mkSam__DOT__y___05Fh323048 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323104) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh323105));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6658 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh337279) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh337280)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh337085) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh337086)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6657)));
    vlTOPp->mkSam__DOT__y___05Fh337533 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh337280) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh337279));
    vlTOPp->mkSam__DOT__y___05Fh291476 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291532) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh291533));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6005 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh305707) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh305708)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh305513) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh305514)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6004)));
    vlTOPp->mkSam__DOT__y___05Fh305961 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305708) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305707));
    vlTOPp->mkSam__DOT__y___05Fh259855 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259911) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh259912));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5352 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh274086) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh274087)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh273892) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh273893)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5351)));
    vlTOPp->mkSam__DOT__y___05Fh274340 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh274087) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh274086));
    vlTOPp->mkSam__DOT__y___05Fh228408 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228464) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh228465));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4698 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh242639) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh242640)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh242445) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh242446)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4697)));
    vlTOPp->mkSam__DOT__y___05Fh242893 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242640) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242639));
    vlTOPp->mkSam__DOT__y___05Fh196962 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197018) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh197019));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4045 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh211193) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh211194)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh210999) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh211000)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4044)));
    vlTOPp->mkSam__DOT__y___05Fh211447 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211194) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh211193));
    vlTOPp->mkSam__DOT__y___05Fh165390 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165446) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh165447));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3392 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh179621) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh179622)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh179427) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh179428)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3391)));
    vlTOPp->mkSam__DOT__y___05Fh179875 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179622) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179621));
    vlTOPp->mkSam__DOT__y___05Fh133769 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133825) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh133826));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2739 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh148000) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh148001)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh147806) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh147807)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2738)));
    vlTOPp->mkSam__DOT__y___05Fh148254 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh148001) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh148000));
    vlTOPp->mkSam__DOT__y___05Fh512031 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512087) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh512088));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10582 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh526262) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh526263)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh526068) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh526069)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10581)));
    vlTOPp->mkSam__DOT__y___05Fh526516 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh526263) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh526262));
    vlTOPp->mkSam__DOT__y___05Fh480583 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480639) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480640));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9927 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh494814) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh494815)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh494620) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh494621)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9926)));
    vlTOPp->mkSam__DOT__y___05Fh495068 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh494815) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh494814));
    vlTOPp->mkSam__DOT__y___05Fh385941 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385997) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385998));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7965 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh400172) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh400173)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh399978) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh399979)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7964)));
    vlTOPp->mkSam__DOT__y___05Fh400426 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh400173) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh400172));
    vlTOPp->mkSam__DOT__y___05Fh354494 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354550) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh354551));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7311 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh368725) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh368726)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh368531) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh368532)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7310)));
    vlTOPp->mkSam__DOT__y___05Fh368979 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368726) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368725));
    vlTOPp->mkSam__DOT__y___05Fh449136 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449192) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449193));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9273 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh463367) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh463368)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh463173) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh463174)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9272)));
    vlTOPp->mkSam__DOT__y___05Fh463621 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh463368) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh463367));
    vlTOPp->mkSam__DOT__y___05Fh417563 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417619) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417620));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8619 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh431794) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh431795)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh431600) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh431601)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8618)));
    vlTOPp->mkSam__DOT__y___05Fh432048 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431795) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431794));
    vlTOPp->mkSam__DOT__y___05Fh39180 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39236) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh39237));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d779 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh53411) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh53412)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh53217) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh53218)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d778)));
    vlTOPp->mkSam__DOT__y___05Fh53665 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh53412) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh53411));
    vlTOPp->mkSam__DOT__y___05Fh70876 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70932) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh70933));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1432 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh85107) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh85108)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh84913) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh84914)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1431)));
    vlTOPp->mkSam__DOT__y___05Fh85361 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh85108) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh85107));
    vlTOPp->mkSam__DOT__y___05Fh102322 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102378) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh102379));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2085 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh116553) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh116554)) 
            << 9U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh116359) 
                        ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh116360)) 
                       << 8U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2084)));
    vlTOPp->mkSam__DOT__y___05Fh116807 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh116554) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh116553));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6272 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323047) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323048));
    vlTOPp->mkSam__DOT__y___05Fh323293 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323048) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323047));
    vlTOPp->mkSam__DOT__y___05Fh337474 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337532) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337533));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5619 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291475) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291476));
    vlTOPp->mkSam__DOT__y___05Fh291721 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291476) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291475));
    vlTOPp->mkSam__DOT__y___05Fh305902 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305960) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305961));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4966 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259854) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259855));
    vlTOPp->mkSam__DOT__y___05Fh260100 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259855) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259854));
    vlTOPp->mkSam__DOT__y___05Fh274281 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274339) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274340));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4312 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228407) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228408));
    vlTOPp->mkSam__DOT__y___05Fh228653 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228408) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228407));
    vlTOPp->mkSam__DOT__y___05Fh242834 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242892) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242893));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3659 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196961) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196962));
    vlTOPp->mkSam__DOT__y___05Fh197207 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196962) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196961));
    vlTOPp->mkSam__DOT__y___05Fh211388 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211446) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211447));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3006 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165389) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165390));
    vlTOPp->mkSam__DOT__y___05Fh165635 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165390) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165389));
    vlTOPp->mkSam__DOT__y___05Fh179816 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179874) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179875));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2353 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133768) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133769));
    vlTOPp->mkSam__DOT__y___05Fh134014 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133769) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133768));
    vlTOPp->mkSam__DOT__y___05Fh148195 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148253) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148254));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10196 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512030) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512031));
    vlTOPp->mkSam__DOT__y___05Fh512276 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512031) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512030));
    vlTOPp->mkSam__DOT__y___05Fh526457 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526515) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526516));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9541 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480582) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480583));
    vlTOPp->mkSam__DOT__y___05Fh480828 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480583) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480582));
    vlTOPp->mkSam__DOT__y___05Fh495009 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh495067) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh495068));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7579 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385940) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385941));
    vlTOPp->mkSam__DOT__y___05Fh386186 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385941) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385940));
    vlTOPp->mkSam__DOT__y___05Fh400367 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400425) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400426));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6925 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354493) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354494));
    vlTOPp->mkSam__DOT__y___05Fh354739 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354494) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354493));
    vlTOPp->mkSam__DOT__y___05Fh368920 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368978) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368979));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8887 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449135) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh449136));
    vlTOPp->mkSam__DOT__y___05Fh449381 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh449136) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh449135));
    vlTOPp->mkSam__DOT__y___05Fh463562 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463620) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463621));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8233 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417562) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417563));
    vlTOPp->mkSam__DOT__y___05Fh417808 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417563) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417562));
    vlTOPp->mkSam__DOT__y___05Fh431989 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh432047) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh432048));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d393 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39179) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh39180));
    vlTOPp->mkSam__DOT__y___05Fh39425 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh39180) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh39179));
    vlTOPp->mkSam__DOT__y___05Fh53606 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh53664) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh53665));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1046 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh70875) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh70876));
    vlTOPp->mkSam__DOT__y___05Fh71121 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh70876) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh70875));
    vlTOPp->mkSam__DOT__y___05Fh85302 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh85360) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh85361));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1699 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102321) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh102322));
    vlTOPp->mkSam__DOT__y___05Fh102567 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh102322) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh102321));
    vlTOPp->mkSam__DOT__y___05Fh116748 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh116806) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh116807));
    vlTOPp->mkSam__DOT__y___05Fh323236 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323292) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh323293));
    vlTOPp->mkSam__DOT__y___05Fh337727 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh337474) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh337473));
    vlTOPp->mkSam__DOT__y___05Fh291664 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291720) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh291721));
    vlTOPp->mkSam__DOT__y___05Fh306155 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305902) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305901));
    vlTOPp->mkSam__DOT__y___05Fh260043 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260099) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh260100));
    vlTOPp->mkSam__DOT__y___05Fh274534 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh274281) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh274280));
    vlTOPp->mkSam__DOT__y___05Fh228596 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228652) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh228653));
    vlTOPp->mkSam__DOT__y___05Fh243087 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242834) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242833));
    vlTOPp->mkSam__DOT__y___05Fh197150 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197206) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh197207));
    vlTOPp->mkSam__DOT__y___05Fh211641 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211388) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh211387));
    vlTOPp->mkSam__DOT__y___05Fh165578 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165634) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh165635));
    vlTOPp->mkSam__DOT__y___05Fh180069 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179816) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179815));
    vlTOPp->mkSam__DOT__y___05Fh133957 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134013) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh134014));
    vlTOPp->mkSam__DOT__y___05Fh148448 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh148195) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh148194));
    vlTOPp->mkSam__DOT__y___05Fh512219 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512275) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh512276));
    vlTOPp->mkSam__DOT__y___05Fh526710 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh526457) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh526456));
    vlTOPp->mkSam__DOT__y___05Fh480771 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480827) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480828));
    vlTOPp->mkSam__DOT__y___05Fh495262 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh495009) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh495008));
    vlTOPp->mkSam__DOT__y___05Fh386129 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386185) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh386186));
    vlTOPp->mkSam__DOT__y___05Fh400620 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh400367) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh400366));
    vlTOPp->mkSam__DOT__y___05Fh354682 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354738) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh354739));
    vlTOPp->mkSam__DOT__y___05Fh369173 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368920) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368919));
    vlTOPp->mkSam__DOT__y___05Fh449324 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449380) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449381));
    vlTOPp->mkSam__DOT__y___05Fh463815 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh463562) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh463561));
    vlTOPp->mkSam__DOT__y___05Fh417751 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417807) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417808));
    vlTOPp->mkSam__DOT__y___05Fh432242 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431989) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431988));
    vlTOPp->mkSam__DOT__y___05Fh39368 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39424) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh39425));
    vlTOPp->mkSam__DOT__y___05Fh53859 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh53606) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh53605));
    vlTOPp->mkSam__DOT__y___05Fh71064 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71120) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh71121));
    vlTOPp->mkSam__DOT__y___05Fh85555 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh85302) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh85301));
    vlTOPp->mkSam__DOT__y___05Fh102510 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102566) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh102567));
    vlTOPp->mkSam__DOT__y___05Fh117001 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh116748) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh116747));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6271 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323235) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323236));
    vlTOPp->mkSam__DOT__y___05Fh323481 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323236) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323235));
    vlTOPp->mkSam__DOT__y___05Fh337668 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337726) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337727));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5618 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291663) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291664));
    vlTOPp->mkSam__DOT__y___05Fh291909 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291664) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291663));
    vlTOPp->mkSam__DOT__y___05Fh306096 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh306154) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh306155));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4965 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260042) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh260043));
    vlTOPp->mkSam__DOT__y___05Fh260288 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh260043) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh260042));
    vlTOPp->mkSam__DOT__y___05Fh274475 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274533) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274534));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4311 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228595) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228596));
    vlTOPp->mkSam__DOT__y___05Fh228841 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228596) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228595));
    vlTOPp->mkSam__DOT__y___05Fh243028 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh243086) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh243087));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3658 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197149) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh197150));
    vlTOPp->mkSam__DOT__y___05Fh197395 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh197150) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh197149));
    vlTOPp->mkSam__DOT__y___05Fh211582 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211640) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211641));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3005 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165577) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165578));
    vlTOPp->mkSam__DOT__y___05Fh165823 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165578) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165577));
    vlTOPp->mkSam__DOT__y___05Fh180010 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh180068) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh180069));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2352 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133956) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133957));
    vlTOPp->mkSam__DOT__y___05Fh134202 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133957) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133956));
    vlTOPp->mkSam__DOT__y___05Fh148389 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148447) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148448));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10195 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512218) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512219));
    vlTOPp->mkSam__DOT__y___05Fh512464 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512219) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512218));
    vlTOPp->mkSam__DOT__y___05Fh526651 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526709) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526710));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9540 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480770) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480771));
    vlTOPp->mkSam__DOT__y___05Fh481016 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480771) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480770));
    vlTOPp->mkSam__DOT__y___05Fh495203 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh495261) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh495262));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7578 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386128) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh386129));
    vlTOPp->mkSam__DOT__y___05Fh386374 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh386129) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh386128));
    vlTOPp->mkSam__DOT__y___05Fh400561 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400619) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400620));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6924 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354681) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354682));
    vlTOPp->mkSam__DOT__y___05Fh354927 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354682) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354681));
    vlTOPp->mkSam__DOT__y___05Fh369114 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh369172) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh369173));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8886 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449323) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh449324));
    vlTOPp->mkSam__DOT__y___05Fh449569 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh449324) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh449323));
    vlTOPp->mkSam__DOT__y___05Fh463756 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463814) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463815));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8232 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417750) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417751));
    vlTOPp->mkSam__DOT__y___05Fh417996 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417751) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417750));
    vlTOPp->mkSam__DOT__y___05Fh432183 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh432241) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh432242));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d392 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39367) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh39368));
    vlTOPp->mkSam__DOT__y___05Fh39613 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh39368) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh39367));
    vlTOPp->mkSam__DOT__y___05Fh53800 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh53858) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh53859));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1045 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71063) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh71064));
    vlTOPp->mkSam__DOT__y___05Fh71309 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh71064) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh71063));
    vlTOPp->mkSam__DOT__y___05Fh85496 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh85554) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh85555));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1698 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102509) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh102510));
    vlTOPp->mkSam__DOT__y___05Fh102755 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh102510) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh102509));
    vlTOPp->mkSam__DOT__y___05Fh116942 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh117000) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh117001));
    vlTOPp->mkSam__DOT__y___05Fh323424 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323480) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh323481));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6659 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh337667) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh337668)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh337473) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh337474)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6658)));
    vlTOPp->mkSam__DOT__y___05Fh337921 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh337668) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh337667));
    vlTOPp->mkSam__DOT__y___05Fh291852 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291908) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh291909));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6006 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh306095) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh306096)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh305901) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh305902)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6005)));
    vlTOPp->mkSam__DOT__y___05Fh306349 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh306096) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh306095));
    vlTOPp->mkSam__DOT__y___05Fh260231 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260287) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh260288));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5353 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh274474) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh274475)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh274280) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh274281)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5352)));
    vlTOPp->mkSam__DOT__y___05Fh274728 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh274475) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh274474));
    vlTOPp->mkSam__DOT__y___05Fh228784 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228840) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh228841));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4699 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh243027) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh243028)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh242833) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh242834)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4698)));
    vlTOPp->mkSam__DOT__y___05Fh243281 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh243028) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh243027));
    vlTOPp->mkSam__DOT__y___05Fh197338 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197394) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh197395));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4046 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh211581) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh211582)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh211387) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh211388)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4045)));
    vlTOPp->mkSam__DOT__y___05Fh211835 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211582) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh211581));
    vlTOPp->mkSam__DOT__y___05Fh165766 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165822) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh165823));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3393 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh180009) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh180010)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh179815) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh179816)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3392)));
    vlTOPp->mkSam__DOT__y___05Fh180263 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh180010) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh180009));
    vlTOPp->mkSam__DOT__y___05Fh134145 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134201) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh134202));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2740 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh148388) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh148389)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh148194) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh148195)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2739)));
    vlTOPp->mkSam__DOT__y___05Fh148642 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh148389) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh148388));
    vlTOPp->mkSam__DOT__y___05Fh512407 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512463) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh512464));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10583 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh526650) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh526651)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh526456) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh526457)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10582)));
    vlTOPp->mkSam__DOT__y___05Fh526904 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh526651) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh526650));
    vlTOPp->mkSam__DOT__y___05Fh480959 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481015) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh481016));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9928 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh495202) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh495203)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh495008) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh495009)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9927)));
    vlTOPp->mkSam__DOT__y___05Fh495456 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh495203) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh495202));
    vlTOPp->mkSam__DOT__y___05Fh386317 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386373) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh386374));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7966 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh400560) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh400561)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh400366) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh400367)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7965)));
    vlTOPp->mkSam__DOT__y___05Fh400814 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh400561) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh400560));
    vlTOPp->mkSam__DOT__y___05Fh354870 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354926) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh354927));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7312 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh369113) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh369114)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh368919) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh368920)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7311)));
    vlTOPp->mkSam__DOT__y___05Fh369367 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh369114) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh369113));
    vlTOPp->mkSam__DOT__y___05Fh449512 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449568) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449569));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9274 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh463755) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh463756)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh463561) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh463562)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9273)));
    vlTOPp->mkSam__DOT__y___05Fh464009 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh463756) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh463755));
    vlTOPp->mkSam__DOT__y___05Fh417939 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417995) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417996));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8620 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh432182) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh432183)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh431988) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh431989)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8619)));
    vlTOPp->mkSam__DOT__y___05Fh432436 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh432183) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh432182));
    vlTOPp->mkSam__DOT__y___05Fh39556 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39612) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh39613));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d780 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh53799) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh53800)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh53605) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh53606)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d779)));
    vlTOPp->mkSam__DOT__y___05Fh54053 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh53800) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh53799));
    vlTOPp->mkSam__DOT__y___05Fh71252 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71308) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh71309));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1433 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh85495) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh85496)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh85301) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh85302)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1432)));
    vlTOPp->mkSam__DOT__y___05Fh85749 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh85496) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh85495));
    vlTOPp->mkSam__DOT__y___05Fh102698 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102754) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh102755));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2086 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh116941) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh116942)) 
            << 0xbU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh116747) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh116748)) 
                         << 0xaU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2085)));
    vlTOPp->mkSam__DOT__y___05Fh117195 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh116942) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh116941));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6270 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323423) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323424));
    vlTOPp->mkSam__DOT__y___05Fh323669 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323424) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323423));
    vlTOPp->mkSam__DOT__y___05Fh337862 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337920) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337921));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5617 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291851) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291852));
    vlTOPp->mkSam__DOT__y___05Fh292097 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291852) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291851));
    vlTOPp->mkSam__DOT__y___05Fh306290 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh306348) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh306349));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4964 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260230) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh260231));
    vlTOPp->mkSam__DOT__y___05Fh260476 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh260231) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh260230));
    vlTOPp->mkSam__DOT__y___05Fh274669 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274727) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274728));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4310 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228783) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228784));
    vlTOPp->mkSam__DOT__y___05Fh229029 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228784) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228783));
    vlTOPp->mkSam__DOT__y___05Fh243222 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh243280) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh243281));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3657 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197337) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh197338));
    vlTOPp->mkSam__DOT__y___05Fh197583 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh197338) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh197337));
    vlTOPp->mkSam__DOT__y___05Fh211776 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211834) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211835));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3004 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165765) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165766));
    vlTOPp->mkSam__DOT__y___05Fh166011 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165766) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165765));
    vlTOPp->mkSam__DOT__y___05Fh180204 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh180262) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh180263));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2351 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134144) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh134145));
    vlTOPp->mkSam__DOT__y___05Fh134390 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh134145) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh134144));
    vlTOPp->mkSam__DOT__y___05Fh148583 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148641) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148642));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10194 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512406) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512407));
    vlTOPp->mkSam__DOT__y___05Fh512652 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512407) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512406));
    vlTOPp->mkSam__DOT__y___05Fh526845 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526903) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526904));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9539 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480958) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480959));
    vlTOPp->mkSam__DOT__y___05Fh481204 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480959) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480958));
    vlTOPp->mkSam__DOT__y___05Fh495397 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh495455) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh495456));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7577 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386316) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh386317));
    vlTOPp->mkSam__DOT__y___05Fh386562 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh386317) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh386316));
    vlTOPp->mkSam__DOT__y___05Fh400755 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400813) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400814));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6923 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354869) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354870));
    vlTOPp->mkSam__DOT__y___05Fh355115 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354870) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354869));
    vlTOPp->mkSam__DOT__y___05Fh369308 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh369366) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh369367));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8885 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449511) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh449512));
    vlTOPp->mkSam__DOT__y___05Fh449757 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh449512) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh449511));
    vlTOPp->mkSam__DOT__y___05Fh463950 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh464008) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh464009));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8231 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417938) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417939));
    vlTOPp->mkSam__DOT__y___05Fh418184 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417939) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417938));
    vlTOPp->mkSam__DOT__y___05Fh432377 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh432435) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh432436));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d391 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39555) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh39556));
    vlTOPp->mkSam__DOT__y___05Fh39801 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh39556) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh39555));
    vlTOPp->mkSam__DOT__y___05Fh53994 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh54052) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh54053));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1044 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71251) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh71252));
    vlTOPp->mkSam__DOT__y___05Fh71497 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh71252) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh71251));
    vlTOPp->mkSam__DOT__y___05Fh85690 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh85748) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh85749));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1697 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102697) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh102698));
    vlTOPp->mkSam__DOT__y___05Fh102943 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh102698) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh102697));
    vlTOPp->mkSam__DOT__y___05Fh117136 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh117194) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh117195));
    vlTOPp->mkSam__DOT__y___05Fh323612 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323668) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh323669));
    vlTOPp->mkSam__DOT__y___05Fh338115 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh337862) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh337861));
    vlTOPp->mkSam__DOT__y___05Fh292040 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292096) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh292097));
    vlTOPp->mkSam__DOT__y___05Fh306543 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh306290) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh306289));
    vlTOPp->mkSam__DOT__y___05Fh260419 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260475) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh260476));
    vlTOPp->mkSam__DOT__y___05Fh274922 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh274669) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh274668));
    vlTOPp->mkSam__DOT__y___05Fh228972 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229028) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh229029));
    vlTOPp->mkSam__DOT__y___05Fh243475 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh243222) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh243221));
    vlTOPp->mkSam__DOT__y___05Fh197526 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197582) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh197583));
    vlTOPp->mkSam__DOT__y___05Fh212029 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211776) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh211775));
    vlTOPp->mkSam__DOT__y___05Fh165954 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166010) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh166011));
    vlTOPp->mkSam__DOT__y___05Fh180457 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh180204) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh180203));
    vlTOPp->mkSam__DOT__y___05Fh134333 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134389) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh134390));
    vlTOPp->mkSam__DOT__y___05Fh148836 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh148583) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh148582));
    vlTOPp->mkSam__DOT__y___05Fh512595 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512651) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh512652));
    vlTOPp->mkSam__DOT__y___05Fh527098 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh526845) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh526844));
    vlTOPp->mkSam__DOT__y___05Fh481147 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481203) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh481204));
    vlTOPp->mkSam__DOT__y___05Fh495650 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh495397) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh495396));
    vlTOPp->mkSam__DOT__y___05Fh386505 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386561) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh386562));
    vlTOPp->mkSam__DOT__y___05Fh401008 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh400755) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh400754));
    vlTOPp->mkSam__DOT__y___05Fh355058 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355114) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh355115));
    vlTOPp->mkSam__DOT__y___05Fh369561 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh369308) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh369307));
    vlTOPp->mkSam__DOT__y___05Fh449700 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449756) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449757));
    vlTOPp->mkSam__DOT__y___05Fh464203 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh463950) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh463949));
    vlTOPp->mkSam__DOT__y___05Fh418127 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418183) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh418184));
    vlTOPp->mkSam__DOT__y___05Fh432630 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh432377) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh432376));
    vlTOPp->mkSam__DOT__y___05Fh39744 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39800) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh39801));
    vlTOPp->mkSam__DOT__y___05Fh54247 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh53994) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh53993));
    vlTOPp->mkSam__DOT__y___05Fh71440 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71496) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh71497));
    vlTOPp->mkSam__DOT__y___05Fh85943 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh85690) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh85689));
    vlTOPp->mkSam__DOT__y___05Fh102886 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102942) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh102943));
    vlTOPp->mkSam__DOT__y___05Fh117389 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh117136) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh117135));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6269 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323611) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323612));
    vlTOPp->mkSam__DOT__y___05Fh323857 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323612) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323611));
    vlTOPp->mkSam__DOT__y___05Fh338056 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh338114) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh338115));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5616 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292039) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh292040));
    vlTOPp->mkSam__DOT__y___05Fh292285 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh292040) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh292039));
    vlTOPp->mkSam__DOT__y___05Fh306484 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh306542) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh306543));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4963 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260418) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh260419));
    vlTOPp->mkSam__DOT__y___05Fh260664 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh260419) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh260418));
    vlTOPp->mkSam__DOT__y___05Fh274863 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274921) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274922));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4309 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228971) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228972));
    vlTOPp->mkSam__DOT__y___05Fh229217 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228972) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228971));
    vlTOPp->mkSam__DOT__y___05Fh243416 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh243474) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh243475));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3656 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197525) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh197526));
    vlTOPp->mkSam__DOT__y___05Fh197771 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh197526) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh197525));
    vlTOPp->mkSam__DOT__y___05Fh211970 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh212028) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh212029));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3003 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165953) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165954));
    vlTOPp->mkSam__DOT__y___05Fh166199 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165954) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165953));
    vlTOPp->mkSam__DOT__y___05Fh180398 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh180456) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh180457));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2350 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134332) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh134333));
    vlTOPp->mkSam__DOT__y___05Fh134578 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh134333) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh134332));
    vlTOPp->mkSam__DOT__y___05Fh148777 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148835) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148836));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10193 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512594) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512595));
    vlTOPp->mkSam__DOT__y___05Fh512840 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512595) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512594));
    vlTOPp->mkSam__DOT__y___05Fh527039 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh527097) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh527098));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9538 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481146) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh481147));
    vlTOPp->mkSam__DOT__y___05Fh481392 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh481147) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh481146));
    vlTOPp->mkSam__DOT__y___05Fh495591 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh495649) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh495650));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7576 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386504) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh386505));
    vlTOPp->mkSam__DOT__y___05Fh386750 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh386505) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh386504));
    vlTOPp->mkSam__DOT__y___05Fh400949 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh401007) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh401008));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6922 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355057) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh355058));
    vlTOPp->mkSam__DOT__y___05Fh355303 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh355058) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh355057));
    vlTOPp->mkSam__DOT__y___05Fh369502 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh369560) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh369561));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8884 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449699) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh449700));
    vlTOPp->mkSam__DOT__y___05Fh449945 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh449700) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh449699));
    vlTOPp->mkSam__DOT__y___05Fh464144 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh464202) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh464203));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8230 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418126) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh418127));
    vlTOPp->mkSam__DOT__y___05Fh418372 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh418127) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh418126));
    vlTOPp->mkSam__DOT__y___05Fh432571 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh432629) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh432630));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d390 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39743) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh39744));
    vlTOPp->mkSam__DOT__y___05Fh39989 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh39744) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh39743));
    vlTOPp->mkSam__DOT__y___05Fh54188 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh54246) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh54247));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1043 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71439) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh71440));
    vlTOPp->mkSam__DOT__y___05Fh71685 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh71440) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh71439));
    vlTOPp->mkSam__DOT__y___05Fh85884 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh85942) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh85943));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1696 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh102885) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh102886));
    vlTOPp->mkSam__DOT__y___05Fh103131 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh102886) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh102885));
    vlTOPp->mkSam__DOT__y___05Fh117330 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh117388) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh117389));
    vlTOPp->mkSam__DOT__y___05Fh323800 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323856) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh323857));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6660 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh338055) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh338056)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh337861) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh337862)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6659)));
    vlTOPp->mkSam__DOT__y___05Fh338309 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh338056) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh338055));
    vlTOPp->mkSam__DOT__y___05Fh292228 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292284) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh292285));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6007 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh306483) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh306484)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh306289) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh306290)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6006)));
    vlTOPp->mkSam__DOT__y___05Fh306737 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh306484) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh306483));
    vlTOPp->mkSam__DOT__y___05Fh260607 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260663) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh260664));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5354 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh274862) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh274863)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh274668) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh274669)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5353)));
    vlTOPp->mkSam__DOT__y___05Fh275116 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh274863) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh274862));
    vlTOPp->mkSam__DOT__y___05Fh229160 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229216) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh229217));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4700 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh243415) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh243416)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh243221) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh243222)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4699)));
    vlTOPp->mkSam__DOT__y___05Fh243669 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh243416) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh243415));
    vlTOPp->mkSam__DOT__y___05Fh197714 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197770) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh197771));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4047 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh211969) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh211970)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh211775) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh211776)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4046)));
    vlTOPp->mkSam__DOT__y___05Fh212223 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211970) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh211969));
    vlTOPp->mkSam__DOT__y___05Fh166142 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166198) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh166199));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3394 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh180397) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh180398)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh180203) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh180204)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3393)));
    vlTOPp->mkSam__DOT__y___05Fh180651 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh180398) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh180397));
    vlTOPp->mkSam__DOT__y___05Fh134521 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134577) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh134578));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2741 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh148776) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh148777)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh148582) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh148583)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2740)));
    vlTOPp->mkSam__DOT__y___05Fh149030 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh148777) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh148776));
    vlTOPp->mkSam__DOT__y___05Fh512783 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512839) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh512840));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10584 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh527038) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh527039)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh526844) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh526845)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10583)));
    vlTOPp->mkSam__DOT__y___05Fh527292 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh527039) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh527038));
    vlTOPp->mkSam__DOT__y___05Fh481335 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481391) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh481392));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9929 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh495590) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh495591)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh495396) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh495397)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9928)));
    vlTOPp->mkSam__DOT__y___05Fh495844 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh495591) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh495590));
    vlTOPp->mkSam__DOT__y___05Fh386693 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386749) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh386750));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7967 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh400948) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh400949)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh400754) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh400755)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7966)));
    vlTOPp->mkSam__DOT__y___05Fh401202 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh400949) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh400948));
    vlTOPp->mkSam__DOT__y___05Fh355246 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355302) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh355303));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7313 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh369501) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh369502)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh369307) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh369308)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7312)));
    vlTOPp->mkSam__DOT__y___05Fh369755 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh369502) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh369501));
    vlTOPp->mkSam__DOT__y___05Fh449888 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449944) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449945));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9275 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh464143) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh464144)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh463949) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh463950)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9274)));
    vlTOPp->mkSam__DOT__y___05Fh464397 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh464144) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh464143));
    vlTOPp->mkSam__DOT__y___05Fh418315 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418371) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh418372));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8621 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh432570) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh432571)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh432376) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh432377)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8620)));
    vlTOPp->mkSam__DOT__y___05Fh432824 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh432571) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh432570));
    vlTOPp->mkSam__DOT__y___05Fh39932 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39988) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh39989));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d781 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh54187) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh54188)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh53993) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh53994)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d780)));
    vlTOPp->mkSam__DOT__y___05Fh54441 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh54188) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh54187));
    vlTOPp->mkSam__DOT__y___05Fh71628 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71684) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh71685));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1434 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh85883) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh85884)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh85689) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh85690)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1433)));
    vlTOPp->mkSam__DOT__y___05Fh86137 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh85884) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh85883));
    vlTOPp->mkSam__DOT__y___05Fh103074 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103130) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh103131));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2087 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh117329) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh117330)) 
            << 0xdU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh117135) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh117136)) 
                         << 0xcU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2086)));
    vlTOPp->mkSam__DOT__y___05Fh117583 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh117330) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh117329));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6268 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323799) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323800));
    vlTOPp->mkSam__DOT__y___05Fh324045 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323800) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323799));
    vlTOPp->mkSam__DOT__y___05Fh338250 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh338308) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh338309));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5615 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292227) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh292228));
    vlTOPp->mkSam__DOT__y___05Fh292473 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh292228) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh292227));
    vlTOPp->mkSam__DOT__y___05Fh306678 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh306736) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh306737));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4962 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260606) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh260607));
    vlTOPp->mkSam__DOT__y___05Fh260852 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh260607) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh260606));
    vlTOPp->mkSam__DOT__y___05Fh275057 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh275115) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh275116));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4308 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229159) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh229160));
    vlTOPp->mkSam__DOT__y___05Fh229405 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh229160) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh229159));
    vlTOPp->mkSam__DOT__y___05Fh243610 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh243668) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh243669));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3655 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197713) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh197714));
    vlTOPp->mkSam__DOT__y___05Fh197959 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh197714) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh197713));
    vlTOPp->mkSam__DOT__y___05Fh212164 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh212222) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh212223));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3002 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166141) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh166142));
    vlTOPp->mkSam__DOT__y___05Fh166387 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh166142) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh166141));
    vlTOPp->mkSam__DOT__y___05Fh180592 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh180650) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh180651));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2349 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134520) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh134521));
    vlTOPp->mkSam__DOT__y___05Fh134766 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh134521) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh134520));
    vlTOPp->mkSam__DOT__y___05Fh148971 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh149029) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh149030));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10192 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512782) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512783));
    vlTOPp->mkSam__DOT__y___05Fh513028 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512783) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512782));
    vlTOPp->mkSam__DOT__y___05Fh527233 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh527291) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh527292));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9537 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481334) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh481335));
    vlTOPp->mkSam__DOT__y___05Fh481580 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh481335) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh481334));
    vlTOPp->mkSam__DOT__y___05Fh495785 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh495843) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh495844));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7575 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386692) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh386693));
    vlTOPp->mkSam__DOT__y___05Fh386938 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh386693) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh386692));
    vlTOPp->mkSam__DOT__y___05Fh401143 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh401201) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh401202));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6921 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355245) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh355246));
    vlTOPp->mkSam__DOT__y___05Fh355491 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh355246) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh355245));
    vlTOPp->mkSam__DOT__y___05Fh369696 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh369754) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh369755));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8883 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449887) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh449888));
    vlTOPp->mkSam__DOT__y___05Fh450133 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh449888) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh449887));
    vlTOPp->mkSam__DOT__y___05Fh464338 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh464396) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh464397));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8229 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418314) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh418315));
    vlTOPp->mkSam__DOT__y___05Fh418560 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh418315) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh418314));
    vlTOPp->mkSam__DOT__y___05Fh432765 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh432823) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh432824));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d389 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh39931) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh39932));
    vlTOPp->mkSam__DOT__y___05Fh40177 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh39932) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh39931));
    vlTOPp->mkSam__DOT__y___05Fh54382 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh54440) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh54441));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1042 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71627) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh71628));
    vlTOPp->mkSam__DOT__y___05Fh71873 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh71628) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh71627));
    vlTOPp->mkSam__DOT__y___05Fh86078 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh86136) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh86137));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1695 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103073) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh103074));
    vlTOPp->mkSam__DOT__y___05Fh103319 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh103074) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh103073));
    vlTOPp->mkSam__DOT__y___05Fh117524 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh117582) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh117583));
    vlTOPp->mkSam__DOT__y___05Fh323988 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324044) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh324045));
    vlTOPp->mkSam__DOT__y___05Fh338503 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh338250) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh338249));
    vlTOPp->mkSam__DOT__y___05Fh292416 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292472) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh292473));
    vlTOPp->mkSam__DOT__y___05Fh306931 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh306678) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh306677));
    vlTOPp->mkSam__DOT__y___05Fh260795 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260851) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh260852));
    vlTOPp->mkSam__DOT__y___05Fh275310 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh275057) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh275056));
    vlTOPp->mkSam__DOT__y___05Fh229348 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229404) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh229405));
    vlTOPp->mkSam__DOT__y___05Fh243863 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh243610) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh243609));
    vlTOPp->mkSam__DOT__y___05Fh197902 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197958) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh197959));
    vlTOPp->mkSam__DOT__y___05Fh212417 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh212164) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh212163));
    vlTOPp->mkSam__DOT__y___05Fh166330 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166386) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh166387));
    vlTOPp->mkSam__DOT__y___05Fh180845 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh180592) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh180591));
    vlTOPp->mkSam__DOT__y___05Fh134709 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134765) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh134766));
    vlTOPp->mkSam__DOT__y___05Fh149224 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh148971) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh148970));
    vlTOPp->mkSam__DOT__y___05Fh512971 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513027) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh513028));
    vlTOPp->mkSam__DOT__y___05Fh527486 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh527233) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh527232));
    vlTOPp->mkSam__DOT__y___05Fh481523 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481579) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh481580));
    vlTOPp->mkSam__DOT__y___05Fh496038 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh495785) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh495784));
    vlTOPp->mkSam__DOT__y___05Fh386881 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386937) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh386938));
    vlTOPp->mkSam__DOT__y___05Fh401396 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh401143) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh401142));
    vlTOPp->mkSam__DOT__y___05Fh355434 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355490) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh355491));
    vlTOPp->mkSam__DOT__y___05Fh369949 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh369696) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh369695));
    vlTOPp->mkSam__DOT__y___05Fh450076 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450132) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh450133));
    vlTOPp->mkSam__DOT__y___05Fh464591 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh464338) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh464337));
    vlTOPp->mkSam__DOT__y___05Fh418503 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418559) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh418560));
    vlTOPp->mkSam__DOT__y___05Fh433018 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh432765) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh432764));
    vlTOPp->mkSam__DOT__y___05Fh40120 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40176) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh40177));
    vlTOPp->mkSam__DOT__y___05Fh54635 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh54382) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh54381));
    vlTOPp->mkSam__DOT__y___05Fh71816 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71872) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh71873));
    vlTOPp->mkSam__DOT__y___05Fh86331 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh86078) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh86077));
    vlTOPp->mkSam__DOT__y___05Fh103262 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103318) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh103319));
    vlTOPp->mkSam__DOT__y___05Fh117777 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh117524) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh117523));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6267 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323987) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323988));
    vlTOPp->mkSam__DOT__y___05Fh324233 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323988) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323987));
    vlTOPp->mkSam__DOT__y___05Fh338444 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh338502) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh338503));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5614 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292415) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh292416));
    vlTOPp->mkSam__DOT__y___05Fh292661 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh292416) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh292415));
    vlTOPp->mkSam__DOT__y___05Fh306872 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh306930) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh306931));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4961 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260794) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh260795));
    vlTOPp->mkSam__DOT__y___05Fh261040 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh260795) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh260794));
    vlTOPp->mkSam__DOT__y___05Fh275251 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh275309) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh275310));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4307 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229347) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh229348));
    vlTOPp->mkSam__DOT__y___05Fh229593 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh229348) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh229347));
    vlTOPp->mkSam__DOT__y___05Fh243804 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh243862) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh243863));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3654 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197901) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh197902));
    vlTOPp->mkSam__DOT__y___05Fh198147 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh197902) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh197901));
    vlTOPp->mkSam__DOT__y___05Fh212358 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh212416) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh212417));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3001 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166329) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh166330));
    vlTOPp->mkSam__DOT__y___05Fh166575 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh166330) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh166329));
    vlTOPp->mkSam__DOT__y___05Fh180786 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh180844) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh180845));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2348 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134708) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh134709));
    vlTOPp->mkSam__DOT__y___05Fh134954 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh134709) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh134708));
    vlTOPp->mkSam__DOT__y___05Fh149165 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh149223) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh149224));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10191 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512970) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512971));
    vlTOPp->mkSam__DOT__y___05Fh513216 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512971) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512970));
    vlTOPp->mkSam__DOT__y___05Fh527427 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh527485) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh527486));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9536 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481522) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh481523));
    vlTOPp->mkSam__DOT__y___05Fh481768 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh481523) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh481522));
    vlTOPp->mkSam__DOT__y___05Fh495979 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh496037) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh496038));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7574 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386880) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh386881));
    vlTOPp->mkSam__DOT__y___05Fh387126 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh386881) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh386880));
    vlTOPp->mkSam__DOT__y___05Fh401337 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh401395) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh401396));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6920 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355433) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh355434));
    vlTOPp->mkSam__DOT__y___05Fh355679 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh355434) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh355433));
    vlTOPp->mkSam__DOT__y___05Fh369890 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh369948) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh369949));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8882 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450075) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh450076));
    vlTOPp->mkSam__DOT__y___05Fh450321 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh450076) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh450075));
    vlTOPp->mkSam__DOT__y___05Fh464532 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh464590) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh464591));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8228 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418502) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh418503));
    vlTOPp->mkSam__DOT__y___05Fh418748 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh418503) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh418502));
    vlTOPp->mkSam__DOT__y___05Fh432959 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh433017) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh433018));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d388 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40119) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh40120));
    vlTOPp->mkSam__DOT__y___05Fh40365 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh40120) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh40119));
    vlTOPp->mkSam__DOT__y___05Fh54576 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh54634) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh54635));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1041 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh71815) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh71816));
    vlTOPp->mkSam__DOT__y___05Fh72061 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh71816) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh71815));
    vlTOPp->mkSam__DOT__y___05Fh86272 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh86330) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh86331));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1694 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103261) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh103262));
    vlTOPp->mkSam__DOT__y___05Fh103507 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh103262) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh103261));
    vlTOPp->mkSam__DOT__y___05Fh117718 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh117776) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh117777));
    vlTOPp->mkSam__DOT__y___05Fh324176 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324232) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh324233));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6661 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh338443) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh338444)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh338249) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh338250)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6660)));
    vlTOPp->mkSam__DOT__y___05Fh338697 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh338444) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh338443));
    vlTOPp->mkSam__DOT__y___05Fh292604 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292660) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh292661));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6008 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh306871) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh306872)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh306677) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh306678)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6007)));
    vlTOPp->mkSam__DOT__y___05Fh307125 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh306872) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh306871));
    vlTOPp->mkSam__DOT__y___05Fh260983 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh261039) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh261040));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5355 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh275250) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh275251)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh275056) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh275057)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5354)));
    vlTOPp->mkSam__DOT__y___05Fh275504 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh275251) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh275250));
    vlTOPp->mkSam__DOT__y___05Fh229536 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229592) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh229593));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4701 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh243803) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh243804)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh243609) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh243610)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4700)));
    vlTOPp->mkSam__DOT__y___05Fh244057 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh243804) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh243803));
    vlTOPp->mkSam__DOT__y___05Fh198090 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh198146) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh198147));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4048 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh212357) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh212358)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh212163) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh212164)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4047)));
    vlTOPp->mkSam__DOT__y___05Fh212611 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh212358) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh212357));
    vlTOPp->mkSam__DOT__y___05Fh166518 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166574) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh166575));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3395 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh180785) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh180786)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh180591) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh180592)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3394)));
    vlTOPp->mkSam__DOT__y___05Fh181039 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh180786) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh180785));
    vlTOPp->mkSam__DOT__y___05Fh134897 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134953) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh134954));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2742 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh149164) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh149165)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh148970) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh148971)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2741)));
    vlTOPp->mkSam__DOT__y___05Fh149418 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh149165) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh149164));
    vlTOPp->mkSam__DOT__y___05Fh513159 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513215) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh513216));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10585 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh527426) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh527427)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh527232) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh527233)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10584)));
    vlTOPp->mkSam__DOT__y___05Fh527680 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh527427) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh527426));
    vlTOPp->mkSam__DOT__y___05Fh481711 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481767) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh481768));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9930 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh495978) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh495979)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh495784) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh495785)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9929)));
    vlTOPp->mkSam__DOT__y___05Fh496232 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh495979) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh495978));
    vlTOPp->mkSam__DOT__y___05Fh387069 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh387125) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh387126));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7968 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh401336) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh401337)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh401142) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh401143)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7967)));
    vlTOPp->mkSam__DOT__y___05Fh401590 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh401337) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh401336));
    vlTOPp->mkSam__DOT__y___05Fh355622 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355678) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh355679));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7314 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh369889) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh369890)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh369695) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh369696)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7313)));
    vlTOPp->mkSam__DOT__y___05Fh370143 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh369890) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh369889));
    vlTOPp->mkSam__DOT__y___05Fh450264 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450320) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh450321));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9276 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh464531) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh464532)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh464337) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh464338)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9275)));
    vlTOPp->mkSam__DOT__y___05Fh464785 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh464532) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh464531));
    vlTOPp->mkSam__DOT__y___05Fh418691 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418747) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh418748));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8622 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh432958) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh432959)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh432764) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh432765)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8621)));
    vlTOPp->mkSam__DOT__y___05Fh433212 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh432959) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh432958));
    vlTOPp->mkSam__DOT__y___05Fh40308 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40364) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh40365));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d782 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh54575) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh54576)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh54381) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh54382)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d781)));
    vlTOPp->mkSam__DOT__y___05Fh54829 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh54576) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh54575));
    vlTOPp->mkSam__DOT__y___05Fh72004 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh72060) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh72061));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1435 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh86271) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh86272)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh86077) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh86078)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1434)));
    vlTOPp->mkSam__DOT__y___05Fh86525 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh86272) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh86271));
    vlTOPp->mkSam__DOT__y___05Fh103450 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103506) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh103507));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2088 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh117717) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh117718)) 
            << 0xfU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh117523) 
                          ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh117524)) 
                         << 0xeU) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2087)));
    vlTOPp->mkSam__DOT__y___05Fh117971 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh117718) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh117717));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6266 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324175) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh324176));
    vlTOPp->mkSam__DOT__y___05Fh324421 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh324176) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh324175));
    vlTOPp->mkSam__DOT__y___05Fh338638 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh338696) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh338697));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5613 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292603) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh292604));
    vlTOPp->mkSam__DOT__y___05Fh292849 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh292604) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh292603));
    vlTOPp->mkSam__DOT__y___05Fh307066 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh307124) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh307125));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4960 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260982) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh260983));
    vlTOPp->mkSam__DOT__y___05Fh261228 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh260983) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh260982));
    vlTOPp->mkSam__DOT__y___05Fh275445 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh275503) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh275504));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4306 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229535) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh229536));
    vlTOPp->mkSam__DOT__y___05Fh229781 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh229536) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh229535));
    vlTOPp->mkSam__DOT__y___05Fh243998 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh244056) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh244057));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3653 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh198089) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh198090));
    vlTOPp->mkSam__DOT__y___05Fh198335 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh198090) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh198089));
    vlTOPp->mkSam__DOT__y___05Fh212552 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh212610) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh212611));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3000 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166517) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh166518));
    vlTOPp->mkSam__DOT__y___05Fh166763 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh166518) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh166517));
    vlTOPp->mkSam__DOT__y___05Fh180980 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh181038) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh181039));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2347 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134896) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh134897));
    vlTOPp->mkSam__DOT__y___05Fh135142 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh134897) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh134896));
    vlTOPp->mkSam__DOT__y___05Fh149359 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh149417) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh149418));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10190 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513158) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh513159));
    vlTOPp->mkSam__DOT__y___05Fh513404 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh513159) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh513158));
    vlTOPp->mkSam__DOT__y___05Fh527621 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh527679) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh527680));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9535 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481710) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh481711));
    vlTOPp->mkSam__DOT__y___05Fh481956 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh481711) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh481710));
    vlTOPp->mkSam__DOT__y___05Fh496173 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh496231) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh496232));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7573 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh387068) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh387069));
    vlTOPp->mkSam__DOT__y___05Fh387314 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh387069) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh387068));
    vlTOPp->mkSam__DOT__y___05Fh401531 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh401589) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh401590));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6919 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355621) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh355622));
    vlTOPp->mkSam__DOT__y___05Fh355867 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh355622) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh355621));
    vlTOPp->mkSam__DOT__y___05Fh370084 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh370142) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh370143));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8881 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450263) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh450264));
    vlTOPp->mkSam__DOT__y___05Fh450509 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh450264) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh450263));
    vlTOPp->mkSam__DOT__y___05Fh464726 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh464784) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh464785));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8227 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418690) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh418691));
    vlTOPp->mkSam__DOT__y___05Fh418936 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh418691) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh418690));
    vlTOPp->mkSam__DOT__y___05Fh433153 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh433211) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh433212));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d387 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40307) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh40308));
    vlTOPp->mkSam__DOT__y___05Fh40553 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh40308) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh40307));
    vlTOPp->mkSam__DOT__y___05Fh54770 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh54828) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh54829));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1040 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh72003) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh72004));
    vlTOPp->mkSam__DOT__y___05Fh72249 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh72004) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh72003));
    vlTOPp->mkSam__DOT__y___05Fh86466 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh86524) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh86525));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1693 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103449) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh103450));
    vlTOPp->mkSam__DOT__y___05Fh103695 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh103450) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh103449));
    vlTOPp->mkSam__DOT__y___05Fh117912 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh117970) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh117971));
    vlTOPp->mkSam__DOT__y___05Fh324364 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324420) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh324421));
    vlTOPp->mkSam__DOT__y___05Fh338891 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh338638) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh338637));
    vlTOPp->mkSam__DOT__y___05Fh292792 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292848) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh292849));
    vlTOPp->mkSam__DOT__y___05Fh307319 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh307066) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh307065));
    vlTOPp->mkSam__DOT__y___05Fh261171 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh261227) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh261228));
    vlTOPp->mkSam__DOT__y___05Fh275698 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh275445) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh275444));
    vlTOPp->mkSam__DOT__y___05Fh229724 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229780) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh229781));
    vlTOPp->mkSam__DOT__y___05Fh244251 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh243998) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh243997));
    vlTOPp->mkSam__DOT__y___05Fh198278 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh198334) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh198335));
    vlTOPp->mkSam__DOT__y___05Fh212805 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh212552) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh212551));
    vlTOPp->mkSam__DOT__y___05Fh166706 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166762) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh166763));
    vlTOPp->mkSam__DOT__y___05Fh181233 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh180980) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh180979));
    vlTOPp->mkSam__DOT__y___05Fh135085 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh135141) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh135142));
    vlTOPp->mkSam__DOT__y___05Fh149612 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh149359) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh149358));
    vlTOPp->mkSam__DOT__y___05Fh513347 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513403) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh513404));
    vlTOPp->mkSam__DOT__y___05Fh527874 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh527621) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh527620));
    vlTOPp->mkSam__DOT__y___05Fh481899 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481955) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh481956));
    vlTOPp->mkSam__DOT__y___05Fh496426 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh496173) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh496172));
    vlTOPp->mkSam__DOT__y___05Fh387257 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh387313) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh387314));
    vlTOPp->mkSam__DOT__y___05Fh401784 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh401531) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh401530));
    vlTOPp->mkSam__DOT__y___05Fh355810 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355866) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh355867));
    vlTOPp->mkSam__DOT__y___05Fh370337 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh370084) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh370083));
    vlTOPp->mkSam__DOT__y___05Fh450452 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450508) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh450509));
    vlTOPp->mkSam__DOT__y___05Fh464979 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh464726) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh464725));
    vlTOPp->mkSam__DOT__y___05Fh418879 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418935) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh418936));
    vlTOPp->mkSam__DOT__y___05Fh433406 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh433153) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh433152));
    vlTOPp->mkSam__DOT__y___05Fh40496 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40552) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh40553));
    vlTOPp->mkSam__DOT__y___05Fh55023 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh54770) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh54769));
    vlTOPp->mkSam__DOT__y___05Fh72192 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh72248) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh72249));
    vlTOPp->mkSam__DOT__y___05Fh86719 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh86466) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh86465));
    vlTOPp->mkSam__DOT__y___05Fh103638 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103694) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh103695));
    vlTOPp->mkSam__DOT__y___05Fh118165 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh117912) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh117911));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6265 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324363) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh324364));
    vlTOPp->mkSam__DOT__y___05Fh324609 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh324364) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh324363));
    vlTOPp->mkSam__DOT__y___05Fh338832 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh338890) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh338891));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5612 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292791) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh292792));
    vlTOPp->mkSam__DOT__y___05Fh293037 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh292792) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh292791));
    vlTOPp->mkSam__DOT__y___05Fh307260 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh307318) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh307319));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4959 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh261170) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh261171));
    vlTOPp->mkSam__DOT__y___05Fh261416 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh261171) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh261170));
    vlTOPp->mkSam__DOT__y___05Fh275639 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh275697) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh275698));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4305 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229723) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh229724));
    vlTOPp->mkSam__DOT__y___05Fh229969 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh229724) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh229723));
    vlTOPp->mkSam__DOT__y___05Fh244192 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh244250) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh244251));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3652 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh198277) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh198278));
    vlTOPp->mkSam__DOT__y___05Fh198523 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh198278) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh198277));
    vlTOPp->mkSam__DOT__y___05Fh212746 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh212804) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh212805));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2999 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166705) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh166706));
    vlTOPp->mkSam__DOT__y___05Fh166951 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh166706) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh166705));
    vlTOPp->mkSam__DOT__y___05Fh181174 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh181232) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh181233));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2346 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh135084) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh135085));
    vlTOPp->mkSam__DOT__y___05Fh135330 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh135085) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh135084));
    vlTOPp->mkSam__DOT__y___05Fh149553 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh149611) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh149612));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10189 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513346) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh513347));
    vlTOPp->mkSam__DOT__y___05Fh513592 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh513347) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh513346));
    vlTOPp->mkSam__DOT__y___05Fh527815 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh527873) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh527874));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9534 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh481898) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh481899));
    vlTOPp->mkSam__DOT__y___05Fh482144 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh481899) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh481898));
    vlTOPp->mkSam__DOT__y___05Fh496367 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh496425) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh496426));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7572 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh387256) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh387257));
    vlTOPp->mkSam__DOT__y___05Fh387502 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh387257) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh387256));
    vlTOPp->mkSam__DOT__y___05Fh401725 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh401783) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh401784));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6918 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355809) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh355810));
    vlTOPp->mkSam__DOT__y___05Fh356055 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh355810) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh355809));
    vlTOPp->mkSam__DOT__y___05Fh370278 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh370336) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh370337));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8880 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450451) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh450452));
    vlTOPp->mkSam__DOT__y___05Fh450697 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh450452) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh450451));
    vlTOPp->mkSam__DOT__y___05Fh464920 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh464978) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh464979));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8226 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh418878) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh418879));
    vlTOPp->mkSam__DOT__y___05Fh419124 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh418879) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh418878));
    vlTOPp->mkSam__DOT__y___05Fh433347 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh433405) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh433406));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d386 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40495) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh40496));
    vlTOPp->mkSam__DOT__y___05Fh40741 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh40496) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh40495));
    vlTOPp->mkSam__DOT__y___05Fh54964 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh55022) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh55023));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1039 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh72191) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh72192));
    vlTOPp->mkSam__DOT__y___05Fh72437 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh72192) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh72191));
    vlTOPp->mkSam__DOT__y___05Fh86660 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh86718) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh86719));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1692 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103637) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh103638));
    vlTOPp->mkSam__DOT__y___05Fh103883 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh103638) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh103637));
    vlTOPp->mkSam__DOT__y___05Fh118106 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh118164) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh118165));
    vlTOPp->mkSam__DOT__y___05Fh324552 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324608) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh324609));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6662 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh338831) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh338832)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh338637) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh338638)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6661)));
    vlTOPp->mkSam__DOT__y___05Fh339085 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh338832) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh338831));
    vlTOPp->mkSam__DOT__y___05Fh292980 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh293036) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh293037));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6009 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh307259) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh307260)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh307065) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh307066)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6008)));
    vlTOPp->mkSam__DOT__y___05Fh307513 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh307260) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh307259));
    vlTOPp->mkSam__DOT__y___05Fh261359 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh261415) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh261416));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5356 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh275638) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh275639)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh275444) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh275445)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5355)));
    vlTOPp->mkSam__DOT__y___05Fh275892 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh275639) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh275638));
    vlTOPp->mkSam__DOT__y___05Fh229912 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229968) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh229969));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4702 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh244191) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh244192)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh243997) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh243998)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4701)));
    vlTOPp->mkSam__DOT__y___05Fh244445 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh244192) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh244191));
    vlTOPp->mkSam__DOT__y___05Fh198466 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh198522) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh198523));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4049 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh212745) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh212746)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh212551) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh212552)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4048)));
    vlTOPp->mkSam__DOT__y___05Fh212999 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh212746) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh212745));
    vlTOPp->mkSam__DOT__y___05Fh166894 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166950) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh166951));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3396 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh181173) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh181174)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh180979) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh180980)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3395)));
    vlTOPp->mkSam__DOT__y___05Fh181427 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh181174) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh181173));
    vlTOPp->mkSam__DOT__y___05Fh135273 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh135329) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh135330));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2743 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh149552) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh149553)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh149358) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh149359)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2742)));
    vlTOPp->mkSam__DOT__y___05Fh149806 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh149553) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh149552));
    vlTOPp->mkSam__DOT__y___05Fh513535 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513591) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh513592));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10586 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh527814) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh527815)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh527620) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh527621)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10585)));
    vlTOPp->mkSam__DOT__y___05Fh528068 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh527815) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh527814));
    vlTOPp->mkSam__DOT__y___05Fh482087 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh482143) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh482144));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9931 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh496366) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh496367)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh496172) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh496173)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9930)));
    vlTOPp->mkSam__DOT__y___05Fh496620 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh496367) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh496366));
    vlTOPp->mkSam__DOT__y___05Fh387445 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh387501) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh387502));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7969 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh401724) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh401725)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh401530) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh401531)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7968)));
    vlTOPp->mkSam__DOT__y___05Fh401978 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh401725) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh401724));
    vlTOPp->mkSam__DOT__y___05Fh355998 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh356054) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh356055));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7315 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh370277) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh370278)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh370083) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh370084)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7314)));
    vlTOPp->mkSam__DOT__y___05Fh370531 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh370278) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh370277));
    vlTOPp->mkSam__DOT__y___05Fh450640 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450696) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh450697));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9277 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh464919) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh464920)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh464725) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh464726)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9276)));
    vlTOPp->mkSam__DOT__y___05Fh465173 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh464920) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh464919));
    vlTOPp->mkSam__DOT__y___05Fh419067 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh419123) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh419124));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8623 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh433346) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh433347)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh433152) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh433153)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8622)));
    vlTOPp->mkSam__DOT__y___05Fh433600 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh433347) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh433346));
    vlTOPp->mkSam__DOT__y___05Fh40684 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40740) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh40741));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d783 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh54963) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh54964)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh54769) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh54770)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d782)));
    vlTOPp->mkSam__DOT__y___05Fh55217 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh54964) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh54963));
    vlTOPp->mkSam__DOT__y___05Fh72380 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh72436) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh72437));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1436 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh86659) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh86660)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh86465) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh86466)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1435)));
    vlTOPp->mkSam__DOT__y___05Fh86913 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh86660) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh86659));
    vlTOPp->mkSam__DOT__y___05Fh103826 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103882) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh103883));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2089 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh118105) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh118106)) 
            << 0x11U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh117911) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh117912)) 
                          << 0x10U) | (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2088)));
    vlTOPp->mkSam__DOT__y___05Fh118359 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh118106) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh118105));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6263 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324551) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh324552));
    vlTOPp->mkSam__DOT__y___05Fh324797 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh324552) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh324551));
    vlTOPp->mkSam__DOT__y___05Fh339026 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh339084) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh339085));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5610 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh292979) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh292980));
    vlTOPp->mkSam__DOT__y___05Fh293225 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh292980) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh292979));
    vlTOPp->mkSam__DOT__y___05Fh307454 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh307512) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh307513));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4957 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh261358) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh261359));
    vlTOPp->mkSam__DOT__y___05Fh261604 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh261359) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh261358));
    vlTOPp->mkSam__DOT__y___05Fh275833 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh275891) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh275892));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4303 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh229911) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh229912));
    vlTOPp->mkSam__DOT__y___05Fh230157 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh229912) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh229911));
    vlTOPp->mkSam__DOT__y___05Fh244386 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh244444) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh244445));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3650 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh198465) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh198466));
    vlTOPp->mkSam__DOT__y___05Fh198711 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh198466) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh198465));
    vlTOPp->mkSam__DOT__y___05Fh212940 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh212998) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh212999));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2997 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh166893) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh166894));
    vlTOPp->mkSam__DOT__y___05Fh167139 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh166894) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh166893));
    vlTOPp->mkSam__DOT__y___05Fh181368 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh181426) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh181427));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2344 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh135272) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh135273));
    vlTOPp->mkSam__DOT__y___05Fh135518 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh135273) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh135272));
    vlTOPp->mkSam__DOT__y___05Fh149747 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh149805) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh149806));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10187 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513534) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh513535));
    vlTOPp->mkSam__DOT__y___05Fh513780 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh513535) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh513534));
    vlTOPp->mkSam__DOT__y___05Fh528009 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh528067) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh528068));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9532 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh482086) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh482087));
    vlTOPp->mkSam__DOT__y___05Fh482332 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh482087) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh482086));
    vlTOPp->mkSam__DOT__y___05Fh496561 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh496619) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh496620));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7570 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh387444) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh387445));
    vlTOPp->mkSam__DOT__y___05Fh387690 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh387445) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh387444));
    vlTOPp->mkSam__DOT__y___05Fh401919 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh401977) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh401978));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6916 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh355997) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh355998));
    vlTOPp->mkSam__DOT__y___05Fh356243 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh355998) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh355997));
    vlTOPp->mkSam__DOT__y___05Fh370472 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh370530) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh370531));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8878 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450639) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh450640));
    vlTOPp->mkSam__DOT__y___05Fh450885 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh450640) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh450639));
    vlTOPp->mkSam__DOT__y___05Fh465114 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh465172) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh465173));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8224 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh419066) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh419067));
    vlTOPp->mkSam__DOT__y___05Fh419312 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh419067) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh419066));
    vlTOPp->mkSam__DOT__y___05Fh433541 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh433599) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh433600));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d384 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40683) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh40684));
    vlTOPp->mkSam__DOT__y___05Fh40929 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh40684) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh40683));
    vlTOPp->mkSam__DOT__y___05Fh55158 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh55216) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh55217));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1037 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh72379) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh72380));
    vlTOPp->mkSam__DOT__y___05Fh72625 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh72380) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh72379));
    vlTOPp->mkSam__DOT__y___05Fh86854 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh86912) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh86913));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1690 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh103825) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh103826));
    vlTOPp->mkSam__DOT__y___05Fh104071 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh103826) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh103825));
    vlTOPp->mkSam__DOT__y___05Fh118300 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh118358) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh118359));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6248 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh324796) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh324797));
    vlTOPp->mkSam__DOT__y___05Fh339279 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh339026) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh339025));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5595 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh293224) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh293225));
    vlTOPp->mkSam__DOT__y___05Fh307707 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh307454) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh307453));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4942 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh261603) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh261604));
    vlTOPp->mkSam__DOT__y___05Fh276086 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh275833) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh275832));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4288 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh230156) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh230157));
    vlTOPp->mkSam__DOT__y___05Fh244639 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh244386) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh244385));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3635 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh198710) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh198711));
    vlTOPp->mkSam__DOT__y___05Fh213193 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh212940) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh212939));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2982 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh167138) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh167139));
    vlTOPp->mkSam__DOT__y___05Fh181621 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh181368) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh181367));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2329 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh135517) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh135518));
    vlTOPp->mkSam__DOT__y___05Fh150000 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh149747) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh149746));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10172 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh513779) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh513780));
    vlTOPp->mkSam__DOT__y___05Fh528262 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh528009) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh528008));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9517 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh482331) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh482332));
    vlTOPp->mkSam__DOT__y___05Fh496814 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh496561) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh496560));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7555 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh387689) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh387690));
    vlTOPp->mkSam__DOT__y___05Fh402172 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh401919) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh401918));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6901 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh356242) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh356243));
    vlTOPp->mkSam__DOT__y___05Fh370725 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh370472) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh370471));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8863 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh450884) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh450885));
    vlTOPp->mkSam__DOT__y___05Fh465367 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh465114) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh465113));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8209 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh419311) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh419312));
    vlTOPp->mkSam__DOT__y___05Fh433794 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh433541) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh433540));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d369 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh40928) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh40929));
    vlTOPp->mkSam__DOT__y___05Fh55411 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh55158) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh55157));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1022 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh72624) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh72625));
    vlTOPp->mkSam__DOT__y___05Fh87107 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh86854) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh86853));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1675 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh104070) 
           | (IData)(vlTOPp->mkSam__DOT__y___05Fh104071));
    vlTOPp->mkSam__DOT__y___05Fh118553 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh118300) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh118299));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6248) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh326213 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh326217;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025___05FETC___05F_d6309 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6263) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6265) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6266) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6267) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6268) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6269) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6270) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6271) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6272) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6273) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6274) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6275) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6276) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6277) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6278) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6279) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6280) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6281) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6282) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6283) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6284) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6285) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6286)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh326213 
            = vlTOPp->mkSam__DOT__result_exp___05Fh318552;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025___05FETC___05F_d6309 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6265) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6266) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6267) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6268) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6269) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6270) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6271) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6272) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6273) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6274) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6275) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6276) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6277) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6278) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6279) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6280) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6281) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6282) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6283) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6284) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6285) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6286) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x19350_BIT_0_XOR_x20309_BIT_0_THEN_1_ELSE_0___05Fq26)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh339220 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh339278) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh339279));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5595) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh294641 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh294645;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372___05FETC___05F_d5656 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5610) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5612) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5613) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5614) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5615) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5616) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5617) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5618) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5619) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5620) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5621) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5622) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5623) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5624) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5625) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5626) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5627) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5628) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5629) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5630) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5631) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5632) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5633)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh294641 
            = vlTOPp->mkSam__DOT__result_exp___05Fh286980;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372___05FETC___05F_d5656 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5612) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5613) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5614) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5615) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5616) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5617) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5618) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5619) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5620) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5621) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5622) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5623) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5624) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5625) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5626) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5627) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5628) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5629) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5630) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5631) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5632) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5633) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x87778_BIT_0_XOR_x88737_BIT_0_THEN_1_ELSE_0___05Fq25)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh307648 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh307706) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh307707));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4942) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh263020 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh263024;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719___05FETC___05F_d5003 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4957) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4959) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4960) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4961) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4962) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4963) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4964) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4965) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4966) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4967) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4968) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4969) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4970) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4971) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4972) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4973) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4974) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4975) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4976) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4977) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4978) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4979) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4980)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh263020 
            = vlTOPp->mkSam__DOT__result_exp___05Fh255359;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719___05FETC___05F_d5003 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4959) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4960) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4961) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4962) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4963) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4964) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4965) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4966) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4967) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4968) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4969) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4970) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4971) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4972) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4973) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4974) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4975) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4976) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4977) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4978) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4979) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4980) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x56157_BIT_0_XOR_x57116_BIT_0_THEN_1_ELSE_0___05Fq24)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh276027 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh276085) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh276086));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4288) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh231573 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh231577;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065___05FETC___05F_d4349 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4303) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4305) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4306) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4307) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4308) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4309) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4310) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4311) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4312) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4313) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4314) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4315) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4316) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4317) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4318) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4319) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4320) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4321) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4322) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4323) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4324) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4325) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4326)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh231573 
            = vlTOPp->mkSam__DOT__result_exp___05Fh223912;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065___05FETC___05F_d4349 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4305) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4306) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4307) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4308) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4309) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4310) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4311) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4312) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4313) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4314) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4315) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4316) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4317) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4318) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4319) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4320) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4321) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4322) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4323) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4324) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4325) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4326) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x24710_BIT_0_XOR_x25669_BIT_0_THEN_1_ELSE_0___05Fq23)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh244580 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh244638) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh244639));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3635) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh200127 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh200131;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412___05FETC___05F_d3696 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3650) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3652) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3653) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3654) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3655) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3656) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3657) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3658) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3659) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3660) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3661) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3662) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3663) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3664) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3665) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3666) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3667) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3668) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3669) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3670) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3671) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3672) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3673)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh200127 
            = vlTOPp->mkSam__DOT__result_exp___05Fh192466;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412___05FETC___05F_d3696 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3652) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3653) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3654) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3655) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3656) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3657) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3658) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3659) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3660) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3661) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3662) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3663) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3664) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3665) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3666) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3667) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3668) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3669) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3670) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3671) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3672) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3673) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x93264_BIT_0_XOR_x94223_BIT_0_THEN_1_ELSE_0___05Fq22)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh213134 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh213192) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh213193));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2982) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh168555 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh168559;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759___05FETC___05F_d3043 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2997) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2999) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3000) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3001) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3002) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3003) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3004) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3005) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3006) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3007) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3008) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3009) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3010) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3011) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3012) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3013) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3014) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3015) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3016) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3017) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3018) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3019) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3020)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh168555 
            = vlTOPp->mkSam__DOT__result_exp___05Fh160894;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759___05FETC___05F_d3043 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2999) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3000) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3001) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3002) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3003) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3004) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3005) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3006) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3007) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3008) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3009) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3010) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3011) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3012) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3013) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3014) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3015) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3016) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3017) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3018) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3019) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3020) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x61692_BIT_0_XOR_x62651_BIT_0_THEN_1_ELSE_0___05Fq21)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh181562 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh181620) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh181621));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2329) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh136934 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh136938;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106___05FETC___05F_d2390 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2344) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2346) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2347) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2348) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2349) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2350) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2351) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2352) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2353) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2354) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2355) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2356) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2357) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2358) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2359) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2360) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2361) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2362) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2363) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2364) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2365) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2366) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2367)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh136934 
            = vlTOPp->mkSam__DOT__result_exp___05Fh129273;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106___05FETC___05F_d2390 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2346) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2347) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2348) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2349) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2350) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2351) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2352) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2353) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2354) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2355) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2356) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2357) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2358) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2359) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2360) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2361) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2362) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2363) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2364) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2365) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2366) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2367) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x30071_BIT_0_XOR_x31030_BIT_0_THEN_1_ELSE_0___05Fq20)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh149941 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh149999) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh150000));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10172) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh515196 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh515200;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949___05FETC___05F_d10233 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10187) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10189) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10190) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10191) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10192) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10193) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10194) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10195) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10196) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10197) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10198) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10199) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10200) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10201) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10202) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10203) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10204) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10205) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10206) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10207) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10208) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10209) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10210)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh515196 
            = vlTOPp->mkSam__DOT__result_exp___05Fh507535;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949___05FETC___05F_d10233 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10189) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10190) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10191) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10192) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10193) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10194) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10195) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10196) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10197) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10198) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10199) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10200) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10201) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10202) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10203) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10204) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10205) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10206) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10207) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10208) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10209) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10210) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x08333_BIT_0_XOR_x09292_BIT_0_THEN_1_ELSE_0___05Fq32)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh528203 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh528261) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh528262));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9517) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh483748 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh483752;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294___05FETC___05F_d9578 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9532) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9534) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9535) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9536) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9537) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9538) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9539) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9540) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9541) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9542) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9543) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9544) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9545) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9546) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9547) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9548) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9549) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9550) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9551) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9552) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9553) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9554) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9555)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh483748 
            = vlTOPp->mkSam__DOT__result_exp___05Fh476087;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294___05FETC___05F_d9578 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9534) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9535) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9536) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9537) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9538) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9539) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9540) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9541) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9542) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9543) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9544) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9545) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9546) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9547) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9548) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9549) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9550) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9551) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9552) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9553) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9554) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9555) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x76885_BIT_0_XOR_x77844_BIT_0_THEN_1_ELSE_0___05Fq31)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh496755 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh496813) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh496814));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7555) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh389106 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh389110;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332___05FETC___05F_d7616 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7570) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7572) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7573) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7574) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7575) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7576) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7577) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7578) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7579) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7580) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7581) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7582) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7583) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7584) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7585) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7586) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7587) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7588) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7589) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7590) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7591) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7592) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7593)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh389106 
            = vlTOPp->mkSam__DOT__result_exp___05Fh381445;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332___05FETC___05F_d7616 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7572) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7573) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7574) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7575) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7576) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7577) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7578) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7579) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7580) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7581) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7582) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7583) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7584) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7585) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7586) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7587) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7588) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7589) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7590) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7591) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7592) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7593) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x82243_BIT_0_XOR_x83202_BIT_0_THEN_1_ELSE_0___05Fq28)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh402113 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh402171) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh402172));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6901) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh357659 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh357663;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678___05FETC___05F_d6962 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6916) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6918) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6919) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6920) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6921) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6922) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6923) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6924) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6925) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6926) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6927) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6928) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6929) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6930) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6931) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6932) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6933) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6934) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6935) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6936) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6937) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6938) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6939)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh357659 
            = vlTOPp->mkSam__DOT__result_exp___05Fh349998;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678___05FETC___05F_d6962 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6918) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6919) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6920) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6921) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6922) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6923) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6924) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6925) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6926) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6927) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6928) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6929) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6930) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6931) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6932) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6933) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6934) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6935) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6936) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6937) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6938) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6939) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x50796_BIT_0_XOR_x51755_BIT_0_THEN_1_ELSE_0___05Fq27)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh370666 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh370724) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh370725));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8863) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh452301 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh452305;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640___05FETC___05F_d8924 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8878) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8880) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8881) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8882) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8883) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8884) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8885) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8886) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8887) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8888) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8889) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8890) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8891) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8892) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8893) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8894) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8895) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8896) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8897) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8898) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8899) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8900) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8901)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh452301 
            = vlTOPp->mkSam__DOT__result_exp___05Fh444640;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640___05FETC___05F_d8924 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8880) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8881) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8882) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8883) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8884) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8885) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8886) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8887) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8888) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8889) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8890) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8891) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8892) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8893) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8894) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8895) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8896) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8897) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8898) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8899) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8900) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8901) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x45438_BIT_0_XOR_x46397_BIT_0_THEN_1_ELSE_0___05Fq30)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh465308 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh465366) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh465367));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8209) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh420728 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh420732;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986___05FETC___05F_d8270 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8224) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8226) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8227) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8228) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8229) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8230) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8231) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8232) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8233) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8234) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8235) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8236) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8237) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8238) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8239) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8240) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8241) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8242) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8243) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8244) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8245) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8246) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8247)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh420728 
            = vlTOPp->mkSam__DOT__result_exp___05Fh413067;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986___05FETC___05F_d8270 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8226) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8227) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8228) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8229) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8230) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8231) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8232) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8233) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8234) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8235) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8236) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8237) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8238) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8239) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8240) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8241) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8242) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8243) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8244) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8245) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8246) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8247) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x13865_BIT_0_XOR_x14824_BIT_0_THEN_1_ELSE_0___05Fq29)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh433735 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh433793) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh433794));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d369) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh42345 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh42349;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_TH_ETC___05F_d430 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d384) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d386) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d387) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d388) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d389) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d390) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d391) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d392) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d393) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d394) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d395) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d396) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d397) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d398) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d399) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d400) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d401) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d402) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d403) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d404) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d405) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d406) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d407)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh42345 
            = vlTOPp->mkSam__DOT__result_exp___05Fh34684;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_TH_ETC___05F_d430 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d386) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d387) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d388) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d389) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d390) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d391) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d392) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d393) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d394) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d395) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d396) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d397) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d398) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d399) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d400) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d401) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d402) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d403) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d404) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d405) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d406) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d407) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x5482_BIT_0_XOR_x6441_BIT_0_THEN_1_ELSE_0___05Fq18)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh55352 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh55410) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh55411));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1022) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh74041 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh74045;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_TH_ETC___05F_d1083 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1037) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1039) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1040) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1041) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1042) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1043) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1044) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1045) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1046) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1047) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1048) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1049) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1050) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1051) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1052) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1053) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1054) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1055) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1056) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1057) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1058) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1059) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1060)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh74041 
            = vlTOPp->mkSam__DOT__result_exp___05Fh66380;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_TH_ETC___05F_d1083 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1039) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1040) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1041) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1042) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1043) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1044) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1045) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1046) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1047) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1048) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1049) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1050) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1051) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1052) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1053) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1054) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1055) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1056) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1057) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1058) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1059) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1060) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x7178_BIT_0_XOR_x8137_BIT_0_THEN_1_ELSE_0___05Fq17)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh87048 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh87106) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh87107));
    if (vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1675) {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh105487 
            = vlTOPp->mkSam__DOT__result_exp___05F_1___05Fh105491;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452___05FETC___05F_d1736 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1690) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1692) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1693) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1694) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1695) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1696) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1697) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1698) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1699) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1700) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1701) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1702) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1703) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1704) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1705) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1706) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1707) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1708) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1709) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1710) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1711) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1712) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1713)))))))))))))))))))))));
    } else {
        vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh105487 
            = vlTOPp->mkSam__DOT__result_exp___05Fh97826;
        vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452___05FETC___05F_d1736 
            = (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1692) 
                << 0x16U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1693) 
                              << 0x15U) | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1694) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1695) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1696) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1697) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1698) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1699) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1700) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1701) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1702) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1703) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1704) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1705) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1706) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1707) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1708) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1709) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1710) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1711) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1712) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1713) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkSam__DOT__IF_x8624_BIT_0_XOR_x9583_BIT_0_THEN_1_ELSE_0___05Fq19)))))))))))))))))))))));
    }
    vlTOPp->mkSam__DOT__y___05Fh118494 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh118552) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh118553));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh318560 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6248) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6263)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025___05FETC___05F_d6309);
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6663 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh339219) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh339220)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh339025) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh339026)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6662));
    vlTOPp->mkSam__DOT__y___05Fh339473 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh339220) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh339219));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh286988 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5595) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5610)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372___05FETC___05F_d5656);
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6010 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh307647) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh307648)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh307453) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh307454)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6009));
    vlTOPp->mkSam__DOT__y___05Fh307901 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh307648) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh307647));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh255367 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4942) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4957)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719___05FETC___05F_d5003);
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5357 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh276026) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh276027)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh275832) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh275833)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5356));
    vlTOPp->mkSam__DOT__y___05Fh276280 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh276027) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh276026));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh223920 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4288) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4303)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065___05FETC___05F_d4349);
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4703 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh244579) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh244580)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh244385) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh244386)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4702));
    vlTOPp->mkSam__DOT__y___05Fh244833 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh244580) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh244579));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh192474 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3635) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3650)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412___05FETC___05F_d3696);
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4050 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh213133) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh213134)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh212939) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh212940)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4049));
    vlTOPp->mkSam__DOT__y___05Fh213387 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh213134) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh213133));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh160902 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2982) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2997)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759___05FETC___05F_d3043);
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3397 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh181561) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh181562)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh181367) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh181368)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3396));
    vlTOPp->mkSam__DOT__y___05Fh181815 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh181562) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh181561));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh129281 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2329) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2344)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106___05FETC___05F_d2390);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2744 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh149940) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh149941)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh149746) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh149747)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2743));
    vlTOPp->mkSam__DOT__y___05Fh150194 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh149941) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh149940));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh507543 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10172) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10187)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949___05FETC___05F_d10233);
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10587 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh528202) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh528203)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh528008) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh528009)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10586));
    vlTOPp->mkSam__DOT__y___05Fh528456 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh528203) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh528202));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh476095 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9517) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9532)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294___05FETC___05F_d9578);
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9932 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh496754) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh496755)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh496560) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh496561)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9931));
    vlTOPp->mkSam__DOT__y___05Fh497008 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh496755) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh496754));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh381453 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7555) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7570)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332___05FETC___05F_d7616);
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7970 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh402112) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh402113)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh401918) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh401919)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7969));
    vlTOPp->mkSam__DOT__y___05Fh402366 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh402113) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh402112));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh350006 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6901) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6916)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678___05FETC___05F_d6962);
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7316 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh370665) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh370666)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh370471) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh370472)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7315));
    vlTOPp->mkSam__DOT__y___05Fh370919 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh370666) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh370665));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh444648 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8863) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8878)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640___05FETC___05F_d8924);
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9278 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh465307) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh465308)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh465113) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh465114)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9277));
    vlTOPp->mkSam__DOT__y___05Fh465561 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh465308) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh465307));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh413075 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8209) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8224)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986___05FETC___05F_d8270);
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8624 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh433734) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh433735)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh433540) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh433541)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8623));
    vlTOPp->mkSam__DOT__y___05Fh433988 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh433735) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh433734));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh34692 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d369) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d384)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_TH_ETC___05F_d430);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d784 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh55351) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh55352)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh55157) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh55158)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d783));
    vlTOPp->mkSam__DOT__y___05Fh55605 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh55352) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh55351));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh66388 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1022) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1037)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_TH_ETC___05F_d1083);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1437 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh87047) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh87048)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh86853) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh86854)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1436));
    vlTOPp->mkSam__DOT__y___05Fh87301 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh87048) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh87047));
    vlTOPp->mkSam__DOT__result_mant_aligned___05Fh97834 
        = ((((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1675) 
             | (IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1690)) 
            << 0x17U) | vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452___05FETC___05F_d1736);
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2090 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh118493) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh118494)) 
            << 0x13U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh118299) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh118300)) 
                          << 0x12U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2089));
    vlTOPp->mkSam__DOT__y___05Fh118747 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh118494) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh118493));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh326311 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh318560));
    vlTOPp->mkSam__DOT__y___05Fh339414 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh339472) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh339473));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh294739 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh286988));
    vlTOPp->mkSam__DOT__y___05Fh307842 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh307900) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh307901));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh263118 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh255367));
    vlTOPp->mkSam__DOT__y___05Fh276221 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh276279) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh276280));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh231671 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh223920));
    vlTOPp->mkSam__DOT__y___05Fh244774 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh244832) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh244833));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh200225 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh192474));
    vlTOPp->mkSam__DOT__y___05Fh213328 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh213386) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh213387));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh168653 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh160902));
    vlTOPp->mkSam__DOT__y___05Fh181756 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh181814) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh181815));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh137032 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh129281));
    vlTOPp->mkSam__DOT__y___05Fh150135 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh150193) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh150194));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh515294 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh507543));
    vlTOPp->mkSam__DOT__y___05Fh528397 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh528455) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh528456));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh483846 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh476095));
    vlTOPp->mkSam__DOT__y___05Fh496949 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh497007) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh497008));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh389204 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh381453));
    vlTOPp->mkSam__DOT__y___05Fh402307 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh402365) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh402366));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh357757 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh350006));
    vlTOPp->mkSam__DOT__y___05Fh370860 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh370918) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh370919));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh452399 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh444648));
    vlTOPp->mkSam__DOT__y___05Fh465502 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh465560) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh465561));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh420826 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh413075));
    vlTOPp->mkSam__DOT__y___05Fh433929 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh433987) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh433988));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh42443 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh34692));
    vlTOPp->mkSam__DOT__y___05Fh55546 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh55604) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh55605));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh74139 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh66388));
    vlTOPp->mkSam__DOT__y___05Fh87242 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh87300) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh87301));
    vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh105585 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkSam__DOT__result_mant_aligned___05Fh97834));
    vlTOPp->mkSam__DOT__y___05Fh118688 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh118746) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh118747));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_0_ETC___05F_d6312 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6248)
                   ? vlTOPp->mkSam__DOT__IF_x19350_BIT_0_XOR_x20309_BIT_0_THEN_1_ELSE_0___05Fq26
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh320311)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh326311
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh318560);
    vlTOPp->mkSam__DOT__y___05Fh339667 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh339414) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh339413));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_3_ETC___05F_d5659 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5595)
                   ? vlTOPp->mkSam__DOT__IF_x87778_BIT_0_XOR_x88737_BIT_0_THEN_1_ELSE_0___05Fq25
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh288739)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh294739
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh286988);
    vlTOPp->mkSam__DOT__y___05Fh308095 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh307842) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh307841));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_7_ETC___05F_d5006 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4942)
                   ? vlTOPp->mkSam__DOT__IF_x56157_BIT_0_XOR_x57116_BIT_0_THEN_1_ELSE_0___05Fq24
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh257118)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh263118
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh255367);
    vlTOPp->mkSam__DOT__y___05Fh276474 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh276221) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh276220));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_0_ETC___05F_d4352 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4288)
                   ? vlTOPp->mkSam__DOT__IF_x24710_BIT_0_XOR_x25669_BIT_0_THEN_1_ELSE_0___05Fq23
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh225671)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh231671
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh223920);
    vlTOPp->mkSam__DOT__y___05Fh245027 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh244774) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh244773));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_4_ETC___05F_d3699 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3635)
                   ? vlTOPp->mkSam__DOT__IF_x93264_BIT_0_XOR_x94223_BIT_0_THEN_1_ELSE_0___05Fq22
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh194225)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh200225
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh192474);
    vlTOPp->mkSam__DOT__y___05Fh213581 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh213328) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh213327));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_7_ETC___05F_d3046 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d2982)
                   ? vlTOPp->mkSam__DOT__IF_x61692_BIT_0_XOR_x62651_BIT_0_THEN_1_ELSE_0___05Fq21
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh162653)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh168653
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh160902);
    vlTOPp->mkSam__DOT__y___05Fh182009 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh181756) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh181755));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_1_ETC___05F_d2393 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2329)
                   ? vlTOPp->mkSam__DOT__IF_x30071_BIT_0_XOR_x31030_BIT_0_THEN_1_ELSE_0___05Fq20
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh131032)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh137032
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh129281);
    vlTOPp->mkSam__DOT__y___05Fh150388 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh150135) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh150134));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_9_ETC___05F_d10236 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10172)
                   ? vlTOPp->mkSam__DOT__IF_x08333_BIT_0_XOR_x09292_BIT_0_THEN_1_ELSE_0___05Fq32
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh509294)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh515294
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh507543);
    vlTOPp->mkSam__DOT__y___05Fh528650 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh528397) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh528396));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_2_ETC___05F_d9581 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9517)
                   ? vlTOPp->mkSam__DOT__IF_x76885_BIT_0_XOR_x77844_BIT_0_THEN_1_ELSE_0___05Fq31
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh477846)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh483846
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh476095);
    vlTOPp->mkSam__DOT__y___05Fh497202 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh496949) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh496948));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_3_ETC___05F_d7619 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7555)
                   ? vlTOPp->mkSam__DOT__IF_x82243_BIT_0_XOR_x83202_BIT_0_THEN_1_ELSE_0___05Fq28
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh383204)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh389204
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh381453);
    vlTOPp->mkSam__DOT__y___05Fh402560 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh402307) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh402306));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_6_ETC___05F_d6965 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6901)
                   ? vlTOPp->mkSam__DOT__IF_x50796_BIT_0_XOR_x51755_BIT_0_THEN_1_ELSE_0___05Fq27
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh351757)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh357757
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh350006);
    vlTOPp->mkSam__DOT__y___05Fh371113 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh370860) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh370859));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_6_ETC___05F_d8927 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8863)
                   ? vlTOPp->mkSam__DOT__IF_x45438_BIT_0_XOR_x46397_BIT_0_THEN_1_ELSE_0___05Fq30
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh446399)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh452399
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh444648);
    vlTOPp->mkSam__DOT__y___05Fh465755 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh465502) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh465501));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_9_ETC___05F_d8273 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8209)
                   ? vlTOPp->mkSam__DOT__IF_x13865_BIT_0_XOR_x14824_BIT_0_THEN_1_ELSE_0___05Fq29
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh414826)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh420826
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh413075);
    vlTOPp->mkSam__DOT__y___05Fh434182 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh433929) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh433928));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_ETC___05F_d433 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d369)
                   ? vlTOPp->mkSam__DOT__IF_x5482_BIT_0_XOR_x6441_BIT_0_THEN_1_ELSE_0___05Fq18
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh36443)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh42443
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh34692);
    vlTOPp->mkSam__DOT__y___05Fh55799 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh55546) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh55545));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_ETC___05F_d1086 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1022)
                   ? vlTOPp->mkSam__DOT__IF_x7178_BIT_0_XOR_x8137_BIT_0_THEN_1_ELSE_0___05Fq17
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh68139)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh74139
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh66388);
    vlTOPp->mkSam__DOT__y___05Fh87495 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh87242) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh87241));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_4_ETC___05F_d1739 
        = ((1U & ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1675)
                   ? vlTOPp->mkSam__DOT__IF_x8624_BIT_0_XOR_x9583_BIT_0_THEN_1_ELSE_0___05Fq19
                   : (IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh99585)))
            ? vlTOPp->mkSam__DOT__result_mant_aligned___05F_1___05Fh105585
            : vlTOPp->mkSam__DOT__result_mant_aligned___05Fh97834);
    vlTOPp->mkSam__DOT__y___05Fh118941 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh118688) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh118687));
    vlTOPp->mkSam__DOT__x___05Fh318514 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh326213) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_0_ETC___05F_d6312)));
    vlTOPp->mkSam__DOT__y___05Fh339608 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh339666) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh339667));
    vlTOPp->mkSam__DOT__x___05Fh286942 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh294641) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_3_ETC___05F_d5659)));
    vlTOPp->mkSam__DOT__y___05Fh308036 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh308094) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh308095));
    vlTOPp->mkSam__DOT__x___05Fh255321 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh263020) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_7_ETC___05F_d5006)));
    vlTOPp->mkSam__DOT__y___05Fh276415 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh276473) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh276474));
    vlTOPp->mkSam__DOT__x___05Fh223874 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh231573) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_0_ETC___05F_d4352)));
    vlTOPp->mkSam__DOT__y___05Fh244968 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh245026) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh245027));
    vlTOPp->mkSam__DOT__x___05Fh192428 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh200127) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_4_ETC___05F_d3699)));
    vlTOPp->mkSam__DOT__y___05Fh213522 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh213580) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh213581));
    vlTOPp->mkSam__DOT__x___05Fh160856 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh168555) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_7_ETC___05F_d3046)));
    vlTOPp->mkSam__DOT__y___05Fh181950 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh182008) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh182009));
    vlTOPp->mkSam__DOT__x___05Fh129235 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh136934) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_1_ETC___05F_d2393)));
    vlTOPp->mkSam__DOT__y___05Fh150329 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh150387) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh150388));
    vlTOPp->mkSam__DOT__x___05Fh507497 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh515196) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_9_ETC___05F_d10236)));
    vlTOPp->mkSam__DOT__y___05Fh528591 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh528649) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh528650));
    vlTOPp->mkSam__DOT__x___05Fh476049 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh483748) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_2_ETC___05F_d9581)));
    vlTOPp->mkSam__DOT__y___05Fh497143 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh497201) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh497202));
    vlTOPp->mkSam__DOT__x___05Fh381407 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh389106) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_3_ETC___05F_d7619)));
    vlTOPp->mkSam__DOT__y___05Fh402501 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh402559) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh402560));
    vlTOPp->mkSam__DOT__x___05Fh349960 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh357659) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_6_ETC___05F_d6965)));
    vlTOPp->mkSam__DOT__y___05Fh371054 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh371112) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh371113));
    vlTOPp->mkSam__DOT__x___05Fh444602 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh452301) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_6_ETC___05F_d8927)));
    vlTOPp->mkSam__DOT__y___05Fh465696 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh465754) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh465755));
    vlTOPp->mkSam__DOT__x___05Fh413029 = ((0x80000000U 
                                           & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b)) 
                                              << 0x10U)) 
                                          | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh420728) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_9_ETC___05F_d8273)));
    vlTOPp->mkSam__DOT__y___05Fh434123 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh434181) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh434182));
    vlTOPp->mkSam__DOT__x___05Fh34646 = ((0x80000000U 
                                          & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                                              ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b)) 
                                             << 0x10U)) 
                                         | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh42345) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_ETC___05F_d433)));
    vlTOPp->mkSam__DOT__y___05Fh55740 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh55798) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh55799));
    vlTOPp->mkSam__DOT__x___05Fh66342 = ((0x80000000U 
                                          & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                                              ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b)) 
                                             << 0x10U)) 
                                         | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh74041) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_ETC___05F_d1086)));
    vlTOPp->mkSam__DOT__y___05Fh87436 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh87494) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh87495));
    vlTOPp->mkSam__DOT__x___05Fh97788 = ((0x80000000U 
                                          & (((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                                              ^ (IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b)) 
                                             << 0x10U)) 
                                         | (((IData)(vlTOPp->mkSam__DOT___theResult___05F___05F_2_fst___05Fh105487) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlTOPp->mkSam__DOT__IF_IF_IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_4_ETC___05F_d1739)));
    vlTOPp->mkSam__DOT__y___05Fh118882 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh118940) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh118941));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6664 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh339607) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh339608)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh339413) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh339414)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6663));
    vlTOPp->mkSam__DOT__y___05Fh339861 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh339608) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh339607));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6011 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh308035) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh308036)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh307841) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh307842)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6010));
    vlTOPp->mkSam__DOT__y___05Fh308289 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh308036) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh308035));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5358 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh276414) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh276415)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh276220) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh276221)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5357));
    vlTOPp->mkSam__DOT__y___05Fh276668 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh276415) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh276414));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4704 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh244967) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh244968)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh244773) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh244774)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4703));
    vlTOPp->mkSam__DOT__y___05Fh245221 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh244968) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh244967));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4051 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh213521) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh213522)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh213327) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh213328)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4050));
    vlTOPp->mkSam__DOT__y___05Fh213775 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh213522) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh213521));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3398 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh181949) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh181950)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh181755) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh181756)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3397));
    vlTOPp->mkSam__DOT__y___05Fh182203 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh181950) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh181949));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2745 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh150328) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh150329)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh150134) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh150135)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2744));
    vlTOPp->mkSam__DOT__y___05Fh150582 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh150329) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh150328));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10588 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh528590) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh528591)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh528396) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh528397)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10587));
    vlTOPp->mkSam__DOT__y___05Fh528844 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh528591) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh528590));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9933 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh497142) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh497143)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh496948) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh496949)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9932));
    vlTOPp->mkSam__DOT__y___05Fh497396 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh497143) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh497142));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7971 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh402500) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh402501)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh402306) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh402307)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7970));
    vlTOPp->mkSam__DOT__y___05Fh402754 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh402501) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh402500));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7317 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh371053) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh371054)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh370859) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh370860)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7316));
    vlTOPp->mkSam__DOT__y___05Fh371307 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh371054) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh371053));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9279 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh465695) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh465696)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh465501) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh465502)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9278));
    vlTOPp->mkSam__DOT__y___05Fh465949 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh465696) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh465695));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8625 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh434122) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh434123)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh433928) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh433929)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8624));
    vlTOPp->mkSam__DOT__y___05Fh434376 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh434123) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh434122));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d785 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh55739) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh55740)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh55545) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh55546)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d784));
    vlTOPp->mkSam__DOT__y___05Fh55993 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh55740) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh55739));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1438 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh87435) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh87436)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh87241) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh87242)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1437));
    vlTOPp->mkSam__DOT__y___05Fh87689 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh87436) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh87435));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2091 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh118881) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh118882)) 
            << 0x15U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh118687) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh118688)) 
                          << 0x14U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2090));
    vlTOPp->mkSam__DOT__y___05Fh119135 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh118882) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh118881));
    vlTOPp->mkSam__DOT__y___05Fh339802 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh339860) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh339861));
    vlTOPp->mkSam__DOT__y___05Fh308230 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh308288) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh308289));
    vlTOPp->mkSam__DOT__y___05Fh276609 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh276667) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh276668));
    vlTOPp->mkSam__DOT__y___05Fh245162 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh245220) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh245221));
    vlTOPp->mkSam__DOT__y___05Fh213716 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh213774) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh213775));
    vlTOPp->mkSam__DOT__y___05Fh182144 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh182202) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh182203));
    vlTOPp->mkSam__DOT__y___05Fh150523 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh150581) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh150582));
    vlTOPp->mkSam__DOT__y___05Fh528785 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh528843) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh528844));
    vlTOPp->mkSam__DOT__y___05Fh497337 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh497395) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh497396));
    vlTOPp->mkSam__DOT__y___05Fh402695 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh402753) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh402754));
    vlTOPp->mkSam__DOT__y___05Fh371248 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh371306) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh371307));
    vlTOPp->mkSam__DOT__y___05Fh465890 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh465948) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh465949));
    vlTOPp->mkSam__DOT__y___05Fh434317 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh434375) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh434376));
    vlTOPp->mkSam__DOT__y___05Fh55934 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh55992) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh55993));
    vlTOPp->mkSam__DOT__y___05Fh87630 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh87688) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh87689));
    vlTOPp->mkSam__DOT__y___05Fh119076 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh119134) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh119135));
    vlTOPp->mkSam__DOT__y___05Fh340055 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh339802) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh339801));
    vlTOPp->mkSam__DOT__y___05Fh308483 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh308230) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh308229));
    vlTOPp->mkSam__DOT__y___05Fh276862 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh276609) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh276608));
    vlTOPp->mkSam__DOT__y___05Fh245415 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh245162) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh245161));
    vlTOPp->mkSam__DOT__y___05Fh213969 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh213716) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh213715));
    vlTOPp->mkSam__DOT__y___05Fh182397 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh182144) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh182143));
    vlTOPp->mkSam__DOT__y___05Fh150776 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh150523) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh150522));
    vlTOPp->mkSam__DOT__y___05Fh529038 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh528785) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh528784));
    vlTOPp->mkSam__DOT__y___05Fh497590 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh497337) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh497336));
    vlTOPp->mkSam__DOT__y___05Fh402948 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh402695) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh402694));
    vlTOPp->mkSam__DOT__y___05Fh371501 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh371248) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh371247));
    vlTOPp->mkSam__DOT__y___05Fh466143 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh465890) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh465889));
    vlTOPp->mkSam__DOT__y___05Fh434570 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh434317) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh434316));
    vlTOPp->mkSam__DOT__y___05Fh56187 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh55934) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh55933));
    vlTOPp->mkSam__DOT__y___05Fh87883 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh87630) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh87629));
    vlTOPp->mkSam__DOT__y___05Fh119329 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh119076) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh119075));
    vlTOPp->mkSam__DOT__y___05Fh339996 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh340054) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh340055));
    vlTOPp->mkSam__DOT__y___05Fh308424 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh308482) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh308483));
    vlTOPp->mkSam__DOT__y___05Fh276803 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh276861) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh276862));
    vlTOPp->mkSam__DOT__y___05Fh245356 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh245414) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh245415));
    vlTOPp->mkSam__DOT__y___05Fh213910 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh213968) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh213969));
    vlTOPp->mkSam__DOT__y___05Fh182338 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh182396) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh182397));
    vlTOPp->mkSam__DOT__y___05Fh150717 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh150775) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh150776));
    vlTOPp->mkSam__DOT__y___05Fh528979 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh529037) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh529038));
    vlTOPp->mkSam__DOT__y___05Fh497531 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh497589) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh497590));
    vlTOPp->mkSam__DOT__y___05Fh402889 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh402947) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh402948));
    vlTOPp->mkSam__DOT__y___05Fh371442 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh371500) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh371501));
    vlTOPp->mkSam__DOT__y___05Fh466084 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh466142) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh466143));
    vlTOPp->mkSam__DOT__y___05Fh434511 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh434569) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh434570));
    vlTOPp->mkSam__DOT__y___05Fh56128 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh56186) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh56187));
    vlTOPp->mkSam__DOT__y___05Fh87824 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh87882) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh87883));
    vlTOPp->mkSam__DOT__y___05Fh119270 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh119328) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh119329));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6665 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh339995) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh339996)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh339801) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh339802)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6664));
    vlTOPp->mkSam__DOT__y___05Fh340249 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh339996) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh339995));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6012 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh308423) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh308424)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh308229) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh308230)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6011));
    vlTOPp->mkSam__DOT__y___05Fh308677 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh308424) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh308423));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5359 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh276802) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh276803)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh276608) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh276609)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5358));
    vlTOPp->mkSam__DOT__y___05Fh277056 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh276803) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh276802));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4705 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh245355) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh245356)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh245161) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh245162)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4704));
    vlTOPp->mkSam__DOT__y___05Fh245609 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh245356) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh245355));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4052 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh213909) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh213910)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh213715) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh213716)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4051));
    vlTOPp->mkSam__DOT__y___05Fh214163 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh213910) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh213909));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3399 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh182337) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh182338)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh182143) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh182144)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3398));
    vlTOPp->mkSam__DOT__y___05Fh182591 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh182338) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh182337));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2746 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh150716) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh150717)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh150522) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh150523)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2745));
    vlTOPp->mkSam__DOT__y___05Fh150970 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh150717) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh150716));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10589 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh528978) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh528979)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh528784) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh528785)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10588));
    vlTOPp->mkSam__DOT__y___05Fh529232 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh528979) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh528978));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9934 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh497530) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh497531)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh497336) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh497337)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9933));
    vlTOPp->mkSam__DOT__y___05Fh497784 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh497531) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh497530));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7972 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh402888) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh402889)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh402694) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh402695)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7971));
    vlTOPp->mkSam__DOT__y___05Fh403142 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh402889) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh402888));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7318 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh371441) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh371442)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh371247) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh371248)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7317));
    vlTOPp->mkSam__DOT__y___05Fh371695 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh371442) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh371441));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9280 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh466083) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh466084)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh465889) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh465890)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9279));
    vlTOPp->mkSam__DOT__y___05Fh466337 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh466084) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh466083));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8626 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh434510) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh434511)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh434316) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh434317)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8625));
    vlTOPp->mkSam__DOT__y___05Fh434764 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh434511) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh434510));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d786 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh56127) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh56128)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh55933) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh55934)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d785));
    vlTOPp->mkSam__DOT__y___05Fh56381 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh56128) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh56127));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1439 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh87823) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh87824)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh87629) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh87630)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1438));
    vlTOPp->mkSam__DOT__y___05Fh88077 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh87824) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh87823));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2092 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh119269) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh119270)) 
            << 0x17U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh119075) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh119076)) 
                          << 0x16U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2091));
    vlTOPp->mkSam__DOT__y___05Fh119523 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh119270) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh119269));
    vlTOPp->mkSam__DOT__y___05Fh340190 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh340248) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh340249));
    vlTOPp->mkSam__DOT__y___05Fh308618 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh308676) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh308677));
    vlTOPp->mkSam__DOT__y___05Fh276997 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh277055) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh277056));
    vlTOPp->mkSam__DOT__y___05Fh245550 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh245608) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh245609));
    vlTOPp->mkSam__DOT__y___05Fh214104 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh214162) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh214163));
    vlTOPp->mkSam__DOT__y___05Fh182532 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh182590) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh182591));
    vlTOPp->mkSam__DOT__y___05Fh150911 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh150969) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh150970));
    vlTOPp->mkSam__DOT__y___05Fh529173 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh529231) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh529232));
    vlTOPp->mkSam__DOT__y___05Fh497725 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh497783) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh497784));
    vlTOPp->mkSam__DOT__y___05Fh403083 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh403141) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh403142));
    vlTOPp->mkSam__DOT__y___05Fh371636 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh371694) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh371695));
    vlTOPp->mkSam__DOT__y___05Fh466278 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh466336) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh466337));
    vlTOPp->mkSam__DOT__y___05Fh434705 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh434763) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh434764));
    vlTOPp->mkSam__DOT__y___05Fh56322 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh56380) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh56381));
    vlTOPp->mkSam__DOT__y___05Fh88018 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh88076) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh88077));
    vlTOPp->mkSam__DOT__y___05Fh119464 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh119522) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh119523));
    vlTOPp->mkSam__DOT__y___05Fh340443 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh340190) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh340189));
    vlTOPp->mkSam__DOT__y___05Fh308871 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh308618) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh308617));
    vlTOPp->mkSam__DOT__y___05Fh277250 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh276997) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh276996));
    vlTOPp->mkSam__DOT__y___05Fh245803 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh245550) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh245549));
    vlTOPp->mkSam__DOT__y___05Fh214357 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh214104) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh214103));
    vlTOPp->mkSam__DOT__y___05Fh182785 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh182532) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh182531));
    vlTOPp->mkSam__DOT__y___05Fh151164 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh150911) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh150910));
    vlTOPp->mkSam__DOT__y___05Fh529426 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh529173) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh529172));
    vlTOPp->mkSam__DOT__y___05Fh497978 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh497725) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh497724));
    vlTOPp->mkSam__DOT__y___05Fh403336 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh403083) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh403082));
    vlTOPp->mkSam__DOT__y___05Fh371889 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh371636) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh371635));
    vlTOPp->mkSam__DOT__y___05Fh466531 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh466278) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh466277));
    vlTOPp->mkSam__DOT__y___05Fh434958 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh434705) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh434704));
    vlTOPp->mkSam__DOT__y___05Fh56575 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh56322) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh56321));
    vlTOPp->mkSam__DOT__y___05Fh88271 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh88018) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh88017));
    vlTOPp->mkSam__DOT__y___05Fh119717 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh119464) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh119463));
    vlTOPp->mkSam__DOT__y___05Fh340384 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh340442) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh340443));
    vlTOPp->mkSam__DOT__y___05Fh308812 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh308870) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh308871));
    vlTOPp->mkSam__DOT__y___05Fh277191 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh277249) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh277250));
    vlTOPp->mkSam__DOT__y___05Fh245744 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh245802) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh245803));
    vlTOPp->mkSam__DOT__y___05Fh214298 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh214356) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh214357));
    vlTOPp->mkSam__DOT__y___05Fh182726 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh182784) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh182785));
    vlTOPp->mkSam__DOT__y___05Fh151105 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh151163) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh151164));
    vlTOPp->mkSam__DOT__y___05Fh529367 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh529425) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh529426));
    vlTOPp->mkSam__DOT__y___05Fh497919 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh497977) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh497978));
    vlTOPp->mkSam__DOT__y___05Fh403277 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh403335) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh403336));
    vlTOPp->mkSam__DOT__y___05Fh371830 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh371888) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh371889));
    vlTOPp->mkSam__DOT__y___05Fh466472 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh466530) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh466531));
    vlTOPp->mkSam__DOT__y___05Fh434899 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh434957) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh434958));
    vlTOPp->mkSam__DOT__y___05Fh56516 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh56574) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh56575));
    vlTOPp->mkSam__DOT__y___05Fh88212 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh88270) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh88271));
    vlTOPp->mkSam__DOT__y___05Fh119658 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh119716) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh119717));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6666 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh340383) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh340384)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh340189) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh340190)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6665));
    vlTOPp->mkSam__DOT__y___05Fh340637 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh340384) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh340383));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6013 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh308811) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh308812)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh308617) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh308618)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6012));
    vlTOPp->mkSam__DOT__y___05Fh309065 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh308812) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh308811));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5360 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh277190) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh277191)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh276996) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh276997)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5359));
    vlTOPp->mkSam__DOT__y___05Fh277444 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh277191) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh277190));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4706 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh245743) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh245744)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh245549) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh245550)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4705));
    vlTOPp->mkSam__DOT__y___05Fh245997 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh245744) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh245743));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4053 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh214297) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh214298)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh214103) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh214104)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4052));
    vlTOPp->mkSam__DOT__y___05Fh214551 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh214298) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh214297));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3400 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh182725) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh182726)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh182531) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh182532)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3399));
    vlTOPp->mkSam__DOT__y___05Fh182979 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh182726) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh182725));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2747 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh151104) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh151105)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh150910) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh150911)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2746));
    vlTOPp->mkSam__DOT__y___05Fh151358 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh151105) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh151104));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10590 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh529366) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh529367)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh529172) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh529173)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10589));
    vlTOPp->mkSam__DOT__y___05Fh529620 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh529367) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh529366));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9935 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh497918) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh497919)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh497724) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh497725)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9934));
    vlTOPp->mkSam__DOT__y___05Fh498172 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh497919) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh497918));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7973 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh403276) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh403277)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh403082) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh403083)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7972));
    vlTOPp->mkSam__DOT__y___05Fh403530 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh403277) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh403276));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7319 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh371829) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh371830)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh371635) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh371636)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7318));
    vlTOPp->mkSam__DOT__y___05Fh372083 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh371830) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh371829));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9281 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh466471) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh466472)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh466277) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh466278)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9280));
    vlTOPp->mkSam__DOT__y___05Fh466725 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh466472) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh466471));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8627 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh434898) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh434899)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh434704) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh434705)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8626));
    vlTOPp->mkSam__DOT__y___05Fh435152 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh434899) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh434898));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d787 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh56515) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh56516)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh56321) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh56322)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d786));
    vlTOPp->mkSam__DOT__y___05Fh56769 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh56516) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh56515));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1440 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh88211) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh88212)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh88017) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh88018)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1439));
    vlTOPp->mkSam__DOT__y___05Fh88465 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh88212) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh88211));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2093 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh119657) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh119658)) 
            << 0x19U) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh119463) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh119464)) 
                          << 0x18U) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2092));
    vlTOPp->mkSam__DOT__y___05Fh119911 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh119658) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh119657));
    vlTOPp->mkSam__DOT__y___05Fh340578 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh340636) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh340637));
    vlTOPp->mkSam__DOT__y___05Fh309006 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh309064) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh309065));
    vlTOPp->mkSam__DOT__y___05Fh277385 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh277443) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh277444));
    vlTOPp->mkSam__DOT__y___05Fh245938 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh245996) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh245997));
    vlTOPp->mkSam__DOT__y___05Fh214492 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh214550) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh214551));
    vlTOPp->mkSam__DOT__y___05Fh182920 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh182978) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh182979));
    vlTOPp->mkSam__DOT__y___05Fh151299 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh151357) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh151358));
    vlTOPp->mkSam__DOT__y___05Fh529561 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh529619) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh529620));
    vlTOPp->mkSam__DOT__y___05Fh498113 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh498171) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh498172));
    vlTOPp->mkSam__DOT__y___05Fh403471 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh403529) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh403530));
    vlTOPp->mkSam__DOT__y___05Fh372024 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh372082) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh372083));
    vlTOPp->mkSam__DOT__y___05Fh466666 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh466724) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh466725));
    vlTOPp->mkSam__DOT__y___05Fh435093 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh435151) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh435152));
    vlTOPp->mkSam__DOT__y___05Fh56710 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh56768) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh56769));
    vlTOPp->mkSam__DOT__y___05Fh88406 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh88464) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh88465));
    vlTOPp->mkSam__DOT__y___05Fh119852 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh119910) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh119911));
    vlTOPp->mkSam__DOT__y___05Fh340831 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh340578) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh340577));
    vlTOPp->mkSam__DOT__y___05Fh309259 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh309006) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh309005));
    vlTOPp->mkSam__DOT__y___05Fh277638 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh277385) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh277384));
    vlTOPp->mkSam__DOT__y___05Fh246191 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh245938) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh245937));
    vlTOPp->mkSam__DOT__y___05Fh214745 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh214492) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh214491));
    vlTOPp->mkSam__DOT__y___05Fh183173 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh182920) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh182919));
    vlTOPp->mkSam__DOT__y___05Fh151552 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh151299) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh151298));
    vlTOPp->mkSam__DOT__y___05Fh529814 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh529561) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh529560));
    vlTOPp->mkSam__DOT__y___05Fh498366 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh498113) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh498112));
    vlTOPp->mkSam__DOT__y___05Fh403724 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh403471) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh403470));
    vlTOPp->mkSam__DOT__y___05Fh372277 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh372024) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh372023));
    vlTOPp->mkSam__DOT__y___05Fh466919 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh466666) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh466665));
    vlTOPp->mkSam__DOT__y___05Fh435346 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh435093) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh435092));
    vlTOPp->mkSam__DOT__y___05Fh56963 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh56710) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh56709));
    vlTOPp->mkSam__DOT__y___05Fh88659 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh88406) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh88405));
    vlTOPp->mkSam__DOT__y___05Fh120105 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh119852) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh119851));
    vlTOPp->mkSam__DOT__y___05Fh340772 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh340830) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh340831));
    vlTOPp->mkSam__DOT__y___05Fh309200 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh309258) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh309259));
    vlTOPp->mkSam__DOT__y___05Fh277579 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh277637) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh277638));
    vlTOPp->mkSam__DOT__y___05Fh246132 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh246190) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh246191));
    vlTOPp->mkSam__DOT__y___05Fh214686 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh214744) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh214745));
    vlTOPp->mkSam__DOT__y___05Fh183114 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh183172) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh183173));
    vlTOPp->mkSam__DOT__y___05Fh151493 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh151551) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh151552));
    vlTOPp->mkSam__DOT__y___05Fh529755 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh529813) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh529814));
    vlTOPp->mkSam__DOT__y___05Fh498307 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh498365) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh498366));
    vlTOPp->mkSam__DOT__y___05Fh403665 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh403723) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh403724));
    vlTOPp->mkSam__DOT__y___05Fh372218 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh372276) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh372277));
    vlTOPp->mkSam__DOT__y___05Fh466860 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh466918) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh466919));
    vlTOPp->mkSam__DOT__y___05Fh435287 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh435345) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh435346));
    vlTOPp->mkSam__DOT__y___05Fh56904 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh56962) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh56963));
    vlTOPp->mkSam__DOT__y___05Fh88600 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh88658) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh88659));
    vlTOPp->mkSam__DOT__y___05Fh120046 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh120104) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh120105));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6667 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh340771) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh340772)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh340577) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh340578)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6666));
    vlTOPp->mkSam__DOT__y___05Fh341025 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh340772) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh340771));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6014 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh309199) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh309200)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh309005) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh309006)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6013));
    vlTOPp->mkSam__DOT__y___05Fh309453 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh309200) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh309199));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5361 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh277578) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh277579)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh277384) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh277385)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5360));
    vlTOPp->mkSam__DOT__y___05Fh277832 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh277579) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh277578));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4707 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh246131) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh246132)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh245937) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh245938)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4706));
    vlTOPp->mkSam__DOT__y___05Fh246385 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh246132) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh246131));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4054 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh214685) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh214686)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh214491) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh214492)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4053));
    vlTOPp->mkSam__DOT__y___05Fh214939 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh214686) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh214685));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3401 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh183113) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh183114)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh182919) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh182920)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3400));
    vlTOPp->mkSam__DOT__y___05Fh183367 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh183114) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh183113));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2748 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh151492) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh151493)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh151298) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh151299)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2747));
    vlTOPp->mkSam__DOT__y___05Fh151746 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh151493) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh151492));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10591 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh529754) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh529755)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh529560) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh529561)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10590));
    vlTOPp->mkSam__DOT__y___05Fh530008 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh529755) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh529754));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9936 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh498306) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh498307)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh498112) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh498113)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9935));
    vlTOPp->mkSam__DOT__y___05Fh498560 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh498307) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh498306));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7974 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh403664) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh403665)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh403470) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh403471)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7973));
    vlTOPp->mkSam__DOT__y___05Fh403918 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh403665) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh403664));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7320 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh372217) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh372218)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh372023) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh372024)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7319));
    vlTOPp->mkSam__DOT__y___05Fh372471 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh372218) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh372217));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9282 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh466859) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh466860)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh466665) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh466666)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9281));
    vlTOPp->mkSam__DOT__y___05Fh467113 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh466860) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh466859));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8628 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh435286) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh435287)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh435092) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh435093)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8627));
    vlTOPp->mkSam__DOT__y___05Fh435540 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh435287) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh435286));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d788 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh56903) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh56904)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh56709) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh56710)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d787));
    vlTOPp->mkSam__DOT__y___05Fh57157 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh56904) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh56903));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1441 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh88599) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh88600)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh88405) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh88406)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1440));
    vlTOPp->mkSam__DOT__y___05Fh88853 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh88600) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh88599));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2094 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh120045) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh120046)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh119851) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh119852)) 
                          << 0x1aU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2093));
    vlTOPp->mkSam__DOT__y___05Fh120299 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh120046) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh120045));
    vlTOPp->mkSam__DOT__y___05Fh340966 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh341024) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh341025));
    vlTOPp->mkSam__DOT__y___05Fh309394 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh309452) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh309453));
    vlTOPp->mkSam__DOT__y___05Fh277773 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh277831) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh277832));
    vlTOPp->mkSam__DOT__y___05Fh246326 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh246384) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh246385));
    vlTOPp->mkSam__DOT__y___05Fh214880 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh214938) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh214939));
    vlTOPp->mkSam__DOT__y___05Fh183308 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh183366) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh183367));
    vlTOPp->mkSam__DOT__y___05Fh151687 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh151745) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh151746));
    vlTOPp->mkSam__DOT__y___05Fh529949 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh530007) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh530008));
    vlTOPp->mkSam__DOT__y___05Fh498501 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh498559) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh498560));
    vlTOPp->mkSam__DOT__y___05Fh403859 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh403917) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh403918));
    vlTOPp->mkSam__DOT__y___05Fh372412 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh372470) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh372471));
    vlTOPp->mkSam__DOT__y___05Fh467054 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh467112) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh467113));
    vlTOPp->mkSam__DOT__y___05Fh435481 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh435539) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh435540));
    vlTOPp->mkSam__DOT__y___05Fh57098 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh57156) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh57157));
    vlTOPp->mkSam__DOT__y___05Fh88794 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh88852) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh88853));
    vlTOPp->mkSam__DOT__y___05Fh120240 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh120298) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh120299));
    vlTOPp->mkSam__DOT__y___05Fh341219 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh340966) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh340965));
    vlTOPp->mkSam__DOT__y___05Fh309647 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh309394) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh309393));
    vlTOPp->mkSam__DOT__y___05Fh278026 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh277773) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh277772));
    vlTOPp->mkSam__DOT__y___05Fh246579 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh246326) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh246325));
    vlTOPp->mkSam__DOT__y___05Fh215133 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh214880) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh214879));
    vlTOPp->mkSam__DOT__y___05Fh183561 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh183308) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh183307));
    vlTOPp->mkSam__DOT__y___05Fh151940 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh151687) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh151686));
    vlTOPp->mkSam__DOT__y___05Fh530202 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh529949) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh529948));
    vlTOPp->mkSam__DOT__y___05Fh498754 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh498501) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh498500));
    vlTOPp->mkSam__DOT__y___05Fh404112 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh403859) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh403858));
    vlTOPp->mkSam__DOT__y___05Fh372665 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh372412) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh372411));
    vlTOPp->mkSam__DOT__y___05Fh467307 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh467054) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh467053));
    vlTOPp->mkSam__DOT__y___05Fh435734 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh435481) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh435480));
    vlTOPp->mkSam__DOT__y___05Fh57351 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh57098) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh57097));
    vlTOPp->mkSam__DOT__y___05Fh89047 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh88794) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh88793));
    vlTOPp->mkSam__DOT__y___05Fh120493 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh120240) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh120239));
    vlTOPp->mkSam__DOT__y___05Fh341160 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh341218) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh341219));
    vlTOPp->mkSam__DOT__y___05Fh309588 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh309646) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh309647));
    vlTOPp->mkSam__DOT__y___05Fh277967 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh278025) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh278026));
    vlTOPp->mkSam__DOT__y___05Fh246520 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh246578) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh246579));
    vlTOPp->mkSam__DOT__y___05Fh215074 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh215132) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh215133));
    vlTOPp->mkSam__DOT__y___05Fh183502 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh183560) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh183561));
    vlTOPp->mkSam__DOT__y___05Fh151881 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh151939) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh151940));
    vlTOPp->mkSam__DOT__y___05Fh530143 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh530201) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh530202));
    vlTOPp->mkSam__DOT__y___05Fh498695 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh498753) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh498754));
    vlTOPp->mkSam__DOT__y___05Fh404053 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh404111) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh404112));
    vlTOPp->mkSam__DOT__y___05Fh372606 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh372664) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh372665));
    vlTOPp->mkSam__DOT__y___05Fh467248 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh467306) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh467307));
    vlTOPp->mkSam__DOT__y___05Fh435675 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh435733) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh435734));
    vlTOPp->mkSam__DOT__y___05Fh57292 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh57350) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh57351));
    vlTOPp->mkSam__DOT__y___05Fh88988 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh89046) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh89047));
    vlTOPp->mkSam__DOT__y___05Fh120434 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh120492) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh120493));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6668 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh341159) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh341160)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh340965) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh340966)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6667));
    vlTOPp->mkSam__DOT__y___05Fh341413 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh341160) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh341159));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6015 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh309587) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh309588)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh309393) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh309394)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6014));
    vlTOPp->mkSam__DOT__y___05Fh309841 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh309588) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh309587));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5362 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh277966) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh277967)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh277772) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh277773)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5361));
    vlTOPp->mkSam__DOT__y___05Fh278220 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh277967) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh277966));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4708 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh246519) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh246520)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh246325) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh246326)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4707));
    vlTOPp->mkSam__DOT__y___05Fh246773 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh246520) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh246519));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4055 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh215073) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh215074)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh214879) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh214880)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4054));
    vlTOPp->mkSam__DOT__y___05Fh215327 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh215074) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh215073));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3402 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh183501) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh183502)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh183307) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh183308)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3401));
    vlTOPp->mkSam__DOT__y___05Fh183755 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh183502) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh183501));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2749 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh151880) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh151881)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh151686) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh151687)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2748));
    vlTOPp->mkSam__DOT__y___05Fh152134 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh151881) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh151880));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10592 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh530142) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh530143)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh529948) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh529949)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10591));
    vlTOPp->mkSam__DOT__y___05Fh530396 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh530143) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh530142));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9937 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh498694) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh498695)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh498500) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh498501)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9936));
    vlTOPp->mkSam__DOT__y___05Fh498948 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh498695) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh498694));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7975 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh404052) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh404053)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh403858) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh403859)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7974));
    vlTOPp->mkSam__DOT__y___05Fh404306 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh404053) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh404052));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7321 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh372605) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh372606)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh372411) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh372412)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7320));
    vlTOPp->mkSam__DOT__y___05Fh372859 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh372606) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh372605));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9283 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh467247) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh467248)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh467053) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh467054)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9282));
    vlTOPp->mkSam__DOT__y___05Fh467501 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh467248) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh467247));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8629 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh435674) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh435675)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh435480) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh435481)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8628));
    vlTOPp->mkSam__DOT__y___05Fh435928 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh435675) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh435674));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d789 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh57291) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh57292)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh57097) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh57098)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d788));
    vlTOPp->mkSam__DOT__y___05Fh57545 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh57292) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh57291));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1442 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh88987) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh88988)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh88793) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh88794)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1441));
    vlTOPp->mkSam__DOT__y___05Fh89241 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh88988) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh88987));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2095 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh120433) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh120434)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh120239) 
                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh120240)) 
                          << 0x1cU) | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2094));
    vlTOPp->mkSam__DOT__y___05Fh120687 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh120434) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh120433));
    vlTOPp->mkSam__DOT__y___05Fh341354 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh341412) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh341413));
    vlTOPp->mkSam__DOT__y___05Fh309782 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh309840) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh309841));
    vlTOPp->mkSam__DOT__y___05Fh278161 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh278219) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh278220));
    vlTOPp->mkSam__DOT__y___05Fh246714 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh246772) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh246773));
    vlTOPp->mkSam__DOT__y___05Fh215268 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh215326) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh215327));
    vlTOPp->mkSam__DOT__y___05Fh183696 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh183754) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh183755));
    vlTOPp->mkSam__DOT__y___05Fh152075 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh152133) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh152134));
    vlTOPp->mkSam__DOT__y___05Fh530337 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh530395) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh530396));
    vlTOPp->mkSam__DOT__y___05Fh498889 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh498947) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh498948));
    vlTOPp->mkSam__DOT__y___05Fh404247 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh404305) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh404306));
    vlTOPp->mkSam__DOT__y___05Fh372800 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh372858) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh372859));
    vlTOPp->mkSam__DOT__y___05Fh467442 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh467500) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh467501));
    vlTOPp->mkSam__DOT__y___05Fh435869 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh435927) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh435928));
    vlTOPp->mkSam__DOT__y___05Fh57486 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh57544) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh57545));
    vlTOPp->mkSam__DOT__y___05Fh89182 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh89240) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh89241));
    vlTOPp->mkSam__DOT__y___05Fh120628 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh120686) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh120687));
    vlTOPp->mkSam__DOT__y___05Fh341607 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh341354) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh341353));
    vlTOPp->mkSam__DOT__y___05Fh310035 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh309782) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh309781));
    vlTOPp->mkSam__DOT__y___05Fh278414 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh278161) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh278160));
    vlTOPp->mkSam__DOT__y___05Fh246967 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh246714) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh246713));
    vlTOPp->mkSam__DOT__y___05Fh215521 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh215268) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh215267));
    vlTOPp->mkSam__DOT__y___05Fh183949 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh183696) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh183695));
    vlTOPp->mkSam__DOT__y___05Fh152328 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh152075) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh152074));
    vlTOPp->mkSam__DOT__y___05Fh530590 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh530337) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh530336));
    vlTOPp->mkSam__DOT__y___05Fh499142 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh498889) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh498888));
    vlTOPp->mkSam__DOT__y___05Fh404500 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh404247) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh404246));
    vlTOPp->mkSam__DOT__y___05Fh373053 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh372800) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh372799));
    vlTOPp->mkSam__DOT__y___05Fh467695 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh467442) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh467441));
    vlTOPp->mkSam__DOT__y___05Fh436122 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh435869) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh435868));
    vlTOPp->mkSam__DOT__y___05Fh57739 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh57486) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh57485));
    vlTOPp->mkSam__DOT__y___05Fh89435 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh89182) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh89181));
    vlTOPp->mkSam__DOT__y___05Fh120881 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh120628) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh120627));
    vlTOPp->mkSam__DOT__y___05Fh341548 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh341606) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh341607));
    vlTOPp->mkSam__DOT__y___05Fh309976 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh310034) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh310035));
    vlTOPp->mkSam__DOT__y___05Fh278355 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh278413) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh278414));
    vlTOPp->mkSam__DOT__y___05Fh246908 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh246966) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh246967));
    vlTOPp->mkSam__DOT__y___05Fh215462 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh215520) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh215521));
    vlTOPp->mkSam__DOT__y___05Fh183890 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh183948) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh183949));
    vlTOPp->mkSam__DOT__y___05Fh152269 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh152327) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh152328));
    vlTOPp->mkSam__DOT__y___05Fh530531 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh530589) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh530590));
    vlTOPp->mkSam__DOT__y___05Fh499083 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh499141) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh499142));
    vlTOPp->mkSam__DOT__y___05Fh404441 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh404499) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh404500));
    vlTOPp->mkSam__DOT__y___05Fh372994 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh373052) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh373053));
    vlTOPp->mkSam__DOT__y___05Fh467636 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh467694) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh467695));
    vlTOPp->mkSam__DOT__y___05Fh436063 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh436121) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh436122));
    vlTOPp->mkSam__DOT__y___05Fh57680 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh57738) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh57739));
    vlTOPp->mkSam__DOT__y___05Fh89376 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh89434) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh89435));
    vlTOPp->mkSam__DOT__y___05Fh120822 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh120880) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh120881));
    vlTOPp->mkSam__DOT__x___05Fh334056 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh341547) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh341548)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh341353) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh341354)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6668));
    vlTOPp->mkSam__DOT__x___05Fh302484 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh309975) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh309976)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh309781) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh309782)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6015));
    vlTOPp->mkSam__DOT__x___05Fh270863 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh278354) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh278355)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh278160) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh278161)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5362));
    vlTOPp->mkSam__DOT__x___05Fh239416 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh246907) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh246908)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh246713) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh246714)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4708));
    vlTOPp->mkSam__DOT__x___05Fh207970 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh215461) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh215462)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh215267) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh215268)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4055));
    vlTOPp->mkSam__DOT__x___05Fh176398 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh183889) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh183890)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh183695) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh183696)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3402));
    vlTOPp->mkSam__DOT__x___05Fh144777 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh152268) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh152269)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh152074) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh152075)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2749));
    vlTOPp->mkSam__DOT__x___05Fh523039 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh530530) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh530531)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh530336) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh530337)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10592));
    vlTOPp->mkSam__DOT__x___05Fh491591 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh499082) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh499083)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh498888) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh498889)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9937));
    vlTOPp->mkSam__DOT__x___05Fh396949 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh404440) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh404441)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh404246) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh404247)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7975));
    vlTOPp->mkSam__DOT__x___05Fh365502 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh372993) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh372994)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh372799) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh372800)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7321));
    vlTOPp->mkSam__DOT__x___05Fh460144 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh467635) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh467636)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh467441) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh467442)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9283));
    vlTOPp->mkSam__DOT__x___05Fh428571 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh436062) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh436063)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh435868) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh435869)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8629));
    vlTOPp->mkSam__DOT__x___05Fh50188 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh57679) 
                                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh57680)) 
                                          << 0x1fU) 
                                         | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh57485) 
                                              ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh57486)) 
                                             << 0x1eU) 
                                            | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d789));
    vlTOPp->mkSam__DOT__x___05Fh81884 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh89375) 
                                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh89376)) 
                                          << 0x1fU) 
                                         | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh89181) 
                                              ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh89182)) 
                                             << 0x1eU) 
                                            | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1442));
    vlTOPp->mkSam__DOT__x___05Fh113330 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh120821) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh120822)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh120627) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh120628)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d2095));
    if (vlTOPp->mkSam__DOT__mac_matrix_2_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh318514;
        vlTOPp->mkSam__DOT__mac_matrix_2_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh318514;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh334056;
        vlTOPp->mkSam__DOT__mac_matrix_2_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh334056;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_2_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh286942;
        vlTOPp->mkSam__DOT__mac_matrix_2_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh286942;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh302484;
        vlTOPp->mkSam__DOT__mac_matrix_2_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh302484;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh255321;
        vlTOPp->mkSam__DOT__mac_matrix_1_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh255321;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh270863;
        vlTOPp->mkSam__DOT__mac_matrix_1_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh270863;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh223874;
        vlTOPp->mkSam__DOT__mac_matrix_1_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh223874;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh239416;
        vlTOPp->mkSam__DOT__mac_matrix_1_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh239416;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh192428;
        vlTOPp->mkSam__DOT__mac_matrix_1_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh192428;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh207970;
        vlTOPp->mkSam__DOT__mac_matrix_1_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh207970;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh160856;
        vlTOPp->mkSam__DOT__mac_matrix_1_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh160856;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh176398;
        vlTOPp->mkSam__DOT__mac_matrix_1_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh176398;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh129235;
        vlTOPp->mkSam__DOT__mac_matrix_0_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh129235;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh144777;
        vlTOPp->mkSam__DOT__mac_matrix_0_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh144777;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh507497;
        vlTOPp->mkSam__DOT__mac_matrix_3_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh507497;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh523039;
        vlTOPp->mkSam__DOT__mac_matrix_3_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh523039;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh476049;
        vlTOPp->mkSam__DOT__mac_matrix_3_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh476049;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh491591;
        vlTOPp->mkSam__DOT__mac_matrix_3_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh491591;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_2_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh381407;
        vlTOPp->mkSam__DOT__mac_matrix_2_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh381407;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh396949;
        vlTOPp->mkSam__DOT__mac_matrix_2_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh396949;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_2_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh349960;
        vlTOPp->mkSam__DOT__mac_matrix_2_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh349960;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh365502;
        vlTOPp->mkSam__DOT__mac_matrix_2_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh365502;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh444602;
        vlTOPp->mkSam__DOT__mac_matrix_3_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh444602;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh460144;
        vlTOPp->mkSam__DOT__mac_matrix_3_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh460144;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh413029;
        vlTOPp->mkSam__DOT__mac_matrix_3_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh413029;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh428571;
        vlTOPp->mkSam__DOT__mac_matrix_3_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh428571;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh34646;
        vlTOPp->mkSam__DOT__mac_matrix_0_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh34646;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh50188;
        vlTOPp->mkSam__DOT__mac_matrix_0_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh50188;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh66342;
        vlTOPp->mkSam__DOT__mac_matrix_0_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh66342;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh81884;
        vlTOPp->mkSam__DOT__mac_matrix_0_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh81884;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh97788;
        vlTOPp->mkSam__DOT__mac_matrix_0_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh97788;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh113330;
        vlTOPp->mkSam__DOT__mac_matrix_0_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh113330;
    }
}
