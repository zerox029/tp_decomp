//
// Generated By: dol2asm
// Translation Unit: d_a_tag_kago_fall
//

#include "rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXColor {};

struct mDoGph_gInf_c {
    /* 80007FD8 */ void fadeOut(f32, _GXColor&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daTagKagoFall_c {
    /* 80D59C58 */ void create();
    /* 80D59DE0 */ void execute();
    /* 80D59E18 */ void setActionMode(u8, u8);
    /* 80D59E24 */ void actionWaitRiver();
    /* 80D5A218 */ void actionWaitFall();
    /* 80D5A67C */ bool _delete();
};

struct dMsgObject_c {
    /* 80238440 */ void getSelectCursorPos();
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
    /* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct cXyz {};

struct dCamera_c {
    /* 801614D0 */ void Stop();
    /* 8016300C */ void SetTrimSize(s32);
    /* 80180AA8 */ void Set(cXyz, cXyz);
    /* 80181E64 */ void Eye();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct cBgS_LinChk {};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

//
// Forward References:
//

static void daTagKagoFall_Execute(daTagKagoFall_c*);
static void daTagKagoFall_Delete(daTagKagoFall_c*);
static void daTagKagoFall_Create(daTagKagoFall_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Tag_KagoFall[12];

extern "C" void create__15daTagKagoFall_cFv();
extern "C" void execute__15daTagKagoFall_cFv();
extern "C" void setActionMode__15daTagKagoFall_cFUcUc();
extern "C" void actionWaitRiver__15daTagKagoFall_cFv();
extern "C" void actionWaitFall__15daTagKagoFall_cFv();
extern "C" bool _delete__15daTagKagoFall_cFv();
extern "C" static void daTagKagoFall_Execute__FP15daTagKagoFall_c();
extern "C" static void daTagKagoFall_Delete__FP15daTagKagoFall_c();
extern "C" static void daTagKagoFall_Create__FP15daTagKagoFall_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Tag_KagoFall[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcM_orderPotentialEvent(fopAc_ac_c*, u16, u16, u16);
void dStage_changeScene(int, f32, u32, s8, s16, int);
void dComIfGp_setNextStage(char const*, s16, s8, s8, f32, u32, int, s8, s16, int, int);
void dCam_getBody();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 g_blackColor;
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfGp_setNextStage__FPCcsScScfUliScsii();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void getSelectCursorPos__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void PSMTXInverse();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 g_blackColor;
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5A6EC-80D5A6F0 0004+00 s=3 e=0 z=0  None .rodata    @3907 */
SECTION_RODATA static u32 const lit_3907 = 0x42960000;

/* 80D5A6F0-80D5A6F4 0004+00 s=1 e=0 z=0  None .rodata    @3908 */
SECTION_RODATA static u32 const lit_3908 = 0x43160000;

/* 80D5A710-80D5A714 0004+00 s=3 e=0 z=0  None .data      m_master_id */
SECTION_DATA static u32 m_master_id = 0xFFFFFFFF;

/* 80D59C58-80D59DE0 0188+00 s=1 e=0 z=0  None .text      create__15daTagKagoFall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagKagoFall_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/create__15daTagKagoFall_cFv.s"
}
#pragma pop

/* 80D59DE0-80D59E18 0038+00 s=1 e=0 z=0  None .text      execute__15daTagKagoFall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagKagoFall_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/execute__15daTagKagoFall_cFv.s"
}
#pragma pop

/* 80D59E18-80D59E24 000C+00 s=1 e=0 z=0  None .text      setActionMode__15daTagKagoFall_cFUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagKagoFall_c::setActionMode(u8 param_0, u8 param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/setActionMode__15daTagKagoFall_cFUcUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5A6F4-80D5A6F8 0004+00 s=2 e=0 z=0  None .rodata    @4022 */
SECTION_RODATA static u32 const lit_4022 = 0x3F800000;

/* 80D5A6F8-80D5A6FC 0004+00 s=2 e=0 z=0  None .rodata    @4023 */
SECTION_RODATA static u32 const lit_4023 = 0xBF800000;

/* 80D5A6FC-80D5A700 0004+00 s=2 e=0 z=0  None .rodata    @4024 */
SECTION_RODATA static u32 const lit_4024 = 0x3D4CCCCD;

/* 80D5A700-80D5A704 0004+00 s=2 e=0 z=0  None .rodata    @4025 */
SECTION_RODATA static u8 const lit_4025[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D5A704-80D5A708 0004+00 s=1 e=0 z=0  None .rodata    @4118 */
SECTION_RODATA static u32 const lit_4118 = 0x453B8000;

/* 80D5A708-80D5A710 0008+00 s=2 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D5A708 = "F_SP112";
#pragma pop

/* 80D59E24-80D5A218 03F4+00 s=1 e=0 z=0  None .text      actionWaitRiver__15daTagKagoFall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagKagoFall_c::actionWaitRiver() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/actionWaitRiver__15daTagKagoFall_cFv.s"
}
#pragma pop

/* 80D5A218-80D5A67C 0464+00 s=1 e=0 z=0  None .text      actionWaitFall__15daTagKagoFall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagKagoFall_c::actionWaitFall() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/actionWaitFall__15daTagKagoFall_cFv.s"
}
#pragma pop

/* 80D5A67C-80D5A684 0008+00 s=1 e=0 z=0  None .text      _delete__15daTagKagoFall_cFv */
bool daTagKagoFall_c::_delete() {
    return true;
}

/* 80D5A684-80D5A6A4 0020+00 s=1 e=0 z=0  None .text      daTagKagoFall_Execute__FP15daTagKagoFall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagKagoFall_Execute(daTagKagoFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/daTagKagoFall_Execute__FP15daTagKagoFall_c.s"
}
#pragma pop

/* 80D5A6A4-80D5A6C4 0020+00 s=1 e=0 z=0  None .text      daTagKagoFall_Delete__FP15daTagKagoFall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagKagoFall_Delete(daTagKagoFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/daTagKagoFall_Delete__FP15daTagKagoFall_c.s"
}
#pragma pop

/* 80D5A6C4-80D5A6E4 0020+00 s=1 e=0 z=0  None .text      daTagKagoFall_Create__FP15daTagKagoFall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagKagoFall_Create(daTagKagoFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/d_a_tag_kago_fall/daTagKagoFall_Create__FP15daTagKagoFall_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5A714-80D5A734 0020+00 s=1 e=0 z=0  None .data      l_daTagKagoFall_Method */
SECTION_DATA static void* l_daTagKagoFall_Method[8] = {
    (void*)daTagKagoFall_Create__FP15daTagKagoFall_c,
    (void*)daTagKagoFall_Delete__FP15daTagKagoFall_c,
    (void*)daTagKagoFall_Execute__FP15daTagKagoFall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5A734-80D5A764 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_KagoFall */
SECTION_DATA void* g_profile_Tag_KagoFall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01810000, (void*)&g_fpcLf_Method,
    (void*)0x000005FC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x022D0000, (void*)&l_daTagKagoFall_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
