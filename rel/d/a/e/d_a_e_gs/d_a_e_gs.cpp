//
// Generated By: dol2asm
// Translation Unit: d_a_e_gs
//

#include "rel/d/a/e/d_a_e_gs/d_a_e_gs.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct J3DModel {};

struct cXyz {};

struct mDoExt_invisibleModel {
    /* 8000E53C */ void create(J3DModel*, u8);
    /* 8000E7C0 */ void entryDL(cXyz*);
};

struct mDoExt_McaMorfCallBack2_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_McaMorfCallBack1_c {};

struct Z2Creature {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_gs_class {};

struct daPy_py_c {
    /* 8015F424 */ void checkNowWolfEyeUp();
};

struct daE_GS_HIO_c {
    /* 806DF46C */ daE_GS_HIO_c();
    /* 806DFD5C */ ~daE_GS_HIO_c();
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct Vec {};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
};

//
// Forward References:
//

static void anm_init(e_gs_class*, int, f32, u8, f32);
static void daE_GS_Draw(e_gs_class*);
static void e_gs_wait(e_gs_class*);
static void action(e_gs_class*);
static void daE_GS_Execute(e_gs_class*);
static bool daE_GS_IsDelete(e_gs_class*);
static void daE_GS_Delete(e_gs_class*);
static void useHeapInit(fopAc_ac_c*);
static void daE_GS_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_GS[12];

extern "C" void __ct__12daE_GS_HIO_cFv();
extern "C" static void anm_init__FP10e_gs_classifUcf();
extern "C" static void daE_GS_Draw__FP10e_gs_class();
extern "C" static void e_gs_wait__FP10e_gs_class();
extern "C" static void action__FP10e_gs_class();
extern "C" static void daE_GS_Execute__FP10e_gs_class();
extern "C" static bool daE_GS_IsDelete__FP10e_gs_class();
extern "C" static void daE_GS_Delete__FP10e_gs_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_GS_Create__FP10fopAc_ac_c();
extern "C" void __dt__12daE_GS_HIO_cFv();
extern "C" void __sinit_d_a_e_gs_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_GS[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void cDmrNowMidnaTalk();
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistance(fopAc_ac_c const*, fopAc_ac_c const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void cM_rndF(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxScale(f32, f32, f32, u8);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void create__21mDoExt_invisibleModelFP8J3DModelUc();
extern "C" void entryDL__21mDoExt_invisibleModelFP4cXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void cDmrNowMidnaTalk__Fv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void checkNowWolfEyeUp__9daPy_py_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndF__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxScale__FfffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 806DFDF4-806DFDF8 0004+00 s=3 e=0 z=0  None .rodata    @3646 */
SECTION_RODATA static u32 const lit_3646 = 0x3F99999A;

/* 806DFDF8-806DFDFC 0004+00 s=1 e=0 z=0  None .rodata    @3647 */
SECTION_RODATA static u32 const lit_3647 = 0x42700000;

/* 806DFDFC-806DFE00 0004+00 s=1 e=0 z=0  None .rodata    @3648 */
SECTION_RODATA static u32 const lit_3648 = 0x41F00000;

/* 806DFE00-806DFE04 0004+00 s=1 e=0 z=0  None .rodata    @3649 */
SECTION_RODATA static u32 const lit_3649 = 0x43960000;

/* 806DFE34-806DFE54 0020+00 s=1 e=0 z=0  None .data      l_daE_GS_Method */
SECTION_DATA static void* l_daE_GS_Method[8] = {
    (void*)daE_GS_Create__FP10fopAc_ac_c,
    (void*)daE_GS_Delete__FP10e_gs_class,
    (void*)daE_GS_Execute__FP10e_gs_class,
    (void*)daE_GS_IsDelete__FP10e_gs_class,
    (void*)daE_GS_Draw__FP10e_gs_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 806DFE54-806DFE84 0030+00 s=0 e=0 z=1  None .data      g_profile_E_GS */
SECTION_DATA void* g_profile_E_GS[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01B00000, (void*)&g_fpcLf_Method,
    (void*)0x000006BC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00730000, (void*)&l_daE_GS_Method,
    (void*)0x00044100, (void*)0x020E0000,
};

/* 806DFE84-806DFE90 000C+00 s=2 e=0 z=0  None .data      __vt__12daE_GS_HIO_c */
SECTION_DATA static void* __vt__12daE_GS_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12daE_GS_HIO_cFv,
};

/* 806DF46C-806DF4B4 0048+00 s=1 e=0 z=0  None .text      __ct__12daE_GS_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_GS_HIO_c::daE_GS_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/__ct__12daE_GS_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806DFE04-806DFE08 0004+00 s=4 e=0 z=0  None .rodata    @3663 */
SECTION_RODATA static u8 const lit_3663[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 806DFE08-806DFE0C 0004+00 s=1 e=0 z=0  None .rodata    @3664 */
SECTION_RODATA static u32 const lit_3664 = 0xBF800000;

/* 806DFE0C-806DFE10 0004+00 s=4 e=0 z=0  None .rodata    @3687 */
SECTION_RODATA static u32 const lit_3687 = 0x3F800000;

/* 806DFE10-806DFE14 0004+00 s=1 e=0 z=0  None .rodata    @3715 */
SECTION_RODATA static u32 const lit_3715 = 0x42200000;

/* 806DFE14-806DFE18 0004+00 s=1 e=0 z=0  None .rodata    @3716 */
SECTION_RODATA static u32 const lit_3716 = 0x42480000;

/* 806DFE18-806DFE1C 0004+00 s=1 e=0 z=0  None .rodata    @3717 */
SECTION_RODATA static u32 const lit_3717 = 0x41200000;

/* 806DFE1C-806DFE20 0004+00 s=1 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u32 const lit_3718 = 0x41A00000;

/* 806DFE20-806DFE24 0004+00 s=1 e=0 z=0  None .rodata    @3789 */
SECTION_RODATA static u32 const lit_3789 = 0x437F0000;

/* 806DFE24-806DFE28 0004+00 s=1 e=0 z=0  None .rodata    @3893 */
SECTION_RODATA static u32 const lit_3893 = 0xC3480000;

/* 806DFE28-806DFE2C 0004+00 s=1 e=0 z=0  None .rodata    @3894 */
SECTION_RODATA static u32 const lit_3894 = 0x43480000;

/* 806DFE2C-806DFE31 0005+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_806DFE2C = "E_gs";
#pragma pop

/* 806DF4B4-806DF560 00AC+00 s=1 e=0 z=0  None .text      anm_init__FP10e_gs_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(e_gs_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/anm_init__FP10e_gs_classifUcf.s"
}
#pragma pop

/* 806DF560-806DF660 0100+00 s=1 e=0 z=0  None .text      daE_GS_Draw__FP10e_gs_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_GS_Draw(e_gs_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/daE_GS_Draw__FP10e_gs_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 806DFE98-806DFE9C 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_806DFE98[4];

/* 806DFE9C-806DFEA8 000C+00 s=1 e=0 z=0  None .bss       @3641 */
static u8 lit_3641[12];

/* 806DFEA8-806DFEC4 001C+00 s=4 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[28];

/* 806DF660-806DF7CC 016C+00 s=1 e=0 z=0  None .text      e_gs_wait__FP10e_gs_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_gs_wait(e_gs_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/e_gs_wait__FP10e_gs_class.s"
}
#pragma pop

/* 806DF7CC-806DF874 00A8+00 s=1 e=0 z=0  None .text      action__FP10e_gs_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(e_gs_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/action__FP10e_gs_class.s"
}
#pragma pop

/* 806DF874-806DFA48 01D4+00 s=2 e=0 z=0  None .text      daE_GS_Execute__FP10e_gs_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_GS_Execute(e_gs_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/daE_GS_Execute__FP10e_gs_class.s"
}
#pragma pop

/* 806DFA48-806DFA50 0008+00 s=1 e=0 z=0  None .text      daE_GS_IsDelete__FP10e_gs_class */
static bool daE_GS_IsDelete(e_gs_class* param_0) {
    return true;
}

/* 806DFA50-806DFAB8 0068+00 s=1 e=0 z=0  None .text      daE_GS_Delete__FP10e_gs_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_GS_Delete(e_gs_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/daE_GS_Delete__FP10e_gs_class.s"
}
#pragma pop

/* 806DFAB8-806DFC00 0148+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 806DFC00-806DFD5C 015C+00 s=1 e=0 z=0  None .text      daE_GS_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_GS_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/daE_GS_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 806DFD5C-806DFDA4 0048+00 s=2 e=0 z=0  None .text      __dt__12daE_GS_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_GS_HIO_c::~daE_GS_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/__dt__12daE_GS_HIO_cFv.s"
}
#pragma pop

/* 806DFDA4-806DFDE0 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_e_gs_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_e_gs_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/d_a_e_gs/__sinit_d_a_e_gs_cpp.s"
}
#pragma pop
