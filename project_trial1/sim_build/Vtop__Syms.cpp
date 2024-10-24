// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"



// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkCounter.configure(this, name(), "mkCounter", "mkCounter", -9, VerilatedScope::SCOPE_MODULE);
    
    // Setup scope hierarchy
    __Vhier.add(0, &__Vscope_mkCounter);
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"CLK", &(TOPp->CLK), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"EN_mac_calc", &(TOPp->EN_mac_calc), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"EN_read_A", &(TOPp->EN_read_A), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"EN_read_B", &(TOPp->EN_read_B), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"EN_read_C", &(TOPp->EN_read_C), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"EN_read_S", &(TOPp->EN_read_S), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"RDY_mac_calc", &(TOPp->RDY_mac_calc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"RDY_read_A", &(TOPp->RDY_read_A), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"RDY_read_B", &(TOPp->RDY_read_B), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"RDY_read_C", &(TOPp->RDY_read_C), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"RDY_read_S", &(TOPp->RDY_read_S), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"RST_N", &(TOPp->RST_N), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"mac_calc", &(TOPp->mac_calc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_A_a_in", &(TOPp->read_A_a_in), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_B_b_in", &(TOPp->read_B_b_in), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_C_c_in", &(TOPp->read_C_c_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_S_s_in", &(TOPp->read_S_s_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"CAN_FIRE_mac_calc", &(TOPp->mkCounter__DOT__CAN_FIRE_mac_calc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"CAN_FIRE_read_A", &(TOPp->mkCounter__DOT__CAN_FIRE_read_A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"CAN_FIRE_read_B", &(TOPp->mkCounter__DOT__CAN_FIRE_read_B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"CAN_FIRE_read_C", &(TOPp->mkCounter__DOT__CAN_FIRE_read_C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"CAN_FIRE_read_S", &(TOPp->mkCounter__DOT__CAN_FIRE_read_S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"CLK", &(TOPp->mkCounter__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"EN_mac_calc", &(TOPp->mkCounter__DOT__EN_mac_calc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"EN_read_A", &(TOPp->mkCounter__DOT__EN_read_A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"EN_read_B", &(TOPp->mkCounter__DOT__EN_read_B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"EN_read_C", &(TOPp->mkCounter__DOT__EN_read_C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"EN_read_S", &(TOPp->mkCounter__DOT__EN_read_S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF__ETC__q2", &(TOPp->mkCounter__DOT__IF_IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF___05FETC___05Fq2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d100", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d100), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d106", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d106), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d113", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d113), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d120", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d120), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d128", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d128), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d136", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d136), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d145", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d145), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d154", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d154), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d73", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d73), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d76", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d76), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d80", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d80), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d84", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d84), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d89", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d89), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b__ETC___d94", &(TOPp->mkCounter__DOT__IF_IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05FETC___05F_d94), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d167", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d167), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d389", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d389), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d390", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d390), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d391", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d391), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d392", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d392), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d393", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d393), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d394", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d394), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d395", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d395), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,13,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d396", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d396), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d397", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d397), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,17,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d398", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d398), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,19,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d399", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d399), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,21,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d400", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d400), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,23,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d401", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d401), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,25,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d402", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d402), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,27,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___d403", &(TOPp->mkCounter__DOT__IF_a_0_BIT_15_7_EQ_b_BIT_15_8_9_THEN_IF_IF_b_B_ETC___05F_d403), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,29,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a__q1", &(TOPp->mkCounter__DOT__IF_a_BIT_15_THEN_INV_a_PLUS_1_ELSE_a___05Fq1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___d13", &(TOPp->mkCounter__DOT__IF_b_BIT_0_THEN_1_CONCAT_a_0_BITS_6_TO_0_1_2_E_ETC___05F_d13), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___d52", &(TOPp->mkCounter__DOT__IF_b_BIT_15_8_THEN_INV_b_0_PLUS_1_1_ELSE_b___05F_d52), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___d16", &(TOPp->mkCounter__DOT__IF_b_BIT_1_THEN_IF_b_BIT_0_THEN_1_CONCAT_a_0_B_ETC___05F_d16), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___d20", &(TOPp->mkCounter__DOT__IF_b_BIT_2_THEN_IF_b_BIT_1_THEN_IF_b_BIT_0_THE_ETC___05F_d20), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___d24", &(TOPp->mkCounter__DOT__IF_b_BIT_3_THEN_IF_b_BIT_2_THEN_IF_b_BIT_1_THE_ETC___05F_d24), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___d29", &(TOPp->mkCounter__DOT__IF_b_BIT_4_THEN_IF_b_BIT_3_THEN_IF_b_BIT_2_THE_ETC___05F_d29), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___d34", &(TOPp->mkCounter__DOT__IF_b_BIT_5_THEN_IF_b_BIT_4_THEN_IF_b_BIT_3_THE_ETC___05F_d34), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"RDY_mac_calc", &(TOPp->mkCounter__DOT__RDY_mac_calc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"RDY_read_A", &(TOPp->mkCounter__DOT__RDY_read_A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"RDY_read_B", &(TOPp->mkCounter__DOT__RDY_read_B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"RDY_read_C", &(TOPp->mkCounter__DOT__RDY_read_C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"RDY_read_S", &(TOPp->mkCounter__DOT__RDY_read_S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"RST_N", &(TOPp->mkCounter__DOT__RST_N), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"WILL_FIRE_mac_calc", &(TOPp->mkCounter__DOT__WILL_FIRE_mac_calc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"WILL_FIRE_read_A", &(TOPp->mkCounter__DOT__WILL_FIRE_read_A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"WILL_FIRE_read_B", &(TOPp->mkCounter__DOT__WILL_FIRE_read_B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"WILL_FIRE_read_C", &(TOPp->mkCounter__DOT__WILL_FIRE_read_C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"WILL_FIRE_read_S", &(TOPp->mkCounter__DOT__WILL_FIRE_read_S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"a", &(TOPp->mkCounter__DOT__a), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"a_D_IN", &(TOPp->mkCounter__DOT__a_D_IN), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"a_EN", &(TOPp->mkCounter__DOT__a_EN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"b", &(TOPp->mkCounter__DOT__b), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"b_D_IN", &(TOPp->mkCounter__DOT__b_D_IN), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"b_EN", &(TOPp->mkCounter__DOT__b_EN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"c", &(TOPp->mkCounter__DOT__c), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"c_D_IN", &(TOPp->mkCounter__DOT__c_D_IN), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"c_EN", &(TOPp->mkCounter__DOT__c_EN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"mac_calc", &(TOPp->mkCounter__DOT__mac_calc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"out", &(TOPp->mkCounter__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"out_D_IN", &(TOPp->mkCounter__DOT__out_D_IN), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"out_EN", &(TOPp->mkCounter__DOT__out_EN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product___1__h1618", &(TOPp->mkCounter__DOT__product___05F_1___05Fh1618), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product___1__h1619", &(TOPp->mkCounter__DOT__product___05F_1___05Fh1619), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product___2__h1572", &(TOPp->mkCounter__DOT__product___05F_2___05Fh1572), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2020", &(TOPp->mkCounter__DOT__product___05Fh2020), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2043", &(TOPp->mkCounter__DOT__product___05Fh2043), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2066", &(TOPp->mkCounter__DOT__product___05Fh2066), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2089", &(TOPp->mkCounter__DOT__product___05Fh2089), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2112", &(TOPp->mkCounter__DOT__product___05Fh2112), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2135", &(TOPp->mkCounter__DOT__product___05Fh2135), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2158", &(TOPp->mkCounter__DOT__product___05Fh2158), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2181", &(TOPp->mkCounter__DOT__product___05Fh2181), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2204", &(TOPp->mkCounter__DOT__product___05Fh2204), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2227", &(TOPp->mkCounter__DOT__product___05Fh2227), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2250", &(TOPp->mkCounter__DOT__product___05Fh2250), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2273", &(TOPp->mkCounter__DOT__product___05Fh2273), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2296", &(TOPp->mkCounter__DOT__product___05Fh2296), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2319", &(TOPp->mkCounter__DOT__product___05Fh2319), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h2342", &(TOPp->mkCounter__DOT__product___05Fh2342), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h586", &(TOPp->mkCounter__DOT__product___05Fh586), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h609", &(TOPp->mkCounter__DOT__product___05Fh609), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h632", &(TOPp->mkCounter__DOT__product___05Fh632), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h655", &(TOPp->mkCounter__DOT__product___05Fh655), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h678", &(TOPp->mkCounter__DOT__product___05Fh678), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h701", &(TOPp->mkCounter__DOT__product___05Fh701), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"product__h724", &(TOPp->mkCounter__DOT__product___05Fh724), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"read_A_a_in", &(TOPp->mkCounter__DOT__read_A_a_in), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"read_B_b_in", &(TOPp->mkCounter__DOT__read_B_b_in), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"read_C_c_in", &(TOPp->mkCounter__DOT__read_C_c_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"read_S_s_in", &(TOPp->mkCounter__DOT__read_S_s_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"result_mant__h323", &(TOPp->mkCounter__DOT__result_mant___05Fh323), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"s", &(TOPp->mkCounter__DOT__s), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"s_D_IN", &(TOPp->mkCounter__DOT__s_D_IN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"s_EN", &(TOPp->mkCounter__DOT__s_EN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h2493", &(TOPp->mkCounter__DOT__x___05Fh2493), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h2687", &(TOPp->mkCounter__DOT__x___05Fh2687), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h2746", &(TOPp->mkCounter__DOT__x___05Fh2746), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h2881", &(TOPp->mkCounter__DOT__x___05Fh2881), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h2940", &(TOPp->mkCounter__DOT__x___05Fh2940), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h301", &(TOPp->mkCounter__DOT__x___05Fh301), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3075", &(TOPp->mkCounter__DOT__x___05Fh3075), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3134", &(TOPp->mkCounter__DOT__x___05Fh3134), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3269", &(TOPp->mkCounter__DOT__x___05Fh3269), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3328", &(TOPp->mkCounter__DOT__x___05Fh3328), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3463", &(TOPp->mkCounter__DOT__x___05Fh3463), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3522", &(TOPp->mkCounter__DOT__x___05Fh3522), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3657", &(TOPp->mkCounter__DOT__x___05Fh3657), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3716", &(TOPp->mkCounter__DOT__x___05Fh3716), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3851", &(TOPp->mkCounter__DOT__x___05Fh3851), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h3910", &(TOPp->mkCounter__DOT__x___05Fh3910), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4045", &(TOPp->mkCounter__DOT__x___05Fh4045), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4104", &(TOPp->mkCounter__DOT__x___05Fh4104), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4239", &(TOPp->mkCounter__DOT__x___05Fh4239), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4298", &(TOPp->mkCounter__DOT__x___05Fh4298), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4433", &(TOPp->mkCounter__DOT__x___05Fh4433), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4492", &(TOPp->mkCounter__DOT__x___05Fh4492), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4627", &(TOPp->mkCounter__DOT__x___05Fh4627), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4686", &(TOPp->mkCounter__DOT__x___05Fh4686), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4821", &(TOPp->mkCounter__DOT__x___05Fh4821), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h4880", &(TOPp->mkCounter__DOT__x___05Fh4880), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5015", &(TOPp->mkCounter__DOT__x___05Fh5015), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5074", &(TOPp->mkCounter__DOT__x___05Fh5074), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5209", &(TOPp->mkCounter__DOT__x___05Fh5209), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5268", &(TOPp->mkCounter__DOT__x___05Fh5268), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5403", &(TOPp->mkCounter__DOT__x___05Fh5403), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5462", &(TOPp->mkCounter__DOT__x___05Fh5462), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5597", &(TOPp->mkCounter__DOT__x___05Fh5597), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5656", &(TOPp->mkCounter__DOT__x___05Fh5656), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5791", &(TOPp->mkCounter__DOT__x___05Fh5791), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5850", &(TOPp->mkCounter__DOT__x___05Fh5850), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h5985", &(TOPp->mkCounter__DOT__x___05Fh5985), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6044", &(TOPp->mkCounter__DOT__x___05Fh6044), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6179", &(TOPp->mkCounter__DOT__x___05Fh6179), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6238", &(TOPp->mkCounter__DOT__x___05Fh6238), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6373", &(TOPp->mkCounter__DOT__x___05Fh6373), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6432", &(TOPp->mkCounter__DOT__x___05Fh6432), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6567", &(TOPp->mkCounter__DOT__x___05Fh6567), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6626", &(TOPp->mkCounter__DOT__x___05Fh6626), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6761", &(TOPp->mkCounter__DOT__x___05Fh6761), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6820", &(TOPp->mkCounter__DOT__x___05Fh6820), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h6955", &(TOPp->mkCounter__DOT__x___05Fh6955), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7014", &(TOPp->mkCounter__DOT__x___05Fh7014), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7149", &(TOPp->mkCounter__DOT__x___05Fh7149), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7208", &(TOPp->mkCounter__DOT__x___05Fh7208), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7343", &(TOPp->mkCounter__DOT__x___05Fh7343), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7402", &(TOPp->mkCounter__DOT__x___05Fh7402), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7537", &(TOPp->mkCounter__DOT__x___05Fh7537), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7596", &(TOPp->mkCounter__DOT__x___05Fh7596), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7731", &(TOPp->mkCounter__DOT__x___05Fh7731), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7790", &(TOPp->mkCounter__DOT__x___05Fh7790), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7925", &(TOPp->mkCounter__DOT__x___05Fh7925), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h7984", &(TOPp->mkCounter__DOT__x___05Fh7984), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h8119", &(TOPp->mkCounter__DOT__x___05Fh8119), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h8178", &(TOPp->mkCounter__DOT__x___05Fh8178), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h821", &(TOPp->mkCounter__DOT__x___05Fh821), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h8313", &(TOPp->mkCounter__DOT__x___05Fh8313), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"x__h8372", &(TOPp->mkCounter__DOT__x___05Fh8372), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h2494", &(TOPp->mkCounter__DOT__y___05Fh2494), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h2688", &(TOPp->mkCounter__DOT__y___05Fh2688), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h2747", &(TOPp->mkCounter__DOT__y___05Fh2747), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h2882", &(TOPp->mkCounter__DOT__y___05Fh2882), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h2941", &(TOPp->mkCounter__DOT__y___05Fh2941), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3076", &(TOPp->mkCounter__DOT__y___05Fh3076), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3135", &(TOPp->mkCounter__DOT__y___05Fh3135), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3270", &(TOPp->mkCounter__DOT__y___05Fh3270), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3329", &(TOPp->mkCounter__DOT__y___05Fh3329), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3464", &(TOPp->mkCounter__DOT__y___05Fh3464), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3523", &(TOPp->mkCounter__DOT__y___05Fh3523), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3658", &(TOPp->mkCounter__DOT__y___05Fh3658), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3717", &(TOPp->mkCounter__DOT__y___05Fh3717), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3852", &(TOPp->mkCounter__DOT__y___05Fh3852), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h3911", &(TOPp->mkCounter__DOT__y___05Fh3911), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4046", &(TOPp->mkCounter__DOT__y___05Fh4046), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4105", &(TOPp->mkCounter__DOT__y___05Fh4105), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4240", &(TOPp->mkCounter__DOT__y___05Fh4240), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4299", &(TOPp->mkCounter__DOT__y___05Fh4299), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4434", &(TOPp->mkCounter__DOT__y___05Fh4434), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4493", &(TOPp->mkCounter__DOT__y___05Fh4493), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4628", &(TOPp->mkCounter__DOT__y___05Fh4628), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4687", &(TOPp->mkCounter__DOT__y___05Fh4687), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4822", &(TOPp->mkCounter__DOT__y___05Fh4822), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h4881", &(TOPp->mkCounter__DOT__y___05Fh4881), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5016", &(TOPp->mkCounter__DOT__y___05Fh5016), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5075", &(TOPp->mkCounter__DOT__y___05Fh5075), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5210", &(TOPp->mkCounter__DOT__y___05Fh5210), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5269", &(TOPp->mkCounter__DOT__y___05Fh5269), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5404", &(TOPp->mkCounter__DOT__y___05Fh5404), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5463", &(TOPp->mkCounter__DOT__y___05Fh5463), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5598", &(TOPp->mkCounter__DOT__y___05Fh5598), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5657", &(TOPp->mkCounter__DOT__y___05Fh5657), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5792", &(TOPp->mkCounter__DOT__y___05Fh5792), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5851", &(TOPp->mkCounter__DOT__y___05Fh5851), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h5986", &(TOPp->mkCounter__DOT__y___05Fh5986), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6045", &(TOPp->mkCounter__DOT__y___05Fh6045), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6180", &(TOPp->mkCounter__DOT__y___05Fh6180), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6239", &(TOPp->mkCounter__DOT__y___05Fh6239), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6374", &(TOPp->mkCounter__DOT__y___05Fh6374), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6433", &(TOPp->mkCounter__DOT__y___05Fh6433), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6568", &(TOPp->mkCounter__DOT__y___05Fh6568), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6627", &(TOPp->mkCounter__DOT__y___05Fh6627), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6762", &(TOPp->mkCounter__DOT__y___05Fh6762), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6821", &(TOPp->mkCounter__DOT__y___05Fh6821), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h6956", &(TOPp->mkCounter__DOT__y___05Fh6956), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7015", &(TOPp->mkCounter__DOT__y___05Fh7015), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7150", &(TOPp->mkCounter__DOT__y___05Fh7150), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7209", &(TOPp->mkCounter__DOT__y___05Fh7209), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7344", &(TOPp->mkCounter__DOT__y___05Fh7344), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7403", &(TOPp->mkCounter__DOT__y___05Fh7403), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7538", &(TOPp->mkCounter__DOT__y___05Fh7538), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7597", &(TOPp->mkCounter__DOT__y___05Fh7597), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7732", &(TOPp->mkCounter__DOT__y___05Fh7732), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7791", &(TOPp->mkCounter__DOT__y___05Fh7791), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7926", &(TOPp->mkCounter__DOT__y___05Fh7926), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h7985", &(TOPp->mkCounter__DOT__y___05Fh7985), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h8120", &(TOPp->mkCounter__DOT__y___05Fh8120), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h8179", &(TOPp->mkCounter__DOT__y___05Fh8179), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h8314", &(TOPp->mkCounter__DOT__y___05Fh8314), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_mkCounter.varInsert(__Vfinal,"y__h8373", &(TOPp->mkCounter__DOT__y___05Fh8373), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
