/**
 * @file d_a_e_dk.cpp
 * 
*/

#include "d/actor/d_a_e_dk.h"
#include "dol2asm.h"




//
// Forward References:
//

extern "C" void __ct__12daE_DK_HIO_cFv();
extern "C" void draw__8daE_DK_cFv();
extern "C" static void daE_DK_Draw__FP8daE_DK_c();
extern "C" void setBck__8daE_DK_cFiUcff();
extern "C" void setBckCore__8daE_DK_cFiUcff();
extern "C" void setActionMode__8daE_DK_cFii();
extern "C" void damage_check__8daE_DK_cFv();
extern "C" void checkPlayerSearch__8daE_DK_cFv();
extern "C" void checkPlayerAttack__8daE_DK_cFf();
extern "C" void checkWaterHeight__8daE_DK_cFv();
extern "C" void SphBgcCallBack__8daE_DK_cFP11dBgS_SphChkP10cBgD_Vtx_tiiiP8cM3dGPlaPv();
extern "C" void setElectricEffect__8daE_DK_cFv();
extern "C" void setCoreDeadEffect__8daE_DK_cFv();
extern "C" void setBodyDeadEffect__8daE_DK_cFv();
extern "C" void executeWait__8daE_DK_cFv();
extern "C" void executeChase__8daE_DK_cFv();
extern "C" void executeAttack__8daE_DK_cFv();
extern "C" void executeDamage__8daE_DK_cFv();
extern "C" void BodyDeathMove__8daE_DK_cFv();
extern "C" void executeDeath__8daE_DK_cFv();
extern "C" void action__8daE_DK_cFv();
extern "C" void mtx_set__8daE_DK_cFv();
extern "C" void cc_set__8daE_DK_cFv();
extern "C" void execute__8daE_DK_cFv();
extern "C" static void daE_DK_Execute__FP8daE_DK_c();
extern "C" static bool daE_DK_IsDelete__FP8daE_DK_c();
extern "C" void _delete__8daE_DK_cFv();
extern "C" static void daE_DK_Delete__FP8daE_DK_c();
extern "C" void CreateHeap__8daE_DK_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__8daE_DK_cFv();
extern "C" void __ct__8daE_DK_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" static void daE_DK_Create__FP8daE_DK_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_DK_HIO_cFv();
extern "C" void __sinit_d_a_e_dk_cpp();
extern "C" static void func_806AD514();
extern "C" static void func_806AD51C();
extern "C" extern char const* const d_a_e_dk__stringBase0;

//
// External References:
//

extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
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
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItem__FPC4cXyziiiPC5csXyzPC4cXyzi();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void SphChk__4dBgSFP11dBgS_SphChkPv();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_SphChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_camera_water_in_status_check__Fv();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseUC__FPUcUcUc();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void func_80280808();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 j3dZModeTable[96];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 806AD538-806AD53C 000000 0004+00 17/17 0/0 0/0 .rodata          @3764 */
SECTION_RODATA static f32 const lit_3764 = 2.0f;
COMPILER_STRIP_GATE(0x806AD538, &lit_3764);

/* 806AD53C-806AD540 000004 0004+00 0/2 0/0 0/0 .rodata          @3765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3765 = 700.0f;
COMPILER_STRIP_GATE(0x806AD53C, &lit_3765);
#pragma pop

/* 806AD540-806AD544 000008 0004+00 0/3 0/0 0/0 .rodata          @3766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3766 = 1000.0f;
COMPILER_STRIP_GATE(0x806AD540, &lit_3766);
#pragma pop

/* 806AD634-806AD640 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806AD640-806AD654 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 806AD654-806AD694 000020 0040+00 0/1 0/0 0/0 .data            cc_dk_src__22@unnamed@d_a_e_dk_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_806AD654[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xBD, 0xDF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 806AD694-806AD6D4 000060 0040+00 0/1 0/0 0/0 .data cc_dk_at_src__22@unnamed@d_a_e_dk_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_806AD694[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 806AD6D4-806AD714 0000A0 0040+00 0/1 0/0 0/0 .data cc_dk_core_src__22@unnamed@d_a_e_dk_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_806AD6D4[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 806AD714-806AD720 0000E0 000C+00 1/1 0/0 0/0 .data            elect_effect_name$4066 */
SECTION_DATA static u8 elect_effect_name[12] = {
    0x84, 0xBE, 0x84, 0xBF, 0x84, 0xC0, 0x84, 0xC1, 0x84, 0xC2, 0x84, 0xC3,
};

/* 806AD720-806AD724 0000EC 0004+00 1/1 0/0 0/0 .data            dead_effect_name$4178 */
SECTION_DATA static u8 dead_effect_name[4] = {
    0x86,
    0x0D,
    0x86,
    0x0E,
};

/* 806AD724-806AD744 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_DK_Method */
static actor_method_class l_daE_DK_Method = {
    (process_method_func)daE_DK_Create__FP8daE_DK_c,
    (process_method_func)daE_DK_Delete__FP8daE_DK_c,
    (process_method_func)daE_DK_Execute__FP8daE_DK_c,
    (process_method_func)daE_DK_IsDelete__FP8daE_DK_c,
    (process_method_func)daE_DK_Draw__FP8daE_DK_c,
};

/* 806AD744-806AD774 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_DK */
extern actor_process_profile_definition g_profile_E_DK = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_DK,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daE_DK_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  755,                    // mPriority
  &l_daE_DK_Method,       // sub_method
  0x000C0100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 806AD774-806AD780 000140 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 806AD780-806AD78C 00014C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 806AD78C-806AD798 000158 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 806AD798-806AD7A4 000164 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806AD7A4-806AD7B0 000170 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 806AD7B0-806AD7D4 00017C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806AD51C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806AD514,
};

/* 806AD7D4-806AD7E0 0001A0 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 806AD7E0-806AD7EC 0001AC 000C+00 2/2 0/0 0/0 .data            __vt__12daE_DK_HIO_c */
SECTION_DATA extern void* __vt__12daE_DK_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_DK_HIO_cFv,
};

/* 806AA1EC-806AA228 0000EC 003C+00 1/1 0/0 0/0 .text            __ct__12daE_DK_HIO_cFv */
daE_DK_HIO_c::daE_DK_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD544-806AD54C 00000C 0008+00 0/1 0/0 0/0 .rodata dk_brk_name__22@unnamed@d_a_e_dk_cpp@ */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const data_806AD544[8] = {
    0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x16,
};
COMPILER_STRIP_GATE(0x806AD544, &data_806AD544);
#pragma pop

/* 806AD54C-806AD554 000014 0008+00 0/1 0/0 0/0 .rodata dk_btk_name__22@unnamed@d_a_e_dk_cpp@ */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const data_806AD54C[8] = {
    0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x1A,
};
COMPILER_STRIP_GATE(0x806AD54C, &data_806AD54C);
#pragma pop

/* 806AD554-806AD558 00001C 0004+00 0/9 0/0 0/0 .rodata          @3872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3872 = 100.0f;
COMPILER_STRIP_GATE(0x806AD554, &lit_3872);
#pragma pop

/* 806AD558-806AD55C 000020 0004+00 3/14 0/0 0/0 .rodata          @3873 */
SECTION_RODATA static u8 const lit_3873[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x806AD558, &lit_3873);

/* 806AD55C-806AD560 000024 0004+00 2/10 0/0 0/0 .rodata          @3874 */
SECTION_RODATA static f32 const lit_3874 = 1.0f;
COMPILER_STRIP_GATE(0x806AD55C, &lit_3874);

/* 806AA228-806AA5A8 000128 0380+00 1/1 0/0 0/0 .text            draw__8daE_DK_cFv */
void daE_DK_c::draw() {
    // NONMATCHING
}

/* 806AA5A8-806AA5C8 0004A8 0020+00 1/0 0/0 0/0 .text            daE_DK_Draw__FP8daE_DK_c */
static void daE_DK_Draw(daE_DK_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD560-806AD568 000028 0004+04 2/2 0/0 0/0 .rodata          @3893 */
SECTION_RODATA static f32 const lit_3893[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x806AD560, &lit_3893);

/* 806AD628-806AD628 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806AD628 = "E_DK";
#pragma pop

/* 806AA5C8-806AA68C 0004C8 00C4+00 5/5 0/0 0/0 .text            setBck__8daE_DK_cFiUcff */
void daE_DK_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* 806AA68C-806AA730 00058C 00A4+00 5/5 0/0 0/0 .text            setBckCore__8daE_DK_cFiUcff */
void daE_DK_c::setBckCore(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* 806AA730-806AA73C 000630 000C+00 6/6 0/0 0/0 .text            setActionMode__8daE_DK_cFii */
void daE_DK_c::setActionMode(int param_0, int param_1) {
    // NONMATCHING
}

/* 806AA73C-806AA8B0 00063C 0174+00 1/1 0/0 0/0 .text            damage_check__8daE_DK_cFv */
void daE_DK_c::damage_check() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD568-806AD570 000030 0008+00 0/3 0/0 0/0 .rodata          @3993 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3993[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806AD568, &lit_3993);
#pragma pop

/* 806AD570-806AD578 000038 0008+00 0/3 0/0 0/0 .rodata          @3994 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3994[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806AD570, &lit_3994);
#pragma pop

/* 806AD578-806AD580 000040 0008+00 0/3 0/0 0/0 .rodata          @3995 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3995[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806AD578, &lit_3995);
#pragma pop

/* 806AD7F8-806AD7FC 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_806AD7F8[4];

/* 806AD7FC-806AD808 00000C 000C+00 1/1 0/0 0/0 .bss             @3759 */
static u8 lit_3759[12];

/* 806AD808-806AD820 000018 0018+00 9/9 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[24];

/* 806AA8B0-806AAB18 0007B0 0268+00 2/2 0/0 0/0 .text            checkPlayerSearch__8daE_DK_cFv */
void daE_DK_c::checkPlayerSearch() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD580-806AD584 000048 0004+00 0/2 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4018 = 8.0f;
COMPILER_STRIP_GATE(0x806AD580, &lit_4018);
#pragma pop

/* 806AD584-806AD588 00004C 0004+00 0/3 0/0 0/0 .rodata          @4019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4019 = 30.0f;
COMPILER_STRIP_GATE(0x806AD584, &lit_4019);
#pragma pop

/* 806AD588-806AD58C 000050 0004+00 0/4 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4020 = 60.0f;
COMPILER_STRIP_GATE(0x806AD588, &lit_4020);
#pragma pop

/* 806AD58C-806AD590 000054 0004+00 0/1 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4021 = 400.0f;
COMPILER_STRIP_GATE(0x806AD58C, &lit_4021);
#pragma pop

/* 806AAB18-806AAC24 000A18 010C+00 2/2 0/0 0/0 .text            checkPlayerAttack__8daE_DK_cFf */
void daE_DK_c::checkPlayerAttack(f32 param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD590-806AD594 000058 0004+00 0/1 0/0 0/0 .rodata          @4043 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4043 = -1000000000.0f;
COMPILER_STRIP_GATE(0x806AD590, &lit_4043);
#pragma pop

/* 806AD594-806AD598 00005C 0004+00 0/1 0/0 0/0 .rodata          @4044 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4044 = 350.0f;
COMPILER_STRIP_GATE(0x806AD594, &lit_4044);
#pragma pop

/* 806AAC24-806AAD68 000B24 0144+00 1/1 0/0 0/0 .text            checkWaterHeight__8daE_DK_cFv */
void daE_DK_c::checkWaterHeight() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD598-806AD59C 000060 0004+00 0/6 0/0 0/0 .rodata          @4061 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4061 = 3.0f;
COMPILER_STRIP_GATE(0x806AD598, &lit_4061);
#pragma pop

/* 806AD59C-806AD5A0 000064 0004+00 1/5 0/0 0/0 .rodata          @4062 */
SECTION_RODATA static f32 const lit_4062 = 150.0f;
COMPILER_STRIP_GATE(0x806AD59C, &lit_4062);

/* 806AAD68-806AAE10 000C68 00A8+00 1/1 0/0 0/0 .text
 * SphBgcCallBack__8daE_DK_cFP11dBgS_SphChkP10cBgD_Vtx_tiiiP8cM3dGPlaPv */
void daE_DK_c::SphBgcCallBack(dBgS_SphChk* param_0, cBgD_Vtx_t* param_1, int param_2,
                                  int param_3, int param_4, cM3dGPla* param_5, void* param_6) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD5A0-806AD5A4 000068 0004+00 0/1 0/0 0/0 .rodata          @4125 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4125 = 32768.0f;
COMPILER_STRIP_GATE(0x806AD5A0, &lit_4125);
#pragma pop

/* 806AD5A4-806AD5A8 00006C 0004+00 0/1 0/0 0/0 .rodata          @4126 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4126 = 0x3BB400B4;
COMPILER_STRIP_GATE(0x806AD5A4, &lit_4126);
#pragma pop

/* 806AD5A8-806AD5B0 000070 0008+00 0/1 0/0 0/0 .rodata          @4131 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4131[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806AD5A8, &lit_4131);
#pragma pop

/* 806AAE10-806AB054 000D10 0244+00 1/1 0/0 0/0 .text            setElectricEffect__8daE_DK_cFv */
void daE_DK_c::setElectricEffect() {
    // NONMATCHING
}

/* 806AB054-806AB158 000F54 0104+00 1/1 0/0 0/0 .text            setCoreDeadEffect__8daE_DK_cFv */
void daE_DK_c::setCoreDeadEffect() {
    // NONMATCHING
}

/* 806AB158-806AB29C 001058 0144+00 1/1 0/0 0/0 .text            setBodyDeadEffect__8daE_DK_cFv */
void daE_DK_c::setBodyDeadEffect() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD5B0-806AD5B4 000078 0004+00 0/2 0/0 0/0 .rodata          @4327 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4327 = 80.0f;
COMPILER_STRIP_GATE(0x806AD5B0, &lit_4327);
#pragma pop

/* 806AD5B4-806AD5B8 00007C 0004+00 0/3 0/0 0/0 .rodata          @4328 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4328 = 70.0f;
COMPILER_STRIP_GATE(0x806AD5B4, &lit_4328);
#pragma pop

/* 806AD5B8-806AD5BC 000080 0004+00 0/3 0/0 0/0 .rodata          @4329 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4329 = 5.0f;
COMPILER_STRIP_GATE(0x806AD5B8, &lit_4329);
#pragma pop

/* 806AD5BC-806AD5C0 000084 0004+00 0/2 0/0 0/0 .rodata          @4330 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4330 = 4.0f;
COMPILER_STRIP_GATE(0x806AD5BC, &lit_4330);
#pragma pop

/* 806AD5C0-806AD5C4 000088 0004+00 0/3 0/0 0/0 .rodata          @4331 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4331 = 6.0f;
COMPILER_STRIP_GATE(0x806AD5C0, &lit_4331);
#pragma pop

/* 806AD5C4-806AD5C8 00008C 0004+00 0/3 0/0 0/0 .rodata          @4332 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4332 = 200.0f;
COMPILER_STRIP_GATE(0x806AD5C4, &lit_4332);
#pragma pop

/* 806AD5C8-806AD5CC 000090 0004+00 0/2 0/0 0/0 .rodata          @4333 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4333 = 9.0f;
COMPILER_STRIP_GATE(0x806AD5C8, &lit_4333);
#pragma pop

/* 806AD5CC-806AD5D0 000094 0004+00 0/6 0/0 0/0 .rodata          @4334 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4334 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x806AD5CC, &lit_4334);
#pragma pop

/* 806AD5D0-806AD5D4 000098 0004+00 0/2 0/0 0/0 .rodata          @4335 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4335 = -5.0f;
COMPILER_STRIP_GATE(0x806AD5D0, &lit_4335);
#pragma pop

/* 806AD5D4-806AD5D8 00009C 0004+00 0/2 0/0 0/0 .rodata          @4336 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4336 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x806AD5D4, &lit_4336);
#pragma pop

/* 806AB29C-806AB684 00119C 03E8+00 1/1 0/0 0/0 .text            executeWait__8daE_DK_cFv */
void daE_DK_c::executeWait() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD5D8-806AD5DC 0000A0 0004+00 0/3 0/0 0/0 .rodata          @4437 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4437 = 50.0f;
COMPILER_STRIP_GATE(0x806AD5D8, &lit_4437);
#pragma pop

/* 806AB684-806ABA78 001584 03F4+00 1/1 0/0 0/0 .text            executeChase__8daE_DK_cFv */
void daE_DK_c::executeChase() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD5DC-806AD5E0 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4478 = 14.0f;
COMPILER_STRIP_GATE(0x806AD5DC, &lit_4478);
#pragma pop

/* 806AD5E0-806AD5E4 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4479 = -3.0f;
COMPILER_STRIP_GATE(0x806AD5E0, &lit_4479);
#pragma pop

/* 806ABA78-806ABCC8 001978 0250+00 1/1 0/0 0/0 .text            executeAttack__8daE_DK_cFv */
void daE_DK_c::executeAttack() {
    // NONMATCHING
}

/* 806ABCC8-806ABE3C 001BC8 0174+00 1/1 0/0 0/0 .text            executeDamage__8daE_DK_cFv */
void daE_DK_c::executeDamage() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD5E4-806AD5E8 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4524 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4524 = -2.0f;
COMPILER_STRIP_GATE(0x806AD5E4, &lit_4524);
#pragma pop

/* 806ABE3C-806ABF6C 001D3C 0130+00 1/1 0/0 0/0 .text            BodyDeathMove__8daE_DK_cFv */
void daE_DK_c::BodyDeathMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD5E8-806AD5EC 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4595 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4595 = 7.0f;
COMPILER_STRIP_GATE(0x806AD5E8, &lit_4595);
#pragma pop

/* 806AD5EC-806AD5F0 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4596 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4596 = 10.0f;
COMPILER_STRIP_GATE(0x806AD5EC, &lit_4596);
#pragma pop

/* 806AD5F0-806AD5F4 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4597 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4597 = 125.0f;
COMPILER_STRIP_GATE(0x806AD5F0, &lit_4597);
#pragma pop

/* 806AD5F4-806AD5F8 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4598 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4598 = -25.0f;
COMPILER_STRIP_GATE(0x806AD5F4, &lit_4598);
#pragma pop

/* 806AD5F8-806AD5FC 0000C0 0004+00 0/3 0/0 0/0 .rodata          @4599 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4599 = 90.0f;
COMPILER_STRIP_GATE(0x806AD5F8, &lit_4599);
#pragma pop

/* 806AD5FC-806AD600 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4600 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4600 = 120.0f;
COMPILER_STRIP_GATE(0x806AD5FC, &lit_4600);
#pragma pop

/* 806ABF6C-806AC390 001E6C 0424+00 1/1 0/0 0/0 .text            executeDeath__8daE_DK_cFv */
void daE_DK_c::executeDeath() {
    // NONMATCHING
}

/* 806AC390-806AC5BC 002290 022C+00 1/1 0/0 0/0 .text            action__8daE_DK_cFv */
void daE_DK_c::action() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD600-806AD604 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4690 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4690 = -50.0f;
COMPILER_STRIP_GATE(0x806AD600, &lit_4690);
#pragma pop

/* 806AD604-806AD608 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4691 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4691 = -90.0f;
COMPILER_STRIP_GATE(0x806AD604, &lit_4691);
#pragma pop

/* 806AC5BC-806AC754 0024BC 0198+00 1/1 0/0 0/0 .text            mtx_set__8daE_DK_cFv */
void daE_DK_c::mtx_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD608-806AD60C 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4767 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4767 = 40.0f;
COMPILER_STRIP_GATE(0x806AD608, &lit_4767);
#pragma pop

/* 806AD60C-806AD610 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4768 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4768 = 20.0f;
COMPILER_STRIP_GATE(0x806AD60C, &lit_4768);
#pragma pop

/* 806AD610-806AD614 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4769 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4769 = 160.0f;
COMPILER_STRIP_GATE(0x806AD610, &lit_4769);
#pragma pop

/* 806AC754-806AC968 002654 0214+00 1/1 0/0 0/0 .text            cc_set__8daE_DK_cFv */
void daE_DK_c::cc_set() {
    // NONMATCHING
}

/* 806AC968-806AC9E8 002868 0080+00 1/1 0/0 0/0 .text            execute__8daE_DK_cFv */
void daE_DK_c::execute() {
    // NONMATCHING
}

/* 806AC9E8-806ACA08 0028E8 0020+00 2/1 0/0 0/0 .text            daE_DK_Execute__FP8daE_DK_c */
static void daE_DK_Execute(daE_DK_c* param_0) {
    // NONMATCHING
}

/* 806ACA08-806ACA10 002908 0008+00 1/0 0/0 0/0 .text            daE_DK_IsDelete__FP8daE_DK_c */
static bool daE_DK_IsDelete(daE_DK_c* param_0) {
    return true;
}

/* 806ACA10-806ACA84 002910 0074+00 1/1 0/0 0/0 .text            _delete__8daE_DK_cFv */
void daE_DK_c::_delete() {
    // NONMATCHING
}

/* 806ACA84-806ACAA4 002984 0020+00 1/0 0/0 0/0 .text            daE_DK_Delete__FP8daE_DK_c */
static void daE_DK_Delete(daE_DK_c* param_0) {
    // NONMATCHING
}

/* 806ACAA4-806ACDAC 0029A4 0308+00 1/1 0/0 0/0 .text            CreateHeap__8daE_DK_cFv */
void daE_DK_c::CreateHeap() {
    // NONMATCHING
}

/* 806ACDAC-806ACDF4 002CAC 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 806ACDF4-806ACE14 002CF4 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806AD614-806AD618 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4983 = 500.0f;
COMPILER_STRIP_GATE(0x806AD614, &lit_4983);
#pragma pop

/* 806AD618-806AD620 0000E0 0004+04 0/1 0/0 0/0 .rodata          @4984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4984[1 + 1 /* padding */] = {
    -200.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x806AD618, &lit_4984);
#pragma pop

/* 806AD620-806AD628 0000E8 0008+00 0/1 0/0 0/0 .rodata          @4986 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4986[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806AD620, &lit_4986);
#pragma pop

/* 806AD628-806AD628 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806AD62D = "E_dk";
#pragma pop

/* 806ACE14-806AD0AC 002D14 0298+00 1/1 0/0 0/0 .text            create__8daE_DK_cFv */
void daE_DK_c::create() {
    // NONMATCHING
}

/* 806AD0AC-806AD25C 002FAC 01B0+00 1/1 0/0 0/0 .text            __ct__8daE_DK_cFv */
daE_DK_c::daE_DK_c() {
    // NONMATCHING
}

/* 806AD25C-806AD2A4 00315C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 806AD2A4-806AD2EC 0031A4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 806AD2EC-806AD348 0031EC 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 806AD348-806AD3B8 003248 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 806AD3B8-806AD428 0032B8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 806AD428-806AD448 003328 0020+00 1/0 0/0 0/0 .text            daE_DK_Create__FP8daE_DK_c */
static void daE_DK_Create(daE_DK_c* param_0) {
    // NONMATCHING
}

/* 806AD448-806AD490 003348 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 806AD490-806AD4D8 003390 0048+00 2/1 0/0 0/0 .text            __dt__12daE_DK_HIO_cFv */
daE_DK_HIO_c::~daE_DK_HIO_c() {
    // NONMATCHING
}

/* 806AD4D8-806AD514 0033D8 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_dk_cpp */
void __sinit_d_a_e_dk_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x806AD4D8, __sinit_d_a_e_dk_cpp);
#pragma pop

/* 806AD514-806AD51C 003414 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_806AD514() {
    // NONMATCHING
}

/* 806AD51C-806AD524 00341C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_806AD51C() {
    // NONMATCHING
}

/* 806AD628-806AD628 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
