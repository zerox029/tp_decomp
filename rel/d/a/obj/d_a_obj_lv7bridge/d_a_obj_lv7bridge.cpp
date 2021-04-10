//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv7bridge
//

#include "rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CDD4 */ void transM(cXyz const&);

    static u8 now[48];
};

struct J3DModelData {};

struct J3DAnmTransform {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct daObjLv7Brg_c {
    /* 80C863EC */ void search_swspinner();
    /* 80C86454 */ void initBaseMtx();
    /* 80C864B4 */ void setBaseMtx();
    /* 80C865B8 */ void Create();
    /* 80C867CC */ void CreateHeap();
    /* 80C86A44 */ void create1st();
    /* 80C86B40 */ void Execute(f32 (**)[3][4]);
    /* 80C86E68 */ void action();
    /* 80C86F44 */ void mode_action();
    /* 80C87210 */ void mode_end();
    /* 80C87214 */ void calcCoPos();
    /* 80C87304 */ void Draw();
    /* 80C87458 */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
    /* 8006FB10 */ void StartQuake(int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
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

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80C87798 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
    /* 80C875B8 */ ~dCcD_Cyl();
    /* 80C87684 */ dCcD_Cyl();
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80C87864 */ ~dBgS_ObjAcch();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

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

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80C877F4 */ ~dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 80C87708 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80C87750 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80C87940 */ ~cCcD_GStts();
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
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C869FC */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void searchSwSpinner__FPvPv();
extern "C" void search_swspinner__13daObjLv7Brg_cFv();
extern "C" void initBaseMtx__13daObjLv7Brg_cFv();
extern "C" void setBaseMtx__13daObjLv7Brg_cFv();
extern "C" void Create__13daObjLv7Brg_cFv();
extern "C" void CreateHeap__13daObjLv7Brg_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__13daObjLv7Brg_cFv();
extern "C" void Execute__13daObjLv7Brg_cFPPA3_A4_f();
extern "C" void action__13daObjLv7Brg_cFv();
extern "C" void mode_action__13daObjLv7Brg_cFv();
extern "C" void mode_end__13daObjLv7Brg_cFv();
extern "C" void calcCoPos__13daObjLv7Brg_cFv();
extern "C" void Draw__13daObjLv7Brg_cFv();
extern "C" void Delete__13daObjLv7Brg_cFv();
extern "C" static void daObjLv7Brg_create1st__FP13daObjLv7Brg_c();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daObjLv7Brg_MoveBGDelete__FP13daObjLv7Brg_c();
extern "C" static void daObjLv7Brg_MoveBGExecute__FP13daObjLv7Brg_c();
extern "C" static void daObjLv7Brg_MoveBGDraw__FP13daObjLv7Brg_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_80C87988();
extern "C" static void func_80C87990();
extern "C" extern char const* const d_a_obj_lv7bridge__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80C87BB8[4];

//
// Declarations:
//

/* 80C86378-80C863EC 000078 0074+00 1/1 0/0 0/0 .text            searchSwSpinner__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void searchSwSpinner(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/searchSwSpinner__FPvPv.s"
}
#pragma pop

/* 80C863EC-80C86454 0000EC 0068+00 1/1 0/0 0/0 .text            search_swspinner__13daObjLv7Brg_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::search_swspinner() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/search_swspinner__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* 80C86454-80C864B4 000154 0060+00 1/1 0/0 0/0 .text            initBaseMtx__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/initBaseMtx__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C879A0-80C879A8 000000 0008+00 4/4 0/0 0/0 .rodata          l_bmd */
SECTION_RODATA static u8 const l_bmd[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0A,
};
COMPILER_STRIP_GATE(0x80C879A0, &l_bmd);

/* 80C879A8-80C879B0 000008 0008+00 1/1 0/0 0/0 .rodata          l_dzb */
SECTION_RODATA static u8 const l_dzb[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0D,
};
COMPILER_STRIP_GATE(0x80C879A8, &l_dzb);

/* 80C879B0-80C879C4 000010 0012+02 0/1 0/0 0/0 .rodata          l_eff_id */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_eff_id[18 + 2 /* padding */] = {
    0x8B,
    0x55,
    0x8B,
    0x56,
    0x8B,
    0x57,
    0x8B,
    0x58,
    0x8B,
    0x59,
    0x8B,
    0x5A,
    0x8B,
    0x5B,
    0x8B,
    0x5C,
    0x8B,
    0x5D,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C879B0, &l_eff_id);
#pragma pop

/* 80C879C4-80C879CC 000024 0008+00 1/1 0/0 0/0 .rodata          l_heap_size */
SECTION_RODATA static u8 const l_heap_size[8] = {
    0x00, 0x00, 0x60, 0x00, 0x00, 0x02, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C879C4, &l_heap_size);

/* 80C879CC-80C879D0 00002C 0004+00 3/5 0/0 0/0 .rodata          @3697 */
SECTION_RODATA static u8 const lit_3697[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C879CC, &lit_3697);

/* 80C864B4-80C865B8 0001B4 0104+00 2/2 0/0 0/0 .text            setBaseMtx__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/setBaseMtx__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C879D0-80C879D4 000030 0004+00 1/2 0/0 0/0 .rodata          @3767 */
SECTION_RODATA static f32 const lit_3767 = 5100.0f;
COMPILER_STRIP_GATE(0x80C879D0, &lit_3767);

/* 80C879D4-80C879D8 000034 0004+00 1/1 0/0 0/0 .rodata          @3768 */
SECTION_RODATA static f32 const lit_3768 = 100.0f;
COMPILER_STRIP_GATE(0x80C879D4, &lit_3768);

/* 80C879D8-80C879E0 000038 0008+00 1/1 0/0 0/0 .rodata          @3770 */
SECTION_RODATA static u8 const lit_3770[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C879D8, &lit_3770);

/* 80C87A20-80C87A20 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C87A20 = "Obj_l7brg";
SECTION_DEAD static char const* const stringBase_80C87A2A = "K_bridge";
#pragma pop

/* 80C87A34-80C87A40 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C87A40-80C87A54 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80C87A54-80C87A5C -00001 0008+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)&d_a_obj_lv7bridge__stringBase0,
    (void*)(((char*)&d_a_obj_lv7bridge__stringBase0) + 0xA),
};

/* 80C87A5C-80C87AA0 000028 0044+00 1/1 0/0 0/0 .data            l_cyl_src */
SECTION_DATA static u8 l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00,
};

/* 80C865B8-80C867CC 0002B8 0214+00 1/0 0/0 0/0 .text            Create__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/Create__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C879E0-80C879E8 000040 0008+00 0/1 0/0 0/0 .rodata          l_bck$3780 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_bck[8] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06,
};
COMPILER_STRIP_GATE(0x80C879E0, &l_bck);
#pragma pop

/* 80C879E8-80C879EC 000048 0004+00 0/3 0/0 0/0 .rodata          @3830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3830 = 1.0f;
COMPILER_STRIP_GATE(0x80C879E8, &lit_3830);
#pragma pop

/* 80C87AA0-80C87AAC -00001 000C+00 0/1 0/0 0/0 .data            @3941 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3941[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_action__13daObjLv7Brg_cFv,
};
#pragma pop

/* 80C87AAC-80C87AB8 -00001 000C+00 0/1 0/0 0/0 .data            @3942 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3942[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_end__13daObjLv7Brg_cFv,
};
#pragma pop

/* 80C87AB8-80C87AD0 000084 0018+00 0/1 0/0 0/0 .data            mode_proc$3940 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C87AD0-80C87AF0 -00001 0020+00 1/0 0/0 0/0 .data            daObjLv7Brg_METHODS */
SECTION_DATA static void* daObjLv7Brg_METHODS[8] = {
    (void*)daObjLv7Brg_create1st__FP13daObjLv7Brg_c,
    (void*)daObjLv7Brg_MoveBGDelete__FP13daObjLv7Brg_c,
    (void*)daObjLv7Brg_MoveBGExecute__FP13daObjLv7Brg_c,
    (void*)NULL,
    (void*)daObjLv7Brg_MoveBGDraw__FP13daObjLv7Brg_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C87AF0-80C87B20 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv7Bridge */
SECTION_DATA extern void* g_profile_Obj_Lv7Bridge[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00B50000, (void*)&g_fpcLf_Method,
    (void*)0x00000AA4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02360000, (void*)&daObjLv7Brg_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C87B20-80C87B2C 0000EC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80C87B2C-80C87B38 0000F8 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C87B38-80C87B44 000104 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C87B44-80C87B50 000110 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C87B50-80C87B5C 00011C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C87B5C-80C87B80 000128 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C87990,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C87988,
};

/* 80C87B80-80C87B8C 00014C 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C867CC-80C869FC 0004CC 0230+00 1/0 0/0 0/0 .text            CreateHeap__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/CreateHeap__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* 80C869FC-80C86A44 0006FC 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C86A44-80C86B40 000744 00FC+00 1/1 0/0 0/0 .text            create1st__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/create1st__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C879EC-80C879F0 00004C 0004+00 0/1 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = 2550.0f;
COMPILER_STRIP_GATE(0x80C879EC, &lit_3935);
#pragma pop

/* 80C879F0-80C879F4 000050 0004+00 0/1 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = 7650.0f;
COMPILER_STRIP_GATE(0x80C879F0, &lit_3936);
#pragma pop

/* 80C86B40-80C86E68 000840 0328+00 1/0 0/0 0/0 .text            Execute__13daObjLv7Brg_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/Execute__13daObjLv7Brg_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C86E68-80C86F44 000B68 00DC+00 1/1 0/0 0/0 .text            action__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/action__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C879F4-80C879F8 000054 0004+00 0/1 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4027 = 30.0f;
COMPILER_STRIP_GATE(0x80C879F4, &lit_4027);
#pragma pop

/* 80C879F8-80C879FC 000058 0004+00 0/1 0/0 0/0 .rodata          @4028 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4028 = -45.0f;
COMPILER_STRIP_GATE(0x80C879F8, &lit_4028);
#pragma pop

/* 80C879FC-80C87A00 00005C 0004+00 0/1 0/0 0/0 .rodata          @4029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4029 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x80C879FC, &lit_4029);
#pragma pop

/* 80C87A00-80C87A04 000060 0004+00 0/1 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4030 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C87A00, &lit_4030);
#pragma pop

/* 80C87A04-80C87A08 000064 0004+00 0/1 0/0 0/0 .rodata          @4031 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4031 = 127.0f;
COMPILER_STRIP_GATE(0x80C87A04, &lit_4031);
#pragma pop

/* 80C87A08-80C87A0C 000068 0004+00 0/1 0/0 0/0 .rodata          @4032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4032 = -1.0f;
COMPILER_STRIP_GATE(0x80C87A08, &lit_4032);
#pragma pop

/* 80C86F44-80C87210 000C44 02CC+00 1/0 0/0 0/0 .text            mode_action__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::mode_action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/mode_action__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* 80C87210-80C87214 000F10 0004+00 1/0 0/0 0/0 .text            mode_end__13daObjLv7Brg_cFv */
void daObjLv7Brg_c::mode_end() {
    /* empty function */
}

/* ############################################################################################## */
/* 80C87A0C-80C87A10 00006C 0004+00 0/1 0/0 0/0 .rodata          @4067 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4067 = 2700.0f;
COMPILER_STRIP_GATE(0x80C87A0C, &lit_4067);
#pragma pop

/* 80C87A10-80C87A14 000070 0004+00 0/1 0/0 0/0 .rodata          @4068 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4068 = -80.0f;
COMPILER_STRIP_GATE(0x80C87A10, &lit_4068);
#pragma pop

/* 80C87A14-80C87A18 000074 0004+00 0/1 0/0 0/0 .rodata          @4069 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4069 = 450.0f;
COMPILER_STRIP_GATE(0x80C87A14, &lit_4069);
#pragma pop

/* 80C87A18-80C87A1C 000078 0004+00 0/1 0/0 0/0 .rodata          @4070 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4070 = -450.0f;
COMPILER_STRIP_GATE(0x80C87A18, &lit_4070);
#pragma pop

/* 80C87A1C-80C87A20 00007C 0004+00 0/1 0/0 0/0 .rodata          @4071 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4071 = -2700.0f;
COMPILER_STRIP_GATE(0x80C87A1C, &lit_4071);
#pragma pop

/* 80C87214-80C87304 000F14 00F0+00 1/1 0/0 0/0 .text            calcCoPos__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::calcCoPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/calcCoPos__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* 80C87304-80C87458 001004 0154+00 1/0 0/0 0/0 .text            Draw__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/Draw__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* 80C87458-80C874CC 001158 0074+00 1/0 0/0 0/0 .text            Delete__13daObjLv7Brg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv7Brg_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/Delete__13daObjLv7Brg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C87B8C-80C87BB4 000158 0028+00 1/1 0/0 0/0 .data            __vt__13daObjLv7Brg_c */
SECTION_DATA extern void* __vt__13daObjLv7Brg_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daObjLv7Brg_cFv,
    (void*)Create__13daObjLv7Brg_cFv,
    (void*)Execute__13daObjLv7Brg_cFPPA3_A4_f,
    (void*)Draw__13daObjLv7Brg_cFv,
    (void*)Delete__13daObjLv7Brg_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C874CC-80C875B8 0011CC 00EC+00 1/0 0/0 0/0 .text daObjLv7Brg_create1st__FP13daObjLv7Brg_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv7Brg_create1st(daObjLv7Brg_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/daObjLv7Brg_create1st__FP13daObjLv7Brg_c.s"
}
#pragma pop

/* 80C875B8-80C87684 0012B8 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::~dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__8dCcD_CylFv.s"
}
#pragma pop

/* 80C87684-80C87708 001384 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__ct__8dCcD_CylFv.s"
}
#pragma pop

/* 80C87708-80C87750 001408 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C87750-80C87798 001450 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C87798-80C877F4 001498 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C877F4-80C87864 0014F4 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80C87864-80C878D4 001564 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C878D4-80C878F4 0015D4 0020+00 1/0 0/0 0/0 .text daObjLv7Brg_MoveBGDelete__FP13daObjLv7Brg_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv7Brg_MoveBGDelete(daObjLv7Brg_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/daObjLv7Brg_MoveBGDelete__FP13daObjLv7Brg_c.s"
}
#pragma pop

/* 80C878F4-80C87914 0015F4 0020+00 1/0 0/0 0/0 .text daObjLv7Brg_MoveBGExecute__FP13daObjLv7Brg_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv7Brg_MoveBGExecute(daObjLv7Brg_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/daObjLv7Brg_MoveBGExecute__FP13daObjLv7Brg_c.s"
}
#pragma pop

/* 80C87914-80C87940 001614 002C+00 1/0 0/0 0/0 .text daObjLv7Brg_MoveBGDraw__FP13daObjLv7Brg_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv7Brg_MoveBGDraw(daObjLv7Brg_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/daObjLv7Brg_MoveBGDraw__FP13daObjLv7Brg_c.s"
}
#pragma pop

/* 80C87940-80C87988 001640 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C87988-80C87990 001688 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C87988() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/func_80C87988.s"
}
#pragma pop

/* 80C87990-80C87998 001690 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C87990() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv7bridge/d_a_obj_lv7bridge/func_80C87990.s"
}
#pragma pop

/* 80C87A20-80C87A20 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
