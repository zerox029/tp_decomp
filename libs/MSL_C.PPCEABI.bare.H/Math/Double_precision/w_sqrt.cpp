//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/w_sqrt
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/w_sqrt.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void sqrt();

//
// External References:
//

extern "C" void __ieee754_sqrt();

//
// Declarations:
//

/* 8036CA54-8036CA74 0020+00 s=0 e=8 z=1  None .text      sqrt */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void sqrt() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/w_sqrt/sqrt.s"
}
#pragma pop
