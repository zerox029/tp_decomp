//
// Generated By: dol2asm
// Translation Unit: d_a_obj_zrTurara
//

#include "rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara.h"
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

struct mDoHIO_entry_c {
    /* 80D4059C */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daZrTurara_c {
    /* 80D405E4 */ void setBaseMtx();
    /* 80D40714 */ void CreateHeap();
    /* 80D40844 */ void create();
    /* 80D40C08 */ void Execute(f32 (**)[3][4]);
    /* 80D40C68 */ void move();
    /* 80D40D88 */ void modeWait();
    /* 80D40E0C */ void init_modeBreak();
    /* 80D410E0 */ void modeBreak();
    /* 80D412A0 */ void init_modeEnd();
    /* 80D412AC */ void modeEnd();
    /* 80D412B0 */ void Draw();
    /* 80D41380 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

struct daZrTurara_HIO_c {
    /* 80D4056C */ daZrTurara_HIO_c();
    /* 80D414BC */ ~daZrTurara_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
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

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80D40BAC */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
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

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80D40B1C */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D40B64 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80D41474 */ ~cCcD_GStts();
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

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__16daZrTurara_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daZrTurara_cFv();
extern "C" void CreateHeap__12daZrTurara_cFv();
extern "C" void create__12daZrTurara_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void Execute__12daZrTurara_cFPPA3_A4_f();
extern "C" void move__12daZrTurara_cFv();
extern "C" void modeWait__12daZrTurara_cFv();
extern "C" void init_modeBreak__12daZrTurara_cFv();
extern "C" void modeBreak__12daZrTurara_cFv();
extern "C" void init_modeEnd__12daZrTurara_cFv();
extern "C" void modeEnd__12daZrTurara_cFv();
extern "C" void Draw__12daZrTurara_cFv();
extern "C" void Delete__12daZrTurara_cFv();
extern "C" static void daZrTurara_Draw__FP12daZrTurara_c();
extern "C" static void daZrTurara_Execute__FP12daZrTurara_c();
extern "C" static void daZrTurara_Delete__FP12daZrTurara_c();
extern "C" static void daZrTurara_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daZrTurara_HIO_cFv();
extern "C" void __sinit_d_a_obj_zrTurara_cpp();
extern "C" u8 const mCcDObjInfo__12daZrTurara_c[48];
extern "C" extern char const* const d_a_obj_zrTurara__stringBase0;
extern "C" u8 mCcDCyl__12daZrTurara_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
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
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D4159C-80D415A0 000000 0004+00 3/4 0/0 0/0 .rodata          @3657 */
SECTION_RODATA static f32 const lit_3657 = 250.0f;
COMPILER_STRIP_GATE(0x80D4159C, &lit_3657);

/* 80D41608-80D41614 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D41614-80D41628 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80D41628-80D4166C 000020 0044+00 2/2 0/0 0/0 .data            mCcDCyl__12daZrTurara_c */
SECTION_DATA u8 daZrTurara_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D4166C-80D41678 -00001 000C+00 0/1 0/0 0/0 .data            @3916 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3916[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daZrTurara_cFv,
};
#pragma pop

/* 80D41678-80D41684 -00001 000C+00 0/1 0/0 0/0 .data            @3917 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3917[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreak__12daZrTurara_cFv,
};
#pragma pop

/* 80D41684-80D41690 -00001 000C+00 0/1 0/0 0/0 .data            @3918 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3918[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeEnd__12daZrTurara_cFv,
};
#pragma pop

/* 80D41690-80D416B4 000088 0024+00 0/1 0/0 0/0 .data            mode_proc$3915 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D416B4-80D416D4 -00001 0020+00 1/0 0/0 0/0 .data            l_daZrTurara_Method */
SECTION_DATA static void* l_daZrTurara_Method[8] = {
    (void*)daZrTurara_Create__FP10fopAc_ac_c,
    (void*)daZrTurara_Delete__FP12daZrTurara_c,
    (void*)daZrTurara_Execute__FP12daZrTurara_c,
    (void*)NULL,
    (void*)daZrTurara_Draw__FP12daZrTurara_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D416D4-80D41704 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_zrTurara */
SECTION_DATA extern void* g_profile_Obj_zrTurara[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00B60000, (void*)&g_fpcLf_Method,
    (void*)0x0000076C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x028C0000, (void*)&l_daZrTurara_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D41704-80D41710 0000FC 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D41710-80D4171C 000108 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D4171C-80D41728 000114 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D41728-80D41734 000120 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D41734-80D4175C 00012C 0028+00 1/1 0/0 0/0 .data            __vt__12daZrTurara_c */
SECTION_DATA extern void* __vt__12daZrTurara_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daZrTurara_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daZrTurara_cFPPA3_A4_f,
    (void*)Draw__12daZrTurara_cFv,
    (void*)Delete__12daZrTurara_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D4175C-80D41768 000154 000C+00 2/2 0/0 0/0 .data            __vt__16daZrTurara_HIO_c */
SECTION_DATA extern void* __vt__16daZrTurara_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daZrTurara_HIO_cFv,
};

/* 80D41768-80D41774 000160 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80D4056C-80D4059C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__16daZrTurara_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daZrTurara_HIO_c::daZrTurara_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__ct__16daZrTurara_HIO_cFv.s"
}
#pragma pop

/* 80D4059C-80D405E4 00011C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D415A0-80D415D0 000004 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__12daZrTurara_c */
SECTION_RODATA u8 const daZrTurara_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D415A0, &daZrTurara_c::mCcDObjInfo);

/* 80D415D0-80D415D4 000034 0004+00 3/4 0/0 0/0 .rodata          @3699 */
SECTION_RODATA static f32 const lit_3699 = 1.0f;
COMPILER_STRIP_GATE(0x80D415D0, &lit_3699);

/* 80D405E4-80D40714 000164 0130+00 2/2 0/0 0/0 .text            setBaseMtx__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/setBaseMtx__12daZrTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D415FC-80D415FC 000060 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D415FC = "M_DrpRock";
#pragma pop

/* 80D40714-80D40844 000294 0130+00 1/0 0/0 0/0 .text            CreateHeap__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/CreateHeap__12daZrTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D415D4-80D415DC 000038 0004+04 1/1 0/0 0/0 .rodata          @3831 */
SECTION_RODATA static f32 const lit_3831[1 + 1 /* padding */] = {
    1.0f / 10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D415D4, &lit_3831);

/* 80D415DC-80D415E4 000040 0008+00 1/1 0/0 0/0 .rodata          @3833 */
SECTION_RODATA static u8 const lit_3833[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D415DC, &lit_3833);

/* 80D40844-80D40B1C 0003C4 02D8+00 1/1 0/0 0/0 .text            create__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/create__12daZrTurara_cFv.s"
}
#pragma pop

/* 80D40B1C-80D40B64 00069C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D40B64-80D40BAC 0006E4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D40BAC-80D40C08 00072C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80D40C08-80D40C68 000788 0060+00 1/0 0/0 0/0 .text            Execute__12daZrTurara_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/Execute__12daZrTurara_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D415E4-80D415E8 000048 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3926 = 130.0f;
COMPILER_STRIP_GATE(0x80D415E4, &lit_3926);
#pragma pop

/* 80D415E8-80D415EC 00004C 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 450.0f;
COMPILER_STRIP_GATE(0x80D415E8, &lit_3927);
#pragma pop

/* 80D415EC-80D415F0 000050 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 500.0f;
COMPILER_STRIP_GATE(0x80D415EC, &lit_3928);
#pragma pop

/* 80D41780-80D4178C 000008 000C+00 1/1 0/0 0/0 .bss             @3651 */
static u8 lit_3651[12];

/* 80D4178C-80D41798 000014 000C+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 80D41798-80D4179C 000020 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80D41798[4];

/* 80D40C68-80D40D88 0007E8 0120+00 1/1 0/0 0/0 .text            move__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::move() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/move__12daZrTurara_cFv.s"
}
#pragma pop

/* 80D40D88-80D40E0C 000908 0084+00 1/0 0/0 0/0 .text            modeWait__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/modeWait__12daZrTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D415F0-80D415F4 000054 0004+00 1/1 0/0 0/0 .rodata          @4013 */
SECTION_RODATA static f32 const lit_4013 = -1.0f;
COMPILER_STRIP_GATE(0x80D415F0, &lit_4013);

/* 80D40E0C-80D410E0 00098C 02D4+00 1/1 0/0 0/0 .text            init_modeBreak__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::init_modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/init_modeBreak__12daZrTurara_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D415F4-80D415F8 000058 0004+00 0/1 0/0 0/0 .rodata          @4059 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4059 = 200.0f;
COMPILER_STRIP_GATE(0x80D415F4, &lit_4059);
#pragma pop

/* 80D415F8-80D415FC 00005C 0004+00 0/1 0/0 0/0 .rodata          @4060 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4060 = 20.0f;
COMPILER_STRIP_GATE(0x80D415F8, &lit_4060);
#pragma pop

/* 80D410E0-80D412A0 000C60 01C0+00 1/0 0/0 0/0 .text            modeBreak__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/modeBreak__12daZrTurara_cFv.s"
}
#pragma pop

/* 80D412A0-80D412AC 000E20 000C+00 2/2 0/0 0/0 .text            init_modeEnd__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::init_modeEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/init_modeEnd__12daZrTurara_cFv.s"
}
#pragma pop

/* 80D412AC-80D412B0 000E2C 0004+00 1/0 0/0 0/0 .text            modeEnd__12daZrTurara_cFv */
void daZrTurara_c::modeEnd() {
    /* empty function */
}

/* 80D412B0-80D41380 000E30 00D0+00 1/0 0/0 0/0 .text            Draw__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/Draw__12daZrTurara_cFv.s"
}
#pragma pop

/* 80D41380-80D413E8 000F00 0068+00 1/0 0/0 0/0 .text            Delete__12daZrTurara_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZrTurara_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/Delete__12daZrTurara_cFv.s"
}
#pragma pop

/* 80D413E8-80D41414 000F68 002C+00 1/0 0/0 0/0 .text            daZrTurara_Draw__FP12daZrTurara_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daZrTurara_Draw(daZrTurara_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/daZrTurara_Draw__FP12daZrTurara_c.s"
}
#pragma pop

/* 80D41414-80D41434 000F94 0020+00 1/0 0/0 0/0 .text daZrTurara_Execute__FP12daZrTurara_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daZrTurara_Execute(daZrTurara_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/daZrTurara_Execute__FP12daZrTurara_c.s"
}
#pragma pop

/* 80D41434-80D41454 000FB4 0020+00 1/0 0/0 0/0 .text            daZrTurara_Delete__FP12daZrTurara_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daZrTurara_Delete(daZrTurara_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/daZrTurara_Delete__FP12daZrTurara_c.s"
}
#pragma pop

/* 80D41454-80D41474 000FD4 0020+00 1/0 0/0 0/0 .text            daZrTurara_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daZrTurara_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/daZrTurara_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D41474-80D414BC 000FF4 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80D414BC-80D41518 00103C 005C+00 2/1 0/0 0/0 .text            __dt__16daZrTurara_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daZrTurara_HIO_c::~daZrTurara_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__dt__16daZrTurara_HIO_cFv.s"
}
#pragma pop

/* 80D41518-80D41588 001098 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_zrTurara_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_zrTurara_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zrTurara/d_a_obj_zrTurara/__sinit_d_a_obj_zrTurara_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80D41518, __sinit_d_a_obj_zrTurara_cpp);
#pragma pop

/* 80D415FC-80D415FC 000060 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
