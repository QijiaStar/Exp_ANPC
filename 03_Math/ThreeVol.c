#include<Includes.h>

THREE_VOL_REGS Three_Vol_Regs;
void Three_Phase_Vol_Generate_Func(THREE_VOL_REGS* p, const float32 Theta, const float32 Modulation);

#pragma CODE_SECTION(Three_Phase_Vol_Generate_Func,"ramfuncs");
void Three_Phase_Vol_Generate_Func(THREE_VOL_REGS* p, const float32 Theta, const float32 Modulation)
{
    p->Uabc[PHASE_A] = Modulation * sinf(Theta);
    p->Uabc[PHASE_B] = Modulation * sinf(Theta - PI_2DIV3);
    p->Uabc[PHASE_C] = Modulation * sinf(Theta + PI_2DIV3);
}
