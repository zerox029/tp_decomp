//
// Generated By: dol2asm
// Translation Unit: d_a_obj_kwheel00
//

#include "rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00.h"
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

struct daObjKWheel00_c {
    /* 80C4D6F8 */ void create1st();
    /* 80C4D86C */ void setMtx();
    /* 80C4D9B8 */ void CreateHeap();
    /* 80C4DA38 */ void Create();
    /* 80C4DBBC */ void Execute(f32 (**)[3][4]);
    /* 80C4E1B0 */ void Draw();
    /* 80C4E254 */ void Delete();
    /* 80C4E298 */ void eventStart();
    /* 80C4E6E4 */ ~daObjKWheel00_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dEvLib_callback_c {
    /* 8004886C */ void eventUpdate();
    /* 80048940 */ void orderEvent(int, int, int);
    /* 80C4E684 */ ~dEvLib_callback_c();
    /* 80C4E6CC */ bool eventStart();
    /* 80C4E6D4 */ bool eventRun();
    /* 80C4E6DC */ bool eventEnd();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 80C4E394 */ ~dCcD_Sph();
    /* 80C4E460 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80C4E574 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dBgW {};

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

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80C4E4E4 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80C4E52C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80C4E63C */ ~cCcD_GStts();
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void searchLv3Water(void*, void*);
static void daObjKWheel00_create1st(daObjKWheel00_c*);
static void daObjKWheel00_MoveBGDelete(daObjKWheel00_c*);
static void daObjKWheel00_MoveBGExecute(daObjKWheel00_c*);
static void daObjKWheel00_MoveBGDraw(daObjKWheel00_c*);
extern "C" extern void* g_profile_Obj_KWheel00[12];

extern "C" void create1st__15daObjKWheel00_cFv();
extern "C" static void searchLv3Water__FPvPv();
extern "C" void setMtx__15daObjKWheel00_cFv();
extern "C" void CreateHeap__15daObjKWheel00_cFv();
extern "C" void Create__15daObjKWheel00_cFv();
extern "C" void Execute__15daObjKWheel00_cFPPA3_A4_f();
extern "C" void Draw__15daObjKWheel00_cFv();
extern "C" void Delete__15daObjKWheel00_cFv();
extern "C" void eventStart__15daObjKWheel00_cFv();
extern "C" static void daObjKWheel00_create1st__FP15daObjKWheel00_c();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" static void daObjKWheel00_MoveBGDelete__FP15daObjKWheel00_c();
extern "C" static void daObjKWheel00_MoveBGExecute__FP15daObjKWheel00_c();
extern "C" static void daObjKWheel00_MoveBGDraw__FP15daObjKWheel00_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__15daObjKWheel00_cFv();
extern "C" static void func_80C4E7E8();
extern "C" static void func_80C4E7F0();
extern "C" extern void* g_profile_Obj_KWheel00[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void cM_rndFX(f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_27();
extern "C" void _restgpr_21();
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C4E800-80C4E808 0008+00 s=2 e=0 z=0  None .rodata    l_dzbidx */
SECTION_RODATA static u8 const l_dzbidx[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};

/* 80C4E808-80C4E810 0008+00 s=1 e=0 z=0  None .rodata    l_bmdidx */
SECTION_RODATA static u8 const l_bmdidx[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};

/* 80C4E810-80C4E840 0030+00 s=1 e=0 z=0  None .rodata    l_cull_box */
SECTION_RODATA static u8 const l_cull_box[48] = {
    0xC4, 0x4F, 0x80, 0x00, 0xC4, 0x4F, 0x80, 0x00, 0xC5, 0x1C, 0x40, 0x00, 0x44, 0x4F, 0x80, 0x00,
    0x44, 0x4F, 0x80, 0x00, 0x43, 0x48, 0x00, 0x00, 0xC4, 0x0C, 0x00, 0x00, 0xC4, 0x0C, 0x00, 0x00,
    0xC3, 0xAF, 0x00, 0x00, 0x44, 0x0C, 0x00, 0x00, 0x44, 0x0C, 0x00, 0x00, 0x43, 0xAF, 0x00, 0x00,
};

/* 80C4E840-80C4E844 0004+00 s=2 e=0 z=0  None .rodata    @3696 */
SECTION_RODATA static u32 const lit_3696 = 0x3F800000;

/* 80C4E844-80C4E848 0004+00 s=1 e=0 z=0  None .rodata    @3697 */
SECTION_RODATA static u32 const lit_3697 = 0x3DCCCCCD;

/* 80C4E848-80C4E84C 0004+00 s=1 e=0 z=0  None .rodata    @3904 */
SECTION_RODATA static u32 const lit_3904 = 0x444F8000;

/* 80C4E84C-80C4E850 0004+00 s=1 e=0 z=0  None .rodata    @3905 */
SECTION_RODATA static u32 const lit_3905 = 0x440C0000;

/* 80C4E850-80C4E854 0004+00 s=1 e=0 z=0  None .rodata    @3906 */
SECTION_RODATA static u32 const lit_3906 = 0xBF800000;

/* 80C4E854-80C4E858 0004+00 s=1 e=0 z=0  None .rodata    @3907 */
SECTION_RODATA static u32 const lit_3907 = 0x43200000;

/* 80C4E858-80C4E85C 0004+00 s=1 e=0 z=0  None .rodata    @3908 */
SECTION_RODATA static u32 const lit_3908 = 0x430C0000;

/* 80C4E85C-80C4E870 0014+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80C4E85C[20] = {
    /* 80C4E85C 000A stringBase_80C4E85C @stringBase0 */
    0x4B,
    0x5F,
    0x57,
    0x68,
    0x65,
    0x65,
    0x6C,
    0x30,
    0x30,
    0x00,
    /* 80C4E866 000A data_80C4E866 None */
    0x53,
    0x5F,
    0x77,
    0x68,
    0x65,
    0x65,
    0x6C,
    0x30,
    0x30,
    0x00,
};

/* 80C4E870-80C4E878 0008+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)(((char*)&struct_80C4E85C) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_80C4E85C) + 0xA) /* None */,
};

/* 80C4D6F8-80C4D7A8 00B0+00 s=1 e=0 z=0  None .text      create1st__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/create1st__15daObjKWheel00_cFv.s"
}
#pragma pop

/* 80C4D7A8-80C4D86C 00C4+00 s=1 e=0 z=0  None .text      searchLv3Water__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void searchLv3Water(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/searchLv3Water__FPvPv.s"
}
#pragma pop

/* 80C4D86C-80C4D9B8 014C+00 s=2 e=0 z=0  None .text      setMtx__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/setMtx__15daObjKWheel00_cFv.s"
}
#pragma pop

/* 80C4D9B8-80C4DA38 0080+00 s=1 e=0 z=0  None .text      CreateHeap__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/CreateHeap__15daObjKWheel00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C4E878-80C4E8B8 0040+00 s=1 e=0 z=0  None .data      l_sphSrc */
SECTION_DATA static u8 l_sphSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x20, 0x00, 0x00,
};

/* 80C4E8B8-80C4E8C0 0008+00 s=2 e=0 z=0  None .data      l_se_angle */
SECTION_DATA static u8 l_se_angle[8] = {
    0x00, 0x00, 0x3F, 0xFF, 0x7F, 0xFF, 0xBF, 0xFF,
};

/* 80C4DA38-80C4DBBC 0184+00 s=1 e=0 z=0  None .text      Create__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/Create__15daObjKWheel00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C4E8C0-80C4E920 0060+00 s=1 e=0 z=0  None .data      l_pos */
SECTION_DATA static u8 l_pos[96] = {
    0x44, 0x4F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x4F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x4F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x4F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C4DBBC-80C4E1B0 05F4+00 s=1 e=0 z=0  None .text      Execute__15daObjKWheel00_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/Execute__15daObjKWheel00_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C4E1B0-80C4E254 00A4+00 s=1 e=0 z=0  None .text      Draw__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/Draw__15daObjKWheel00_cFv.s"
}
#pragma pop

/* 80C4E254-80C4E298 0044+00 s=1 e=0 z=0  None .text      Delete__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/Delete__15daObjKWheel00_cFv.s"
}
#pragma pop

/* 80C4E298-80C4E2C0 0028+00 s=2 e=0 z=0  None .text      eventStart__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel00_c::eventStart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/eventStart__15daObjKWheel00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C4E920-80C4E940 0020+00 s=1 e=0 z=0  None .data      daObjKWheel00_METHODS */
SECTION_DATA static void* daObjKWheel00_METHODS[8] = {
    (void*)daObjKWheel00_create1st__FP15daObjKWheel00_c,
    (void*)daObjKWheel00_MoveBGDelete__FP15daObjKWheel00_c,
    (void*)daObjKWheel00_MoveBGExecute__FP15daObjKWheel00_c,
    (void*)NULL,
    (void*)daObjKWheel00_MoveBGDraw__FP15daObjKWheel00_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C4E940-80C4E970 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_KWheel00 */
SECTION_DATA void* g_profile_Obj_KWheel00[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00C70000, (void*)&g_fpcLf_Method,
    (void*)0x00000B44, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02960000, (void*)&daObjKWheel00_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C4E970-80C4E97C 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C4E97C-80C4E988 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C4E988-80C4E994 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C4E994-80C4E9A0 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C4E9A0-80C4E9B8 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c */
SECTION_DATA static void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80C4E9B8-80C4EA00 0048+00 s=2 e=0 z=0  None .data      __vt__15daObjKWheel00_c */
SECTION_DATA static void* __vt__15daObjKWheel00_c[18] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__15daObjKWheel00_cFv,
    (void*)Create__15daObjKWheel00_cFv,
    (void*)Execute__15daObjKWheel00_cFPPA3_A4_f,
    (void*)Draw__15daObjKWheel00_cFv,
    (void*)Delete__15daObjKWheel00_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C4E7F0,
    (void*)func_80C4E7E8,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)__dt__15daObjKWheel00_cFv,
    (void*)eventStart__15daObjKWheel00_cFv,
};

/* 80C4E2C0-80C4E394 00D4+00 s=1 e=0 z=0  None .text daObjKWheel00_create1st__FP15daObjKWheel00_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel00_create1st(daObjKWheel00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/daObjKWheel00_create1st__FP15daObjKWheel00_c.s"
}
#pragma pop

/* 80C4E394-80C4E460 00CC+00 s=2 e=0 z=0  None .text      __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80C4E460-80C4E4E4 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80C4E4E4-80C4E52C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80C4E52C-80C4E574 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C4E574-80C4E5D0 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C4E5D0-80C4E5F0 0020+00 s=1 e=0 z=0  None .text
 * daObjKWheel00_MoveBGDelete__FP15daObjKWheel00_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel00_MoveBGDelete(daObjKWheel00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/daObjKWheel00_MoveBGDelete__FP15daObjKWheel00_c.s"
}
#pragma pop

/* 80C4E5F0-80C4E610 0020+00 s=1 e=0 z=0  None .text
 * daObjKWheel00_MoveBGExecute__FP15daObjKWheel00_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel00_MoveBGExecute(daObjKWheel00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/daObjKWheel00_MoveBGExecute__FP15daObjKWheel00_c.s"
}
#pragma pop

/* 80C4E610-80C4E63C 002C+00 s=1 e=0 z=0  None .text daObjKWheel00_MoveBGDraw__FP15daObjKWheel00_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel00_MoveBGDraw(daObjKWheel00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/daObjKWheel00_MoveBGDraw__FP15daObjKWheel00_c.s"
}
#pragma pop

/* 80C4E63C-80C4E684 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C4E684-80C4E6CC 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop

/* 80C4E6CC-80C4E6D4 0008+00 s=1 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventStart() {
    return true;
}

/* 80C4E6D4-80C4E6DC 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventRun() {
    return true;
}

/* 80C4E6DC-80C4E6E4 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventEnd() {
    return true;
}

/* 80C4E6E4-80C4E7E8 0104+00 s=2 e=0 z=0  None .text      __dt__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjKWheel00_c::~daObjKWheel00_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/__dt__15daObjKWheel00_cFv.s"
}
#pragma pop

/* 80C4E7E8-80C4E7F0 0008+00 s=1 e=0 z=0  None .text      @1448@eventStart__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C4E7E8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/func_80C4E7E8.s"
}
#pragma pop

/* 80C4E7F0-80C4E7F8 0008+00 s=1 e=0 z=0  None .text      @1448@__dt__15daObjKWheel00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C4E7F0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00/func_80C4E7F0.s"
}
#pragma pop
