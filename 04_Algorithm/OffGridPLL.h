#ifndef ALGORITHM_OFFGRIDPLL_H_
#define ALGORITHM_OFFGRIDPLL_H_

typedef struct
{
    float32 theta;
}OFF_GRID_PLL_REGS;

extern OFF_GRID_PLL_REGS Off_Grid_Pll_Regs;

extern float32 Off_Grid_Pll_Run_Func(OFF_GRID_PLL_REGS* p);

#endif /* ALGORITHM_OFFGRIDPLL_H_ */
