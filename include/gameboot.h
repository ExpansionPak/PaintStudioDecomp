#ifndef _GAMEBOOT_H
#define _GAMEBOOT_H

#include "PR/ultratypes.h"

void func_80005384(void);
void func_800016F8(u16 arg0);
s32 func_80001D0C(u32 startLba, void *dst, u32 lbaCount);
s32 func_80001E54(u32 devAddr, void *dramAddr, u32 size);
u32 func_80001F20(u32 startLba, u32 endLba, u32 *lbaCount);
s32 DisplayDiskError(s32 arg0);
s32 func_8000314C(u8 *a, u8 *b, u32 size);
void func_80005108(void);
void func_80001360(void *arg);
void func_80001A44(void);

#endif //_GAMEBOOT_H
