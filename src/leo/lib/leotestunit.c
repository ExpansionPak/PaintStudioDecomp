#include "PR/leo.h"

s8 leoChk_cur_drvmode();                            /* extern */
extern LEOCmd* LEOcur_command;

void leoTest_unit_rdy(void) {
    ((LEOCmdTestUnitReady*) LEOcur_command)->test = leoChk_cur_drvmode();
    LEOcur_command->header.sense = LEO_SENSE_NO_ADDITIONAL_SENSE_INFOMATION;
    LEOcur_command->header.status = LEO_STATUS_GOOD;
}