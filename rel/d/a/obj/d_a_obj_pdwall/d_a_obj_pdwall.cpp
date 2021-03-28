//
// Generated By: dol2asm
// Translation Unit: d_a_obj_pdwall
//

#include "rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjPDwall_c {
    /* 80CAC7F8 */ void create1st();
    /* 80CAC8DC */ void setMtx();
    /* 80CACA44 */ void CreateHeap();
    /* 80CACBA8 */ void Create();
    /* 80CACCE0 */ void Execute(f32 (**)[3][4]);
    /* 80CACF14 */ void Draw();
    /* 80CACFD4 */ void Delete();
    /* 80CAD140 */ ~daObjPDwall_c();
};

struct cXyz {};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct csXyz {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjPDwall_create1st(daObjPDwall_c*);
static void daObjPDwall_MoveBGDelete(daObjPDwall_c*);
static void daObjPDwall_MoveBGExecute(daObjPDwall_c*);
static void daObjPDwall_MoveBGDraw(daObjPDwall_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_PDwall[12];

extern "C" void create1st__13daObjPDwall_cFv();
extern "C" void setMtx__13daObjPDwall_cFv();
extern "C" void CreateHeap__13daObjPDwall_cFv();
extern "C" void Create__13daObjPDwall_cFv();
extern "C" void Execute__13daObjPDwall_cFPPA3_A4_f();
extern "C" void Draw__13daObjPDwall_cFv();
extern "C" void Delete__13daObjPDwall_cFv();
extern "C" static void daObjPDwall_create1st__FP13daObjPDwall_c();
extern "C" static void daObjPDwall_MoveBGDelete__FP13daObjPDwall_c();
extern "C" static void daObjPDwall_MoveBGExecute__FP13daObjPDwall_c();
extern "C" static void daObjPDwall_MoveBGDraw__FP13daObjPDwall_c();
extern "C" void __dt__13daObjPDwall_cFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_PDwall[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CAD1B8-80CAD1D0 0018+00 s=2 e=0 z=0  None .rodata    l_cull_box */
SECTION_RODATA static u8 const l_cull_box[24] = {
    0xC2, 0xC8, 0x00, 0x00, 0xC4, 0x48, 0x00, 0x00, 0xC3, 0x96, 0x00, 0x00,
    0x44, 0x3B, 0x80, 0x00, 0x43, 0xFA, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
};

/* 80CAD1D0-80CAD1D4 0004+00 s=1 e=0 z=0  None .rodata    @3666 */
SECTION_RODATA static u32 const lit_3666 = 0x42480000;

/* 80CAD1D4-80CAD1D8 0004+00 s=3 e=0 z=0  None .rodata    @3667 */
SECTION_RODATA static u8 const lit_3667[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CAD1D8-80CAD1E0 0008+00 s=3 e=0 z=0  None .rodata    @3669 */
SECTION_RODATA static u8 const lit_3669[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CAD1E0-80CAD1E4 0004+00 s=2 e=0 z=0  None .rodata    @3731 */
SECTION_RODATA static u32 const lit_3731 = 0xC1F00000;

/* 80CAD1E4-80CAD1E8 0004+00 s=1 e=0 z=0  None .rodata    @3787 */
SECTION_RODATA static u32 const lit_3787 = 0x40A00000;

/* 80CAD1E8-80CAD1EC 0004+00 s=1 e=0 z=0  None .rodata    @3788 */
SECTION_RODATA static u32 const lit_3788 = 0xBE4CCCCD;

/* 80CAD1EC-80CAD1F0 0004+00 s=1 e=0 z=0  None .rodata    @3789 */
SECTION_RODATA static u32 const lit_3789 = 0x3F800000;

/* 80CAD1F0-80CAD1F4 0004+00 s=1 e=0 z=0  None .rodata    @3790 */
SECTION_RODATA static u32 const lit_3790 = 0xBF800000;

/* 80CAD1F4-80CAD1FC 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CAD1F4 = "P_Dwall";
#pragma pop

/* 80CAD1FC-80CAD200 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CAC7F8-80CAC8DC 00E4+00 s=1 e=0 z=0  None .text      create1st__13daObjPDwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDwall_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/create1st__13daObjPDwall_cFv.s"
}
#pragma pop

/* 80CAC8DC-80CACA44 0168+00 s=2 e=0 z=0  None .text      setMtx__13daObjPDwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDwall_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/setMtx__13daObjPDwall_cFv.s"
}
#pragma pop

/* 80CACA44-80CACBA8 0164+00 s=1 e=0 z=0  None .text      CreateHeap__13daObjPDwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDwall_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/CreateHeap__13daObjPDwall_cFv.s"
}
#pragma pop

/* 80CACBA8-80CACCE0 0138+00 s=1 e=0 z=0  None .text      Create__13daObjPDwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDwall_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/Create__13daObjPDwall_cFv.s"
}
#pragma pop

/* 80CACCE0-80CACF14 0234+00 s=1 e=0 z=0  None .text      Execute__13daObjPDwall_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDwall_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/Execute__13daObjPDwall_cFPPA3_A4_f.s"
}
#pragma pop

/* 80CACF14-80CACFD4 00C0+00 s=1 e=0 z=0  None .text      Draw__13daObjPDwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDwall_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/Draw__13daObjPDwall_cFv.s"
}
#pragma pop

/* 80CACFD4-80CAD074 00A0+00 s=1 e=0 z=0  None .text      Delete__13daObjPDwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDwall_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/Delete__13daObjPDwall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CAD200-80CAD220 0020+00 s=1 e=0 z=0  None .data      daObjPDwall_METHODS */
SECTION_DATA static void* daObjPDwall_METHODS[8] = {
    (void*)daObjPDwall_create1st__FP13daObjPDwall_c,
    (void*)daObjPDwall_MoveBGDelete__FP13daObjPDwall_c,
    (void*)daObjPDwall_MoveBGExecute__FP13daObjPDwall_c,
    (void*)NULL,
    (void*)daObjPDwall_MoveBGDraw__FP13daObjPDwall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CAD220-80CAD250 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_PDwall */
SECTION_DATA void* g_profile_Obj_PDwall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00CF0000, (void*)&g_fpcLf_Method,
    (void*)0x00000A18, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x029F0000, (void*)&daObjPDwall_METHODS,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80CAD250-80CAD27C 002C+00 s=2 e=0 z=0  None .data      __vt__13daObjPDwall_c */
SECTION_DATA static void* __vt__13daObjPDwall_c[11] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__13daObjPDwall_cFv,
    (void*)Create__13daObjPDwall_cFv,
    (void*)Execute__13daObjPDwall_cFPPA3_A4_f,
    (void*)Draw__13daObjPDwall_cFv,
    (void*)Delete__13daObjPDwall_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)__dt__13daObjPDwall_cFv,
};

/* 80CAD074-80CAD0D4 0060+00 s=1 e=0 z=0  None .text      daObjPDwall_create1st__FP13daObjPDwall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDwall_create1st(daObjPDwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/daObjPDwall_create1st__FP13daObjPDwall_c.s"
}
#pragma pop

/* 80CAD0D4-80CAD0F4 0020+00 s=1 e=0 z=0  None .text daObjPDwall_MoveBGDelete__FP13daObjPDwall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDwall_MoveBGDelete(daObjPDwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/daObjPDwall_MoveBGDelete__FP13daObjPDwall_c.s"
}
#pragma pop

/* 80CAD0F4-80CAD114 0020+00 s=1 e=0 z=0  None .text daObjPDwall_MoveBGExecute__FP13daObjPDwall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDwall_MoveBGExecute(daObjPDwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/daObjPDwall_MoveBGExecute__FP13daObjPDwall_c.s"
}
#pragma pop

/* 80CAD114-80CAD140 002C+00 s=1 e=0 z=0  None .text      daObjPDwall_MoveBGDraw__FP13daObjPDwall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDwall_MoveBGDraw(daObjPDwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/daObjPDwall_MoveBGDraw__FP13daObjPDwall_c.s"
}
#pragma pop

/* 80CAD140-80CAD1B0 0070+00 s=1 e=0 z=0  None .text      __dt__13daObjPDwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjPDwall_c::~daObjPDwall_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdwall/d_a_obj_pdwall/__dt__13daObjPDwall_cFv.s"
}
#pragma pop
