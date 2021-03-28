//
// Generated By: dol2asm
// Translation Unit: d_a_obj_kaisou
//

#include "rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);
};

struct J3DModel {};

struct J3DJoint {};

struct daObjKaisou_c {
    /* 80C34058 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 80C34390 */ void initCcCylinder();
    /* 80C343F0 */ void setCcCylinder();
    /* 80C34438 */ void ObjHit();
    /* 80C34824 */ void Execute();
    /* 80C34A98 */ void Delete();
    /* 80C34ACC */ void setBaseMtx();
    /* 80C34BD8 */ void create();
};

struct dSv_memBit_c {
    /* 80034934 */ void isDungeonItem(int) const;
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
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084658 */ void ChkCoHit();
    /* 800846F0 */ void GetCoHitObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 80C34E4C */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80C34E94 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

//
// Forward References:
//

static void JointCallBack(J3DJoint*, int);
static void useHeapInit(fopAc_ac_c*);
static void daObjKaisou_Create(fopAc_ac_c*);
static void daObjKaisou_Delete(daObjKaisou_c*);
static void daObjKaisou_Draw(daObjKaisou_c*);
static void daObjKaisou_Execute(daObjKaisou_c*);
static bool daObjKaisou_IsDelete(daObjKaisou_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Kaisou[12];

extern "C" void ctrlJoint__13daObjKaisou_cFP8J3DJointP8J3DModel();
extern "C" static void JointCallBack__FP8J3DJointi();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObjKaisou_Create__FP10fopAc_ac_c();
extern "C" static void daObjKaisou_Delete__FP13daObjKaisou_c();
extern "C" void initCcCylinder__13daObjKaisou_cFv();
extern "C" void setCcCylinder__13daObjKaisou_cFv();
extern "C" void ObjHit__13daObjKaisou_cFv();
extern "C" void Execute__13daObjKaisou_cFv();
extern "C" void Delete__13daObjKaisou_cFv();
extern "C" void setBaseMtx__13daObjKaisou_cFv();
extern "C" static void daObjKaisou_Draw__FP13daObjKaisou_c();
extern "C" static void daObjKaisou_Execute__FP13daObjKaisou_c();
extern "C" void create__13daObjKaisou_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static bool daObjKaisou_IsDelete__FP13daObjKaisou_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Kaisou[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void cLib_addCalcAngleS(s16*, s16, s16, s16, s16);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern f32 mGroundY__11fopAcM_gc_c;

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern f32 mGroundY__11fopAcM_gc_c;

//
// Declarations:
//

/* ############################################################################################## */
/* 80C34EEC-80C34EF0 0004+00 s=4 e=0 z=0  None .rodata    @3806 */
SECTION_RODATA static u32 const lit_3806 = 0x3F333333;

/* 80C34EF0-80C34EF4 0004+00 s=1 e=0 z=0  None .rodata    @3807 */
SECTION_RODATA static u32 const lit_3807 = 0x3F000000;

/* 80C34EF4-80C34EFC 0008+00 s=3 e=0 z=0  None .rodata    @3809 */
SECTION_RODATA static u8 const lit_3809[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C34058-80C34288 0230+00 s=1 e=0 z=0  None .text
 * ctrlJoint__13daObjKaisou_cFP8J3DJointP8J3DModel              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/ctrlJoint__13daObjKaisou_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 80C34288-80C342D4 004C+00 s=1 e=0 z=0  None .text      JointCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JointCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/JointCallBack__FP8J3DJointi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C34EFC-80C34F40 0044+00 s=1 e=0 z=0  None .rodata    ccCylSrc$3850 */
SECTION_RODATA static u8 const ccCylSrc[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};

/* 80C34F40-80C34F44 0004+00 s=1 e=0 z=0  None .rodata    @3963 */
SECTION_RODATA static u8 const lit_3963[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C34F44-80C34F4C 0008+00 s=1 e=0 z=0  None .rodata    @3964 */
SECTION_RODATA static u8 const lit_3964[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C34F4C-80C34F54 0008+00 s=1 e=0 z=0  None .rodata    @3965 */
SECTION_RODATA static u8 const lit_3965[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C34F54-80C34F5C 0008+00 s=1 e=0 z=0  None .rodata    @3966 */
SECTION_RODATA static u8 const lit_3966[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C34F5C-80C34F60 0004+00 s=2 e=0 z=0  None .rodata    @3967 */
SECTION_RODATA static u32 const lit_3967 = 0x40800000;

/* 80C34F60-80C34F64 0004+00 s=1 e=0 z=0  None .rodata    @3968 */
SECTION_RODATA static u32 const lit_3968 = 0x3F99999A;

/* 80C34F64-80C34F68 0004+00 s=1 e=0 z=0  None .rodata    @3969 */
SECTION_RODATA static u32 const lit_3969 = 0x42F00000;

/* 80C34F68-80C34F6C 0004+00 s=1 e=0 z=0  None .rodata    @3970 */
SECTION_RODATA static u32 const lit_3970 = 0x45800000;

/* 80C34F6C-80C34F74 0004+04 s=1 e=0 z=0  None .rodata    @3995 */
SECTION_RODATA static u32 const lit_3995[1 + 1 /* padding */] = {
    0x46800000,
    /* padding */
    0x00000000,
};

/* 80C34F74-80C34F7C 0008+00 s=1 e=0 z=0  None .rodata    @3996 */
SECTION_RODATA static u8 const lit_3996[8] = {
    0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C34F7C-80C34F80 0004+00 s=1 e=0 z=0  None .rodata    @3997 */
SECTION_RODATA static u32 const lit_3997 = 0x47000000;

/* 80C34F80-80C34F84 0004+00 s=1 e=0 z=0  None .rodata    @3998 */
SECTION_RODATA static u32 const lit_3998 = 0x3FE66666;

/* 80C34F84-80C34F88 0004+00 s=1 e=0 z=0  None .rodata    @4022 */
SECTION_RODATA static u32 const lit_4022 = 0x40000000;

/* 80C34F88-80C34F8C 0004+00 s=1 e=0 z=0  None .rodata    @4157 */
SECTION_RODATA static u32 const lit_4157 = 0xC1100000;

/* 80C34F8C-80C34F90 0004+00 s=1 e=0 z=0  None .rodata    @4158 */
SECTION_RODATA static u32 const lit_4158 = 0x42C80000;

/* 80C34F90-80C34F94 0004+00 s=1 e=0 z=0  None .rodata    @4159 */
SECTION_RODATA static u32 const lit_4159 = 0xC47A0000;

/* 80C34F94-80C34F98 0004+00 s=1 e=0 z=0  None .rodata    @4160 */
SECTION_RODATA static u32 const lit_4160 = 0xC3FA0000;

/* 80C34F98-80C34F9C 0004+00 s=1 e=0 z=0  None .rodata    @4161 */
SECTION_RODATA static u32 const lit_4161 = 0x447A0000;

/* 80C34F9C-80C34FA0 0004+00 s=1 e=0 z=0  None .rodata    @4162 */
SECTION_RODATA static u32 const lit_4162 = 0x43FA0000;

/* 80C34FA0-80C34FBE 001E+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C34FA0 = "M_kaisou";
SECTION_DEAD char const* const stringBase_80C34FA9 = "M_kaisou.bmd";
SECTION_DEAD char const* const stringBase_80C34FB6 = "D_MN01A";
#pragma pop

/* 80C34FC0-80C34FC4 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C342D4-80C3434C 0078+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C3434C-80C3436C 0020+00 s=1 e=0 z=0  None .text      daObjKaisou_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKaisou_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/daObjKaisou_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C3436C-80C34390 0024+00 s=1 e=0 z=0  None .text      daObjKaisou_Delete__FP13daObjKaisou_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKaisou_Delete(daObjKaisou_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/daObjKaisou_Delete__FP13daObjKaisou_c.s"
}
#pragma pop

/* 80C34390-80C343F0 0060+00 s=1 e=0 z=0  None .text      initCcCylinder__13daObjKaisou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/initCcCylinder__13daObjKaisou_cFv.s"
}
#pragma pop

/* 80C343F0-80C34438 0048+00 s=1 e=0 z=0  None .text      setCcCylinder__13daObjKaisou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::setCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/setCcCylinder__13daObjKaisou_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C34FC4-80C35038 0074+00 s=1 e=0 z=0  None .data      @3975 */
SECTION_DATA static void* lit_3975[29] = {
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x34C),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x360),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x360),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x34C),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x360),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x374),
    (void*)(((char*)ObjHit__13daObjKaisou_cFv) + 0x34C),
};

/* 80C34438-80C34824 03EC+00 s=2 e=0 z=0  None .text      ObjHit__13daObjKaisou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::ObjHit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/ObjHit__13daObjKaisou_cFv.s"
}
#pragma pop

/* 80C34824-80C34A98 0274+00 s=1 e=0 z=0  None .text      Execute__13daObjKaisou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/Execute__13daObjKaisou_cFv.s"
}
#pragma pop

/* 80C34A98-80C34ACC 0034+00 s=1 e=0 z=0  None .text      Delete__13daObjKaisou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/Delete__13daObjKaisou_cFv.s"
}
#pragma pop

/* 80C34ACC-80C34B34 0068+00 s=1 e=0 z=0  None .text      setBaseMtx__13daObjKaisou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/setBaseMtx__13daObjKaisou_cFv.s"
}
#pragma pop

/* 80C34B34-80C34BB8 0084+00 s=1 e=0 z=0  None .text      daObjKaisou_Draw__FP13daObjKaisou_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKaisou_Draw(daObjKaisou_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/daObjKaisou_Draw__FP13daObjKaisou_c.s"
}
#pragma pop

/* 80C34BB8-80C34BD8 0020+00 s=2 e=0 z=0  None .text      daObjKaisou_Execute__FP13daObjKaisou_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKaisou_Execute(daObjKaisou_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/daObjKaisou_Execute__FP13daObjKaisou_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C35038-80C35058 0020+00 s=1 e=0 z=0  None .data      l_daObjKaisou_Method */
SECTION_DATA static void* l_daObjKaisou_Method[8] = {
    (void*)daObjKaisou_Create__FP10fopAc_ac_c,
    (void*)daObjKaisou_Delete__FP13daObjKaisou_c,
    (void*)daObjKaisou_Execute__FP13daObjKaisou_c,
    (void*)daObjKaisou_IsDelete__FP13daObjKaisou_c,
    (void*)daObjKaisou_Draw__FP13daObjKaisou_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C35058-80C35088 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Kaisou */
SECTION_DATA void* g_profile_Obj_Kaisou[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x006A0000, (void*)&g_fpcLf_Method,
    (void*)0x0000079C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01CC0000, (void*)&l_daObjKaisou_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80C35088-80C35094 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C35094-80C350A0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C34BD8-80C34E4C 0274+00 s=1 e=0 z=0  None .text      create__13daObjKaisou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKaisou_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/create__13daObjKaisou_cFv.s"
}
#pragma pop

/* 80C34E4C-80C34E94 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C34E94-80C34EDC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kaisou/d_a_obj_kaisou/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C34EDC-80C34EE4 0008+00 s=1 e=0 z=0  None .text      daObjKaisou_IsDelete__FP13daObjKaisou_c */
static bool daObjKaisou_IsDelete(daObjKaisou_c* param_0) {
    return true;
}
