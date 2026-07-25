#include "common.h"

#include "PR/sched.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Unk80286EAC;

s32 func_cam_80284EC8(s32);
s32 func_cam_8028C950(s32, s32);
s32 func_cam_8028CB24(s32, s32);
s32 func_cam_8028CBE4();
extern s32 D_802C8784;
extern s32 D_cam_802C28A0;
s32 func_cam_80285830(s32*, s32, s32, s32);
extern s32 D_802C8760;
extern s32 D_802C8858;
s32 func_cam_8028D6C4();
extern void* D_802C8774;
extern s32 D_802C8790;
extern s32 D_802C8878;
extern s32 D_802C888C;
extern s32 D_cam_8029EAAC;
extern s32 D_cam_8029EAE4;
extern s32 D_cam_8029EBD0;
extern s32 D_cam_8029EC80;
extern s32 D_cam_8029EC84;
extern s32 D_cam_8029EC88;
extern s32 D_cam_8029EC8C;
extern s32 D_cam_8029EC90;
extern s32 D_cam_8029ECA4;
extern s32 D_cam_8029ECAC;
extern s32 D_cam_8029ECB0;
extern s32 D_cam_8029ECC0;
extern s32 D_cam_8029ECC4;
extern s32 D_cam_8029EDC0;
extern s32 D_cam_8029EDC4;
extern s32 D_cam_8029EDC8;
extern s32 D_cam_8029EDCC;
extern s32 D_cam_8029EDD0;
extern s32 D_cam_8029EDD4;
extern s32 D_cam_8029EDD8;
extern s32 D_cam_8029EDDC;
extern s32 D_cam_8029F0BC;
extern s32 D_cam_8029F0C0;
extern s32 D_cam_8029F120;
extern s32 D_cam_8029F124;
extern s32 D_cam_8029F128;
extern s32 D_cam_8029F220;
extern s32 D_cam_8029F2D0;
extern s32 func_cam_802889A0;

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80284130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802841CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028429C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80284510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80284620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802846A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80284AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80284EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80284FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028537C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802853B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802857A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802858AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802858BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802858F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028593C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028596C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80285F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286A68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286E20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286E6C.s")

void func_cam_80286EAC(Unk80286EAC* arg0, s8 arg1) {
    arg0->unk0 = (s32)arg1;
    arg0->unk4 = (s32)arg1;
    arg0->unkC = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80286ED0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802870C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802872EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802873F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028772C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028773C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802877B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802877E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802878C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802879D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80287F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802884E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802885E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028863C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802886AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80288944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028897C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802889A0.s")

s32 func_cam_80288BB0(s32 arg0) {
    if (arg0 == 1) {
        D_802C8760 = 0x10;
        func_cam_80285830(&func_cam_802889A0, 0x3E7, 0, 0);
        return -1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80288C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80288CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80288ED8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80288F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80289208.s")

void func_cam_80289464(void) {
    D_cam_8029EAE4 = 1;
}

void func_cam_80289480(s32 arg0, s32 arg1, s32 arg2, s32 arg3, struct { s32 unk0; s32 unk4; s32 unk8; } *arg4, s32 *arg5) {
    u16 sp6 = ((u16 *)arg0)[(arg2 << 7) + arg1];
    arg4->unk0 += (s32)((sp6 & 0x3E) * arg3);
    arg4->unk4 += (s32)((sp6 & 0x7C0) * arg3);
    arg4->unk8 += (s32)((sp6 & 0xF800) * arg3);
    *arg5 += arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028951C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802895D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802898A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80289A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028A24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028A490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028A58C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028A914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028AFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028B2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028B3A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028B488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028C528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028C950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028CB24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028CBE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028CCA8.s")

void func_cam_8028CDBC(s32 arg0, s32 arg1) {
    func_cam_8028CBE4();
    func_cam_8028CB24(arg1, 1);
    func_cam_8028C950(arg0, arg1);
    func_cam_80284EC8(arg1);
    D_802C8784 = D_cam_802C28A0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028CE1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028CE88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028CEFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028CF9C.s")

void func_cam_8028D084(s32 arg0) {
    D_802C8858 += arg0;
    if (D_802C8858 >= 0x5DC1) {
        D_802C8858 = 0x5DC0;
    }
}

void func_cam_8028D0C8(s32 arg0) {
    D_802C8858 -= arg0;
    if (D_802C8858 < 0x10) {
        D_802C8858 = 0x10;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028D10C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028D304.s")

s32 func_cam_8028D6C4(void) {
    D_cam_8029EDD0 = D_cam_8029EDD4;
    D_cam_8029EC80 = D_cam_8029EC84;
    D_cam_8029EC88 = D_cam_8029EC8C;
    D_cam_8029ECAC = D_cam_8029ECB0;
    D_cam_8029EDD8 = D_cam_8029EDDC;
    D_cam_8029ECC0 = D_cam_8029ECC4;
    D_cam_8029EDC8 = D_cam_8029EDCC;
    D_cam_8029EDC0 = D_cam_8029EDC4;
    bcopy(&D_cam_8029ECA4, &D_cam_8029EC90, 8);
}

void func_cam_8028D77C(void) {
    D_cam_8029EDD0 = 0;
    D_cam_8029EC80 = 0;
    D_cam_8029EC88 = 0;
    D_cam_8029ECAC = 0;
    D_cam_8029EDD8 = 0;
    D_cam_8029ECC0 = 0;
    D_cam_8029EDC8 = 4;
    D_cam_8029EDC0 = 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028D7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028D88C.s")

void func_cam_8028DD18(void) {
    s32 i = 0;

    do {
        (&D_802C8878)[i] = 0;
    } while (++i < 5);

    D_802C888C = 0;
    bzero(D_802C8774, 0xE000);
    func_cam_8028D6C4();
}

void func_cam_8028DD84(void) {
    D_cam_8029F220 = 3;
    D_cam_8029F120 = -1;
    D_cam_8029F124 = -1;
    D_cam_8029F128 = -1;
    D_cam_8029F0BC = 0;
    D_cam_8029F0C0 = 0;
    D_cam_8029EBD0 = 0;
    D_cam_8029EAAC = 0x1A;
    D_802C8790 = 0;
    D_cam_8029F2D0 = 0;
    D_cam_8029EAE4 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028DE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028DE88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028E268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028E38C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028E8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028EC10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028EECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028F1D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028FDC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8028FF70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80290220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802902C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80290DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80290F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802911E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80291BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80292004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80292200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80292FAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029302C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80293084.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802930DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80293134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80293340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802935F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802938A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80293B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80294450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80294DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029573C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802958AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80295A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80295B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80295D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802960E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80296390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802963D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802964D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802966E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029690C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80297260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802978E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80297AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80297D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80298FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_802990D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80299354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029965C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_80299960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029A3D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029A418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029A71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029B920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029BB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029BD44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029BF9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C20C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C2C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C3A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C3F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C4E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029C804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029CBE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029CE98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029D914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029DB68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029DB9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029DBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029DC78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029DD94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029DEEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029E080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/camera/27BA20/func_cam_8029E140.s")
