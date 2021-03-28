//
// Generated By: dol2asm
// Translation Unit: d_a_L7demo_dr
//

#include "rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct stage_tgsc_class {};

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
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
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daDr_c {
    /* 805A9238 */ void setAction(void (daDr_c::*)());
    /* 805A92DC */ void action();
    /* 805A9304 */ void mtx_set();
    /* 805A93D4 */ void draw();
    /* 805A9478 */ void wait();
    /* 805A963C */ void pl_walk();
    /* 805A9914 */ void pl_turn();
    /* 805A9A34 */ void bridge_destroy();
    /* 805A9D10 */ void bridge_destroy2();
    /* 805A9EE4 */ void execute();
    /* 805A9FFC */ void _delete();
    /* 805AA084 */ void CreateHeap();
    /* 805AA19C */ void check_start();
    /* 805AA224 */ void create();
};

struct dVibration_c {
    /* 8006FB10 */ void StartQuake(int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dStage_dt_c {};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct dCamera_c {
    /* 801614AC */ void Start();
    /* 801614D0 */ void Stop();
    /* 8016300C */ void SetTrimSize(s32);
    /* 80180AA8 */ void Set(cXyz, cXyz);
};

struct Vec {};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
};

//
// Forward References:
//

static void daDr_Draw(daDr_c*);
static void daDr_Execute(daDr_c*);
static bool daDr_IsDelete(daDr_c*);
static void daDr_Delete(daDr_c*);
static void useHeapInit(fopAc_ac_c*);
static void daDr_Create(daDr_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_DR[12];

extern "C" void setAction__6daDr_cFM6daDr_cFPCvPv_v();
extern "C" void action__6daDr_cFv();
extern "C" void mtx_set__6daDr_cFv();
extern "C" void draw__6daDr_cFv();
extern "C" static void daDr_Draw__FP6daDr_c();
extern "C" void wait__6daDr_cFv();
extern "C" void pl_walk__6daDr_cFv();
extern "C" void pl_turn__6daDr_cFv();
extern "C" void bridge_destroy__6daDr_cFv();
extern "C" void bridge_destroy2__6daDr_cFv();
extern "C" void execute__6daDr_cFv();
extern "C" static void daDr_Execute__FP6daDr_c();
extern "C" static bool daDr_IsDelete__FP6daDr_c();
extern "C" void _delete__6daDr_cFv();
extern "C" static void daDr_Delete__FP6daDr_c();
extern "C" void CreateHeap__6daDr_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void check_start__6daDr_cFv();
extern "C" void create__6daDr_cFv();
extern "C" static void daDr_Create__FP6daDr_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_DR[12];

//
// External References:
//

void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_orderPotentialEvent(fopAc_ac_c*, u16, u16, u16);
void fopOvlpM_IsPeek();
void fpcSch_JudgeForPName(void*, void*);
void dStage_KeepDoorInfoProc(dStage_dt_c*, stage_tgsc_class*);
void dStage_changeScene(int, f32, u32, s8, s16, int);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void* operator new(u32);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dStage_KeepDoorInfoProc__FP11dStage_dt_cP16stage_tgsc_class();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void PSMTXCopy();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 805A9238-805A92DC 00A4+00 s=5 e=0 z=0  None .text      setAction__6daDr_cFM6daDr_cFPCvPv_v */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::setAction(void (daDr_c::*)()) {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/setAction__6daDr_cFM6daDr_cFPCvPv_v.s"
}
#pragma pop

/* 805A92DC-805A9304 0028+00 s=1 e=0 z=0  None .text      action__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::action() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/action__6daDr_cFv.s"
}
#pragma pop

/* 805A9304-805A93D4 00D0+00 s=1 e=0 z=0  None .text      mtx_set__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::mtx_set() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/mtx_set__6daDr_cFv.s"
}
#pragma pop

/* 805A93D4-805A9458 0084+00 s=1 e=0 z=0  None .text      draw__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/draw__6daDr_cFv.s"
}
#pragma pop

/* 805A9458-805A9478 0020+00 s=1 e=0 z=0  None .text      daDr_Draw__FP6daDr_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDr_Draw(daDr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/daDr_Draw__FP6daDr_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA454-805AA458 0004+00 s=6 e=0 z=0  None .rodata    @3864 */
SECTION_RODATA static u32 const lit_3864 = 0xC5E10000;

/* 805AA458-805AA45C 0004+00 s=2 e=0 z=0  None .rodata    @3865 */
SECTION_RODATA static u32 const lit_3865 = 0xC3480000;

/* 805AA45C-805AA460 0004+00 s=3 e=0 z=0  None .rodata    @3866 */
SECTION_RODATA static u32 const lit_3866 = 0xC6428800;

/* 805AA4D0-805AA4DC 000C+00 s=1 e=0 z=0  None .data      @3830 */
SECTION_DATA static void* lit_3830[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)pl_walk__6daDr_cFv,
};

/* 805AA4DC-805AA4E8 000C+00 s=1 e=0 z=0  None .data      @3833 */
SECTION_DATA static void* lit_3833[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)pl_turn__6daDr_cFv,
};

/* 805A9478-805A963C 01C4+00 s=2 e=0 z=0  None .text      wait__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::wait() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/wait__6daDr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA460-805AA464 0004+00 s=1 e=0 z=0  None .rodata    @3946 */
SECTION_RODATA static u32 const lit_3946 = 0xC588F800;

/* 805AA464-805AA468 0004+00 s=1 e=0 z=0  None .rodata    @3947 */
SECTION_RODATA static u32 const lit_3947 = 0x438E8000;

/* 805AA468-805AA46C 0004+00 s=1 e=0 z=0  None .rodata    @3948 */
SECTION_RODATA static u32 const lit_3948 = 0xC5928000;

/* 805AA46C-805AA470 0004+00 s=1 e=0 z=0  None .rodata    @3949 */
SECTION_RODATA static u32 const lit_3949 = 0x43AA0000;

/* 805AA470-805AA474 0004+00 s=2 e=0 z=0  None .rodata    @3950 */
SECTION_RODATA static u32 const lit_3950 = 0xC58B1000;

/* 805AA474-805AA478 0004+00 s=4 e=0 z=0  None .rodata    @3951 */
SECTION_RODATA static u8 const lit_3951[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 805AA478-805AA47C 0004+00 s=1 e=0 z=0  None .rodata    @3952 */
SECTION_RODATA static u32 const lit_3952 = 0xC5802000;

/* 805AA4E8-805AA4F4 000C+00 s=1 e=0 z=0  None .data      @3886 */
SECTION_DATA static void* lit_3886[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)pl_turn__6daDr_cFv,
};

/* 805A963C-805A9914 02D8+00 s=1 e=0 z=0  None .text      pl_walk__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::pl_walk() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/pl_walk__6daDr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA4F4-805AA500 000C+00 s=1 e=0 z=0  None .data      @3978 */
SECTION_DATA static void* lit_3978[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bridge_destroy__6daDr_cFv,
};

/* 805A9914-805A9A34 0120+00 s=2 e=0 z=0  None .text      pl_turn__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::pl_turn() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/pl_turn__6daDr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA47C-805AA480 0004+00 s=3 e=0 z=0  None .rodata    @4123 */
SECTION_RODATA static u32 const lit_4123 = 0x3F800000;

/* 805AA480-805AA484 0004+00 s=1 e=0 z=0  None .rodata    @4124 */
SECTION_RODATA static u32 const lit_4124 = 0xC58FC000;

/* 805AA484-805AA488 0004+00 s=1 e=0 z=0  None .rodata    @4125 */
SECTION_RODATA static u32 const lit_4125 = 0x42A00000;

/* 805AA488-805AA48C 0004+00 s=1 e=0 z=0  None .rodata    @4126 */
SECTION_RODATA static u32 const lit_4126 = 0x431C0000;

/* 805AA48C-805AA490 0004+00 s=1 e=0 z=0  None .rodata    @4127 */
SECTION_RODATA static u32 const lit_4127 = 0x43520000;

/* 805AA500-805AA50C 000C+00 s=1 e=0 z=0  None .data      @4041 */
SECTION_DATA static void* lit_4041[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bridge_destroy2__6daDr_cFv,
};

/* 805A9A34-805A9D10 02DC+00 s=1 e=0 z=0  None .text      bridge_destroy__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::bridge_destroy() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/bridge_destroy__6daDr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA490-805AA494 0004+00 s=1 e=0 z=0  None .rodata    @4182 */
SECTION_RODATA static u32 const lit_4182 = 0xC5D16000;

/* 805AA494-805AA498 0004+00 s=1 e=0 z=0  None .rodata    @4183 */
SECTION_RODATA static u32 const lit_4183 = 0xC4548000;

/* 805AA498-805AA49C 0004+00 s=1 e=0 z=0  None .rodata    @4184 */
SECTION_RODATA static u32 const lit_4184 = 0xC69E9800;

/* 805AA49C-805AA4A0 0004+00 s=1 e=0 z=0  None .rodata    @4185 */
SECTION_RODATA static u32 const lit_4185 = 0xC4610000;

/* 805AA4A0-805AA4A4 0004+00 s=1 e=0 z=0  None .rodata    @4186 */
SECTION_RODATA static u32 const lit_4186 = 0xC6A1B800;

/* 805A9D10-805A9EE4 01D4+00 s=1 e=0 z=0  None .text      bridge_destroy2__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::bridge_destroy2() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/bridge_destroy2__6daDr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA4A4-805AA4A8 0004+00 s=1 e=0 z=0  None .rodata    @4217 */
SECTION_RODATA static u32 const lit_4217 = 0x42E60000;

/* 805AA4A8-805AA4AC 0004+00 s=1 e=0 z=0  None .rodata    @4218 */
SECTION_RODATA static u32 const lit_4218 = 0x43130000;

/* 805A9EE4-805A9FD4 00F0+00 s=1 e=0 z=0  None .text      execute__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/execute__6daDr_cFv.s"
}
#pragma pop

/* 805A9FD4-805A9FF4 0020+00 s=2 e=0 z=0  None .text      daDr_Execute__FP6daDr_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDr_Execute(daDr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/daDr_Execute__FP6daDr_c.s"
}
#pragma pop

/* 805A9FF4-805A9FFC 0008+00 s=1 e=0 z=0  None .text      daDr_IsDelete__FP6daDr_c */
static bool daDr_IsDelete(daDr_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805AA4AC-805AA4B0 0004+00 s=1 e=0 z=0  None .rodata    @4290 */
SECTION_RODATA static u32 const lit_4290 = 0xC58C0000;

/* 805AA4B0-805AA4B4 0004+00 s=1 e=0 z=0  None .rodata    @4291 */
SECTION_RODATA static u32 const lit_4291 = 0xC5692000;

/* 805AA4B4-805AA4B8 0004+00 s=1 e=0 z=0  None .rodata    @4292 */
SECTION_RODATA static u32 const lit_4292 = 0xC6480000;

/* 805AA4B8-805AA4BC 0004+00 s=1 e=0 z=0  None .rodata    @4293 */
SECTION_RODATA static u32 const lit_4293 = 0xC63D1000;

/* 805AA4BC-805AA4C0 0004+00 s=1 e=0 z=0  None .rodata    @4370 */
SECTION_RODATA static u32 const lit_4370 = 0xC6A51A00;

/* 805AA4C0-805AA4C4 0004+00 s=1 e=0 z=0  None .rodata    @4371 */
SECTION_RODATA static u32 const lit_4371 = 0x4591A000;

/* 805AA4C4-805AA4C8 0004+00 s=1 e=0 z=0  None .rodata    @4372 */
SECTION_RODATA static u32 const lit_4372 = 0xC6C1A200;

/* 805AA4C8-805AA4CD 0005+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_805AA4C8 = "B_dr";
#pragma pop

/* 805A9FFC-805AA064 0068+00 s=1 e=0 z=0  None .text      _delete__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::_delete() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/_delete__6daDr_cFv.s"
}
#pragma pop

/* 805AA064-805AA084 0020+00 s=1 e=0 z=0  None .text      daDr_Delete__FP6daDr_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDr_Delete(daDr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/daDr_Delete__FP6daDr_c.s"
}
#pragma pop

/* 805AA084-805AA17C 00F8+00 s=1 e=0 z=0  None .text      CreateHeap__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/CreateHeap__6daDr_cFv.s"
}
#pragma pop

/* 805AA17C-805AA19C 0020+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805AA19C-805AA224 0088+00 s=1 e=0 z=0  None .text      check_start__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::check_start() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/check_start__6daDr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA50C-805AA518 000C+00 s=1 e=0 z=0  None .data      @4306 */
SECTION_DATA static void* lit_4306[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__6daDr_cFv,
};

/* 805AA518-805AA524 000C+00 s=1 e=0 z=0  None .data      @4317 */
SECTION_DATA static void* lit_4317[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__6daDr_cFv,
};

/* 805AA224-805AA42C 0208+00 s=1 e=0 z=0  None .text      create__6daDr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDr_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/create__6daDr_cFv.s"
}
#pragma pop

/* 805AA42C-805AA44C 0020+00 s=1 e=0 z=0  None .text      daDr_Create__FP6daDr_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDr_Create(daDr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7demo_dr/d_a_L7demo_dr/daDr_Create__FP6daDr_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AA524-805AA544 0020+00 s=1 e=0 z=0  None .data      l_daDr_Method */
SECTION_DATA static void* l_daDr_Method[8] = {
    (void*)daDr_Create__FP6daDr_c,
    (void*)daDr_Delete__FP6daDr_c,
    (void*)daDr_Execute__FP6daDr_c,
    (void*)daDr_IsDelete__FP6daDr_c,
    (void*)daDr_Draw__FP6daDr_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805AA544-805AA574 0030+00 s=0 e=0 z=1  None .data      g_profile_DR */
SECTION_DATA void* g_profile_DR[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,     (void*)0x02030000, (void*)&g_fpcLf_Method,
    (void*)0x0000065C, (void*)NULL,           (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00CE0000, (void*)&l_daDr_Method, (void*)0x00040000, (void*)0x020E0000,
};
