#ifndef MATH_THREEVOL_H_
#define MATH_THREEVOL_H_

typedef struct
{
    float32 Uabc[PHASE_ABC];
}THREE_VOL_REGS;

extern THREE_VOL_REGS Three_Vol_Regs;
extern void Three_Phase_Vol_Generate_Func(THREE_VOL_REGS* p, const float32 Theta, const float32 Modulation);

#endif /* 00_MATH_THREEVOL_H_ */
