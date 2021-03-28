//
// Generated By: dol2asm
// Translation Unit: d_a_obj_sakuita
//

#include "rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 80266F48 */ void normalizeZP();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjSakuita_c {
    /* 80CC46F8 */ void create_init();
    /* 80CC47F8 */ void initBaseMtx();
    /* 80CC4818 */ void setBaseMtx();
    /* 80CC489C */ void setPlatePos();
    /* 80CC4A98 */ void calcAngle();
    /* 80CC4C9C */ ~daObjSakuita_c();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct J3DModel {};

struct J3DModelData {};

struct dComIfG_play_c {
    /* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
    /* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
    /* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80CC5008 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct cM3dGCyl {
    /* 80CC4F78 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80CC4FC0 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 80CC5064 */ ~cCcD_GStts();
};

//
// Forward References:
//

static void createSolidHeap(fopAc_ac_c*);
static void daObjSakuita_Draw(daObjSakuita_c*);
static void daObjSakuita_Execute(daObjSakuita_c*);
static bool daObjSakuita_IsDelete(daObjSakuita_c*);
static void daObjSakuita_Delete(daObjSakuita_c*);
static void daObjSakuita_Create(fopAc_ac_c*);
extern "C" extern u32 const lit_3704;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Sakuita[12];

extern "C" void create_init__14daObjSakuita_cFv();
extern "C" void initBaseMtx__14daObjSakuita_cFv();
extern "C" void setBaseMtx__14daObjSakuita_cFv();
extern "C" void setPlatePos__14daObjSakuita_cFv();
extern "C" void calcAngle__14daObjSakuita_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" static void daObjSakuita_Draw__FP14daObjSakuita_c();
extern "C" static void daObjSakuita_Execute__FP14daObjSakuita_c();
extern "C" static bool daObjSakuita_IsDelete__FP14daObjSakuita_c();
extern "C" static void daObjSakuita_Delete__FP14daObjSakuita_c();
extern "C" void __dt__14daObjSakuita_cFv();
extern "C" static void daObjSakuita_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern u32 const lit_3704;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Sakuita[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dKyw_get_AllWind_vec(cXyz*, cXyz*, f32*);
void cM_atan2s(f32, f32);
void cM_rnd();
void cLib_chaseF(f32*, f32, f32);
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

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
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

//
// Declarations:
//

/* ############################################################################################## */
/* 80CC50B4-80CC50E0 002C+00 s=3 e=0 z=0  None .rodata    M_attr__14daObjSakuita_c */
SECTION_RODATA static u8 const M_attr__14daObjSakuita_c[44] = {
    0x41, 0xA0, 0x00, 0x00, 0x41, 0x40, 0x00, 0x00, 0x42, 0x8C, 0x00, 0x00, 0xC2, 0x48, 0x00,
    0x00, 0x3F, 0x4C, 0xCC, 0xCD, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x44, 0x61,
    0x00, 0x00, 0x46, 0x9C, 0x40, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x14, 0x00, 0x14, 0x00,
};

/* 80CC50E0-80CC50E4 0004+00 s=1 e=0 z=0  None .rodata    @3658 */
SECTION_RODATA static u32 const lit_3658 = 0xC1F00000;

/* 80CC50E4-80CC50E8 0004+00 s=1 e=0 z=0  None .rodata    @3659 */
SECTION_RODATA static u32 const lit_3659 = 0xC2B40000;

/* 80CC50E8-80CC50EC 0004+00 s=1 e=0 z=0  None .rodata    @3660 */
SECTION_RODATA static u32 const lit_3660 = 0xC1200000;

/* 80CC50EC-80CC50F0 0004+00 s=1 e=0 z=0  None .rodata    @3661 */
SECTION_RODATA static u32 const lit_3661 = 0x41F00000;

/* 80CC50F0-80CC50F4 0004+00 s=1 e=0 z=0  None .rodata    @3662 */
SECTION_RODATA static u32 const lit_3662 = 0x41A00000;

/* 80CC50F4-80CC50F8 0004+00 s=1 e=0 z=0  None .rodata    @3663 */
SECTION_RODATA static u32 const lit_3663 = 0x41200000;

/* 80CC50F8-80CC50FC 0004+00 s=0 e=0 z=0  None .rodata    @3704 */
SECTION_RODATA u32 const lit_3704 = 0x3F000000;

/* 80CC50FC-80CC5100 0004+00 s=1 e=0 z=0  None .rodata    @3761 */
SECTION_RODATA static u32 const lit_3761 = 0x3DCCCCCD;

/* 80CC5100-80CC5104 0004+00 s=1 e=0 z=0  None .rodata    @3762 */
SECTION_RODATA static u8 const lit_3762[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CC5104-80CC5108 0004+00 s=1 e=0 z=0  None .rodata    @3763 */
SECTION_RODATA static u32 const lit_3763 = 0x3ECCCCCD;

/* 80CC5108-80CC510C 0004+00 s=1 e=0 z=0  None .rodata    @3764 */
SECTION_RODATA static u32 const lit_3764 = 0x46000000;

/* 80CC510C-80CC5114 0008+00 s=1 e=0 z=0  None .rodata    @3781 */
SECTION_RODATA static u8 const lit_3781[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CC5114-80CC512C 0018+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CC5114 = "A_Sakuita";
SECTION_DEAD char const* const stringBase_80CC511E = "A_Sakuita.bmd";
#pragma pop

/* 80CC512C-80CC5130 0004+00 s=4 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CC46F8-80CC47F8 0100+00 s=1 e=0 z=0  None .text      create_init__14daObjSakuita_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSakuita_c::create_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/create_init__14daObjSakuita_cFv.s"
}
#pragma pop

/* 80CC47F8-80CC4818 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__14daObjSakuita_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSakuita_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/initBaseMtx__14daObjSakuita_cFv.s"
}
#pragma pop

/* 80CC4818-80CC489C 0084+00 s=2 e=0 z=0  None .text      setBaseMtx__14daObjSakuita_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSakuita_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/setBaseMtx__14daObjSakuita_cFv.s"
}
#pragma pop

/* 80CC489C-80CC4A98 01FC+00 s=1 e=0 z=0  None .text      setPlatePos__14daObjSakuita_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSakuita_c::setPlatePos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/setPlatePos__14daObjSakuita_cFv.s"
}
#pragma pop

/* 80CC4A98-80CC4B5C 00C4+00 s=1 e=0 z=0  None .text      calcAngle__14daObjSakuita_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSakuita_c::calcAngle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/calcAngle__14daObjSakuita_cFv.s"
}
#pragma pop

/* 80CC4B5C-80CC4BD4 0078+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CC4BD4-80CC4C14 0040+00 s=1 e=0 z=0  None .text      daObjSakuita_Draw__FP14daObjSakuita_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSakuita_Draw(daObjSakuita_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/daObjSakuita_Draw__FP14daObjSakuita_c.s"
}
#pragma pop

/* 80CC4C14-80CC4C6C 0058+00 s=1 e=0 z=0  None .text      daObjSakuita_Execute__FP14daObjSakuita_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSakuita_Execute(daObjSakuita_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/daObjSakuita_Execute__FP14daObjSakuita_c.s"
}
#pragma pop

/* 80CC4C6C-80CC4C74 0008+00 s=1 e=0 z=0  None .text      daObjSakuita_IsDelete__FP14daObjSakuita_c
 */
static bool daObjSakuita_IsDelete(daObjSakuita_c* param_0) {
    return true;
}

/* 80CC4C74-80CC4C9C 0028+00 s=1 e=0 z=0  None .text      daObjSakuita_Delete__FP14daObjSakuita_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSakuita_Delete(daObjSakuita_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/daObjSakuita_Delete__FP14daObjSakuita_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CC5130-80CC5150 0020+00 s=1 e=0 z=0  None .data      l_daObjSakuita_Method */
SECTION_DATA static void* l_daObjSakuita_Method[8] = {
    (void*)daObjSakuita_Create__FP10fopAc_ac_c,
    (void*)daObjSakuita_Delete__FP14daObjSakuita_c,
    (void*)daObjSakuita_Execute__FP14daObjSakuita_c,
    (void*)daObjSakuita_IsDelete__FP14daObjSakuita_c,
    (void*)daObjSakuita_Draw__FP14daObjSakuita_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CC5150-80CC5180 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Sakuita */
SECTION_DATA void* g_profile_Obj_Sakuita[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01540000, (void*)&g_fpcLf_Method,
    (void*)0x00000750, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00240000, (void*)&l_daObjSakuita_Method,
    (void*)0x00040180, (void*)0x000E0000,
};

/* 80CC5180-80CC518C 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CC518C-80CC5198 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CC5198-80CC51A4 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CC51A4-80CC51B0 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CC4C9C-80CC4E40 01A4+00 s=1 e=0 z=0  None .text      __dt__14daObjSakuita_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjSakuita_c::~daObjSakuita_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/__dt__14daObjSakuita_cFv.s"
}
#pragma pop

/* 80CC4E40-80CC4F78 0138+00 s=1 e=0 z=0  None .text      daObjSakuita_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSakuita_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/daObjSakuita_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CC4F78-80CC4FC0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80CC4FC0-80CC5008 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CC5008-80CC5064 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CC5064-80CC50AC 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/d_a_obj_sakuita/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
