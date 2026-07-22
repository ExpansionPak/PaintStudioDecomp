#include "common.h"

#include "PR/sched.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Unk802C16B8;

s32 func_80011C50(s32);
s32 func_80020D7C(s32*);
s32 func_saveload_802C1210(s32*, s32*);
void func_saveload_802C15D4(s32* arg0, s32 arg1, s32 arg2, s32 arg3);
void func_saveload_802C178C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_saveload_802C1918(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_saveload_802C1D88(s32, s32, s32, s32, s32);
extern s32 D_saveload_80301064;
extern u8 D_saveload_802C3D74;
extern u8 D_saveload_802C3D78;
extern s32 D_saveload_80301074;
extern s32 D_saveload_80301084;
extern s32 D_saveload_80301088;
extern s32 D_saveload_803041E0;
extern s32 (*D_saveload_80309CF0)(s32, s32, s32);
void func_saveload_802C0580(s32 arg0);
typedef struct { s32 unk0; s32 unk4; } DecompInferred_sp4;
extern s32 D_saveload_80300620;
extern s32 D_saveload_80301070;
extern s32 D_saveload_80301074;
extern s32 D_saveload_80301078;
extern s32 D_saveload_80301080;
extern s32 D_saveload_803010C0;
extern void* D_saveload_80309D30;
extern s32 D_saveload_80300F60;
extern s32 D_saveload_80300F64;
extern s32 D_saveload_80300F70;
extern s32 D_saveload_80300F74;
extern s32 D_saveload_80300F78;
extern s32 D_saveload_80300F7C;
extern s32 D_saveload_80300FA0;
extern s32 D_saveload_80300FA4;
extern s32 D_saveload_80300FA8;
extern s32 D_saveload_80300FAC;
extern s32 D_saveload_80300FB0;
extern s32 D_saveload_80300FB4;
extern s32 D_saveload_80300FB8;
extern s32 D_saveload_80300FBC;
extern s32 D_saveload_80300FC0;
extern s32 D_saveload_80300FC4;
extern s32 D_saveload_80300FC8;
extern s32 D_saveload_80300FCC;
extern s32 D_saveload_80300FD0;
extern s32 func_saveload_802C01C8(s32, s32);
extern s8 D_saveload_80309480;
extern s32 D_saveload_80309D20;
extern s32 D_803158E0;

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802841C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802842B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802842E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802846C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028476C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80284FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80285128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802852EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802859DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80285A94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80285E20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80285F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80285FD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80285FE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802860B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802868A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80287284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80287530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802875E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80287670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802876AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802876C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80287730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028778C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802879CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80287A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80287AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80287CD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288160.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802886F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802888F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80288E8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802892CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028937C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802894D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802895EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802896A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802897A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802897FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289AA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80289F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A0F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A17C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A26C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A3D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A4C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A678.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A7E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A9A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A9E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028A9F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028AAD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028AB60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028AC14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028AD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028ADD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028AFF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B3EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B5B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B69C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028B9E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028C2BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028C38C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028C3B0.s")

void func_saveload_8028C414(s32 arg0) {
    if (arg0 == 0) {
        D_saveload_802C3D74 = (u8)0xEF;
        D_saveload_802C3D78 = (u8)0x7A;
    }
    if (arg0 == 1) {
        D_saveload_802C3D74 = (u8)0xC0;
        D_saveload_802C3D78 = (u8)0x8A;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028C468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028C5C0.s")

void func_saveload_8028C690(void) {
    D_saveload_80309480 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028C6AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028CBDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028CC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028CDE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028CF70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028D290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028D42C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028D5C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028D974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028DB9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028DC80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028DD70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028DE04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028DE44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028DF70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028E104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028E1C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028E2A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028E3E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028E590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028E8F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028EBE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028EF0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F2A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F3D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F52C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F6A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028F810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028FC70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028FCE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028FD70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8028FDB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802900A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802901BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029038C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290AE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290B1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290C14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80290F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80291100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029138C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029167C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80291720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80292174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802923DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80292500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80292578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802926F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80292994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80292B64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80292E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80292F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802932B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80293340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802933AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80293440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80293838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80293C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80293C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80293E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80294010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029482C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80294CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80295028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80295348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802955C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802957C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80295998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80296244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80297004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80297230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80298070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029881C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80298CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80299180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802992D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_80299EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029A254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029A3EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029A4D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029A6B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029A9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029ABC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029AD98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029AE80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029B324.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029B760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029BAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029BC74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029BE48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029BF30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029C3E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029C870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029D0C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029DB50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029E95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_8029FE50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A0180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A0360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A0654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A0D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A1530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A1610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A1904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A2254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A2BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A2CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A2F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A33E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A36AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A38A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A39B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A3A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A3ACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A3BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A3C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A40D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A4240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A7280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A7BD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A851C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A868C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A87FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A89F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A8CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A96F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A9AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802A9EC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AA07C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AA0E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AA310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AA558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AA650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AA794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AA840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AB5EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AB884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AB96C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AB9CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802ABAB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802ABB40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802ABE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802ABF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AC004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AC200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AC2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802ACA8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AD2E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802ADA34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AE300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AE64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AED9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AEE90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AF0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AF440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AFBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802AFEB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B0ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B10BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B1148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B1334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B18D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B1E68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B22A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B239C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B2464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B2500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B2C48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B2D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B32D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B3F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B3FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B4B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B5004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B5380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B54DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B5580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B5634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B57EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B59F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B5B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B5E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B67B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B6848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B68D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B6A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B6CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B6F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B784C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B7C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B8720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B8ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B8C78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802B8D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BA098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BA480.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BA4F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BAAE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BAC08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BB2E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BB380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BBBDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BBC58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BBF54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BC6CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BCA64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BD0D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BD15C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE1BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE1FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE29C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE398.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE4E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE5C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE5EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE8D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BE960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEA00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEAB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEBD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEC2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BECA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BED30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEDD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEE20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BEFDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BF010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BF050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BF060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BF34C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BF61C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BFA00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802BFD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C01C8.s")

void func_saveload_802C0500(s32 arg0, s32 arg1) {
    D_saveload_80309D20 = 0x10;
    func_saveload_802C01C8(arg0, arg1);
}

void func_saveload_802C0540(s32 arg0, s32 arg1) {
    D_saveload_80309D20 = 0xC;
    func_saveload_802C01C8(arg0, arg1);
}

void func_saveload_802C0580(s32 arg0) {
    if (arg0 > 0) {
        do {
            D_saveload_80300F60 = 0;
            D_saveload_80300F64 += D_saveload_80300F7C + 0x10;
            if (D_saveload_80300F64 > D_saveload_80300F74) {
                break;
            }
            arg0--;
        } while (arg0 > 0);
    }
}

void func_saveload_802C05F0(s32 arg0) {
    if (arg0 > 0) {
        do {
            D_saveload_80300F60 = D_saveload_80300F60 + D_saveload_80300F78 + 8;
            if ((D_saveload_80300F60 >= D_saveload_80300F70) && (func_saveload_802C0580(1), D_saveload_80300F64 > D_saveload_80300F74)) {
                break;
            }
        } while (--arg0 > 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C0698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C06E8.s")

void func_saveload_802C0780(s32 arg0, s32 arg1) {
    D_saveload_80300F78 = arg0;
    D_saveload_80300F7C = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C07A0.s")

void func_saveload_802C07D0(s32 arg0) {
    s32 sp34;
    volatile s32 dummy[6];

    sp34 = func_80011C50(arg0);
    if (D_saveload_80301084 < (D_saveload_80301088 + 0x80)) {
        func_80020D7C(&D_saveload_803041E0);
        return;
    }
    D_saveload_80309CF0(sp34 + 0xA0000, D_saveload_80301074 + D_saveload_80301088, 0x80);
    D_saveload_80301088 += 0x80;
    (void)dummy;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C087C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C0AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C0B0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C0B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C0DA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C0F54.s")

void func_saveload_802C11AC(s32* arg0, u16 arg1) {
    s32 sp1C;
    s32 sp18;

    sp1C = *arg0;
    sp18 = D_saveload_80301064;
    *(u16*)&sp18 = arg1;
    func_saveload_802C1210(&sp1C, &sp18);
    *arg0 = sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C1210.s")

void func_saveload_802C14A4(s32* arg0, s32 arg1) {
    s32 sp1C;

    sp1C = *arg0;
    func_saveload_802C1210(&sp1C, arg1);
    *arg0 = sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C14F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C1558.s")

void func_saveload_802C15D4(s32* arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp1C;

    sp1C = *arg0;
    func_saveload_802C178C(0x64, 0x64, arg1, arg2);
    func_saveload_802C1210(&sp1C, arg3);
    *arg0 = sp1C;
}

void func_saveload_802C163C(s32* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp1C;

    sp1C = *arg0;
    func_saveload_802C178C(0x64, 0x64, arg1, arg2);
    func_saveload_802C1918(arg4, arg5, arg6, 0xFF);
    func_saveload_802C1210(&sp1C, arg3);
    *arg0 = sp1C;
}

void func_saveload_802C16B8(s32* arg0, Unk802C16B8* arg1) {
    s32 sp1C;

    sp1C = *arg0;
    if (arg1->unk0 != 0) {
        do {
            func_saveload_802C15D4(&sp1C, arg1->unk0, arg1->unk4, arg1->unk8);
            arg1++;
        } while (arg1->unk0 != 0);
    }
    *arg0 = sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C173C.s")

void func_saveload_802C178C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_saveload_80300FB4 = arg0;
    D_saveload_80300FB8 = arg1;
    D_saveload_80300FAC = arg2;
    D_saveload_80300FB0 = arg3;
    D_saveload_80300FA4 = 0;
    D_saveload_80300FA8 = 0;
    D_saveload_80300FBC = 1;
    D_saveload_80300FC0 = 1;
    D_saveload_80300FC4 = 0xFF;
    D_saveload_80300FC8 = 0xFF;
    D_saveload_80300FCC = 0xFF;
    D_saveload_80300FD0 = 0xFF;
    D_saveload_80300FA0 = -1;
}

void func_saveload_802C1820(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_saveload_80300FB4 = arg0;
    D_saveload_80300FB8 = arg1;
    D_saveload_80300FAC = arg2;
    D_saveload_80300FB0 = arg3;
    D_saveload_80300FA4 = 0;
    D_saveload_80300FA8 = 0;
    D_saveload_80300FBC = 1;
    D_saveload_80300FC0 = 1;
    D_saveload_80300FD0 = 0xFF;
    D_saveload_80300FA0 = -1;
}

void func_saveload_802C1890(s32 arg0, s32 arg1) {
    if (arg0 >= 0) {
        D_saveload_80300FA4 = arg0;
    }
    if (arg1 >= 0) {
        D_saveload_80300FA8 = arg1;
    }
}

void func_saveload_802C18C0(s32* arg0, s32* arg1) {
    if (arg0 != NULL) {
        *arg0 = D_saveload_80300FA4;
    }
    if (arg1 != NULL) {
        *arg1 = D_saveload_80300FA8;
    }
}

void func_saveload_802C18F8(s32 arg0, s32 arg1) {
    D_saveload_80300FBC = arg0;
    D_saveload_80300FC0 = arg1;
}

void func_saveload_802C1918(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_saveload_80300FC4 = arg0;
    D_saveload_80300FC8 = arg1;
    D_saveload_80300FCC = arg2;
    D_saveload_80300FD0 = arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C1948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C1BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C1D88.s")

void func_saveload_802C1E18(s32 arg0, s32 arg1) {
    func_saveload_802C1D88(arg0, arg1, 0xFF, 0xFF, 0xFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C1E5C.s")

void func_saveload_802C1FE0(s32 arg0, s32 arg1) {
    DecompInferred_sp4* sp4;
    if (D_saveload_80301070 != 0) return;
    D_saveload_80301070 = 1;
    D_saveload_80301074 = arg0;
    D_saveload_80301078 = arg1;
    D_saveload_80301080 = 0;
    D_saveload_80309D30 = (void*)((D_saveload_80300620 * 0x1800) + (u32)&D_saveload_803010C0);
    sp4 = (DecompInferred_sp4*)D_saveload_80309D30;
    sp4->unk0 = 0xDF000000;
    sp4->unk4 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C2078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C2194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C234C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C24F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C2570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C26F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C2780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C2E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C2FA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C2FB8.s")

void func_saveload_802C3080(void) {
    s32 sp4;
    s32* sp0;
    sp0 = &D_803158E0;
    sp4 = 0;
    do {
        *sp0 = 0;
    } while (++sp4, sp0 += 2, sp4 < 0x40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C30CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C3410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C34D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C3554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C361C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C3690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C36FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C3764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C3A34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/saveload/saveload/func_saveload_802C3A60.s")
