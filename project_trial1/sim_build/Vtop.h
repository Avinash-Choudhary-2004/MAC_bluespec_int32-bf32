// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"
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
        CData/*0:0*/ mkCounter__DOT__CLK;
        CData/*0:0*/ mkCounter__DOT__RST_N;
        CData/*0:0*/ mkCounter__DOT__EN_read_A;
        CData/*0:0*/ mkCounter__DOT__RDY_read_A;
        CData/*0:0*/ mkCounter__DOT__EN_read_B;
        CData/*0:0*/ mkCounter__DOT__RDY_read_B;
        CData/*0:0*/ mkCounter__DOT__EN_read_C;
        CData/*0:0*/ mkCounter__DOT__RDY_read_C;
        CData/*0:0*/ mkCounter__DOT__read_S_s_in;
        CData/*0:0*/ mkCounter__DOT__EN_read_S;
        CData/*0:0*/ mkCounter__DOT__RDY_read_S;
        CData/*0:0*/ mkCounter__DOT__EN_mac_calc;
        CData/*0:0*/ mkCounter__DOT__RDY_mac_calc;
        CData/*0:0*/ mkCounter__DOT__a_EN;
        CData/*0:0*/ mkCounter__DOT__b_EN;
        CData/*0:0*/ mkCounter__DOT__c_EN;
        CData/*0:0*/ mkCounter__DOT__out_EN;
        CData/*0:0*/ mkCounter__DOT__s;
        CData/*0:0*/ mkCounter__DOT__s_D_IN;
        CData/*0:0*/ mkCounter__DOT__s_EN;
        CData/*0:0*/ mkCounter__DOT__CAN_FIRE_mac_calc;
        CData/*0:0*/ mkCounter__DOT__CAN_FIRE_read_A;
        CData/*0:0*/ mkCounter__DOT__CAN_FIRE_read_B;
        CData/*0:0*/ mkCounter__DOT__CAN_FIRE_read_C;
        CData/*0:0*/ mkCounter__DOT__CAN_FIRE_read_S;
        CData/*0:0*/ mkCounter__DOT__WILL_FIRE_mac_calc;
        CData/*0:0*/ mkCounter__DOT__WILL_FIRE_read_A;
        CData/*0:0*/ mkCounter__DOT__WILL_FIRE_read_B;
        CData/*0:0*/ mkCounter__DOT__WILL_FIRE_read_C;
        CData/*0:0*/ mkCounter__DOT__WILL_FIRE_read_S;
        CData/*7:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d392;
        CData/*5:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d391;
        CData/*3:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d390;
        CData/*1:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d389;
        CData/*0:0*/ mkCounter__DOT__x___05Fh2493;
        CData/*0:0*/ mkCounter__DOT__x___05Fh2687;
        CData/*0:0*/ mkCounter__DOT__x___05Fh2746;
        CData/*0:0*/ mkCounter__DOT__x___05Fh2881;
        CData/*0:0*/ mkCounter__DOT__x___05Fh2940;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3075;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3134;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3269;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3328;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3463;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3522;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3657;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3716;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3851;
        CData/*0:0*/ mkCounter__DOT__x___05Fh3910;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4045;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4104;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4239;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4298;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4433;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4492;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4627;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4686;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4821;
        CData/*0:0*/ mkCounter__DOT__x___05Fh4880;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5015;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5074;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5209;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5268;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5403;
    };
    struct {
        CData/*0:0*/ mkCounter__DOT__x___05Fh5462;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5597;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5656;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5791;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5850;
        CData/*0:0*/ mkCounter__DOT__x___05Fh5985;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6044;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6179;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6238;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6373;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6432;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6567;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6626;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6761;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6820;
        CData/*0:0*/ mkCounter__DOT__x___05Fh6955;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7014;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7149;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7208;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7343;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7402;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7537;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7596;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7731;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7790;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7925;
        CData/*0:0*/ mkCounter__DOT__x___05Fh7984;
        CData/*0:0*/ mkCounter__DOT__x___05Fh8119;
        CData/*0:0*/ mkCounter__DOT__x___05Fh8178;
        CData/*0:0*/ mkCounter__DOT__x___05Fh8313;
        CData/*0:0*/ mkCounter__DOT__x___05Fh8372;
        CData/*0:0*/ mkCounter__DOT__y___05Fh2494;
        CData/*0:0*/ mkCounter__DOT__y___05Fh2688;
        CData/*0:0*/ mkCounter__DOT__y___05Fh2747;
        CData/*0:0*/ mkCounter__DOT__y___05Fh2882;
        CData/*0:0*/ mkCounter__DOT__y___05Fh2941;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3076;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3135;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3270;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3329;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3464;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3523;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3658;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3717;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3852;
        CData/*0:0*/ mkCounter__DOT__y___05Fh3911;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4046;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4105;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4240;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4299;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4434;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4493;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4628;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4687;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4822;
        CData/*0:0*/ mkCounter__DOT__y___05Fh4881;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5016;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5075;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5210;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5269;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5404;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5463;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5598;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5657;
    };
    struct {
        CData/*0:0*/ mkCounter__DOT__y___05Fh5792;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5851;
        CData/*0:0*/ mkCounter__DOT__y___05Fh5986;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6045;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6180;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6239;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6374;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6433;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6568;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6627;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6762;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6821;
        CData/*0:0*/ mkCounter__DOT__y___05Fh6956;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7015;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7150;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7209;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7344;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7403;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7538;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7597;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7732;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7791;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7926;
        CData/*0:0*/ mkCounter__DOT__y___05Fh7985;
        CData/*0:0*/ mkCounter__DOT__y___05Fh8120;
        CData/*0:0*/ mkCounter__DOT__y___05Fh8179;
        CData/*0:0*/ mkCounter__DOT__y___05Fh8314;
        CData/*0:0*/ mkCounter__DOT__y___05Fh8373;
        SData/*15:0*/ mkCounter__DOT__read_A_a_in;
        SData/*15:0*/ mkCounter__DOT__read_B_b_in;
        SData/*15:0*/ mkCounter__DOT__a;
        SData/*15:0*/ mkCounter__DOT__a_D_IN;
        SData/*15:0*/ mkCounter__DOT__b;
        SData/*15:0*/ mkCounter__DOT__b_D_IN;
        SData/*15:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d396;
        SData/*15:0*/ mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1;
        SData/*15:0*/ mkCounter__DOT__IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___05F_d13;
        SData/*15:0*/ mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52;
        SData/*15:0*/ mkCounter__DOT__IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___05F_d16;
        SData/*15:0*/ mkCounter__DOT__IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___05F_d20;
        SData/*15:0*/ mkCounter__DOT__IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___05F_d24;
        SData/*15:0*/ mkCounter__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___05F_d29;
        SData/*15:0*/ mkCounter__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___05F_d34;
        SData/*15:0*/ mkCounter__DOT__product___05Fh586;
        SData/*15:0*/ mkCounter__DOT__product___05Fh609;
        SData/*15:0*/ mkCounter__DOT__product___05Fh632;
        SData/*15:0*/ mkCounter__DOT__product___05Fh655;
        SData/*15:0*/ mkCounter__DOT__product___05Fh678;
        SData/*15:0*/ mkCounter__DOT__product___05Fh701;
        SData/*15:0*/ mkCounter__DOT__product___05Fh724;
        SData/*15:0*/ mkCounter__DOT__result_mant___05Fh323;
        SData/*13:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d395;
        SData/*11:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d394;
        SData/*9:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d393;
        IData/*31:0*/ mkCounter__DOT__read_C_c_in;
        IData/*31:0*/ mkCounter__DOT__mac_calc;
        IData/*31:0*/ mkCounter__DOT__c;
        IData/*31:0*/ mkCounter__DOT__c_D_IN;
        IData/*31:0*/ mkCounter__DOT__out;
        IData/*31:0*/ mkCounter__DOT__out_D_IN;
        IData/*31:0*/ mkCounter__DOT__IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF___05FETC___05Fq2;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d100;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d106;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d113;
    };
    struct {
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d120;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d128;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d136;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d145;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d154;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d73;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d76;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d80;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d84;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d89;
        IData/*31:0*/ mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d94;
        IData/*31:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167;
        IData/*31:0*/ mkCounter__DOT__product___05F_1___05Fh1618;
        IData/*31:0*/ mkCounter__DOT__product___05F_1___05Fh1619;
        IData/*31:0*/ mkCounter__DOT__product___05F_2___05Fh1572;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2020;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2043;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2066;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2089;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2112;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2135;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2158;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2181;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2204;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2227;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2250;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2273;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2296;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2319;
        IData/*31:0*/ mkCounter__DOT__product___05Fh2342;
        IData/*31:0*/ mkCounter__DOT__x___05Fh301;
        IData/*31:0*/ mkCounter__DOT__x___05Fh821;
        IData/*29:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d403;
        IData/*27:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d402;
        IData/*25:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d401;
        IData/*23:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d400;
        IData/*21:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d399;
        IData/*19:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d398;
        IData/*17:0*/ mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d397;
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
    static void _combo__TOP__6(Vtop__Syms* __restrict vlSymsp);
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
    static void _sequent__TOP__5(Vtop__Syms* __restrict vlSymsp);
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
