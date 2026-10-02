#ifndef MATH_SOFT_START_H_
#define MATH_SOFT_START_H_

typedef struct
{
    float Target;
    float UpperSpeed;
    float DownSpeed;
    float Output;
    float Limitation;
} SOFT_START_REGS;

#define SPEED_ISR_1MS    (INT_PERIOD / 1e-3)
#define SPEED_ISR_20MS   (INT_PERIOD / 20e-3)
#define SPEED_ISR_50MS   (INT_PERIOD / 50e-3)
#define SPEED_ISR_60MS   (INT_PERIOD / 60e-3)
#define SPEED_ISR_200MS  (INT_PERIOD / 200e-3)
#define SPEED_ISR_2000MS (INT_PERIOD / 2000e-3)
#define SPEED_ISR_30S    (INT_PERIOD / 30000e-3)

extern void Soft_Start_Clear_Func(SOFT_START_REGS* p);
extern void Soft_Start_Run_Func(SOFT_START_REGS* p);
extern SOFT_START_REGS Soft_Start_Regs;

#endif /* MATH_SOFT_START_H_ */
