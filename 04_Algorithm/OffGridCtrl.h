#ifndef ALGORITHM_OFFGRIDCTRL_H_
#define ALGORITHM_OFFGRIDCTRL_H_

typedef struct
{
    float32 OpenLoopMod;
    SOFT_START_REGS OpenLoopModStart;
    THREE_VOL_REGS  OpenLoopThreeVol;

}OFF_GRID_CTRL_REGS;

#endif /* ALGORITHM_OFFGRIDCTRL_H_ */
