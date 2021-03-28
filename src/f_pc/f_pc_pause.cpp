//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_pause
//

#include "f_pc/f_pc_pause.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct layer_class {};

//
// Forward References:
//

void fpcPause_IsEnable(void*, u8);
void fpcPause_Enable(void*, u8);
void fpcPause_Disable(void*, u8);
void fpcPause_Init(void*);

extern "C" void fpcPause_IsEnable__FPvUc();
extern "C" void fpcPause_Enable__FPvUc();
extern "C" void fpcPause_Disable__FPvUc();
extern "C" void fpcPause_Init__FPv();

//
// External References:
//

void fpcBs_Is_JustOfType(int, int);
void fpcLyIt_OnlyHere(layer_class*, int (*)(void*, void*), void*);
extern "C" extern u8 g_fpcNd_type[4 + 4 /* padding */];

extern "C" void fpcBs_Is_JustOfType__Fii();
extern "C" void fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv();
extern "C" extern u8 g_fpcNd_type[4 + 4 /* padding */];

//
// Declarations:
//

/* 80023844-80023868 0024+00 s=0 e=3 z=0  None .text      fpcPause_IsEnable__FPvUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPause_IsEnable(void* param_0, u8 param_1) {
    nofralloc
#include "asm/f_pc/f_pc_pause/fpcPause_IsEnable__FPvUc.s"
}
#pragma pop

/* 80023868-800238D4 006C+00 s=0 e=1 z=0  None .text      fpcPause_Enable__FPvUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPause_Enable(void* param_0, u8 param_1) {
    nofralloc
#include "asm/f_pc/f_pc_pause/fpcPause_Enable__FPvUc.s"
}
#pragma pop

/* 800238D4-80023948 0074+00 s=0 e=1 z=0  None .text      fpcPause_Disable__FPvUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPause_Disable(void* param_0, u8 param_1) {
    nofralloc
#include "asm/f_pc/f_pc_pause/fpcPause_Disable__FPvUc.s"
}
#pragma pop

/* 80023948-80023954 000C+00 s=0 e=1 z=0  None .text      fpcPause_Init__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPause_Init(void* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_pause/fpcPause_Init__FPv.s"
}
#pragma pop
