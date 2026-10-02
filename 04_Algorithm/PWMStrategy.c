#include<Includes.h>

float32 SVPWM_Zero_Sequence_Func(THREE_VOL_REGS* p);

#pragma CODE_SECTION(SVPWM_Zero_Sequence_Func,"ramfuncs");
float32 SVPWM_Zero_Sequence_Func(THREE_VOL_REGS* p)
{
    float32 Vmax = Max_Of_Three_Func(p->Uabc[PHASE_A],p->Uabc[PHASE_B],p->Uabc[PHASE_C]);
    float32 Vmin = Min_Of_Three_Func(p->Uabc[PHASE_A],p->Uabc[PHASE_B],p->Uabc[PHASE_C]);
    float32 Vz = -0.5f * (Vmax + Vmin);
    return (Vz);
}


