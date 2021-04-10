//
// Generated By: dol2asm
// Translation Unit: d_a_tag_theB_hint
//

#include "rel/d/a/tag/d_a_tag_theB_hint/d_a_tag_theB_hint.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagTheBHint_c {};

struct daNpcTheB_c {
    /* 80AFD6D8 */ void setHintEvent(s32, u16, int);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

extern "C" static void daTagTheBHint_Create__FP10fopAc_ac_c();
extern "C" static void daTagTheBHint_Delete__FP15daTagTheBHint_c();
extern "C" static void daTagTheBHint_Execute__FP15daTagTheBHint_c();
extern "C" extern void* g_profile_Tag_TheBHint[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcLyIt_AllJudge__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void pow();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" void setHintEvent__11daNpcTheB_cFlUsi();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D63E54-80D63E5C 000000 0004+04 1/1 0/0 0/0 .rodata          @3831 */
SECTION_RODATA static f32 const lit_3831[1 + 1 /* padding */] = {
    100.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D63E54, &lit_3831);

/* 80D63E5C-80D63E64 000008 0008+00 1/1 0/0 0/0 .rodata          @3832 */
SECTION_RODATA static u8 const lit_3832[8] = {
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D63E5C, &lit_3832);

/* 80D63CD8-80D63D4C 000078 0074+00 1/0 0/0 0/0 .text daTagTheBHint_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagTheBHint_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_theB_hint/d_a_tag_theB_hint/daTagTheBHint_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D63D4C-80D63D7C 0000EC 0030+00 1/0 0/0 0/0 .text daTagTheBHint_Delete__FP15daTagTheBHint_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagTheBHint_Delete(daTagTheBHint_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_theB_hint/d_a_tag_theB_hint/daTagTheBHint_Delete__FP15daTagTheBHint_c.s"
}
#pragma pop

/* 80D63D7C-80D63E4C 00011C 00D0+00 1/0 0/0 0/0 .text daTagTheBHint_Execute__FP15daTagTheBHint_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagTheBHint_Execute(daTagTheBHint_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_theB_hint/d_a_tag_theB_hint/daTagTheBHint_Execute__FP15daTagTheBHint_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D63E64-80D63E84 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagTheBHint_Method */
SECTION_DATA static void* l_daTagTheBHint_Method[8] = {
    (void*)daTagTheBHint_Create__FP10fopAc_ac_c,
    (void*)daTagTheBHint_Delete__FP15daTagTheBHint_c,
    (void*)daTagTheBHint_Execute__FP15daTagTheBHint_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D63E84-80D63EB4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_TheBHint */
SECTION_DATA extern void* g_profile_Tag_TheBHint[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02CC0000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01090000, (void*)&l_daTagTheBHint_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
