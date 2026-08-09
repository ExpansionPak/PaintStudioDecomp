#include "PR/piint.h"

s32 osPiReadIo(u32 arg0, u32* arg1) {
    register s32 ret;

    __osPiGetAccess();
    ret = __osPiRawReadIo(arg0, arg1);
    __osPiRelAccess();
    return ret;
}
