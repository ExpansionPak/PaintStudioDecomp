#include "common.h"

#include "PR/sched.h"

s32 __osPiCreateAccessQueue();                        /* extern */
extern OSMesgQueue __osPiAccessQueue;
extern s32 __osPiAccessQueueEnabled;
extern void* piAccessBuf;

s32 __osPiCreateAccessQueue(void) {
    __osPiAccessQueueEnabled = 1;
    osCreateMesgQueue(&__osPiAccessQueue, &piAccessBuf, 1);
    osSendMesg(&__osPiAccessQueue, NULL, 0);
}

void __osPiGetAccess(void) {
    void* sp1C;

    if (__osPiAccessQueueEnabled == 0) {
        __osPiCreateAccessQueue();
    }
    osRecvMesg(&__osPiAccessQueue, &sp1C, 1);
}

void __osPiRelAccess(void) {
    osSendMesg(&__osPiAccessQueue, NULL, 0);
}
