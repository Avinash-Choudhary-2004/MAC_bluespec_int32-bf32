// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkSam__DOT__y___05Fh867024 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh867082) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh867083));
    vlTOPp->mkSam__DOT__y___05Fh835648 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh835706) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh835707));
    vlTOPp->mkSam__DOT__y___05Fh804097 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh804155) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh804156));
    vlTOPp->mkSam__DOT__y___05Fh772720 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh772778) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh772779));
    vlTOPp->mkSam__DOT__y___05Fh741344 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh741402) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh741403));
    vlTOPp->mkSam__DOT__y___05Fh709968 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh710026) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh710027));
    vlTOPp->mkSam__DOT__y___05Fh678417 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh678475) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh678476));
    vlTOPp->mkSam__DOT__y___05Fh1055461 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh1055519) 
                                           | (IData)(vlTOPp->mkSam__DOT__y___05Fh1055520));
    vlTOPp->mkSam__DOT__y___05Fh1024083 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh1024141) 
                                           | (IData)(vlTOPp->mkSam__DOT__y___05Fh1024142));
    vlTOPp->mkSam__DOT__y___05Fh929777 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh929835) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh929836));
    vlTOPp->mkSam__DOT__y___05Fh898400 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh898458) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh898459));
    vlTOPp->mkSam__DOT__y___05Fh992706 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh992764) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh992765));
    vlTOPp->mkSam__DOT__y___05Fh961329 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh961387) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh961388));
    vlTOPp->mkSam__DOT__y___05Fh31066 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh31124) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh31125));
    vlTOPp->mkSam__DOT__y___05Fh584288 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh584346) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh584347));
    vlTOPp->mkSam__DOT__y___05Fh615664 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh615722) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh615723));
    vlTOPp->mkSam__DOT__y___05Fh647040 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh647098) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh647099));
    vlTOPp->mkSam__DOT__y___05Fh867277 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh867024) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh867023));
    vlTOPp->mkSam__DOT__y___05Fh835901 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh835648) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh835647));
    vlTOPp->mkSam__DOT__y___05Fh804350 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh804097) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh804096));
    vlTOPp->mkSam__DOT__y___05Fh772973 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh772720) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh772719));
    vlTOPp->mkSam__DOT__y___05Fh741597 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh741344) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh741343));
    vlTOPp->mkSam__DOT__y___05Fh710221 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh709968) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh709967));
    vlTOPp->mkSam__DOT__y___05Fh678670 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh678417) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh678416));
    vlTOPp->mkSam__DOT__y___05Fh1055714 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh1055461) 
                                           & (IData)(vlTOPp->mkSam__DOT__x___05Fh1055460));
    vlTOPp->mkSam__DOT__y___05Fh1024336 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh1024083) 
                                           & (IData)(vlTOPp->mkSam__DOT__x___05Fh1024082));
    vlTOPp->mkSam__DOT__y___05Fh930030 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh929777) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh929776));
    vlTOPp->mkSam__DOT__y___05Fh898653 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh898400) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh898399));
    vlTOPp->mkSam__DOT__y___05Fh992959 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh992706) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh992705));
    vlTOPp->mkSam__DOT__y___05Fh961582 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh961329) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh961328));
    vlTOPp->mkSam__DOT__y___05Fh31319 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh31066) 
                                         & (IData)(vlTOPp->mkSam__DOT__x___05Fh31065));
    vlTOPp->mkSam__DOT__y___05Fh584541 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh584288) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh584287));
    vlTOPp->mkSam__DOT__y___05Fh615917 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh615664) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh615663));
    vlTOPp->mkSam__DOT__y___05Fh647293 = ((IData)(vlTOPp->mkSam__DOT__y___05Fh647040) 
                                          & (IData)(vlTOPp->mkSam__DOT__x___05Fh647039));
    vlTOPp->mkSam__DOT__y___05Fh867218 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh867276) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh867277));
    vlTOPp->mkSam__DOT__y___05Fh835842 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh835900) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh835901));
    vlTOPp->mkSam__DOT__y___05Fh804291 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh804349) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh804350));
    vlTOPp->mkSam__DOT__y___05Fh772914 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh772972) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh772973));
    vlTOPp->mkSam__DOT__y___05Fh741538 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh741596) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh741597));
    vlTOPp->mkSam__DOT__y___05Fh710162 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh710220) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh710221));
    vlTOPp->mkSam__DOT__y___05Fh678611 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh678669) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh678670));
    vlTOPp->mkSam__DOT__y___05Fh1055655 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh1055713) 
                                           | (IData)(vlTOPp->mkSam__DOT__y___05Fh1055714));
    vlTOPp->mkSam__DOT__y___05Fh1024277 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh1024335) 
                                           | (IData)(vlTOPp->mkSam__DOT__y___05Fh1024336));
    vlTOPp->mkSam__DOT__y___05Fh929971 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh930029) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh930030));
    vlTOPp->mkSam__DOT__y___05Fh898594 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh898652) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh898653));
    vlTOPp->mkSam__DOT__y___05Fh992900 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh992958) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh992959));
    vlTOPp->mkSam__DOT__y___05Fh961523 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh961581) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh961582));
    vlTOPp->mkSam__DOT__y___05Fh31260 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh31318) 
                                         | (IData)(vlTOPp->mkSam__DOT__y___05Fh31319));
    vlTOPp->mkSam__DOT__y___05Fh584482 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh584540) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh584541));
    vlTOPp->mkSam__DOT__y___05Fh615858 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh615916) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh615917));
    vlTOPp->mkSam__DOT__y___05Fh647234 = ((IData)(vlTOPp->mkSam__DOT__x___05Fh647292) 
                                          | (IData)(vlTOPp->mkSam__DOT__y___05Fh647293));
    vlTOPp->mkSam__DOT__x___05Fh859726 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh867217) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh867218)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh867023) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh867024)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_1_a_554_BIT_15_555_EQ_mac_matr_ETC___05F_d7202));
    vlTOPp->mkSam__DOT__x___05Fh828350 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh835841) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh835842)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh835647) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh835648)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_0_a_899_BIT_15_900_EQ_mac_matr_ETC___05F_d6547));
    vlTOPp->mkSam__DOT__x___05Fh796799 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh804290) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh804291)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh804096) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh804097)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_3_a_244_BIT_15_245_EQ_mac_matr_ETC___05F_d5892));
    vlTOPp->mkSam__DOT__x___05Fh765422 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh772913) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh772914)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh772719) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh772720)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_2_a_589_BIT_15_590_EQ_mac_matr_ETC___05F_d5237));
    vlTOPp->mkSam__DOT__x___05Fh734046 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh741537) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh741538)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh741343) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh741344)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_1_a_934_BIT_15_935_EQ_mac_matr_ETC___05F_d4582));
    vlTOPp->mkSam__DOT__x___05Fh702670 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh710161) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh710162)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh709967) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh709968)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_1_0_a_279_BIT_15_280_EQ_mac_matr_ETC___05F_d3927));
    vlTOPp->mkSam__DOT__x___05Fh671119 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh678610) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh678611)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh678416) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh678417)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_0_3_a_624_BIT_15_625_EQ_mac_matr_ETC___05F_d3272));
    vlTOPp->mkSam__DOT__x___05Fh1048163 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh1055654) 
                                             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh1055655)) 
                                            << 0x1fU) 
                                           | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh1055460) 
                                                ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh1055461)) 
                                               << 0x1eU) 
                                              | vlTOPp->mkSam__DOT__IF_mac_matrix_3_3_a_0484_BIT_15_0485_EQ_mac_ma_ETC___05F_d11132));
    vlTOPp->mkSam__DOT__x___05Fh1016785 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh1024276) 
                                             ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh1024277)) 
                                            << 0x1fU) 
                                           | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh1024082) 
                                                ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh1024083)) 
                                               << 0x1eU) 
                                              | vlTOPp->mkSam__DOT__IF_mac_matrix_3_2_a_829_BIT_15_830_EQ_mac_matr_ETC___05F_d10477));
    vlTOPp->mkSam__DOT__x___05Fh922479 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh929970) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh929971)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh929776) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh929777)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_3_a_864_BIT_15_865_EQ_mac_matr_ETC___05F_d8512));
    vlTOPp->mkSam__DOT__x___05Fh891102 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh898593) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh898594)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh898399) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh898400)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_2_2_a_209_BIT_15_210_EQ_mac_matr_ETC___05F_d7857));
    vlTOPp->mkSam__DOT__x___05Fh985408 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh992899) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh992900)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh992705) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh992706)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_3_1_a_174_BIT_15_175_EQ_mac_matr_ETC___05F_d9822));
    vlTOPp->mkSam__DOT__x___05Fh954031 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh961522) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh961523)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh961328) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh961329)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_3_0_a_519_BIT_15_520_EQ_mac_matr_ETC___05F_d9167));
    vlTOPp->mkSam__DOT__x___05Fh23768 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh31259) 
                                           ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh31260)) 
                                          << 0x1fU) 
                                         | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh31065) 
                                              ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh31066)) 
                                             << 0x1eU) 
                                            | vlTOPp->mkSam__DOT__IF_mac_a_BIT_15_EQ_mac_b_BIT_15_99_THEN_IF_IF___05FETC___05F_d652));
    vlTOPp->mkSam__DOT__x___05Fh576990 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh584481) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh584482)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh584287) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh584288)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_0_0_a_59_BIT_15_60_EQ_mac_matrix_ETC___05F_d1307));
    vlTOPp->mkSam__DOT__x___05Fh608366 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh615857) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh615858)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh615663) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh615664)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_0_1_a_314_BIT_15_315_EQ_mac_matr_ETC___05F_d1962));
    vlTOPp->mkSam__DOT__x___05Fh639742 = ((((IData)(vlTOPp->mkSam__DOT__x___05Fh647233) 
                                            ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh647234)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlTOPp->mkSam__DOT__x___05Fh647039) 
                                               ^ (IData)(vlTOPp->mkSam__DOT__y___05Fh647040)) 
                                              << 0x1eU) 
                                             | vlTOPp->mkSam__DOT__IF_mac_matrix_0_2_a_969_BIT_15_970_EQ_mac_matr_ETC___05F_d2617));
    if (vlTOPp->mkSam__DOT__mac_matrix_2_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh844184;
        vlTOPp->mkSam__DOT__mac_matrix_2_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh844184;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh859726;
        vlTOPp->mkSam__DOT__mac_matrix_2_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh859726;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_2_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh812808;
        vlTOPp->mkSam__DOT__mac_matrix_2_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh812808;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh828350;
        vlTOPp->mkSam__DOT__mac_matrix_2_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh828350;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh781257;
        vlTOPp->mkSam__DOT__mac_matrix_1_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh781257;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh796799;
        vlTOPp->mkSam__DOT__mac_matrix_1_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh796799;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh749880;
        vlTOPp->mkSam__DOT__mac_matrix_1_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh749880;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh765422;
        vlTOPp->mkSam__DOT__mac_matrix_1_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh765422;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh718504;
        vlTOPp->mkSam__DOT__mac_matrix_1_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh718504;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh734046;
        vlTOPp->mkSam__DOT__mac_matrix_1_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh734046;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_1_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_1_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh687128;
        vlTOPp->mkSam__DOT__mac_matrix_1_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh687128;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_1_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh702670;
        vlTOPp->mkSam__DOT__mac_matrix_1_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh702670;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh655577;
        vlTOPp->mkSam__DOT__mac_matrix_0_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh655577;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh671119;
        vlTOPp->mkSam__DOT__mac_matrix_0_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh671119;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh1032621;
        vlTOPp->mkSam__DOT__mac_matrix_3_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh1032621;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh1048163;
        vlTOPp->mkSam__DOT__mac_matrix_3_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh1048163;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh1001243;
        vlTOPp->mkSam__DOT__mac_matrix_3_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh1001243;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh1016785;
        vlTOPp->mkSam__DOT__mac_matrix_3_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh1016785;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_2_3_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh906937;
        vlTOPp->mkSam__DOT__mac_matrix_2_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh906937;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_3_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh922479;
        vlTOPp->mkSam__DOT__mac_matrix_2_3_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh922479;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_2_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_2_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh875560;
        vlTOPp->mkSam__DOT__mac_matrix_2_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh875560;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_2_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh891102;
        vlTOPp->mkSam__DOT__mac_matrix_2_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh891102;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh969866;
        vlTOPp->mkSam__DOT__mac_matrix_3_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh969866;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh985408;
        vlTOPp->mkSam__DOT__mac_matrix_3_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh985408;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_3_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_3_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh938489;
        vlTOPp->mkSam__DOT__mac_matrix_3_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh938489;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_3_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh954031;
        vlTOPp->mkSam__DOT__mac_matrix_3_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh954031;
    }
    if (vlTOPp->mkSam__DOT__mac_s) {
        vlTOPp->mkSam__DOT__mac_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh8225;
        vlTOPp->mkSam__DOT__mac_out_D_IN = vlTOPp->mkSam__DOT__x___05Fh8225;
    } else {
        vlTOPp->mkSam__DOT__mac_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh23768;
        vlTOPp->mkSam__DOT__mac_out_D_IN = vlTOPp->mkSam__DOT__x___05Fh23768;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_0_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh561448;
        vlTOPp->mkSam__DOT__mac_matrix_0_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh561448;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_0_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh576990;
        vlTOPp->mkSam__DOT__mac_matrix_0_0_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh576990;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_1_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh592824;
        vlTOPp->mkSam__DOT__mac_matrix_0_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh592824;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_1_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh608366;
        vlTOPp->mkSam__DOT__mac_matrix_0_1_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh608366;
    }
    if (vlTOPp->mkSam__DOT__mac_matrix_0_2_s) {
        vlTOPp->mkSam__DOT__mac_matrix_0_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh624200;
        vlTOPp->mkSam__DOT__mac_matrix_0_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh624200;
    } else {
        vlTOPp->mkSam__DOT__mac_matrix_0_2_c_D_IN = vlTOPp->mkSam__DOT__x___05Fh639742;
        vlTOPp->mkSam__DOT__mac_matrix_0_2_out_D_IN 
            = vlTOPp->mkSam__DOT__x___05Fh639742;
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__10\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkSam__DOT__a_1_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_4_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[3U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_2_5_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_5_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[6U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[5U] 
                                                    >> 0x10U)));
    vlTOPp->mkSam__DOT__a_2_4_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_2_4_D_IN = (0xffffU & vlTOPp->get_in_a_in[5U]);
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
    vlTOPp->mkSam__DOT__a_1_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_3_D_IN = (0xffffU & vlTOPp->get_in_a_in[3U]);
    vlTOPp->mkSam__DOT__a_1_1_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_1_D_IN = (0xffffU & vlTOPp->get_in_a_in[2U]);
    vlTOPp->mkSam__DOT__a_1_2_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_1_2_D_IN = (0xffffU & ((vlTOPp->get_in_a_in[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->get_in_a_in[2U] 
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
    vlTOPp->mkSam__DOT__b_0_0_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__b_0_0_D_IN = (0xffffU & vlTOPp->get_in_b_in[0U]);
    vlTOPp->mkSam__DOT__a_3_3_EN = vlTOPp->EN_get_in;
    vlTOPp->mkSam__DOT__a_3_3_D_IN = (0xffffU & vlTOPp->get_in_a_in[6U]);
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
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
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
