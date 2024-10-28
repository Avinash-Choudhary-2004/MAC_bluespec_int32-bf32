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
    
    dut.EN_read_in.value = 0
    dut.EN_mac_calc.value = 0
    
    
    a_int=file_A_int.readlines()
    b_int=file_B_int.readlines()
    c_int=file_C_int.readlines()
    mac_int=file_MAC_int.readlines()
    
    a_bin=file_A_bin.readlines()
    b_bin=file_B_bin.readlines()
    c_bin=file_C_bin.readlines()
    mac_bin=file_MAC_bin.readlines()
    expected_out=model_Mac(0,0,0,0,0,0,0,0,0)
    expected_out=model_Mac(1,0,1,0,1,0,1,0,1)
    assert int(expected_out) == ((dut.mac_calc.value).signed_integer), f'Counter Output Mismatch, Expected = {int(expected_out)} DUT = {(dut.mac_calc.value).signed_integer}  '    
    dut._log.info(f'{type(a_int[0])}')
    dut._log.info(f'{type(a_int)}')
    dut._log.info(f'{int(b_int[0])}')
    dut._log.info(f'{len(a_int)}')
    '''
    str_in=8*str(a_bin[0])[0]+str(a_bin[0])[0:8]+8*str(b_bin[0])[0]+str(b_bin[0])[0:8]+str(c_bin[0])[0:32]+'0'
    dut.read_in_mul_in.value = int(str_in,2)
    
    if(len(a_int)==len(b_int)==len(c_int)==len(mac_int)):
        for i in range(len(a_int)-1):
            dut.EN_read_in.value = 1
            dut.read_in_mul_in.value = int(8*str(a_bin[i])[0]+str(a_bin[i])[0:8]+8*str(b_bin[i])[0]+str(b_bin[i][0:8]+str(c_bin[i])[0:32]+'0',2)
            dut.EN_mac_calc.value = 1
            await.RisingEdge(dut.CLK)
            dut._log.info(f'{(str_in)}')
            dut._log.info(f'in value {(dut.read_in_mul_in.value)}')
            dut._log.info(f'b value {(dut.mac_calc.value)}')
            assert int(mac_bin[i]) == int(str(dut.mac_calc.value)), f'Counter Output Mismatch, Expected = {int(mac_bin[i])} DUT = {int(dut.mac_calc.value)}  '
    
    '''
    
    a_flt=file_A_flt.readlines()
    b_flt=file_B_flt.readlines()
    c_flt=file_C_flt.readlines()
    mac_flt=file_MAC_flt.readlines()
    
    a_bin_flt=file_A_bin_flt.readlines()
    b_bin_flt=file_B_bin_flt.readlines()
    c_bin_flt=file_C_bin_flt.readlines()
    mac_bin_flt=file_MAC_bin_flt.readlines()
    '''
    if(len(a_flt)==len(b_flt)==len(c_flt)==len(mac_flt)):
        for i in range(len(a_flt)-1):
            dut.EN_read_in.value = 1
            str_in=str(a_bin_flt[i])[0:16]+str(b_bin_flt[i][0:16]+str(c_bin_flt[i])[0:32]+'0'
            dut.read_in_mul_in.value = int(str_in,2)
            dut.EN_mac_calc.value = 1
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            dut._log.info(f'{(str_in)}')
            dut._log.info(f'in value {(dut.read_in_mul_in.value)}')
            dut._log.info(f'out value {(dut.mac_calc.value)}')
            
            '''
    if(len(a_int)==len(b_int)==len(mac_int)):
        for i in range(len(a_int)-1):
            dut.EN_read_in.value = 1
            str_in=8*str(a_bin[i])[0]+str(a_bin[i])[0:8]+8*str(b_bin[i])[0]+str(b_bin[i])[0:8]+str(c_bin[i])[0:32]+'0'
            dut.read_in_mul_in.value = int(str_in,2)
            dut.EN_mac_calc.value = 1
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            dut._log.info(f'{(str_in)}')
            dut._log.info(f'in value {(dut.read_in_mul_in.value)}')
            dut._log.info(f'b value {(dut.mac_calc.value)}')
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            expected_out=model_Mac(1,int(a_int[i]),1,int(b_int[i]),1,int(c_int[i]),1,0,1)
            assert int(mac_bin[i]) == int(str(dut.mac_calc.value)), f'Counter Output Mismatch, Expected = {int(mac_bin[i])} DUT = {int(dut.mac_calc.value)}  '
            assert int(mac_bin[i]) == int(str(dut.mac_calc.value)), f'Counter Output Mismatch, Expected = {int(mac_bin[i])} DUT = {int(dut.mac_calc.value)}'
    
    if(len(a_flt)==len(b_flt)==len(mac_flt)):
        for i in range(len(a_flt)-1):
            dut.EN_read_in.value = 1
            str_in=str(a_bin_flt[i])[0:16]+str(b_bin_flt[i])[0:16]+str(c_bin_flt[i])[0:32]+'1'
            dut.read_in_mul_in.value = int(str_in,2)
            dut.EN_mac_calc.value = 1
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            await RisingEdge(dut.CLK)
            dut._log.info(f'{i}')
            dut._log.info(f'in value {(dut.read_in_mul_in.value)[0:15]}')
            dut._log.info(f'in value {(dut.read_in_mul_in.value)[16:31]}')
            dut._log.info(f'in value {(dut.read_in_mul_in.value)[32:63]}')
            dut._log.info(f'out value {(dut.mac_calc.value)}')
            expected_out=model_Mac(1,int(a_int[i]),1,int(b_int[i]),1,int(c_int[i]),1,0,1)
            assert int(str(mac_bin_flt[i])[0:30],2) == int(str(dut.mac_calc.value)[0:30],2), f'Counter Output Mismatch, Expected = {(str(mac_bin_flt[i])[0:30],2)} DUT = {(str(dut.mac_calc.value)[0:30],2)}  '

    
    coverage_db.export_to_yaml(filename="coverage_Mac.yml")

