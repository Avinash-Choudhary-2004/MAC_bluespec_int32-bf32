//
// Generated by Bluespec Compiler, version 2021.12.1 (build fd501401)
//
// On Thu Oct 24 17:21:41 IST 2024
//
//
// Ports:
// Name                         I/O  size props
// RDY_read_A                     O     1 const
// RDY_read_B                     O     1 const
// RDY_read_C                     O     1 const
// RDY_read_S                     O     1 const
// mac_calc                       O    32 reg
// RDY_mac_calc                   O     1 const
// CLK                            I     1 clock
// RST_N                          I     1 reset
// read_A_a_in                    I    16 reg
// read_B_b_in                    I    16 reg
// read_C_c_in                    I    32 reg
// read_S_s_in                    I     1 reg
// EN_read_A                      I     1
// EN_read_B                      I     1
// EN_read_C                      I     1
// EN_read_S                      I     1
// EN_mac_calc                    I     1
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkCounter(CLK,
		 RST_N,

		 read_A_a_in,
		 EN_read_A,
		 RDY_read_A,

		 read_B_b_in,
		 EN_read_B,
		 RDY_read_B,

		 read_C_c_in,
		 EN_read_C,
		 RDY_read_C,

		 read_S_s_in,
		 EN_read_S,
		 RDY_read_S,

		 EN_mac_calc,
		 mac_calc,
		 RDY_mac_calc);
  input  CLK;
  input  RST_N;

  // action method read_A
  input  [15 : 0] read_A_a_in;
  input  EN_read_A;
  output RDY_read_A;

  // action method read_B
  input  [15 : 0] read_B_b_in;
  input  EN_read_B;
  output RDY_read_B;

  // action method read_C
  input  [31 : 0] read_C_c_in;
  input  EN_read_C;
  output RDY_read_C;

  // action method read_S
  input  read_S_s_in;
  input  EN_read_S;
  output RDY_read_S;

  // actionvalue method mac_calc
  input  EN_mac_calc;
  output [31 : 0] mac_calc;
  output RDY_mac_calc;

  // signals for module outputs
  wire [31 : 0] mac_calc;
  wire RDY_mac_calc, RDY_read_A, RDY_read_B, RDY_read_C, RDY_read_S;

  // register a
  reg [15 : 0] a;
  wire [15 : 0] a_D_IN;
  wire a_EN;

  // register b
  reg [15 : 0] b;
  wire [15 : 0] b_D_IN;
  wire b_EN;

  // register c
  reg [31 : 0] c;
  wire [31 : 0] c_D_IN;
  wire c_EN;

  // register out
  reg [31 : 0] out;
  wire [31 : 0] out_D_IN;
  wire out_EN;

  // register s
  reg s;
  wire s_D_IN, s_EN;

  // rule scheduling signals
  wire CAN_FIRE_mac_calc,
       CAN_FIRE_read_A,
       CAN_FIRE_read_B,
       CAN_FIRE_read_C,
       CAN_FIRE_read_S,
       WILL_FIRE_mac_calc,
       WILL_FIRE_read_A,
       WILL_FIRE_read_B,
       WILL_FIRE_read_C,
       WILL_FIRE_read_S;

  // remaining internal signals
  wire [31 : 0] IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF__ETC__q2,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d100,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d106,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d113,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d120,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d128,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d136,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d145,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d154,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d73,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d76,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d80,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d84,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d89,
		IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d94,
		IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167,
		product___1__h1618,
		product___1__h1619,
		product___2__h1572,
		product__h2020,
		product__h2043,
		product__h2066,
		product__h2089,
		product__h2112,
		product__h2135,
		product__h2158,
		product__h2181,
		product__h2204,
		product__h2227,
		product__h2250,
		product__h2273,
		product__h2296,
		product__h2319,
		product__h2342,
		x__h301,
		x__h821;
  wire [29 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d403;
  wire [27 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d402;
  wire [25 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d401;
  wire [23 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d400;
  wire [21 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d399;
  wire [19 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d398;
  wire [17 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d397;
  wire [15 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d396,
		IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1,
		IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___d13,
		IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52,
		IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___d16,
		IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___d20,
		IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___d24,
		IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___d29,
		IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___d34,
		product__h586,
		product__h609,
		product__h632,
		product__h655,
		product__h678,
		product__h701,
		product__h724,
		result_mant__h323;
  wire [13 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d395;
  wire [11 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d394;
  wire [9 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d393;
  wire [7 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d392;
  wire [5 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d391;
  wire [3 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d390;
  wire [1 : 0] IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d389;
  wire x__h2493,
       x__h2687,
       x__h2746,
       x__h2881,
       x__h2940,
       x__h3075,
       x__h3134,
       x__h3269,
       x__h3328,
       x__h3463,
       x__h3522,
       x__h3657,
       x__h3716,
       x__h3851,
       x__h3910,
       x__h4045,
       x__h4104,
       x__h4239,
       x__h4298,
       x__h4433,
       x__h4492,
       x__h4627,
       x__h4686,
       x__h4821,
       x__h4880,
       x__h5015,
       x__h5074,
       x__h5209,
       x__h5268,
       x__h5403,
       x__h5462,
       x__h5597,
       x__h5656,
       x__h5791,
       x__h5850,
       x__h5985,
       x__h6044,
       x__h6179,
       x__h6238,
       x__h6373,
       x__h6432,
       x__h6567,
       x__h6626,
       x__h6761,
       x__h6820,
       x__h6955,
       x__h7014,
       x__h7149,
       x__h7208,
       x__h7343,
       x__h7402,
       x__h7537,
       x__h7596,
       x__h7731,
       x__h7790,
       x__h7925,
       x__h7984,
       x__h8119,
       x__h8178,
       x__h8313,
       x__h8372,
       y__h2494,
       y__h2688,
       y__h2747,
       y__h2882,
       y__h2941,
       y__h3076,
       y__h3135,
       y__h3270,
       y__h3329,
       y__h3464,
       y__h3523,
       y__h3658,
       y__h3717,
       y__h3852,
       y__h3911,
       y__h4046,
       y__h4105,
       y__h4240,
       y__h4299,
       y__h4434,
       y__h4493,
       y__h4628,
       y__h4687,
       y__h4822,
       y__h4881,
       y__h5016,
       y__h5075,
       y__h5210,
       y__h5269,
       y__h5404,
       y__h5463,
       y__h5598,
       y__h5657,
       y__h5792,
       y__h5851,
       y__h5986,
       y__h6045,
       y__h6180,
       y__h6239,
       y__h6374,
       y__h6433,
       y__h6568,
       y__h6627,
       y__h6762,
       y__h6821,
       y__h6956,
       y__h7015,
       y__h7150,
       y__h7209,
       y__h7344,
       y__h7403,
       y__h7538,
       y__h7597,
       y__h7732,
       y__h7791,
       y__h7926,
       y__h7985,
       y__h8120,
       y__h8179,
       y__h8314,
       y__h8373;

  // action method read_A
  assign RDY_read_A = 1'd1 ;
  assign CAN_FIRE_read_A = 1'd1 ;
  assign WILL_FIRE_read_A = EN_read_A ;

  // action method read_B
  assign RDY_read_B = 1'd1 ;
  assign CAN_FIRE_read_B = 1'd1 ;
  assign WILL_FIRE_read_B = EN_read_B ;

  // action method read_C
  assign RDY_read_C = 1'd1 ;
  assign CAN_FIRE_read_C = 1'd1 ;
  assign WILL_FIRE_read_C = EN_read_C ;

  // action method read_S
  assign RDY_read_S = 1'd1 ;
  assign CAN_FIRE_read_S = 1'd1 ;
  assign WILL_FIRE_read_S = EN_read_S ;

  // actionvalue method mac_calc
  assign mac_calc = out ;
  assign RDY_mac_calc = 1'd1 ;
  assign CAN_FIRE_mac_calc = 1'd1 ;
  assign WILL_FIRE_mac_calc = EN_mac_calc ;

  // register a
  assign a_D_IN = read_A_a_in ;
  assign a_EN = EN_read_A ;

  // register b
  assign b_D_IN = read_B_b_in ;
  assign b_EN = EN_read_B ;

  // register c
  assign c_D_IN = read_C_c_in ;
  assign c_EN = EN_read_C ;

  // register out
  assign out_D_IN = s ? x__h301 : x__h821 ;
  assign out_EN = EN_mac_calc ;

  // register s
  assign s_D_IN = read_S_s_in ;
  assign s_EN = EN_read_S ;

  // remaining internal signals
  assign IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF__ETC__q2 =
	     (IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[0] ^
	      c[0]) ?
	       32'd1 :
	       32'd0 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d100 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[6] ?
	       product__h2204 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d94 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d106 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[7] ?
	       product__h2181 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d100 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d113 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[8] ?
	       product__h2158 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d106 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d120 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[9] ?
	       product__h2135 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d113 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d128 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[10] ?
	       product__h2112 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d120 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d136 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[11] ?
	       product__h2089 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d128 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d145 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[12] ?
	       product__h2066 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d136 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d154 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[13] ?
	       product__h2043 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d145 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d73 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[0] ?
	       product__h2342 :
	       32'd0 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d76 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[1] ?
	       product__h2319 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d73 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d80 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[2] ?
	       product__h2296 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d76 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d84 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[3] ?
	       product__h2273 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d80 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d89 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[4] ?
	       product__h2250 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d84 ;
  assign IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d94 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[5] ?
	       product__h2227 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d89 ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167 =
	     (a[15] == b[15]) ? product___2__h1572 : product___1__h1619 ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d389 =
	     { x__h2493 ^ y__h2494,
	       IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF__ETC__q2[0] } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d390 =
	     { x__h2881 ^ y__h2882,
	       x__h2687 ^ y__h2688,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d389 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d391 =
	     { x__h3269 ^ y__h3270,
	       x__h3075 ^ y__h3076,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d390 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d392 =
	     { x__h3657 ^ y__h3658,
	       x__h3463 ^ y__h3464,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d391 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d393 =
	     { x__h4045 ^ y__h4046,
	       x__h3851 ^ y__h3852,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d392 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d394 =
	     { x__h4433 ^ y__h4434,
	       x__h4239 ^ y__h4240,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d393 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d395 =
	     { x__h4821 ^ y__h4822,
	       x__h4627 ^ y__h4628,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d394 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d396 =
	     { x__h5209 ^ y__h5210,
	       x__h5015 ^ y__h5016,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d395 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d397 =
	     { x__h5597 ^ y__h5598,
	       x__h5403 ^ y__h5404,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d396 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d398 =
	     { x__h5985 ^ y__h5986,
	       x__h5791 ^ y__h5792,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d397 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d399 =
	     { x__h6373 ^ y__h6374,
	       x__h6179 ^ y__h6180,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d398 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d400 =
	     { x__h6761 ^ y__h6762,
	       x__h6567 ^ y__h6568,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d399 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d401 =
	     { x__h7149 ^ y__h7150,
	       x__h6955 ^ y__h6956,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d400 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d402 =
	     { x__h7537 ^ y__h7538,
	       x__h7343 ^ y__h7344,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d401 } ;
  assign IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d403 =
	     { x__h7925 ^ y__h7926,
	       x__h7731 ^ y__h7732,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d402 } ;
  assign IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1 = a[15] ? ~a + 16'd1 : a ;
  assign IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___d13 =
	     b[0] ? product__h724 : 16'd0 ;
  assign IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52 =
	     b[15] ? ~b + 16'd1 : b ;
  assign IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___d16 =
	     b[1] ?
	       product__h701 :
	       IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___d13 ;
  assign IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___d20 =
	     b[2] ?
	       product__h678 :
	       IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___d16 ;
  assign IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___d24 =
	     b[3] ?
	       product__h655 :
	       IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___d20 ;
  assign IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___d29 =
	     b[4] ?
	       product__h632 :
	       IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___d24 ;
  assign IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___d34 =
	     b[5] ?
	       product__h609 :
	       IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___d29 ;
  assign product___1__h1618 = ~product___2__h1572 ;
  assign product___1__h1619 = product___1__h1618 + 32'd1 ;
  assign product___2__h1572 =
	     IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52[14] ?
	       product__h2020 :
	       IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d154 ;
  assign product__h2020 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d154 +
	     { 3'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 14'd0 } ;
  assign product__h2043 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d145 +
	     { 4'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 13'd0 } ;
  assign product__h2066 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d136 +
	     { 5'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 12'd0 } ;
  assign product__h2089 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d128 +
	     { 6'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 11'd0 } ;
  assign product__h2112 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d120 +
	     { 7'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 10'd0 } ;
  assign product__h2135 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d113 +
	     { 8'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 9'd0 } ;
  assign product__h2158 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d106 +
	     { 9'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 8'd0 } ;
  assign product__h2181 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d100 +
	     { 10'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 7'd0 } ;
  assign product__h2204 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d94 +
	     { 11'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 6'd0 } ;
  assign product__h2227 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d89 +
	     { 12'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 5'd0 } ;
  assign product__h2250 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d84 +
	     { 13'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 4'd0 } ;
  assign product__h2273 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d80 +
	     { 14'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 3'd0 } ;
  assign product__h2296 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d76 +
	     { 15'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 2'd0 } ;
  assign product__h2319 =
	     IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d73 +
	     { 16'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0], 1'd0 } ;
  assign product__h2342 =
	     { 17'd0, IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1[14:0] } ;
  assign product__h586 =
	     IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___d34 +
	     { 3'd1, a[6:0], 6'd0 } ;
  assign product__h609 =
	     IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___d29 +
	     { 4'd1, a[6:0], 5'd0 } ;
  assign product__h632 =
	     IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___d24 +
	     { 5'd1, a[6:0], 4'd0 } ;
  assign product__h655 =
	     IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___d20 +
	     { 6'd1, a[6:0], 3'd0 } ;
  assign product__h678 =
	     IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___d16 +
	     { 7'd1, a[6:0], 2'd0 } ;
  assign product__h701 =
	     IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___d13 +
	     { 8'd1, a[6:0], 1'd0 } ;
  assign product__h724 = { 9'd1, a[6:0] } ;
  assign result_mant__h323 =
	     (b[6] ?
		product__h586 :
		IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___d34) +
	     { 2'd1, a[6:0], 7'd0 } ;
  assign x__h2493 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[1] ^
	     c[1] ;
  assign x__h2687 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[2] ^
	     c[2] ;
  assign x__h2746 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[1] &
	     c[1] ;
  assign x__h2881 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[3] ^
	     c[3] ;
  assign x__h2940 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[2] &
	     c[2] ;
  assign x__h301 = { 16'd0, result_mant__h323 } ;
  assign x__h3075 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[4] ^
	     c[4] ;
  assign x__h3134 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[3] &
	     c[3] ;
  assign x__h3269 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[5] ^
	     c[5] ;
  assign x__h3328 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[4] &
	     c[4] ;
  assign x__h3463 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[6] ^
	     c[6] ;
  assign x__h3522 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[5] &
	     c[5] ;
  assign x__h3657 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[7] ^
	     c[7] ;
  assign x__h3716 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[6] &
	     c[6] ;
  assign x__h3851 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[8] ^
	     c[8] ;
  assign x__h3910 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[7] &
	     c[7] ;
  assign x__h4045 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[9] ^
	     c[9] ;
  assign x__h4104 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[8] &
	     c[8] ;
  assign x__h4239 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[10] ^
	     c[10] ;
  assign x__h4298 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[9] &
	     c[9] ;
  assign x__h4433 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[11] ^
	     c[11] ;
  assign x__h4492 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[10] &
	     c[10] ;
  assign x__h4627 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[12] ^
	     c[12] ;
  assign x__h4686 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[11] &
	     c[11] ;
  assign x__h4821 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[13] ^
	     c[13] ;
  assign x__h4880 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[12] &
	     c[12] ;
  assign x__h5015 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[14] ^
	     c[14] ;
  assign x__h5074 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[13] &
	     c[13] ;
  assign x__h5209 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[15] ^
	     c[15] ;
  assign x__h5268 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[14] &
	     c[14] ;
  assign x__h5403 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[16] ^
	     c[16] ;
  assign x__h5462 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[15] &
	     c[15] ;
  assign x__h5597 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[17] ^
	     c[17] ;
  assign x__h5656 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[16] &
	     c[16] ;
  assign x__h5791 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[18] ^
	     c[18] ;
  assign x__h5850 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[17] &
	     c[17] ;
  assign x__h5985 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[19] ^
	     c[19] ;
  assign x__h6044 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[18] &
	     c[18] ;
  assign x__h6179 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[20] ^
	     c[20] ;
  assign x__h6238 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[19] &
	     c[19] ;
  assign x__h6373 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[21] ^
	     c[21] ;
  assign x__h6432 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[20] &
	     c[20] ;
  assign x__h6567 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[22] ^
	     c[22] ;
  assign x__h6626 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[21] &
	     c[21] ;
  assign x__h6761 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[23] ^
	     c[23] ;
  assign x__h6820 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[22] &
	     c[22] ;
  assign x__h6955 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[24] ^
	     c[24] ;
  assign x__h7014 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[23] &
	     c[23] ;
  assign x__h7149 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[25] ^
	     c[25] ;
  assign x__h7208 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[24] &
	     c[24] ;
  assign x__h7343 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[26] ^
	     c[26] ;
  assign x__h7402 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[25] &
	     c[25] ;
  assign x__h7537 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[27] ^
	     c[27] ;
  assign x__h7596 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[26] &
	     c[26] ;
  assign x__h7731 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[28] ^
	     c[28] ;
  assign x__h7790 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[27] &
	     c[27] ;
  assign x__h7925 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[29] ^
	     c[29] ;
  assign x__h7984 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[28] &
	     c[28] ;
  assign x__h8119 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[30] ^
	     c[30] ;
  assign x__h8178 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[29] &
	     c[29] ;
  assign x__h821 =
	     { x__h8313 ^ y__h8314,
	       x__h8119 ^ y__h8120,
	       IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d403 } ;
  assign x__h8313 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[31] ^
	     c[31] ;
  assign x__h8372 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[30] &
	     c[30] ;
  assign y__h2494 =
	     IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167[0] &
	     c[0] ;
  assign y__h2688 = x__h2746 | y__h2747 ;
  assign y__h2747 = y__h2494 & x__h2493 ;
  assign y__h2882 = x__h2940 | y__h2941 ;
  assign y__h2941 = y__h2688 & x__h2687 ;
  assign y__h3076 = x__h3134 | y__h3135 ;
  assign y__h3135 = y__h2882 & x__h2881 ;
  assign y__h3270 = x__h3328 | y__h3329 ;
  assign y__h3329 = y__h3076 & x__h3075 ;
  assign y__h3464 = x__h3522 | y__h3523 ;
  assign y__h3523 = y__h3270 & x__h3269 ;
  assign y__h3658 = x__h3716 | y__h3717 ;
  assign y__h3717 = y__h3464 & x__h3463 ;
  assign y__h3852 = x__h3910 | y__h3911 ;
  assign y__h3911 = y__h3658 & x__h3657 ;
  assign y__h4046 = x__h4104 | y__h4105 ;
  assign y__h4105 = y__h3852 & x__h3851 ;
  assign y__h4240 = x__h4298 | y__h4299 ;
  assign y__h4299 = y__h4046 & x__h4045 ;
  assign y__h4434 = x__h4492 | y__h4493 ;
  assign y__h4493 = y__h4240 & x__h4239 ;
  assign y__h4628 = x__h4686 | y__h4687 ;
  assign y__h4687 = y__h4434 & x__h4433 ;
  assign y__h4822 = x__h4880 | y__h4881 ;
  assign y__h4881 = y__h4628 & x__h4627 ;
  assign y__h5016 = x__h5074 | y__h5075 ;
  assign y__h5075 = y__h4822 & x__h4821 ;
  assign y__h5210 = x__h5268 | y__h5269 ;
  assign y__h5269 = y__h5016 & x__h5015 ;
  assign y__h5404 = x__h5462 | y__h5463 ;
  assign y__h5463 = y__h5210 & x__h5209 ;
  assign y__h5598 = x__h5656 | y__h5657 ;
  assign y__h5657 = y__h5404 & x__h5403 ;
  assign y__h5792 = x__h5850 | y__h5851 ;
  assign y__h5851 = y__h5598 & x__h5597 ;
  assign y__h5986 = x__h6044 | y__h6045 ;
  assign y__h6045 = y__h5792 & x__h5791 ;
  assign y__h6180 = x__h6238 | y__h6239 ;
  assign y__h6239 = y__h5986 & x__h5985 ;
  assign y__h6374 = x__h6432 | y__h6433 ;
  assign y__h6433 = y__h6180 & x__h6179 ;
  assign y__h6568 = x__h6626 | y__h6627 ;
  assign y__h6627 = y__h6374 & x__h6373 ;
  assign y__h6762 = x__h6820 | y__h6821 ;
  assign y__h6821 = y__h6568 & x__h6567 ;
  assign y__h6956 = x__h7014 | y__h7015 ;
  assign y__h7015 = y__h6762 & x__h6761 ;
  assign y__h7150 = x__h7208 | y__h7209 ;
  assign y__h7209 = y__h6956 & x__h6955 ;
  assign y__h7344 = x__h7402 | y__h7403 ;
  assign y__h7403 = y__h7150 & x__h7149 ;
  assign y__h7538 = x__h7596 | y__h7597 ;
  assign y__h7597 = y__h7344 & x__h7343 ;
  assign y__h7732 = x__h7790 | y__h7791 ;
  assign y__h7791 = y__h7538 & x__h7537 ;
  assign y__h7926 = x__h7984 | y__h7985 ;
  assign y__h7985 = y__h7732 & x__h7731 ;
  assign y__h8120 = x__h8178 | y__h8179 ;
  assign y__h8179 = y__h7926 & x__h7925 ;
  assign y__h8314 = x__h8372 | y__h8373 ;
  assign y__h8373 = y__h8120 & x__h8119 ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        a <= `BSV_ASSIGNMENT_DELAY 16'd0;
	b <= `BSV_ASSIGNMENT_DELAY 16'd0;
	c <= `BSV_ASSIGNMENT_DELAY 32'd0;
	out <= `BSV_ASSIGNMENT_DELAY 32'd0;
	s <= `BSV_ASSIGNMENT_DELAY 1'd0;
      end
    else
      begin
        if (a_EN) a <= `BSV_ASSIGNMENT_DELAY a_D_IN;
	if (b_EN) b <= `BSV_ASSIGNMENT_DELAY b_D_IN;
	if (c_EN) c <= `BSV_ASSIGNMENT_DELAY c_D_IN;
	if (out_EN) out <= `BSV_ASSIGNMENT_DELAY out_D_IN;
	if (s_EN) s <= `BSV_ASSIGNMENT_DELAY s_D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    a = 16'hAAAA;
    b = 16'hAAAA;
    c = 32'hAAAAAAAA;
    out = 32'hAAAAAAAA;
    s = 1'h0;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    //#0;
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_mac_calc && s) $display("----this is mac_flt-----");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_mac_calc && !s) $display("----this is mac_int-----");
  end
  // synopsys translate_on
endmodule  // mkCounter

