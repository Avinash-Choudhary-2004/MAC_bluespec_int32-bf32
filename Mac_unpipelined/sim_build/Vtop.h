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
        CData/*7:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d639;
        CData/*7:0*/ mkMac__DOT___0_CONCAT_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d64;
        CData/*7:0*/ mkMac__DOT___theResult___05F___05F_2_fst___05Fh8018;
        CData/*7:0*/ mkMac__DOT___theResult___05F___05F_4_snd_fst___05Fh1738;
        CData/*7:0*/ mkMac__DOT__delta_exp___05Fh2042;
        CData/*7:0*/ mkMac__DOT__delta_exp___05Fh2117;
        CData/*7:0*/ mkMac__DOT__i___05Fh8085;
        CData/*7:0*/ mkMac__DOT__i___05Fh8100;
        CData/*7:0*/ mkMac__DOT__result_exp___05F_1___05Fh1619;
        CData/*7:0*/ mkMac__DOT__result_exp___05F_1___05Fh1783;
        CData/*7:0*/ mkMac__DOT__result_exp___05F_1___05Fh8022;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh326;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh330;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh335;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh339;
        CData/*7:0*/ mkMac__DOT__rounded_result_mant___05Fh1734;
        CData/*7:0*/ mkMac__DOT__x___05Fh1800;
        CData/*5:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d638;
        CData/*3:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d637;
        CData/*1:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d636;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d230;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d245;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d247;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d248;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d249;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d250;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d251;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d252;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d253;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d254;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d255;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d256;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d257;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d258;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d259;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d260;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d261;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d262;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d263;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d264;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d265;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d266;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d267;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b___05FETC___05F_d268;
        CData/*0:0*/ mkMac__DOT__IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_ETC___05F_d77;
        CData/*0:0*/ mkMac__DOT___theResult___05F___05F_3_snd_snd_snd_snd___05Fh2116;
        CData/*0:0*/ mkMac__DOT__round_flag___05Fh2043;
        CData/*0:0*/ mkMac__DOT__round_flag___05Fh2118;
        CData/*0:0*/ mkMac__DOT__x___05Fh10043;
        CData/*0:0*/ mkMac__DOT__x___05Fh10102;
        CData/*0:0*/ mkMac__DOT__x___05Fh10237;
        CData/*0:0*/ mkMac__DOT__x___05Fh10296;
        CData/*0:0*/ mkMac__DOT__x___05Fh10431;
        CData/*0:0*/ mkMac__DOT__x___05Fh10490;
        CData/*0:0*/ mkMac__DOT__x___05Fh10625;
        CData/*0:0*/ mkMac__DOT__x___05Fh10684;
        CData/*0:0*/ mkMac__DOT__x___05Fh10819;
        CData/*0:0*/ mkMac__DOT__x___05Fh10878;
        CData/*0:0*/ mkMac__DOT__x___05Fh11013;
        CData/*0:0*/ mkMac__DOT__x___05Fh11072;
        CData/*0:0*/ mkMac__DOT__x___05Fh11207;
        CData/*0:0*/ mkMac__DOT__x___05Fh11266;
        CData/*0:0*/ mkMac__DOT__x___05Fh11401;
        CData/*0:0*/ mkMac__DOT__x___05Fh11460;
        CData/*0:0*/ mkMac__DOT__x___05Fh11595;
        CData/*0:0*/ mkMac__DOT__x___05Fh11654;
        CData/*0:0*/ mkMac__DOT__x___05Fh11789;
        CData/*0:0*/ mkMac__DOT__x___05Fh11848;
        CData/*0:0*/ mkMac__DOT__x___05Fh11983;
        CData/*0:0*/ mkMac__DOT__x___05Fh12042;
        CData/*0:0*/ mkMac__DOT__x___05Fh12177;
        CData/*0:0*/ mkMac__DOT__x___05Fh12236;
        CData/*0:0*/ mkMac__DOT__x___05Fh12371;
        CData/*0:0*/ mkMac__DOT__x___05Fh12430;
        CData/*0:0*/ mkMac__DOT__x___05Fh12565;
        CData/*0:0*/ mkMac__DOT__x___05Fh12624;
        CData/*0:0*/ mkMac__DOT__x___05Fh12759;
        CData/*0:0*/ mkMac__DOT__x___05Fh12818;
        CData/*0:0*/ mkMac__DOT__x___05Fh12953;
        CData/*0:0*/ mkMac__DOT__x___05Fh13012;
        CData/*0:0*/ mkMac__DOT__x___05Fh13147;
        CData/*0:0*/ mkMac__DOT__x___05Fh13206;
        CData/*0:0*/ mkMac__DOT__x___05Fh13341;
        CData/*0:0*/ mkMac__DOT__x___05Fh13400;
        CData/*0:0*/ mkMac__DOT__x___05Fh13535;
        CData/*0:0*/ mkMac__DOT__x___05Fh13594;
        CData/*0:0*/ mkMac__DOT__x___05Fh13729;
        CData/*0:0*/ mkMac__DOT__x___05Fh13788;
        CData/*0:0*/ mkMac__DOT__x___05Fh13923;
        CData/*0:0*/ mkMac__DOT__x___05Fh13982;
        CData/*0:0*/ mkMac__DOT__x___05Fh14117;
        CData/*0:0*/ mkMac__DOT__x___05Fh14176;
        CData/*0:0*/ mkMac__DOT__x___05Fh14311;
        CData/*0:0*/ mkMac__DOT__x___05Fh14370;
        CData/*0:0*/ mkMac__DOT__x___05Fh14505;
        CData/*0:0*/ mkMac__DOT__x___05Fh14564;
        CData/*0:0*/ mkMac__DOT__x___05Fh14699;
        CData/*0:0*/ mkMac__DOT__x___05Fh14758;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__x___05Fh14893;
        CData/*0:0*/ mkMac__DOT__x___05Fh14952;
        CData/*0:0*/ mkMac__DOT__x___05Fh15087;
        CData/*0:0*/ mkMac__DOT__x___05Fh15146;
        CData/*0:0*/ mkMac__DOT__x___05Fh15281;
        CData/*0:0*/ mkMac__DOT__x___05Fh15340;
        CData/*0:0*/ mkMac__DOT__x___05Fh15475;
        CData/*0:0*/ mkMac__DOT__x___05Fh15534;
        CData/*0:0*/ mkMac__DOT__x___05Fh15669;
        CData/*0:0*/ mkMac__DOT__x___05Fh15728;
        CData/*0:0*/ mkMac__DOT__x___05Fh2220;
        CData/*0:0*/ mkMac__DOT__x___05Fh2408;
        CData/*0:0*/ mkMac__DOT__x___05Fh2465;
        CData/*0:0*/ mkMac__DOT__x___05Fh2596;
        CData/*0:0*/ mkMac__DOT__x___05Fh2653;
        CData/*0:0*/ mkMac__DOT__x___05Fh2784;
        CData/*0:0*/ mkMac__DOT__x___05Fh2841;
        CData/*0:0*/ mkMac__DOT__x___05Fh2972;
        CData/*0:0*/ mkMac__DOT__x___05Fh3029;
        CData/*0:0*/ mkMac__DOT__x___05Fh3160;
        CData/*0:0*/ mkMac__DOT__x___05Fh3217;
        CData/*0:0*/ mkMac__DOT__x___05Fh3348;
        CData/*0:0*/ mkMac__DOT__x___05Fh3405;
        CData/*0:0*/ mkMac__DOT__x___05Fh3536;
        CData/*0:0*/ mkMac__DOT__x___05Fh3593;
        CData/*0:0*/ mkMac__DOT__x___05Fh3724;
        CData/*0:0*/ mkMac__DOT__x___05Fh3781;
        CData/*0:0*/ mkMac__DOT__x___05Fh3912;
        CData/*0:0*/ mkMac__DOT__x___05Fh3969;
        CData/*0:0*/ mkMac__DOT__x___05Fh4100;
        CData/*0:0*/ mkMac__DOT__x___05Fh4157;
        CData/*0:0*/ mkMac__DOT__x___05Fh4288;
        CData/*0:0*/ mkMac__DOT__x___05Fh4345;
        CData/*0:0*/ mkMac__DOT__x___05Fh4476;
        CData/*0:0*/ mkMac__DOT__x___05Fh4533;
        CData/*0:0*/ mkMac__DOT__x___05Fh4664;
        CData/*0:0*/ mkMac__DOT__x___05Fh4721;
        CData/*0:0*/ mkMac__DOT__x___05Fh4852;
        CData/*0:0*/ mkMac__DOT__x___05Fh4909;
        CData/*0:0*/ mkMac__DOT__x___05Fh5040;
        CData/*0:0*/ mkMac__DOT__x___05Fh5097;
        CData/*0:0*/ mkMac__DOT__x___05Fh5228;
        CData/*0:0*/ mkMac__DOT__x___05Fh5285;
        CData/*0:0*/ mkMac__DOT__x___05Fh5416;
        CData/*0:0*/ mkMac__DOT__x___05Fh5473;
        CData/*0:0*/ mkMac__DOT__x___05Fh5604;
        CData/*0:0*/ mkMac__DOT__x___05Fh5661;
        CData/*0:0*/ mkMac__DOT__x___05Fh5792;
        CData/*0:0*/ mkMac__DOT__x___05Fh5849;
        CData/*0:0*/ mkMac__DOT__x___05Fh5980;
        CData/*0:0*/ mkMac__DOT__x___05Fh6037;
        CData/*0:0*/ mkMac__DOT__x___05Fh6168;
        CData/*0:0*/ mkMac__DOT__x___05Fh6225;
        CData/*0:0*/ mkMac__DOT__x___05Fh6356;
        CData/*0:0*/ mkMac__DOT__x___05Fh6413;
        CData/*0:0*/ mkMac__DOT__x___05Fh6601;
        CData/*0:0*/ mkMac__DOT__x___05Fh9849;
        CData/*0:0*/ mkMac__DOT__y___05Fh10044;
        CData/*0:0*/ mkMac__DOT__y___05Fh10103;
        CData/*0:0*/ mkMac__DOT__y___05Fh10238;
        CData/*0:0*/ mkMac__DOT__y___05Fh10297;
        CData/*0:0*/ mkMac__DOT__y___05Fh10432;
        CData/*0:0*/ mkMac__DOT__y___05Fh10491;
        CData/*0:0*/ mkMac__DOT__y___05Fh10626;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__y___05Fh10685;
        CData/*0:0*/ mkMac__DOT__y___05Fh10820;
        CData/*0:0*/ mkMac__DOT__y___05Fh10879;
        CData/*0:0*/ mkMac__DOT__y___05Fh11014;
        CData/*0:0*/ mkMac__DOT__y___05Fh11073;
        CData/*0:0*/ mkMac__DOT__y___05Fh11208;
        CData/*0:0*/ mkMac__DOT__y___05Fh11267;
        CData/*0:0*/ mkMac__DOT__y___05Fh11402;
        CData/*0:0*/ mkMac__DOT__y___05Fh11461;
        CData/*0:0*/ mkMac__DOT__y___05Fh11596;
        CData/*0:0*/ mkMac__DOT__y___05Fh11655;
        CData/*0:0*/ mkMac__DOT__y___05Fh11790;
        CData/*0:0*/ mkMac__DOT__y___05Fh11849;
        CData/*0:0*/ mkMac__DOT__y___05Fh11984;
        CData/*0:0*/ mkMac__DOT__y___05Fh12043;
        CData/*0:0*/ mkMac__DOT__y___05Fh12178;
        CData/*0:0*/ mkMac__DOT__y___05Fh12237;
        CData/*0:0*/ mkMac__DOT__y___05Fh12372;
        CData/*0:0*/ mkMac__DOT__y___05Fh12431;
        CData/*0:0*/ mkMac__DOT__y___05Fh12566;
        CData/*0:0*/ mkMac__DOT__y___05Fh12625;
        CData/*0:0*/ mkMac__DOT__y___05Fh12760;
        CData/*0:0*/ mkMac__DOT__y___05Fh12819;
        CData/*0:0*/ mkMac__DOT__y___05Fh12954;
        CData/*0:0*/ mkMac__DOT__y___05Fh13013;
        CData/*0:0*/ mkMac__DOT__y___05Fh13148;
        CData/*0:0*/ mkMac__DOT__y___05Fh13207;
        CData/*0:0*/ mkMac__DOT__y___05Fh13342;
        CData/*0:0*/ mkMac__DOT__y___05Fh13401;
        CData/*0:0*/ mkMac__DOT__y___05Fh13536;
        CData/*0:0*/ mkMac__DOT__y___05Fh13595;
        CData/*0:0*/ mkMac__DOT__y___05Fh13730;
        CData/*0:0*/ mkMac__DOT__y___05Fh13789;
        CData/*0:0*/ mkMac__DOT__y___05Fh13924;
        CData/*0:0*/ mkMac__DOT__y___05Fh13983;
        CData/*0:0*/ mkMac__DOT__y___05Fh14118;
        CData/*0:0*/ mkMac__DOT__y___05Fh14177;
        CData/*0:0*/ mkMac__DOT__y___05Fh14312;
        CData/*0:0*/ mkMac__DOT__y___05Fh14371;
        CData/*0:0*/ mkMac__DOT__y___05Fh14506;
        CData/*0:0*/ mkMac__DOT__y___05Fh14565;
        CData/*0:0*/ mkMac__DOT__y___05Fh14700;
        CData/*0:0*/ mkMac__DOT__y___05Fh14759;
        CData/*0:0*/ mkMac__DOT__y___05Fh14894;
        CData/*0:0*/ mkMac__DOT__y___05Fh14953;
        CData/*0:0*/ mkMac__DOT__y___05Fh15088;
        CData/*0:0*/ mkMac__DOT__y___05Fh15147;
        CData/*0:0*/ mkMac__DOT__y___05Fh15282;
        CData/*0:0*/ mkMac__DOT__y___05Fh15341;
        CData/*0:0*/ mkMac__DOT__y___05Fh15476;
        CData/*0:0*/ mkMac__DOT__y___05Fh15535;
        CData/*0:0*/ mkMac__DOT__y___05Fh15670;
        CData/*0:0*/ mkMac__DOT__y___05Fh15729;
        CData/*0:0*/ mkMac__DOT__y___05Fh2221;
        CData/*0:0*/ mkMac__DOT__y___05Fh2409;
        CData/*0:0*/ mkMac__DOT__y___05Fh2466;
        CData/*0:0*/ mkMac__DOT__y___05Fh2597;
        CData/*0:0*/ mkMac__DOT__y___05Fh2654;
        CData/*0:0*/ mkMac__DOT__y___05Fh2785;
        CData/*0:0*/ mkMac__DOT__y___05Fh2842;
        CData/*0:0*/ mkMac__DOT__y___05Fh2973;
        CData/*0:0*/ mkMac__DOT__y___05Fh3030;
        CData/*0:0*/ mkMac__DOT__y___05Fh3161;
        CData/*0:0*/ mkMac__DOT__y___05Fh3218;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__y___05Fh3349;
        CData/*0:0*/ mkMac__DOT__y___05Fh3406;
        CData/*0:0*/ mkMac__DOT__y___05Fh3537;
        CData/*0:0*/ mkMac__DOT__y___05Fh3594;
        CData/*0:0*/ mkMac__DOT__y___05Fh3725;
        CData/*0:0*/ mkMac__DOT__y___05Fh3782;
        CData/*0:0*/ mkMac__DOT__y___05Fh3913;
        CData/*0:0*/ mkMac__DOT__y___05Fh3970;
        CData/*0:0*/ mkMac__DOT__y___05Fh4101;
        CData/*0:0*/ mkMac__DOT__y___05Fh4158;
        CData/*0:0*/ mkMac__DOT__y___05Fh4289;
        CData/*0:0*/ mkMac__DOT__y___05Fh4346;
        CData/*0:0*/ mkMac__DOT__y___05Fh4477;
        CData/*0:0*/ mkMac__DOT__y___05Fh4534;
        CData/*0:0*/ mkMac__DOT__y___05Fh4665;
        CData/*0:0*/ mkMac__DOT__y___05Fh4722;
        CData/*0:0*/ mkMac__DOT__y___05Fh4853;
        CData/*0:0*/ mkMac__DOT__y___05Fh4910;
        CData/*0:0*/ mkMac__DOT__y___05Fh5041;
        CData/*0:0*/ mkMac__DOT__y___05Fh5098;
        CData/*0:0*/ mkMac__DOT__y___05Fh5229;
        CData/*0:0*/ mkMac__DOT__y___05Fh5286;
        CData/*0:0*/ mkMac__DOT__y___05Fh5417;
        CData/*0:0*/ mkMac__DOT__y___05Fh5474;
        CData/*0:0*/ mkMac__DOT__y___05Fh5605;
        CData/*0:0*/ mkMac__DOT__y___05Fh5662;
        CData/*0:0*/ mkMac__DOT__y___05Fh5793;
        CData/*0:0*/ mkMac__DOT__y___05Fh5850;
        CData/*0:0*/ mkMac__DOT__y___05Fh5981;
        CData/*0:0*/ mkMac__DOT__y___05Fh6038;
        CData/*0:0*/ mkMac__DOT__y___05Fh6169;
        CData/*0:0*/ mkMac__DOT__y___05Fh6226;
        CData/*0:0*/ mkMac__DOT__y___05Fh6357;
        CData/*0:0*/ mkMac__DOT__y___05Fh6414;
        CData/*0:0*/ mkMac__DOT__y___05Fh6602;
        CData/*0:0*/ mkMac__DOT__y___05Fh9850;
        SData/*15:0*/ mkMac__DOT__read_A_a_in;
        SData/*15:0*/ mkMac__DOT__read_B_b_in;
        SData/*15:0*/ mkMac__DOT__a;
        SData/*15:0*/ mkMac__DOT__a_D_IN;
        SData/*15:0*/ mkMac__DOT__b;
        SData/*15:0*/ mkMac__DOT__b_D_IN;
        SData/*15:0*/ mkMac__DOT__IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4___05FETC___05F_d54;
        SData/*15:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d643;
        SData/*15:0*/ mkMac__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_0_3_THEN_1_CONCAT_a_BITS_6_TO_0_4_5_E_ETC___05F_d16;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05F_d300;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_1_2_THEN_IF_b_BIT_0_3_THEN_1_CONCAT_a_ETC___05F_d19;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_2_1_THEN_IF_b_BIT_1_2_THEN_IF_b_BIT_0_ETC___05F_d23;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_THEN_IF_b_BIT_1_ETC___05F_d27;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_0_THEN_IF_b_BIT_2_1_ETC___05F_d32;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_0_T_ETC___05F_d37;
        SData/*15:0*/ mkMac__DOT__IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_b_BIT_4_THE_ETC___05F_d48;
        SData/*15:0*/ mkMac__DOT___theResult___05F___05F_4_fst___05Fh1730;
        SData/*15:0*/ mkMac__DOT__product___05Fh1428;
        SData/*15:0*/ mkMac__DOT__product___05Fh1451;
        SData/*15:0*/ mkMac__DOT__product___05Fh1474;
        SData/*15:0*/ mkMac__DOT__product___05Fh1497;
        SData/*15:0*/ mkMac__DOT__product___05Fh1520;
        SData/*15:0*/ mkMac__DOT__product___05Fh1543;
        SData/*15:0*/ mkMac__DOT__product___05Fh1566;
        SData/*15:0*/ mkMac__DOT__result_mant___05F_1___05Fh1618;
        SData/*15:0*/ mkMac__DOT__result_mant___05Fh1640;
        SData/*13:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d642;
    };
    struct {
        SData/*11:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d641;
        SData/*9:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d640;
        IData/*31:0*/ mkMac__DOT__read_C_c_in;
        IData/*31:0*/ mkMac__DOT__mac_calc;
        IData/*31:0*/ mkMac__DOT__c;
        IData/*31:0*/ mkMac__DOT__c_D_IN;
        IData/*31:0*/ mkMac__DOT__out;
        IData/*31:0*/ mkMac__DOT__out_D_IN;
        IData/*31:0*/ mkMac__DOT__IF_IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_ETC___05Fq3;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d321;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d324;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d328;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d332;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d337;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d342;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d348;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d354;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d361;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d368;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d376;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d384;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d393;
        IData/*31:0*/ mkMac__DOT__IF_IF_b_BIT_15_THEN_INV_b_98_PLUS_1_99_ELSE_b___05FETC___05F_d402;
        IData/*31:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d415;
        IData/*31:0*/ mkMac__DOT__IF_x153_BIT_0_XOR_x114_BIT_0_THEN_1_ELSE_0___05Fq2;
        IData/*31:0*/ mkMac__DOT__product___05F_1___05Fh8975;
        IData/*31:0*/ mkMac__DOT__product___05F_1___05Fh8976;
        IData/*31:0*/ mkMac__DOT__product___05F_2___05Fh8929;
        IData/*31:0*/ mkMac__DOT__product___05Fh9377;
        IData/*31:0*/ mkMac__DOT__product___05Fh9400;
        IData/*31:0*/ mkMac__DOT__product___05Fh9423;
        IData/*31:0*/ mkMac__DOT__product___05Fh9446;
        IData/*31:0*/ mkMac__DOT__product___05Fh9469;
        IData/*31:0*/ mkMac__DOT__product___05Fh9492;
        IData/*31:0*/ mkMac__DOT__product___05Fh9515;
        IData/*31:0*/ mkMac__DOT__product___05Fh9538;
        IData/*31:0*/ mkMac__DOT__product___05Fh9561;
        IData/*31:0*/ mkMac__DOT__product___05Fh9584;
        IData/*31:0*/ mkMac__DOT__product___05Fh9607;
        IData/*31:0*/ mkMac__DOT__product___05Fh9630;
        IData/*31:0*/ mkMac__DOT__product___05Fh9653;
        IData/*31:0*/ mkMac__DOT__product___05Fh9676;
        IData/*31:0*/ mkMac__DOT__product___05Fh9699;
        IData/*31:0*/ mkMac__DOT__x___05Fh301;
        IData/*31:0*/ mkMac__DOT__x___05Fh8178;
        IData/*29:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d650;
        IData/*27:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d649;
        IData/*25:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d648;
        IData/*23:0*/ mkMac__DOT__IF_IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_ETC___05F_d294;
        IData/*23:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d647;
        IData/*23:0*/ mkMac__DOT__c_mant_aligned___05F_1___05Fh2119;
        IData/*23:0*/ mkMac__DOT__c_mant_aligned___05Fh337;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05F_1___05Fh8116;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh2044;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh336;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh347;
        IData/*23:0*/ mkMac__DOT__x___05Fh1153;
        IData/*23:0*/ mkMac__DOT__x___05Fh2114;
        IData/*22:0*/ mkMac__DOT__IF_IF_IF_IF_IF_b_BIT_6_THEN_IF_b_BIT_5_THEN_IF_ETC___05F_d291;
        IData/*21:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d646;
        IData/*19:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d645;
        IData/*17:0*/ mkMac__DOT__IF_a_BIT_15_EQ_b_BIT_15_97_THEN_IF_IF_b_BIT_15_ETC___05F_d644;
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
