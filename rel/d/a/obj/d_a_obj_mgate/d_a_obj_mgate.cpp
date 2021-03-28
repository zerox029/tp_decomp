//
// Generated By: dol2asm
// Translation Unit: d_a_obj_mgate
//

#include "rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CDD4 */ void transM(cXyz const&);
};

struct fopAc_ac_c {};

struct daObjMGate_c {
    /* 805935B8 */ void initBaseMtx();
    /* 80593630 */ void setBaseMtx();
    /* 80593760 */ void Create();
    /* 805937AC */ void CreateHeap();
    /* 8059388C */ void create1st();
    /* 80593988 */ void Execute(f32 (**)[3][4]);
    /* 80593C4C */ void Draw();
    /* 80593D18 */ void Delete();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dBgW {};

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

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjMGate_create1st(daObjMGate_c*);
static void daObjMGate_MoveBGDelete(daObjMGate_c*);
static void daObjMGate_MoveBGExecute(daObjMGate_c*);
static void daObjMGate_MoveBGDraw(daObjMGate_c*);
extern "C" extern u8 const l_col_offsetX[20];
extern "C" extern u8 const lit_3752[4];
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_MGate[12];

extern "C" void initBaseMtx__12daObjMGate_cFv();
extern "C" void setBaseMtx__12daObjMGate_cFv();
extern "C" void Create__12daObjMGate_cFv();
extern "C" void CreateHeap__12daObjMGate_cFv();
extern "C" void create1st__12daObjMGate_cFv();
extern "C" void Execute__12daObjMGate_cFPPA3_A4_f();
extern "C" void Draw__12daObjMGate_cFv();
extern "C" void Delete__12daObjMGate_cFv();
extern "C" static void daObjMGate_create1st__FP12daObjMGate_c();
extern "C" static void daObjMGate_MoveBGDelete__FP12daObjMGate_c();
extern "C" static void daObjMGate_MoveBGExecute__FP12daObjMGate_c();
extern "C" static void daObjMGate_MoveBGDraw__FP12daObjMGate_c();
extern "C" extern u8 const l_col_offsetX[20];
extern "C" extern u8 const lit_3752[4];
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_MGate[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dLib_checkActorInRectangle(fopAc_ac_c*, fopAc_ac_c*, cXyz const*, cXyz const*);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc0(f32*, f32, f32);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80593E48-80593E60 0018+00 s=2 e=0 z=0  None .rodata    l_key_offset */
SECTION_RODATA static u8 const l_key_offset[24] = {
    0x43, 0x4D, 0x00, 0x00, 0x43, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x66, 0x00, 0x00, 0x43, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80593E60-80593E74 0014+00 s=0 e=0 z=0  None .rodata    l_col_offsetX */
SECTION_RODATA u8 const l_col_offsetX[20] = {
    0x42, 0xA0, 0x00, 0x00, 0x43, 0x20, 0x00, 0x00, 0x43, 0x70,
    0x00, 0x00, 0x43, 0xA0, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00,
};

/* 80593E74-80593EA4 0030+00 s=1 e=0 z=0  None .rodata    l_roll_crash_check_areaL */
SECTION_RODATA static u8 const l_roll_crash_check_areaL[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x43, 0xCD, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x43, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00,
};

/* 80593EA4-80593ED4 0030+00 s=1 e=0 z=0  None .rodata    l_roll_crash_check_areaL2 */
SECTION_RODATA static u8 const l_roll_crash_check_areaL2[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x43, 0xE6, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x43, 0xE6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00,
};

/* 80593ED4-80593ED8 0004+00 s=2 e=0 z=0  None .rodata    @3670 */
SECTION_RODATA static u32 const lit_3670 = 0xBF800000;

/* 805935B8-80593630 0078+00 s=1 e=0 z=0  None .text      initBaseMtx__12daObjMGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/initBaseMtx__12daObjMGate_cFv.s"
}
#pragma pop

/* 80593630-80593760 0130+00 s=2 e=0 z=0  None .text      setBaseMtx__12daObjMGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/setBaseMtx__12daObjMGate_cFv.s"
}
#pragma pop

/* 80593760-805937AC 004C+00 s=1 e=0 z=0  None .text      Create__12daObjMGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/Create__12daObjMGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80593ED8-80593EDC 0004+00 s=0 e=0 z=0  None .rodata    @3752 */
SECTION_RODATA u8 const lit_3752[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80593EDC-80593EE0 0004+00 s=1 e=0 z=0  None .rodata    @3880 */
SECTION_RODATA static u32 const lit_3880 = 0x442F0000;

/* 80593EE0-80593EE4 0004+00 s=1 e=0 z=0  None .rodata    @3881 */
SECTION_RODATA static u32 const lit_3881 = 0x447A0000;

/* 80593EE4-80593EE8 0004+00 s=1 e=0 z=0  None .rodata    @3882 */
SECTION_RODATA static u32 const lit_3882 = 0x3F800000;

/* 80593EE8-80593EEC 0004+00 s=1 e=0 z=0  None .rodata    @3883 */
SECTION_RODATA static u32 const lit_3883 = 0xC42F0000;

/* 80593EEC-80593EF0 0004+00 s=1 e=0 z=0  None .rodata    @3884 */
SECTION_RODATA static u32 const lit_3884 = 0xC47A0000;

/* 80593EF0-80593EF4 0004+00 s=1 e=0 z=0  None .rodata    @3885 */
SECTION_RODATA static u32 const lit_3885 = 0x3DCCCCCD;

/* 80593EF4-80593EF8 0004+00 s=1 e=0 z=0  None .rodata    @3886 */
SECTION_RODATA static u32 const lit_3886 = 0x41A00000;

/* 80593EF8-80593EFC 0004+00 s=1 e=0 z=0  None .rodata    @3887 */
SECTION_RODATA static u32 const lit_3887 = 0x3D8F5C29;

/* 80593EFC-80593F04 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80593EFC = "M_IGate";
#pragma pop

/* 80593F04-80593F0C 0008+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80593F04[8] = {
    0x4D, 0x5F, 0x48, 0x47, 0x61, 0x74, 0x65, 0x00,
};

/* 80593F0C-80593F1C 0010+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80593F0C[16] = {
    0x4D, 0x5F, 0x49, 0x7A, 0x75, 0x6D, 0x69, 0x47, 0x61, 0x74, 0x65, 0x2E, 0x62, 0x6D, 0x64, 0x00,
};

/* 80593F1C-80593F2C 0010+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80593F1C[16] = {
    0x4D, 0x5F, 0x48, 0x61, 0x73, 0x68, 0x69, 0x47, 0x61, 0x74, 0x65, 0x2E, 0x62, 0x6D, 0x64, 0x00,
};

/* 80593F2C-80593F3C 0010+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80593F2C[16] = {
    0x4D, 0x5F, 0x49, 0x7A, 0x75, 0x6D, 0x69, 0x47, 0x61, 0x74, 0x65, 0x2E, 0x64, 0x7A, 0x62, 0x00,
};

/* 80593F3C-80593F4C 0010+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80593F3C[16] = {
    0x4D, 0x5F, 0x48, 0x61, 0x73, 0x68, 0x69, 0x47, 0x61, 0x74, 0x65, 0x2E, 0x64, 0x7A, 0x62, 0x00,
};

/* 80593F4C-80593F68 001C+00 s=2 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80593F4C[28] = {
    /* 80593F4C 000A data_80593F4C None */
    0x4D,
    0x5F,
    0x47,
    0x61,
    0x74,
    0x65,
    0x4B,
    0x65,
    0x79,
    0x00,
    /* 80593F56 0012 data_80593F56 None */
    0x4D,
    0x5F,
    0x49,
    0x47,
    0x61,
    0x74,
    0x65,
    0x4B,
    0x65,
    0x79,
    0x2E,
    0x62,
    0x6D,
    0x64,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80593F68-80593F74 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80593F74-80593F88 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80593F88-80593F90 0008+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)&stringBase0,
    (void*)&data_80593F04,
};

/* 80593F90-80593F98 0008+00 s=1 e=0 z=0  None .data      l_bmdName */
SECTION_DATA static void* l_bmdName[2] = {
    (void*)&data_80593F0C,
    (void*)&data_80593F1C,
};

/* 80593F98-80593FA0 0008+00 s=1 e=0 z=0  None .data      l_dzbName */
SECTION_DATA static void* l_dzbName[2] = {
    (void*)&data_80593F2C,
    (void*)&data_80593F3C,
};

/* 80593FA0-80593FA4 0004+00 s=3 e=0 z=0  None .data      l_keyArcName */
SECTION_DATA static void* l_keyArcName = (void*)(((char*)&struct_80593F4C) + 0x0) /* None */;

/* 80593FA4-80593FA8 0004+00 s=1 e=0 z=0  None .data      l_keyBmdName */
SECTION_DATA static void* l_keyBmdName = (void*)(((char*)&struct_80593F4C) + 0xA) /* None */;

/* 805937AC-8059388C 00E0+00 s=1 e=0 z=0  None .text      CreateHeap__12daObjMGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/CreateHeap__12daObjMGate_cFv.s"
}
#pragma pop

/* 8059388C-80593988 00FC+00 s=1 e=0 z=0  None .text      create1st__12daObjMGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/create1st__12daObjMGate_cFv.s"
}
#pragma pop

/* 80593988-80593C4C 02C4+00 s=1 e=0 z=0  None .text      Execute__12daObjMGate_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/Execute__12daObjMGate_cFPPA3_A4_f.s"
}
#pragma pop

/* 80593C4C-80593D18 00CC+00 s=1 e=0 z=0  None .text      Draw__12daObjMGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/Draw__12daObjMGate_cFv.s"
}
#pragma pop

/* 80593D18-80593D74 005C+00 s=1 e=0 z=0  None .text      Delete__12daObjMGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMGate_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/Delete__12daObjMGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80593FA8-80593FC8 0020+00 s=1 e=0 z=0  None .data      daObjMGate_METHODS */
SECTION_DATA static void* daObjMGate_METHODS[8] = {
    (void*)daObjMGate_create1st__FP12daObjMGate_c,
    (void*)daObjMGate_MoveBGDelete__FP12daObjMGate_c,
    (void*)daObjMGate_MoveBGExecute__FP12daObjMGate_c,
    (void*)NULL,
    (void*)daObjMGate_MoveBGDraw__FP12daObjMGate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80593FC8-80593FF8 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MGate */
SECTION_DATA void* g_profile_Obj_MGate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00640000, (void*)&g_fpcLf_Method,
    (void*)0x000005D0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01C40000, (void*)&daObjMGate_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80593FF8-80594020 0028+00 s=1 e=0 z=0  None .data      __vt__12daObjMGate_c */
SECTION_DATA static void* __vt__12daObjMGate_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__12daObjMGate_cFv,
    (void*)Create__12daObjMGate_cFv,
    (void*)Execute__12daObjMGate_cFPPA3_A4_f,
    (void*)Draw__12daObjMGate_cFv,
    (void*)Delete__12daObjMGate_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80593D74-80593DD4 0060+00 s=1 e=0 z=0  None .text      daObjMGate_create1st__FP12daObjMGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMGate_create1st(daObjMGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/daObjMGate_create1st__FP12daObjMGate_c.s"
}
#pragma pop

/* 80593DD4-80593DF4 0020+00 s=1 e=0 z=0  None .text      daObjMGate_MoveBGDelete__FP12daObjMGate_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMGate_MoveBGDelete(daObjMGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/daObjMGate_MoveBGDelete__FP12daObjMGate_c.s"
}
#pragma pop

/* 80593DF4-80593E14 0020+00 s=1 e=0 z=0  None .text      daObjMGate_MoveBGExecute__FP12daObjMGate_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMGate_MoveBGExecute(daObjMGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/daObjMGate_MoveBGExecute__FP12daObjMGate_c.s"
}
#pragma pop

/* 80593E14-80593E40 002C+00 s=1 e=0 z=0  None .text      daObjMGate_MoveBGDraw__FP12daObjMGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMGate_MoveBGDraw(daObjMGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mgate/d_a_obj_mgate/daObjMGate_MoveBGDraw__FP12daObjMGate_c.s"
}
#pragma pop
