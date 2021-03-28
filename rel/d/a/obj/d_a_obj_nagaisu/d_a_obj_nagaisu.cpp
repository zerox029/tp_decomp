//
// Generated By: dol2asm
// Translation Unit: d_a_obj_nagaisu
//

#include "rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjNagaisu_c {
    /* 80C9F3D8 */ daObjNagaisu_c();
    /* 80C9F4B8 */ ~daObjNagaisu_c();
    /* 80C9F5A8 */ void createHeap();
    /* 80C9F668 */ void create();
    /* 80C9F7A8 */ void Delete();
    /* 80C9F81C */ void draw();
    /* 80C9F8C4 */ void execute();
    /* 80C9F914 */ void init();
    /* 80C9F944 */ void setIsu();
};

struct dMdl_obj_c {};

struct dMdl_c {
    /* 8009C668 */ void entryObj(dMdl_obj_c*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct daObjIsuChild_c {
    /* 80C9FA90 */ daObjIsuChild_c();
    /* 80C9FCDC */ ~daObjIsuChild_c();
    /* 80C9FD4C */ void createHeap();
    /* 80C9FE28 */ void create(daObjNagaisu_c*, dCcD_Stts*);
    /* 80C9FF54 */ void execute();
    /* 80CA0034 */ void draw(dMdl_c*);
    /* 80CA00B8 */ void Delete();
    /* 80CA0118 */ void chkHit();
    /* 80CA0180 */ void callEmt();
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

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dMdl_mng_c {
    /* 8009C8D8 */ void entry(J3DModelData*, u16, int);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80C9F45C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
    /* 80C9FAFC */ ~dCcD_Cyl();
    /* 80C9FBC8 */ dCcD_Cyl();
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80C9FC4C */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80C9FC94 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80CA030C */ ~cCcD_GStts();
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

//
// Forward References:
//

static void daObjNagaisu_c_createHeap(fopAc_ac_c*);
static void daObjNagaisu_create(daObjNagaisu_c*);
static void daObjNagaisu_Delete(daObjNagaisu_c*);
static void daObjNagaisu_execute(daObjNagaisu_c*);
static void daObjNagaisu_draw(daObjNagaisu_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Nagaisu[12];

extern "C" static void daObjNagaisu_c_createHeap__FP10fopAc_ac_c();
extern "C" void __ct__14daObjNagaisu_cFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__14daObjNagaisu_cFv();
extern "C" void createHeap__14daObjNagaisu_cFv();
extern "C" void create__14daObjNagaisu_cFv();
extern "C" void Delete__14daObjNagaisu_cFv();
extern "C" void draw__14daObjNagaisu_cFv();
extern "C" void execute__14daObjNagaisu_cFv();
extern "C" void init__14daObjNagaisu_cFv();
extern "C" void setIsu__14daObjNagaisu_cFv();
extern "C" void __ct__15daObjIsuChild_cFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__15daObjIsuChild_cFv();
extern "C" void createHeap__15daObjIsuChild_cFv();
extern "C" void create__15daObjIsuChild_cFP14daObjNagaisu_cP9dCcD_Stts();
extern "C" void execute__15daObjIsuChild_cFv();
extern "C" void draw__15daObjIsuChild_cFP6dMdl_c();
extern "C" void Delete__15daObjIsuChild_cFv();
extern "C" void chkHit__15daObjIsuChild_cFv();
extern "C" void callEmt__15daObjIsuChild_cFv();
extern "C" static void daObjNagaisu_create__FP14daObjNagaisu_c();
extern "C" static void daObjNagaisu_Delete__FP14daObjNagaisu_c();
extern "C" static void daObjNagaisu_execute__FP14daObjNagaisu_c();
extern "C" static void daObjNagaisu_draw__FP14daObjNagaisu_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Nagaisu[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void* operator new(u32);
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
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void entryObj__6dMdl_cFP10dMdl_obj_c();
extern "C" void entry__10dMdl_mng_cFP12J3DModelDataUsi();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__5csXyzFsss();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
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
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80C9F3B8-80C9F3D8 0020+00 s=1 e=0 z=0  None .text      daObjNagaisu_c_createHeap__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNagaisu_c_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/daObjNagaisu_c_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA035C-80CA0378 001C+00 s=3 e=0 z=0  None .rodata    REMOVE_ISU_IDX__14daObjNagaisu_c */
SECTION_RODATA static u8 const REMOVE_ISU_IDX__14daObjNagaisu_c[28] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
    0x00, 0x0E, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x1D,
};

/* 80CA0378-80CA03BC 0044+00 s=1 e=0 z=0  None .rodata    s_CcDCyl__15daObjIsuChild_c */
SECTION_RODATA static u8 const s_CcDCyl__15daObjIsuChild_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA03BC-80CA03C0 0004+00 s=1 e=0 z=0  None .rodata    @3731 */
SECTION_RODATA static u32 const lit_3731 = 0x454E4000;

/* 80CA03C0-80CA03C4 0004+00 s=1 e=0 z=0  None .rodata    @3820 */
SECTION_RODATA static u32 const lit_3820 = 0x44160000;

/* 80CA03C4-80CA03C8 0004+00 s=1 e=0 z=0  None .rodata    @3821 */
SECTION_RODATA static u32 const lit_3821 = 0x43960000;

/* 80CA03C8-80CA03CC 0004+00 s=1 e=0 z=0  None .rodata    @3822 */
SECTION_RODATA static u32 const lit_3822 = 0x44458000;

/* 80CA03CC-80CA03D0 0004+00 s=1 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u32 const lit_3823 = 0x438C0000;

/* 80CA03D0-80CA03D8 0008+00 s=1 e=0 z=0  None .rodata    COL_OFFSET_X$3919 */
SECTION_RODATA static u8 const COL_OFFSET_X[8] = {
    0x00, 0x00, 0x00, 0x3C, 0xFF, 0xFF, 0xFF, 0xC4,
};

/* 80CA03D8-80CA03DC 0004+00 s=1 e=0 z=0  None .rodata    @3940 */
SECTION_RODATA static u32 const lit_3940 = 0xC2480000;

/* 80CA03DC-80CA03E0 0004+00 s=1 e=0 z=0  None .rodata    @3941 */
SECTION_RODATA static u32 const lit_3941 = 0x43340000;

/* 80CA03E0-80CA03E4 0004+00 s=1 e=0 z=0  None .rodata    @3942 */
SECTION_RODATA static u32 const lit_3942 = 0x42820000;

/* 80CA03E4-80CA03EC 0008+00 s=1 e=0 z=0  None .rodata    @3944 */
SECTION_RODATA static u8 const lit_3944[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CA03EC-80CA03F0 0004+00 s=2 e=0 z=0  None .rodata    @3963 */
SECTION_RODATA static u32 const lit_3963 = 0x3F800000;

/* 80CA03F0-80CA03F4 0004+00 s=1 e=0 z=0  None .rodata    @3964 */
SECTION_RODATA static u32 const lit_3964 = 0xBF800000;

/* 80CA03F4-80CA03FC 0008+00 s=1 e=0 z=0  None .rodata    PARTICLE_NAME$4004 */
SECTION_RODATA static u8 const PARTICLE_NAME[8] = {
    0x8A, 0xE7, 0x8A, 0xE8, 0x8A, 0xE9, 0x8A, 0xEA,
};

/* 80CA03FC-80CA0400 0004+00 s=1 e=0 z=0  None .rodata    @4029 */
SECTION_RODATA static u32 const lit_4029 = 0x3FA00000;

/* 80CA0400-80CA0408 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CA0400 = "Nagaisu";
#pragma pop

/* 80CA0408-80CA040C 0004+00 s=4 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CA040C-80CA042C 0020+00 s=1 e=0 z=0  None .data      daObjNagaisu_METHODS */
SECTION_DATA static void* daObjNagaisu_METHODS[8] = {
    (void*)daObjNagaisu_create__FP14daObjNagaisu_c,
    (void*)daObjNagaisu_Delete__FP14daObjNagaisu_c,
    (void*)daObjNagaisu_execute__FP14daObjNagaisu_c,
    (void*)NULL,
    (void*)daObjNagaisu_draw__FP14daObjNagaisu_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CA042C-80CA045C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Nagaisu */
SECTION_DATA void* g_profile_Obj_Nagaisu[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x019C0000, (void*)&g_fpcLf_Method,
    (void*)0x0000B6E4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02E30000, (void*)&daObjNagaisu_METHODS,
    (void*)0x00040000, (void*)0x030E0000,
};

/* 80CA045C-80CA0468 000C+00 s=2 e=0 z=0  None .data      __vt__15daObjIsuChild_c */
SECTION_DATA static void* __vt__15daObjIsuChild_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__15daObjIsuChild_cFv,
};

/* 80CA0468-80CA0474 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CA0474-80CA0480 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CA0480-80CA048C 000C+00 s=2 e=0 z=0  None .data      __vt__14daObjNagaisu_c */
SECTION_DATA static void* __vt__14daObjNagaisu_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14daObjNagaisu_cFv,
};

/* 80C9F3D8-80C9F45C 0084+00 s=2 e=0 z=0  None .text      __ct__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjNagaisu_c::daObjNagaisu_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__ct__14daObjNagaisu_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA048C-80CA0498 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CA0498-80CA04A4 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C9F45C-80C9F4B8 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C9F4B8-80C9F5A8 00F0+00 s=1 e=0 z=0  None .text      __dt__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjNagaisu_c::~daObjNagaisu_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__dt__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9F5A8-80C9F668 00C0+00 s=1 e=0 z=0  None .text      createHeap__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNagaisu_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/createHeap__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9F668-80C9F7A8 0140+00 s=1 e=0 z=0  None .text      create__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNagaisu_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/create__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9F7A8-80C9F81C 0074+00 s=1 e=0 z=0  None .text      Delete__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNagaisu_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/Delete__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9F81C-80C9F8C4 00A8+00 s=1 e=0 z=0  None .text      draw__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNagaisu_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/draw__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9F8C4-80C9F914 0050+00 s=1 e=0 z=0  None .text      execute__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNagaisu_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/execute__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9F914-80C9F944 0030+00 s=1 e=0 z=0  None .text      init__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNagaisu_c::init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/init__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9F944-80C9FA90 014C+00 s=1 e=0 z=0  None .text      setIsu__14daObjNagaisu_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNagaisu_c::setIsu() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/setIsu__14daObjNagaisu_cFv.s"
}
#pragma pop

/* 80C9FA90-80C9FAFC 006C+00 s=1 e=0 z=0  None .text      __ct__15daObjIsuChild_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjIsuChild_c::daObjIsuChild_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__ct__15daObjIsuChild_cFv.s"
}
#pragma pop

/* 80C9FAFC-80C9FBC8 00CC+00 s=2 e=0 z=0  None .text      __dt__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::~dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__dt__8dCcD_CylFv.s"
}
#pragma pop

/* 80C9FBC8-80C9FC4C 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__ct__8dCcD_CylFv.s"
}
#pragma pop

/* 80C9FC4C-80C9FC94 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C9FC94-80C9FCDC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C9FCDC-80C9FD4C 0070+00 s=3 e=0 z=0  None .text      __dt__15daObjIsuChild_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjIsuChild_c::~daObjIsuChild_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__dt__15daObjIsuChild_cFv.s"
}
#pragma pop

/* 80C9FD4C-80C9FE28 00DC+00 s=1 e=0 z=0  None .text      createHeap__15daObjIsuChild_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIsuChild_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/createHeap__15daObjIsuChild_cFv.s"
}
#pragma pop

/* 80C9FE28-80C9FF54 012C+00 s=1 e=0 z=0  None .text
 * create__15daObjIsuChild_cFP14daObjNagaisu_cP9dCcD_Stts       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIsuChild_c::create(daObjNagaisu_c* param_0, dCcD_Stts* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/create__15daObjIsuChild_cFP14daObjNagaisu_cP9dCcD_Stts.s"
}
#pragma pop

/* 80C9FF54-80CA0034 00E0+00 s=1 e=0 z=0  None .text      execute__15daObjIsuChild_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIsuChild_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/execute__15daObjIsuChild_cFv.s"
}
#pragma pop

/* 80CA0034-80CA00B8 0084+00 s=1 e=0 z=0  None .text      draw__15daObjIsuChild_cFP6dMdl_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIsuChild_c::draw(dMdl_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/draw__15daObjIsuChild_cFP6dMdl_c.s"
}
#pragma pop

/* 80CA00B8-80CA0118 0060+00 s=2 e=0 z=0  None .text      Delete__15daObjIsuChild_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIsuChild_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/Delete__15daObjIsuChild_cFv.s"
}
#pragma pop

/* 80CA0118-80CA0180 0068+00 s=1 e=0 z=0  None .text      chkHit__15daObjIsuChild_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIsuChild_c::chkHit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/chkHit__15daObjIsuChild_cFv.s"
}
#pragma pop

/* 80CA0180-80CA0258 00D8+00 s=1 e=0 z=0  None .text      callEmt__15daObjIsuChild_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIsuChild_c::callEmt() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/callEmt__15daObjIsuChild_cFv.s"
}
#pragma pop

/* 80CA0258-80CA02AC 0054+00 s=1 e=0 z=0  None .text      daObjNagaisu_create__FP14daObjNagaisu_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNagaisu_create(daObjNagaisu_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/daObjNagaisu_create__FP14daObjNagaisu_c.s"
}
#pragma pop

/* 80CA02AC-80CA02CC 0020+00 s=1 e=0 z=0  None .text      daObjNagaisu_Delete__FP14daObjNagaisu_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNagaisu_Delete(daObjNagaisu_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/daObjNagaisu_Delete__FP14daObjNagaisu_c.s"
}
#pragma pop

/* 80CA02CC-80CA02EC 0020+00 s=1 e=0 z=0  None .text      daObjNagaisu_execute__FP14daObjNagaisu_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNagaisu_execute(daObjNagaisu_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/daObjNagaisu_execute__FP14daObjNagaisu_c.s"
}
#pragma pop

/* 80CA02EC-80CA030C 0020+00 s=1 e=0 z=0  None .text      daObjNagaisu_draw__FP14daObjNagaisu_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNagaisu_draw(daObjNagaisu_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/daObjNagaisu_draw__FP14daObjNagaisu_c.s"
}
#pragma pop

/* 80CA030C-80CA0354 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nagaisu/d_a_obj_nagaisu/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
