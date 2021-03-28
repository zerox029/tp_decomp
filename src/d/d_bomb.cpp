//
// Generated By: dol2asm
// Translation Unit: d/d_bomb
//

#include "d/d_bomb.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct dBomb_c {
    /* 80031F94 */ void checkStateCarry();
    /* 80031FCC */ void checkFlowerBombWait(fopAc_ac_c*);
    /* 80031FF4 */ void checkWaterBomb(fopAc_ac_c*);
    /* 8003201C */ void checkInsectBombMove(fopAc_ac_c*);
};

//
// Forward References:
//

extern "C" void checkStateCarry__7dBomb_cFv();
extern "C" void checkFlowerBombWait__7dBomb_cFP10fopAc_ac_c();
extern "C" void checkWaterBomb__7dBomb_cFP10fopAc_ac_c();
extern "C" void checkInsectBombMove__7dBomb_cFP10fopAc_ac_c();

//
// External References:
//

//
// Declarations:
//

/* 80031F94-80031FCC 0038+00 s=0 e=0 z=5  None .text      checkStateCarry__7dBomb_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBomb_c::checkStateCarry() {
    nofralloc
#include "asm/d/d_bomb/checkStateCarry__7dBomb_cFv.s"
}
#pragma pop

/* 80031FCC-80031FF4 0028+00 s=0 e=0 z=1  None .text checkFlowerBombWait__7dBomb_cFP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBomb_c::checkFlowerBombWait(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/d_bomb/checkFlowerBombWait__7dBomb_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80031FF4-8003201C 0028+00 s=0 e=0 z=1  None .text      checkWaterBomb__7dBomb_cFP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBomb_c::checkWaterBomb(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/d_bomb/checkWaterBomb__7dBomb_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 8003201C-80032044 0028+00 s=0 e=0 z=1  None .text checkInsectBombMove__7dBomb_cFP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBomb_c::checkInsectBombMove(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/d_bomb/checkInsectBombMove__7dBomb_cFP10fopAc_ac_c.s"
}
#pragma pop
