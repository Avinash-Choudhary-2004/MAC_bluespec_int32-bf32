# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0

import os
import random
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from model_Mac import *
from cocotb.binary import BinaryValue

@cocotb.test()
async def test_Mac(dut):
    """Test to check counter"""
    file_A_int=open("test_cases/int8 MAC/A_decimal.txt","r");
    file_B_int=open("test_cases/int8 MAC/B_decimal.txt","r");
    file_C_int=open("test_cases/int8 MAC/C_decimal.txt","r");
    file_MAC_int=open("test_cases/int8 MAC/MAC_decimal.txt","r");
    
    file_A_bin=open("test_cases/int8 MAC/A_binary.txt","r");
    file_B_bin=open("test_cases/int8 MAC/B_binary.txt","r");
    file_C_bin=open("test_cases/int8 MAC/C_binary.txt","r");
    file_MAC_bin=open("test_cases/int8 MAC/MAC_binary.txt","r");
    
    file_A_flt=open("test_cases/bf16 MAC/A_decimal.txt","r");
    file_B_flt=open("test_cases/bf16 MAC/B_decimal.txt","r");
    file_C_flt=open("test_cases/bf16 MAC/C_decimal.txt","r");
    file_MAC_flt=open("test_cases/bf16 MAC/MAC_decimal.txt","r");
    
    file_A_bin_flt=open("test_cases/bf16 MAC/A_binary.txt","r");
    file_B_bin_flt=open("test_cases/bf16 MAC/B_binary.txt","r");
    file_C_bin_flt=open("test_cases/bf16 MAC/C_binary.txt","r");
    file_MAC_bin_flt=open("test_cases/bf16 MAC/MAC_binary.txt","r");
    

    clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))
    
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    await RisingEdge(dut.CLK)
    await RisingEdge(dut.CLK)
    
    dut.EN_read_A.value = 0
    dut.EN_read_B.value = 0
    dut.EN_read_C.value = 0
    dut.EN_read_S.value = 0
    dut.EN_mac_calc.value = 0
    
    
    a_int=file_A_int.readlines()
    b_int=file_B_int.readlines()
    c_int=file_C_int.readlines()
    mac_int=file_MAC_int.readlines()
    
    a_bin=file_A_bin.readlines()
    b_bin=file_B_bin.readlines()
    c_bin=file_C_bin.readlines()
    mac_bin=file_MAC_bin.readlines()
    
    dut._log.info(f'{type(a_int)}')
    dut._log.info(f'{type(a_int)}')
    dut._log.info(f'{int(b_int[0])}')
    dut._log.info(f'{len(a_int)}')
    if(len(a_int)==len(b_int)==len(c_int)==len(mac_int)):
        for i in range(len(a_int)-1):
            dut.EN_read_A.value = 1
            dut.read_A_a_in.value = int(a_int[i])
            dut.EN_read_B.value = 1
            dut.read_B_b_in.value = int(b_int[i])
            dut.EN_read_C.value = 1
            dut.read_C_c_in.value = int(c_int[i])
            dut.EN_read_S.value = 1
            dut.read_S_s_in.value = 0
            dut.EN_mac_calc.value = 1
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            dut._log.info(f'{i}')
            dut._log.info(f'a value {(dut.read_A_a_in.value)}')
            dut._log.info(f'b value {(dut.read_B_b_in.value)}')
            dut._log.info(f'c value {(dut.read_C_c_in.value)}')
            dut._log.info(f'output {(dut.mac_calc.value)}')
            assert int(mac_bin[i]) == int(str(dut.mac_calc.value)), f'Counter Output Mismatch, Expected = {int(mac_bin[i])} DUT = {int(dut.mac_calc.value)}  '
    
    
    
    a_flt=file_A_flt.readlines()
    b_flt=file_B_flt.readlines()
    c_flt=file_C_flt.readlines()
    mac_flt=file_MAC_flt.readlines()
    
    a_bin_flt=file_A_bin_flt.readlines()
    b_bin_flt=file_B_bin_flt.readlines()
    c_bin_flt=file_C_bin_flt.readlines()
    mac_bin_flt=file_MAC_bin_flt.readlines()
    
    if(len(a_flt)==len(b_flt)==len(c_flt)==len(mac_flt)):
        for i in range(len(a_flt)-1):
            dut.EN_read_A.value = 1
            x=int(a_bin_flt[i],2);
            #bin_x=binaryValue(x)
            dut.read_A_a_in.value = x
            dut.EN_read_B.value = 1
            dut.read_B_b_in.value = int(b_bin_flt[i],2)
            dut.EN_read_C.value = 1
            dut.read_C_c_in.value = int(c_bin_flt[i],2)
            dut.EN_read_S.value = 1
            dut.read_S_s_in.value = 1
            dut.EN_mac_calc.value = 1
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            dut._log.info(f'{i}')
            dut._log.info(f'a value {(dut.read_A_a_in.value)}')
            dut._log.info(f'b value {(dut.read_B_b_in.value)}')
            dut._log.info(f'c value {(dut.read_C_c_in.value)}')
            dut._log.info(f'output {(dut.mac_calc.value)}')
    

    
    coverage_db.export_to_yaml(filename="coverage_Mac.yml")

