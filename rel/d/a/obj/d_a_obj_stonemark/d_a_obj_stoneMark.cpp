//
// Generated By: dol2asm
// Translation Unit: d_a_obj_stoneMark
//

#include "rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark.h"
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
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjSMark_c {
    /* 8059A018 */ void initBaseMtx();
    /* 8059A038 */ void setBaseMtx();
    /* 8059A080 */ void Create();
    /* 8059A168 */ void create();
    /* 8059A2CC */ void draw();
    /* 8059A33C */ void _delete();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 8059A25C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cBgS_PolyInfo {};

struct _GXTlutObj {};

struct _GXTexObj {};

struct ResTIMG {};

//
// Forward References:
//

static void daObjSMark_Draw(daObjSMark_c*);
static void daObjSMark_Delete(daObjSMark_c*);
static void daObjSMark_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_StoneMark[12];

extern "C" void initBaseMtx__12daObjSMark_cFv();
extern "C" void setBaseMtx__12daObjSMark_cFv();
extern "C" void Create__12daObjSMark_cFv();
extern "C" void create__12daObjSMark_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void draw__12daObjSMark_cFv();
extern "C" void _delete__12daObjSMark_cFv();
extern "C" static void daObjSMark_Draw__FP12daObjSMark_c();
extern "C" static void daObjSMark_Delete__FP12daObjSMark_c();
extern "C" static void daObjSMark_Create__FP10fopAc_ac_c();
extern "C" static void func_8059A3D0();
extern "C" static void func_8059A3D8();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_StoneMark[12];

//
// External References:
//

void mDoLib_setResTimgObj(ResTIMG const*, _GXTexObj*, u32, _GXTlutObj*);
void fopAcM_setCullSizeSphere(fopAc_ac_c*, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGd_setSimpleShadow(cXyz*, f32, f32, cBgS_PolyInfo&, s16, f32, _GXTexObj*);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeSphere__FP10fopAc_ac_cffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 8059A018-8059A038 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__12daObjSMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSMark_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/initBaseMtx__12daObjSMark_cFv.s"
}
#pragma pop

/* 8059A038-8059A080 0048+00 s=1 e=0 z=0  None .text      setBaseMtx__12daObjSMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSMark_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/setBaseMtx__12daObjSMark_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059A3E8-8059A3EC 0004+00 s=2 e=0 z=0  None .rodata    @3642 */
SECTION_RODATA static u8 const lit_3642[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8059A3EC-8059A3F0 0004+00 s=1 e=0 z=0  None .rodata    @3643 */
SECTION_RODATA static u32 const lit_3643 = 0x42C80000;

/* 8059A3F0-8059A3F4 0004+00 s=1 e=0 z=0  None .rodata    @3644 */
SECTION_RODATA static u32 const lit_3644 = 0x41F00000;

/* 8059A3F4-8059A3FC 0008+00 s=1 e=0 z=0  None .rodata    l_shadow_size$3714 */
SECTION_RODATA static u8 const l_shadow_size[8] = {
    0x42, 0x5C, 0x00, 0x00, 0x42, 0xAA, 0x00, 0x00,
};

/* 8059A3FC-8059A400 0004+00 s=1 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u32 const lit_3718 = 0xBF19999A;

/* 8059A400-8059A404 0004+00 s=1 e=0 z=0  None .rodata    @3719 */
SECTION_RODATA static u32 const lit_3719 = 0x3ECCCCCC;

/* 8059A404-8059A40D 0009+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8059A404 = "A_IwaAto";
#pragma pop

/* 8059A410-8059A414 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 8059A080-8059A168 00E8+00 s=1 e=0 z=0  None .text      Create__12daObjSMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSMark_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/Create__12daObjSMark_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059A414-8059A434 0020+00 s=1 e=0 z=0  None .data      l_daObjSMark_Method */
SECTION_DATA static void* l_daObjSMark_Method[8] = {
    (void*)daObjSMark_Create__FP10fopAc_ac_c,
    (void*)daObjSMark_Delete__FP12daObjSMark_c,
    (void*)NULL,
    (void*)NULL,
    (void*)daObjSMark_Draw__FP12daObjSMark_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8059A434-8059A464 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_StoneMark */
SECTION_DATA void* g_profile_Obj_StoneMark[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01710000, (void*)&g_fpcLf_Method,
    (void*)0x00000814, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02160000, (void*)&l_daObjSMark_Method,
    (void*)0x00040100, (void*)0x00170000,
};

/* 8059A464-8059A488 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_8059A3D8,
    (void*)NULL, (void*)NULL, (void*)func_8059A3D0,
};

/* 8059A168-8059A25C 00F4+00 s=1 e=0 z=0  None .text      create__12daObjSMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSMark_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/func_8059A168.s"
}
#pragma pop

/* 8059A25C-8059A2CC 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8059A2CC-8059A33C 0070+00 s=1 e=0 z=0  None .text      draw__12daObjSMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSMark_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/draw__12daObjSMark_cFv.s"
}
#pragma pop

/* 8059A33C-8059A370 0034+00 s=1 e=0 z=0  None .text      _delete__12daObjSMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSMark_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/_delete__12daObjSMark_cFv.s"
}
#pragma pop

/* 8059A370-8059A390 0020+00 s=1 e=0 z=0  None .text      daObjSMark_Draw__FP12daObjSMark_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSMark_Draw(daObjSMark_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/daObjSMark_Draw__FP12daObjSMark_c.s"
}
#pragma pop

/* 8059A390-8059A3B0 0020+00 s=1 e=0 z=0  None .text      daObjSMark_Delete__FP12daObjSMark_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSMark_Delete(daObjSMark_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/daObjSMark_Delete__FP12daObjSMark_c.s"
}
#pragma pop

/* 8059A3B0-8059A3D0 0020+00 s=1 e=0 z=0  None .text      daObjSMark_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSMark_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/daObjSMark_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8059A3D0-8059A3D8 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8059A3D0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/func_8059A3D0.s"
}
#pragma pop

/* 8059A3D8-8059A3E0 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8059A3D8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stonemark/d_a_obj_stoneMark/func_8059A3D8.s"
}
#pragma pop
