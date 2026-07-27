#include "common.h"

#include "PR/sched.h"

struct UnkStruct {
    s8 pad0[4];
    s8 unk4;
    s8 unk5;
    s8 pad6[6];
    s8 unkC;
};

s8 leoChk_cur_drvmode();                            /* extern */
extern struct UnkStruct* LEOcur_command;

void leoTest_unit_rdy(void) {
    LEOcur_command->unkC = leoChk_cur_drvmode();
    LEOcur_command->unk5 = 0;
    LEOcur_command->unk4 = 0;
}