#include<Includes.h>

void Off_Grid_OpenLoop_Init_Func(OFF_GRID_CTRL_REGS* p);
void Off_Grid_OpenLoop_Run_Func(OFF_GRID_CTRL_REGS* p);

void Off_Grid_OpenLoop_Init_Func(OFF_GRID_CTRL_REGS* p)
{
    p->OpenLoopMod = 0.0f;

    p->OpenLoopModStart.Output = 0.0f;
    p->OpenLoopModStart.Target = 0.0f;
    p->OpenLoopModStart.Limitation = 0.0f;
    p->OpenLoopModStart.UpperSpeed = SPEED_ISR_50MS;
    p->OpenLoopModStart.DownSpeed  = SPEED_ISR_50MS;

    p->OpenLoopThreeVol.Uabc[PHASE_A] = 0.0f;
    p->OpenLoopThreeVol.Uabc[PHASE_B] = 0.0f;
    p->OpenLoopThreeVol.Uabc[PHASE_C] = 0.0f;
}


void Off_Grid_OpenLoop_Run_Func(OFF_GRID_CTRL_REGS* p)
{
    p->OpenLoopModStart.Target = 0.8f;
    Soft_Start_Run_Func(&p->OpenLoopModStart);

    Three_Phase_Vol_Generate_Func(&p->OpenLoopThreeVol,Off_Grid_Pll_Regs.theta,p->OpenLoopModStart.Output);
    float32 Vz = SVPWM_Zero_Sequence_Func(&p->OpenLoopThreeVol);
    p->OpenLoopThreeVol.Uabc[PHASE_A] = p->OpenLoopThreeVol.Uabc[PHASE_A] + Vz;
    p->OpenLoopThreeVol.Uabc[PHASE_B] = p->OpenLoopThreeVol.Uabc[PHASE_B] + Vz;
    p->OpenLoopThreeVol.Uabc[PHASE_C] = p->OpenLoopThreeVol.Uabc[PHASE_C] + Vz;
}
