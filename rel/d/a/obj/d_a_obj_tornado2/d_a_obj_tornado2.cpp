//
// Generated By: dol2asm
// Translation Unit: d_a_obj_tornado2
//

#include "rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct csXyz {};

struct cXyz {
    /* 80266EF4 */ void normalize();
    /* 802670AC */ void isZero() const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjTrnd2_c {
    /* 80D1C4D8 */ void setPntWind();
    /* 80D1C54C */ void cutPntWind();
    /* 80D1C570 */ void movePntWind();
    /* 80D1C780 */ void setCpsInfo();
    /* 80D1C924 */ void initBaseMtx();
    /* 80D1C944 */ void setBaseMtx();
    /* 80D1C98C */ void Create();
    /* 80D1CC80 */ void create();
    /* 80D1CDC0 */ void execute();
    /* 80D1D0AC */ void setParticle();
    /* 80D1D214 */ void endParticle();
    /* 80D1D278 */ void startParticle();
    /* 80D1D2AC */ void stopParticle();
    /* 80D1D2E0 */ bool draw();
    /* 80D1D2E8 */ void _delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dPa_levelEcallBack {};

struct dKy_tevstr_c {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCps {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cps {
    /* 800847D0 */ void Set(dCcD_SrcCps const&);
};

struct cM3dGCpsS {};

struct cM3dGCps {
    /* 8026EF88 */ cM3dGCps();
    /* 8026F03C */ void Set(cM3dGCpsS const&);
};

struct cM3dGAab {
    /* 80D1CD78 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct WIND_INFLUENCE {};

//
// Forward References:
//

static void daObjTrnd2_Draw(daObjTrnd2_c*);
static void daObjTrnd2_Execute(daObjTrnd2_c*);
static void daObjTrnd2_Delete(daObjTrnd2_c*);
static void daObjTrnd2_Create(daObjTrnd2_c*);
static void cLib_calcTimer__template0(s32*);
extern "C" extern void* g_profile_Obj_Tornado2[12];

extern "C" void setPntWind__12daObjTrnd2_cFv();
extern "C" void cutPntWind__12daObjTrnd2_cFv();
extern "C" void movePntWind__12daObjTrnd2_cFv();
extern "C" void setCpsInfo__12daObjTrnd2_cFv();
extern "C" void initBaseMtx__12daObjTrnd2_cFv();
extern "C" void setBaseMtx__12daObjTrnd2_cFv();
extern "C" void Create__12daObjTrnd2_cFv();
extern "C" void create__12daObjTrnd2_cFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void execute__12daObjTrnd2_cFv();
extern "C" void setParticle__12daObjTrnd2_cFv();
extern "C" void endParticle__12daObjTrnd2_cFv();
extern "C" void startParticle__12daObjTrnd2_cFv();
extern "C" void stopParticle__12daObjTrnd2_cFv();
extern "C" bool draw__12daObjTrnd2_cFv();
extern "C" void _delete__12daObjTrnd2_cFv();
extern "C" static void daObjTrnd2_Draw__FP12daObjTrnd2_c();
extern "C" static void daObjTrnd2_Execute__FP12daObjTrnd2_c();
extern "C" static void daObjTrnd2_Delete__FP12daObjTrnd2_c();
extern "C" static void daObjTrnd2_Create__FP12daObjTrnd2_c();
extern "C" static void func_80D1D3B0();
extern "C" extern void* g_profile_Obj_Tornado2[12];

//
// External References:
//

void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dKyw_pntwind_set(WIND_INFLUENCE*);
void dKyw_pntwind_cut(WIND_INFLUENCE*);
void dKyw_custom_windpower(f32);
void dKyw_evt_wind_set(s16, s16);
void dKyr_get_vectle_calc(cXyz*, cXyz*, cXyz*);
void cM_rndF(f32);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u32 __float_nan;

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKyw_pntwind_set__FP14WIND_INFLUENCE();
extern "C" void dKyw_pntwind_cut__FP14WIND_INFLUENCE();
extern "C" void dKyw_custom_windpower__Ff();
extern "C" void dKyw_evt_wind_set__Fss();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void normalize__4cXyzFv();
extern "C" void isZero__4cXyzCFv();
extern "C" void cM_rndF__Ff();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC9cM3dGCpsS();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECScale();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80D1D3D4-80D1D3DC 0006+02 s=6 e=0 z=0  None .rodata    l_R02_eff_id */
SECTION_RODATA static u8 const l_R02_eff_id[6 + 2 /* padding */] = {
    0x8B,
    0x5E,
    0x8B,
    0x5F,
    0xFF,
    0xFF,
    /* padding */
    0x00,
    0x00,
};

/* 80D1D3DC-80D1D3E4 0006+02 s=1 e=0 z=0  None .rodata    l_R04_eff_id */
SECTION_RODATA static u8 const l_R04_eff_id[6 + 2 /* padding */] = {
    0x8B,
    0x60,
    0x8B,
    0x61,
    0xFF,
    0xFF,
    /* padding */
    0x00,
    0x00,
};

/* 80D1D3E4-80D1D3EC 0006+02 s=1 e=0 z=0  None .rodata    l_R05_eff_id */
SECTION_RODATA static u8 const l_R05_eff_id[6 + 2 /* padding */] = {
    0x8B,
    0x6B,
    0x8B,
    0x6C,
    0xFF,
    0xFF,
    /* padding */
    0x00,
    0x00,
};

/* 80D1D3EC-80D1D3F4 0006+02 s=1 e=0 z=0  None .rodata    l_R07_eff_id */
SECTION_RODATA static u8 const l_R07_eff_id[6 + 2 /* padding */] = {
    0x8B,
    0x6D,
    0x8B,
    0x6E,
    0xFF,
    0xFF,
    /* padding */
    0x00,
    0x00,
};

/* 80D1D3F4-80D1D3FC 0006+02 s=1 e=0 z=0  None .rodata    l_R14_eff_id */
SECTION_RODATA static u8 const l_R14_eff_id[6 + 2 /* padding */] = {
    0x8B,
    0x66,
    0x8B,
    0x67,
    0x8B,
    0x68,
    /* padding */
    0x00,
    0x00,
};

/* 80D1D3FC-80D1D404 0006+02 s=1 e=0 z=0  None .rodata    l_R51_eff_id */
SECTION_RODATA static u8 const l_R51_eff_id[6 + 2 /* padding */] = {
    0x8B,
    0x69,
    0x8B,
    0x6A,
    0xFF,
    0xFF,
    /* padding */
    0x00,
    0x00,
};

/* 80D1D404-80D1D408 0004+00 s=5 e=0 z=0  None .rodata    @3631 */
SECTION_RODATA static u8 const lit_3631[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D1D408-80D1D40C 0004+00 s=3 e=0 z=0  None .rodata    @3632 */
SECTION_RODATA static u32 const lit_3632 = 0x3F800000;

/* 80D1D40C-80D1D410 0004+00 s=2 e=0 z=0  None .rodata    @3633 */
SECTION_RODATA static u32 const lit_3633 = 0x3E4CCCCD;

/* 80D1C4D8-80D1C54C 0074+00 s=1 e=0 z=0  None .text      setPntWind__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::setPntWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/setPntWind__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1C54C-80D1C570 0024+00 s=1 e=0 z=0  None .text      cutPntWind__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::cutPntWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/cutPntWind__12daObjTrnd2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1D410-80D1D414 0004+00 s=1 e=0 z=0  None .rodata    @3681 */
SECTION_RODATA static u32 const lit_3681 = 0x40000000;

/* 80D1D414-80D1D418 0004+00 s=2 e=0 z=0  None .rodata    @3682 */
SECTION_RODATA static u32 const lit_3682 = 0x3DCCCCCD;

/* 80D1D418-80D1D41C 0004+00 s=3 e=0 z=0  None .rodata    @3683 */
SECTION_RODATA static u32 const lit_3683 = 0x3F000000;

/* 80D1D41C-80D1D424 0008+00 s=1 e=0 z=0  None .rodata    @3684 */
SECTION_RODATA static u8 const lit_3684[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D1D424-80D1D42C 0008+00 s=1 e=0 z=0  None .rodata    @3685 */
SECTION_RODATA static u8 const lit_3685[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D1D42C-80D1D434 0008+00 s=1 e=0 z=0  None .rodata    @3686 */
SECTION_RODATA static u8 const lit_3686[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D1C570-80D1C780 0210+00 s=1 e=0 z=0  None .text      movePntWind__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::movePntWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/movePntWind__12daObjTrnd2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1D434-80D1D438 0004+00 s=1 e=0 z=0  None .rodata    @3730 */
SECTION_RODATA static u32 const lit_3730 = 0x3D4CCCCD;

/* 80D1D438-80D1D43C 0004+00 s=2 e=0 z=0  None .rodata    @3731 */
SECTION_RODATA static u32 const lit_3731 = 0x41200000;

/* 80D1D43C-80D1D444 0008+00 s=1 e=0 z=0  None .rodata    @3733 */
SECTION_RODATA static u8 const lit_3733[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D1C780-80D1C924 01A4+00 s=1 e=0 z=0  None .text      setCpsInfo__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::setCpsInfo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/setCpsInfo__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1C924-80D1C944 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/initBaseMtx__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1C944-80D1C98C 0048+00 s=2 e=0 z=0  None .text      setBaseMtx__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/setBaseMtx__12daObjTrnd2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1D444-80D1D448 0004+00 s=1 e=0 z=0  None .rodata    @3819 */
SECTION_RODATA static u32 const lit_3819 = 0x43160000;

/* 80D1D448-80D1D44C 0004+00 s=1 e=0 z=0  None .rodata    @3820 */
SECTION_RODATA static u32 const lit_3820 = 0x447A0000;

/* 80D1D458-80D1D4A4 004C+00 s=1 e=0 z=0  None .data      l_cps_src */
SECTION_DATA static u8 l_cps_src[76] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x45, 0x3B, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00,
};

/* 80D1C98C-80D1CC80 02F4+00 s=1 e=0 z=0  None .text      Create__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/Create__12daObjTrnd2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1D4A4-80D1D4C4 0020+00 s=1 e=0 z=0  None .data      l_daObjTrnd2_Method */
SECTION_DATA static void* l_daObjTrnd2_Method[8] = {
    (void*)daObjTrnd2_Create__FP12daObjTrnd2_c,
    (void*)daObjTrnd2_Delete__FP12daObjTrnd2_c,
    (void*)daObjTrnd2_Execute__FP12daObjTrnd2_c,
    (void*)NULL,
    (void*)daObjTrnd2_Draw__FP12daObjTrnd2_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D1D4C4-80D1D4F4 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Tornado2 */
SECTION_DATA void* g_profile_Obj_Tornado2[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x015C0000, (void*)&g_fpcLf_Method,
    (void*)0x00000788, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01BD0000, (void*)&l_daObjTrnd2_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D1D4F4-80D1D500 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D1CC80-80D1CD78 00F8+00 s=1 e=0 z=0  None .text      create__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/func_80D1CC80.s"
}
#pragma pop

/* 80D1CD78-80D1CDC0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1D44C-80D1D450 0004+00 s=1 e=0 z=0  None .rodata    @4012 */
SECTION_RODATA static u32 const lit_4012 = 0x3E99999A;

/* 80D1D450-80D1D454 0004+00 s=1 e=0 z=0  None .rodata    @4013 */
SECTION_RODATA static u32 const lit_4013 = 0x3A83126F;

/* 80D1D454-80D1D458 0004+00 s=1 e=0 z=0  None .rodata    @4014 */
SECTION_RODATA static u32 const lit_4014 = 0x3F666666;

/* 80D1CDC0-80D1D0AC 02EC+00 s=1 e=0 z=0  None .text      execute__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/execute__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1D0AC-80D1D214 0168+00 s=1 e=0 z=0  None .text      setParticle__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::setParticle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/setParticle__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1D214-80D1D278 0064+00 s=1 e=0 z=0  None .text      endParticle__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::endParticle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/endParticle__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1D278-80D1D2AC 0034+00 s=2 e=0 z=0  None .text      startParticle__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::startParticle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/startParticle__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1D2AC-80D1D2E0 0034+00 s=2 e=0 z=0  None .text      stopParticle__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::stopParticle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/stopParticle__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1D2E0-80D1D2E8 0008+00 s=1 e=0 z=0  None .text      draw__12daObjTrnd2_cFv */
bool daObjTrnd2_c::draw() {
    return true;
}

/* 80D1D2E8-80D1D330 0048+00 s=1 e=0 z=0  None .text      _delete__12daObjTrnd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd2_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/_delete__12daObjTrnd2_cFv.s"
}
#pragma pop

/* 80D1D330-80D1D350 0020+00 s=1 e=0 z=0  None .text      daObjTrnd2_Draw__FP12daObjTrnd2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd2_Draw(daObjTrnd2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/daObjTrnd2_Draw__FP12daObjTrnd2_c.s"
}
#pragma pop

/* 80D1D350-80D1D370 0020+00 s=1 e=0 z=0  None .text      daObjTrnd2_Execute__FP12daObjTrnd2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd2_Execute(daObjTrnd2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/daObjTrnd2_Execute__FP12daObjTrnd2_c.s"
}
#pragma pop

/* 80D1D370-80D1D390 0020+00 s=1 e=0 z=0  None .text      daObjTrnd2_Delete__FP12daObjTrnd2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd2_Delete(daObjTrnd2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/daObjTrnd2_Delete__FP12daObjTrnd2_c.s"
}
#pragma pop

/* 80D1D390-80D1D3B0 0020+00 s=1 e=0 z=0  None .text      daObjTrnd2_Create__FP12daObjTrnd2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd2_Create(daObjTrnd2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/daObjTrnd2_Create__FP12daObjTrnd2_c.s"
}
#pragma pop

/* 80D1D3B0-80D1D3CC 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<l>__FPl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(s32* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/d_a_obj_tornado2/func_80D1D3B0.s"
}
#pragma pop
