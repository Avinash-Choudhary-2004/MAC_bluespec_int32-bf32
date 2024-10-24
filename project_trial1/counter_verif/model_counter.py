# model for increment alone

import cocotb
from cocotb_coverage.coverage import *

counter_coverage = coverage_section(
    CoverPoint('top.read_A_a_in', vname='read_A_a_in', bins = list(range(0,16))),
    CoverPoint('top.EN_read_A', vname='EN_read_A', bins = list(range(0,2))),
    CoverCross('top.cross_cover', items = ['top.read_A_a_in', 'top.EN_read_A'])
)
@counter_coverage
def model_counter(EN_read_A: int,read_A_a_in: int, EN_read_B: int,read_B_b_in: int, EN_read_C: int,read_C_c_in: int, EN_read_S: int,read_S_s_in: int,EN_mac_calc: int) -> int:
    return read_A_a_in + read_B_b_in + read_C_c_in
    '''
    if(read_S_s_in):
        return read_A_a_in + read_B_b_in + read_C_c_in
        print("for mac_flt, s=1")
    else:
        return read_A_a_in*read_B_b_in + read_C_c_in
        print("for mac_int, s=0")'''
