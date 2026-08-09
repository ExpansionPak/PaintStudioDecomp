#include "common.h"

#include "PR/sched.h"

void __osPiGetAccess(void);                                /* extern */
void __osPiRelAccess(void);                                /* extern */
s32 __osPiRawReadIo(u32, u32 *);                           /* extern */

s32 osPiReadIo(u32 arg0, u32* arg1) {
    register s32 ret;

    __osPiGetAccess();
    ret = __osPiRawReadIo(arg0, arg1);
    __osPiRelAccess();
    return ret;
}
