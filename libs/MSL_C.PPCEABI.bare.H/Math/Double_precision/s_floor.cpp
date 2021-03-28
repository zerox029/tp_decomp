//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/s_floor
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/s_floor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void floor();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80456AF8-80456B00 0008+00 s=1 e=0 z=0  None .sdata2    @124 */
SECTION_SDATA2 static u8 lit_124[8] = {
    0x7E, 0x37, 0xE4, 0x3C, 0x88, 0x00, 0x75, 0x9C,
};

/* 80456B00-80456B08 0008+00 s=1 e=0 z=0  None .sdata2    @125 */
SECTION_SDATA2 static u8 lit_125[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036C0FC-8036C244 0148+00 s=0 e=5 z=0  None .text      floor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void floor() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/s_floor/floor.s"
}
#pragma pop
