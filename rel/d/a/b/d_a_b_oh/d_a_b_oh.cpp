//
// Generated By: dol2asm
// Translation Unit: d_a_b_oh
//

#include "rel/d/a/b/d_a_b_oh/d_a_b_oh.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct J3DModel {};

struct cXyz {
    /* 8061BB18 */ ~cXyz();
    /* 8061D8F8 */ cXyz();
};

struct mDoExt_invisibleModel {
    /* 8000E53C */ void create(J3DModel*, u8);
    /* 8000E7C0 */ void entryDL(cXyz*);
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

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

struct mDoExt_McaMorfCallBack1_c {};

struct Vec {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_McaMorf {
    /* 8000FC4C */ mDoExt_McaMorf(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                  mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int,
                                  int, void*, u32, u32);
    /* 800105C8 */ void play(Vec*, u32, s8);
    /* 800106AC */ void modelCalc();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daB_OH_HIO_c {
    /* 8061B72C */ daB_OH_HIO_c();
    /* 8061D93C */ ~daB_OH_HIO_c();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
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

struct csXyz {
    /* 8061D8FC */ ~csXyz();
    /* 8061D938 */ csXyz();
};

struct _GXColor {};

struct dPa_control_c {
    /* 8004C218 */ void setHitMark(u16, fopAc_ac_c*, cXyz const*, csXyz const*, cXyz const*, u32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dCcU_AtInfo {};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 8061D718 */ ~dCcD_Sph();
    /* 8061D7E4 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084658 */ void ChkCoHit();
    /* 800846F0 */ void GetCoHitObj();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 8061D868 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 8061D8B0 */ ~cM3dGAab();
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct b_oh_class {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2CreatureOI {
    /* 802C2C84 */ void startTentacleSound(JAISoundID, u8, u32, s8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DSys {
    static u8 mCurrentMtx[48];
};

struct J3DJoint {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 8061D39C */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__12daB_OH_HIO_cFv();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daB_OH_Draw__FP10b_oh_class();
extern "C" static void start__FP10b_oh_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void wait__FP10b_oh_class();
extern "C" static void attack__FP10b_oh_class();
extern "C" static void caught__FP10b_oh_class();
extern "C" static void end__FP10b_oh_class();
extern "C" static void non__FP10b_oh_class();
extern "C" static void action__FP10b_oh_class();
extern "C" static void damage_check__FP10b_oh_class();
extern "C" static void daB_OH_Execute__FP10b_oh_class();
extern "C" static bool daB_OH_IsDelete__FP10b_oh_class();
extern "C" static void daB_OH_Delete__FP10b_oh_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daB_OH_Create__FP10fopAc_ac_c();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__12daB_OH_HIO_cFv();
extern "C" void __sinit_d_a_b_oh_cpp();
extern "C" extern char const* const d_a_b_oh__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void create__21mDoExt_invisibleModelFP8J3DModelUc();
extern "C" void entryDL__21mDoExt_invisibleModelFP4cXyz();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void cDmrNowMidnaTalk__Fv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void startTentacleSound__12Z2CreatureOIF10JAISoundIDUcUlSc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u8 struct_80450C98[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8061D9D4-8061D9D8 000000 0004+00 12/12 0/0 0/0 .rodata          @3650 */
SECTION_RODATA static f32 const lit_3650 = 1.0f;
COMPILER_STRIP_GATE(0x8061D9D4, &lit_3650);

/* 8061D9D8-8061D9DC 000004 0004+00 1/2 0/0 0/0 .rodata          @3651 */
SECTION_RODATA static f32 const lit_3651 = 70.0f;
COMPILER_STRIP_GATE(0x8061D9D8, &lit_3651);

/* 8061DA7C-8061DAAC -00001 0030+00 1/1 0/0 0/0 .data            @4166 */
SECTION_DATA static void* lit_4166[12] = {
    (void*)(((char*)action__FP10b_oh_class) + 0xA0),
    (void*)(((char*)action__FP10b_oh_class) + 0xB0),
    (void*)(((char*)action__FP10b_oh_class) + 0xC0),
    (void*)(((char*)action__FP10b_oh_class) + 0xDC),
    (void*)(((char*)action__FP10b_oh_class) + 0x118),
    (void*)(((char*)action__FP10b_oh_class) + 0x118),
    (void*)(((char*)action__FP10b_oh_class) + 0x118),
    (void*)(((char*)action__FP10b_oh_class) + 0x118),
    (void*)(((char*)action__FP10b_oh_class) + 0x118),
    (void*)(((char*)action__FP10b_oh_class) + 0x118),
    (void*)(((char*)action__FP10b_oh_class) + 0xFC),
    (void*)(((char*)action__FP10b_oh_class) + 0x10C),
};

/* 8061DAAC-8061DAEC 000030 0040+00 1/1 0/0 0/0 .data            cc_sph_src$4457 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00,
};

/* 8061DAEC-8061DB0C -00001 0020+00 1/0 0/0 0/0 .data            l_daB_OH_Method */
SECTION_DATA static void* l_daB_OH_Method[8] = {
    (void*)daB_OH_Create__FP10fopAc_ac_c,
    (void*)daB_OH_Delete__FP10b_oh_class,
    (void*)daB_OH_Execute__FP10b_oh_class,
    (void*)daB_OH_IsDelete__FP10b_oh_class,
    (void*)daB_OH_Draw__FP10b_oh_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8061DB0C-8061DB3C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_OH */
SECTION_DATA extern void* g_profile_B_OH[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00D20000, (void*)&g_fpcLf_Method,
    (void*)0x00001F88, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00DA0000, (void*)&l_daB_OH_Method,
    (void*)0x00044000, (void*)0x020E0000,
};

/* 8061DB3C-8061DB48 0000C0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8061DB48-8061DB54 0000CC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8061DB54-8061DB60 0000D8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8061DB60-8061DB6C 0000E4 000C+00 2/2 0/0 0/0 .data            __vt__12daB_OH_HIO_c */
SECTION_DATA extern void* __vt__12daB_OH_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_OH_HIO_cFv,
};

/* 8061B72C-8061B75C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__12daB_OH_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_OH_HIO_c::daB_OH_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__ct__12daB_OH_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061D9DC-8061D9E0 000008 0004+00 1/2 0/0 0/0 .rodata          @3692 */
SECTION_RODATA static f32 const lit_3692 = -100.0f;
COMPILER_STRIP_GATE(0x8061D9DC, &lit_3692);

/* 8061B75C-8061B8B0 00011C 0154+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 8061B8B0-8061B960 000270 00B0+00 1/0 0/0 0/0 .text            daB_OH_Draw__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_OH_Draw(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/daB_OH_Draw__FP10b_oh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061D9E0-8061D9E4 00000C 0004+00 0/1 0/0 0/0 .rodata          @3781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3781 = -1500.0f;
COMPILER_STRIP_GATE(0x8061D9E0, &lit_3781);
#pragma pop

/* 8061D9E4-8061D9E8 000010 0004+00 0/1 0/0 0/0 .rodata          @3782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3782 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8061D9E4, &lit_3782);
#pragma pop

/* 8061D9E8-8061D9EC 000014 0004+00 0/3 0/0 0/0 .rodata          @3783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3783 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8061D9E8, &lit_3783);
#pragma pop

/* 8061D9EC-8061D9F0 000018 0004+00 0/2 0/0 0/0 .rodata          @3784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3784 = 30.0f;
COMPILER_STRIP_GATE(0x8061D9EC, &lit_3784);
#pragma pop

/* 8061D9F0-8061D9F4 00001C 0004+00 0/2 0/0 0/0 .rodata          @3785 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3785 = 0x3BA3D70A;
COMPILER_STRIP_GATE(0x8061D9F0, &lit_3785);
#pragma pop

/* 8061D9F4-8061D9F8 000020 0004+00 0/1 0/0 0/0 .rodata          @3786 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3786 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8061D9F4, &lit_3786);
#pragma pop

/* 8061DB78-8061DB7C 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8061DB7C-8061DB80 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8061DB80-8061DB84 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8061DB84-8061DB88 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8061DB88-8061DB8C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8061DB8C-8061DB90 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8061DB90-8061DB94 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8061DB94-8061DB98 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8061DB98-8061DB9C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8061DB9C-8061DBA0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8061DBA0-8061DBA4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8061DBA4-8061DBA8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8061DBA8-8061DBAC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8061DBAC-8061DBB0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8061DBB0-8061DBB4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8061DBB4-8061DBB8 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 8061DBB4 0001+00 data_8061DBB4 @1009 */
/* 8061DBB5 0003+00 data_8061DBB5 None */
static u8 struct_8061DBB4[4];

/* 8061DBB8-8061DBC4 000048 000C+00 1/1 0/0 0/0 .bss             @3645 */
static u8 lit_3645[12];

/* 8061DBC4-8061DBD4 000054 0010+00 2/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 8061DBD4-8061DBD8 000064 0004+00 6/7 0/0 0/0 .bss             boss */
static u8 boss[4];

/* 8061B960-8061BB18 000320 01B8+00 1/1 0/0 0/0 .text            start__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void start(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/start__FP10b_oh_class.s"
}
#pragma pop

/* 8061BB18-8061BB54 0004D8 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061D9F8-8061D9FC 000024 0004+00 0/1 0/0 0/0 .rodata          @3805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3805 = 60.0f;
COMPILER_STRIP_GATE(0x8061D9F8, &lit_3805);
#pragma pop

/* 8061D9FC-8061DA00 000028 0004+00 0/1 0/0 0/0 .rodata          @3806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3806 = -23000.0f;
COMPILER_STRIP_GATE(0x8061D9FC, &lit_3806);
#pragma pop

/* 8061DA00-8061DA04 00002C 0004+00 0/1 0/0 0/0 .rodata          @3807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3807 = 1300.0f;
COMPILER_STRIP_GATE(0x8061DA00, &lit_3807);
#pragma pop

/* 8061BB54-8061BC6C 000514 0118+00 1/1 0/0 0/0 .text            wait__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wait(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/wait__FP10b_oh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061DA04-8061DA08 000030 0004+00 0/2 0/0 0/0 .rodata          @3870 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3870[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8061DA04, &lit_3870);
#pragma pop

/* 8061DA08-8061DA0C 000034 0004+00 0/1 0/0 0/0 .rodata          @3871 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3871 = -3.0f / 25.0f;
COMPILER_STRIP_GATE(0x8061DA08, &lit_3871);
#pragma pop

/* 8061DA0C-8061DA10 000038 0004+00 0/1 0/0 0/0 .rodata          @3872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3872 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8061DA0C, &lit_3872);
#pragma pop

/* 8061DA10-8061DA14 00003C 0004+00 0/1 0/0 0/0 .rodata          @3873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3873 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x8061DA10, &lit_3873);
#pragma pop

/* 8061DA14-8061DA18 000040 0004+00 0/2 0/0 0/0 .rodata          @3874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3874 = 200.0f;
COMPILER_STRIP_GATE(0x8061DA14, &lit_3874);
#pragma pop

/* 8061DA18-8061DA1C 000044 0004+00 0/2 0/0 0/0 .rodata          @3875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3875 = 0.5f;
COMPILER_STRIP_GATE(0x8061DA18, &lit_3875);
#pragma pop

/* 8061DA1C-8061DA20 000048 0004+00 0/2 0/0 0/0 .rodata          @3876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3876 = 50.0f;
COMPILER_STRIP_GATE(0x8061DA1C, &lit_3876);
#pragma pop

/* 8061DA20-8061DA24 00004C 0004+00 0/1 0/0 0/0 .rodata          @3877 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3877 = -24000.0f;
COMPILER_STRIP_GATE(0x8061DA20, &lit_3877);
#pragma pop

/* 8061DA24-8061DA28 000050 0004+00 0/2 0/0 0/0 .rodata          @3878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3878 = 1000.0f;
COMPILER_STRIP_GATE(0x8061DA24, &lit_3878);
#pragma pop

/* 8061DA28-8061DA2C 000054 0004+00 0/1 0/0 0/0 .rodata          @3879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3879 = 3700.0f;
COMPILER_STRIP_GATE(0x8061DA28, &lit_3879);
#pragma pop

/* 8061DA2C-8061DA30 000058 0004+00 0/1 0/0 0/0 .rodata          @3880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3880 = 11700.0f;
COMPILER_STRIP_GATE(0x8061DA2C, &lit_3880);
#pragma pop

/* 8061DA30-8061DA34 00005C 0004+00 0/1 0/0 0/0 .rodata          @3881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3881 = 2.0f;
COMPILER_STRIP_GATE(0x8061DA30, &lit_3881);
#pragma pop

/* 8061DA34-8061DA38 000060 0004+00 0/1 0/0 0/0 .rodata          @3882 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3882 = 4000.0f;
COMPILER_STRIP_GATE(0x8061DA34, &lit_3882);
#pragma pop

/* 8061DA38-8061DA3C 000064 0004+00 0/2 0/0 0/0 .rodata          @3883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3883 = 400.0f;
COMPILER_STRIP_GATE(0x8061DA38, &lit_3883);
#pragma pop

/* 8061BC6C-8061C070 00062C 0404+00 1/1 0/0 0/0 .text            attack__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void attack(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/attack__FP10b_oh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061DA3C-8061DA40 000068 0004+00 0/1 0/0 0/0 .rodata          @3911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3911 = 500.0f;
COMPILER_STRIP_GATE(0x8061DA3C, &lit_3911);
#pragma pop

/* 8061C070-8061C1F8 000A30 0188+00 1/1 0/0 0/0 .text            caught__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void caught(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/caught__FP10b_oh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061DA40-8061DA44 00006C 0004+00 0/2 0/0 0/0 .rodata          @3921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3921 = 150.0f;
COMPILER_STRIP_GATE(0x8061DA40, &lit_3921);
#pragma pop

/* 8061C1F8-8061C298 000BB8 00A0+00 1/1 0/0 0/0 .text            end__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void end(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/end__FP10b_oh_class.s"
}
#pragma pop

/* 8061C298-8061C2C4 000C58 002C+00 1/1 0/0 0/0 .text            non__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void non(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/non__FP10b_oh_class.s"
}
#pragma pop

/* 8061C2C4-8061CB4C 000C84 0888+00 2/1 0/0 0/0 .text            action__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/action__FP10b_oh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061DA44-8061DA48 000070 0004+00 0/0 0/0 0/0 .rodata          @4160 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4160 = 80.0f;
COMPILER_STRIP_GATE(0x8061DA44, &lit_4160);
#pragma pop

/* 8061DA48-8061DA4C 000074 0004+00 0/0 0/0 0/0 .rodata          @4161 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4161 = 1500.0f;
COMPILER_STRIP_GATE(0x8061DA48, &lit_4161);
#pragma pop

/* 8061DA4C-8061DA50 000078 0004+00 0/0 0/0 0/0 .rodata          @4162 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4162 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8061DA4C, &lit_4162);
#pragma pop

/* 8061DA50-8061DA54 00007C 0004+00 0/1 0/0 0/0 .rodata          @4163 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4163 = 100.0f;
COMPILER_STRIP_GATE(0x8061DA50, &lit_4163);
#pragma pop

/* 8061DA54-8061DA58 000080 0004+00 0/1 0/0 0/0 .rodata          @4164 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4164 = 2000.0f;
COMPILER_STRIP_GATE(0x8061DA54, &lit_4164);
#pragma pop

/* 8061DA58-8061DA5C 000084 0004+00 0/0 0/0 0/0 .rodata          @4165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4165 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8061DA58, &lit_4165);
#pragma pop

/* 8061DA5C-8061DA64 000088 0008+00 0/0 0/0 0/0 .rodata          @4168 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4168[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8061DA5C, &lit_4168);
#pragma pop

/* 8061DA64-8061DA68 000090 0004+00 0/1 0/0 0/0 .rodata          @4216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4216 = -1.0f;
COMPILER_STRIP_GATE(0x8061DA64, &lit_4216);
#pragma pop

/* 8061CB4C-8061CD98 00150C 024C+00 1/1 0/0 0/0 .text            damage_check__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/damage_check__FP10b_oh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061DA68-8061DA6C 000094 0004+00 0/1 0/0 0/0 .rodata          @4297 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4297 = 20000.0f;
COMPILER_STRIP_GATE(0x8061DA68, &lit_4297);
#pragma pop

/* 8061CD98-8061D05C 001758 02C4+00 2/1 0/0 0/0 .text            daB_OH_Execute__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_OH_Execute(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/daB_OH_Execute__FP10b_oh_class.s"
}
#pragma pop

/* 8061D05C-8061D064 001A1C 0008+00 1/0 0/0 0/0 .text            daB_OH_IsDelete__FP10b_oh_class */
static bool daB_OH_IsDelete(b_oh_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 8061DA74-8061DA74 0000A0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8061DA74 = "B_oh";
#pragma pop

/* 8061D064-8061D0B8 001A24 0054+00 1/0 0/0 0/0 .text            daB_OH_Delete__FP10b_oh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_OH_Delete(b_oh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/daB_OH_Delete__FP10b_oh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061DA6C-8061DA70 000098 0004+00 0/1 0/0 0/0 .rodata          @4438 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4438 = 39.0f;
COMPILER_STRIP_GATE(0x8061DA6C, &lit_4438);
#pragma pop

/* 8061D0B8-8061D39C 001A78 02E4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8061D39C-8061D3E4 001D5C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061DA70-8061DA74 00009C 0004+00 0/1 0/0 0/0 .rodata          @4519 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4519 = 65536.0f;
COMPILER_STRIP_GATE(0x8061DA70, &lit_4519);
#pragma pop

/* 8061DBD8-8061DBDC 000068 0004+00 0/1 0/0 0/0 .bss             Cinit */
#pragma push
#pragma force_active on
static u8 Cinit[4];
#pragma pop

/* 8061D3E4-8061D718 001DA4 0334+00 1/0 0/0 0/0 .text            daB_OH_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_OH_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/daB_OH_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8061D718-8061D7E4 0020D8 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 8061D7E4-8061D868 0021A4 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 8061D868-8061D8B0 002228 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8061D8B0-8061D8F8 002270 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8061D8F8-8061D8FC 0022B8 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 8061D8FC-8061D938 0022BC 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__dt__5csXyzFv.s"
}
#pragma pop

/* 8061D938-8061D93C 0022F8 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 8061D93C-8061D984 0022FC 0048+00 2/1 0/0 0/0 .text            __dt__12daB_OH_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_OH_HIO_c::~daB_OH_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__dt__12daB_OH_HIO_cFv.s"
}
#pragma pop

/* 8061D984-8061D9C0 002344 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_b_oh_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_oh_cpp() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/d_a_b_oh/__sinit_d_a_b_oh_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8061D984, __sinit_d_a_b_oh_cpp);
#pragma pop

/* ############################################################################################## */
/* 8061DBDC-8061DBE0 00006C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8061DBDC[4];
#pragma pop

/* 8061DBE0-8061DBE4 000070 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8061DBE0[4];
#pragma pop

/* 8061DBE4-8061DBE8 000074 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8061DBE4[4];
#pragma pop

/* 8061DBE8-8061DBEC 000078 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8061DBE8[4];
#pragma pop

/* 8061DBEC-8061DBF0 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061DBEC[4];
#pragma pop

/* 8061DBF0-8061DBF4 000080 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061DBF0[4];
#pragma pop

/* 8061DBF4-8061DBF8 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8061DBF4[4];
#pragma pop

/* 8061DBF8-8061DBFC 000088 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8061DBF8[4];
#pragma pop

/* 8061DBFC-8061DC00 00008C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8061DBFC[4];
#pragma pop

/* 8061DC00-8061DC04 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8061DC00[4];
#pragma pop

/* 8061DC04-8061DC08 000094 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8061DC04[4];
#pragma pop

/* 8061DC08-8061DC0C 000098 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8061DC08[4];
#pragma pop

/* 8061DC0C-8061DC10 00009C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8061DC0C[4];
#pragma pop

/* 8061DC10-8061DC14 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061DC10[4];
#pragma pop

/* 8061DC14-8061DC18 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8061DC14[4];
#pragma pop

/* 8061DC18-8061DC1C 0000A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8061DC18[4];
#pragma pop

/* 8061DC1C-8061DC20 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8061DC1C[4];
#pragma pop

/* 8061DC20-8061DC24 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8061DC20[4];
#pragma pop

/* 8061DC24-8061DC28 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8061DC24[4];
#pragma pop

/* 8061DC28-8061DC2C 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8061DC28[4];
#pragma pop

/* 8061DC2C-8061DC30 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8061DC2C[4];
#pragma pop

/* 8061DC30-8061DC34 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061DC30[4];
#pragma pop

/* 8061DC34-8061DC38 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061DC34[4];
#pragma pop

/* 8061DC38-8061DC3C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061DC38[4];
#pragma pop

/* 8061DC3C-8061DC40 0000CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8061DC3C[4];
#pragma pop

/* 8061DA74-8061DA74 0000A0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
