#include "PR/piint.h"

extern void* piAccessBuf;

void __osPiCreateAccessQueue(void) {
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
