# model for increment alone

import cocotb
from cocotb_coverage.coverage import *

counter_coverage = coverage_section(
    CoverPoint('top.read_A_a_in', vname='read_A_a_in', bins = list(range(0,16))),
    CoverPoint('top.EN_read_A', vname='EN_read_A', bins = list(range(0,2))),
    CoverCross('top.cross_cover', items = ['top.read_A_a_in', 'top.EN_read_A']),
    CoverPoint('top.read_B_b_in', vname='read_B_b_in', bins = list(range(0,16))),
    CoverPoint('top.EN_read_B', vname='EN_read_B', bins = list(range(0,2))),
    CoverCross('top.cross_cover', items = ['top.read_B_b_in', 'top.EN_read_B']),
    CoverPoint('top.read_C_c_in', vname='read_C_c_in', bins = list(range(0,16))),
    CoverPoint('top.EN_read_C', vname='EN_read_C', bins = list(range(0,2))),
    CoverCross('top.cross_cover', items = ['top.read_C_c_in', 'top.EN_read_C']),
    CoverPoint('top.read_S_s_in', vname='read_S_s_in', bins = list(range(0,2))),
    CoverPoint('top.EN_read_S', vname='EN_read_S', bins = list(range(0,2))),    
    
)
@counter_coverage
def model_Mac(EN_read_A: int,read_A_a_in: int, EN_read_B: int,read_B_b_in: int, EN_read_C: int,read_C_c_in: int, EN_read_S: int,read_S_s_in: int,EN_mac_calc: int) -> int:
    
    if(read_S_s_in):
        return read_A_a_in + read_B_b_in + read_C_c_in
        #print("for mac_flt, s=1")
    else:
        return read_A_a_in*read_B_b_in + read_C_c_in
        #print("for mac_int, s=0")
