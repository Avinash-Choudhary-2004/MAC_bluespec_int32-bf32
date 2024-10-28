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
    VL_IN8(EN_read_in,0,0);
    VL_OUT8(RDY_read_in,0,0);
    VL_IN8(EN_mac_calc,0,0);
    VL_OUT8(RDY_mac_calc,0,0);
    VL_INW(read_in_mul_in,64,0,3);
    VL_OUT(mac_calc,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mkMac__DOT__CLK;
        CData/*0:0*/ mkMac__DOT__RST_N;
        CData/*0:0*/ mkMac__DOT__EN_read_in;
        CData/*0:0*/ mkMac__DOT__RDY_read_in;
        CData/*0:0*/ mkMac__DOT__EN_mac_calc;
        CData/*0:0*/ mkMac__DOT__RDY_mac_calc;
        CData/*0:0*/ mkMac__DOT__adder_ififo_rv_EN;
        CData/*0:0*/ mkMac__DOT__adder_ofifo_rv_EN;
        CData/*0:0*/ mkMac__DOT__multiplier_ififo_rv_EN;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_RL_rl_pipeline_addStage;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_RL_rl_pipeline_mulStage;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_mac_calc;
        CData/*0:0*/ mkMac__DOT__CAN_FIRE_read_in;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_RL_rl_pipeline_addStage;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_RL_rl_pipeline_mulStage;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_mac_calc;
        CData/*0:0*/ mkMac__DOT__WILL_FIRE_read_in;
        CData/*7:0*/ mkMac__DOT___0_CONCAT_IF_IF_multiplier_ififo_rv_port0___05Fread_ETC___05F_d69;
        CData/*7:0*/ mkMac__DOT___theResult___05F___05F_1_snd_fst___05Fh1545;
        CData/*7:0*/ mkMac__DOT___theResult___05F___05F_1_snd_fst___05Fh1551;
        CData/*7:0*/ mkMac__DOT___theResult___05F___05F_2_fst___05Fh9747;
        CData/*7:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_40_08_XOR_a_ETC___05F_d659;
        CData/*7:0*/ mkMac__DOT__delta_exp___05Fh3769;
        CData/*7:0*/ mkMac__DOT__delta_exp___05Fh3846;
        CData/*7:0*/ mkMac__DOT__i___05Fh9813;
        CData/*7:0*/ mkMac__DOT__i___05Fh9828;
        CData/*7:0*/ mkMac__DOT__result_exp___05F_1___05Fh1432;
        CData/*7:0*/ mkMac__DOT__result_exp___05F_1___05Fh1596;
        CData/*7:0*/ mkMac__DOT__result_exp___05F_1___05Fh9751;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh2921;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh914;
        CData/*7:0*/ mkMac__DOT__result_exp___05Fh917;
        CData/*7:0*/ mkMac__DOT__rounded_result_mant___05Fh1547;
        CData/*7:0*/ mkMac__DOT__x___05Fh1613;
        CData/*5:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_38_14_XOR_a_ETC___05F_d658;
        CData/*3:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_36_20_XOR_a_ETC___05F_d657;
        CData/*1:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_34_26_XOR_a_ETC___05F_d656;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d370;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d385;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d387;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d388;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d389;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d390;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d391;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d392;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d393;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d394;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d395;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d396;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d397;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d398;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d399;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d400;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d401;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d402;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d403;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d404;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d405;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d406;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d407;
        CData/*0:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_5_ETC___05F_d408;
        CData/*0:0*/ mkMac__DOT___theResult___05F_snd_snd_snd_snd___05Fh3845;
        CData/*0:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BITS_63_TO_56_1_ETC___05F_d219;
        CData/*0:0*/ mkMac__DOT__round_flag___05Fh3770;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__round_flag___05Fh3847;
        CData/*0:0*/ mkMac__DOT__x___05Fh10671;
        CData/*0:0*/ mkMac__DOT__x___05Fh10859;
        CData/*0:0*/ mkMac__DOT__x___05Fh10916;
        CData/*0:0*/ mkMac__DOT__x___05Fh11047;
        CData/*0:0*/ mkMac__DOT__x___05Fh11104;
        CData/*0:0*/ mkMac__DOT__x___05Fh11235;
        CData/*0:0*/ mkMac__DOT__x___05Fh11292;
        CData/*0:0*/ mkMac__DOT__x___05Fh11423;
        CData/*0:0*/ mkMac__DOT__x___05Fh11480;
        CData/*0:0*/ mkMac__DOT__x___05Fh11611;
        CData/*0:0*/ mkMac__DOT__x___05Fh11668;
        CData/*0:0*/ mkMac__DOT__x___05Fh11799;
        CData/*0:0*/ mkMac__DOT__x___05Fh11856;
        CData/*0:0*/ mkMac__DOT__x___05Fh11987;
        CData/*0:0*/ mkMac__DOT__x___05Fh12044;
        CData/*0:0*/ mkMac__DOT__x___05Fh12175;
        CData/*0:0*/ mkMac__DOT__x___05Fh12232;
        CData/*0:0*/ mkMac__DOT__x___05Fh12363;
        CData/*0:0*/ mkMac__DOT__x___05Fh12420;
        CData/*0:0*/ mkMac__DOT__x___05Fh12551;
        CData/*0:0*/ mkMac__DOT__x___05Fh12608;
        CData/*0:0*/ mkMac__DOT__x___05Fh12739;
        CData/*0:0*/ mkMac__DOT__x___05Fh12796;
        CData/*0:0*/ mkMac__DOT__x___05Fh12927;
        CData/*0:0*/ mkMac__DOT__x___05Fh12984;
        CData/*0:0*/ mkMac__DOT__x___05Fh13115;
        CData/*0:0*/ mkMac__DOT__x___05Fh13172;
        CData/*0:0*/ mkMac__DOT__x___05Fh13303;
        CData/*0:0*/ mkMac__DOT__x___05Fh13360;
        CData/*0:0*/ mkMac__DOT__x___05Fh13491;
        CData/*0:0*/ mkMac__DOT__x___05Fh13548;
        CData/*0:0*/ mkMac__DOT__x___05Fh13679;
        CData/*0:0*/ mkMac__DOT__x___05Fh13736;
        CData/*0:0*/ mkMac__DOT__x___05Fh13867;
        CData/*0:0*/ mkMac__DOT__x___05Fh13924;
        CData/*0:0*/ mkMac__DOT__x___05Fh14055;
        CData/*0:0*/ mkMac__DOT__x___05Fh14112;
        CData/*0:0*/ mkMac__DOT__x___05Fh14243;
        CData/*0:0*/ mkMac__DOT__x___05Fh14300;
        CData/*0:0*/ mkMac__DOT__x___05Fh14431;
        CData/*0:0*/ mkMac__DOT__x___05Fh14488;
        CData/*0:0*/ mkMac__DOT__x___05Fh14619;
        CData/*0:0*/ mkMac__DOT__x___05Fh14676;
        CData/*0:0*/ mkMac__DOT__x___05Fh14807;
        CData/*0:0*/ mkMac__DOT__x___05Fh14864;
        CData/*0:0*/ mkMac__DOT__x___05Fh14995;
        CData/*0:0*/ mkMac__DOT__x___05Fh15052;
        CData/*0:0*/ mkMac__DOT__x___05Fh15183;
        CData/*0:0*/ mkMac__DOT__x___05Fh15240;
        CData/*0:0*/ mkMac__DOT__x___05Fh15371;
        CData/*0:0*/ mkMac__DOT__x___05Fh15428;
        CData/*0:0*/ mkMac__DOT__x___05Fh15559;
        CData/*0:0*/ mkMac__DOT__x___05Fh15616;
        CData/*0:0*/ mkMac__DOT__x___05Fh15747;
        CData/*0:0*/ mkMac__DOT__x___05Fh15804;
        CData/*0:0*/ mkMac__DOT__x___05Fh15935;
        CData/*0:0*/ mkMac__DOT__x___05Fh15992;
        CData/*0:0*/ mkMac__DOT__x___05Fh16123;
        CData/*0:0*/ mkMac__DOT__x___05Fh16180;
        CData/*0:0*/ mkMac__DOT__x___05Fh16311;
        CData/*0:0*/ mkMac__DOT__x___05Fh16368;
        CData/*0:0*/ mkMac__DOT__x___05Fh3949;
        CData/*0:0*/ mkMac__DOT__x___05Fh4137;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__x___05Fh4194;
        CData/*0:0*/ mkMac__DOT__x___05Fh4325;
        CData/*0:0*/ mkMac__DOT__x___05Fh4382;
        CData/*0:0*/ mkMac__DOT__x___05Fh4513;
        CData/*0:0*/ mkMac__DOT__x___05Fh4570;
        CData/*0:0*/ mkMac__DOT__x___05Fh4701;
        CData/*0:0*/ mkMac__DOT__x___05Fh4758;
        CData/*0:0*/ mkMac__DOT__x___05Fh4889;
        CData/*0:0*/ mkMac__DOT__x___05Fh4946;
        CData/*0:0*/ mkMac__DOT__x___05Fh5077;
        CData/*0:0*/ mkMac__DOT__x___05Fh5134;
        CData/*0:0*/ mkMac__DOT__x___05Fh5265;
        CData/*0:0*/ mkMac__DOT__x___05Fh5322;
        CData/*0:0*/ mkMac__DOT__x___05Fh5453;
        CData/*0:0*/ mkMac__DOT__x___05Fh5510;
        CData/*0:0*/ mkMac__DOT__x___05Fh5641;
        CData/*0:0*/ mkMac__DOT__x___05Fh5698;
        CData/*0:0*/ mkMac__DOT__x___05Fh5829;
        CData/*0:0*/ mkMac__DOT__x___05Fh5886;
        CData/*0:0*/ mkMac__DOT__x___05Fh6017;
        CData/*0:0*/ mkMac__DOT__x___05Fh6074;
        CData/*0:0*/ mkMac__DOT__x___05Fh6205;
        CData/*0:0*/ mkMac__DOT__x___05Fh6262;
        CData/*0:0*/ mkMac__DOT__x___05Fh6393;
        CData/*0:0*/ mkMac__DOT__x___05Fh6450;
        CData/*0:0*/ mkMac__DOT__x___05Fh6581;
        CData/*0:0*/ mkMac__DOT__x___05Fh6638;
        CData/*0:0*/ mkMac__DOT__x___05Fh6769;
        CData/*0:0*/ mkMac__DOT__x___05Fh6826;
        CData/*0:0*/ mkMac__DOT__x___05Fh6957;
        CData/*0:0*/ mkMac__DOT__x___05Fh7014;
        CData/*0:0*/ mkMac__DOT__x___05Fh7145;
        CData/*0:0*/ mkMac__DOT__x___05Fh7202;
        CData/*0:0*/ mkMac__DOT__x___05Fh7333;
        CData/*0:0*/ mkMac__DOT__x___05Fh7390;
        CData/*0:0*/ mkMac__DOT__x___05Fh7521;
        CData/*0:0*/ mkMac__DOT__x___05Fh7578;
        CData/*0:0*/ mkMac__DOT__x___05Fh7709;
        CData/*0:0*/ mkMac__DOT__x___05Fh7766;
        CData/*0:0*/ mkMac__DOT__x___05Fh7897;
        CData/*0:0*/ mkMac__DOT__x___05Fh7954;
        CData/*0:0*/ mkMac__DOT__x___05Fh8085;
        CData/*0:0*/ mkMac__DOT__x___05Fh8142;
        CData/*0:0*/ mkMac__DOT__x___05Fh8330;
        CData/*0:0*/ mkMac__DOT__y___05Fh10672;
        CData/*0:0*/ mkMac__DOT__y___05Fh10860;
        CData/*0:0*/ mkMac__DOT__y___05Fh10917;
        CData/*0:0*/ mkMac__DOT__y___05Fh11048;
        CData/*0:0*/ mkMac__DOT__y___05Fh11105;
        CData/*0:0*/ mkMac__DOT__y___05Fh11236;
        CData/*0:0*/ mkMac__DOT__y___05Fh11293;
        CData/*0:0*/ mkMac__DOT__y___05Fh11424;
        CData/*0:0*/ mkMac__DOT__y___05Fh11481;
        CData/*0:0*/ mkMac__DOT__y___05Fh11612;
        CData/*0:0*/ mkMac__DOT__y___05Fh11669;
        CData/*0:0*/ mkMac__DOT__y___05Fh11800;
        CData/*0:0*/ mkMac__DOT__y___05Fh11857;
        CData/*0:0*/ mkMac__DOT__y___05Fh11988;
        CData/*0:0*/ mkMac__DOT__y___05Fh12045;
        CData/*0:0*/ mkMac__DOT__y___05Fh12176;
        CData/*0:0*/ mkMac__DOT__y___05Fh12233;
        CData/*0:0*/ mkMac__DOT__y___05Fh12364;
        CData/*0:0*/ mkMac__DOT__y___05Fh12421;
        CData/*0:0*/ mkMac__DOT__y___05Fh12552;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__y___05Fh12609;
        CData/*0:0*/ mkMac__DOT__y___05Fh12740;
        CData/*0:0*/ mkMac__DOT__y___05Fh12797;
        CData/*0:0*/ mkMac__DOT__y___05Fh12928;
        CData/*0:0*/ mkMac__DOT__y___05Fh12985;
        CData/*0:0*/ mkMac__DOT__y___05Fh13116;
        CData/*0:0*/ mkMac__DOT__y___05Fh13173;
        CData/*0:0*/ mkMac__DOT__y___05Fh13304;
        CData/*0:0*/ mkMac__DOT__y___05Fh13361;
        CData/*0:0*/ mkMac__DOT__y___05Fh13492;
        CData/*0:0*/ mkMac__DOT__y___05Fh13549;
        CData/*0:0*/ mkMac__DOT__y___05Fh13680;
        CData/*0:0*/ mkMac__DOT__y___05Fh13737;
        CData/*0:0*/ mkMac__DOT__y___05Fh13868;
        CData/*0:0*/ mkMac__DOT__y___05Fh13925;
        CData/*0:0*/ mkMac__DOT__y___05Fh14056;
        CData/*0:0*/ mkMac__DOT__y___05Fh14113;
        CData/*0:0*/ mkMac__DOT__y___05Fh14244;
        CData/*0:0*/ mkMac__DOT__y___05Fh14301;
        CData/*0:0*/ mkMac__DOT__y___05Fh14432;
        CData/*0:0*/ mkMac__DOT__y___05Fh14489;
        CData/*0:0*/ mkMac__DOT__y___05Fh14620;
        CData/*0:0*/ mkMac__DOT__y___05Fh14677;
        CData/*0:0*/ mkMac__DOT__y___05Fh14808;
        CData/*0:0*/ mkMac__DOT__y___05Fh14865;
        CData/*0:0*/ mkMac__DOT__y___05Fh14996;
        CData/*0:0*/ mkMac__DOT__y___05Fh15053;
        CData/*0:0*/ mkMac__DOT__y___05Fh15184;
        CData/*0:0*/ mkMac__DOT__y___05Fh15241;
        CData/*0:0*/ mkMac__DOT__y___05Fh15372;
        CData/*0:0*/ mkMac__DOT__y___05Fh15429;
        CData/*0:0*/ mkMac__DOT__y___05Fh15560;
        CData/*0:0*/ mkMac__DOT__y___05Fh15617;
        CData/*0:0*/ mkMac__DOT__y___05Fh15748;
        CData/*0:0*/ mkMac__DOT__y___05Fh15805;
        CData/*0:0*/ mkMac__DOT__y___05Fh15936;
        CData/*0:0*/ mkMac__DOT__y___05Fh15993;
        CData/*0:0*/ mkMac__DOT__y___05Fh16124;
        CData/*0:0*/ mkMac__DOT__y___05Fh16181;
        CData/*0:0*/ mkMac__DOT__y___05Fh16312;
        CData/*0:0*/ mkMac__DOT__y___05Fh16369;
        CData/*0:0*/ mkMac__DOT__y___05Fh3950;
        CData/*0:0*/ mkMac__DOT__y___05Fh4138;
        CData/*0:0*/ mkMac__DOT__y___05Fh4195;
        CData/*0:0*/ mkMac__DOT__y___05Fh4326;
        CData/*0:0*/ mkMac__DOT__y___05Fh4383;
        CData/*0:0*/ mkMac__DOT__y___05Fh4514;
        CData/*0:0*/ mkMac__DOT__y___05Fh4571;
        CData/*0:0*/ mkMac__DOT__y___05Fh4702;
        CData/*0:0*/ mkMac__DOT__y___05Fh4759;
        CData/*0:0*/ mkMac__DOT__y___05Fh4890;
        CData/*0:0*/ mkMac__DOT__y___05Fh4947;
        CData/*0:0*/ mkMac__DOT__y___05Fh5078;
        CData/*0:0*/ mkMac__DOT__y___05Fh5135;
        CData/*0:0*/ mkMac__DOT__y___05Fh5266;
        CData/*0:0*/ mkMac__DOT__y___05Fh5323;
        CData/*0:0*/ mkMac__DOT__y___05Fh5454;
        CData/*0:0*/ mkMac__DOT__y___05Fh5511;
        CData/*0:0*/ mkMac__DOT__y___05Fh5642;
        CData/*0:0*/ mkMac__DOT__y___05Fh5699;
        CData/*0:0*/ mkMac__DOT__y___05Fh5830;
        CData/*0:0*/ mkMac__DOT__y___05Fh5887;
        CData/*0:0*/ mkMac__DOT__y___05Fh6018;
        CData/*0:0*/ mkMac__DOT__y___05Fh6075;
    };
    struct {
        CData/*0:0*/ mkMac__DOT__y___05Fh6206;
        CData/*0:0*/ mkMac__DOT__y___05Fh6263;
        CData/*0:0*/ mkMac__DOT__y___05Fh6394;
        CData/*0:0*/ mkMac__DOT__y___05Fh6451;
        CData/*0:0*/ mkMac__DOT__y___05Fh6582;
        CData/*0:0*/ mkMac__DOT__y___05Fh6639;
        CData/*0:0*/ mkMac__DOT__y___05Fh6770;
        CData/*0:0*/ mkMac__DOT__y___05Fh6827;
        CData/*0:0*/ mkMac__DOT__y___05Fh6958;
        CData/*0:0*/ mkMac__DOT__y___05Fh7015;
        CData/*0:0*/ mkMac__DOT__y___05Fh7146;
        CData/*0:0*/ mkMac__DOT__y___05Fh7203;
        CData/*0:0*/ mkMac__DOT__y___05Fh7334;
        CData/*0:0*/ mkMac__DOT__y___05Fh7391;
        CData/*0:0*/ mkMac__DOT__y___05Fh7522;
        CData/*0:0*/ mkMac__DOT__y___05Fh7579;
        CData/*0:0*/ mkMac__DOT__y___05Fh7710;
        CData/*0:0*/ mkMac__DOT__y___05Fh7767;
        CData/*0:0*/ mkMac__DOT__y___05Fh7898;
        CData/*0:0*/ mkMac__DOT__y___05Fh7955;
        CData/*0:0*/ mkMac__DOT__y___05Fh8086;
        CData/*0:0*/ mkMac__DOT__y___05Fh8143;
        CData/*0:0*/ mkMac__DOT__y___05Fh8331;
        SData/*15:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_ETC___05F_d59;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_BIT_64_THEN_INV_multipl_ETC___05Fq1;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_33_8_TH_ETC___05F_d21;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_34_7_TH_ETC___05F_d24;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_35_6_TH_ETC___05F_d28;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_36_5_TH_ETC___05F_d32;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_37_4_TH_ETC___05F_d37;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_38_3_TH_ETC___05F_d42;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_39_2_TH_ETC___05F_d53;
        SData/*15:0*/ mkMac__DOT__IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_TH_ETC___05F_d89;
        SData/*15:0*/ mkMac__DOT___theResult___05F___05F_1_fst___05Fh1543;
        SData/*15:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_48_84_XOR_a_ETC___05F_d663;
        SData/*15:0*/ mkMac__DOT__product___05Fh1241;
        SData/*15:0*/ mkMac__DOT__product___05Fh1264;
        SData/*15:0*/ mkMac__DOT__product___05Fh1287;
        SData/*15:0*/ mkMac__DOT__product___05Fh1310;
        SData/*15:0*/ mkMac__DOT__product___05Fh1333;
        SData/*15:0*/ mkMac__DOT__product___05Fh1356;
        SData/*15:0*/ mkMac__DOT__product___05Fh1379;
        SData/*15:0*/ mkMac__DOT__result_mant___05F_1___05Fh1431;
        SData/*15:0*/ mkMac__DOT__result_mant___05Fh1453;
        SData/*13:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_46_90_XOR_a_ETC___05F_d662;
        SData/*11:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_44_96_XOR_a_ETC___05F_d661;
        SData/*9:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_42_02_XOR_a_ETC___05F_d660;
        WData/*64:0*/ mkMac__DOT__read_in_mul_in[3];
        IData/*31:0*/ mkMac__DOT__mac_calc;
        WData/*65:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fwrite_1[3];
        WData/*65:0*/ mkMac__DOT__adder_ififo_rv_port1___05Fread[3];
        WData/*65:0*/ mkMac__DOT__adder_ififo_rv_port1___05Fwrite_1[3];
        WData/*65:0*/ mkMac__DOT__adder_ififo_rv_port2___05Fread[3];
        WData/*65:0*/ mkMac__DOT__multiplier_ififo_rv_port1___05Fread[3];
        WData/*65:0*/ mkMac__DOT__multiplier_ififo_rv_port1___05Fwrite_1[3];
        WData/*65:0*/ mkMac__DOT__multiplier_ififo_rv_port2___05Fread[3];
        WData/*65:0*/ mkMac__DOT__adder_ififo_rv[3];
        WData/*65:0*/ mkMac__DOT__adder_ififo_rv_D_IN[3];
        WData/*65:0*/ mkMac__DOT__multiplier_ififo_rv[3];
        WData/*65:0*/ mkMac__DOT__multiplier_ififo_rv_D_IN[3];
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d111;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d114;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d118;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d122;
    };
    struct {
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d127;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d132;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d138;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d144;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d151;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d158;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d166;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d174;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d183;
        IData/*31:0*/ mkMac__DOT__IF_IF_multiplier_ififo_rv_port0___05Fread_BIT_48_0_ETC___05F_d192;
        IData/*31:0*/ mkMac__DOT__IF_adder_ififo_rv_BIT_33_XOR_adder_ififo_rv_BI_ETC___05Fq3;
        IData/*31:0*/ mkMac__DOT__IF_adder_ififo_rv_port0___05Fread___05F09_BIT_0_15_THE_ETC___05F_d672;
        IData/*31:0*/ mkMac__DOT__IF_x696_BIT_0_XOR_x841_BIT_0_THEN_1_ELSE_0___05Fq2;
        IData/*31:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_64_16_XOR_a_ETC___05F_d671;
        IData/*31:0*/ mkMac__DOT__product___05F_1___05Fh1888;
        IData/*31:0*/ mkMac__DOT__product___05F_1___05Fh1889;
        IData/*31:0*/ mkMac__DOT__product___05F_2___05Fh1842;
        IData/*31:0*/ mkMac__DOT__product___05Fh1837;
        IData/*31:0*/ mkMac__DOT__product___05Fh2290;
        IData/*31:0*/ mkMac__DOT__product___05Fh2313;
        IData/*31:0*/ mkMac__DOT__product___05Fh2336;
        IData/*31:0*/ mkMac__DOT__product___05Fh2359;
        IData/*31:0*/ mkMac__DOT__product___05Fh2382;
        IData/*31:0*/ mkMac__DOT__product___05Fh2405;
        IData/*31:0*/ mkMac__DOT__product___05Fh2428;
        IData/*31:0*/ mkMac__DOT__product___05Fh2451;
        IData/*31:0*/ mkMac__DOT__product___05Fh2474;
        IData/*31:0*/ mkMac__DOT__product___05Fh2497;
        IData/*31:0*/ mkMac__DOT__product___05Fh2520;
        IData/*31:0*/ mkMac__DOT__product___05Fh2543;
        IData/*31:0*/ mkMac__DOT__product___05Fh2566;
        IData/*31:0*/ mkMac__DOT__product___05Fh2589;
        IData/*31:0*/ mkMac__DOT__product___05Fh2612;
        IData/*31:0*/ mkMac__DOT__product___05Fh910;
        IData/*31:0*/ mkMac__DOT__x___05Fh867;
        IData/*29:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_62_42_XOR_a_ETC___05F_d670;
        IData/*27:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_60_48_XOR_a_ETC___05F_d669;
        IData/*25:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_58_54_XOR_a_ETC___05F_d668;
        IData/*23:0*/ mkMac__DOT__IF_IF_IF_adder_ififo_rv_port0___05Fread___05F09_BITS_6_ETC___05F_d434;
        IData/*23:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_56_60_XOR_a_ETC___05F_d667;
        IData/*23:0*/ mkMac__DOT__c_mant_aligned___05F_1___05Fh3848;
        IData/*23:0*/ mkMac__DOT__c_mant_aligned___05Fh2919;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05F_1___05Fh9844;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh2917;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh2929;
        IData/*23:0*/ mkMac__DOT__result_mant_aligned___05Fh3771;
        IData/*23:0*/ mkMac__DOT__x___05Fh3696;
        IData/*23:0*/ mkMac__DOT__x___05Fh3841;
        IData/*22:0*/ mkMac__DOT__IF_IF_adder_ififo_rv_port0___05Fread___05F09_BITS_63_T_ETC___05F_d431;
        IData/*21:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_54_66_XOR_a_ETC___05F_d666;
        IData/*19:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_52_72_XOR_a_ETC___05F_d665;
        IData/*17:0*/ mkMac__DOT__adder_ififo_rv_port0___05Fread___05F09_BIT_50_78_XOR_a_ETC___05F_d664;
        QData/*32:0*/ mkMac__DOT__adder_ofifo_rv_port0___05Fwrite_1;
        QData/*32:0*/ mkMac__DOT__adder_ofifo_rv_port1___05Fread;
        QData/*32:0*/ mkMac__DOT__adder_ofifo_rv_port1___05Fwrite_1;
        QData/*32:0*/ mkMac__DOT__adder_ofifo_rv_port2___05Fread;
        QData/*32:0*/ mkMac__DOT__adder_ofifo_rv;
        QData/*32:0*/ mkMac__DOT__adder_ofifo_rv_D_IN;
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
