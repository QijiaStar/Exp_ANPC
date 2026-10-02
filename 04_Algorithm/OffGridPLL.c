#include<Includes.h>

OFF_GRID_PLL_REGS Off_Grid_Pll_Regs;

float32 Off_Grid_Pll_Run_Func(OFF_GRID_PLL_REGS* p);

#pragma CODE_SECTION(Off_Grid_Pll_Run_Func,"ramfuncs");
float32 Off_Grid_Pll_Run_Func(OFF_GRID_PLL_REGS* p)
{
    p->theta = p->theta + BASE_OMEGA * INT_PERIOD;
    return (p->theta);
}
