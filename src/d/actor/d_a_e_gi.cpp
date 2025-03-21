/**
 * @file d_a_e_gi.cpp
 * 
*/

#include "d/actor/d_a_e_gi.h"
#include "dol2asm.h"
#include "d/d_camera.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" void __ct__12daE_GI_HIO_cFv();
extern "C" void ctrlJoint__8daE_GI_cFP8J3DJointP8J3DModel();
extern "C" void JointCallBack__8daE_GI_cFP8J3DJointi();
extern "C" void draw__8daE_GI_cFv();
extern "C" static void daE_GI_Draw__FP8daE_GI_c();
extern "C" void setBck__8daE_GI_cFiUcff();
extern "C" void setActionMode__8daE_GI_cFii();
extern "C" void damage_check__8daE_GI_cFv();
extern "C" void setWeaponAtBit__8daE_GI_cFUc();
extern "C" void setCryStop__8daE_GI_cFv();
extern "C" void setAttackEffect__8daE_GI_cFv();
extern "C" void setDragSwordEffect__8daE_GI_cFv();
extern "C" void setDeathSmokeEffect__8daE_GI_cFv();
extern "C" void setDamageEffect__8daE_GI_cFv();
extern "C" static void s_other_gi__FPvPv();
extern "C" static void s_battle_gi__FPvPv();
extern "C" void executeSleep__8daE_GI_cFv();
extern "C" void executeWait__8daE_GI_cFv();
extern "C" void executeChase__8daE_GI_cFv();
extern "C" void executeAttack__8daE_GI_cFv();
extern "C" void executeDamage__8daE_GI_cFv();
extern "C" void executeBiteDamage__8daE_GI_cFv();
extern "C" void PushButtonCount__8daE_GI_cFv();
extern "C" void action__8daE_GI_cFv();
extern "C" void mtx_set__8daE_GI_cFv();
extern "C" void cc_set__8daE_GI_cFv();
extern "C" void execute__8daE_GI_cFv();
extern "C" static void daE_GI_Execute__FP8daE_GI_c();
extern "C" static bool daE_GI_IsDelete__FP8daE_GI_c();
extern "C" void _delete__8daE_GI_cFv();
extern "C" static void daE_GI_Delete__FP8daE_GI_c();
extern "C" void CreateHeap__8daE_GI_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__8daE_GI_cFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" static void daE_GI_Create__FP8daE_GI_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_GI_HIO_cFv();
extern "C" void __sinit_d_a_e_gi_cpp();
extern "C" static void func_806D0A10();
extern "C" static void func_806D0A18();
extern "C" void checkNowWolf__9daPy_py_cFv();
extern "C" extern char const* const d_a_e_gi__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUlUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
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
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void ForceLockOn__9dCamera_cFP10fopAc_ac_c();
extern "C" void ForceLockOff__9dCamera_cFP10fopAc_ac_c();
extern "C" void dCam_getBody__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseS__FPsss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 806D0E8C-806D0E90 00002C 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x806D0E8C, &lit_3928);
#pragma pop

/* 806D0E90-806D0E94 000030 0004+00 0/1 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 4.0f;
COMPILER_STRIP_GATE(0x806D0E90, &lit_3929);
#pragma pop

/* 806D0E94-806D0E98 000034 0004+00 0/2 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3930 = 1200.0f;
COMPILER_STRIP_GATE(0x806D0E94, &lit_3930);
#pragma pop

/* 806D0E98-806D0E9C 000038 0004+00 0/1 0/0 0/0 .rodata          @3931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3931 = 380.0f;
COMPILER_STRIP_GATE(0x806D0E98, &lit_3931);
#pragma pop

/* 806D0E9C-806D0EA0 00003C 0004+00 0/1 0/0 0/0 .rodata          @3932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3932 = 16384.0f;
COMPILER_STRIP_GATE(0x806D0E9C, &lit_3932);
#pragma pop

/* 806D0EA0-806D0EA4 000040 0004+00 0/1 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3933 = 135.0f;
COMPILER_STRIP_GATE(0x806D0EA0, &lit_3933);
#pragma pop

/* 806D0EA4-806D0EA8 000044 0004+00 0/1 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3934 = 110.0f;
COMPILER_STRIP_GATE(0x806D0EA4, &lit_3934);
#pragma pop

/* 806D0EA8-806D0EAC 000048 0004+00 1/3 0/0 0/0 .rodata          @3935 */
SECTION_RODATA static f32 const lit_3935 = 20.0f;
COMPILER_STRIP_GATE(0x806D0EA8, &lit_3935);

/* 806D0EAC-806D0EB0 00004C 0004+00 0/1 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = 35.0f;
COMPILER_STRIP_GATE(0x806D0EAC, &lit_3936);
#pragma pop

/* 806D0FBC-806D0FFC 000038 0040+00 1/1 0/0 0/0 .data            cc_gi_src__22@unnamed@d_a_e_gi_cpp@
 */
SECTION_DATA static u8 data_806D0FBC[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 806D0FFC-806D103C 000078 0040+00 1/1 0/0 0/0 .data cc_gi_att_src__22@unnamed@d_a_e_gi_cpp@ */
SECTION_DATA static u8 data_806D0FFC[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 806D103C-806D1044 0000B8 0006+02 1/1 0/0 0/0 .data            gi_damage_eff_id$4300 */
SECTION_DATA static u8 gi_damage_eff_id[6 + 2 /* padding */] = {
    0x86,
    0x86,
    0x86,
    0x87,
    0x86,
    0x88,
    /* padding */
    0x00,
    0x00,
};

/* 806D1044-806D1064 -00001 0020+00 1/1 0/0 0/0 .data            @4707 */
SECTION_DATA static void* lit_4707[8] = {
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x4C),
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x78),
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x338),
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x40C),
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x40C),
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x364),
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x388),
    (void*)(((char*)executeAttack__8daE_GI_cFv) + 0x3F8),
};

/* 806D1064-806D1084 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_GI_Method */
static actor_method_class l_daE_GI_Method = {
    (process_method_func)daE_GI_Create__FP8daE_GI_c,
    (process_method_func)daE_GI_Delete__FP8daE_GI_c,
    (process_method_func)daE_GI_Execute__FP8daE_GI_c,
    (process_method_func)daE_GI_IsDelete__FP8daE_GI_c,
    (process_method_func)daE_GI_Draw__FP8daE_GI_c,
};

/* 806D1084-806D10B4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_GI */
extern actor_process_profile_definition g_profile_E_GI = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_GI,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daE_GI_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  210,                    // mPriority
  &l_daE_GI_Method,       // sub_method
  0x00040100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 806D10B4-806D10C0 000130 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 806D10C0-806D10CC 00013C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 806D10CC-806D10D8 000148 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 806D10D8-806D10E4 000154 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 806D10E4-806D10F0 000160 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806D10F0-806D1114 00016C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806D0A18,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806D0A10,
};

/* 806D1114-806D1120 000190 000C+00 2/2 0/0 0/0 .data            __vt__12daE_GI_HIO_c */
SECTION_DATA extern void* __vt__12daE_GI_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_GI_HIO_cFv,
};

/* 806CD48C-806CD4F4 0000EC 0068+00 1/1 0/0 0/0 .text            __ct__12daE_GI_HIO_cFv */
daE_GI_HIO_c::daE_GI_HIO_c() {
    // NONMATCHING
}

/* 806CD4F4-806CD594 000154 00A0+00 1/1 0/0 0/0 .text ctrlJoint__8daE_GI_cFP8J3DJointP8J3DModel */
void daE_GI_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    // NONMATCHING
}

/* 806CD594-806CD5E0 0001F4 004C+00 1/1 0/0 0/0 .text JointCallBack__8daE_GI_cFP8J3DJointi */
void daE_GI_c::JointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 806CD5E0-806CD848 000240 0268+00 1/1 0/0 0/0 .text            draw__8daE_GI_cFv */
void daE_GI_c::draw() {
    // NONMATCHING
}

/* 806CD848-806CD868 0004A8 0020+00 1/0 0/0 0/0 .text            daE_GI_Draw__FP8daE_GI_c */
static void daE_GI_Draw(daE_GI_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EB0-806D0EB4 000050 0004+00 1/2 0/0 0/0 .rodata          @4040 */
SECTION_RODATA static f32 const lit_4040 = -1.0f;
COMPILER_STRIP_GATE(0x806D0EB0, &lit_4040);

/* 806D0F78-806D0F78 000118 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806D0F78 = "E_GI";
#pragma pop

/* 806CD868-806CD90C 0004C8 00A4+00 7/7 0/0 0/0 .text            setBck__8daE_GI_cFiUcff */
void daE_GI_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EB4-806D0EB8 000054 0004+00 1/2 0/0 0/0 .rodata          @4056 */
SECTION_RODATA static f32 const lit_4056 = 150.0f;
COMPILER_STRIP_GATE(0x806D0EB4, &lit_4056);

/* 806CD90C-806CD938 00056C 002C+00 8/8 0/0 0/0 .text            setActionMode__8daE_GI_cFii */
void daE_GI_c::setActionMode(int param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EB8-806D0EBC 000058 0004+00 0/4 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4173 = 0.5f;
COMPILER_STRIP_GATE(0x806D0EB8, &lit_4173);
#pragma pop

/* 806D0EBC-806D0EC0 00005C 0004+00 0/1 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4174 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x806D0EBC, &lit_4174);
#pragma pop

/* 806D0EC0-806D0EC4 000060 0004+00 0/1 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 0.25f;
COMPILER_STRIP_GATE(0x806D0EC0, &lit_4175);
#pragma pop

/* 806D1128-806D112C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_806D1128[4];

/* 806D112C-806D1138 00000C 000C+00 1/1 0/0 0/0 .bss             @3923 */
static u8 lit_3923[12];

/* 806D1138-806D1164 000018 002C+00 15/15 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[44];

/* 806CD938-806CDD1C 000598 03E4+00 1/1 0/0 0/0 .text            damage_check__8daE_GI_cFv */
void daE_GI_c::damage_check() {
    // NONMATCHING
}

/* 806CDD1C-806CDD8C 00097C 0070+00 2/2 0/0 0/0 .text            setWeaponAtBit__8daE_GI_cFUc */
void daE_GI_c::setWeaponAtBit(u8 param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EC4-806D0EC8 000064 0004+00 0/1 0/0 0/0 .rodata          @4218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4218 = 9.0f;
COMPILER_STRIP_GATE(0x806D0EC4, &lit_4218);
#pragma pop

/* 806D0EC8-806D0ED0 000068 0004+04 0/1 0/0 0/0 .rodata          @4219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4219[1 + 1 /* padding */] = {
    5.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x806D0EC8, &lit_4219);
#pragma pop

/* 806D0ED0-806D0ED8 000070 0008+00 1/3 0/0 0/0 .rodata          @4222 */
SECTION_RODATA static u8 const lit_4222[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806D0ED0, &lit_4222);

/* 806D1164-806D1168 000044 0004+00 4/4 0/0 0/0 .bss             m_cry_gi */
static u8 m_cry_gi[4];

/* 806CDD8C-806CDED8 0009EC 014C+00 3/3 0/0 0/0 .text            setCryStop__8daE_GI_cFv */
void daE_GI_c::setCryStop() {
    // NONMATCHING
}

/* 806CDED8-806CDFB0 000B38 00D8+00 1/1 0/0 0/0 .text            setAttackEffect__8daE_GI_cFv */
void daE_GI_c::setAttackEffect() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0ED8-806D0EDC 000078 0004+00 0/1 0/0 0/0 .rodata          @4273 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4273 = 44.0f;
COMPILER_STRIP_GATE(0x806D0ED8, &lit_4273);
#pragma pop

/* 806D0EDC-806D0EE0 00007C 0004+00 0/1 0/0 0/0 .rodata          @4274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4274 = -190.0f;
COMPILER_STRIP_GATE(0x806D0EDC, &lit_4274);
#pragma pop

/* 806D0EE0-806D0EE4 000080 0004+00 0/1 0/0 0/0 .rodata          @4275 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4275 = -1000000000.0f;
COMPILER_STRIP_GATE(0x806D0EE0, &lit_4275);
#pragma pop

/* 806CDFB0-806CE0D4 000C10 0124+00 1/1 0/0 0/0 .text            setDragSwordEffect__8daE_GI_cFv */
void daE_GI_c::setDragSwordEffect() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EE4-806D0EE8 000084 0004+00 1/1 0/0 0/0 .rodata          @4296 */
SECTION_RODATA static f32 const lit_4296 = 85.0f;
COMPILER_STRIP_GATE(0x806D0EE4, &lit_4296);

/* 806CE0D4-806CE184 000D34 00B0+00 1/1 0/0 0/0 .text            setDeathSmokeEffect__8daE_GI_cFv */
void daE_GI_c::setDeathSmokeEffect() {
    // NONMATCHING
}

/* 806CE184-806CE280 000DE4 00FC+00 3/3 0/0 0/0 .text            setDamageEffect__8daE_GI_cFv */
void daE_GI_c::setDamageEffect() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EE8-806D0EEC 000088 0004+00 1/1 0/0 0/0 .rodata          @4356 */
SECTION_RODATA static f32 const lit_4356 = 1000.0f;
COMPILER_STRIP_GATE(0x806D0EE8, &lit_4356);

/* 806CE280-806CE31C 000EE0 009C+00 1/1 0/0 0/0 .text            s_other_gi__FPvPv */
static void s_other_gi(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EEC-806D0EF0 00008C 0004+00 1/1 0/0 0/0 .rodata          @4378 */
SECTION_RODATA static f32 const lit_4378 = 500.0f;
COMPILER_STRIP_GATE(0x806D0EEC, &lit_4378);

/* 806CE31C-806CE3C4 000F7C 00A8+00 1/1 0/0 0/0 .text            s_battle_gi__FPvPv */
static void s_battle_gi(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0EF0-806D0EF4 000090 0004+00 0/4 0/0 0/0 .rodata          @4466 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4466 = 3.0f;
COMPILER_STRIP_GATE(0x806D0EF0, &lit_4466);
#pragma pop

/* 806D0EF4-806D0EF8 000094 0004+00 0/2 0/0 0/0 .rodata          @4467 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4467 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x806D0EF4, &lit_4467);
#pragma pop

/* 806D0EF8-806D0EFC 000098 0004+00 0/2 0/0 0/0 .rodata          @4468 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4468 = 1024.0f;
COMPILER_STRIP_GATE(0x806D0EF8, &lit_4468);
#pragma pop

/* 806D0EFC-806D0F00 00009C 0004+00 0/2 0/0 0/0 .rodata          @4469 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4469 = 256.0f;
COMPILER_STRIP_GATE(0x806D0EFC, &lit_4469);
#pragma pop

/* 806D0F00-806D0F04 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4470 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4470 = 14.0f;
COMPILER_STRIP_GATE(0x806D0F00, &lit_4470);
#pragma pop

/* 806D0F04-806D0F08 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4471 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4471 = 40.0f;
COMPILER_STRIP_GATE(0x806D0F04, &lit_4471);
#pragma pop

/* 806D0F08-806D0F0C 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4472 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4472 = 2.0f;
COMPILER_STRIP_GATE(0x806D0F08, &lit_4472);
#pragma pop

/* 806CE3C4-806CE6AC 001024 02E8+00 1/1 0/0 0/0 .text            executeSleep__8daE_GI_cFv */
void daE_GI_c::executeSleep() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F0C-806D0F10 0000AC 0004+00 0/3 0/0 0/0 .rodata          @4509 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4509 = 10.0f;
COMPILER_STRIP_GATE(0x806D0F0C, &lit_4509);
#pragma pop

/* 806CE6AC-806CE858 00130C 01AC+00 1/1 0/0 0/0 .text            executeWait__8daE_GI_cFv */
void daE_GI_c::executeWait() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F10-806D0F14 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4594 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4594 = 50.0f;
COMPILER_STRIP_GATE(0x806D0F10, &lit_4594);
#pragma pop

/* 806D0F14-806D0F18 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4595 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4595 = 29.0f;
COMPILER_STRIP_GATE(0x806D0F14, &lit_4595);
#pragma pop

/* 806D0F18-806D0F1C 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4596 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4596 = 34.0f;
COMPILER_STRIP_GATE(0x806D0F18, &lit_4596);
#pragma pop

/* 806D0F1C-806D0F20 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4597 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4597 = 54.0f;
COMPILER_STRIP_GATE(0x806D0F1C, &lit_4597);
#pragma pop

/* 806D0F20-806D0F24 0000C0 0004+00 0/4 0/0 0/0 .rodata          @4598 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4598 = 200.0f;
COMPILER_STRIP_GATE(0x806D0F20, &lit_4598);
#pragma pop

/* 806CE858-806CEC94 0014B8 043C+00 1/1 0/0 0/0 .text            executeChase__8daE_GI_cFv */
void daE_GI_c::executeChase() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F24-806D0F28 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4699 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4699 = 60.0f;
COMPILER_STRIP_GATE(0x806D0F24, &lit_4699);
#pragma pop

/* 806D0F28-806D0F2C 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4700 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4700 = 71.0f;
COMPILER_STRIP_GATE(0x806D0F28, &lit_4700);
#pragma pop

/* 806D0F2C-806D0F30 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4701 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4701 = 76.0f;
COMPILER_STRIP_GATE(0x806D0F2C, &lit_4701);
#pragma pop

/* 806D0F30-806D0F34 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4702 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4702 = 70.0f;
COMPILER_STRIP_GATE(0x806D0F30, &lit_4702);
#pragma pop

/* 806D0F34-806D0F38 0000D4 0004+00 0/3 0/0 0/0 .rodata          @4703 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4703 = 1.5f;
COMPILER_STRIP_GATE(0x806D0F34, &lit_4703);
#pragma pop

/* 806D0F38-806D0F3C 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4704 = 80.0f;
COMPILER_STRIP_GATE(0x806D0F38, &lit_4704);
#pragma pop

/* 806D0F3C-806D0F40 0000DC 0004+00 0/2 0/0 0/0 .rodata          @4705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4705 = 33.0f;
COMPILER_STRIP_GATE(0x806D0F3C, &lit_4705);
#pragma pop

/* 806D0F40-806D0F44 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4706 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4706 = -150.0f;
COMPILER_STRIP_GATE(0x806D0F40, &lit_4706);
#pragma pop

/* 806CEC94-806CF0B8 0018F4 0424+00 2/1 0/0 0/0 .text            executeAttack__8daE_GI_cFv */
void daE_GI_c::executeAttack() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F44-806D0F48 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4781 = 72.0f;
COMPILER_STRIP_GATE(0x806D0F44, &lit_4781);
#pragma pop

/* 806D0F48-806D0F4C 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4782 = 45.0f;
COMPILER_STRIP_GATE(0x806D0F48, &lit_4782);
#pragma pop

/* 806D0F4C-806D0F50 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4783 = -50.0f;
COMPILER_STRIP_GATE(0x806D0F4C, &lit_4783);
#pragma pop

/* 806CF0B8-806CF410 001D18 0358+00 1/1 0/0 0/0 .text            executeDamage__8daE_GI_cFv */
void daE_GI_c::executeDamage() {
    // NONMATCHING
}

/* 806CF410-806CF720 002070 0310+00 1/1 0/0 0/0 .text            executeBiteDamage__8daE_GI_cFv */
void daE_GI_c::executeBiteDamage() {
    // NONMATCHING
}

/* 806CF720-806CF878 002380 0158+00 1/1 0/0 0/0 .text            PushButtonCount__8daE_GI_cFv */
void daE_GI_c::PushButtonCount() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F50-806D0F54 0000F0 0004+00 1/1 0/0 0/0 .rodata          @4917 */
SECTION_RODATA static f32 const lit_4917 = 300.0f;
COMPILER_STRIP_GATE(0x806D0F50, &lit_4917);

/* 806CF878-806CFB60 0024D8 02E8+00 1/1 0/0 0/0 .text            action__8daE_GI_cFv */
void daE_GI_c::action() {
    // NONMATCHING
}

/* 806CFB60-806CFBF0 0027C0 0090+00 1/1 0/0 0/0 .text            mtx_set__8daE_GI_cFv */
void daE_GI_c::mtx_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F54-806D0F58 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5011 = 30.0f;
COMPILER_STRIP_GATE(0x806D0F54, &lit_5011);
#pragma pop

/* 806D0F58-806D0F5C 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5012 = -33.0f;
COMPILER_STRIP_GATE(0x806D0F58, &lit_5012);
#pragma pop

/* 806D0F5C-806D0F60 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5013 = -11.0f;
COMPILER_STRIP_GATE(0x806D0F5C, &lit_5013);
#pragma pop

/* 806D0F60-806D0F64 000100 0004+00 0/1 0/0 0/0 .rodata          @5014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5014 = 55.0f;
COMPILER_STRIP_GATE(0x806D0F60, &lit_5014);
#pragma pop

/* 806D0F64-806D0F68 000104 0004+00 0/1 0/0 0/0 .rodata          @5015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5015 = 11.0f;
COMPILER_STRIP_GATE(0x806D0F64, &lit_5015);
#pragma pop

/* 806D0F68-806D0F6C 000108 0004+00 0/1 0/0 0/0 .rodata          @5016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5016 = -55.0f;
COMPILER_STRIP_GATE(0x806D0F68, &lit_5016);
#pragma pop

/* 806CFBF0-806CFDF4 002850 0204+00 1/1 0/0 0/0 .text            cc_set__8daE_GI_cFv */
void daE_GI_c::cc_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F6C-806D0F70 00010C 0004+00 0/1 0/0 0/0 .rodata          @5085 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5085 = -30.0f;
COMPILER_STRIP_GATE(0x806D0F6C, &lit_5085);
#pragma pop

/* 806CFDF4-806D002C 002A54 0238+00 1/1 0/0 0/0 .text            execute__8daE_GI_cFv */
void daE_GI_c::execute() {
    // NONMATCHING
}

/* 806D002C-806D004C 002C8C 0020+00 2/1 0/0 0/0 .text            daE_GI_Execute__FP8daE_GI_c */
static void daE_GI_Execute(daE_GI_c* param_0) {
    // NONMATCHING
}

/* 806D004C-806D0054 002CAC 0008+00 1/0 0/0 0/0 .text            daE_GI_IsDelete__FP8daE_GI_c */
static bool daE_GI_IsDelete(daE_GI_c* param_0) {
    return true;
}

/* 806D0054-806D00C8 002CB4 0074+00 1/1 0/0 0/0 .text            _delete__8daE_GI_cFv */
void daE_GI_c::_delete() {
    // NONMATCHING
}

/* 806D00C8-806D00E8 002D28 0020+00 1/0 0/0 0/0 .text            daE_GI_Delete__FP8daE_GI_c */
static void daE_GI_Delete(daE_GI_c* param_0) {
    // NONMATCHING
}

/* 806D00E8-806D025C 002D48 0174+00 1/1 0/0 0/0 .text            CreateHeap__8daE_GI_cFv */
void daE_GI_c::CreateHeap() {
    // NONMATCHING
}

/* 806D025C-806D027C 002EBC 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806D0F70-806D0F74 000110 0004+00 0/1 0/0 0/0 .rodata          @5256 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5256 = -200.0f;
COMPILER_STRIP_GATE(0x806D0F70, &lit_5256);
#pragma pop

/* 806D0F74-806D0F78 000114 0004+00 0/1 0/0 0/0 .rodata          @5257 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5257 = -5.0f;
COMPILER_STRIP_GATE(0x806D0F74, &lit_5257);
#pragma pop

/* 806D0F78-806D0F78 000118 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806D0F7D = "E_gi";
#pragma pop

/* 806D027C-806D0608 002EDC 038C+00 1/1 0/0 0/1 .text            create__8daE_GI_cFv */
void daE_GI_c::create() {
    // NONMATCHING
}

/* 806D0608-806D06D4 003268 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 806D06D4-806D0758 003334 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 806D0758-806D07A0 0033B8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 806D07A0-806D07E8 003400 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 806D07E8-806D0844 003448 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 806D0844-806D08B4 0034A4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 806D08B4-806D0924 003514 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 806D0924-806D0944 003584 0020+00 1/0 0/0 0/0 .text            daE_GI_Create__FP8daE_GI_c */
static void daE_GI_Create(daE_GI_c* param_0) {
    // NONMATCHING
}

/* 806D0944-806D098C 0035A4 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 806D098C-806D09D4 0035EC 0048+00 2/1 0/0 0/0 .text            __dt__12daE_GI_HIO_cFv */
daE_GI_HIO_c::~daE_GI_HIO_c() {
    // NONMATCHING
}

/* 806D09D4-806D0A10 003634 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_gi_cpp */
void __sinit_d_a_e_gi_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x806D09D4, __sinit_d_a_e_gi_cpp);
#pragma pop

/* 806D0A10-806D0A18 003670 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_806D0A10() {
    // NONMATCHING
}

/* 806D0A18-806D0A20 003678 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_806D0A18() {
    // NONMATCHING
}

/* 806D0E34-806D0E4C 003A94 0018+00 2/2 0/0 0/0 .text            checkNowWolf__9daPy_py_cFv */
// void daPy_py_c::checkNowWolf() {
extern "C" void checkNowWolf__9daPy_py_cFv() {
    // NONMATCHING
}

/* 806D0F78-806D0F78 000118 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
