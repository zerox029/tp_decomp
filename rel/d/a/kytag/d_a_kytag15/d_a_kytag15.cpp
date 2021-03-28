//
// Generated By: dol2asm
// Translation Unit: d_a_kytag15
//

#include "rel/d/a/kytag/d_a_kytag15/d_a_kytag15.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct kytag15_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModelData {};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80860AF0 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daKytag15_Draw(kytag15_class*);
static void daKytag15_Execute(kytag15_class*);
static bool daKytag15_IsDelete(kytag15_class*);
static void daKytag15_Delete(kytag15_class*);
static void useHeapInit(fopAc_ac_c*);
static void daKytag15_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_KYTAG15[12];

extern "C" static void daKytag15_Draw__FP13kytag15_class();
extern "C" static void daKytag15_Execute__FP13kytag15_class();
extern "C" static bool daKytag15_IsDelete__FP13kytag15_class();
extern "C" static void daKytag15_Delete__FP13kytag15_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daKytag15_Create__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_KYTAG15[12];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dKy_daynight_check();
void cLib_addCalc(f32*, f32, f32, f32, f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dKy_daynight_check__Fv();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* ############################################################################################## */
/* 80860B40-80860B44 0004+00 s=3 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u8 const lit_3823[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80860B44-80860B48 0004+00 s=1 e=0 z=0  None .rodata    @3824 */
SECTION_RODATA static u32 const lit_3824 = 0x3BABB44E;

/* 80860B48-80860B4C 0004+00 s=1 e=0 z=0  None .rodata    @3825 */
SECTION_RODATA static u32 const lit_3825 = 0xC37F0000;

/* 80860B4C-80860B50 0004+00 s=1 e=0 z=0  None .rodata    @3826 */
SECTION_RODATA static u32 const lit_3826 = 0x437F0000;

/* 80860B50-80860B58 0008+00 s=1 e=0 z=0  None .rodata    @3828 */
SECTION_RODATA static u8 const lit_3828[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80860638-808607F8 01C0+00 s=1 e=0 z=0  None .text      daKytag15_Draw__FP13kytag15_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag15_Draw(kytag15_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag15/d_a_kytag15/daKytag15_Draw__FP13kytag15_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80860B58-80860B5C 0004+00 s=3 e=0 z=0  None .rodata    @3845 */
SECTION_RODATA static u32 const lit_3845 = 0x3F800000;

/* 80860B5C-80860B60 0004+00 s=1 e=0 z=0  None .rodata    @3846 */
SECTION_RODATA static u32 const lit_3846 = 0x3D4CCCCD;

/* 80860B60-80860B64 0004+00 s=1 e=0 z=0  None .rodata    @3847 */
SECTION_RODATA static u32 const lit_3847 = 0x3C23D70A;

/* 80860B64-80860B68 0004+00 s=1 e=0 z=0  None .rodata    @3848 */
SECTION_RODATA static u32 const lit_3848 = 0x322BCC77;

/* 808607F8-808608B0 00B8+00 s=1 e=0 z=0  None .text      daKytag15_Execute__FP13kytag15_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag15_Execute(kytag15_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag15/d_a_kytag15/daKytag15_Execute__FP13kytag15_class.s"
}
#pragma pop

/* 808608B0-808608B8 0008+00 s=1 e=0 z=0  None .text      daKytag15_IsDelete__FP13kytag15_class */
static bool daKytag15_IsDelete(kytag15_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80860B68-80860B78 0010+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80860B68 = "Kytag15";
SECTION_DEAD char const* const stringBase_80860B70 = "F_SP118";
#pragma pop

/* 808608B8-808608E8 0030+00 s=1 e=0 z=0  None .text      daKytag15_Delete__FP13kytag15_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag15_Delete(kytag15_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag15/d_a_kytag15/daKytag15_Delete__FP13kytag15_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80860B78-80860B98 0020+00 s=1 e=0 z=0  None .data      l_daKytag15_Method */
SECTION_DATA static void* l_daKytag15_Method[8] = {
    (void*)daKytag15_Create__FP10fopAc_ac_c,
    (void*)daKytag15_Delete__FP13kytag15_class,
    (void*)daKytag15_Execute__FP13kytag15_class,
    (void*)daKytag15_IsDelete__FP13kytag15_class,
    (void*)daKytag15_Draw__FP13kytag15_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80860B98-80860BC8 0030+00 s=1 e=0 z=1  None .data      g_profile_KYTAG15 */
SECTION_DATA void* g_profile_KYTAG15[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02B90000, (void*)&g_fpcLf_Method,
    (void*)0x00000594, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x006D0000, (void*)&l_daKytag15_Method,
    (void*)0x00044000, (void*)NULL,
};

/* 808608E8-808609B4 00CC+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag15/d_a_kytag15/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80860BC8-80860BD4 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 808609B4-80860AF0 013C+00 s=1 e=0 z=0  None .text      daKytag15_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag15_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag15/d_a_kytag15/daKytag15_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80860AF0-80860B38 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag15/d_a_kytag15/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop
