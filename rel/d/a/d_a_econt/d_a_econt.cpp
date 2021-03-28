//
// Generated By: dol2asm
// Translation Unit: d_a_econt
//

#include "rel/d/a/d_a_econt/d_a_econt.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct econt_class {};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

static bool daEcont_Draw(econt_class*);
static void s_rd_sub(void*, void*);
static void rider_game(econt_class*);
static void daEcont_Execute(econt_class*);
static bool daEcont_IsDelete(econt_class*);
static void daEcont_Delete(econt_class*);
static void daEcont_Create(fopAc_ac_c*);
extern "C" extern void* g_profile_ECONT[12];

extern "C" static bool daEcont_Draw__FP11econt_class();
extern "C" static void s_rd_sub__FPvPv();
extern "C" static void rider_game__FP11econt_class();
extern "C" static void daEcont_Execute__FP11econt_class();
extern "C" static bool daEcont_IsDelete__FP11econt_class();
extern "C" static void daEcont_Delete__FP11econt_class();
extern "C" static void daEcont_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_ECONT[12];

//
// External References:
//

void fopAc_IsActor(void*);
void fopAcM_delete(fopAc_ac_c*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void dComIfG_TimerStart(int, s16);
void dComIfG_TimerDeleteRequest(int);
void dTimer_createTimer(s32, u32, u8, u8, f32, f32, f32, f32);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 data_805197E0[4];

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_TimerStart__Fis();
extern "C" void dComIfG_TimerDeleteRequest__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void dTimer_createTimer__FlUlUcUcffff();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 data_805197E0[4];

//
// Declarations:
//

/* 80519518-80519520 0008+00 s=1 e=0 z=0  None .text      daEcont_Draw__FP11econt_class */
static bool daEcont_Draw(econt_class* param_0) {
    return true;
}

/* 80519520-80519578 0058+00 s=1 e=0 z=0  None .text      s_rd_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_rd_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_econt/d_a_econt/s_rd_sub__FPvPv.s"
}
#pragma pop

/* 80519578-80519664 00EC+00 s=1 e=0 z=0  None .text      rider_game__FP11econt_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void rider_game(econt_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_econt/d_a_econt/rider_game__FP11econt_class.s"
}
#pragma pop

/* 80519664-805196B4 0050+00 s=1 e=0 z=0  None .text      daEcont_Execute__FP11econt_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daEcont_Execute(econt_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_econt/d_a_econt/daEcont_Execute__FP11econt_class.s"
}
#pragma pop

/* 805196B4-805196BC 0008+00 s=1 e=0 z=0  None .text      daEcont_IsDelete__FP11econt_class */
static bool daEcont_IsDelete(econt_class* param_0) {
    return true;
}

/* 805196BC-805196E4 0028+00 s=1 e=0 z=0  None .text      daEcont_Delete__FP11econt_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daEcont_Delete(econt_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_econt/d_a_econt/daEcont_Delete__FP11econt_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8051977C-80519780 0004+00 s=1 e=0 z=0  None .rodata    @3870 */
SECTION_RODATA static u32 const lit_3870 = 0x43520000;

/* 80519780-80519784 0004+00 s=1 e=0 z=0  None .rodata    @3871 */
SECTION_RODATA static u32 const lit_3871 = 0x43CD0000;

/* 80519784-80519788 0004+00 s=1 e=0 z=0  None .rodata    @3872 */
SECTION_RODATA static u32 const lit_3872 = 0x42000000;

/* 80519788-8051978C 0004+00 s=1 e=0 z=0  None .rodata    @3873 */
SECTION_RODATA static u32 const lit_3873 = 0x43D18000;

/* 805196E4-80519774 0090+00 s=1 e=0 z=0  None .text      daEcont_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daEcont_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_econt/d_a_econt/daEcont_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8051978C-805197AC 0020+00 s=1 e=0 z=0  None .data      l_daEcont_Method */
SECTION_DATA static void* l_daEcont_Method[8] = {
    (void*)daEcont_Create__FP10fopAc_ac_c,
    (void*)daEcont_Delete__FP11econt_class,
    (void*)daEcont_Execute__FP11econt_class,
    (void*)daEcont_IsDelete__FP11econt_class,
    (void*)daEcont_Draw__FP11econt_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805197AC-805197DC 0030+00 s=0 e=0 z=1  None .data      g_profile_ECONT */
SECTION_DATA void* g_profile_ECONT[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02E30000, (void*)&g_fpcLf_Method,
    (void*)0x000005C0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x009B0000, (void*)&l_daEcont_Method,
    (void*)0x00044000, (void*)NULL,
};
