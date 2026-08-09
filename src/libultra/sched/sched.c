#include "PR/sched.h"

OSScTask *__scTaskReady(OSScTask *t) 
{
    int rv = 0;
    void *a;
    void *b;    

    if (t) {    
        /*
         * If there is a pending swap bail out til later (next
         * retrace).
         */
        if ((a=osViGetCurrentFramebuffer()) != (b=osViGetNextFramebuffer())) {
#ifdef SC_LOGGING
            osLogEvent(l, 513, 2, a, b);
#endif            
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
