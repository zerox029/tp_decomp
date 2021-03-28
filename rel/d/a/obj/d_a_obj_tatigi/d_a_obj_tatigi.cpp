//
// Generated By: dol2asm
// Translation Unit: d_a_obj_tatigi
//

#include "rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct tg_ss {
    /* 80D083C0 */ ~tg_ss();
    /* 80D08494 */ tg_ss();
};

struct request_of_phase_process_class {};

struct obj_tatigi_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModel {};

struct J3DModelData {};

struct dComIfG_play_c {
    /* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
    /* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
    /* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
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
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084658 */ void ChkCoHit();
    /* 800846F0 */ void GetCoHitObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80D08528 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D08570 */ ~cM3dGAab();
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_GndChk {
    /* 80267D0C */ void SetPos(Vec const*);
};

struct cBgS {
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

//
// Forward References:
//

static void daObj_Tatigi_Draw(obj_tatigi_class*);
static void daObj_Tatigi_Execute(obj_tatigi_class*);
static bool daObj_Tatigi_IsDelete(obj_tatigi_class*);
static void daObj_Tatigi_Delete(obj_tatigi_class*);
static void useHeapInit(fopAc_ac_c*);
static void set_pos_check(obj_tatigi_class*, int);
static void daObj_Tatigi_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_TATIGI[12];

extern "C" static void daObj_Tatigi_Draw__FP16obj_tatigi_class();
extern "C" static void daObj_Tatigi_Execute__FP16obj_tatigi_class();
extern "C" static bool daObj_Tatigi_IsDelete__FP16obj_tatigi_class();
extern "C" static void daObj_Tatigi_Delete__FP16obj_tatigi_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void set_pos_check__FP16obj_tatigi_classi();
extern "C" static void daObj_Tatigi_Create__FP10fopAc_ac_c();
extern "C" void __dt__5tg_ssFv();
extern "C" void __ct__5tg_ssFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_TATIGI[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void cM_rndF(f32);
void cM_initRnd2(int, int, int);
void cM_rndF2(f32);
void MtxTrans(f32, f32, f32, u8);
void MtxPosition(cXyz*, cXyz*);
void MtxPush();
void MtxPull();
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
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_rndF__Ff();
extern "C" void cM_initRnd2__Fiii();
extern "C" void cM_rndF2__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* 80D079D8-80D07A60 0088+00 s=1 e=0 z=0  None .text      daObj_Tatigi_Draw__FP16obj_tatigi_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Tatigi_Draw(obj_tatigi_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/daObj_Tatigi_Draw__FP16obj_tatigi_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D085C0-80D085C4 0004+00 s=3 e=0 z=0  None .rodata    @3867 */
SECTION_RODATA static u32 const lit_3867 = 0x41F00000;

/* 80D085C4-80D085C8 0004+00 s=1 e=0 z=0  None .rodata    @3868 */
SECTION_RODATA static u32 const lit_3868 = 0x43FA0000;

/* 80D085C8-80D085CC 0004+00 s=1 e=0 z=0  None .rodata    @3869 */
SECTION_RODATA static u32 const lit_3869 = 0x40A00000;

/* 80D085CC-80D085D0 0004+00 s=1 e=0 z=0  None .rodata    @3870 */
SECTION_RODATA static u32 const lit_3870 = 0x40E00000;

/* 80D085D0-80D085D8 0008+00 s=1 e=0 z=0  None .rodata    @3872 */
SECTION_RODATA static u8 const lit_3872[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80D07A60-80D07CE8 0288+00 s=2 e=0 z=0  None .text      daObj_Tatigi_Execute__FP16obj_tatigi_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Tatigi_Execute(obj_tatigi_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/daObj_Tatigi_Execute__FP16obj_tatigi_class.s"
}
#pragma pop

/* 80D07CE8-80D07CF0 0008+00 s=1 e=0 z=0  None .text daObj_Tatigi_IsDelete__FP16obj_tatigi_class
 */
static bool daObj_Tatigi_IsDelete(obj_tatigi_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80D085D8-80D085E0 0004+04 s=2 e=0 z=0  None .rodata    @3955 */
SECTION_RODATA static u8 const lit_3955[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D085E0-80D085E8 0008+00 s=1 e=0 z=0  None .rodata    @3956 */
SECTION_RODATA static u8 const lit_3956[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D085E8-80D085F0 0008+00 s=1 e=0 z=0  None .rodata    @3957 */
SECTION_RODATA static u8 const lit_3957[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D085F0-80D085F8 0008+00 s=1 e=0 z=0  None .rodata    @3958 */
SECTION_RODATA static u8 const lit_3958[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D085F8-80D085FC 0004+00 s=1 e=0 z=0  None .rodata    @3959 */
SECTION_RODATA static u32 const lit_3959 = 0x43160000;

/* 80D085FC-80D08600 0004+00 s=1 e=0 z=0  None .rodata    @4068 */
SECTION_RODATA static u32 const lit_4068 = 0x47800000;

/* 80D08600-80D08604 0004+00 s=1 e=0 z=0  None .rodata    @4069 */
SECTION_RODATA static u32 const lit_4069 = 0x42C80000;

/* 80D08604-80D08608 0004+00 s=1 e=0 z=0  None .rodata    @4070 */
SECTION_RODATA static u32 const lit_4070 = 0x3F19999A;

/* 80D08608-80D0860C 0004+00 s=1 e=0 z=0  None .rodata    @4071 */
SECTION_RODATA static u32 const lit_4071 = 0x3ECCCCCD;

/* 80D0860C-80D08610 0004+00 s=1 e=0 z=0  None .rodata    @4072 */
SECTION_RODATA static u32 const lit_4072 = 0x3F800000;

/* 80D08610-80D08618 0004+04 s=1 e=0 z=0  None .rodata    @4073 */
SECTION_RODATA static u32 const lit_4073[1 + 1 /* padding */] = {
    0x477FFF00,
    /* padding */
    0x00000000,
};

/* 80D08618-80D08620 0008+00 s=1 e=0 z=0  None .rodata    @4076 */
SECTION_RODATA static u8 const lit_4076[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D08620-80D08627 0007+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D08620 = "Obj_tg";
#pragma pop

/* 80D07CF0-80D07D78 0088+00 s=1 e=0 z=0  None .text      daObj_Tatigi_Delete__FP16obj_tatigi_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Tatigi_Delete(obj_tatigi_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/daObj_Tatigi_Delete__FP16obj_tatigi_class.s"
}
#pragma pop

/* 80D07D78-80D07E24 00AC+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D07E24-80D07FD8 01B4+00 s=1 e=0 z=0  None .text      set_pos_check__FP16obj_tatigi_classi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void set_pos_check(obj_tatigi_class* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/set_pos_check__FP16obj_tatigi_classi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D08628-80D0866C 0044+00 s=1 e=0 z=0  None .data      cc_cyl_src$3986 */
SECTION_DATA static u8 cc_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x42, 0xF0, 0x00, 0x00,
};

/* 80D07FD8-80D083C0 03E8+00 s=1 e=0 z=0  None .text      daObj_Tatigi_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Tatigi_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/daObj_Tatigi_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D0866C-80D0868C 0020+00 s=1 e=0 z=0  None .data      l_daObj_Tatigi_Method */
SECTION_DATA static void* l_daObj_Tatigi_Method[8] = {
    (void*)daObj_Tatigi_Create__FP10fopAc_ac_c,
    (void*)daObj_Tatigi_Delete__FP16obj_tatigi_class,
    (void*)daObj_Tatigi_Execute__FP16obj_tatigi_class,
    (void*)daObj_Tatigi_IsDelete__FP16obj_tatigi_class,
    (void*)daObj_Tatigi_Draw__FP16obj_tatigi_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D0868C-80D086BC 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_TATIGI */
SECTION_DATA void* g_profile_OBJ_TATIGI[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01170000, (void*)&g_fpcLf_Method,
    (void*)0x00001BC0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02C50000, (void*)&l_daObj_Tatigi_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D086BC-80D086C8 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D086C8-80D086D4 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D083C0-80D08494 00D4+00 s=1 e=0 z=0  None .text      __dt__5tg_ssFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm tg_ss::~tg_ss() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/__dt__5tg_ssFv.s"
}
#pragma pop

/* 80D08494-80D08528 0094+00 s=1 e=0 z=0  None .text      __ct__5tg_ssFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm tg_ss::tg_ss() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/__ct__5tg_ssFv.s"
}
#pragma pop

/* 80D08528-80D08570 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D08570-80D085B8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tatigi/d_a_obj_tatigi/__dt__8cM3dGAabFv.s"
}
#pragma pop
