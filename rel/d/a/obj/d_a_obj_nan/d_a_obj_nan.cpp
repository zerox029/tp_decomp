//
// Generated By: dol2asm
// Translation Unit: d_a_obj_nan
//

#include "rel/d/a/obj/d_a_obj_nan/d_a_obj_nan.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF0C */ void ZXYrotS(csXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct mDoExt_McaMorfCallBack2_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_McaMorfCallBack1_c {};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {};

struct daPy_boomerangMove_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

struct daObj_NanHIO_c {
    /* 80CA05AC */ daObj_NanHIO_c();
    /* 80CA30D0 */ ~daObj_NanHIO_c();
};

struct daObjNAN_c {
    /* 80CA05D4 */ void setAction(void (daObjNAN_c::*)());
    /* 80CA0978 */ void nan_posMove();
    /* 80CA0A2C */ void turn();
    /* 80CA0D9C */ void nan_WalkAnm();
    /* 80CA0E7C */ void wait();
    /* 80CA1184 */ void walk();
    /* 80CA1904 */ void bin_wait();
    /* 80CA1A20 */ void bin_action();
    /* 80CA1B50 */ void nan_setParticle();
    /* 80CA1D5C */ void hook();
    /* 80CA1F60 */ void boomerang();
    /* 80CA2368 */ void drop();
    /* 80CA2658 */ void hit_check();
    /* 80CA270C */ void action();
    /* 80CA276C */ void execute();
    /* 80CA2904 */ void _delete();
    /* 80CA296C */ void setBaseMtx();
    /* 80CA2B68 */ void create();
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dMenu_Insect_c {
    /* 801D9F3C */ void isCatchNotGiveInsect(u8);
};

struct dInsect_c {
    /* 8015E010 */ dInsect_c();
    /* 8015E078 */ void Insect_GetDemoMain();
    /* 8015E26C */ void CalcZBuffer(f32);
    /* 80CA3154 */ void Insect_Release();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
    /* 80CA306C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084548 */ void GetTgHitGObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80CA2FDC */ ~cM3dGSph();
};

struct cM3dGPla {
    /* 80CA0D54 */ ~cM3dGPla();
};

struct cM3dGAab {
    /* 80CA3024 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80CA3160 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct _GXTexObj {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80CA08EC */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void useHeapInit(fopAc_ac_c*);
static void daObjNAN_Create(fopAc_ac_c*);
static void daObjNAN_Delete(daObjNAN_c*);
static void daObjNAN_Draw(daObjNAN_c*);
static void daObjNAN_Execute(daObjNAN_c*);
static bool daObjNAN_IsDelete(daObjNAN_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Nan[12];
extern "C" extern void* __vt__9dInsect_c[3];

extern "C" void __ct__14daObj_NanHIO_cFv();
extern "C" void setAction__10daObjNAN_cFM10daObjNAN_cFPCvPv_v();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObjNAN_Create__FP10fopAc_ac_c();
extern "C" static void daObjNAN_Delete__FP10daObjNAN_c();
extern "C" void nan_posMove__10daObjNAN_cFv();
extern "C" void turn__10daObjNAN_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void nan_WalkAnm__10daObjNAN_cFv();
extern "C" void wait__10daObjNAN_cFv();
extern "C" void walk__10daObjNAN_cFv();
extern "C" void bin_wait__10daObjNAN_cFv();
extern "C" void bin_action__10daObjNAN_cFv();
extern "C" void nan_setParticle__10daObjNAN_cFv();
extern "C" void hook__10daObjNAN_cFv();
extern "C" void boomerang__10daObjNAN_cFv();
extern "C" void drop__10daObjNAN_cFv();
extern "C" void hit_check__10daObjNAN_cFv();
extern "C" void action__10daObjNAN_cFv();
extern "C" void execute__10daObjNAN_cFv();
extern "C" void _delete__10daObjNAN_cFv();
extern "C" void setBaseMtx__10daObjNAN_cFv();
extern "C" static void daObjNAN_Draw__FP10daObjNAN_c();
extern "C" static void daObjNAN_Execute__FP10daObjNAN_c();
extern "C" void create__10daObjNAN_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" static bool daObjNAN_IsDelete__FP10daObjNAN_c();
extern "C" void __dt__14daObj_NanHIO_cFv();
extern "C" void __sinit_d_a_obj_nan_cpp();
extern "C" void Insect_Release__9dInsect_cFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Nan[12];
extern "C" extern void* __vt__9dInsect_c[3];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_posMoveF(fopAc_ac_c*, cXyz const*);
void fopAcM_setEffectMtx(fopAc_ac_c const*, J3DModelData const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dComIfGd_setSimpleShadow(cXyz*, f32, f32, cBgS_PolyInfo&, s16, f32, _GXTexObj*);
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_chaseF(f32*, f32, f32);
void cLib_chaseAngleS(s16*, s16, s16);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u32 __float_nan;

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void __ct__9dInsect_cFv();
extern "C" void Insect_GetDemoMain__9dInsect_cFv();
extern "C" void CalcZBuffer__9dInsect_cFf();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void isCatchNotGiveInsect__14dMenu_Insect_cFUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareDistance();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CA31BC-80CA31C0 0004+00 s=12 e=0 z=0  None .rodata    @3774 */
SECTION_RODATA static u32 const lit_3774 = 0x3F99999A;

/* 80CA32B0-80CA32BC 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA32BC-80CA32D0 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80CA32D0-80CA3310 0040+00 s=1 e=0 z=0  None .data      cc_sph_src__25@unnamed@d_a_obj_nan_cpp@ */
SECTION_DATA static u8 data_80CA32D0[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x40, 0x40, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00,
};

/* 80CA3310-80CA331C 000C+00 s=1 e=0 z=0  None .data      @3924 */
SECTION_DATA static void* lit_3924[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)walk__10daObjNAN_cFv,
};

/* 80CA331C-80CA3328 000C+00 s=1 e=0 z=0  None .data      @4034 */
SECTION_DATA static void* lit_4034[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)walk__10daObjNAN_cFv,
};

/* 80CA3328-80CA3334 000C+00 s=1 e=0 z=0  None .data      @4126 */
SECTION_DATA static void* lit_4126[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)turn__10daObjNAN_cFv,
};

/* 80CA3334-80CA3340 000C+00 s=1 e=0 z=0  None .data      @4129 */
SECTION_DATA static void* lit_4129[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)turn__10daObjNAN_cFv,
};

/* 80CA3340-80CA334C 000C+00 s=1 e=0 z=0  None .data      @4133 */
SECTION_DATA static void* lit_4133[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)turn__10daObjNAN_cFv,
};

/* 80CA334C-80CA3358 000C+00 s=1 e=0 z=0  None .data      @4138 */
SECTION_DATA static void* lit_4138[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)turn__10daObjNAN_cFv,
};

/* 80CA3358-80CA3364 000C+00 s=1 e=0 z=0  None .data      @4318 */
SECTION_DATA static void* lit_4318[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drop__10daObjNAN_cFv,
};

/* 80CA3364-80CA3370 000C+00 s=1 e=0 z=0  None .data      @4321 */
SECTION_DATA static void* lit_4321[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bin_action__10daObjNAN_cFv,
};

/* 80CA3370-80CA337C 000C+00 s=1 e=0 z=0  None .data      @4444 */
SECTION_DATA static void* lit_4444[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drop__10daObjNAN_cFv,
};

/* 80CA337C-80CA3388 000C+00 s=1 e=0 z=0  None .data      @4509 */
SECTION_DATA static void* lit_4509[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)walk__10daObjNAN_cFv,
};

/* 80CA3388-80CA3394 000C+00 s=1 e=0 z=0  None .data      @4512 */
SECTION_DATA static void* lit_4512[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drop__10daObjNAN_cFv,
};

/* 80CA3394-80CA33A0 000C+00 s=1 e=0 z=0  None .data      @4614 */
SECTION_DATA static void* lit_4614[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)walk__10daObjNAN_cFv,
};

/* 80CA33A0-80CA33AC 000C+00 s=1 e=0 z=0  None .data      @4680 */
SECTION_DATA static void* lit_4680[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)hook__10daObjNAN_cFv,
};

/* 80CA33AC-80CA33B8 000C+00 s=1 e=0 z=0  None .data      @4683 */
SECTION_DATA static void* lit_4683[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)boomerang__10daObjNAN_cFv,
};

/* 80CA33B8-80CA33C4 000C+00 s=1 e=0 z=0  None .data      @4938 */
SECTION_DATA static void* lit_4938[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bin_wait__10daObjNAN_cFv,
};

/* 80CA33C4-80CA33D0 000C+00 s=1 e=0 z=0  None .data      @4941 */
SECTION_DATA static void* lit_4941[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__10daObjNAN_cFv,
};

/* 80CA33D0-80CA33F0 0020+00 s=1 e=0 z=0  None .data      l_daObjNAN_Method */
SECTION_DATA static void* l_daObjNAN_Method[8] = {
    (void*)daObjNAN_Create__FP10fopAc_ac_c,
    (void*)daObjNAN_Delete__FP10daObjNAN_c,
    (void*)daObjNAN_Execute__FP10daObjNAN_c,
    (void*)daObjNAN_IsDelete__FP10daObjNAN_c,
    (void*)daObjNAN_Draw__FP10daObjNAN_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CA33F0-80CA3420 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Nan */
SECTION_DATA void* g_profile_Obj_Nan[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01430000, (void*)&g_fpcLf_Method,
    (void*)0x00000800, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01E00000, (void*)&l_daObjNAN_Method,
    (void*)0x000C0120, (void*)0x030E0000,
};

/* 80CA3420-80CA342C 000C+00 s=0 e=0 z=0  None .data      __vt__9dInsect_c */
SECTION_DATA void* __vt__9dInsect_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)Insect_Release__9dInsect_cFv,
};

/* 80CA342C-80CA3438 000C+00 s=2 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CA3438-80CA3444 000C+00 s=1 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CA3444-80CA3450 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80CA3450-80CA345C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CA345C-80CA3468 000C+00 s=1 e=0 z=0  None .data      __vt__10daObjNAN_c */
SECTION_DATA static void* __vt__10daObjNAN_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)Insect_Release__9dInsect_cFv,
};

/* 80CA3468-80CA3474 000C+00 s=7 e=0 z=0  None .data      __vt__8cM3dGPla */
SECTION_DATA static void* __vt__8cM3dGPla[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80CA3474-80CA3480 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CA3480-80CA348C 000C+00 s=2 e=0 z=0  None .data      __vt__14daObj_NanHIO_c */
SECTION_DATA static void* __vt__14daObj_NanHIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14daObj_NanHIO_cFv,
};

/* 80CA05AC-80CA05D4 0028+00 s=1 e=0 z=0  None .text      __ct__14daObj_NanHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_NanHIO_c::daObj_NanHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__ct__14daObj_NanHIO_cFv.s"
}
#pragma pop

/* 80CA05D4-80CA0678 00A4+00 s=9 e=0 z=0  None .text setAction__10daObjNAN_cFM10daObjNAN_cFPCvPv_v
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::setAction(void (daObjNAN_c::*)()) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/setAction__10daObjNAN_cFM10daObjNAN_cFPCvPv_v.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA31C0-80CA31C8 0008+00 s=1 e=0 z=0  None .rodata    l_nan_brk_index */
SECTION_RODATA static u8 const l_nan_brk_index[8] = {
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0C,
};

/* 80CA31C8-80CA31D0 0008+00 s=1 e=0 z=0  None .rodata    l_nan_btk_index */
SECTION_RODATA static u8 const l_nan_btk_index[8] = {
    0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x10,
};

/* 80CA31D0-80CA31D4 0004+00 s=3 e=0 z=0  None .rodata    @3868 */
SECTION_RODATA static u32 const lit_3868 = 0x3F800000;

/* 80CA31D4-80CA31D8 0004+00 s=1 e=0 z=0  None .rodata    @3869 */
SECTION_RODATA static u32 const lit_3869 = 0x40A00000;

/* 80CA31D8-80CA31DC 0004+00 s=12 e=0 z=0  None .rodata    @3870 */
SECTION_RODATA static u8 const lit_3870[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CA31DC-80CA31E0 0004+00 s=1 e=0 z=0  None .rodata    @3871 */
SECTION_RODATA static u32 const lit_3871 = 0xBF800000;

/* 80CA31E0-80CA31E4 0004+00 s=6 e=0 z=0  None .rodata    @3985 */
SECTION_RODATA static u32 const lit_3985 = 0x41A00000;

/* 80CA31E4-80CA31EC 0004+04 s=2 e=0 z=0  None .rodata    @3986 */
SECTION_RODATA static u32 const lit_3986[1 + 1 /* padding */] = {
    0xC1A00000,
    /* padding */
    0x00000000,
};

/* 80CA31EC-80CA31F4 0008+00 s=5 e=0 z=0  None .rodata    @3987 */
SECTION_RODATA static u8 const lit_3987[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA31F4-80CA31FC 0008+00 s=5 e=0 z=0  None .rodata    @3988 */
SECTION_RODATA static u8 const lit_3988[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA31FC-80CA3204 0008+00 s=5 e=0 z=0  None .rodata    @3989 */
SECTION_RODATA static u8 const lit_3989[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA3204-80CA3208 0004+00 s=1 e=0 z=0  None .rodata    @4018 */
SECTION_RODATA static u32 const lit_4018 = 0x421C0000;

/* 80CA3208-80CA320C 0004+00 s=1 e=0 z=0  None .rodata    @4019 */
SECTION_RODATA static u32 const lit_4019 = 0x429E0000;

/* 80CA320C-80CA3210 0004+00 s=2 e=0 z=0  None .rodata    @4020 */
SECTION_RODATA static u32 const lit_4020 = 0x41900000;

/* 80CA3210-80CA3214 0004+00 s=2 e=0 z=0  None .rodata    @4021 */
SECTION_RODATA static u32 const lit_4021 = 0x41F00000;

/* 80CA3214-80CA3218 0004+00 s=1 e=0 z=0  None .rodata    @4100 */
SECTION_RODATA static u32 const lit_4100 = 0xC47A0000;

/* 80CA3218-80CA321C 0004+00 s=1 e=0 z=0  None .rodata    @4292 */
SECTION_RODATA static u32 const lit_4292 = 0x3E4CCCCD;

/* 80CA321C-80CA3220 0004+00 s=1 e=0 z=0  None .rodata    @4293 */
SECTION_RODATA static u32 const lit_4293 = 0x42700000;

/* 80CA3220-80CA3224 0004+00 s=1 e=0 z=0  None .rodata    @4294 */
SECTION_RODATA static u32 const lit_4294 = 0x42200000;

/* 80CA3224-80CA3228 0004+00 s=1 e=0 z=0  None .rodata    @4295 */
SECTION_RODATA static u32 const lit_4295 = 0x3CA3D70A;

/* 80CA3228-80CA322C 0004+00 s=1 e=0 z=0  None .rodata    @4296 */
SECTION_RODATA static u32 const lit_4296 = 0x41400000;

/* 80CA322C-80CA3230 0004+00 s=1 e=0 z=0  None .rodata    @4297 */
SECTION_RODATA static u32 const lit_4297 = 0x45C00000;

/* 80CA3230-80CA3234 0004+00 s=2 e=0 z=0  None .rodata    @4298 */
SECTION_RODATA static u32 const lit_4298 = 0x47000000;

/* 80CA3234-80CA3238 0004+00 s=2 e=0 z=0  None .rodata    @4299 */
SECTION_RODATA static u32 const lit_4299 = 0x43480000;

/* 80CA3238-80CA323C 0004+00 s=1 e=0 z=0  None .rodata    @4300 */
SECTION_RODATA static u32 const lit_4300 = 0x44834000;

/* 80CA323C-80CA3244 0008+00 s=1 e=0 z=0  None .rodata    @4302 */
SECTION_RODATA static u8 const lit_4302[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CA3244-80CA3248 0004+00 s=1 e=0 z=0  None .rodata    @4362 */
SECTION_RODATA static u32 const lit_4362 = 0xC0000000;

/* 80CA3248-80CA324C 0004+00 s=1 e=0 z=0  None .rodata    @4363 */
SECTION_RODATA static u32 const lit_4363 = 0x3ECCCCCD;

/* 80CA324C-80CA3250 0004+00 s=1 e=0 z=0  None .rodata    @4364 */
SECTION_RODATA static u32 const lit_4364 = 0x3F19999A;

/* 80CA3250-80CA3254 0004+00 s=1 e=0 z=0  None .rodata    @4365 */
SECTION_RODATA static u32 const lit_4365 = 0x3DCCCCCD;

/* 80CA3254-80CA3258 0004+00 s=1 e=0 z=0  None .rodata    @4366 */
SECTION_RODATA static u32 const lit_4366 = 0x42780000;

/* 80CA3258-80CA325C 0004+00 s=1 e=0 z=0  None .rodata    @4367 */
SECTION_RODATA static u32 const lit_4367 = 0x3D4CCCCD;

/* 80CA325C-80CA3264 0008+00 s=1 e=0 z=0  None .rodata    @4368 */
SECTION_RODATA static u8 const lit_4368[8] = {
    0x3F, 0xB9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
};

/* 80CA3264-80CA3268 0004+00 s=2 e=0 z=0  None .rodata    @4491 */
SECTION_RODATA static u32 const lit_4491 = 0xC0A00000;

/* 80CA3268-80CA326C 0004+00 s=1 e=0 z=0  None .rodata    @4601 */
SECTION_RODATA static u32 const lit_4601 = 0x42C80000;

/* 80CA326C-80CA3270 0004+00 s=1 e=0 z=0  None .rodata    @4672 */
SECTION_RODATA static u32 const lit_4672 = 0xC1F00000;

/* 80CA3270-80CA3274 0002+02 s=1 e=0 z=0  None .rodata    l_nan_itemno */
SECTION_RODATA static u16 const l_nan_itemno[1 + 1 /* padding */] = {
    0xC8C9,
    /* padding */
    0x0000,
};

/* 80CA3274-80CA327C 0004+04 s=1 e=0 z=0  None .rodata    @4742 */
SECTION_RODATA static u32 const lit_4742[1 + 1 /* padding */] = {
    0x461C4000,
    /* padding */
    0x00000000,
};

/* 80CA327C-80CA3284 0008+00 s=1 e=0 z=0  None .rodata    @4744 */
SECTION_RODATA static u8 const lit_4744[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA3284-80CA3288 0004+00 s=2 e=0 z=0  None .rodata    @4823 */
SECTION_RODATA static u32 const lit_4823 = 0x42480000;

/* 80CA3288-80CA328C 0004+00 s=1 e=0 z=0  None .rodata    @4824 */
SECTION_RODATA static u32 const lit_4824 = 0x4E6E6B28;

/* 80CA328C-80CA3290 0004+00 s=1 e=0 z=0  None .rodata    @4825 */
SECTION_RODATA static u32 const lit_4825 = 0x41700000;

/* 80CA3290-80CA3294 0004+00 s=1 e=0 z=0  None .rodata    @4826 */
SECTION_RODATA static u32 const lit_4826 = 0xBF19999A;

/* 80CA3294-80CA3298 0004+00 s=1 e=0 z=0  None .rodata    l_musiya_num */
SECTION_RODATA static u32 const l_musiya_num = 0x0199019A;

/* 80CA3298-80CA329C 0004+00 s=1 e=0 z=0  None .rodata    l_heapsize */
SECTION_RODATA static u32 const l_heapsize = 0x0EE00EC0;

/* 80CA329C-80CA32A0 0004+00 s=1 e=0 z=0  None .rodata    @5034 */
SECTION_RODATA static u32 const lit_5034 = 0xC2480000;

/* 80CA32A0-80CA32AE 000E+00 s=5 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CA32A0 = "I_Nan";
SECTION_DEAD char const* const stringBase_80CA32A6 = "R_SP160";
#pragma pop

/* 80CA0678-80CA08EC 0274+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CA08EC-80CA0934 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80CA0934-80CA0954 0020+00 s=1 e=0 z=0  None .text      daObjNAN_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNAN_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/daObjNAN_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CA0954-80CA0978 0024+00 s=1 e=0 z=0  None .text      daObjNAN_Delete__FP10daObjNAN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNAN_Delete(daObjNAN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/daObjNAN_Delete__FP10daObjNAN_c.s"
}
#pragma pop

/* 80CA0978-80CA0A2C 00B4+00 s=1 e=0 z=0  None .text      nan_posMove__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::nan_posMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/nan_posMove__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA0A2C-80CA0D54 0328+00 s=4 e=0 z=0  None .text      turn__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::turn() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/turn__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA0D54-80CA0D9C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80CA0D9C-80CA0E7C 00E0+00 s=2 e=0 z=0  None .text      nan_WalkAnm__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::nan_WalkAnm() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/nan_WalkAnm__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA0E7C-80CA1184 0308+00 s=1 e=0 z=0  None .text      wait__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/wait__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA1184-80CA1904 0780+00 s=4 e=0 z=0  None .text      walk__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::walk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/walk__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA1904-80CA1A20 011C+00 s=1 e=0 z=0  None .text      bin_wait__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::bin_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/bin_wait__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA1A20-80CA1B50 0130+00 s=1 e=0 z=0  None .text      bin_action__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::bin_action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/bin_action__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA1B50-80CA1D5C 020C+00 s=6 e=0 z=0  None .text      nan_setParticle__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::nan_setParticle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/nan_setParticle__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA1D5C-80CA1F60 0204+00 s=1 e=0 z=0  None .text      hook__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::hook() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/hook__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA1F60-80CA2368 0408+00 s=1 e=0 z=0  None .text      boomerang__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::boomerang() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/boomerang__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA2368-80CA2658 02F0+00 s=3 e=0 z=0  None .text      drop__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::drop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/drop__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA2658-80CA270C 00B4+00 s=1 e=0 z=0  None .text      hit_check__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::hit_check() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/hit_check__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA270C-80CA276C 0060+00 s=1 e=0 z=0  None .text      action__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/action__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA276C-80CA2904 0198+00 s=1 e=0 z=0  None .text      execute__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/execute__10daObjNAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA3498-80CA349C 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_80CA3498[4];

/* 80CA2904-80CA296C 0068+00 s=1 e=0 z=0  None .text      _delete__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/_delete__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA296C-80CA29EC 0080+00 s=1 e=0 z=0  None .text      setBaseMtx__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/setBaseMtx__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA29EC-80CA2B48 015C+00 s=1 e=0 z=0  None .text      daObjNAN_Draw__FP10daObjNAN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNAN_Draw(daObjNAN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/daObjNAN_Draw__FP10daObjNAN_c.s"
}
#pragma pop

/* 80CA2B48-80CA2B68 0020+00 s=2 e=0 z=0  None .text      daObjNAN_Execute__FP10daObjNAN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjNAN_Execute(daObjNAN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/daObjNAN_Execute__FP10daObjNAN_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA349C-80CA34A8 000C+00 s=1 e=0 z=0  None .bss       @3769 */
static u8 lit_3769[12];

/* 80CA34A8-80CA34B8 0010+00 s=2 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[16];

/* 80CA2B68-80CA2FDC 0474+00 s=1 e=0 z=0  None .text      create__10daObjNAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjNAN_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/create__10daObjNAN_cFv.s"
}
#pragma pop

/* 80CA2FDC-80CA3024 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80CA3024-80CA306C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CA306C-80CA30C8 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CA30C8-80CA30D0 0008+00 s=1 e=0 z=0  None .text      daObjNAN_IsDelete__FP10daObjNAN_c */
static bool daObjNAN_IsDelete(daObjNAN_c* param_0) {
    return true;
}

/* 80CA30D0-80CA3118 0048+00 s=2 e=0 z=0  None .text      __dt__14daObj_NanHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_NanHIO_c::~daObj_NanHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__dt__14daObj_NanHIO_cFv.s"
}
#pragma pop

/* 80CA3118-80CA3154 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_nan_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_nan_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__sinit_d_a_obj_nan_cpp.s"
}
#pragma pop

/* 80CA3154-80CA3160 000C+00 s=2 e=0 z=0  None .text      Insect_Release__9dInsect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dInsect_c::Insect_Release() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/Insect_Release__9dInsect_cFv.s"
}
#pragma pop

/* 80CA3160-80CA31A8 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nan/d_a_obj_nan/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
