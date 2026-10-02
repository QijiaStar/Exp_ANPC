#include<Includes.h>

SOFT_START_REGS Soft_Start_Regs;
void Soft_Start_Run_Func(SOFT_START_REGS* p);
void Soft_Start_Clear_Func(SOFT_START_REGS* p);

#pragma CODE_SECTION(Soft_Start_Run_Func, "ramfuncs");
void Soft_Start_Run_Func(SOFT_START_REGS* p)
{
    // === Step 1: Check if output is within the tolerance band of the target ===
    if(fabs(p->Target - p->Output) <= p->Limitation)
    {
        // Within tolerance: snap directly to target
        p->Output = p->Target;
    }
    else
    {
        // === Step 2: Ramp output toward target at the configured rate ===
        if(p->Target >= p->Output)
        {
            // Ramp upward at UpperSpeed
            p->Output = p->Output + p->UpperSpeed;
        }
        else
        {
            // Ramp downward at DownSpeed
            p->Output = p->Output - p->DownSpeed;
        }
    }
}

#pragma CODE_SECTION(Soft_Start_Clear_Func, "ramfuncs");
void Soft_Start_Clear_Func(SOFT_START_REGS* p)
{
    // === clear all parameters ===
    p->Output = 0.0f;
    p->Target = 0.0f;
}

