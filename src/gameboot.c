#include "PR/os.h"
#include "PR/R4300.h"
#include "PR/sptask.h"
#include "PR/sched.h"
#include "PR/ultratypes.h"
#include "PR/gbi.h"
#include "PR/leo.h"

#include "common.h"
#include "gameboot.h"

#define THREAD_ID_IDLE 1
#define THREAD_ID_MAIN 6

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240
#define HIGH_RES_SCREEN_WIDTH 640
#define HIGH_RES_SCREEN_HEIGHT 480

typedef char *va_list;
#define va_start(vp, parmN) (vp = ((va_list)&parmN + sizeof(parmN)))

typedef struct {
    /* 0x00 */ s16 centerX;
    /* 0x02 */ s16 centerY;
    /* 0x04 */ s16 width;
    /* 0x06 */ s16 height;
    /* 0x08 */ s16 unk_08[16];
} RectDescriptor; // size = 0x28

typedef struct {
    u8 pad0[4];
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} UnkStruct80007D70;

typedef struct {
    /* 0x00 */ s32 state;
    /* 0x04 */ u8 red;
    /* 0x05 */ u8 green;
    /* 0x06 */ u8 blue;
    /* 0x07 */ u8 alpha;
    /* 0x08 */ s32 x;
    /* 0x0C */ s32 y;
    /* 0x10 */ f32 scaleX;
    /* 0x14 */ f32 scaleY;
    /* 0x18 */ char text[0x42];
    /* 0x5A */ u8 pad_5A[6];
    /* 0x60 */ s16 unk_60; // isQueued?
    /* 0x62 */ u16 pad_62;
    /* 0x64 */ s32 unk_64; // delayFrames?
    /* 0x68 */ s32 unk_68;
} UnkStruct80081EA0; // size = 0x6C

typedef union {
    struct {
        u8 unk0;
        u8 unk1;
        u8 unk2;
        u8 unk3;
        u8 pad[0x42-0x4];
    };
    u8 bytes[0x42];
} Unk800823B0; // size = 0x42

typedef struct {
    u8 pad0[0x18];
    u8 unk18;
    u8 pad19[0x6C - 0x19];
} Unk80083C70; // siz: 0x6C

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x28-0x10];
    s16 unk28;
    u16 pad2A;
    u16 pad2C;
    s16 unk2E;
    s8 unk30;
    s8 unk31;
} Unk80050860;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s32 unk8;
    s16 unkC;
    u16 padE;
} Unk80084B30; // size = 0x10

typedef struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    s32 unk10;
    s32 unk14;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 pad1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 pad26;
    u16 unk28;
    u16 unk2A;
    s8 unk2C;
    s8 unk2D;
    s8 pad2E;
    s8 unk2F;
} Unk80087758; // size = 0x30

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    u8 pad18[0x28 - 0x18];
} Unk80059164; // size = 0x28

// struct for D_80081E64 ? some sort of view buffer?
typedef struct {
    u16 unk0[1/*unknown size*/][0x140];
} Unk8000BA44;

typedef struct {
    u8 pad0[0x7DF0];
    s32 unk7DF0[120][20];
} Unk8000BD70;

extern Unk80083C70 D_80083C70[30];

// .bss
u8 D_800789D0[0x7E0];
OSThread D_800791B0;
u8 D_80079360[OS_SC_STACKSIZE];
OSMesg D_8007B360[200];
OSMesgQueue D_8007B680;
u8 D_8007B698[OS_SC_STACKSIZE];
OSSched D_8007D698;
OSMesgQueue D_8007D920;
OSMesg D_8007D938[32];
OSMesgQueue D_8007D9B8;
OSMesg D_8007D9D0[32];
OSScClient D_8007DA50;
OSPiHandle *D_8007DA58;
OSThread D_8007DA60;
u8 D_8007DC10[OS_SC_STACKSIZE];
u8 D_8007FC10[OS_SC_STACKSIZE];
OSThread D_80081C10;
OSScClient D_80081DC0;
OSMesgQueue D_80081DC8;
OSMesg D_80081DE0[32];
u16* D_80081E60;
u16* D_80081E64;
u16* D_80081E68;
u32 pad_D_80081E6C;
u32 D_80081E70;
u32 D_80081E74;
u32 D_80081E78;
u32 D_80081E7C;
u32 D_80081E80;
u32 D_80081E84;
u32 D_80081E88;
s32 D_80081E8C;
s32 D_80081E90;
s32 padD_80081E94;
s32 padD_80081E98;
s32 padD_80081E9C;
UnkStruct80081EA0 D_80081EA0[12];
Unk800823B0 D_800823B0[12];
u8 pad_D_800826C8[2440];
s32 D_80083050;
s32 D_80083054;
s32 D_80083058;
Gfx* D_8008305C;
u32 D_80083060;
void* D_80083064;
s32 D_80083068;
// extern u8 D_80083070[0xC00];
// extern u8 D_80083C70[0x18];
// extern u8 D_80083C88[0x6C];
// extern u8 D_80083CF4[0x54];
// extern u8 D_80083D48[0xBD0];
// extern u8 D_80084918[0x108];
// extern u8 D_80084A20[0x04];
// extern u8 D_80084A24[0x04];
// extern u8 D_80084A28[0x100];
// extern u8 D_80084B28[0x08];
extern Unk80084B30 D_80084B30[42];
// extern u8 D_80084F50[0x2800];
extern s32 D_80087750;
extern u8 D_80087754[0x4]; // pad?
extern Unk80087758 D_80087758[2][30][66];
// u8 D_8009EA98[0x17348];
// extern u8 D_800B5DE0[0x21B0];
// extern u8 D_800B7F90[0x08];
// extern u8 D_800B7F98[0x18];
// extern u8 D_800B7FB0[0x80];
// extern u8 D_800B8030[0x08];
extern Mtx D_800B8038[2];
extern Mtx D_800B80B8[4][2];
extern Mtx D_800B82B8[4][2];
extern Vtx D_800B84B8[][16];

// .data
extern u32 D_800351E0; // = 0;
extern u32 D_800351E4; // = 0;
extern u32 D_800351E4_LOAD; // ?
extern char D_800351EC[]; // = "01";
extern char D_800351F0[]; // = "DMPJ";
extern u16 D_800351F8; // = 0;
extern u16 D_800351FC[5304]; // = { 1 };
extern char D_80037B6C[];
extern char D_80037B90[];
extern char D_80037C1C[];
extern char D_80037C90[];
extern char D_80037CBC[];
extern u32 D_80037D20[3]; // = { 0 };
extern s32 D_80037D24;
extern u8 D_80037D2C; // = 0;
extern RectDescriptor D_80037D30[5];
extern s32 D_80037E20[4]; // static GBI commands
extern s32 D_80037E30[4]; // static GBI commands
extern s32 D_80037E40[8]; // static GBI commands
extern s32 D_80037E60[50]; // static GBI commands
extern char D_80037F28[];
extern u8 D_80037F3C; // = 0x81;
extern u8 D_80037F3D[12];
extern s32 D_80037F50[3]; // = { 0 };
extern OSMesgQueue D_80037F5C; // = { 0 };
extern OSMesg D_80037F74[8][16]; // = { 0 };
// TODO: too early to determine the range of these
extern u8 D_80038188[0x8003FF50 - 0x80038188];
extern u8 D_8003FF50[0xC000 - ARRAYCOUNT(D_80038188)];
extern u8 D_800442A8[0x8004FF50 - 0x800442A8];
extern u8 D_8004FF50[0xC000 - ARRAYCOUNT(D_800442A8)];
extern s16 D_800502A8[16]; // = { 0 };
extern s32 D_800502C8; // = 0;
extern s32 D_800502CC; // = 0;
extern s32 D_800502D0; // = 0;
extern s32 D_800502D4; // = 0;
extern s32 D_800502D8; // = 0xAB;
extern s32 D_800502E0[16]; // actually a struct
extern u16 D_80050320; // = 0;
// -- file split here?
extern s32 D_80050334; // = 0;
extern s32 D_80050338; // = 0;
extern u16 D_8005033C; // = 0;
extern u16 D_80050340; // = 0;
extern s32 D_80050344; // = 0;
extern s32 D_80050348; // = 1;
extern s32 D_8005034C; // = 0;
extern s32 D_80050350; // = 0;
extern s16 D_80050354[]; // = { 0x00A0, 0x0028, 0x00E0, 0x0012, 0x1A1A, 0x1AFF, 0x1A1A, 0x1AFF, 0x1A1A, 0x1AFF, 0x1A1A, 0x1AFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };
// the next three vars might all be part of D_80050382
extern s16 D_8005037C; // = 0xA0;
extern s16 D_8005037E; // = 0x1F;
extern s16 D_80050380; // = 0xE0;
extern s16 D_80050382[]; // = { 0x0002, 0xC8C8, 0xC8FF, 0x6E6E, 0x6EFF, 0xC8C8, 0xC8FF, 0x6E6E, 0x6EFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };
// the next three vars might all be part of D_800503AA
extern s16 D_800503A4; // = 0x00A0;
extern s16 D_800503A6; // = 0x0031;
extern s16 D_800503A8; // = 0x00E0;
extern s16 D_800503AA[]; // = { 0x0002, 0x6E6E, 0x6EFF, 0x3C3C, 0x3CFF, 0x6E6E, 0x6EFF, 0x3C3C, 0x3CFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };
// the next three vars might all be part of D_800503D2
extern s16 D_800503CC; // = 0x0030;
extern s16 D_800503CE; // = 0x0028;
extern s16 D_800503D0; // = 0x0002;
extern s16 D_800503D2[]; // = { 0x0012, 0xC8C8, 0xC8FF, 0xC8C8, 0xC8FF, 0x6E6E, 0x6EFF, 0x6E6E, 0x6EFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };
extern s16 D_800503F4[]; // = { 0x0110, 0x0028, 0x0002, 0x0012, 0x6E6E, 0x6EFF, 0x6E6E, 0x6EFF, 0x3C3C, 0x3CFF, 0x3C3C, 0x3CFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };
extern s32 D_8005041C; // = 0;
extern s32 D_80050420; // = 0;
// -- file split here?
extern s32 D_80050438; // = 0;
extern s32 D_8005043C[]; // size of 13? all 0s
extern s32 D_80050470[]; // size of 11? all 0s
extern s32 D_8005049C[]; // size of 0x60?
extern s32 D_8005061C[]; // size of 0x30?
extern s32 D_800506DC[]; // size of 0x20?
extern s8 D_8005075C[]; // size of 0x100?
extern s32 D_8005085C;
extern Unk80050860 D_80050860;
extern u8 D_800508A4; // = 0xFF;
extern u8 D_800508A8; // = 0xFF;
extern u8 D_800508AC; // = 0xFF;
extern u8 D_800508B0; // = 0xFF;
extern s32 D_800508B4; // = 0;
extern s32 D_800508B8; // = 0;
extern s32 D_800508BC; // = 0x28;
extern s32 D_800508C0; // = 1;
extern f32 D_800508C4; // = 1.0f;
extern f32 D_800508C8; // = 1.0f;
extern u16 D_800508CC[]; // size of 0x88?
extern s32 D_800509DC[]; // this is a struct
extern s16 D_800509EC[]; // size of 0x200?
extern s32 D_80050DEC[]; // Maybe an array of gbi commands? size of 0x380?
extern s32 D_80051BEC[]; // array of values between 0-4, size of 0x120?
extern u8 D_8005206C[0x80];
extern u8 D_800520EC[];
extern u8 D_800520ED[0x16B];
extern s32 D_80052258[]; // array of gbi commands? size of 10
extern s32 D_80052280[]; // array of gbi commands? size of 16
extern s32 D_800522C0[]; // array of gbi commands? size of 0x96?
extern s32 D_80052518[]; // array of gbi commands? size of 14
extern s32 D_80052550[]; // array of gbi commands? size of 0x74?
extern u32 D_80052720[7];
extern s32 D_8005273C[9];
extern s32 D_80052760[17];
extern s32 D_800527A4[]; // maybe a struct? passed into func_8000B768 as 5th arg (sp10)
extern s32 D_80058744[]; // maybe a struct? passed into func_8000BA44 as 5th arg (sp10)
extern Unk80059164 D_80059164[2];
extern s32 D_800591B8[4];
extern s32 D_800591C8[4];
extern s32 D_800591D8[8]; // array of gbi commands?
extern s32 D_800591F8[]; // array of gbi commands? size of 0x20?
extern s32 D_80059278;

// src/main data
extern s32 D_8011F524;
extern u32 D_8011F4FC;
extern u32 D_8011F4FC_LOAD;
extern u8 D_801243E8[];
extern s32 D_80126620;

// unknown data
extern u8 D_80315AE0[];
extern u16* D_80000318;
extern s32 gMfsError;
extern u8 D_80076428[];
extern u8 diskQBuf[];
extern char D_8005B594[];
extern char D_8005BA30[];
extern char D_8005BA60[];
extern char D_8005BA6C[];
extern char D_8005BAAC[];
extern u32 D_19;
extern u32 D_19_ALT;
extern u32 D_3B;
extern u8 func_800BD8E0[];
extern u8 D_8015F340[];
extern u8 func_801F6EB0[];

extern s32 func_80002030;
extern s32 D_80037E20[];
extern s32 D_80037E30[];

extern u16 D_8015F620;

// .data
u16 D_800351D0 = SCREEN_HEIGHT;
u16 D_800351D4 = SCREEN_WIDTH;
u16 D_800351D8 = 1;
u16* D_800351DC = 0;

// forward declarations
void func_800013D4(void *arg);
void func_80001450(void *arg);
void func_800014D4(void);
void func_8000152C(void);
void func_800015BC(void *arg);
void func_80001B00(void);
void func_80001C98(void);
void func_80002788(void);
void func_8000327C(void *arg);
void func_800050B0(void);
void func_80003AC0(void);
void func_80003D60(void);
void func_80003570(char* str, s32 arg1, s32 screenWidth, s32 (*callback)());
void func_80003720(char *str, s32 screenWidth);
void func_80003EE8(s32 width, s32 height, s32 *left, s32 *top);
void func_80004594(char *text, s32 x, s32 y, u8 red, u8 green, u8 blue);
void func_8000ADF0(void);
void func_8000AE58(s32, s32);
void func_8000AE6C(s32, s32);
void func_8000AE80(f64, f64);
void func_8000AE9C(u8, u8, u8, u8);
void func_8000AED0(s8*, s32);

// defined in 20B20.s
s32 Mfs_CreateLeoManager(s32 arg0, void *arg1, s32 arg2);
s32 Mfs_ReadLBA(u32 startLba, void *dst, u32 lbaCount);
s32 func_800273FC(void);
s32 func_800275B0(void);
void func_80027680(s32 arg0, s32 arg1, char *arg2);
s32 func_80027B4C(void);
void Mfs_SetGameCode(char *arg0, char *arg1);
void func_800283E4(void);
s32 Mfs_CopyRamAreaFromBackup(void);
void func_80029DEC(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);

// defined in main/787C8.s
void func_800BDB80(void *arg);
void func_800D7800(s32 arg0);
void func_800D78A4(char *arg0, char *arg1, s32 arg2);
s32 func_800C1484(void);
void func_800C28A0(void);

s32 func_80023690(s32, s32);

s32 func_800046DC(void);

void RenderText(s32, s32, s32, s32, s32);
void func_8000A5F0(s32, s32, s32, s32, s32);

void func_80001360(void *arg) {
    osInitialize();
    D_80037D20[1] = 0;
    D_80037D20[2] = 0;
    D_80037F50[2] = 0;
    osCreateThread(&D_800791B0, THREAD_ID_IDLE, func_800013D4, arg, D_80079360 + sizeof(D_80079360), 9);
    osStartThread(&D_800791B0);
}

void func_800013D4(void *arg) {
    func_800014D4();
    osCreateThread(&D_8007DA60, THREAD_ID_MAIN, func_80001450, arg, D_8007DC10 + sizeof(D_8007DC10), 10);
    osStartThread(&D_8007DA60);
    osSetThreadPri(NULL, OS_PRIORITY_IDLE);
    while (TRUE) {}
}

void func_80001450(void *arg) {
    D_80052720[0] = 0;
    D_80052720[4] = 0;
    func_800015BC(arg);
    func_80001B00();
    func_80002788();
    func_80001C98();
    D_800351E0 = 1;
    D_80037D20[1] = 1;
    func_800D7800(0);
    func_8000152C();

    while (TRUE) {
        func_800BDB80(arg);
    }
}

void func_800014D4(void) {
    u8 *stackPtr;
    s32 i;

    stackPtr = D_8007DC10;
    for (i = 0; i < sizeof(D_8007DC10); ++i) {
        *stackPtr++ = 0xCC;
    }

    D_8007DC10[0] = 'H';
    D_8007DC10[1] = 'E';
    D_8007DC10[2] = 'A';
    D_8007DC10[3] = 'D';
}

void func_8000152C(void) {
    u8 *stackPtr0;
    u8 *stackPtr1;
    s32 i;

    stackPtr0 = D_80038188;
    stackPtr1 = D_800442A8;
    for (i = 0; i < 0xC000; ++i) {
        *stackPtr0++ = 0xCC;
        *stackPtr1++ = 0xCC;
    }

    D_8003FF50[0x4234] = 'T';
    D_8003FF50[0x4235] = 'A';
    D_8003FF50[0x4236] = 'I';
    D_8003FF50[0x4237] = 'L';

    if (D_8004FF50);

    D_8004FF50[0x354] = 'T';
    D_8004FF50[0x355] = 'A';
    D_8004FF50[0x356] = 'I';
    D_8004FF50[0x357] = 'L';
}

void func_800015BC(void *arg) {
    D_8007DA58 = osDriveRomInit();
    osCreateViManager(OS_PRIORITY_VIMGR);
    osCreatePiManager(OS_PRIORITY_PIMGR, &D_8007B680, D_8007B360, 200);
    osCreateMesgQueue(&D_8007D9B8, D_8007D9D0, 32);
    osCreateScheduler(&D_8007D698, &D_8007B698[OS_SC_STACKSIZE], 15, 2, 1);
    osCreateMesgQueue(&D_8007D920, D_8007D938, 32);
    osScAddClient(&D_8007D698, &D_8007DA50, &D_8007D920);
    osCreateMesgQueue(&D_80081DC8, D_80081DE0, 32);
    osScAddClient(&D_8007D698, &D_80081DC0, &D_80081DC8);
    osCreateThread(&D_80081C10, 7, func_8000327C, arg, D_8007FC10 + sizeof(D_8007FC10), 11);
    osStartThread(&D_80081C10);
    func_800016F8(0);
    func_800050B0();
}

void func_800016F8(u16 arg0) {
    u32 i;
    u32 bufferBase;
    u32 pixelCount;
    u32 frameBytes;

    D_800351D8 = arg0;

    switch (arg0) {
    case 1:
        D_800351D4 = SCREEN_WIDTH;
        D_800351D0 = SCREEN_HEIGHT;
        break;
    case 0:
        D_800351D4 = HIGH_RES_SCREEN_WIDTH;
        D_800351D0 = HIGH_RES_SCREEN_HEIGHT;
        break;
    }

    D_80081E60 = (u16 *) ((((u32) (D_80315AE0) + 0x3F) >> 6) << 6);

    frameBytes = D_800351D4 * D_800351D0;
    D_800351DC = D_80081E60 + frameBytes + 0x200;
    D_80081E68 = (u16 *) ((u32) (D_80000318 - frameBytes) + 0x80000000 - 0x2000);
    D_80081E64 = D_80081E68 - frameBytes;

    if (((D_80052720[0] & 1) == 0) || (D_8011F524 == 8)) {
        for (i = 0; i < D_800351D4 * D_800351D0; i++) {
            D_80081E64[i] = D_80081E68[i] = 0;
        }
    }

    D_80081E70 = (u32)D_80081E64 - (u32)D_800351DC;

    switch (arg0) {
        case 1:
            if (osTvType == OS_TV_NTSC) {
                osViSetMode(&osViModeTable[2]);
                break;
            }
            while (TRUE) {}
        case 0:
            if (osTvType == OS_TV_NTSC) {
                osViSetMode(&osViModeTable[11]);
                break;
            }
            while (TRUE) {}
        default:
            break;
    }

    osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON);
    osViSetXScale(1.0f);
    osViSetYScale(1.0f);
    osViSetSpecialFeatures(OS_VI_DIVOT_ON | OS_VI_GAMMA_DITHER_OFF | OS_VI_GAMMA_OFF);
    osViSwapBuffer(D_80081E64);
}

void func_80001A44(void) {
    u32 *frameBuffer0;
    u32 *frameBuffer1;
    u32 i;
    s32 count;

    frameBuffer0 = K0_TO_K1(D_80081E64);\
    frameBuffer1 = K0_TO_K1(D_80081E68);

    switch (D_800351D8) {
        case 0:
            count = 0x25800;
            break;

        case 1:
            count = 0x9600;
            break;
    }

    for (i = 0; i < count; i++) {
        *frameBuffer0++ = *frameBuffer1++ = 0;
    }
}

// TODO: split into leoerror.c here

void func_80001B00(void) {
    s32 state;
    s32 retryCount;
    s32 status;

    retryCount = 0;
    Mfs_SetGameCode(D_800351EC, D_800351F0);
    if (Mfs_CreateLeoManager(0, diskQBuf, 1) < 0) {
        DisplayDiskError(gMfsError);
        while (TRUE) {} // hangs on error
    }

    do {
        status = func_800273FC();
        state = gMfsError;
        if (status == -1) {
            state = DisplayDiskError(gMfsError);
            func_80001A44();
        }
    } while (state == 0x64);

    bcopy(D_80076428, D_801243E8, 0x20);

    while (TRUE) {
        status = func_80027B4C();
        if (status <= 0) {
            if (retryCount == 0) {
                Mfs_CopyRamAreaFromBackup();
                retryCount++;
            } else if (retryCount == 1) {
                func_80027680(1, 0, D_8005B594);
                retryCount++;
            } else {
                DisplayDiskError(gMfsError);
                retryCount = 0;
            }
        } else if (status == -1) {
            retryCount = 0;
            func_800283E4();
            DisplayDiskError(gMfsError);
        } else {
            break;
        }
    }

    func_80029DEC(&D_80081E74, &D_80081E78, &D_80081E7C, &D_80081E80, &D_80081E84, &D_80081E88);
}

void func_80001C98(void) {
    u32 size;
    u32 lbaCount;

    size = func_80001F20((u32) &D_19, (u32) &D_3B, &lbaCount);
    func_80001D0C((u32) &D_19_ALT, func_800BD8E0, lbaCount);
    osInvalICache(func_800BD8E0, size);
    bzero(D_8015F340, func_801F6EB0 - D_8015F340);
}

s32 func_80001D0C(u32 startLba, void *dst, u32 lbaCount)
{
    u32 oldReadState;
    u32 oldRetryTimer;
    u32 old83060;
    volatile s32 savedStatus;
    s32 status;
    s32 error;

    oldReadState = D_800351E4_LOAD;
    oldRetryTimer = D_8011F4FC_LOAD;
    old83060 = D_80083060;
    D_800351F8 = 0;

    if (D_800351E0 != 0) {
        if ((D_80052720[4] != 0) && (D_80052720[0] & 1)) {
            while (TRUE) {}
        }
    }

    D_800351E4 = 1;
    D_8011F4FC = 0;

    do {
        status = Mfs_ReadLBA(startLba, dst, lbaCount);
        error = gMfsError;
        if (status == -1) {
            error = DisplayDiskError(gMfsError);
        }
    } while (error == 100);

    D_800351E4 = oldReadState;
    savedStatus = status;
    D_80083060 = old83060;
    if (oldRetryTimer != 0) {
        D_8011F4FC = 20;
    }

    return 1;
}

s32 func_80001E54(u32 devAddr, void *dramAddr, u32 size) {
    OSIoMesg mb;
    OSMesg msg;

    if (D_80037D20[1] != 0) {
        if ((D_80052720[4] != 0) && (D_80052720[0] & 1)) {
            while (TRUE) {}
        }
    }

    osInvalDCache(dramAddr, size);

    mb.hdr.pri = 0;
    mb.hdr.retQueue = &D_8007D9B8;
    mb.dramAddr = dramAddr;
    mb.devAddr = devAddr;
    mb.size = size;
    D_8007DA58->transferInfo.cmdType = 2;
    osEPiStartDma(D_8007DA58, &mb, 0);
    osRecvMesg(&D_8007D9B8, &msg, 1);

    return 1;
}

u32 func_80001F20(u32 startLba, u32 endLba, u32 *lbaCount) {
    s32 startByte;
    s32 endByte;

    if ((D_800351E0 != 0) && (D_80052720[4] == 1)) {
        while (TRUE) {}
    }

    LeoLBAToByte(0, startLba, &startByte);
    LeoLBAToByte(0, endLba, &endByte);
    *lbaCount = endLba - startLba;
    return endByte - startByte;
}

void func_80001FA8(void) {
    func_80023690(0xB1FF0014, 0);
    func_80023690(0xB1FF0004, 0);
    func_80023690(0xB1FF0000, 0x49533634);
}

// Big thanks to inspectredc for matching this function!
// https://decomp.me/scratch/CuWBl
// https://github.com/inspectredc
void func_80001FF0(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    
    _Printf(&func_80002030, NULL, fmt, args);
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80002030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800021E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80002788.s")

s32 func_80002AA0(void) {
    
    while (func_800275B0() == 1) {}
    while (func_800275B0() == 0) {}

    func_800273FC();
    bcopy(D_80076428, D_801243E8, 0x20);

    return 1;
}

s32 func_80002B20(void) {
    while ((func_800275B0() == 1) && (gMfsError != 0x2F)) {}

    return 1;
}

void func_80002B90(s32 arg0) {
    u8 *digitPtr;
    s32 hundreds;
    s32 remainder;
    s32 value;
    s32 tens;

    if (1) {
        digitPtr = &D_80037F3C;
        value = arg0;
        remainder = value % 100;
        value -= remainder;
        hundreds = value / 100;
    }
    value = arg0;

    if (hundreds == 0) {
        *digitPtr++ = 0x81;
        *digitPtr++ = 0x40;
    } else {
        *digitPtr++ = 0x82;
        *digitPtr++ = hundreds + 0x4F;
    }

    *digitPtr++ = 0x82;
    value -= hundreds * 100;
    remainder = value % 10;
    tens = (value - remainder) / 10;
    *digitPtr++ = tens + 0x4F;
    *digitPtr++ = 0x82;
    value -= tens * 10;
    *digitPtr = value + 0x4F;
}

// matches but need to match .rodata for jumptable
#ifdef NON_MATCHING
s32 DisplayDiskError(s32 arg0) {
    s32 status;

    D_80037D2C = 1;
    func_80002B90(arg0);

    switch (arg0) {
        case 23:
            if (Mfs_CopyRamAreaFromBackup() == 0) {
                if (D_800351F8 < 8) {
                    D_800351F8++;
                    break;
                }
            }

        case 34:
        case 35:
            func_80003570(D_80037B6C, 1, 0xF8, func_80002AA0);
            D_800351F8 = 0;
            break;

        case 2:
            func_80003570(D_80037C90, 1, 0xF8, func_80002B20);
            D_800351F8 = 0;
            break;

        case 49:
            func_80003570(D_80037B90, 1, 0xF8, func_800275B0);
            D_800351F8 = 0;
            break;

        case 47:
            D_80037D2C = 0;
            do {
                status = func_800273FC();
                if (status == -1 && gMfsError == 0x2A) {
                    func_80003570(D_80037C1C, 1, 0xF8, func_800275B0);
                    status = 100;
                    D_800351F8 = 0;
                }
            } while (status == -1 && gMfsError == 0x31);

            if (status != -1 || (status == -1 && gMfsError != 1)) {
                bcopy(D_80076428, D_801243E8, 0x20);
                while (func_8000314C(D_80076428, leoBootID, sizeof(leoBootID)) == 0) {
                    func_80003570(D_80037CBC, 1, 0xF8, func_80002AA0);
                }
            } else {
                if (++D_800351F8 >= 9) {
                    D_80037D2C = 1;
                    func_80002B90(gMfsError);
                    func_80003570(D_80037B6C, 1, 0xF8, func_80002AA0);
                    D_800351F8 = 0;
                    bcopy(D_80076428, D_801243E8, 0x20);
                    D_80037D2C = 0;
                    while (func_8000314C(D_80076428, leoBootID, sizeof(leoBootID)) == 0) {
                        func_80003570(D_80037CBC, 1, 0xF8, func_80002AA0);
                    }
                }
            }
            if (D_80037D20[1] != 0) {
                func_800C28A0();
            }
            break;

        case 42:
            D_80037D2C = 0;
            func_80003570(D_80037C1C, 1, 0xF8, func_800275B0);
            D_800351F8 = 0;
            break;

        case 0x10A:
            if (Mfs_CopyRamAreaFromBackup() != 0) {
                D_80037D2C = 1;
                func_80002B90(gMfsError);
                func_80003570(D_80037B6C, 1, 0xF8, func_80002AA0);
            }
            D_800351F8 = 0;
            break;

        default:
            func_80003570(D_80037B6C, 1, 0xF8, func_80002AA0);
            D_800351F8 = 0;
            break;
    }

    return 100;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/DisplayDiskError.s")
#endif

void func_800030B0(u8* arg0, u8* arg1) {
    u8 temp_v0;

    temp_v0 = *arg0;
    arg1++;
    arg0++;
    *(arg1 - 1) = temp_v0;
    
    if (temp_v0 != 0) {
        do {
            temp_v0 = *arg0;
            arg1++;
            arg0++;
            *(arg1 - 1) = temp_v0;
        } while (temp_v0 != 0);
    }
}

// Function matched by Bl00D4NGEL (Dominik Peters)
// https://decomp.me/scratch/UQRe7
// https://github.com/Bl00D4NGEL
void func_800030E0(u8* arg0, u8* arg1, s32 arg2) {
    s32 i;

    for (i = 0; i != arg2; i++) {
        *arg1++ = *arg0++;
    }
}

s32 func_8000314C(u8 *a, u8 *b, u32 size) {
    s32 i;
    s32 mismatch;

    i = 0;
    while (i != size) {
        mismatch = (*b++ != *a++);
        if (mismatch) {
            return 0;
        }
        i++;
    }
    return 1;
}

// Function matched by an anonymous user on decomp.me
s32 func_8000324C(u8* arg0) {
    s32 i;
    u8 temp_v0;
    u8* var_a0;

    i = 0;
    while (*arg0++) {
        i++;
    }
    return i;
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000327C.s")

void func_80003570(char* str, s32 arg1, s32 screenWidth, s32 (*callback)())
{
    s32 i;
    s32 done;
    s32 limit;
    u8 changedResolution;

    done = 0;
    changedResolution = 0;
    if (D_800351D4 == HIGH_RES_SCREEN_WIDTH) {
        changedResolution = 1;
        D_800351D4 = SCREEN_WIDTH;
        D_800351D0 = SCREEN_HEIGHT;
        osViSetMode(&osViModeTable[2]);
        osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON);
        osViSetSpecialFeatures(OS_VI_DIVOT_ON | OS_VI_GAMMA_DITHER_OFF | OS_VI_GAMMA_OFF);
    }

    D_80037D20[0] |= 1;
    func_80003720(str, screenWidth);

    if (done == 0) {
        i = 0;
        do {
            func_80005108();
            if (D_80037D20[1] != 0) {
                func_800C1484();
            }
            func_80003AC0();
            func_80005384();
    
            switch (arg1) {
                case 0:
                    break;
                case 1:
                    if (callback != 0 && i >= 5 && callback() != 0) {
                        done = 1;
                    }
                    break;
                default:
                    break;
            }
            i++;
        } while (done == 0);
    }

    if (changedResolution != 0) {
        D_800351D4 = HIGH_RES_SCREEN_WIDTH;
        D_800351D0 = HIGH_RES_SCREEN_HEIGHT;
        func_80001A44();
        osViSetMode(&osViModeTable[11]);
        osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON);
        osViSetSpecialFeatures(OS_VI_DIVOT_ON | OS_VI_GAMMA_DITHER_OFF | OS_VI_GAMMA_OFF);
    }

    for (i = 0; i < 4; i++) {
        func_80005108();
        func_80003D60();
        func_80005384();
    }

    func_80005108();
    D_80037D20[0] &= ~1;
}


void func_80003720(char *str, s32 screenWidth) {
    s32 left;
    s32 top;
    s32 i;
    s32 charWidth;
    s32 lineCount;
    s32 col;
    s32 byteOff;
    s32 charsInLine;
    s32 firstLineChars;
    s32 pad[2];

    for (i = 0; i < 12; i++) {
        D_80081EA0[i].state = 0;
    }

    if (*str == 0) {
        return;
    }

    while (*str++);

    byteOff = str[0] << 8;
    byteOff += str[1];
    if (byteOff == 0xFFFF) {
        charWidth = 16;
        str += 2;
    } else {
        charWidth = 8;
    }

    // D_800826C8 - 800823B0 = 0x318 / 792
    for (i = 0; i < 12; i++) {
        for (byteOff = 0; byteOff < 0x42; byteOff++) { // 66
            D_800823B0[i].bytes[byteOff] = 0;
        }
    }
    lineCount = 1;
    col = 0;

    if (charWidth == 16) {
        byteOff = 4;
        D_800823B0[0].unk0 = 'a';
        D_800823B0[0].unk1 = 0;
        D_800823B0[0].unk2 = 0xFF;
        D_800823B0[0].unk3 = 0xFF;
    } else {
        byteOff = 2;
        D_800823B0[0].unk0 = 'a';
        D_800823B0[0].unk1 = 0;
    }

    i = 0;
    charsInLine = 0;
    firstLineChars = 0;

    while (str[0] != 0 || str[1] != 0) {
        if (col >= screenWidth - charWidth - 2 || *str == 0xA) {
            if (*str == 0xA) {
                str++;
            }
            col = 0;
            if (firstLineChars == 0) {
                firstLineChars = charsInLine;
            }
            lineCount++;
            i++;
            if (i >= 12) {
                func_800D78A4(D_8005BA30, D_8005BA60, 0x18F);
            }
            if (charWidth == 16) {
                byteOff = 4;
                D_800823B0[i].unk0 = 'a';
                D_800823B0[i].unk1 = 0;
                D_800823B0[i].unk2 = 0xFF;
                D_800823B0[i].unk3 = 0xFF;
            } else {
                byteOff = 2;
                D_800823B0[i].unk0 = 'a';
                D_800823B0[i].unk1 = 0;
            }
        }
        D_800823B0[i].bytes[byteOff++] = *(str++);
        D_800823B0[i].bytes[byteOff++] = *(str++);
        charsInLine++;
        if (byteOff >= 0x42) {
            func_800D78A4(D_8005BA6C, D_8005BAAC, 0x1A8);
        }
        col += charWidth;
    }

    func_80003EE8(screenWidth, charWidth * lineCount + 4, &left, &top);

    if (D_80037D2C != 0) {
        func_80004594(D_80037F28, 80, 43, 0xFF, 0xFF, 0xFF);
    }

    for (i = 0; i < lineCount; i++) {
        func_80004594(D_800823B0[i].bytes, 48, top + 2, 0xFF, 0xFF, 0xFF);
        top += charWidth;
    }
}

s32 func_80003A98(void) {
    if (D_8015F620 & 0x100) {
        return 1;
    }
    return 0;
}

// There's probably a file split here which could explain why these 2 functions match on decomp.me but not here for some reason.
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80003AC0.s")
#else
// https://decomp.me/scratch/uXM98
void func_80003FE0(Gfx**);          /* extern */
extern u32 D_317F0[];
extern u32 D_769A0[];

void func_80003AC0(void) {
    s32 color;
    s32 pad0;
    s32 pad1;

    gDPSetColorImage(D_8008305C++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800351D4, osVirtualToPhysical(D_80083064));
    gSPDisplayList(D_8008305C++, D_80037E60);
    gDPSetScissor(D_8008305C++, G_SC_NON_INTERLACE, 0, 0, D_800351D4, D_800351D0);

    if (D_800351D4 == 0x140) {
        gSPViewport(D_8008305C++, D_80037E20);
    } else {
        gSPViewport(D_8008305C++, D_80037E30);
    }

    gSPDisplayList(D_8008305C++, D_80037E40);
    gDPSetCycleType(D_8008305C++, G_CYC_FILL);
    color = GPACK_RGBA5551(0, 0, 0, 1);
    gDPSetFillColor(D_8008305C++, (color << 16) | color);
    gDPFillRectangle(D_8008305C++, 0, 0, D_800351D4 - 2, D_800351D0 - 2);
    gSPDisplayList(D_8008305C++, D_80052280);
    gSPLoadUcode(D_8008305C++, D_317F0, D_769A0);
    gDPPipeSync(D_8008305C++);
    func_80003FE0(&D_8008305C);
}
#endif

#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80003D60.s")
#else
// this should match but doesn't seem to?
// https://decomp.me/scratch/2bzEn
void func_80003D60(void) {
    s32 pad[3];

    gDPSetColorImage(D_8008305C++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800351D4, osVirtualToPhysical(D_80083064));
    gSPDisplayList(D_8008305C++, D_80037E60);
    if (D_800351D4 == 0x140) {
        {
            Gfx *_g = D_8008305C++;\
            _g->words.w0 = 0xDC080008;\
            _g->words.w1 = (u32) D_80037E20;
        }        
    } else {
        {
            Gfx *_g = D_8008305C++;\
            _g->words.w0 = 0xDC080008;\
            _g->words.w1 = (u32) D_80037E30;
        }
    }
    gSPDisplayList(D_8008305C++, D_80037E40);
    gDPSetCycleType(D_8008305C++, G_CYC_FILL);
    gDPSetFillColor(D_8008305C++, 0x00010001);
    gDPFillRectangle(D_8008305C++, 0, 0, (D_800351D4 - 2), (D_800351D0 - 2));
}
#endif

void func_80003EE8(s32 width, s32 height, s32 *left, s32 *top) {
    s32 halfScreenWidth;
    s32 halfScreenHeight;
    s32 halfWidth;
    s32 halfHeight;
    RectDescriptor *rects;

    halfScreenWidth = D_800351D4 / 2;
    halfScreenHeight = D_800351D0 / 2;
    rects = D_80037D30;

    halfWidth = width / 2;
    *left = halfScreenWidth - halfWidth;

    halfHeight = height / 2;
    *top = halfScreenHeight - halfHeight;

    rects[0].centerY = halfScreenHeight;
    rects[0].centerX = halfScreenWidth;

    rects[1].centerY = rects[0].centerY - halfHeight - 1;
    rects[1].height = 2;
    rects[2].centerY = rects[0].centerY + halfHeight + 1;
    rects[2].height = 2;
    rects[3].centerX = rects[0].centerX - halfWidth - 1;

    rects[0].width = width;
    rects[0].height = height;
    rects[1].centerX = halfScreenWidth;
    rects[1].width = width;
    rects[2].centerX = halfScreenWidth;
    rects[2].width = width;
    rects[3].centerY = halfScreenHeight;
    rects[3].width = 2;
    rects[3].height = height + 4;
    rects[4].centerX = rects[0].centerX + halfWidth + 1;
    rects[4].centerY = halfScreenHeight;
    rects[4].width = 2;
    rects[4].height = height + 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80003FE0.s")

void func_80004594(char *text, s32 x, s32 y, u8 red, u8 green, u8 blue) {
    s32 slotIdx;
    s32 charIdx;

    for (slotIdx = 0; slotIdx < 12; ++slotIdx) {
        if (D_80081EA0[slotIdx].state == 0) {
            D_80081EA0[slotIdx].state = 2;
            D_80081EA0[slotIdx].red = red;
            D_80081EA0[slotIdx].green = green;
            D_80081EA0[slotIdx].blue = blue;
            D_80081EA0[slotIdx].alpha = 0xFF;
            D_80081EA0[slotIdx].x = x;
            D_80081EA0[slotIdx].y = y;
            D_80081EA0[slotIdx].scaleX = 1.0f;
            D_80081EA0[slotIdx].scaleY = 1.0f;

            for (charIdx = 0; charIdx < 0x42; charIdx++) {
                D_80081EA0[slotIdx].text[charIdx] = text[charIdx];
            }

            D_80081EA0[slotIdx].unk_60 = 1;
            D_80081EA0[slotIdx].unk_64 = 0;
            return;
        }
    }
}

// Function matched by Bl00D4NGEL (Dominik Peters)
// https://decomp.me/scratch/6xXYP
// https://github.com/Bl00D4NGEL
int func_80004690(s32 arg0) {
    #define BETWEEN(x, min, max) ((x) >= (min) && (x) < (max))
    return BETWEEN(arg0, 0x30, 0x3A) || BETWEEN(arg0, 0x61, 0x67) || BETWEEN(arg0, 0x41, 0x47);
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800046DC.s")

s32 func_800046F8(s32 arg0) {
    s32 var_v1;

    if (func_800046DC() != 0) {
        var_v1 = arg0 - 0x20;
    } else {
        var_v1 = arg0;
    }
    return var_v1;
}
// Function matched by queueRAM
// https://decomp.me/scratch/Gs7JS
// https://github.com/queueRAM
// needed to return int instead of s32 for some reason
int func_80004730(s32 arg0) {
    return ((arg0 >= 0x30) && (arg0 < 0x3A));
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000474C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800048B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80004914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80004BA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80005078.s")

void func_800050B0(void) {
    D_80083060 = 0;
    D_80037F50[1] = 1;
    D_80037F50[2] = 0;
    *D_800502A8 = 2;
    osCreateMesgQueue(&D_80037F5C, *D_80037F74, 8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80005108.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80005384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800054EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80005528.s")

void func_8000572C(void) {
    OSMesg sp2C;

    if (D_80037F50[1] == 0) {
loop_2:
        osRecvMesg(&D_80037F5C, &sp2C, 1);
        if (*(s16 *) sp2C != 2) {
            if (D_80037F50[1] == 0) {
                goto loop_2;
            }
        }
    }
    D_80037F50[2] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800057B0.s")

void func_8000584C(void) {
    osRecvMesg(&D_8007D920, NULL, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80005878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800078B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80007A28.s")

// file split around here?
#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80007AEC.s")

// Function matched by queueRAM
// https://decomp.me/scratch/Cs1Oz
// https://github.com/queueRAM
void func_80007B20(void) {
    s32 i;

    // unrolled loop, starting at 80083C70
    // broken up into 2x outside loop and 7 iterations of loop 4
    for (i = 0; i < 30; i++) {
        D_80083C70[i].unk18 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80007B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80007D04.s")

void func_80007D64(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[2] = arg1;
    arg0[3] = arg2;
}

void func_80007D70(UnkStruct80007D70 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 temp1 = arg1;
    s32 temp2 = arg2;
    
    *(s32 *)&arg1 = arg1;
    *(s32 *)&arg2 = arg2;
    
    arg0->unk4 = (u8)temp1;
    arg0->unk5 = (u8)temp2;
    arg0->unk6 = (u8)temp2;
    arg0->unk7 = arg4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80007D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80008614.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80008808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800088E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80008938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80008988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80009130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_800095C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/DisplayMessage.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80009B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_80009F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000A008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000A240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000A310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000A448.s")

void func_8000A5AC(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    if (D_80050334 == 0) {
        RenderText(a0, a1, a2, a3, a4);
        return;
    }
    func_8000A5F0(a0, a1, a2, a3, a4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000A5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/RenderText.s")

// Function matched by rbran
// https://decomp.me/scratch/PhSeG
// https://github.com/rbran
s32 func_8000AD54(u8 *arg0) {
    if (D_80050334 == 0) {
        return (arg0[0] << 8) + arg0[1];
    }
    if (arg0[0] >= 0x80) {
        return 0;
    }
    return D_8005206C[arg0[0]];
}

// Function matched by queueRAM
// https://decomp.me/scratch/ghcD8
// https://github.com/queueRAM
u8* func_8000ADA0(u8* arg0, u8 arg1) {
    while ((*arg0 != 0) && (arg1 != *arg0)) {
        arg0++;
    }
    
    if (*arg0 != 0) {
        return arg0;
    } else {
        return NULL;
    }
}

void func_8000ADF0(void) {
    D_800508A4 = 0xFF;
    D_800508A8 = 0xFF;
    D_800508AC = 0xFF;
    D_800508B0 = 0xFF;
    D_800508B4 = 0;
    D_800508B8 = 0;
    D_800508BC = 0x28;
    D_800508C0 = 1;
    D_800508C4 = 1.0f;
    D_800508C8 = 1.0f;
}

void func_8000AE58(s32 arg0, s32 arg1) {
    D_800508BC = arg0;
    D_800508C0 = arg1;
}

void func_8000AE6C(s32 arg0, s32 arg1) {
    D_800508B4 = arg0;
    D_800508B8 = arg1;
}

void func_8000AE80(f64 arg0, f64 arg1) {
    D_800508C4 = (f32)arg0;
    D_800508C8 = (f32)arg1;
}

void func_8000AE9C(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_800508A4 = arg0;
    D_800508A8 = arg1;
    D_800508AC = arg2;
    D_800508B0 = arg3;
}

// Function matched by rbran
// https://decomp.me/scratch/PhO26
// https://github.com/rbran
void func_8000AED0(s8* arg0, s32 arg1) {
    D_80050860.unk4 = (s16) ((D_800508BC * 8) + 8);
    D_80050860.unk6 = (s16) ((D_800508C0 * 0x10) + 8);
    if ((D_80126620 & 2) && (D_80037D24 != 0)) {
        func_800DBAF0(&D_80050860, arg0, D_800508BC, D_800508C0, arg1);
    } else {
        func_8000A5AC(&D_80050860, arg0, D_800508BC, D_800508C0, arg1);
    }
    D_80050860.unk0 = (s16) D_800508B4;
    D_80050860.unk2 = (s16) D_800508B8;
    D_80050860.unk8 = (f32) D_800508C4;
    D_80050860.unkC = (f32) D_800508C8;
}

u8 GetCharWidth(u16 arg0) {
    
    u8 var_v1;

    for(var_v1 =0;var_v1 < 0x88;var_v1++){
    
        if (D_800508CC[var_v1] == arg0) {
            return D_800520EC[var_v1 * 2];
        }
    }
    return 0x10;
}

u8 GetCharKern(u16 arg0) {
    
    u8 var_v1;

    for(var_v1 = 0; var_v1 < 0x88; var_v1++) {
        
        if (D_800508CC[var_v1] == arg0) {
            return D_800520ED[var_v1 * 2];
        }
    }
    return 0;
}

u16 func_8000B054(s32 arg0) {
    *(s32 *)&arg0 = arg0; 
    arg0 = (u8)arg0; 
    return D_800508CC[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000B070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000B0FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000B1E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000B2B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000B368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000B508.s")

void func_8000B768(Unk8000BA44 *arg0, s32 arg1, s32 arg2, s32 arg3, u16 *arg4, s32 arg5, s32 arg6, s32 arg7) {
    f32 temp_f0;
    s32 j;
    s32 i;
    f32 var_f2;
    f32 var_f12;
    f32 var_f14;
    u16* var_v0;
    u16* var_v1;

    D_80052720[6] = arg0;
    var_v0 = &arg0->unk0[arg2][arg1];
    var_v1 = arg4;
    var_v1 += arg3 * arg5 * arg6;
    for (i = 0; i != arg6; i++) {
        for (j = 0; j != arg5; j++) {
            if (D_80052720[4] != 0) {
                temp_f0 = arg7 / 255.0f;

                var_f2 = (*var_v0 >> 11) & 0x1F;
                var_f12 = (*var_v0 >> 6) & 0x1F;
                var_f14 = (*var_v0 >> 1) & 0x1F;

                var_f2 *= temp_f0;
                var_f12 *= temp_f0;
                var_f14 *= temp_f0;

                *var_v0 = (((u32) var_f2 & 0xFFFF) << 0xB) | (((u32) var_f12 & 0xFFFF) << 6) | (((u32) var_f14 & 0xFFFF) << 1) | 1;
                var_v0++;
            } else {
                if (*var_v1 & 1) {
                    *var_v0 = *var_v1;
                    var_v0++;
                    var_v1++;
                } else {
                    *var_v0 = 0;
                    var_v0++;
                    var_v1++;
                }
            }
        }
        var_v0 = (var_v0 - arg5) + 0x140;
    }
}

void func_8000BA44(Unk8000BA44 *arg0, s32 arg1, s32 arg2, u32 arg3, u16* arg4, s32 arg5, s32 arg6, s32 arg7) {
    f32 var_f14;
    f32 var_f20;
    f32 var_f0;
    f32 var_f12;
    f32 var_f2;
    f64 var_f22;
    f32 var_f6;
    f32 var_f8;
    s32 j;
    s32 i;
    u16* var_v0;

    var_v0 = &arg0->unk0[arg2][arg1];
    for (i = 0; i != arg6; i++) {
        for (j = 0; j != arg5; j++) {
            var_f0 = (*var_v0 >> 11) & 0x1F;
            var_f2 = (*var_v0 >> 6) & 0x1F;
            var_f12 = (*var_v0 >> 1) & 0x1F;
            var_f14 = (*arg4 >> 11) & 0x1F;
            var_f6 = (*arg4 >> 6) & 0x1F;
            var_f8 = (*arg4 >> 1) & 0x1F;
            var_f20 = arg7 / 255.0f;
            var_f22 = 1.0 - var_f20;
            var_f0 = (var_f14 * var_f20) + (var_f22 * var_f0);
            var_f2 = (var_f6 * var_f20) + (var_f22 * var_f2);
            var_f12 = (var_f8 * var_f20) + (var_f22 * var_f12);
            if (D_80052720[4] != 0) {
                var_f0 *= var_f20;
                var_f2 *= var_f20;
                var_f12 *= var_f20;
            }
            *var_v0 = (((u32) var_f0 & 0xFFFF) << 11) | (((u32) var_f2 & 0xFFFF) << 6) | (((u32) var_f12 & 0xFFFF) << 1) | 1;
            arg4++;
            var_v0++;
        }
        var_v0 = (var_v0 - arg5) + 0x140;
    }
}

void func_8000BD70(Unk8000BD70 *arg0) {
    u32 v0 = 80;
    u32 v1 = 120;
    u32 *a1 = (u32 *)((u8 *)arg0 + 0x7DF0);
    u32 a2 = 0;
    u32 a0;

    do {
        a0 = 0;
        do {
            a1[0] = 0;
            a1[1] = 0;
            a1 += 2;
            a0 += 4;
        } while (a0 < v0);
        a1 += (0x1E0 / 4);
        a2++;
    } while (a2 < v1);
}

void func_8000BDB4(void* dest, s32 size) {
    osInvalDCache(dest, size);
}

void func_8000BDD4(s16* arg0, s16* arg1, s32 arg2, s32 arg3) {
    s32 temp = arg3;
    s32 temp2;
    s16 *v0 = arg0;
    s16 *v1 = arg1;

    while (temp--) {
        temp2 = arg2;
        while (temp2--) {
            *(v0++) = 0;
            *(v1++) = 0;
        }
    }
}

#ifndef NON_EQUIVALENT
#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000BE24.s")
#else
// https://decomp.me/scratch/NwG4Z
extern u32 D_317F0[];
extern u32 D_769A0[];
void func_8000BE24(void) {
    Vtx* temp_a0;
    Vtx* temp_a2;
    Vtx* temp_a1;
    f32 temp_f0;
    f32 var_f2;
    Unk80059164* var_s0;
    s32 var_s4;
    s32 var_v1;

    gDPSetColorImage(D_8008305C++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800351D4, osVirtualToPhysical(D_80083064));
    gSPDisplayList(D_8008305C++, (u32)D_800591F8);
    gDPSetScissor(D_8008305C++, 0, 0, 0, D_800351D4, D_800351D0);
    if (D_800351D4 == SCREEN_WIDTH) {
        gSPViewport(D_8008305C++, (u32) D_800591B8);
    } else {
        gSPViewport(D_8008305C++, (u32) D_800591C8);
    }

    gSPDisplayList(D_8008305C++, (u32) D_800591D8);

    for (var_s4 = 0; D_80059164[var_s4].unk0 != 0; var_s4++) {
        var_s0 = &D_80059164[var_s4];
        if (var_s0->unk0 != 0) {
            temp_a2 = D_800B84B8[D_80083060];
            temp_a0 = &temp_a2[var_s4 * 4];
            temp_a1 = &temp_a2[var_s4 * 4];
            temp_a0[0].v.ob[0] = var_s0->unk4 / -2;
            temp_a0[0].v.ob[1] = var_s0->unk6 / 2;
            temp_a0[1].v.ob[0] = var_s0->unk4 / 2;
            temp_a0[1].v.ob[1] = var_s0->unk6 / 2;
            temp_a0[2].v.ob[0] = var_s0->unk4 / 2;
            temp_a0[2].v.ob[1] = var_s0->unk6 / -2;
            temp_a0[3].v.ob[0] = var_s0->unk4 / -2;
            temp_a0[3].v.ob[1] = var_s0->unk6 / -2;
            temp_a0[0].v.cn[0] = var_s0->unk8;
            temp_a0[0].v.cn[1] = var_s0->unk9;
            temp_a0[0].v.cn[2] = var_s0->unkA;
            temp_a0[0].v.cn[3] = var_s0->unkB;

            temp_a0[1].v.cn[0] = var_s0->unkC;
            temp_a0[1].v.cn[1] = var_s0->unkD;
            temp_a0[1].v.cn[2] = var_s0->unkE;
            temp_a0[1].v.cn[3] = var_s0->unkF;

            temp_a0[2].v.cn[0] = var_s0->unk14;
            temp_a0[2].v.cn[1] = var_s0->unk15;
            temp_a0[2].v.cn[2] = var_s0->unk16;
            temp_a0[2].v.cn[3] = var_s0->unk17;

            temp_a0[3].v.cn[0] = var_s0->unk10;
            temp_a0[3].v.cn[1] = var_s0->unk11;
            temp_a0[3].v.cn[2] = var_s0->unk12;
            temp_a0[3].v.cn[3] = var_s0->unk13;

            for (var_v1 = 0; var_v1 < 4; var_v1++) {
                temp_a1[var_v1].v.ob[2] = -5;
                temp_a1[var_v1].v.tc[1] = temp_a1[var_v1].v.tc[0] = 0;
                temp_a1[var_v1].v.flag = 0;
            }

            temp_f0 = D_800351D4;
            var_f2 = D_800351D0;
            guFrustum(&D_800B8038[D_80083060], -temp_f0 * 0.5f, temp_f0 * 0.5f, -var_f2 * 0.5f, var_f2 * 0.5f, 1.0f, 10.0f, 1.0f);
            guRotate(&D_800B82B8[var_s4][D_80083060], D_80059278, 0.0f, 0.0f, 1.0f);
            guTranslate(&D_800B80B8[var_s4][D_80083060], var_s0->unk0 - (D_800351D4 / 2), -(var_s0->unk2 - (D_800351D0 / 2)), 0.0f);
            gSPMatrix(D_8008305C++, OS_PHYSICAL_TO_K0(&D_800B8038[D_80083060]), 6);
            gSPMatrix(D_8008305C++, OS_PHYSICAL_TO_K0(&D_800B80B8[var_s4][D_80083060]), 2);
            gSPMatrix(D_8008305C++, OS_PHYSICAL_TO_K0(&D_800B82B8[var_s4][D_80083060]), 0);
            gSPDisplayList(D_8008305C++, (u32) D_80052280);
            gSPVertex(D_8008305C++, (u32) &D_800B84B8[D_80083060][var_s4 * 4], 4, 0)
            gSPDisplayList(D_8008305C++, (u32) D_800522C0);
        }
    }
    gSPLoadUcodeEx(D_8008305C++, (u32) D_317F0, (u32) D_769A0, 0x800);
    gDPPipeSync(D_8008305C++);
}
#endif

#ifndef NON_EQUIVALENT
#pragma GLOBAL_ASM("asm/nonmatchings/gameboot/func_8000C56C.s")
#else
// https://decomp.me/scratch/s0P8p

void func_8000572C(void);                                  /* extern */
void func_8000BE24(void);                                  /* extern */
extern s32 D_80037F58;

typedef struct {
    s32 unk0[2];
} Unk;

void func_8000C56C(void) {
    s32 temp_t5;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32* var_a0;
    s32* var_a3;
    s32* temp_v0;
    s32* var_v1;

    var_s0 = 0;
    if (D_80037F58 == 1) {
        func_8000572C();
    }
    func_800050B0();
    temp_v0 = osViGetCurrentFramebuffer();
    if (temp_v0 == (s32*)D_80081E64) {
        var_a0 = D_80081E68;
    } else {
        var_a0 = D_80081E64;
    }
    if (D_800351D4 == SCREEN_WIDTH) {
        D_80059164[0].unk0 = 0xA0;
        D_80059164[0].unk2 = 0x78;
        D_80059164[0].unk4 = 0x140;
        D_80059164[0].unk6 = 0xF0;
        var_a2 = 0x25800;
    } else {
        D_80059164[0].unk0 = 0x140;
        D_80059164[0].unk2 = 0xF0;
        D_80059164[0].unk4 = 0x280;
        D_80059164[0].unk6 = 0x1E0;
        var_a2 = 0x96000;
    }
    var_v1 = temp_v0;
    for (var_a1 = 0; var_a1 < var_a2; var_a1++) {
        var_a0[var_a1] = var_v1[var_a1];
    }
    while (1) {
        func_80005108();
        D_80059164[0].unkB = var_s0;
        D_80059164[0].unkF = var_s0;
        D_80059164[0].unk13 = var_s0;
        D_80059164[0].unk17 = var_s0;
        func_8000BE24();
        func_80005384();
        var_s0 += 8;
        if (var_s0 < 0x100) {
            continue;
        }
        var_s0 = 0xFF;
    }
}
#endif
