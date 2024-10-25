// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    VL_IN8(EN_read_A,0,0);
    VL_OUT8(RDY_read_A,0,0);
    VL_IN8(EN_read_B,0,0);
    VL_OUT8(RDY_read_B,0,0);
    VL_IN8(EN_read_C,0,0);
    VL_OUT8(RDY_read_C,0,0);
    VL_IN8(read_S_s_in,0,0);
    VL_IN8(EN_read_S,0,0);
    VL_OUT8(RDY_read_S,0,0);
    VL_IN8(EN_mac_calc,0,0);
    VL_OUT8(RDY_mac_calc,0,0);
    VL_IN16(read_A_a_in,15,0);
    VL_IN16(read_B_b_in,15,0);
    VL_IN(read_C_c_in,31,0);
    VL_OUT(mac_calc,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mkMac__DOT__CLK;
        CData/*0:0*/ mkMac__DOT__RST_N;
        CData/*0:0*/ mkMac__DOT__EN_read_A;
        CData/*0:0*/ mkMac__DOT__RDY_read_A;
        CData/*0:0*/ mkMac__DOT__EN_read_B;
        CData/*0:0*/ mkMac__DOT__RDY_read_B;
        CData/*0:0*/ mkMac__DOT__EN_read_C;
        CData/*0:0*/ mkMac__DOT__RDY_read_C;
        CData/*0:0*/ mkMac__DOT__read_S_s_in;
        CData/*0:0*/ mkMac__DOT__EN_read_S;
        CData/*0:0*/ mkMac__DOT__RDY_read_S;
        CData/*0:0*/ mkMac__DOT__EN_mac_calc;
        CData/*0:0*/ mkMac__DOT__RDY_mac_calc;
        CData/*0:0*/ mkMac__DOT__a_EN;
        CData/*0:0*/ mkMac__DOT__b_EN;
        CData/*0:0*/ mkMac__DOT__c_EN;
        CData/*0:0*/ mkMac__DOT__out_EN;
        CData/*0:0*/ mkMac__DOT__s;
        CData/*0:0*/ mkMac__DOT__s_D_IN;
        CData/*0:0*/ mkMac__DOT__s_EN;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_mac_calc;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_read_A;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_read_B;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_read_C;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_read_S;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_mac_calc;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_read_A;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_read_B;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_read_C;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_read_S;
        CData/*7:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d586;
        CData/*7:0*/ mkMac__DOT___theResult___05F___05F_1_fst___05Fh931;
        CData/*7:0*/ mkMac__DOT__delta_exp___05Fh1726;
        CData/*7:0*/ mkMac__DOT__delta_exp___05Fh933;
        CData/*7:0*/ mkMac__DOT__result_exp___05F_1___05Fh841;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh326;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh330;
        CData/*7:0*/ mkMac__DOT__x___05Fh858;
        CData/*6:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d234;
        CData/*5:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d585;
        CData/*4:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d233;
        CData/*3:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d584;
        CData/*2:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d232;
        CData/*1:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d583;
        CData/*0:0*/ mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d58;
        CData/*0:0*/ mkMac__DOT__x___05Fh10005;
        CData/*0:0*/ mkMac__DOT__x___05Fh10064;
        CData/*0:0*/ mkMac__DOT__x___05Fh10199;
        CData/*0:0*/ mkMac__DOT__x___05Fh10258;
        CData/*0:0*/ mkMac__DOT__x___05Fh10393;
        CData/*0:0*/ mkMac__DOT__x___05Fh10452;
        CData/*0:0*/ mkMac__DOT__x___05Fh10587;
        CData/*0:0*/ mkMac__DOT__x___05Fh10646;
        CData/*0:0*/ mkMac__DOT__x___05Fh10781;
        CData/*0:0*/ mkMac__DOT__x___05Fh10840;
        CData/*0:0*/ mkMac__DOT__x___05Fh10975;
        CData/*0:0*/ mkMac__DOT__x___05Fh11034;
        CData/*0:0*/ mkMac__DOT__x___05Fh11169;
        CData/*0:0*/ mkMac__DOT__x___05Fh11228;
        CData/*0:0*/ mkMac__DOT__x___05Fh11363;
        CData/*0:0*/ mkMac__DOT__x___05Fh11422;
        CData/*0:0*/ mkMac__DOT__x___05Fh11557;
        CData/*0:0*/ mkMac__DOT__x___05Fh11616;
        CData/*0:0*/ mkMac__DOT__x___05Fh11751;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__x___05Fh11810;
        CData/*0:0*/ mkMac__DOT__x___05Fh11945;
        CData/*0:0*/ mkMac__DOT__x___05Fh12004;
        CData/*0:0*/ mkMac__DOT__x___05Fh12139;
        CData/*0:0*/ mkMac__DOT__x___05Fh12198;
        CData/*0:0*/ mkMac__DOT__x___05Fh12333;
        CData/*0:0*/ mkMac__DOT__x___05Fh12392;
        CData/*0:0*/ mkMac__DOT__x___05Fh12527;
        CData/*0:0*/ mkMac__DOT__x___05Fh12586;
        CData/*0:0*/ mkMac__DOT__x___05Fh12721;
        CData/*0:0*/ mkMac__DOT__x___05Fh12780;
        CData/*0:0*/ mkMac__DOT__x___05Fh12915;
        CData/*0:0*/ mkMac__DOT__x___05Fh12974;
        CData/*0:0*/ mkMac__DOT__x___05Fh13109;
        CData/*0:0*/ mkMac__DOT__x___05Fh13168;
        CData/*0:0*/ mkMac__DOT__x___05Fh13303;
        CData/*0:0*/ mkMac__DOT__x___05Fh13362;
        CData/*0:0*/ mkMac__DOT__x___05Fh13497;
        CData/*0:0*/ mkMac__DOT__x___05Fh13556;
        CData/*0:0*/ mkMac__DOT__x___05Fh13691;
        CData/*0:0*/ mkMac__DOT__x___05Fh13750;
        CData/*0:0*/ mkMac__DOT__x___05Fh13885;
        CData/*0:0*/ mkMac__DOT__x___05Fh13944;
        CData/*0:0*/ mkMac__DOT__x___05Fh14079;
        CData/*0:0*/ mkMac__DOT__x___05Fh14138;
        CData/*0:0*/ mkMac__DOT__x___05Fh14273;
        CData/*0:0*/ mkMac__DOT__x___05Fh14332;
        CData/*0:0*/ mkMac__DOT__x___05Fh14467;
        CData/*0:0*/ mkMac__DOT__x___05Fh14526;
        CData/*0:0*/ mkMac__DOT__x___05Fh14661;
        CData/*0:0*/ mkMac__DOT__x___05Fh14720;
        CData/*0:0*/ mkMac__DOT__x___05Fh14855;
        CData/*0:0*/ mkMac__DOT__x___05Fh14914;
        CData/*0:0*/ mkMac__DOT__x___05Fh15049;
        CData/*0:0*/ mkMac__DOT__x___05Fh15108;
        CData/*0:0*/ mkMac__DOT__x___05Fh15243;
        CData/*0:0*/ mkMac__DOT__x___05Fh15302;
        CData/*0:0*/ mkMac__DOT__x___05Fh1938;
        CData/*0:0*/ mkMac__DOT__x___05Fh2126;
        CData/*0:0*/ mkMac__DOT__x___05Fh2183;
        CData/*0:0*/ mkMac__DOT__x___05Fh2314;
        CData/*0:0*/ mkMac__DOT__x___05Fh2371;
        CData/*0:0*/ mkMac__DOT__x___05Fh2502;
        CData/*0:0*/ mkMac__DOT__x___05Fh2559;
        CData/*0:0*/ mkMac__DOT__x___05Fh2690;
        CData/*0:0*/ mkMac__DOT__x___05Fh2747;
        CData/*0:0*/ mkMac__DOT__x___05Fh2878;
        CData/*0:0*/ mkMac__DOT__x___05Fh2935;
        CData/*0:0*/ mkMac__DOT__x___05Fh3066;
        CData/*0:0*/ mkMac__DOT__x___05Fh3123;
        CData/*0:0*/ mkMac__DOT__x___05Fh3254;
        CData/*0:0*/ mkMac__DOT__x___05Fh3311;
        CData/*0:0*/ mkMac__DOT__x___05Fh3442;
        CData/*0:0*/ mkMac__DOT__x___05Fh3499;
        CData/*0:0*/ mkMac__DOT__x___05Fh3630;
        CData/*0:0*/ mkMac__DOT__x___05Fh3687;
        CData/*0:0*/ mkMac__DOT__x___05Fh3818;
        CData/*0:0*/ mkMac__DOT__x___05Fh3875;
        CData/*0:0*/ mkMac__DOT__x___05Fh4006;
        CData/*0:0*/ mkMac__DOT__x___05Fh4063;
        CData/*0:0*/ mkMac__DOT__x___05Fh4194;
        CData/*0:0*/ mkMac__DOT__x___05Fh4251;
        CData/*0:0*/ mkMac__DOT__x___05Fh4382;
        CData/*0:0*/ mkMac__DOT__x___05Fh4439;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__x___05Fh4570;
        CData/*0:0*/ mkMac__DOT__x___05Fh4627;
        CData/*0:0*/ mkMac__DOT__x___05Fh4758;
        CData/*0:0*/ mkMac__DOT__x___05Fh4815;
        CData/*0:0*/ mkMac__DOT__x___05Fh4946;
        CData/*0:0*/ mkMac__DOT__x___05Fh5003;
        CData/*0:0*/ mkMac__DOT__x___05Fh5134;
        CData/*0:0*/ mkMac__DOT__x___05Fh5191;
        CData/*0:0*/ mkMac__DOT__x___05Fh5322;
        CData/*0:0*/ mkMac__DOT__x___05Fh5379;
        CData/*0:0*/ mkMac__DOT__x___05Fh5510;
        CData/*0:0*/ mkMac__DOT__x___05Fh5567;
        CData/*0:0*/ mkMac__DOT__x___05Fh5698;
        CData/*0:0*/ mkMac__DOT__x___05Fh5755;
        CData/*0:0*/ mkMac__DOT__x___05Fh5886;
        CData/*0:0*/ mkMac__DOT__x___05Fh5943;
        CData/*0:0*/ mkMac__DOT__x___05Fh9423;
        CData/*0:0*/ mkMac__DOT__x___05Fh9617;
        CData/*0:0*/ mkMac__DOT__x___05Fh9676;
        CData/*0:0*/ mkMac__DOT__x___05Fh9811;
        CData/*0:0*/ mkMac__DOT__x___05Fh9870;
        CData/*0:0*/ mkMac__DOT__y___05Fh10006;
        CData/*0:0*/ mkMac__DOT__y___05Fh10065;
        CData/*0:0*/ mkMac__DOT__y___05Fh10200;
        CData/*0:0*/ mkMac__DOT__y___05Fh10259;
        CData/*0:0*/ mkMac__DOT__y___05Fh10394;
        CData/*0:0*/ mkMac__DOT__y___05Fh10453;
        CData/*0:0*/ mkMac__DOT__y___05Fh10588;
        CData/*0:0*/ mkMac__DOT__y___05Fh10647;
        CData/*0:0*/ mkMac__DOT__y___05Fh10782;
        CData/*0:0*/ mkMac__DOT__y___05Fh10841;
        CData/*0:0*/ mkMac__DOT__y___05Fh10976;
        CData/*0:0*/ mkMac__DOT__y___05Fh11035;
        CData/*0:0*/ mkMac__DOT__y___05Fh11170;
        CData/*0:0*/ mkMac__DOT__y___05Fh11229;
        CData/*0:0*/ mkMac__DOT__y___05Fh11364;
        CData/*0:0*/ mkMac__DOT__y___05Fh11423;
        CData/*0:0*/ mkMac__DOT__y___05Fh11558;
        CData/*0:0*/ mkMac__DOT__y___05Fh11617;
        CData/*0:0*/ mkMac__DOT__y___05Fh11752;
        CData/*0:0*/ mkMac__DOT__y___05Fh11811;
        CData/*0:0*/ mkMac__DOT__y___05Fh11946;
        CData/*0:0*/ mkMac__DOT__y___05Fh12005;
        CData/*0:0*/ mkMac__DOT__y___05Fh12140;
        CData/*0:0*/ mkMac__DOT__y___05Fh12199;
        CData/*0:0*/ mkMac__DOT__y___05Fh12334;
        CData/*0:0*/ mkMac__DOT__y___05Fh12393;
        CData/*0:0*/ mkMac__DOT__y___05Fh12528;
        CData/*0:0*/ mkMac__DOT__y___05Fh12587;
        CData/*0:0*/ mkMac__DOT__y___05Fh12722;
        CData/*0:0*/ mkMac__DOT__y___05Fh12781;
        CData/*0:0*/ mkMac__DOT__y___05Fh12916;
        CData/*0:0*/ mkMac__DOT__y___05Fh12975;
        CData/*0:0*/ mkMac__DOT__y___05Fh13110;
        CData/*0:0*/ mkMac__DOT__y___05Fh13169;
        CData/*0:0*/ mkMac__DOT__y___05Fh13304;
        CData/*0:0*/ mkMac__DOT__y___05Fh13363;
        CData/*0:0*/ mkMac__DOT__y___05Fh13498;
        CData/*0:0*/ mkMac__DOT__y___05Fh13557;
        CData/*0:0*/ mkMac__DOT__y___05Fh13692;
        CData/*0:0*/ mkMac__DOT__y___05Fh13751;
        CData/*0:0*/ mkMac__DOT__y___05Fh13886;
        CData/*0:0*/ mkMac__DOT__y___05Fh13945;
        CData/*0:0*/ mkMac__DOT__y___05Fh14080;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__y___05Fh14139;
        CData/*0:0*/ mkMac__DOT__y___05Fh14274;
        CData/*0:0*/ mkMac__DOT__y___05Fh14333;
        CData/*0:0*/ mkMac__DOT__y___05Fh14468;
        CData/*0:0*/ mkMac__DOT__y___05Fh14527;
        CData/*0:0*/ mkMac__DOT__y___05Fh14662;
        CData/*0:0*/ mkMac__DOT__y___05Fh14721;
        CData/*0:0*/ mkMac__DOT__y___05Fh14856;
        CData/*0:0*/ mkMac__DOT__y___05Fh14915;
        CData/*0:0*/ mkMac__DOT__y___05Fh15050;
        CData/*0:0*/ mkMac__DOT__y___05Fh15109;
        CData/*0:0*/ mkMac__DOT__y___05Fh15244;
        CData/*0:0*/ mkMac__DOT__y___05Fh15303;
        CData/*0:0*/ mkMac__DOT__y___05Fh1939;
        CData/*0:0*/ mkMac__DOT__y___05Fh2127;
        CData/*0:0*/ mkMac__DOT__y___05Fh2184;
        CData/*0:0*/ mkMac__DOT__y___05Fh2315;
        CData/*0:0*/ mkMac__DOT__y___05Fh2372;
        CData/*0:0*/ mkMac__DOT__y___05Fh2503;
        CData/*0:0*/ mkMac__DOT__y___05Fh2560;
        CData/*0:0*/ mkMac__DOT__y___05Fh2691;
        CData/*0:0*/ mkMac__DOT__y___05Fh2748;
        CData/*0:0*/ mkMac__DOT__y___05Fh2879;
        CData/*0:0*/ mkMac__DOT__y___05Fh2936;
        CData/*0:0*/ mkMac__DOT__y___05Fh3067;
        CData/*0:0*/ mkMac__DOT__y___05Fh3124;
        CData/*0:0*/ mkMac__DOT__y___05Fh3255;
        CData/*0:0*/ mkMac__DOT__y___05Fh3312;
        CData/*0:0*/ mkMac__DOT__y___05Fh3443;
        CData/*0:0*/ mkMac__DOT__y___05Fh3500;
        CData/*0:0*/ mkMac__DOT__y___05Fh3631;
        CData/*0:0*/ mkMac__DOT__y___05Fh3688;
        CData/*0:0*/ mkMac__DOT__y___05Fh3819;
        CData/*0:0*/ mkMac__DOT__y___05Fh3876;
        CData/*0:0*/ mkMac__DOT__y___05Fh4007;
        CData/*0:0*/ mkMac__DOT__y___05Fh4064;
        CData/*0:0*/ mkMac__DOT__y___05Fh4195;
        CData/*0:0*/ mkMac__DOT__y___05Fh4252;
        CData/*0:0*/ mkMac__DOT__y___05Fh4383;
        CData/*0:0*/ mkMac__DOT__y___05Fh4440;
        CData/*0:0*/ mkMac__DOT__y___05Fh4571;
        CData/*0:0*/ mkMac__DOT__y___05Fh4628;
        CData/*0:0*/ mkMac__DOT__y___05Fh4759;
        CData/*0:0*/ mkMac__DOT__y___05Fh4816;
        CData/*0:0*/ mkMac__DOT__y___05Fh4947;
        CData/*0:0*/ mkMac__DOT__y___05Fh5004;
        CData/*0:0*/ mkMac__DOT__y___05Fh5135;
        CData/*0:0*/ mkMac__DOT__y___05Fh5192;
        CData/*0:0*/ mkMac__DOT__y___05Fh5323;
        CData/*0:0*/ mkMac__DOT__y___05Fh5380;
        CData/*0:0*/ mkMac__DOT__y___05Fh5511;
        CData/*0:0*/ mkMac__DOT__y___05Fh5568;
        CData/*0:0*/ mkMac__DOT__y___05Fh5699;
        CData/*0:0*/ mkMac__DOT__y___05Fh5756;
        CData/*0:0*/ mkMac__DOT__y___05Fh5887;
        CData/*0:0*/ mkMac__DOT__y___05Fh5944;
        CData/*0:0*/ mkMac__DOT__y___05Fh9424;
        CData/*0:0*/ mkMac__DOT__y___05Fh9618;
        CData/*0:0*/ mkMac__DOT__y___05Fh9677;
        CData/*0:0*/ mkMac__DOT__y___05Fh9812;
        CData/*0:0*/ mkMac__DOT__y___05Fh9871;
        SData/*15:0*/ mkMac__DOT__read_A_a_in;
        SData/*15:0*/ mkMac__DOT__read_B_b_in;
        SData/*15:0*/ mkMac__DOT__a;
    };
    struct {
        SData/*15:0*/ mkMac__DOT__a_D_IN;
        SData/*15:0*/ mkMac__DOT__b;
        SData/*15:0*/ mkMac__DOT__b_D_IN;
        SData/*15:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d590;
        SData/*15:0*/ mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05F_d247;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48;
        SData/*15:0*/ mkMac__DOT__product___05Fh650;
        SData/*15:0*/ mkMac__DOT__product___05Fh673;
        SData/*15:0*/ mkMac__DOT__product___05Fh696;
        SData/*15:0*/ mkMac__DOT__product___05Fh719;
        SData/*15:0*/ mkMac__DOT__product___05Fh742;
        SData/*15:0*/ mkMac__DOT__product___05Fh765;
        SData/*15:0*/ mkMac__DOT__product___05Fh788;
        SData/*15:0*/ mkMac__DOT__result_mant___05F_1___05Fh840;
        SData/*15:0*/ mkMac__DOT__result_mant___05Fh1750;
        SData/*15:0*/ mkMac__DOT__result_mant___05Fh329;
        SData/*14:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d238;
        SData/*13:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d589;
        SData/*12:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d237;
        SData/*11:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d588;
        SData/*10:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d236;
        SData/*9:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d587;
        SData/*8:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d235;
        IData/*31:0*/ mkMac__DOT__read_C_c_in;
        IData/*31:0*/ mkMac__DOT__mac_calc;
        IData/*31:0*/ mkMac__DOT__c;
        IData/*31:0*/ mkMac__DOT__c_D_IN;
        IData/*31:0*/ mkMac__DOT__out;
        IData/*31:0*/ mkMac__DOT__out_D_IN;
        IData/*31:0*/ mkMac__DOT__IF_IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_ETC___05Fq3;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d268;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d271;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d275;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d279;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d284;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d289;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d295;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d301;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d308;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d315;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d323;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d331;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d340;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_45_PLUS_1_46_ELSE_b___05FETC___05F_d349;
        IData/*31:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d362;
        IData/*31:0*/ mkMac__DOT__IF_x721_BIT_0_XOR_x838_BIT_0_THEN_1_ELSE_0___05Fq2;
        IData/*31:0*/ mkMac__DOT__product___05F_1___05Fh8549;
        IData/*31:0*/ mkMac__DOT__product___05F_1___05Fh8550;
        IData/*31:0*/ mkMac__DOT__product___05F_2___05Fh8503;
        IData/*31:0*/ mkMac__DOT__product___05Fh8951;
        IData/*31:0*/ mkMac__DOT__product___05Fh8974;
        IData/*31:0*/ mkMac__DOT__product___05Fh8997;
        IData/*31:0*/ mkMac__DOT__product___05Fh9020;
        IData/*31:0*/ mkMac__DOT__product___05Fh9043;
        IData/*31:0*/ mkMac__DOT__product___05Fh9066;
        IData/*31:0*/ mkMac__DOT__product___05Fh9089;
        IData/*31:0*/ mkMac__DOT__product___05Fh9112;
    };
    struct {
        IData/*31:0*/ mkMac__DOT__product___05Fh9135;
        IData/*31:0*/ mkMac__DOT__product___05Fh9158;
        IData/*31:0*/ mkMac__DOT__product___05Fh9181;
        IData/*31:0*/ mkMac__DOT__product___05Fh9204;
        IData/*31:0*/ mkMac__DOT__product___05Fh9227;
        IData/*31:0*/ mkMac__DOT__product___05Fh9250;
        IData/*31:0*/ mkMac__DOT__product___05Fh9273;
        IData/*31:0*/ mkMac__DOT__x___05Fh301;
        IData/*31:0*/ mkMac__DOT__x___05Fh7752;
        IData/*29:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d597;
        IData/*27:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d596;
        IData/*25:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d595;
        IData/*23:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d594;
        IData/*23:0*/ mkMac__DOT__c_mant_aligned___05F_1___05Fh1728;
        IData/*23:0*/ mkMac__DOT__c_mant_aligned___05Fh332;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh1727;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh934;
        IData/*23:0*/ mkMac__DOT__x___05Fh1721;
        IData/*23:0*/ mkMac__DOT__x___05Fh1838;
        IData/*22:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d242;
        IData/*21:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d593;
        IData/*20:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d241;
        IData/*19:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d592;
        IData/*18:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d240;
        IData/*17:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_44_THEN_IF_IF_b_BIT_15_ETC___05F_d591;
        IData/*16:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d239;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vm_traceActivity[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
