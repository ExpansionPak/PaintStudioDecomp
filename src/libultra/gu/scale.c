#include "common.h"

#include "PR/sched.h"

void guScaleF(f32 (*mf)[4], f32 x, f32 y, f32 z) {
    f32 temp = 1.0f;

    guMtxIdentF(mf);
    mf[0][0] = x;
    mf[1][1] = y;
    mf[2][2] = z;
    mf[3][3] = temp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/gu/scale/guScale.s")
