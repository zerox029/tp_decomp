//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_profile
//

#include "f_pc/f_pc_profile.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void fpcPf_Get(s16);
extern "C" extern u8 g_fpcPf_ProfileList_p[4 + 4 /* padding */];

extern "C" void fpcPf_Get__Fs();
extern "C" extern u8 g_fpcPf_ProfileList_p[4 + 4 /* padding */];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80450D50-80450D58 0004+04 s=1 e=0 z=2  None .sbss      g_fpcPf_ProfileList_p */
u8 g_fpcPf_ProfileList_p[4 + 4 /* padding */];

/* 80023564-80023578 0014+00 s=0 e=1 z=0  None .text      fpcPf_Get__Fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPf_Get(s16 param_0) {
    nofralloc
#include "asm/f_pc/f_pc_profile/fpcPf_Get__Fs.s"
}
#pragma pop
