// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop::_settle__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkSam__DOT__x___05Fh479830 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh479887 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh479642 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh479699 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh479454 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh479511 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh479266 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh479323 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh479078 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh479135 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh478890 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh478947 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh478702 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh478759 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh478514 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh478571 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh478326 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh478383 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh478138 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh478195 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 & vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh477950 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh476885 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh477844) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh477951 = (1U & (vlTOPp->mkSam__DOT__x___05Fh476885 
                                                & vlTOPp->mkSam__DOT__x___05Fh477844));
    vlTOPp->mkSam__DOT__product___05Fh492859 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9663 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh509294 
        = ((IData)(vlTOPp->mkSam__DOT__IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THEN_I_ETC___05F_d10019)
            ? (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh509221)
            : (IData)(vlTOPp->mkSam__DOT__round_flag___05Fh509296));
    vlTOPp->mkSam__DOT__IF_x08333_BIT_0_XOR_x09292_BIT_0_THEN_1_ELSE_0___05Fq32 
        = ((1U & (vlTOPp->mkSam__DOT__x___05Fh508333 
                  ^ vlTOPp->mkSam__DOT__x___05Fh509292))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh513779 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh513534 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh513591 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh513346 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh513403 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh513158 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh513215 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh512970 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh513027 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh512782 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh512839 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh512594 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh512651 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh512406 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh512463 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh512218 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh512275 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh512030 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh512087 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh511842 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh511899 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh511654 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh511711 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh511466 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh511523 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh511278 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh511335 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh511090 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh511147 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh510902 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh510959 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh510714 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh510771 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh510526 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh510583 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh510338 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh510395 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh510150 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh510207 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh509962 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh510019 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh509774 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh509831 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh509586 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh509643 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 & vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh509398 = (1U & ((vlTOPp->mkSam__DOT__x___05Fh508333 
                                                 ^ vlTOPp->mkSam__DOT__x___05Fh509292) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh509399 = (1U & (vlTOPp->mkSam__DOT__x___05Fh508333 
                                                & vlTOPp->mkSam__DOT__x___05Fh509292));
    vlTOPp->mkSam__DOT__product___05Fh524307 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10318 
                                                + (0x3fff800U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 0xbU)));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d407 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh36547) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh36548));
    vlTOPp->mkSam__DOT__y___05Fh36793 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh36548) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh36547));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d523 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51456
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d515);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1060 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68243) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh68244));
    vlTOPp->mkSam__DOT__y___05Fh68489 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh68244) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh68243));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1176 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83152
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1168);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1713 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh99689) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh99690));
    vlTOPp->mkSam__DOT__y___05Fh99935 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh99690) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh99689));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1829 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114598
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1821);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2367 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131136) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh131137));
    vlTOPp->mkSam__DOT__y___05Fh131382 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh131137) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh131136));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2483 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146045
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2475);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3020 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh162757) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh162758));
    vlTOPp->mkSam__DOT__y___05Fh163003 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh162758) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh162757));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3136 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177666
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3128);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3673 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh194329) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh194330));
    vlTOPp->mkSam__DOT__y___05Fh194575 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh194330) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh194329));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3789 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209238
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3781);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4326 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh225775) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh225776));
    vlTOPp->mkSam__DOT__y___05Fh226021 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh225776) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh225775));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4442 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240684
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4434);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4980 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257222) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh257223));
    vlTOPp->mkSam__DOT__y___05Fh257468 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh257223) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh257222));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5096 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272131
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5088);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5633 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh288843) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh288844));
    vlTOPp->mkSam__DOT__y___05Fh289089 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh288844) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh288843));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5749 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303752
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5741);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6286 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh320415) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh320416));
    vlTOPp->mkSam__DOT__y___05Fh320661 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh320416) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh320415));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6402 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335324
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6394);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6939 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh351861) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh351862));
    vlTOPp->mkSam__DOT__y___05Fh352107 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh351862) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh351861));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7055 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366770
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7047);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7593 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh383308) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh383309));
    vlTOPp->mkSam__DOT__y___05Fh383554 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh383309) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh383308));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7709 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398217
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7701);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8247 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh414930) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh414931));
    vlTOPp->mkSam__DOT__y___05Fh415176 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh414931) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh414930));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8363 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429839
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8355);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8901 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh446503) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh446504));
    vlTOPp->mkSam__DOT__y___05Fh446749 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh446504) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh446503));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9017 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461412
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9009);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9555 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh477950) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh477951));
    vlTOPp->mkSam__DOT__y___05Fh478196 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh477951) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh477950));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9671 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492859
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9663);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10210 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh509398) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh509399));
    vlTOPp->mkSam__DOT__y___05Fh509644 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh509399) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh509398));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10326 
        = ((0x800U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524307
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10318);
    vlTOPp->mkSam__DOT__y___05Fh36736 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh36792) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh36793));
    vlTOPp->mkSam__DOT__product___05Fh51433 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d523 
                                               + (0x7fff000U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh68432 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68488) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh68489));
    vlTOPp->mkSam__DOT__product___05Fh83129 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1176 
                                               + (0x7fff000U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh99878 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh99934) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh99935));
    vlTOPp->mkSam__DOT__product___05Fh114575 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1829 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh131325 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131381) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh131382));
    vlTOPp->mkSam__DOT__product___05Fh146022 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2483 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh162946 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163002) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh163003));
    vlTOPp->mkSam__DOT__product___05Fh177643 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3136 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh194518 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh194574) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh194575));
    vlTOPp->mkSam__DOT__product___05Fh209215 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3789 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh225964 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226020) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh226021));
    vlTOPp->mkSam__DOT__product___05Fh240661 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4442 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh257411 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257467) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh257468));
    vlTOPp->mkSam__DOT__product___05Fh272108 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5096 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh289032 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289088) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh289089));
    vlTOPp->mkSam__DOT__product___05Fh303729 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5749 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh320604 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh320660) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh320661));
    vlTOPp->mkSam__DOT__product___05Fh335301 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6402 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh352050 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352106) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh352107));
    vlTOPp->mkSam__DOT__product___05Fh366747 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7055 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh383497 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh383553) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh383554));
    vlTOPp->mkSam__DOT__product___05Fh398194 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7709 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh415119 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415175) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh415176));
    vlTOPp->mkSam__DOT__product___05Fh429816 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8363 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh446692 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh446748) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh446749));
    vlTOPp->mkSam__DOT__product___05Fh461389 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9017 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh478139 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478195) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh478196));
    vlTOPp->mkSam__DOT__product___05Fh492836 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9671 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__y___05Fh509587 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh509643) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh509644));
    vlTOPp->mkSam__DOT__product___05Fh524284 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10326 
                                                + (0x7fff000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 0xcU)));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d406 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh36735) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh36736));
    vlTOPp->mkSam__DOT__y___05Fh36981 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh36736) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh36735));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d532 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51433
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d523);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1059 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68431) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh68432));
    vlTOPp->mkSam__DOT__y___05Fh68677 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh68432) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh68431));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1185 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83129
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1176);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1712 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh99877) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh99878));
    vlTOPp->mkSam__DOT__y___05Fh100123 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh99878) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh99877));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1838 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114575
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1829);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2366 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131324) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh131325));
    vlTOPp->mkSam__DOT__y___05Fh131570 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh131325) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh131324));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2492 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh146022
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2483);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3019 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh162945) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh162946));
    vlTOPp->mkSam__DOT__y___05Fh163191 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh162946) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh162945));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3145 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177643
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3136);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3672 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh194517) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh194518));
    vlTOPp->mkSam__DOT__y___05Fh194763 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh194518) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh194517));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3798 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209215
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3789);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4325 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh225963) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh225964));
    vlTOPp->mkSam__DOT__y___05Fh226209 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh225964) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh225963));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4451 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240661
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4442);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4979 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257410) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh257411));
    vlTOPp->mkSam__DOT__y___05Fh257656 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh257411) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh257410));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5105 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272108
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5096);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5632 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289031) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh289032));
    vlTOPp->mkSam__DOT__y___05Fh289277 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh289032) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh289031));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5758 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303729
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5749);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6285 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh320603) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh320604));
    vlTOPp->mkSam__DOT__y___05Fh320849 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh320604) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh320603));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6411 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335301
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6402);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6938 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352049) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh352050));
    vlTOPp->mkSam__DOT__y___05Fh352295 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh352050) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh352049));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7064 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366747
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7055);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7592 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh383496) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh383497));
    vlTOPp->mkSam__DOT__y___05Fh383742 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh383497) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh383496));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7718 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398194
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7709);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8246 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415118) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh415119));
    vlTOPp->mkSam__DOT__y___05Fh415364 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh415119) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh415118));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8372 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429816
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8363);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8900 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh446691) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh446692));
    vlTOPp->mkSam__DOT__y___05Fh446937 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh446692) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh446691));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9026 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461389
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9017);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9554 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478138) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh478139));
    vlTOPp->mkSam__DOT__y___05Fh478384 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh478139) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh478138));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9680 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492836
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9671);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10209 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh509586) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh509587));
    vlTOPp->mkSam__DOT__y___05Fh509832 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh509587) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh509586));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10335 
        = ((0x1000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524284
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10326);
    vlTOPp->mkSam__DOT__y___05Fh36924 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh36980) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh36981));
    vlTOPp->mkSam__DOT__product___05Fh51410 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d532 
                                               + (0xfffe000U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh68620 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68676) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh68677));
    vlTOPp->mkSam__DOT__product___05Fh83106 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1185 
                                               + (0xfffe000U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh100066 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100122) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh100123));
    vlTOPp->mkSam__DOT__product___05Fh114552 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1838 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh131513 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131569) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh131570));
    vlTOPp->mkSam__DOT__product___05Fh145999 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2492 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh163134 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163190) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh163191));
    vlTOPp->mkSam__DOT__product___05Fh177620 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3145 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh194706 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh194762) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh194763));
    vlTOPp->mkSam__DOT__product___05Fh209192 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3798 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh226152 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226208) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh226209));
    vlTOPp->mkSam__DOT__product___05Fh240638 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4451 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh257599 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257655) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh257656));
    vlTOPp->mkSam__DOT__product___05Fh272085 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5105 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh289220 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289276) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh289277));
    vlTOPp->mkSam__DOT__product___05Fh303706 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5758 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh320792 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh320848) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh320849));
    vlTOPp->mkSam__DOT__product___05Fh335278 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6411 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh352238 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352294) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh352295));
    vlTOPp->mkSam__DOT__product___05Fh366724 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7064 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh383685 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh383741) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh383742));
    vlTOPp->mkSam__DOT__product___05Fh398171 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7718 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh415307 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415363) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh415364));
    vlTOPp->mkSam__DOT__product___05Fh429793 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8372 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh446880 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh446936) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh446937));
    vlTOPp->mkSam__DOT__product___05Fh461366 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9026 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh478327 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478383) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh478384));
    vlTOPp->mkSam__DOT__product___05Fh492813 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9680 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__y___05Fh509775 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh509831) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh509832));
    vlTOPp->mkSam__DOT__product___05Fh524261 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10335 
                                                + (0xfffe000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 0xdU)));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d405 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh36923) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh36924));
    vlTOPp->mkSam__DOT__y___05Fh37169 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh36924) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh36923));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d541 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51410
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d532);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1058 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68619) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh68620));
    vlTOPp->mkSam__DOT__y___05Fh68865 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh68620) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh68619));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1194 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83106
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1185);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1711 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100065) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh100066));
    vlTOPp->mkSam__DOT__y___05Fh100311 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh100066) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh100065));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1847 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114552
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1838);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2365 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131512) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh131513));
    vlTOPp->mkSam__DOT__y___05Fh131758 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh131513) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh131512));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2501 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh145999
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2492);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3018 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163133) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh163134));
    vlTOPp->mkSam__DOT__y___05Fh163379 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh163134) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh163133));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3154 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177620
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3145);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3671 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh194705) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh194706));
    vlTOPp->mkSam__DOT__y___05Fh194951 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh194706) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh194705));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3807 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209192
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3798);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4324 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226151) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh226152));
    vlTOPp->mkSam__DOT__y___05Fh226397 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh226152) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh226151));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4460 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240638
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4451);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4978 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257598) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh257599));
    vlTOPp->mkSam__DOT__y___05Fh257844 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh257599) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh257598));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5114 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272085
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5105);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5631 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289219) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh289220));
    vlTOPp->mkSam__DOT__y___05Fh289465 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh289220) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh289219));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5767 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303706
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5758);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6284 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh320791) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh320792));
    vlTOPp->mkSam__DOT__y___05Fh321037 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh320792) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh320791));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6420 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335278
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6411);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6937 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352237) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh352238));
    vlTOPp->mkSam__DOT__y___05Fh352483 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh352238) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh352237));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7073 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366724
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7064);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7591 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh383684) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh383685));
    vlTOPp->mkSam__DOT__y___05Fh383930 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh383685) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh383684));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7727 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398171
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7718);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8245 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415306) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh415307));
    vlTOPp->mkSam__DOT__y___05Fh415552 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh415307) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh415306));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8381 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429793
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8372);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8899 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh446879) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh446880));
    vlTOPp->mkSam__DOT__y___05Fh447125 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh446880) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh446879));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9035 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461366
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9026);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9553 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478326) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh478327));
    vlTOPp->mkSam__DOT__y___05Fh478572 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh478327) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh478326));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9689 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492813
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9680);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10208 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh509774) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh509775));
    vlTOPp->mkSam__DOT__y___05Fh510020 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh509775) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh509774));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10344 
        = ((0x2000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524261
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10335);
    vlTOPp->mkSam__DOT__y___05Fh37112 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37168) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh37169));
    vlTOPp->mkSam__DOT__product___05Fh51387 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d541 
                                               + (0x1fffc000U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq1) 
                                                     << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh68808 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68864) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh68865));
    vlTOPp->mkSam__DOT__product___05Fh83083 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1194 
                                               + (0x1fffc000U 
                                                  & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq2) 
                                                     << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh100254 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100310) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh100311));
    vlTOPp->mkSam__DOT__product___05Fh114529 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1847 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq4) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh131701 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131757) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh131758));
    vlTOPp->mkSam__DOT__product___05Fh145976 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2501 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq3) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh163322 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163378) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh163379));
    vlTOPp->mkSam__DOT__product___05Fh177597 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3154 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq5) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh194894 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh194950) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh194951));
    vlTOPp->mkSam__DOT__product___05Fh209169 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3807 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq6) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh226340 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226396) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh226397));
    vlTOPp->mkSam__DOT__product___05Fh240615 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4460 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq7) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh257787 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257843) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh257844));
    vlTOPp->mkSam__DOT__product___05Fh272062 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5114 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq8) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh289408 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289464) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh289465));
    vlTOPp->mkSam__DOT__product___05Fh303683 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5767 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq10) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh320980 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321036) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321037));
    vlTOPp->mkSam__DOT__product___05Fh335255 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6420 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq9) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh352426 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352482) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh352483));
    vlTOPp->mkSam__DOT__product___05Fh366701 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7073 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq11) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh383873 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh383929) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh383930));
    vlTOPp->mkSam__DOT__product___05Fh398148 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7727 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq12) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh415495 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415551) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh415552));
    vlTOPp->mkSam__DOT__product___05Fh429770 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8381 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq13) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh447068 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447124) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh447125));
    vlTOPp->mkSam__DOT__product___05Fh461343 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9035 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq14) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh478515 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478571) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh478572));
    vlTOPp->mkSam__DOT__product___05Fh492790 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9689 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq16) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__y___05Fh509963 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510019) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510020));
    vlTOPp->mkSam__DOT__product___05Fh524238 = (vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10344 
                                                + (0x1fffc000U 
                                                   & ((IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_BIT_15_THEN_INV_mac_matrix_ETC___05Fq15) 
                                                      << 0xeU)));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d404 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37111) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh37112));
    vlTOPp->mkSam__DOT__y___05Fh37357 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh37112) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh37111));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh50939 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_mac___05FETC___05F_d439))
            ? vlTOPp->mkSam__DOT__product___05Fh51387
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_0_b_43_BIT_15_44_THEN_INV_m_ETC___05F_d541);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1057 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68807) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh68808));
    vlTOPp->mkSam__DOT__y___05Fh69053 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh68808) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh68807));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh82635 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_mac___05FETC___05F_d1092))
            ? vlTOPp->mkSam__DOT__product___05Fh83083
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_1_b_96_BIT_15_97_THEN_INV_m_ETC___05F_d1194);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1710 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100253) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh100254));
    vlTOPp->mkSam__DOT__y___05Fh100499 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh100254) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh100253));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh114081 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ma_ETC___05F_d1745))
            ? vlTOPp->mkSam__DOT__product___05Fh114529
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_2_b_449_BIT_15_450_THEN_INV_ETC___05F_d1847);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2364 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131700) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh131701));
    vlTOPp->mkSam__DOT__y___05Fh131946 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh131701) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh131700));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh145528 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ma_ETC___05F_d2399))
            ? vlTOPp->mkSam__DOT__product___05Fh145976
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_b_103_BIT_15_104_THEN_INV_ETC___05F_d2501);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3017 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163321) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh163322));
    vlTOPp->mkSam__DOT__y___05Fh163567 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh163322) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh163321));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh177149 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ma_ETC___05F_d3052))
            ? vlTOPp->mkSam__DOT__product___05Fh177597
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_b_756_BIT_15_757_THEN_INV_ETC___05F_d3154);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3670 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh194893) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh194894));
    vlTOPp->mkSam__DOT__y___05Fh195139 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh194894) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh194893));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh208721 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ma_ETC___05F_d3705))
            ? vlTOPp->mkSam__DOT__product___05Fh209169
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_b_409_BIT_15_410_THEN_INV_ETC___05F_d3807);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4323 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226339) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh226340));
    vlTOPp->mkSam__DOT__y___05Fh226585 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh226340) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh226339));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh240167 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ma_ETC___05F_d4358))
            ? vlTOPp->mkSam__DOT__product___05Fh240615
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_b_062_BIT_15_063_THEN_INV_ETC___05F_d4460);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4977 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257786) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh257787));
    vlTOPp->mkSam__DOT__y___05Fh258032 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh257787) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh257786));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh271614 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ma_ETC___05F_d5012))
            ? vlTOPp->mkSam__DOT__product___05Fh272062
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_b_716_BIT_15_717_THEN_INV_ETC___05F_d5114);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5630 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289407) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh289408));
    vlTOPp->mkSam__DOT__y___05Fh289653 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh289408) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh289407));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh303235 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ma_ETC___05F_d5665))
            ? vlTOPp->mkSam__DOT__product___05Fh303683
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_b_369_BIT_15_370_THEN_INV_ETC___05F_d5767);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6283 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh320979) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh320980));
    vlTOPp->mkSam__DOT__y___05Fh321225 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh320980) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh320979));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh334807 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ma_ETC___05F_d6318))
            ? vlTOPp->mkSam__DOT__product___05Fh335255
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_b_022_BIT_15_023_THEN_INV_ETC___05F_d6420);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6936 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352425) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh352426));
    vlTOPp->mkSam__DOT__y___05Fh352671 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh352426) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh352425));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh366253 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ma_ETC___05F_d6971))
            ? vlTOPp->mkSam__DOT__product___05Fh366701
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_b_675_BIT_15_676_THEN_INV_ETC___05F_d7073);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7590 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh383872) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh383873));
    vlTOPp->mkSam__DOT__y___05Fh384118 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh383873) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh383872));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh397700 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ma_ETC___05F_d7625))
            ? vlTOPp->mkSam__DOT__product___05Fh398148
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_b_329_BIT_15_330_THEN_INV_ETC___05F_d7727);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8244 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415494) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh415495));
    vlTOPp->mkSam__DOT__y___05Fh415740 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh415495) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh415494));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh429322 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ma_ETC___05F_d8279))
            ? vlTOPp->mkSam__DOT__product___05Fh429770
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_b_983_BIT_15_984_THEN_INV_ETC___05F_d8381);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8898 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447067) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh447068));
    vlTOPp->mkSam__DOT__y___05Fh447313 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh447068) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh447067));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh460895 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ma_ETC___05F_d8933))
            ? vlTOPp->mkSam__DOT__product___05Fh461343
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_b_637_BIT_15_638_THEN_INV_ETC___05F_d9035);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9552 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478514) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh478515));
    vlTOPp->mkSam__DOT__y___05Fh478760 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh478515) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh478514));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh492342 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ma_ETC___05F_d9587))
            ? vlTOPp->mkSam__DOT__product___05Fh492790
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_b_291_BIT_15_292_THEN_INV_ETC___05F_d9689);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10207 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh509962) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh509963));
    vlTOPp->mkSam__DOT__y___05Fh510208 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh509963) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh509962));
    vlTOPp->mkSam__DOT__product___05F_2___05Fh523790 
        = ((0x4000U & (IData)(vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ma_ETC___05F_d10242))
            ? vlTOPp->mkSam__DOT__product___05Fh524238
            : vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_b_946_BIT_15_947_THEN_INV_ETC___05F_d10344);
    vlTOPp->mkSam__DOT__y___05Fh37300 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37356) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh37357));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh50985 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh50939);
    vlTOPp->mkSam__DOT__y___05Fh68996 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69052) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh69053));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh82681 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh82635);
    vlTOPp->mkSam__DOT__y___05Fh100442 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100498) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh100499));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh114127 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh114081);
    vlTOPp->mkSam__DOT__y___05Fh131889 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131945) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh131946));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh145574 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh145528);
    vlTOPp->mkSam__DOT__y___05Fh163510 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163566) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh163567));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh177195 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh177149);
    vlTOPp->mkSam__DOT__y___05Fh195082 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195138) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh195139));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh208767 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh208721);
    vlTOPp->mkSam__DOT__y___05Fh226528 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226584) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh226585));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh240213 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh240167);
    vlTOPp->mkSam__DOT__y___05Fh257975 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258031) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258032));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh271660 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh271614);
    vlTOPp->mkSam__DOT__y___05Fh289596 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289652) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh289653));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh303281 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh303235);
    vlTOPp->mkSam__DOT__y___05Fh321168 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321224) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321225));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh334853 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh334807);
    vlTOPp->mkSam__DOT__y___05Fh352614 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352670) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh352671));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh366299 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh366253);
    vlTOPp->mkSam__DOT__y___05Fh384061 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384117) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh384118));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh397746 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh397700);
    vlTOPp->mkSam__DOT__y___05Fh415683 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415739) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh415740));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh429368 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh429322);
    vlTOPp->mkSam__DOT__y___05Fh447256 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447312) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh447313));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh460941 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh460895);
    vlTOPp->mkSam__DOT__y___05Fh478703 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478759) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh478760));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh492388 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh492342);
    vlTOPp->mkSam__DOT__y___05Fh510151 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510207) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510208));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh523836 
        = (~ vlTOPp->mkSam__DOT__product___05F_2___05Fh523790);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_0_b_43_BIT_6_46_THEN___05FETC___05F_d403 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37299) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh37300));
    vlTOPp->mkSam__DOT__y___05Fh37545 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh37300) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh37299));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh50986 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh50985);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_1_b_96_BIT_6_99_THEN___05FETC___05F_d1056 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh68995) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh68996));
    vlTOPp->mkSam__DOT__y___05Fh69241 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh68996) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh68995));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh82682 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh82681);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_2_b_449_BIT_6_452_THE_ETC___05F_d1709 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100441) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh100442));
    vlTOPp->mkSam__DOT__y___05Fh100687 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh100442) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh100441));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh114128 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh114127);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2363 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh131888) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh131889));
    vlTOPp->mkSam__DOT__y___05Fh132134 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh131889) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh131888));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh145575 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh145574);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3016 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163509) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh163510));
    vlTOPp->mkSam__DOT__y___05Fh163755 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh163510) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh163509));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh177196 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh177195);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3669 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195081) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195082));
    vlTOPp->mkSam__DOT__y___05Fh195327 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195082) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195081));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh208768 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh208767);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4322 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226527) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh226528));
    vlTOPp->mkSam__DOT__y___05Fh226773 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh226528) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh226527));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh240214 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh240213);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4976 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh257974) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh257975));
    vlTOPp->mkSam__DOT__y___05Fh258220 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh257975) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh257974));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh271661 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh271660);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5629 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289595) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh289596));
    vlTOPp->mkSam__DOT__y___05Fh289841 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh289596) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh289595));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh303282 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh303281);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6282 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321167) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321168));
    vlTOPp->mkSam__DOT__y___05Fh321413 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321168) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321167));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh334854 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh334853);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6935 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352613) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh352614));
    vlTOPp->mkSam__DOT__y___05Fh352859 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh352614) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh352613));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh366300 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh366299);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7589 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384060) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384061));
    vlTOPp->mkSam__DOT__y___05Fh384306 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384061) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384060));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh397747 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh397746);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8243 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415682) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh415683));
    vlTOPp->mkSam__DOT__y___05Fh415928 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh415683) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh415682));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh429369 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh429368);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8897 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447255) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh447256));
    vlTOPp->mkSam__DOT__y___05Fh447501 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh447256) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh447255));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh460942 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh460941);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9551 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478702) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh478703));
    vlTOPp->mkSam__DOT__y___05Fh478948 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh478703) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh478702));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh492389 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh492388);
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10206 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510150) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510151));
    vlTOPp->mkSam__DOT__y___05Fh510396 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510151) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510150));
    vlTOPp->mkSam__DOT__product___05F_1___05Fh523837 
        = ((IData)(1U) + vlTOPp->mkSam__DOT__product___05F_1___05Fh523836);
    vlTOPp->mkSam__DOT__y___05Fh37488 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh37544) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh37545));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_41_BIT_15_42_EQ_mac_matrix_ETC___05F_d554 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_0_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh50939
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh50986);
    vlTOPp->mkSam__DOT__y___05Fh69184 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh69240) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh69241));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_94_BIT_15_95_EQ_mac_matrix_ETC___05F_d1207 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_1_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh82635
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh82682);
    vlTOPp->mkSam__DOT__y___05Fh100630 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh100686) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh100687));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_447_BIT_15_448_EQ_mac_matr_ETC___05F_d1860 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_2_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh114081
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh114128);
    vlTOPp->mkSam__DOT__y___05Fh132077 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132133) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132134));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_0_3_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh145528
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh145575);
    vlTOPp->mkSam__DOT__y___05Fh163698 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163754) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh163755));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_0_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh177149
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh177196);
    vlTOPp->mkSam__DOT__y___05Fh195270 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195326) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh195327));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_1_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh208721
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh208768);
    vlTOPp->mkSam__DOT__y___05Fh226716 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226772) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh226773));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_2_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh240167
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh240214);
    vlTOPp->mkSam__DOT__y___05Fh258163 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258219) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258220));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_1_3_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh271614
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh271661);
    vlTOPp->mkSam__DOT__y___05Fh289784 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289840) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh289841));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_0_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh303235
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh303282);
    vlTOPp->mkSam__DOT__y___05Fh321356 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321412) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321413));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_1_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh334807
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh334854);
    vlTOPp->mkSam__DOT__y___05Fh352802 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352858) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh352859));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_2_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh366253
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh366300);
    vlTOPp->mkSam__DOT__y___05Fh384249 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384305) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh384306));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_2_3_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh397700
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh397747);
    vlTOPp->mkSam__DOT__y___05Fh415871 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh415927) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh415928));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8394 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_0_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh429322
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh429369);
    vlTOPp->mkSam__DOT__y___05Fh447444 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447500) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh447501));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_1_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh460895
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh460942);
    vlTOPp->mkSam__DOT__y___05Fh478891 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478947) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh478948));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_2_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh492342
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh492389);
    vlTOPp->mkSam__DOT__y___05Fh510339 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510395) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510396));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
        = (((1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_a) 
                   >> 0xfU)) == (1U & ((IData)(vlTOPp->mkSam__DOT__mac_matrix_3_3_b) 
                                       >> 0xfU))) ? vlTOPp->mkSam__DOT__product___05F_2___05Fh523790
            : vlTOPp->mkSam__DOT__product___05F_1___05Fh523837);
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2362 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132076) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132077));
    vlTOPp->mkSam__DOT__y___05Fh132322 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132077) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132076));
    vlTOPp->mkSam__DOT__x___05Fh152268 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh152327 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh152074 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh152133 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh151880 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh151939 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh151686 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh151745 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh151492 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh151551 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh151298 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh151357 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh151104 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh151163 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh150910 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_m_ETC___05Fq36 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh150969 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh150716 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh150775 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh150522 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh150581 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh150328 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh150387 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh150134 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh150193 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh149940 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh149999 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh149746 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh149805 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh149552 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh149611 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh149358 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh149417 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh149164 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh149223 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh148970 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh149029 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh148776 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh148835 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh148582 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh148641 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh148388 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh148447 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh148194 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh148253 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh148000 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh148059 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh147806 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh147865 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh147612 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh147671 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh147418 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh147477 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh147224 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh147283 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh147030 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh147089 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh146836 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh146895 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh146642 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh146701 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh146448 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_0_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh146449 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2514 
                                                & vlTOPp->mkSam__DOT__mac_matrix_0_3_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3015 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163697) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh163698));
    vlTOPp->mkSam__DOT__y___05Fh163943 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh163698) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh163697));
    vlTOPp->mkSam__DOT__x___05Fh183889 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh183948 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh183695 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh183754 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh183501 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh183560 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh183307 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh183366 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh183113 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh183172 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh182919 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh182978 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh182725 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh182784 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh182531 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_m_ETC___05Fq37 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh182590 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh182337 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh182396 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh182143 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh182202 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh181949 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh182008 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh181755 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh181814 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh181561 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh181620 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh181367 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh181426 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh181173 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh181232 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh180979 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh181038 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh180785 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh180844 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh180591 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh180650 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh180397 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh180456 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh180203 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh180262 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh180009 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh180068 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh179815 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh179874 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh179621 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh179680 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh179427 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh179486 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh179233 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh179292 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh179039 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh179098 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh178845 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh178904 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh178651 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh178710 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh178457 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh178516 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh178263 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh178322 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh178069 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_0_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh178070 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3167 
                                                & vlTOPp->mkSam__DOT__mac_matrix_1_0_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3668 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195269) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195270));
    vlTOPp->mkSam__DOT__y___05Fh195515 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195270) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195269));
    vlTOPp->mkSam__DOT__x___05Fh215461 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh215520 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh215267 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh215326 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh215073 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh215132 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh214879 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh214938 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh214685 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh214744 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh214491 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh214550 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh214297 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh214356 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh214103 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_m_ETC___05Fq38 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh214162 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh213909 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh213968 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh213715 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh213774 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh213521 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh213580 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh213327 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh213386 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh213133 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh213192 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh212939 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh212998 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh212745 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh212804 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh212551 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh212610 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh212357 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh212416 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh212163 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh212222 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh211969 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh212028 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh211775 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh211834 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh211581 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh211640 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh211387 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh211446 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh211193 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh211252 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh210999 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh211058 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh210805 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh210864 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh210611 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh210670 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh210417 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh210476 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh210223 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh210282 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh210029 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh210088 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh209835 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh209894 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh209641 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_1_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh209642 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d3820 
                                                & vlTOPp->mkSam__DOT__mac_matrix_1_1_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4321 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226715) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh226716));
    vlTOPp->mkSam__DOT__y___05Fh226961 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh226716) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh226715));
    vlTOPp->mkSam__DOT__x___05Fh246907 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh246966 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh246713 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh246772 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh246519 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh246578 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh246325 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh246384 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh246131 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh246190 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh245937 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh245996 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh245743 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh245802 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh245549 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_m_ETC___05Fq39 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh245608 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh245355 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh245414 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh245161 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh245220 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh244967 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh245026 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh244773 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh244832 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh244579 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh244638 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh244385 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh244444 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh244191 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh244250 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh243997 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh244056 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh243803 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh243862 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh243609 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh243668 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh243415 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh243474 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh243221 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh243280 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh243027 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh243086 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh242833 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh242892 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh242639 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh242698 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh242445 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh242504 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh242251 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh242310 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh242057 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh242116 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh241863 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh241922 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh241669 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh241728 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh241475 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh241534 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh241281 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh241340 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh241087 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh241088 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4473 
                                                & vlTOPp->mkSam__DOT__mac_matrix_1_2_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4975 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258162) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258163));
    vlTOPp->mkSam__DOT__y___05Fh258408 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258163) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258162));
    vlTOPp->mkSam__DOT__x___05Fh278354 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh278413 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh278160 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh278219 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh277966 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh278025 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh277772 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh277831 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh277578 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh277637 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh277384 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh277443 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh277190 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh277249 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh276996 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_m_ETC___05Fq40 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh277055 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh276802 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh276861 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh276608 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh276667 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh276414 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh276473 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh276220 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh276279 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh276026 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh276085 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh275832 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh275891 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh275638 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh275697 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh275444 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh275503 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh275250 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh275309 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh275056 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh275115 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh274862 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh274921 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh274668 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh274727 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh274474 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh274533 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh274280 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh274339 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh274086 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh274145 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh273892 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh273951 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh273698 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh273757 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh273504 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh273563 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh273310 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh273369 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh273116 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh273175 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh272922 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh272981 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh272728 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh272787 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh272534 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_1_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh272535 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5127 
                                                & vlTOPp->mkSam__DOT__mac_matrix_1_3_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5628 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289783) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh289784));
    vlTOPp->mkSam__DOT__y___05Fh290029 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh289784) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh289783));
    vlTOPp->mkSam__DOT__x___05Fh309975 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh310034 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh309781 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh309840 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh309587 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh309646 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh309393 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh309452 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh309199 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh309258 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh309005 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh309064 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh308811 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh308870 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh308617 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_m_ETC___05Fq41 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh308676 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh308423 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh308482 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh308229 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh308288 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh308035 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh308094 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh307841 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh307900 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh307647 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh307706 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh307453 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh307512 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh307259 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh307318 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh307065 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh307124 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh306871 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh306930 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh306677 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh306736 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh306483 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh306542 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh306289 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh306348 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh306095 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh306154 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh305901 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh305960 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh305707 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh305766 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh305513 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh305572 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh305319 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh305378 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh305125 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh305184 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh304931 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh304990 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh304737 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh304796 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh304543 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh304602 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh304349 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh304408 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh304155 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_0_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh304156 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d5780 
                                                & vlTOPp->mkSam__DOT__mac_matrix_2_0_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6281 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321355) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321356));
    vlTOPp->mkSam__DOT__y___05Fh321601 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321356) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321355));
    vlTOPp->mkSam__DOT__x___05Fh341547 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh341606 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh341353 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh341412 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh341159 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh341218 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh340965 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh341024 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh340771 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh340830 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh340577 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh340636 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh340383 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh340442 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh340189 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_m_ETC___05Fq42 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh340248 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh339995 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh340054 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh339801 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh339860 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh339607 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh339666 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh339413 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh339472 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh339219 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh339278 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh339025 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh339084 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh338831 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh338890 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh338637 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh338696 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh338443 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh338502 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh338249 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh338308 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh338055 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh338114 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh337861 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh337920 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh337667 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh337726 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh337473 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh337532 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh337279 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh337338 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh337085 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh337144 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh336891 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh336950 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh336697 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh336756 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh336503 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh336562 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh336309 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh336368 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh336115 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh336174 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh335921 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh335980 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh335727 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_1_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh335728 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6433 
                                                & vlTOPp->mkSam__DOT__mac_matrix_2_1_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6934 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352801) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh352802));
    vlTOPp->mkSam__DOT__y___05Fh353047 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh352802) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh352801));
    vlTOPp->mkSam__DOT__x___05Fh372993 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh373052 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh372799 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh372858 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh372605 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh372664 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh372411 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh372470 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh372217 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh372276 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh372023 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh372082 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh371829 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh371888 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh371635 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_m_ETC___05Fq43 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh371694 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh371441 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh371500 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh371247 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh371306 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh371053 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh371112 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh370859 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh370918 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh370665 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh370724 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh370471 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh370530 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh370277 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh370336 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh370083 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh370142 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh369889 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh369948 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh369695 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh369754 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh369501 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh369560 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh369307 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh369366 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh369113 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh369172 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh368919 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh368978 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh368725 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh368784 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh368531 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh368590 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh368337 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh368396 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh368143 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh368202 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh367949 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh368008 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh367755 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh367814 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh367561 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh367620 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh367367 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh367426 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh367173 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh367174 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7086 
                                                & vlTOPp->mkSam__DOT__mac_matrix_2_2_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7588 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384248) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384249));
    vlTOPp->mkSam__DOT__y___05Fh384494 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384249) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384248));
    vlTOPp->mkSam__DOT__x___05Fh404440 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh404499 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh404246 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh404305 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh404052 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh404111 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh403858 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh403917 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh403664 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh403723 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh403470 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh403529 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh403276 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh403335 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh403082 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_m_ETC___05Fq44 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh403141 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh402888 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh402947 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh402694 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh402753 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh402500 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh402559 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh402306 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh402365 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh402112 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh402171 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh401918 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh401977 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh401724 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh401783 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh401530 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh401589 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh401336 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh401395 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh401142 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh401201 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh400948 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh401007 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh400754 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh400813 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh400560 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh400619 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh400366 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh400425 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh400172 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh400231 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh399978 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh400037 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh399784 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh399843 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh399590 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh399649 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh399396 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh399455 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh399202 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh399261 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh399008 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh399067 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh398814 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh398873 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh398620 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_2_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh398621 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7740 
                                                & vlTOPp->mkSam__DOT__mac_matrix_2_3_c));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8896 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447443) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh447444));
    vlTOPp->mkSam__DOT__y___05Fh447689 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh447444) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh447443));
    vlTOPp->mkSam__DOT__x___05Fh467635 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh467694 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh467441 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh467500 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh467247 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh467306 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh467053 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh467112 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh466859 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh466918 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9048 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_1_c) 
                                                >> 0x1aU));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9550 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh478890) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh478891));
    vlTOPp->mkSam__DOT__y___05Fh479136 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh478891) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh478890));
    vlTOPp->mkSam__DOT__x___05Fh499082 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh499141 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh498888 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh498947 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh498694 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh498753 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh498500 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh498559 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh498306 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh498365 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh498112 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh498171 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh497918 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh497977 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh497724 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_m_ETC___05Fq47 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh497783 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh497530 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh497589 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh497336 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh497395 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh497142 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh497201 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh496948 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh497007 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh496754 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh496813 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh496560 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh496619 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh496366 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh496425 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh496172 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh496231 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh495978 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh496037 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh495784 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh495843 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh495590 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh495649 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh495396 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh495455 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh495202 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh495261 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh495008 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh495067 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh494814 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh494873 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh494620 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh494679 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh494426 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh494485 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh494232 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh494291 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh494038 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh494097 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh493844 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh493903 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh493650 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh493709 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh493456 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh493515 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh493262 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_2_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh493263 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9702 
                                                & vlTOPp->mkSam__DOT__mac_matrix_3_2_c));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10205 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510338) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510339));
    vlTOPp->mkSam__DOT__y___05Fh510584 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510339) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510338));
    vlTOPp->mkSam__DOT__x___05Fh530530 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1fU));
    vlTOPp->mkSam__DOT__x___05Fh530589 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh530336 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1eU));
    vlTOPp->mkSam__DOT__x___05Fh530395 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh530142 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1dU));
    vlTOPp->mkSam__DOT__x___05Fh530201 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh529948 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1cU));
    vlTOPp->mkSam__DOT__x___05Fh530007 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh529754 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1bU));
    vlTOPp->mkSam__DOT__x___05Fh529813 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh529560 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x1aU));
    vlTOPp->mkSam__DOT__x___05Fh529619 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh529366 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x19U));
    vlTOPp->mkSam__DOT__x___05Fh529425 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__x___05Fh529172 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x18U));
    vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_m_ETC___05Fq48 
        = ((1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                  ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c))
            ? 1U : 0U);
    vlTOPp->mkSam__DOT__x___05Fh529231 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh528978 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x17U));
    vlTOPp->mkSam__DOT__x___05Fh529037 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh528784 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x16U));
    vlTOPp->mkSam__DOT__x___05Fh528843 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh528590 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x15U));
    vlTOPp->mkSam__DOT__x___05Fh528649 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh528396 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x14U));
    vlTOPp->mkSam__DOT__x___05Fh528455 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh528202 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x13U));
    vlTOPp->mkSam__DOT__x___05Fh528261 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh528008 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x12U));
    vlTOPp->mkSam__DOT__x___05Fh528067 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh527814 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x11U));
    vlTOPp->mkSam__DOT__x___05Fh527873 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh527620 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0x10U));
    vlTOPp->mkSam__DOT__x___05Fh527679 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh527426 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xfU));
    vlTOPp->mkSam__DOT__x___05Fh527485 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh527232 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xeU));
    vlTOPp->mkSam__DOT__x___05Fh527291 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh527038 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xdU));
    vlTOPp->mkSam__DOT__x___05Fh527097 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh526844 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xcU));
    vlTOPp->mkSam__DOT__x___05Fh526903 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh526650 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xbU));
    vlTOPp->mkSam__DOT__x___05Fh526709 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh526456 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 0xaU));
    vlTOPp->mkSam__DOT__x___05Fh526515 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh526262 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 9U));
    vlTOPp->mkSam__DOT__x___05Fh526321 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh526068 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 8U));
    vlTOPp->mkSam__DOT__x___05Fh526127 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh525874 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 7U));
    vlTOPp->mkSam__DOT__x___05Fh525933 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh525680 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 6U));
    vlTOPp->mkSam__DOT__x___05Fh525739 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh525486 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 5U));
    vlTOPp->mkSam__DOT__x___05Fh525545 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh525292 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 4U));
    vlTOPp->mkSam__DOT__x___05Fh525351 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh525098 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 3U));
    vlTOPp->mkSam__DOT__x___05Fh525157 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh524904 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 2U));
    vlTOPp->mkSam__DOT__x___05Fh524963 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 & vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__x___05Fh524710 = (1U & ((vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                 ^ vlTOPp->mkSam__DOT__mac_matrix_3_3_c) 
                                                >> 1U));
    vlTOPp->mkSam__DOT__y___05Fh524711 = (1U & (vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10357 
                                                & vlTOPp->mkSam__DOT__mac_matrix_3_3_c));
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
    vlTOPp->mkSam__DOT__y___05Fh132265 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132321) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132322));
    vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_matr_ETC___05F_d2735 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh146448) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh146449)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_0_3_a_101_BIT_15_102_EQ_mac_m_ETC___05Fq36));
    vlTOPp->mkSam__DOT__y___05Fh146702 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh146449) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh146448));
    vlTOPp->mkSam__DOT__y___05Fh163886 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163942) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh163943));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_matr_ETC___05F_d3388 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh178069) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh178070)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_0_a_754_BIT_15_755_EQ_mac_m_ETC___05Fq37));
    vlTOPp->mkSam__DOT__y___05Fh178323 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178070) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178069));
    vlTOPp->mkSam__DOT__y___05Fh195458 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195514) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh195515));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_matr_ETC___05F_d4041 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh209641) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh209642)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_1_a_407_BIT_15_408_EQ_mac_m_ETC___05Fq38));
    vlTOPp->mkSam__DOT__y___05Fh209895 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh209642) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh209641));
    vlTOPp->mkSam__DOT__y___05Fh226904 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226960) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh226961));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_matr_ETC___05F_d4694 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh241087) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh241088)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_2_a_060_BIT_15_061_EQ_mac_m_ETC___05Fq39));
    vlTOPp->mkSam__DOT__y___05Fh241341 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241088) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241087));
    vlTOPp->mkSam__DOT__y___05Fh258351 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258407) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258408));
    vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_matr_ETC___05F_d5348 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh272534) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh272535)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_1_3_a_714_BIT_15_715_EQ_mac_m_ETC___05Fq40));
    vlTOPp->mkSam__DOT__y___05Fh272788 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh272535) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh272534));
    vlTOPp->mkSam__DOT__y___05Fh289972 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290028) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290029));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_matr_ETC___05F_d6001 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh304155) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh304156)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_0_a_367_BIT_15_368_EQ_mac_m_ETC___05Fq41));
    vlTOPp->mkSam__DOT__y___05Fh304409 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304156) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304155));
    vlTOPp->mkSam__DOT__y___05Fh321544 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321600) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321601));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_matr_ETC___05F_d6654 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh335727) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh335728)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_1_a_020_BIT_15_021_EQ_mac_m_ETC___05Fq42));
    vlTOPp->mkSam__DOT__y___05Fh335981 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh335728) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh335727));
    vlTOPp->mkSam__DOT__y___05Fh352990 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353046) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353047));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_matr_ETC___05F_d7307 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh367173) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh367174)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_2_a_673_BIT_15_674_EQ_mac_m_ETC___05Fq43));
    vlTOPp->mkSam__DOT__y___05Fh367427 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367174) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367173));
    vlTOPp->mkSam__DOT__y___05Fh384437 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384493) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh384494));
    vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_matr_ETC___05F_d7961 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh398620) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh398621)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_2_3_a_327_BIT_15_328_EQ_mac_m_ETC___05Fq44));
    vlTOPp->mkSam__DOT__y___05Fh398874 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh398621) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh398620));
    vlTOPp->mkSam__DOT__y___05Fh416059 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416115) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416116));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_matr_ETC___05F_d8615 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh430242) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh430243)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_0_a_981_BIT_15_982_EQ_mac_m_ETC___05Fq45));
    vlTOPp->mkSam__DOT__y___05Fh430496 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh430243) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh430242));
    vlTOPp->mkSam__DOT__y___05Fh447632 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447688) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh447689));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_matr_ETC___05F_d9269 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh461815) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh461816)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_1_a_635_BIT_15_636_EQ_mac_m_ETC___05Fq46));
    vlTOPp->mkSam__DOT__y___05Fh462069 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh461816) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh461815));
    vlTOPp->mkSam__DOT__y___05Fh479079 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479135) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479136));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_matr_ETC___05F_d9923 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh493262) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh493263)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_2_a_289_BIT_15_290_EQ_mac_m_ETC___05Fq47));
    vlTOPp->mkSam__DOT__y___05Fh493516 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh493263) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh493262));
    vlTOPp->mkSam__DOT__y___05Fh510527 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510583) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510584));
    vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_matr_ETC___05F_d10578 
        = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh524710) 
             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh524711)) 
            << 1U) | (1U & vlTOPp->mkSam__DOT__IF_IF_mac_matrix_3_3_a_944_BIT_15_945_EQ_mac_m_ETC___05Fq48));
    vlTOPp->mkSam__DOT__y___05Fh524964 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh524711) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh524710));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2361 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132264) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132265));
    vlTOPp->mkSam__DOT__y___05Fh132510 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132265) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132264));
    vlTOPp->mkSam__DOT__y___05Fh146643 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh146701) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh146702));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3014 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh163885) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh163886));
    vlTOPp->mkSam__DOT__y___05Fh164131 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh163886) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh163885));
    vlTOPp->mkSam__DOT__y___05Fh178264 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178322) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178323));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3667 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195457) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195458));
    vlTOPp->mkSam__DOT__y___05Fh195703 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195458) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195457));
    vlTOPp->mkSam__DOT__y___05Fh209836 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh209894) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh209895));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4320 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh226903) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh226904));
    vlTOPp->mkSam__DOT__y___05Fh227149 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh226904) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh226903));
    vlTOPp->mkSam__DOT__y___05Fh241282 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241340) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241341));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4974 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258350) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258351));
    vlTOPp->mkSam__DOT__y___05Fh258596 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258351) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258350));
    vlTOPp->mkSam__DOT__y___05Fh272729 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh272787) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh272788));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5627 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh289971) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh289972));
    vlTOPp->mkSam__DOT__y___05Fh290217 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh289972) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh289971));
    vlTOPp->mkSam__DOT__y___05Fh304350 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304408) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304409));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6280 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321543) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321544));
    vlTOPp->mkSam__DOT__y___05Fh321789 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321544) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321543));
    vlTOPp->mkSam__DOT__y___05Fh335922 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh335980) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh335981));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6933 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh352989) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh352990));
    vlTOPp->mkSam__DOT__y___05Fh353235 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh352990) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh352989));
    vlTOPp->mkSam__DOT__y___05Fh367368 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh367426) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh367427));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7587 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384436) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384437));
    vlTOPp->mkSam__DOT__y___05Fh384682 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384437) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384436));
    vlTOPp->mkSam__DOT__y___05Fh398815 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh398873) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh398874));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8241 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416058) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416059));
    vlTOPp->mkSam__DOT__y___05Fh416304 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416059) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416058));
    vlTOPp->mkSam__DOT__y___05Fh430437 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh430495) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh430496));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8895 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447631) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh447632));
    vlTOPp->mkSam__DOT__y___05Fh447877 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh447632) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh447631));
    vlTOPp->mkSam__DOT__y___05Fh462010 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462068) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462069));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9549 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479078) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479079));
    vlTOPp->mkSam__DOT__y___05Fh479324 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479079) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479078));
    vlTOPp->mkSam__DOT__y___05Fh493457 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh493515) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh493516));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10204 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510526) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510527));
    vlTOPp->mkSam__DOT__y___05Fh510772 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510527) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510526));
    vlTOPp->mkSam__DOT__y___05Fh524905 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh524963) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh524964));
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
    vlTOPp->mkSam__DOT__y___05Fh132453 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132509) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132510));
    vlTOPp->mkSam__DOT__y___05Fh146896 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh146643) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh146642));
    vlTOPp->mkSam__DOT__y___05Fh164074 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164130) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164131));
    vlTOPp->mkSam__DOT__y___05Fh178517 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178264) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178263));
    vlTOPp->mkSam__DOT__y___05Fh195646 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195702) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh195703));
    vlTOPp->mkSam__DOT__y___05Fh210089 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh209836) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh209835));
    vlTOPp->mkSam__DOT__y___05Fh227092 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227148) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227149));
    vlTOPp->mkSam__DOT__y___05Fh241535 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241282) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241281));
    vlTOPp->mkSam__DOT__y___05Fh258539 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258595) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258596));
    vlTOPp->mkSam__DOT__y___05Fh272982 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh272729) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh272728));
    vlTOPp->mkSam__DOT__y___05Fh290160 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290216) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290217));
    vlTOPp->mkSam__DOT__y___05Fh304603 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304350) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304349));
    vlTOPp->mkSam__DOT__y___05Fh321732 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321788) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh321789));
    vlTOPp->mkSam__DOT__y___05Fh336175 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh335922) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh335921));
    vlTOPp->mkSam__DOT__y___05Fh353178 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353234) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353235));
    vlTOPp->mkSam__DOT__y___05Fh367621 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367368) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367367));
    vlTOPp->mkSam__DOT__y___05Fh384625 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384681) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh384682));
    vlTOPp->mkSam__DOT__y___05Fh399068 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh398815) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh398814));
    vlTOPp->mkSam__DOT__y___05Fh416247 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416303) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416304));
    vlTOPp->mkSam__DOT__y___05Fh430690 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh430437) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh430436));
    vlTOPp->mkSam__DOT__y___05Fh447820 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447876) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh447877));
    vlTOPp->mkSam__DOT__y___05Fh462263 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462010) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462009));
    vlTOPp->mkSam__DOT__y___05Fh479267 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479323) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479324));
    vlTOPp->mkSam__DOT__y___05Fh493710 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh493457) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh493456));
    vlTOPp->mkSam__DOT__y___05Fh510715 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510771) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh510772));
    vlTOPp->mkSam__DOT__y___05Fh525158 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh524905) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh524904));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2360 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132452) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132453));
    vlTOPp->mkSam__DOT__y___05Fh132698 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132453) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132452));
    vlTOPp->mkSam__DOT__y___05Fh146837 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh146895) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh146896));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3013 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164073) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164074));
    vlTOPp->mkSam__DOT__y___05Fh164319 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164074) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164073));
    vlTOPp->mkSam__DOT__y___05Fh178458 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178516) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178517));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3666 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195645) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195646));
    vlTOPp->mkSam__DOT__y___05Fh195891 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195646) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195645));
    vlTOPp->mkSam__DOT__y___05Fh210030 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210088) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210089));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4319 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227091) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227092));
    vlTOPp->mkSam__DOT__y___05Fh227337 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227092) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227091));
    vlTOPp->mkSam__DOT__y___05Fh241476 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241534) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241535));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4973 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258538) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258539));
    vlTOPp->mkSam__DOT__y___05Fh258784 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258539) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258538));
    vlTOPp->mkSam__DOT__y___05Fh272923 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh272981) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh272982));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5626 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290159) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290160));
    vlTOPp->mkSam__DOT__y___05Fh290405 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290160) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290159));
    vlTOPp->mkSam__DOT__y___05Fh304544 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304602) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304603));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6279 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321731) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321732));
    vlTOPp->mkSam__DOT__y___05Fh321977 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321732) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321731));
    vlTOPp->mkSam__DOT__y___05Fh336116 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336174) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336175));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6932 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353177) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353178));
    vlTOPp->mkSam__DOT__y___05Fh353423 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353178) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353177));
    vlTOPp->mkSam__DOT__y___05Fh367562 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh367620) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh367621));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7586 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384624) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384625));
    vlTOPp->mkSam__DOT__y___05Fh384870 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384625) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384624));
    vlTOPp->mkSam__DOT__y___05Fh399009 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399067) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399068));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8240 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416246) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416247));
    vlTOPp->mkSam__DOT__y___05Fh416492 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416247) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416246));
    vlTOPp->mkSam__DOT__y___05Fh430631 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh430689) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh430690));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8894 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh447819) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh447820));
    vlTOPp->mkSam__DOT__y___05Fh448065 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh447820) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh447819));
    vlTOPp->mkSam__DOT__y___05Fh462204 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462262) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462263));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9548 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479266) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479267));
    vlTOPp->mkSam__DOT__y___05Fh479512 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479267) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479266));
    vlTOPp->mkSam__DOT__y___05Fh493651 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh493709) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh493710));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10203 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510714) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510715));
    vlTOPp->mkSam__DOT__y___05Fh510960 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510715) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510714));
    vlTOPp->mkSam__DOT__y___05Fh525099 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525157) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525158));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2359 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132640) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132641));
    vlTOPp->mkSam__DOT__y___05Fh132886 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132641) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132640));
    vlTOPp->mkSam__DOT__y___05Fh147031 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147089) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147090));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3012 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164261) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164262));
    vlTOPp->mkSam__DOT__y___05Fh164507 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164262) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164261));
    vlTOPp->mkSam__DOT__y___05Fh178652 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178710) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178711));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3665 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh195833) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh195834));
    vlTOPp->mkSam__DOT__y___05Fh196079 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh195834) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh195833));
    vlTOPp->mkSam__DOT__y___05Fh210224 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210282) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210283));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4318 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227279) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227280));
    vlTOPp->mkSam__DOT__y___05Fh227525 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227280) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227279));
    vlTOPp->mkSam__DOT__y___05Fh241670 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241728) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241729));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4972 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258726) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258727));
    vlTOPp->mkSam__DOT__y___05Fh258972 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258727) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258726));
    vlTOPp->mkSam__DOT__y___05Fh273117 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273175) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273176));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5625 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290347) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290348));
    vlTOPp->mkSam__DOT__y___05Fh290593 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290348) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290347));
    vlTOPp->mkSam__DOT__y___05Fh304738 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304796) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304797));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6278 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh321919) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh321920));
    vlTOPp->mkSam__DOT__y___05Fh322165 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh321920) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh321919));
    vlTOPp->mkSam__DOT__y___05Fh336310 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336368) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336369));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6931 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353365) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353366));
    vlTOPp->mkSam__DOT__y___05Fh353611 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353366) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353365));
    vlTOPp->mkSam__DOT__y___05Fh367756 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh367814) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh367815));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7585 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh384812) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh384813));
    vlTOPp->mkSam__DOT__y___05Fh385058 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh384813) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh384812));
    vlTOPp->mkSam__DOT__y___05Fh399203 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399261) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399262));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8239 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416434) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416435));
    vlTOPp->mkSam__DOT__y___05Fh416680 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416435) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416434));
    vlTOPp->mkSam__DOT__y___05Fh430825 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh430883) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh430884));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8893 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448007) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448008));
    vlTOPp->mkSam__DOT__y___05Fh448253 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448008) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448007));
    vlTOPp->mkSam__DOT__y___05Fh462398 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462456) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462457));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9547 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479454) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479455));
    vlTOPp->mkSam__DOT__y___05Fh479700 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479455) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479454));
    vlTOPp->mkSam__DOT__y___05Fh493845 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh493903) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh493904));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10202 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh510902) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh510903));
    vlTOPp->mkSam__DOT__y___05Fh511148 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh510903) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh510902));
    vlTOPp->mkSam__DOT__y___05Fh525293 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525351) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525352));
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
    vlTOPp->mkSam__DOT__y___05Fh132829 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132885) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh132886));
    vlTOPp->mkSam__DOT__y___05Fh147284 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147031) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147030));
    vlTOPp->mkSam__DOT__y___05Fh164450 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164506) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164507));
    vlTOPp->mkSam__DOT__y___05Fh178905 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh178652) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh178651));
    vlTOPp->mkSam__DOT__y___05Fh196022 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196078) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196079));
    vlTOPp->mkSam__DOT__y___05Fh210477 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh210224) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210223));
    vlTOPp->mkSam__DOT__y___05Fh227468 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227524) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227525));
    vlTOPp->mkSam__DOT__y___05Fh241923 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh241670) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh241669));
    vlTOPp->mkSam__DOT__y___05Fh258915 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258971) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh258972));
    vlTOPp->mkSam__DOT__y___05Fh273370 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273117) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273116));
    vlTOPp->mkSam__DOT__y___05Fh290536 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290592) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290593));
    vlTOPp->mkSam__DOT__y___05Fh304991 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh304738) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh304737));
    vlTOPp->mkSam__DOT__y___05Fh322108 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322164) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322165));
    vlTOPp->mkSam__DOT__y___05Fh336563 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh336310) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh336309));
    vlTOPp->mkSam__DOT__y___05Fh353554 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353610) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353611));
    vlTOPp->mkSam__DOT__y___05Fh368009 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh367756) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh367755));
    vlTOPp->mkSam__DOT__y___05Fh385001 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385057) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385058));
    vlTOPp->mkSam__DOT__y___05Fh399456 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399203) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399202));
    vlTOPp->mkSam__DOT__y___05Fh416623 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416679) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh416680));
    vlTOPp->mkSam__DOT__y___05Fh431078 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh430825) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh430824));
    vlTOPp->mkSam__DOT__y___05Fh448196 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448252) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh448253));
    vlTOPp->mkSam__DOT__y___05Fh462651 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462398) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462397));
    vlTOPp->mkSam__DOT__y___05Fh479643 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479699) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh479700));
    vlTOPp->mkSam__DOT__y___05Fh494098 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh493845) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh493844));
    vlTOPp->mkSam__DOT__y___05Fh511091 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511147) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511148));
    vlTOPp->mkSam__DOT__y___05Fh525546 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh525293) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh525292));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2358 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh132828) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh132829));
    vlTOPp->mkSam__DOT__y___05Fh133074 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh132829) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh132828));
    vlTOPp->mkSam__DOT__y___05Fh147225 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147283) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147284));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3011 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164449) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164450));
    vlTOPp->mkSam__DOT__y___05Fh164695 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164450) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164449));
    vlTOPp->mkSam__DOT__y___05Fh178846 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh178904) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh178905));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3664 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196021) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196022));
    vlTOPp->mkSam__DOT__y___05Fh196267 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196022) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196021));
    vlTOPp->mkSam__DOT__y___05Fh210418 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210476) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210477));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4317 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227467) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227468));
    vlTOPp->mkSam__DOT__y___05Fh227713 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227468) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227467));
    vlTOPp->mkSam__DOT__y___05Fh241864 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh241922) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh241923));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4971 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh258914) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh258915));
    vlTOPp->mkSam__DOT__y___05Fh259160 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh258915) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh258914));
    vlTOPp->mkSam__DOT__y___05Fh273311 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273369) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273370));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5624 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290535) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290536));
    vlTOPp->mkSam__DOT__y___05Fh290781 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290536) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290535));
    vlTOPp->mkSam__DOT__y___05Fh304932 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh304990) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh304991));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6277 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322107) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322108));
    vlTOPp->mkSam__DOT__y___05Fh322353 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322108) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322107));
    vlTOPp->mkSam__DOT__y___05Fh336504 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336562) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336563));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6930 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353553) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353554));
    vlTOPp->mkSam__DOT__y___05Fh353799 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353554) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353553));
    vlTOPp->mkSam__DOT__y___05Fh367950 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368008) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368009));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7584 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385000) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385001));
    vlTOPp->mkSam__DOT__y___05Fh385246 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385001) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385000));
    vlTOPp->mkSam__DOT__y___05Fh399397 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399455) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399456));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8238 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416622) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416623));
    vlTOPp->mkSam__DOT__y___05Fh416868 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416623) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416622));
    vlTOPp->mkSam__DOT__y___05Fh431019 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431077) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431078));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8892 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448195) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448196));
    vlTOPp->mkSam__DOT__y___05Fh448441 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448196) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448195));
    vlTOPp->mkSam__DOT__y___05Fh462592 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462650) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462651));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9546 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479642) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479643));
    vlTOPp->mkSam__DOT__y___05Fh479888 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479643) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479642));
    vlTOPp->mkSam__DOT__y___05Fh494039 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494097) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494098));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10201 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511090) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511091));
    vlTOPp->mkSam__DOT__y___05Fh511336 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511091) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511090));
    vlTOPp->mkSam__DOT__y___05Fh525487 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525545) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525546));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2357 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133016) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133017));
    vlTOPp->mkSam__DOT__y___05Fh133262 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133017) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133016));
    vlTOPp->mkSam__DOT__y___05Fh147419 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147477) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147478));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3010 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164637) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164638));
    vlTOPp->mkSam__DOT__y___05Fh164883 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164638) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164637));
    vlTOPp->mkSam__DOT__y___05Fh179040 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179098) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179099));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3663 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196209) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196210));
    vlTOPp->mkSam__DOT__y___05Fh196455 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196210) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196209));
    vlTOPp->mkSam__DOT__y___05Fh210612 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210670) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210671));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4316 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227655) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227656));
    vlTOPp->mkSam__DOT__y___05Fh227901 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227656) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227655));
    vlTOPp->mkSam__DOT__y___05Fh242058 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242116) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242117));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4970 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259102) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259103));
    vlTOPp->mkSam__DOT__y___05Fh259348 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259103) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259102));
    vlTOPp->mkSam__DOT__y___05Fh273505 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273563) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273564));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5623 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290723) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290724));
    vlTOPp->mkSam__DOT__y___05Fh290969 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290724) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290723));
    vlTOPp->mkSam__DOT__y___05Fh305126 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305184) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305185));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6276 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322295) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322296));
    vlTOPp->mkSam__DOT__y___05Fh322541 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322296) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322295));
    vlTOPp->mkSam__DOT__y___05Fh336698 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336756) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336757));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6929 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353741) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353742));
    vlTOPp->mkSam__DOT__y___05Fh353987 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353742) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353741));
    vlTOPp->mkSam__DOT__y___05Fh368144 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368202) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368203));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7583 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385188) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385189));
    vlTOPp->mkSam__DOT__y___05Fh385434 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385189) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385188));
    vlTOPp->mkSam__DOT__y___05Fh399591 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399649) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399650));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8237 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416810) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416811));
    vlTOPp->mkSam__DOT__y___05Fh417056 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416811) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416810));
    vlTOPp->mkSam__DOT__y___05Fh431213 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431271) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431272));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8891 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448383) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448384));
    vlTOPp->mkSam__DOT__y___05Fh448629 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448384) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448383));
    vlTOPp->mkSam__DOT__y___05Fh462786 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh462844) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh462845));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9545 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh479830) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh479831));
    vlTOPp->mkSam__DOT__y___05Fh480076 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh479831) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh479830));
    vlTOPp->mkSam__DOT__y___05Fh494233 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494291) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494292));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10200 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511278) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511279));
    vlTOPp->mkSam__DOT__y___05Fh511524 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511279) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511278));
    vlTOPp->mkSam__DOT__y___05Fh525681 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525739) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525740));
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
    vlTOPp->mkSam__DOT__y___05Fh133205 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133261) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh133262));
    vlTOPp->mkSam__DOT__y___05Fh147672 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147419) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147418));
    vlTOPp->mkSam__DOT__y___05Fh164826 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164882) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh164883));
    vlTOPp->mkSam__DOT__y___05Fh179293 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179040) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179039));
    vlTOPp->mkSam__DOT__y___05Fh196398 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196454) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196455));
    vlTOPp->mkSam__DOT__y___05Fh210865 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh210612) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210611));
    vlTOPp->mkSam__DOT__y___05Fh227844 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227900) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh227901));
    vlTOPp->mkSam__DOT__y___05Fh242311 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242058) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242057));
    vlTOPp->mkSam__DOT__y___05Fh259291 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259347) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh259348));
    vlTOPp->mkSam__DOT__y___05Fh273758 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273505) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273504));
    vlTOPp->mkSam__DOT__y___05Fh290912 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290968) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh290969));
    vlTOPp->mkSam__DOT__y___05Fh305379 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305126) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305125));
    vlTOPp->mkSam__DOT__y___05Fh322484 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322540) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322541));
    vlTOPp->mkSam__DOT__y___05Fh336951 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh336698) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh336697));
    vlTOPp->mkSam__DOT__y___05Fh353930 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353986) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh353987));
    vlTOPp->mkSam__DOT__y___05Fh368397 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368144) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368143));
    vlTOPp->mkSam__DOT__y___05Fh385377 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385433) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385434));
    vlTOPp->mkSam__DOT__y___05Fh399844 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399591) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399590));
    vlTOPp->mkSam__DOT__y___05Fh416999 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417055) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417056));
    vlTOPp->mkSam__DOT__y___05Fh431466 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431213) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431212));
    vlTOPp->mkSam__DOT__y___05Fh448572 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448628) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh448629));
    vlTOPp->mkSam__DOT__y___05Fh463039 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh462786) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh462785));
    vlTOPp->mkSam__DOT__y___05Fh480019 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480075) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480076));
    vlTOPp->mkSam__DOT__y___05Fh494486 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh494233) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh494232));
    vlTOPp->mkSam__DOT__y___05Fh511467 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511523) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511524));
    vlTOPp->mkSam__DOT__y___05Fh525934 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh525681) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh525680));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2356 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133204) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133205));
    vlTOPp->mkSam__DOT__y___05Fh133450 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133205) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133204));
    vlTOPp->mkSam__DOT__y___05Fh147613 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147671) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147672));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3009 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh164825) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh164826));
    vlTOPp->mkSam__DOT__y___05Fh165071 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh164826) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh164825));
    vlTOPp->mkSam__DOT__y___05Fh179234 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179292) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179293));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3662 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196397) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196398));
    vlTOPp->mkSam__DOT__y___05Fh196643 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196398) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196397));
    vlTOPp->mkSam__DOT__y___05Fh210806 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh210864) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh210865));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4315 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh227843) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh227844));
    vlTOPp->mkSam__DOT__y___05Fh228089 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh227844) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh227843));
    vlTOPp->mkSam__DOT__y___05Fh242252 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242310) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242311));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4969 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259290) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259291));
    vlTOPp->mkSam__DOT__y___05Fh259536 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259291) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259290));
    vlTOPp->mkSam__DOT__y___05Fh273699 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273757) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273758));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5622 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh290911) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh290912));
    vlTOPp->mkSam__DOT__y___05Fh291157 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh290912) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh290911));
    vlTOPp->mkSam__DOT__y___05Fh305320 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305378) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305379));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6275 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322483) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322484));
    vlTOPp->mkSam__DOT__y___05Fh322729 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322484) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322483));
    vlTOPp->mkSam__DOT__y___05Fh336892 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh336950) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh336951));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6928 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh353929) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh353930));
    vlTOPp->mkSam__DOT__y___05Fh354175 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh353930) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh353929));
    vlTOPp->mkSam__DOT__y___05Fh368338 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368396) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368397));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7582 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385376) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385377));
    vlTOPp->mkSam__DOT__y___05Fh385622 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385377) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385376));
    vlTOPp->mkSam__DOT__y___05Fh399785 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh399843) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh399844));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8236 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh416998) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh416999));
    vlTOPp->mkSam__DOT__y___05Fh417244 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh416999) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh416998));
    vlTOPp->mkSam__DOT__y___05Fh431407 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431465) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431466));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8890 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448571) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448572));
    vlTOPp->mkSam__DOT__y___05Fh448817 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448572) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448571));
    vlTOPp->mkSam__DOT__y___05Fh462980 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463038) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463039));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9544 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480018) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480019));
    vlTOPp->mkSam__DOT__y___05Fh480264 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480019) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480018));
    vlTOPp->mkSam__DOT__y___05Fh494427 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494485) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494486));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10199 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511466) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511467));
    vlTOPp->mkSam__DOT__y___05Fh511712 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511467) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511466));
    vlTOPp->mkSam__DOT__y___05Fh525875 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh525933) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh525934));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2355 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133392) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133393));
    vlTOPp->mkSam__DOT__y___05Fh133638 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133393) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133392));
    vlTOPp->mkSam__DOT__y___05Fh147807 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh147865) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh147866));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3008 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165013) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165014));
    vlTOPp->mkSam__DOT__y___05Fh165259 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165014) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165013));
    vlTOPp->mkSam__DOT__y___05Fh179428 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179486) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179487));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3661 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196585) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196586));
    vlTOPp->mkSam__DOT__y___05Fh196831 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196586) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196585));
    vlTOPp->mkSam__DOT__y___05Fh211000 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211058) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211059));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4314 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228031) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228032));
    vlTOPp->mkSam__DOT__y___05Fh228277 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228032) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228031));
    vlTOPp->mkSam__DOT__y___05Fh242446 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242504) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242505));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4968 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259478) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259479));
    vlTOPp->mkSam__DOT__y___05Fh259724 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259479) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259478));
    vlTOPp->mkSam__DOT__y___05Fh273893 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh273951) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh273952));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5621 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291099) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291100));
    vlTOPp->mkSam__DOT__y___05Fh291345 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291100) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291099));
    vlTOPp->mkSam__DOT__y___05Fh305514 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305572) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305573));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6274 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322671) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322672));
    vlTOPp->mkSam__DOT__y___05Fh322917 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322672) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322671));
    vlTOPp->mkSam__DOT__y___05Fh337086 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337144) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337145));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6927 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354117) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354118));
    vlTOPp->mkSam__DOT__y___05Fh354363 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354118) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354117));
    vlTOPp->mkSam__DOT__y___05Fh368532 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368590) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368591));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7581 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385564) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385565));
    vlTOPp->mkSam__DOT__y___05Fh385810 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385565) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385564));
    vlTOPp->mkSam__DOT__y___05Fh399979 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400037) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400038));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8235 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417186) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417187));
    vlTOPp->mkSam__DOT__y___05Fh417432 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417187) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417186));
    vlTOPp->mkSam__DOT__y___05Fh431601 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431659) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431660));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8889 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448759) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448760));
    vlTOPp->mkSam__DOT__y___05Fh449005 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448760) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448759));
    vlTOPp->mkSam__DOT__y___05Fh463174 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463232) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463233));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9543 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480206) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480207));
    vlTOPp->mkSam__DOT__y___05Fh480452 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480207) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480206));
    vlTOPp->mkSam__DOT__y___05Fh494621 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494679) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494680));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10198 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511654) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511655));
    vlTOPp->mkSam__DOT__y___05Fh511900 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511655) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511654));
    vlTOPp->mkSam__DOT__y___05Fh526069 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526127) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526128));
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
    vlTOPp->mkSam__DOT__y___05Fh133581 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133637) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh133638));
    vlTOPp->mkSam__DOT__y___05Fh148060 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh147807) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh147806));
    vlTOPp->mkSam__DOT__y___05Fh165202 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165258) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh165259));
    vlTOPp->mkSam__DOT__y___05Fh179681 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179428) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179427));
    vlTOPp->mkSam__DOT__y___05Fh196774 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196830) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh196831));
    vlTOPp->mkSam__DOT__y___05Fh211253 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211000) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh210999));
    vlTOPp->mkSam__DOT__y___05Fh228220 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228276) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh228277));
    vlTOPp->mkSam__DOT__y___05Fh242699 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242446) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242445));
    vlTOPp->mkSam__DOT__y___05Fh259667 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259723) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh259724));
    vlTOPp->mkSam__DOT__y___05Fh274146 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh273893) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh273892));
    vlTOPp->mkSam__DOT__y___05Fh291288 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291344) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh291345));
    vlTOPp->mkSam__DOT__y___05Fh305767 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305514) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305513));
    vlTOPp->mkSam__DOT__y___05Fh322860 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322916) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh322917));
    vlTOPp->mkSam__DOT__y___05Fh337339 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh337086) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh337085));
    vlTOPp->mkSam__DOT__y___05Fh354306 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354362) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh354363));
    vlTOPp->mkSam__DOT__y___05Fh368785 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368532) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368531));
    vlTOPp->mkSam__DOT__y___05Fh385753 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385809) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh385810));
    vlTOPp->mkSam__DOT__y___05Fh400232 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh399979) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh399978));
    vlTOPp->mkSam__DOT__y___05Fh417375 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417431) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417432));
    vlTOPp->mkSam__DOT__y___05Fh431854 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431601) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431600));
    vlTOPp->mkSam__DOT__y___05Fh448948 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449004) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449005));
    vlTOPp->mkSam__DOT__y___05Fh463427 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh463174) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh463173));
    vlTOPp->mkSam__DOT__y___05Fh480395 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480451) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480452));
    vlTOPp->mkSam__DOT__y___05Fh494874 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh494621) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh494620));
    vlTOPp->mkSam__DOT__y___05Fh511843 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511899) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh511900));
    vlTOPp->mkSam__DOT__y___05Fh526322 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh526069) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh526068));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2354 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133580) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133581));
    vlTOPp->mkSam__DOT__y___05Fh133826 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133581) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133580));
    vlTOPp->mkSam__DOT__y___05Fh148001 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148059) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148060));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3007 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165201) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165202));
    vlTOPp->mkSam__DOT__y___05Fh165447 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165202) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165201));
    vlTOPp->mkSam__DOT__y___05Fh179622 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179680) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179681));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3660 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196773) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196774));
    vlTOPp->mkSam__DOT__y___05Fh197019 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196774) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196773));
    vlTOPp->mkSam__DOT__y___05Fh211194 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211252) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211253));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4313 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228219) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228220));
    vlTOPp->mkSam__DOT__y___05Fh228465 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228220) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228219));
    vlTOPp->mkSam__DOT__y___05Fh242640 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242698) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242699));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4967 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259666) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259667));
    vlTOPp->mkSam__DOT__y___05Fh259912 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259667) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259666));
    vlTOPp->mkSam__DOT__y___05Fh274087 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274145) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274146));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5620 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291287) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291288));
    vlTOPp->mkSam__DOT__y___05Fh291533 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291288) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291287));
    vlTOPp->mkSam__DOT__y___05Fh305708 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305766) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305767));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6273 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh322859) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh322860));
    vlTOPp->mkSam__DOT__y___05Fh323105 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh322860) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh322859));
    vlTOPp->mkSam__DOT__y___05Fh337280 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337338) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337339));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6926 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354305) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354306));
    vlTOPp->mkSam__DOT__y___05Fh354551 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354306) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354305));
    vlTOPp->mkSam__DOT__y___05Fh368726 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368784) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368785));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7580 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385752) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385753));
    vlTOPp->mkSam__DOT__y___05Fh385998 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385753) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385752));
    vlTOPp->mkSam__DOT__y___05Fh400173 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400231) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400232));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8234 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417374) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417375));
    vlTOPp->mkSam__DOT__y___05Fh417620 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417375) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417374));
    vlTOPp->mkSam__DOT__y___05Fh431795 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh431853) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh431854));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8888 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh448947) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh448948));
    vlTOPp->mkSam__DOT__y___05Fh449193 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh448948) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh448947));
    vlTOPp->mkSam__DOT__y___05Fh463368 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463426) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463427));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9542 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480394) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480395));
    vlTOPp->mkSam__DOT__y___05Fh480640 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480395) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480394));
    vlTOPp->mkSam__DOT__y___05Fh494815 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh494873) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh494874));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10197 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh511842) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh511843));
    vlTOPp->mkSam__DOT__y___05Fh512088 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh511843) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh511842));
    vlTOPp->mkSam__DOT__y___05Fh526263 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526321) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526322));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2353 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133768) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133769));
    vlTOPp->mkSam__DOT__y___05Fh134014 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133769) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133768));
    vlTOPp->mkSam__DOT__y___05Fh148195 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148253) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148254));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3006 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165389) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165390));
    vlTOPp->mkSam__DOT__y___05Fh165635 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165390) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165389));
    vlTOPp->mkSam__DOT__y___05Fh179816 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh179874) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh179875));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3659 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh196961) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh196962));
    vlTOPp->mkSam__DOT__y___05Fh197207 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh196962) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh196961));
    vlTOPp->mkSam__DOT__y___05Fh211388 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211446) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211447));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4312 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228407) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228408));
    vlTOPp->mkSam__DOT__y___05Fh228653 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228408) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228407));
    vlTOPp->mkSam__DOT__y___05Fh242834 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh242892) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh242893));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4966 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh259854) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh259855));
    vlTOPp->mkSam__DOT__y___05Fh260100 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh259855) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh259854));
    vlTOPp->mkSam__DOT__y___05Fh274281 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274339) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274340));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5619 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291475) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291476));
    vlTOPp->mkSam__DOT__y___05Fh291721 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291476) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291475));
    vlTOPp->mkSam__DOT__y___05Fh305902 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh305960) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh305961));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6272 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323047) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323048));
    vlTOPp->mkSam__DOT__y___05Fh323293 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323048) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323047));
    vlTOPp->mkSam__DOT__y___05Fh337474 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337532) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337533));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6925 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354493) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354494));
    vlTOPp->mkSam__DOT__y___05Fh354739 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354494) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354493));
    vlTOPp->mkSam__DOT__y___05Fh368920 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh368978) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh368979));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7579 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh385940) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh385941));
    vlTOPp->mkSam__DOT__y___05Fh386186 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh385941) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh385940));
    vlTOPp->mkSam__DOT__y___05Fh400367 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400425) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400426));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8233 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417562) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417563));
    vlTOPp->mkSam__DOT__y___05Fh417808 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417563) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417562));
    vlTOPp->mkSam__DOT__y___05Fh431989 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh432047) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh432048));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8887 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449135) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh449136));
    vlTOPp->mkSam__DOT__y___05Fh449381 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh449136) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh449135));
    vlTOPp->mkSam__DOT__y___05Fh463562 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463620) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463621));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9541 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480582) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480583));
    vlTOPp->mkSam__DOT__y___05Fh480828 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480583) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480582));
    vlTOPp->mkSam__DOT__y___05Fh495009 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh495067) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh495068));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10196 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512030) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512031));
    vlTOPp->mkSam__DOT__y___05Fh512276 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512031) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512030));
    vlTOPp->mkSam__DOT__y___05Fh526457 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526515) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526516));
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
    vlTOPp->mkSam__DOT__y___05Fh133957 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh134013) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh134014));
    vlTOPp->mkSam__DOT__y___05Fh148448 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh148195) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh148194));
    vlTOPp->mkSam__DOT__y___05Fh165578 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165634) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh165635));
    vlTOPp->mkSam__DOT__y___05Fh180069 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh179816) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh179815));
    vlTOPp->mkSam__DOT__y___05Fh197150 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197206) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh197207));
    vlTOPp->mkSam__DOT__y___05Fh211641 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh211388) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh211387));
    vlTOPp->mkSam__DOT__y___05Fh228596 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228652) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh228653));
    vlTOPp->mkSam__DOT__y___05Fh243087 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh242834) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh242833));
    vlTOPp->mkSam__DOT__y___05Fh260043 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260099) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh260100));
    vlTOPp->mkSam__DOT__y___05Fh274534 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh274281) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh274280));
    vlTOPp->mkSam__DOT__y___05Fh291664 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291720) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh291721));
    vlTOPp->mkSam__DOT__y___05Fh306155 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh305902) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh305901));
    vlTOPp->mkSam__DOT__y___05Fh323236 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323292) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh323293));
    vlTOPp->mkSam__DOT__y___05Fh337727 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh337474) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh337473));
    vlTOPp->mkSam__DOT__y___05Fh354682 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354738) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh354739));
    vlTOPp->mkSam__DOT__y___05Fh369173 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh368920) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh368919));
    vlTOPp->mkSam__DOT__y___05Fh386129 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386185) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh386186));
    vlTOPp->mkSam__DOT__y___05Fh400620 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh400367) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh400366));
    vlTOPp->mkSam__DOT__y___05Fh417751 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417807) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh417808));
    vlTOPp->mkSam__DOT__y___05Fh432242 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh431989) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh431988));
    vlTOPp->mkSam__DOT__y___05Fh449324 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449380) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh449381));
    vlTOPp->mkSam__DOT__y___05Fh463815 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh463562) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh463561));
    vlTOPp->mkSam__DOT__y___05Fh480771 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480827) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh480828));
    vlTOPp->mkSam__DOT__y___05Fh495262 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh495009) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh495008));
    vlTOPp->mkSam__DOT__y___05Fh512219 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512275) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh512276));
    vlTOPp->mkSam__DOT__y___05Fh526710 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh526457) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh526456));
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
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_0_3_b_103_BIT_6_106_THE_ETC___05F_d2352 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh133956) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh133957));
    vlTOPp->mkSam__DOT__y___05Fh134202 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh133957) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh133956));
    vlTOPp->mkSam__DOT__y___05Fh148389 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh148447) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh148448));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_0_b_756_BIT_6_759_THE_ETC___05F_d3005 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh165577) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh165578));
    vlTOPp->mkSam__DOT__y___05Fh165823 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh165578) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh165577));
    vlTOPp->mkSam__DOT__y___05Fh180010 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh180068) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh180069));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_1_b_409_BIT_6_412_THE_ETC___05F_d3658 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh197149) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh197150));
    vlTOPp->mkSam__DOT__y___05Fh197395 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh197150) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh197149));
    vlTOPp->mkSam__DOT__y___05Fh211582 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh211640) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh211641));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_2_b_062_BIT_6_065_THE_ETC___05F_d4311 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh228595) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh228596));
    vlTOPp->mkSam__DOT__y___05Fh228841 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh228596) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh228595));
    vlTOPp->mkSam__DOT__y___05Fh243028 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh243086) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh243087));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_1_3_b_716_BIT_6_719_THE_ETC___05F_d4965 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh260042) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh260043));
    vlTOPp->mkSam__DOT__y___05Fh260288 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh260043) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh260042));
    vlTOPp->mkSam__DOT__y___05Fh274475 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh274533) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh274534));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_0_b_369_BIT_6_372_THE_ETC___05F_d5618 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh291663) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh291664));
    vlTOPp->mkSam__DOT__y___05Fh291909 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh291664) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh291663));
    vlTOPp->mkSam__DOT__y___05Fh306096 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh306154) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh306155));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_1_b_022_BIT_6_025_THE_ETC___05F_d6271 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh323235) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh323236));
    vlTOPp->mkSam__DOT__y___05Fh323481 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh323236) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh323235));
    vlTOPp->mkSam__DOT__y___05Fh337668 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh337726) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh337727));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_2_b_675_BIT_6_678_THE_ETC___05F_d6924 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh354681) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh354682));
    vlTOPp->mkSam__DOT__y___05Fh354927 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh354682) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh354681));
    vlTOPp->mkSam__DOT__y___05Fh369114 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh369172) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh369173));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_2_3_b_329_BIT_6_332_THE_ETC___05F_d7578 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh386128) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh386129));
    vlTOPp->mkSam__DOT__y___05Fh386374 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh386129) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh386128));
    vlTOPp->mkSam__DOT__y___05Fh400561 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh400619) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh400620));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_0_b_983_BIT_6_986_THE_ETC___05F_d8232 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh417750) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh417751));
    vlTOPp->mkSam__DOT__y___05Fh417996 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh417751) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh417750));
    vlTOPp->mkSam__DOT__y___05Fh432183 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh432241) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh432242));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_1_b_637_BIT_6_640_THE_ETC___05F_d8886 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh449323) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh449324));
    vlTOPp->mkSam__DOT__y___05Fh449569 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh449324) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh449323));
    vlTOPp->mkSam__DOT__y___05Fh463756 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh463814) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh463815));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_2_b_291_BIT_6_294_THE_ETC___05F_d9540 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh480770) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh480771));
    vlTOPp->mkSam__DOT__y___05Fh481016 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh480771) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh480770));
    vlTOPp->mkSam__DOT__y___05Fh495203 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh495261) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh495262));
    vlTOPp->mkSam__DOT__IF_IF_IF_IF_mac_matrix_3_3_b_946_BIT_6_949_THE_ETC___05F_d10195 
        = ((IData)(vlTOPp->mkSam__DOT__x___05Fh512218) 
           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh512219));
    vlTOPp->mkSam__DOT__y___05Fh512464 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh512219) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh512218));
    vlTOPp->mkSam__DOT__y___05Fh526651 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh526709) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh526710));
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
}
