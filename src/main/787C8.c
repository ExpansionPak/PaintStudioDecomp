#include "common.h"

#include "PR/sched.h"

struct Unk800C4AC8 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk800C6DA4 {
    char pad[0x30];
    s32 unk30;
};

struct Arg1Struct {
    char pad[0x268];
    struct Unk800C4AC8* unk268;
};

u32 func_800C0BB4();
s32 func_8011B2A4(ALPlayer*);
s32 osCapReadIo(s32*, s32, s32*);
s32 osCapWriteIo(s32*, s32, s32);
extern s32 D_80076464;
extern u32 D_80121EB8;
extern void* D_80279BD8;
extern s32 D_801F27B0;
extern s32 D_801F37E0;
extern s32 D_801F38CC;
extern s32 D_801F38D4;
extern s32 D_801F38DC;
extern s32 D_801F38E4;
extern s32 D_8011F4EC;
extern ALSynth* D_8013D0D4;
extern ALSynth* D_801F4BC0;
extern ALSynth* D_801F4BC4;
extern s32 D_8011F5E4;
extern s32 D_80121F24[][6];
extern f64 D_8015F038;
extern s32 func_800C6678(void*, void*);
extern s32 func_800C66D4(void*, void*);
extern char D_801CFA50[];

void func_800BD8E0(void) {
    D_8011F5E4 = 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800BD8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800BDB80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C01F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C033C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C052C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0894.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C08F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C094C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C09C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0AB4.s")

f32 func_800C0AE4(void) {
    return (f32) func_800C0BB4() / 32768.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0C68.s")

// Function matched by Bl00D4NGEL (Dominik Peters)
// https://decomp.me/scratch/ISVtZ
// https://github.com/Bl00D4NGEL
s32 func_800C0CCC(u16 arg0) {
    return D_80121F24[arg0][0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0CF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0E64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0F4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C0FB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C1484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C16E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C171C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C17AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C1828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C1884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C1C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C1D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C1E28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C1F78.s")

// Function matched by queueRAM
// https://decomp.me/scratch/1282a
// https://github.com/queueRAM
void func_800C2144(void) {
    s32 sp24;
    s32 sp2C;
    s32 sp28;
    s32 sp30;

    sp28 = D_80076464, // comma to the rescue xd
    sp2C = D_80121EB8;
    LeoByteToLBA(sp28, sp2C, &sp24);
    sp30 = D_80279BD8;
    Mfs_WriteLBA(0x58A, sp30, sp24);
}

void func_800C2188(void) {
    s32 sp24[4];

    LeoByteToLBA(D_80076464, D_80121EB8, &sp24[3]);
    Mfs_ReadLBA(0x58AU, D_80279BD8, (u32) sp24[3]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C21CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C225C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C24F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C254C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C272C.s")

s32 func_800C27B8(s32 arg0, u32* arg1) {
    s32 sp1C;
    u32 temp_v0;

    sp1C = arg0 + 0x48A;
    temp_v0 = func_800C24F4(&sp1C, 6);
    *arg1 = temp_v0;
    if (temp_v0 >= 0xF4240U) {
        return 0;
    }
    return 1;
}

void func_800C280C(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_8011F4EC + arg0;
    if (D_8011F4EC < temp_s0) {
        do {
            osYieldThread();
        } while (D_8011F4EC < temp_s0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C28A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C28C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C291C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2CA8.s")

void func_800C2D1C(void) {
    s32 var_v0;

    var_v0 = 0;
    do {
        var_v0 = (var_v0 + 1) & 0xFFFF;
    } while (var_v0 < 0x32);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C2EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C30C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C3864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C3B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C432C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C474C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C499C.s")

s32 func_800C4AC8(s32* arg0, void* arg1, unsigned short arg2) {
    s32 temp_a1;
    struct Unk800C4AC8* temp_v1;
    struct Arg1Struct* hold_arg1 = (struct Arg1Struct*)arg1;
    
    temp_v1 = hold_arg1->unk268; 
    
    if (temp_v1 != 0) {
        temp_a1 = arg0[arg2]; 
        
        if (arg0[arg2] != 0) {
            return (arg0[arg2] & 0xFFFFFF) + (s32)temp_v1;
        }
        return 0;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C4B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C4B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C4BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C4D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C5418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C5458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C5754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C595C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C5C70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C5D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C5EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C607C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C61C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C661C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6678.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C66D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C68F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6BBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6D70.s")

s32 func_800C6DA4(struct Unk800C6DA4* arg0) {
    s32 sp2C[7];

    func_800C66D4(&D_801CFA50[arg0->unk30 * 0x510], &sp2C[4]);
    func_800C6678(arg0, &sp2C[4]);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6F20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C6F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C733C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/n_alSynFreeFX.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7CA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C7F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C8044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C8098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C821C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C8294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C83C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C83E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C8404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C85E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C883C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C894C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C990C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C99C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9C98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800C9F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA1D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA51C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/spMove.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CA9C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CB230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CB3C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CB444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CB558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CBCEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CBF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC12C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC2F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC6C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC6DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC6E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC75C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC7C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC83C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC8A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC90C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC9B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC9CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CC9F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CCA70.s")

void func_800CCAF4(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CCAFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CCDA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CD19C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CD420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CD614.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CD8B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CDA7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CDCAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CDDA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CDED8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CE3B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CE410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CE464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CE4F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CEAAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CEC58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CED58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CF4D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CF514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CF550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CF650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800CF8A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0C88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0CD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0D8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D0F2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D1064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D13C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D145C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D27D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D2A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D2A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D2A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D2BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D2E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D2FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D3124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D3190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D349C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D36C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D3904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D3B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D3C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D3E44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D3F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D40C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D416C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D41D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D42E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D436C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D43A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D43D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D464C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4F10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D4FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D5520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D574C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D68D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D6918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D6D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D6F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D755C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D77F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D78A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D7F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D86B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8C88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8CB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D8F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D920C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D9908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800D9DB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DA070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DA148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DA3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DA530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DA604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DA748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DA854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DAA04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DAB18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DAD7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DAE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DB1B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DB230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DB34C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DB7EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DBAF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DBE90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DC064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DC0E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DC1B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DC39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DCC8C.s")

void func_800DCEA4(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DCEAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DCEF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800DD58C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2A60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2B00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2BA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2C48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2C94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2CF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E2EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E35BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E35E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E4440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E45FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E4718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E4960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E49CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E56A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E58C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E596C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E5978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E5984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E598C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E65E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E66E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E67CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E68C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E694C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E69D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6C74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6CA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6CE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6E90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E6F24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E71C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E7364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E781C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E7930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E79AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E7A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E7AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E7EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E80CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E8168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E8274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E8DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E8F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E9044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E9408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E9478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E94C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E9648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E9AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E9F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800E9F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EA074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EA1D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EAB24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EACA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EADB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EAE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EB538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EB7B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EB7D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EB814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EB940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EBAA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC2D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC3CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC3E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC5A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC5C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EC9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800ECAF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800ECE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EDDC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EDEE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE2DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE3EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE4B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE534.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE57C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE5EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE6A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE770.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EE90C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EEA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EEA74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EEB74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EEBCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EEC90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EED94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EEE74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EEEF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EF540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EF568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EF734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EF7C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EFCA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800EFEA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F00B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F03B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F089C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0C20.s")

void func_800F0D08(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0DB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0EE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F0FB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F1EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F1EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F1F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F1F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F1FB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F2044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F20D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F2230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F23E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F24E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F2518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F26AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F2820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F2E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F304C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F320C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F32A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F32C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F32D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F32F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F35D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F36A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3BA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3C88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F3E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F44C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F44D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F4564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F4638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F59D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F5BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F70E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F7188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F7964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F7A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F7DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F8550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F8600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F8674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F8814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F8F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F9244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F978C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F9C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800F9CA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FB63C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FBC10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FC504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FC590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FC890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FCB90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FCC00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FCCB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FCD34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FCD78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FCEB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FD1C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FD310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FD34C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FDA8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FDD7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FDDD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FDDDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FDE20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FDEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FDF70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE1E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE2F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE3A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE3D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE4E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE83C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE90C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FE9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEA58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEAEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEB74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEB80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEBBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEC44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FECC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FED6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEDDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEE4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FEECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF52C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF5D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF81C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF8B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FF944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FFBD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FFC90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FFC98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FFD1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FFDA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_800FFE24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010003C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801001D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801001DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010037C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100C50.s")

void alSndpDelete(ALSndPlayer* sndp) {
    alSynRemovePlayer(D_8013D0D4, &sndp->node);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80100E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801014D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010158C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010164C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010168C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010198C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801019C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101C24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80101F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010200C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010226C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801025D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801025F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801028A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010291C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801029A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102A9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80102B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80103754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80103B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80103C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80103D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80103DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80103E20.s")

void func_80104058(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80104060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80104148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801044A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80105020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801050D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010527C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80105444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801055A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801055FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010573C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801058B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80105CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80106348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80106724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80106984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801073CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80107440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80107918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801080A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801080B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801083B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801084AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010887C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80108F78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801094D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801096E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801097DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801098F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010999C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80109C14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A1DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A2D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A37C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A4E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A4F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A5EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010A7DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010AA04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010ABC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010B2EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010B774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010B860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010B990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010B9EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010BACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010BBB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010BC24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C37C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C4F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010C9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010CB40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010CC0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010CC50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010CD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010CD5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010CF64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010D35C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010D4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010D560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010D5D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010D6FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010D790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010DB48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010DFDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E0CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E23C.s")

void func_8010E244(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg2 + 149] = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E2E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E38C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E398.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E3A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E3B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E3B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E3C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E42C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E44C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E6C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010E9E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010EA60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010EB1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010EB70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010EB78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010EF00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010F274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010F450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010F62C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010FCD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010FD18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010FEBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010FEE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010FF24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8010FFAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80110058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801100E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80110194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011021C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801102C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80110310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80110798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011083C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801109D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80110FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80111290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801113B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801115F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80111760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80111768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80111778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80111BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80111E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80111E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801120C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/alSynFreeFX.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80112330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80112460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80112664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011281C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801129F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80112A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80112A94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80112C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80112E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801133AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801135D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801137B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801138A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801138F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801139C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/GetAngle.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80113FEC.s")

s32 func_80114034(void) {
    return D_801F27B0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapConvertToRGBA.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80114A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapCartRegInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapCartDataInit.s")

s32 osCapRead0000(void) {
    s32 sp1C;

    osCapReadIo(&D_801F37E0, 0, &sp1C);
    D_801F38CC = sp1C;
    return sp1C;
}

s32 osCapRead0004(void) {
    s32 sp1C;

    osCapReadIo(&D_801F37E0, 4, &sp1C);
    D_801F38D4 = sp1C;
    return sp1C;
}

s32 osCapRead0008(void) {
    s32 sp1C;

    osCapReadIo(&D_801F37E0, 8, &sp1C);
    D_801F38DC = sp1C;
    return sp1C;
}

// Function matched by queueRAM
// https://decomp.me/scratch/jG4jA
// https://github.com/queueRAM
s32 osCapRead0180(void) {
    s32 sp1C;

    osCapReadIo(&D_801F37E0, 0x180, &sp1C);
    D_801F38E4 = sp1C;
    return sp1C;
}

s32 osCapWrite0000(s32 arg0) {
    osCapWriteIo(&D_801F37E0, 0, arg0);
    return arg0;
}

s32 osCapWrite0004(s32 arg0) {
    osCapWriteIo(&D_801F37E0, 4, arg0);
    return arg0;
}

s32 osCapWrite0008(s32 arg0) {
    osCapWriteIo(&D_801F37E0, 8, arg0);
    return arg0;
}

s32 osCapWrite0180(s32 arg0) {
    osCapWriteIo(&D_801F37E0, 0x180, arg0);
    return arg0;
}

void osCapWrite0100(void) {
    osCapWriteIo(&D_801F37E0, 0x100, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapInquiry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80114DB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapCartInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapStartDma.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapReadIo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapWriteIo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801159AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115A9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/osCapConvertToI8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80115FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011601C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80116040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80116128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80116804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80116914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801169C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80116F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80116FB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80117298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80117478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801174F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80117674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801178EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80117968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801181C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80118220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801184EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80118750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80118874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80118998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80118A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80119218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011935C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80119440.s")

f32 func_80119548(f32 arg0) {
    if (arg0 >= 360.0f) {
        do {
            arg0 -= 360.0f;
        } while (arg0 >= 360.0f);
    }
    
    if (arg0 < 0.0f) {
        do {
            arg0 += 360.0f;
        } while (arg0 < 0.0f);
    }
    
    if (D_8015F038 <= arg0) {
        arg0 -= D_8015F038;
    }
    
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801195C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011961C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801197A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_80119860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_801198EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A1C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A1D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A2C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A2E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A5A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A63C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A6E8.s")

s32 func_8011A72C(s8 *arg0, s32 arg1) {
    arg0[179] = 1;
    return arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A73C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A75C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A7C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A81C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A82C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011A9F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AA10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AA1C.s")

s32 func_8011AA2C(s8 *arg0, s32 arg1) {
    arg0[206] = 0;
    return arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AA38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AA4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AA6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AA78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AAAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AAB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AB1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AB7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011ABCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AC1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AC2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AD1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AD70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AD80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011AD8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B108.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B4C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B59C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B60C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B6B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B70C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B770.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B7DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011B97C.s")

void alSynRemovePlayer(ALSynth* s, ALPlayer* client) {
    if ((s != NULL) && ((s32) s->pAllocList.prev & 0x80000000)) {
        D_801F4BC0 = s;
    }
    func_8011B2A4(client);
    D_801F4BC0 = D_801F4BC4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BA0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BA74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BAC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BAF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BB1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BB50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BB9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BBFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BC5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BCDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BCE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BD6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BE10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BE78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011BF10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011C020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011C1B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011C284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011C35C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011C40C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011C698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011CB3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011CBD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011CDB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011CEE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011CF4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D154.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D8B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011D9B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011DAE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011DC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011DC98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011DCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011DD70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011DDFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011DE60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011E290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011E3E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011E614.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011E654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011E868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011E8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011E9B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011EA18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011EA9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011EB08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011EBB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011EC6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011ED44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011EDEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011EEC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011F0E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011F284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/787C8/func_8011F3C0.s")
