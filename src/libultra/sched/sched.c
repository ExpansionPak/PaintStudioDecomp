#include "common.h"

#include "PR/sched.h"

// Function matched by inspectredc
// https://decomp.me/scratch/GRUrW
// https://github.com/inspectredc
OSScTask *__scTaskReady(OSScTask *t)
{
    int rv = 0;
    void *a;
    void *b;

    if (t) {
        if ((a = osViGetCurrentFramebuffer()) !=
            (b = osViGetNextFramebuffer())) {
            return 0;
        }

        return t;
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/__scExec.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/__scSchedule.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/func_8001B014.s")

void sched_dummy_func0(void) {
}

void sched_dummy_func1(void) {
}

void sched_dummy_func2(void) {
}

void sched_dummy_func3(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/sched_unidentified_func0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/__scMain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/osScGetCmdQ.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/osScRemoveClient.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/osScAddClient.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/sched/sched/osCreateScheduler.s")
