#include "common.h"

#include "PR/sched.h"

extern OSThread* __osRunningThread;

s32 osGetThreadId(OSThread* arg0) {

    if (arg0 == NULL) {
        arg0 = __osRunningThread;
    }
    return arg0->id;
}
