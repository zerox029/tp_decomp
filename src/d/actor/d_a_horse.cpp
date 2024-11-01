/**
 * @file d_a_horse.cpp
 * 
*/

#include "d/actor/d_a_horse.h"
#include "d/d_stage.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void setReinPos__13daHorseRein_cFi();
extern "C" void __dt__4cXyzFv();
extern "C" void setReinPosPart__13daHorseRein_cFi();
extern "C" void coHitCallbackBoarJump__9daHorse_cFP10fopAc_ac_c();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void coHitCallbackBoarHit__9daHorse_cFP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" void coHitCallbackCowHit__9daHorse_cFP10fopAc_ac_c();
extern "C" static void
daHorse_coHitCallbackBoarJump__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void
daHorse_coHitCallbackCowHit__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void
daHorse_coHitCallbackAll__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void daHorse_searchEnemy__FP10fopAc_ac_cPv();
extern "C" void modelCallBack__9daHorse_cFi();
extern "C" static void daHorse_modelCallBack__FP8J3DJointi();
extern "C" static void daHorse_searchSingleBoar__FP10fopAc_ac_cPv();
extern "C" void createHeap__9daHorse_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void func_808392DC(void* _this);
extern "C" void __dt__19J3DMtxCalcNoAnmBaseFv();
extern "C" void __dt__10J3DMtxCalcFv();
extern "C" static void daHorse_createHeap__FP10fopAc_ac_c();
extern "C" void checkEnding__9daHorse_cFv();
extern "C" void create__9daHorse_cFv();
extern "C" static void daHorse_Create__FP10fopAc_ac_c();
extern "C" void setBasAnime__9daHorse_cFi();
extern "C" void resetBasAnime__9daHorse_cFv();
extern "C" void setDoubleAnime__9daHorse_cFfffUsUsf();
extern "C" void setSingleAnime__9daHorse_cFUsffsfi();
extern "C" void animePlay__9daHorse_cFv();
extern "C" void checkDemoAction__9daHorse_cFv();
extern "C" void setStickRodeoMove__9daHorse_cFv();
extern "C" void setStickCallMove__9daHorse_cFv();
extern "C" void setDemoMoveData__9daHorse_cFPUlPC4cXyz();
extern "C" void setDemoData__9daHorse_cFv();
extern "C" void acceptPlayerRide__9daHorse_cFv();
extern "C" void setStickData__9daHorse_cFv();
extern "C" void setTurnStartVibration__9daHorse_cFv();
extern "C" void setTurnVibration__9daHorse_cFv();
extern "C" void setMoveAnime__9daHorse_cFf();
extern "C" void checkHorseNoMove__9daHorse_cFi();
extern "C" void checkTurnPlayerState__9daHorse_cFv();
extern "C" void setSpeedAndAngle__9daHorse_cFv();
extern "C" void checkWaitTurn__9daHorse_cCFv();
extern "C" void setRoomInfo__9daHorse_cFi();
extern "C" void setBodyPart__9daHorse_cFv();
extern "C" void setMatrix__9daHorse_cFv();
extern "C" void setDashEffect__9daHorse_cFPUl();
extern "C" void setEffect__9daHorse_cFv();
extern "C" void setCollision__9daHorse_cFv();
extern "C" void autoGroundHit__9daHorse_cFv();
extern "C" void setTailAngle__9daHorse_cFv();
extern "C" void setNeckAngle__9daHorse_cFv();
extern "C" void copyFootMatrix__9daHorse_cFv();
extern "C" void setFootMatrix__9daHorse_cFv();
extern "C" void setLegAngle__9daHorse_cFfiiPs();
extern "C" void footBgCheck__9daHorse_cFv();
extern "C" void setReinPosMoveInit__9daHorse_cFi();
extern "C" void copyReinPos__9daHorse_cFv();
extern "C" void setReinPosHandSubstance__9daHorse_cFi();
extern "C" void setReinPosNormalSubstance__9daHorse_cFv();
extern "C" void bgCheck__9daHorse_cFv();
extern "C" void checkSpecialWallHitSubstance__9daHorse_cCFRC4cXyz();
extern "C" void setServiceWaitTimer__9daHorse_cFv();
extern "C" void checkServiceWaitAnime__9daHorse_cFv();
extern "C" void checkTurnInput__9daHorse_cFv();
extern "C" void checkTgHitTurn__9daHorse_cFv();
extern "C" void checkTurnAfterFastMove__9daHorse_cFf();
extern "C" void setNeckAnimeMorf__9daHorse_cFv();
extern "C" void setNeckAnime__9daHorse_cFUsffs();
extern "C" void resetNeckAnime__9daHorse_cFv();
extern "C" void setLashCnt__9daHorse_cFv();
extern "C" void setTalkModeWolf__9daHorse_cFv();
extern "C" void setBoarHit__9daHorse_cFP10fopAc_ac_ci();
extern "C" void savePos__9daHorse_cFv();
extern "C" void callHorseSubstance__9daHorse_cFPC4cXyz();
extern "C" void setHorsePosAndAngleSubstance__9daHorse_cFPC4cXyzs();
extern "C" void checkPlayerHeavy__9daHorse_cFv();
extern "C" void setTgCoGrp__9daHorse_cFUlUl();
extern "C" void onRideFlgSubstance__9daHorse_cFv();
extern "C" void offRideFlgSubstance__9daHorse_cFv();
extern "C" void procWaitInit__9daHorse_cFv();
extern "C" void procWait__9daHorse_cFv();
extern "C" void procMoveInit__9daHorse_cFv();
extern "C" void procMove__9daHorse_cFv();
extern "C" void procStopInit__9daHorse_cFv();
extern "C" void procStop__9daHorse_cFv();
extern "C" void procTurnInit__9daHorse_cFi();
extern "C" void procTurn__9daHorse_cFv();
extern "C" void procJumpInit__9daHorse_cFi();
extern "C" void procJump__9daHorse_cFv();
extern "C" void procLandInit__9daHorse_cFfi();
extern "C" void procLand__9daHorse_cFv();
extern "C" void procLargeDamageInit__9daHorse_cFv();
extern "C" void procLargeDamage__9daHorse_cFv();
extern "C" void procToolDemoInit__9daHorse_cFv();
extern "C" void procToolDemo__9daHorse_cFv();
extern "C" void searchSceneChangeArea__9daHorse_cFP10fopAc_ac_c();
extern "C" static void daHorse_searchSceneChangeArea__FP10fopAc_ac_cPv();
extern "C" void execute__9daHorse_cFv();
extern "C" static void daHorse_Execute__FP9daHorse_c();
extern "C" void draw__9daHorse_cFv();
extern "C" static void daHorse_Draw__FP9daHorse_c();
extern "C" void __dt__9daHorse_cFv();
extern "C" static void daHorse_Delete__FP9daHorse_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform();
extern "C" void setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform();
extern "C" bool getAnmTransform__10J3DMtxCalcFUc();
extern "C" bool getAnmTransform__10J3DMtxCalcFv();
extern "C" void setWeight__10J3DMtxCalcFUcf();
extern "C" void getWeight__10J3DMtxCalcCFUc();
extern "C" void func_80844BB4(void* _this, Vec const&, f32 const (&)[3][4]);
extern "C" void func_80844BDC(void* _this);
extern "C" void __sinit_d_a_horse_cpp();
extern "C" static void func_80844CA0();
extern "C" static void func_80844CA8();
extern "C" void __ct__9daHorse_cFv();
extern "C" void __dt__17daHorseFootData_cFv();
extern "C" void __ct__17daHorseFootData_cFv();
extern "C" void __dt__13daHorseRein_cFv();
extern "C" void __ct__13daHorseRein_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__14dBgS_HorseAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__16daPy_frameCtrl_cFv();
extern "C" void __ct__16daPy_frameCtrl_cFv();
extern "C" void __dt__19mDoExt_AnmRatioPackFv();
extern "C" void __ct__19mDoExt_AnmRatioPackFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" u8 const m_footJointTable__9daHorse_c[8];
extern "C" f32 const m_callLimitDistance2__9daHorse_c;
extern "C" u8 const m__14daHorse_hio_c0[292];
extern "C" extern char const* const d_a_horse__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotS__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoMtx_QuatConcat__FPC10QuaternionPC10QuaternionP10Quaternion();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void quatM__14mDoMtx_stack_cFPC10Quaternion();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void mDoExt_modelEntryDL__FP8J3DModel();
extern "C" void initOldFrameMorf__22mDoExt_MtxCalcOldFrameFfUsUs();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFifR8_GXColorUsP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Executor__FPFPvPv_iPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_seenActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpoAcM_relativePos__FPC10fopAc_ac_cPC4cXyzP4cXyz();
extern "C" void fopAcM_getPolygonAngle__FRC13cBgS_PolyInfos();
extern "C" void fopAcM_getPolygonAngle__FPC8cM3dGPlas();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void set__17dSv_horse_place_cFPCcRC4cXyzsSc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getDemoIDData__13dDemo_actor_cFPiPiPiPUsPUc();
extern "C" void getActor__14dDemo_object_cFUc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getMyNowCutName__16dEvent_manager_cFi();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void getGoal__16dEvent_manager_cFv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void init__7dPaPo_cFP9dBgS_Acchff();
extern "C" void
setEffectFour__8dPaPoF_cFPC12dKy_tevstr_cPC4cXyzUlUlPC4cXyzPC4cXyzPC4cXyzPC4cXyzPC4cXyzPC5csXyzPC4cXyzScff();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dPath_GetNextRoomPath__FPC5dPathi();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void GetLockonList__12dAttention_cFl();
extern "C" void LockonTruth__12dAttention_cFv();
extern "C" void getActor__10dAttList_cFv();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void ChkPolySafe__4cBgSFRC13cBgS_PolyInfo();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetExitId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetHorseNoEntry__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetSpecialCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetGroundCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP10fopAc_ac_ciP12dBgS_AcchCir();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__16dBgS_HorseLinChkFv();
extern "C" void __dt__16dBgS_HorseLinChkFv();
extern "C" void SetHorse__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ResetAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void MoveCAt__8dCcD_CylFR4cXyz();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void Set__12dCcMassS_MngFP8cCcD_ObjUc();
extern "C" void checkStageName__9daAlink_cFPCc();
extern "C" void getMoveBGActorName__9daAlink_cFR13cBgS_PolyInfoi();
extern "C" void checkUnderMove0BckNoArc__9daAlink_cCFQ29daAlink_c11daAlink_ANM();
extern "C" void checkHorseWaitLashAnime__9daAlink_cCFv();
extern "C" void checkHorseLieAnime__9daAlink_cCFv();
extern "C" void checkHorseSubjectivity__9daAlink_cCFv();
extern "C" void getHorseReinHandPos__9daAlink_cFP4cXyzP4cXyz();
extern "C" void checkAnmEnd__16daPy_frameCtrl_cFv();
extern "C" void updateFrame__16daPy_frameCtrl_cFv();
extern "C" void setFrameCtrl__16daPy_frameCtrl_cFUcssff();
extern "C" void setActor__16daPy_actorKeep_cFv();
extern "C" void clearData__16daPy_actorKeep_cFv();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void dCam_getControledAngleY__FP12camera_class();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_pol_sound_get__FPC13cBgS_PolyInfo();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void ClrCcMove__9cCcD_SttsFv();
extern "C" void SetGrp__10cCcD_ObjTgFUl();
extern "C" void SetVsGrp__10cCcD_ObjCoFUl();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void cM_rad2s__Ff();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void cBgW_CheckBWall__Ff();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void initAnime__10Z2CreatureFPvbff();
extern "C" void updateAnime__10Z2CreatureFff();
extern "C" void __ct__14Z2CreatureRideFv();
extern "C" void __dt__14Z2CreatureRideFv();
extern "C" void init__14Z2CreatureRideFP3VecP3VecUcUc();
extern "C" void setLinkRiding__14Z2CreatureRideFb();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void init__24J3DMtxCalcJ3DSysInitMayaFRC3VecRA3_A4_Cf();
extern "C" void calcTransform__27J3DMtxCalcCalcTransformMayaFRC16J3DTransformInfo();
extern "C" void JMAEulerToQuat__FsssP10Quaternion();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __construct_new_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_14();
extern "C" void _savegpr_19();
extern "C" void _savegpr_21();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_14();
extern "C" void _restgpr_19();
extern "C" void _restgpr_21();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 const m_handLeftInSidePos__9daAlink_c[12];
extern "C" u8 const m_handRightInSidePos__9daAlink_c[12];
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* __vt__28mDoExt_MtxCalcAnmBlendTblOld[11];
extern "C" extern void* __vt__25mDoExt_MtxCalcAnmBlendTbl[11];
extern "C" u8 m_typeFourData__8dPaPoF_c[60];
extern "C" u8 m_emitterFourData__8dPaPoF_c[60 + 28 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" u8 mDemoArcName__20dStage_roomControl_c[10 + 2 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_meter2_info[248];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 BaseX__4cXyz[12];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" u8 m_top__12daTagHstop_c[4 + 4 /* padding */];
extern "C" u8 m_object__7dDemo_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" u8 mJoint__10J3DMtxCalc[4];
extern "C" void isAngry__7daCow_cFv();
extern "C" void setAngryHit__7daCow_cFv();
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 808454AC-808454B8 000000 000C+00 41/41 0/0 0/0 .rodata          @3894 */
SECTION_RODATA static u8 const lit_3894[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x808454AC, &lit_3894);

/* 808454B8-808454C0 00000C 0006+02 2/6 0/0 0/0 .rodata          l_arcName */
SECTION_RODATA static u8 const l_arcName[6 + 2 /* padding */] = {
    0x48,
    0x6F,
    0x72,
    0x73,
    0x65,
    0x00,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x808454B8, &l_arcName);

/* 808454C0-808454C8 000014 0008+00 2/5 0/0 0/0 .rodata          m_footJointTable__9daHorse_c */
SECTION_RODATA u8 const daHorse_c::m_footJointTable[8] = {
    0x00, 0x03, 0x00, 0x07, 0x00, 0x1B, 0x00, 0x1F,
};
COMPILER_STRIP_GATE(0x808454C0, &daHorse_c::m_footJointTable);

/* 808454C8-808454CC 00001C 0004+00 0/0 0/0 0/0 .rodata          m_callLimitDistance2__9daHorse_c */
#pragma push
#pragma force_active on
SECTION_RODATA f32 const daHorse_c::m_callLimitDistance2 = 640000.0f;
COMPILER_STRIP_GATE(0x808454C8, &daHorse_c::m_callLimitDistance2);
#pragma pop

/* 808454CC-808455F0 000020 0124+00 1/20 0/0 0/0 .rodata          m__14daHorse_hio_c0 */
SECTION_RODATA u8 const daHorse_hio_c0::m[292] = {
    0x02, 0x58, 0x00, 0x32, 0x00, 0x2D, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x08, 0x00, 0x5A, 0x00, 0xD2,
    0x00, 0x0F, 0x00, 0x07, 0x00, 0x0D, 0x00, 0x08, 0x00, 0x03, 0x00, 0x2D, 0x42, 0x28, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x4C, 0xCC, 0xCD, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0x99, 0x99, 0x9A,
    0x3F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3D, 0xA3, 0xD7, 0x0A, 0x3E, 0xE6, 0x66, 0x66,
    0x3F, 0x66, 0x66, 0x66, 0x3F, 0x8C, 0xCC, 0xCD, 0x40, 0xA0, 0x00, 0x00, 0x3F, 0xB3, 0x33, 0x33,
    0x3E, 0xCC, 0xCC, 0xCD, 0x40, 0x00, 0x00, 0x00, 0x40, 0xD0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x3F, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x8C, 0xCC, 0xCD, 0x40, 0xA0, 0x00, 0x00,
    0x42, 0x34, 0x00, 0x00, 0x3F, 0xD9, 0x99, 0x9A, 0x40, 0x20, 0x00, 0x00, 0x3F, 0x8C, 0xCC, 0xCD,
    0x40, 0xA0, 0x00, 0x00, 0x42, 0x64, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x41, 0xF8, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x41, 0x40, 0x00, 0x00, 0x3F, 0xD9, 0x99, 0x9A, 0x40, 0x80, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x41, 0x10, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
    0x43, 0xAF, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x44, 0x7A, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x3F, 0xA6, 0x66, 0x66, 0x3F, 0x00, 0x00, 0x00,
    0x40, 0x80, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x33, 0x40, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00,
    0x3E, 0x99, 0x99, 0x9A, 0x40, 0xE0, 0x00, 0x00, 0x40, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x41, 0x10, 0x00, 0x00, 0x42, 0xFA, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x3F, 0x8C, 0xCC, 0xCD, 0x3F, 0xA6, 0x66, 0x66,
    0x41, 0x70, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x808454CC, &daHorse_hio_c0::m);

/* 808455F0-808455F4 000144 0004+00 3/11 0/0 0/0 .rodata          @4303 */
SECTION_RODATA static f32 const lit_4303 = 3.0f;
COMPILER_STRIP_GATE(0x808455F0, &lit_4303);

/* 808455F4-808455F8 000148 0004+00 4/28 0/0 0/0 .rodata          @4304 */
SECTION_RODATA static f32 const lit_4304 = 1.0f;
COMPILER_STRIP_GATE(0x808455F4, &lit_4304);

/* 808455F8-808455FC 00014C 0004+00 0/1 0/0 0/0 .rodata          @4305 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4305 = -4.5f;
COMPILER_STRIP_GATE(0x808455F8, &lit_4305);
#pragma pop

/* 808455FC-80845600 000150 0004+00 14/51 0/0 0/0 .rodata          @4306 */
SECTION_RODATA static u8 const lit_4306[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x808455FC, &lit_4306);

/* 80845600-80845604 000154 0004+00 0/1 0/0 0/0 .rodata          @4307 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4307 = 20.0f / 17.0f;
COMPILER_STRIP_GATE(0x80845600, &lit_4307);
#pragma pop

/* 80845604-8084560C 000158 0004+04 0/1 0/0 0/0 .rodata          @4308 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4308[1 + 1 /* padding */] = {
    5.5f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80845604, &lit_4308);
#pragma pop

/* 8084560C-80845614 000160 0008+00 0/8 0/0 0/0 .rodata          @4309 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4309[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8084560C, &lit_4309);
#pragma pop

/* 80845614-8084561C 000168 0008+00 0/8 0/0 0/0 .rodata          @4310 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4310[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80845614, &lit_4310);
#pragma pop

/* 8084561C-80845624 000170 0008+00 0/8 0/0 0/0 .rodata          @4311 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4311[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8084561C, &lit_4311);
#pragma pop

/* 80845624-80845628 000178 0004+00 0/1 0/0 0/0 .rodata          @4312 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4312 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x80845624, &lit_4312);
#pragma pop

/* 80845628-8084562C 00017C 0004+00 0/4 0/0 0/0 .rodata          @4313 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4313 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80845628, &lit_4313);
#pragma pop

/* 8084562C-80845634 000180 0008+00 3/15 0/0 0/0 .rodata          @4315 */
SECTION_RODATA static u8 const lit_4315[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8084562C, &lit_4315);

/* 80837F2C-8083836C 0000EC 0440+00 1/1 0/0 0/0 .text            setReinPos__13daHorseRein_cFi */
void daHorseRein_c::setReinPos(int param_0) {
    // NONMATCHING
}

/* 8083836C-808383A8 00052C 003C+00 7/7 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 808383A8-80838498 000568 00F0+00 2/2 0/0 0/0 .text            setReinPosPart__13daHorseRein_cFi
 */
void daHorseRein_c::setReinPosPart(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845634-80845638 000188 0004+00 0/4 0/0 0/0 .rodata          @4465 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4465 = 100.0f;
COMPILER_STRIP_GATE(0x80845634, &lit_4465);
#pragma pop

/* 80845638-8084563C 00018C 0004+00 0/5 0/0 0/0 .rodata          @4466 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4466 = 200.0f;
COMPILER_STRIP_GATE(0x80845638, &lit_4466);
#pragma pop

/* 8084563C-80845640 000190 0004+00 0/3 0/0 0/0 .rodata          @4467 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4467 = 25.0f;
COMPILER_STRIP_GATE(0x8084563C, &lit_4467);
#pragma pop

/* 80845640-80845644 000194 0004+00 0/2 0/0 0/0 .rodata          @4468 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4468 = 5.0f;
COMPILER_STRIP_GATE(0x80845640, &lit_4468);
#pragma pop

/* 808458D4-808458E0 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 808458E0-808458F4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 808458F4-808458F8 000020 0004+00 1/2 0/0 0/0 .data            l_autoUpHeight */
SECTION_DATA static f32 l_autoUpHeight = 50.0f;

/* 808458F8-8084593C 000024 0044+00 0/1 0/0 0/0 .data            l_cylSrc */
#pragma push
#pragma force_active on
static dCcD_SrcCyl l_cylSrc = {
    {
        {0x0, {{AT_TYPE_HORSE, 0x1, 0x12}, {0xd8fbfdff, 0x9}, 0x79}}, // mObj
        {dCcD_SE_HARD_BODY, 0x1, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x226}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        50.0f, // mRadius
        230.0f // mHeight
    } // mCyl
};
#pragma pop

/* 8084593C-8084597C 000068 0040+00 0/1 0/0 0/0 .data            l_sphSrc */
#pragma push
#pragma force_active on
static dCcD_SrcSph l_sphSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x9}, 0x79}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x226}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 35.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 8084597C-80845988 -00001 000C+00 0/1 0/0 0/0 .data            @4886 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4886[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)checkSpecialWallHitSubstance__9daHorse_cCFRC4cXyz,
};
#pragma pop

/* 80845988-80845994 -00001 000C+00 0/1 0/0 0/0 .data            @4887 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4887[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)setReinPosHandSubstance__9daHorse_cFi,
};
#pragma pop

/* 80845994-808459A0 -00001 000C+00 0/1 0/0 0/0 .data            @4888 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4888[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)setReinPosNormalSubstance__9daHorse_cFv,
};
#pragma pop

/* 808459A0-808459AC -00001 000C+00 0/1 0/0 0/0 .data            @4889 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4889[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)callHorseSubstance__9daHorse_cFPC4cXyz,
};
#pragma pop

/* 808459AC-808459B8 -00001 000C+00 0/1 0/0 0/0 .data            @4890 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4890[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)setHorsePosAndAngleSubstance__9daHorse_cFPC4cXyzs,
};
#pragma pop

/* 808459B8-808459C4 -00001 000C+00 0/1 0/0 0/0 .data            @4891 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4891[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)onRideFlgSubstance__9daHorse_cFv,
};
#pragma pop

/* 808459C4-808459D0 -00001 000C+00 0/1 0/0 0/0 .data            @4892 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4892[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)offRideFlgSubstance__9daHorse_cFv,
};
#pragma pop

/* 808459D0-808459DC -00001 000C+00 1/1 0/0 0/0 .data            @9343 */
SECTION_DATA static void* lit_9343[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procWait__9daHorse_cFv,
};

/* 808459DC-808459E8 -00001 000C+00 1/1 0/0 0/0 .data            @9546 */
SECTION_DATA static void* lit_9546[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procMove__9daHorse_cFv,
};

/* 808459E8-808459F4 -00001 000C+00 1/1 0/0 0/0 .data            @9680 */
SECTION_DATA static void* lit_9680[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procStop__9daHorse_cFv,
};

/* 808459F4-80845A00 -00001 000C+00 1/1 0/0 0/0 .data            @9802 */
SECTION_DATA static void* lit_9802[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procTurn__9daHorse_cFv,
};

/* 80845A00-80845A0C -00001 000C+00 1/1 0/0 0/0 .data            @9992 */
SECTION_DATA static void* lit_9992[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procJump__9daHorse_cFv,
};

/* 80845A0C-80845A18 -00001 000C+00 1/1 0/0 0/0 .data            @10113 */
SECTION_DATA static void* lit_10113[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procLand__9daHorse_cFv,
};

/* 80845A18-80845A24 -00001 000C+00 1/1 0/0 0/0 .data            @10171 */
SECTION_DATA static void* lit_10171[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procLargeDamage__9daHorse_cFv,
};

/* 80845A24-80845A30 -00001 000C+00 1/1 0/0 0/0 .data            @10185 */
SECTION_DATA static void* lit_10185[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procToolDemo__9daHorse_cFv,
};

/* 80845A30-80845A34 00015C 0004+00 1/1 0/0 0/0 .data            reinLineColor$10541 */
SECTION_DATA static u8 reinLineColor[4] = {
    0x00,
    0x00,
    0x00,
    0xFF,
};

/* 80845A34-80845A54 -00001 0020+00 1/0 0/0 0/0 .data            l_daHorse_Method */
static actor_method_class l_daHorse_Method = {
    (process_method_func)daHorse_Create__FP10fopAc_ac_c,
    (process_method_func)daHorse_Delete__FP9daHorse_c,
    (process_method_func)daHorse_Execute__FP9daHorse_c,
    0,
    (process_method_func)daHorse_Draw__FP9daHorse_c,
};

/* 80845A54-80845A84 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_HORSE */
extern actor_process_profile_definition g_profile_HORSE = {
  fpcLy_CURRENT_e,        // mLayerID
  4,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_HORSE,             // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daHorse_c),      // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  90,                     // mPriority
  &l_daHorse_Method,      // sub_method
  0x00060000,             // mStatus
  fopAc_UNK_GROUP_5_e,    // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80845A84-80845A90 0001B0 000C+00 2/2 0/0 0/0 .data            __vt__16daPy_frameCtrl_c */
SECTION_DATA extern void* __vt__16daPy_frameCtrl_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daPy_frameCtrl_cFv,
};

/* 80845A90-80845A9C 0001BC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80845A9C-80845AA8 0001C8 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80845AA8-80845AB4 0001D4 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80845AB4-80845AC8 0001E0 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 80845AC8-80845AD4 0001F4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80845AD4-80845AE0 000200 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80845AE0-80845AEC 00020C 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80845AEC-80845B10 000218 0024+00 3/3 0/0 0/0 .data            __vt__14dBgS_HorseAcch */
SECTION_DATA extern void* __vt__14dBgS_HorseAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_HorseAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80844CA8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80844CA0,
};

/* 80845B10-80845B1C 00023C 000C+00 5/5 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80845B1C-80845B48 000248 002C+00 2/2 0/0 0/0 .data
 * __vt__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya> */
SECTION_DATA extern void* data_80845B1C[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_808392DC,
    (void*)setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform,
    (void*)getAnmTransform__10J3DMtxCalcFv,
    (void*)setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform,
    (void*)getAnmTransform__10J3DMtxCalcFUc,
    (void*)setWeight__10J3DMtxCalcFUcf,
    (void*)getWeight__10J3DMtxCalcCFUc,
    (void*)func_80844BB4,
    (void*)func_80844BDC,
};

/* 80845B48-80845B74 000274 002C+00 3/3 0/0 0/0 .data            __vt__19J3DMtxCalcNoAnmBase */
SECTION_DATA extern void* __vt__19J3DMtxCalcNoAnmBase[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19J3DMtxCalcNoAnmBaseFv,
    (void*)setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform,
    (void*)getAnmTransform__10J3DMtxCalcFv,
    (void*)setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform,
    (void*)getAnmTransform__10J3DMtxCalcFUc,
    (void*)setWeight__10J3DMtxCalcFUcf,
    (void*)getWeight__10J3DMtxCalcCFUc,
    (void*)NULL,
    (void*)NULL,
};

/* 80845B74-80845BA0 0002A0 002C+00 4/4 0/0 0/0 .data            __vt__10J3DMtxCalc */
SECTION_DATA extern void* __vt__10J3DMtxCalc[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10J3DMtxCalcFv,
    (void*)setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform,
    (void*)getAnmTransform__10J3DMtxCalcFv,
    (void*)setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform,
    (void*)getAnmTransform__10J3DMtxCalcFUc,
    (void*)setWeight__10J3DMtxCalcFUcf,
    (void*)getWeight__10J3DMtxCalcCFUc,
    (void*)NULL,
    (void*)NULL,
};

/* 80845BA0-80845BAC 0002CC 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80838498-80838750 000658 02B8+00 2/2 0/0 0/0 .text
 * coHitCallbackBoarJump__9daHorse_cFP10fopAc_ac_c              */
void daHorse_c::coHitCallbackBoarJump(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80838750-80838798 000910 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* 80838798-80838904 000958 016C+00 1/1 0/0 0/0 .text
 * coHitCallbackBoarHit__9daHorse_cFP10fopAc_ac_cP12dCcD_GObjInf */
void daHorse_c::coHitCallbackBoarHit(fopAc_ac_c* param_0, dCcD_GObjInf* param_1) {
    // NONMATCHING
}

/* 80838904-80838A20 000AC4 011C+00 2/2 0/0 0/0 .text
 * coHitCallbackCowHit__9daHorse_cFP10fopAc_ac_c                */
void daHorse_c::coHitCallbackCowHit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80838A20-80838A44 000BE0 0024+00 1/1 0/0 0/0 .text
 * daHorse_coHitCallbackBoarJump__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void daHorse_coHitCallbackBoarJump(fopAc_ac_c* param_0, dCcD_GObjInf* param_1,
                                              fopAc_ac_c* param_2, dCcD_GObjInf* param_3) {
    // NONMATCHING
}

/* 80838A44-80838A68 000C04 0024+00 1/1 0/0 0/0 .text
 * daHorse_coHitCallbackCowHit__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void daHorse_coHitCallbackCowHit(fopAc_ac_c* param_0, dCcD_GObjInf* param_1,
                                            fopAc_ac_c* param_2, dCcD_GObjInf* param_3) {
    // NONMATCHING
}

/* 80838A68-80838AC4 000C28 005C+00 1/1 0/0 0/0 .text
 * daHorse_coHitCallbackAll__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void daHorse_coHitCallbackAll(fopAc_ac_c* param_0, dCcD_GObjInf* param_1,
                                         fopAc_ac_c* param_2, dCcD_GObjInf* param_3) {
    // NONMATCHING
}

/* 80838AC4-80838B78 000C84 00B4+00 1/1 0/0 0/0 .text daHorse_searchEnemy__FP10fopAc_ac_cPv */
static void daHorse_searchEnemy(fopAc_ac_c* param_0, void* param_1) {
    // NONMATCHING
}

/* 80838B78-80838F3C 000D38 03C4+00 1/1 0/0 0/0 .text            modelCallBack__9daHorse_cFi */
void daHorse_c::modelCallBack(int param_0) {
    // NONMATCHING
}

/* 80838F3C-80838F80 0010FC 0044+00 1/1 0/0 0/0 .text            daHorse_modelCallBack__FP8J3DJointi
 */
static void daHorse_modelCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 80838F80-80838F98 001140 0018+00 1/1 0/0 0/0 .text daHorse_searchSingleBoar__FP10fopAc_ac_cPv
 */
static void daHorse_searchSingleBoar(fopAc_ac_c* param_0, void* param_1) {
    // NONMATCHING
}

/* 80838F98-808392D8 001158 0340+00 1/1 0/0 0/0 .text            createHeap__9daHorse_cFv */
void daHorse_c::createHeap() {
    // NONMATCHING
}

/* 808392D8-808392DC 001498 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz()
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 808392DC-80839348 00149C 006C+00 1/0 0/0 0/0 .text
 * __dt__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>Fv */
extern "C" void func_808392DC(void* _this) {
    // NONMATCHING
}

/* 80839348-808393A4 001508 005C+00 1/0 0/0 0/0 .text            __dt__19J3DMtxCalcNoAnmBaseFv */
// J3DMtxCalcNoAnmBase::~J3DMtxCalcNoAnmBase() {
extern "C" void __dt__19J3DMtxCalcNoAnmBaseFv() {
    // NONMATCHING
}

/* 808393A4-808393EC 001564 0048+00 1/0 0/0 0/0 .text            __dt__10J3DMtxCalcFv */
// J3DMtxCalc::~J3DMtxCalc() {
extern "C" void __dt__10J3DMtxCalcFv() {
    // NONMATCHING
}

/* 808393EC-8083940C 0015AC 0020+00 1/1 0/0 0/0 .text            daHorse_createHeap__FP10fopAc_ac_c
 */
static void daHorse_createHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084585C-8084585C 0003B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8084585C = "F_SP108";
SECTION_DEAD static char const* const stringBase_80845864 = "F_SP104";
#pragma pop

/* 8083940C-80839498 0015CC 008C+00 1/1 0/0 0/0 .text            checkEnding__9daHorse_cFv */
void daHorse_c::checkEnding() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845644-80845648 000198 0004+00 1/5 0/0 0/0 .rodata          @5176 */
SECTION_RODATA static f32 const lit_5176 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80845644, &lit_5176);

/* 80845648-8084564C 00019C 0004+00 0/3 0/0 0/0 .rodata          @5177 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5177 = 60.0f;
COMPILER_STRIP_GATE(0x80845648, &lit_5177);
#pragma pop

/* 8084564C-80845650 0001A0 0004+00 1/2 0/0 0/0 .rodata          @5178 */
SECTION_RODATA static f32 const lit_5178 = 150.0f;
COMPILER_STRIP_GATE(0x8084564C, &lit_5178);

/* 80845650-80845654 0001A4 0004+00 0/2 0/0 0/0 .rodata          @5179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5179 = 240.0f;
COMPILER_STRIP_GATE(0x80845650, &lit_5179);
#pragma pop

/* 80845654-80845658 0001A8 0004+00 1/4 0/0 0/0 .rodata          @5180 */
SECTION_RODATA static f32 const lit_5180 = 500.0f;
COMPILER_STRIP_GATE(0x80845654, &lit_5180);

/* 80845658-8084565C 0001AC 0004+00 0/3 0/0 0/0 .rodata          @5181 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5181 = -5.0f;
COMPILER_STRIP_GATE(0x80845658, &lit_5181);
#pragma pop

/* 8084565C-80845660 0001B0 0004+00 0/3 0/0 0/0 .rodata          @5182 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5182 = 35.0f;
COMPILER_STRIP_GATE(0x8084565C, &lit_5182);
#pragma pop

/* 80845660-80845664 0001B4 0004+00 0/1 0/0 0/0 .rodata          @5183 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5183 = 55.0f;
COMPILER_STRIP_GATE(0x80845660, &lit_5183);
#pragma pop

/* 8084585C-8084585C 0003B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8084586C = "F_SP109";
SECTION_DEAD static char const* const stringBase_80845874 = "";
SECTION_DEAD static char const* const stringBase_80845875 = "F_SP00";
SECTION_DEAD static char const* const stringBase_8084587C = "F_SP103";
SECTION_DEAD static char const* const stringBase_80845884 = "F_SP113";
SECTION_DEAD static char const* const stringBase_8084588C = "F_SP102";
SECTION_DEAD static char const* const stringBase_80845894 = "D_MN09B";
SECTION_DEAD static char const* const stringBase_8084589C = "F_SP123";
#pragma pop

/* 80839498-80839CFC 001658 0864+00 1/1 0/0 0/0 .text            create__9daHorse_cFv */
void daHorse_c::create() {
    // NONMATCHING
}

/* 80839CFC-80839D1C 001EBC 0020+00 1/0 0/0 0/0 .text            daHorse_Create__FP10fopAc_ac_c */
static void daHorse_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80839D1C-80839EBC 001EDC 01A0+00 2/2 0/0 0/0 .text            setBasAnime__9daHorse_cFi */
void daHorse_c::setBasAnime(int param_0) {
    // NONMATCHING
}

/* 80839EBC-80839ED4 00207C 0018+00 2/2 0/0 0/0 .text            resetBasAnime__9daHorse_cFv */
void daHorse_c::resetBasAnime() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845664-80845668 0001B8 0004+00 0/9 0/0 0/0 .rodata          @5529 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5529 = -1.0f;
COMPILER_STRIP_GATE(0x80845664, &lit_5529);
#pragma pop

/* 80845668-8084566C 0001BC 0004+00 0/3 0/0 0/0 .rodata          @5530 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5530 = 8.0f;
COMPILER_STRIP_GATE(0x80845668, &lit_5530);
#pragma pop

/* 8084566C-80845670 0001C0 0004+00 1/9 0/0 0/0 .rodata          @5531 */
SECTION_RODATA static f32 const lit_5531 = 0.5f;
COMPILER_STRIP_GATE(0x8084566C, &lit_5531);

/* 80839ED4-8083A20C 002094 0338+00 1/1 0/0 0/0 .text            setDoubleAnime__9daHorse_cFfffUsUsf
 */
void daHorse_c::setDoubleAnime(f32 param_0, f32 param_1, f32 param_2, u16 param_3, u16 param_4,
                                   f32 param_5) {
    // NONMATCHING
}

/* 8083A20C-8083A3C4 0023CC 01B8+00 10/10 0/0 0/0 .text setSingleAnime__9daHorse_cFUsffsfi */
void daHorse_c::setSingleAnime(u16 param_0, f32 param_1, f32 param_2, s16 param_3, f32 param_4,
                                   int param_5) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845670-80845674 0001C4 0004+00 0/3 0/0 0/0 .rodata          @5629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5629 = 18.0f;
COMPILER_STRIP_GATE(0x80845670, &lit_5629);
#pragma pop

/* 80845674-80845678 0001C8 0004+00 0/1 0/0 0/0 .rodata          @5630 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5630 = 0x3C449BA6;
COMPILER_STRIP_GATE(0x80845674, &lit_5630);
#pragma pop

/* 8083A3C4-8083A5AC 002584 01E8+00 1/1 0/0 0/0 .text            animePlay__9daHorse_cFv */
void daHorse_c::animePlay() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845678-8084567C 0001CC 0004+00 3/13 0/0 0/0 .rodata          @5722 */
SECTION_RODATA static f32 const lit_5722 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80845678, &lit_5722);

/* 8083A5AC-8083A890 00276C 02E4+00 1/1 0/0 0/0 .text            checkDemoAction__9daHorse_cFv */
void daHorse_c::checkDemoAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084567C-80845680 0001D0 0004+00 0/3 0/0 0/0 .rodata          @5814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5814 = 400.0f;
COMPILER_STRIP_GATE(0x8084567C, &lit_5814);
#pragma pop

/* 8083A890-8083AC7C 002A50 03EC+00 1/1 0/0 0/0 .text            setStickRodeoMove__9daHorse_cFv */
void daHorse_c::setStickRodeoMove() {
    // NONMATCHING
}

/* 8083AC7C-8083ACEC 002E3C 0070+00 2/2 0/0 0/0 .text            setStickCallMove__9daHorse_cFv */
void daHorse_c::setStickCallMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845680-80845684 0001D4 0004+00 0/1 0/0 0/0 .rodata          @5889 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5889 = 10000.0f;
COMPILER_STRIP_GATE(0x80845680, &lit_5889);
#pragma pop

/* 80845684-80845688 0001D8 0004+00 0/1 0/0 0/0 .rodata          @5890 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5890 = 1600.0f;
COMPILER_STRIP_GATE(0x80845684, &lit_5890);
#pragma pop

/* 8083ACEC-8083AEC0 002EAC 01D4+00 2/2 0/0 0/0 .text setDemoMoveData__9daHorse_cFPUlPC4cXyz */
void daHorse_c::setDemoMoveData(u32* param_0, cXyz const* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084585C-8084585C 0003B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_808458A4 = "Horse";
SECTION_DEAD static char const* const stringBase_808458AA = "pos";
SECTION_DEAD static char const* const stringBase_808458AE = "angle";
SECTION_DEAD static char const* const stringBase_808458B4 = "prm0";
SECTION_DEAD static char const* const stringBase_808458B9 = "ride";
SECTION_DEAD static char const* const stringBase_808458BE = "disXZ";
SECTION_DEAD static char const* const stringBase_808458C4 = "disY";
#pragma pop

/* 8083AEC0-8083B578 003080 06B8+00 1/1 0/0 0/0 .text            setDemoData__9daHorse_cFv */
void daHorse_c::setDemoData() {
    // NONMATCHING
}

/* 8083B578-8083B600 003738 0088+00 4/4 0/0 0/0 .text            acceptPlayerRide__9daHorse_cFv */
void daHorse_c::acceptPlayerRide() {
    // NONMATCHING
}

/* 8083B600-8083B828 0037C0 0228+00 1/1 0/0 0/0 .text            setStickData__9daHorse_cFv */
void daHorse_c::setStickData() {
    // NONMATCHING
}

/* 8083B828-8083B82C 0039E8 0004+00 1/1 0/0 0/0 .text            setTurnStartVibration__9daHorse_cFv
 */
void daHorse_c::setTurnStartVibration() {
    /* empty function */
}

/* 8083B82C-8083B830 0039EC 0004+00 1/1 0/0 0/0 .text            setTurnVibration__9daHorse_cFv */
void daHorse_c::setTurnVibration() {
    /* empty function */
}

/* ############################################################################################## */
/* 80845688-80845698 0001DC 0010+00 0/1 0/0 0/0 .rodata          footEffectRate$6303 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const footEffectRate[16] = {
    0x3E, 0x8A, 0x3D, 0x71, 0x3E, 0xCC, 0xCC, 0xCD, 0x3F, 0x66, 0x66, 0x66, 0x3E, 0x2E, 0x14, 0x7B,
};
COMPILER_STRIP_GATE(0x80845688, &footEffectRate);
#pragma pop

/* 80845698-8084569C 0001EC 0004+00 0/3 0/0 0/0 .rodata          @6389 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6389 = 10.0f;
COMPILER_STRIP_GATE(0x80845698, &lit_6389);
#pragma pop

/* 8084569C-808456A0 0001F0 0004+00 0/1 0/0 0/0 .rodata          @6390 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6390 = 34.0f;
COMPILER_STRIP_GATE(0x8084569C, &lit_6390);
#pragma pop

/* 808456A0-808456A4 0001F4 0004+00 0/2 0/0 0/0 .rodata          @6391 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6391 = 12.0f;
COMPILER_STRIP_GATE(0x808456A0, &lit_6391);
#pragma pop

/* 808456A4-808456A8 0001F8 0004+00 0/2 0/0 0/0 .rodata          @6392 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6392 = 14.0f;
COMPILER_STRIP_GATE(0x808456A4, &lit_6392);
#pragma pop

/* 808456A8-808456AC 0001FC 0004+00 0/1 0/0 0/0 .rodata          @6393 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6393 = 19.0f;
COMPILER_STRIP_GATE(0x808456A8, &lit_6393);
#pragma pop

/* 8083B830-8083BF48 0039F0 0718+00 6/6 0/0 0/0 .text            setMoveAnime__9daHorse_cFf */
void daHorse_c::setMoveAnime(f32 param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808456AC-808456B0 000200 0004+00 0/1 0/0 0/0 .rodata          @6871 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6871 = -33500.0f;
COMPILER_STRIP_GATE(0x808456AC, &lit_6871);
#pragma pop

/* 808456B0-808456B4 000204 0004+00 0/1 0/0 0/0 .rodata          @6872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6872 = -20500.0f;
COMPILER_STRIP_GATE(0x808456B0, &lit_6872);
#pragma pop

/* 808456B4-808456B8 000208 0004+00 0/2 0/0 0/0 .rodata          @6873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6873 = 300.0f;
COMPILER_STRIP_GATE(0x808456B4, &lit_6873);
#pragma pop

/* 808456B8-808456BC 00020C 0004+00 0/1 0/0 0/0 .rodata          @6874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6874 = 23716.0f;
COMPILER_STRIP_GATE(0x808456B8, &lit_6874);
#pragma pop

/* 808456BC-808456C0 000210 0004+00 0/2 0/0 0/0 .rodata          @6875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6875 = 50.0f;
COMPILER_STRIP_GATE(0x808456BC, &lit_6875);
#pragma pop

/* 808456C0-808456C4 000214 0004+00 0/1 0/0 0/0 .rodata          @6876 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6876 = 0x43360B61;
COMPILER_STRIP_GATE(0x808456C0, &lit_6876);
#pragma pop

/* 808456C4-808456C8 000218 0004+00 0/1 0/0 0/0 .rodata          @6877 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6877 = 101.0f;
COMPILER_STRIP_GATE(0x808456C4, &lit_6877);
#pragma pop

/* 808456C8-808456CC 00021C 0004+00 0/1 0/0 0/0 .rodata          @6878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6878 = -200.0f;
COMPILER_STRIP_GATE(0x808456C8, &lit_6878);
#pragma pop

/* 8083BF48-8083CA80 004108 0B38+00 6/6 0/0 0/0 .text            checkHorseNoMove__9daHorse_cFi */
void daHorse_c::checkHorseNoMove(int param_0) {
    // NONMATCHING
}

/* 8083CA80-8083CB38 004C40 00B8+00 1/1 0/0 0/0 .text            checkTurnPlayerState__9daHorse_cFv
 */
void daHorse_c::checkTurnPlayerState() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808456CC-808456D0 000220 0004+00 0/1 0/0 0/0 .rodata          @7216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7216 = 1000000.0f;
COMPILER_STRIP_GATE(0x808456CC, &lit_7216);
#pragma pop

/* 808456D0-808456D4 000224 0004+00 0/1 0/0 0/0 .rodata          @7217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7217 = 2250000.0f;
COMPILER_STRIP_GATE(0x808456D0, &lit_7217);
#pragma pop

/* 808456D4-808456D8 000228 0004+00 1/3 0/0 0/0 .rodata          @7218 */
SECTION_RODATA static f32 const lit_7218 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x808456D4, &lit_7218);

/* 808456D8-808456DC 00022C 0004+00 0/3 0/0 0/0 .rodata          @7219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7219 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x808456D8, &lit_7219);
#pragma pop

/* 8083CB38-8083D748 004CF8 0C10+00 2/2 0/0 0/0 .text            setSpeedAndAngle__9daHorse_cFv */
void daHorse_c::setSpeedAndAngle() {
    // NONMATCHING
}

/* 8083D748-8083D774 005908 002C+00 1/1 0/0 0/0 .text            checkWaitTurn__9daHorse_cCFv */
void daHorse_c::checkWaitTurn() const {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808456DC-808456E0 000230 0004+00 1/2 0/0 0/0 .rodata          @7274 */
SECTION_RODATA static f32 const lit_7274 = -1000000000.0f;
COMPILER_STRIP_GATE(0x808456DC, &lit_7274);

/* 8083D774-8083D918 005934 01A4+00 2/2 0/0 0/0 .text            setRoomInfo__9daHorse_cFi */
void daHorse_c::setRoomInfo(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808456E0-808456E4 000234 0004+00 0/1 0/0 0/0 .rodata          @7300 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7300 = -15.0f;
COMPILER_STRIP_GATE(0x808456E0, &lit_7300);
#pragma pop

/* 80845BB8-80845BBC 000008 0001+03 6/6 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80845BBC-80845BC0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80845BC0-80845BC4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80845BC4-80845BC8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80845BC8-80845BCC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80845BCC-80845BD0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80845BD0-80845BD4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80845BD4-80845BD8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80845BD8-80845BDC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80845BDC-80845BE0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80845BE0-80845BE4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80845BE4-80845BE8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80845BE8-80845BEC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80845BEC-80845BF0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80845BF0-80845BF4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80845BF4-80845BF8 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80845BF8-80845C04 000048 000C+00 0/1 0/0 0/0 .bss             @4179 */
#pragma push
#pragma force_active on
static u8 lit_4179[12];
#pragma pop

/* 80845C04-80845C10 000054 000C+00 1/2 0/0 0/0 .bss             l_frontFootOffset */
static u8 l_frontFootOffset[12];

/* 80845C10-80845C1C 000060 000C+00 0/1 0/0 0/0 .bss             @4180 */
#pragma push
#pragma force_active on
static u8 lit_4180[12];
#pragma pop

/* 80845C1C-80845C28 00006C 000C+00 1/2 0/0 0/0 .bss             l_backFootOffset */
static u8 l_backFootOffset[12];

/* 80845C28-80845C38 000078 000C+04 0/1 0/0 0/0 .bss             @7279 */
#pragma push
#pragma force_active on
static u8 lit_7279[12 + 4 /* padding */];
#pragma pop

/* 80845C38-80845C44 000088 000C+00 0/1 0/0 0/0 .bss             localEyePos$7278 */
#pragma push
#pragma force_active on
static u8 localEyePos[12];
#pragma pop

/* 8083D918-8083D9D8 005AD8 00C0+00 2/2 0/0 0/0 .text            setBodyPart__9daHorse_cFv */
void daHorse_c::setBodyPart() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808456E4-808456E8 000238 0004+00 0/2 0/0 0/0 .rodata          @7362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7362 = 4.0f;
COMPILER_STRIP_GATE(0x808456E4, &lit_7362);
#pragma pop

/* 808456E8-808456EC 00023C 0004+00 0/1 0/0 0/0 .rodata          @7363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7363 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x808456E8, &lit_7363);
#pragma pop

/* 808456EC-808456F0 000240 0004+00 0/1 0/0 0/0 .rodata          @7364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7364 = 140.0f;
COMPILER_STRIP_GATE(0x808456EC, &lit_7364);
#pragma pop

/* 8083D9D8-8083DC58 005B98 0280+00 2/2 0/0 0/0 .text            setMatrix__9daHorse_cFv */
void daHorse_c::setMatrix() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808456F0-808456FC 000244 000C+00 0/1 0/0 0/0 .rodata          @7373 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_7373[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x808456F0, &lit_7373);
#pragma pop

/* 808456FC-80845704 000250 0006+02 0/1 0/0 0/0 .rodata          @7374 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_7374[6 + 2 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x808456FC, &lit_7374);
#pragma pop

/* 80845704-80845708 000258 0004+00 0/1 0/0 0/0 .rodata          @7439 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7439 = 1200.0f;
COMPILER_STRIP_GATE(0x80845704, &lit_7439);
#pragma pop

/* 80845708-8084570C 00025C 0004+00 0/1 0/0 0/0 .rodata          @7440 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7440 = 700.0f;
COMPILER_STRIP_GATE(0x80845708, &lit_7440);
#pragma pop

/* 8083DC58-8083DEEC 005E18 0294+00 1/1 0/0 0/0 .text            setDashEffect__9daHorse_cFPUl */
void daHorse_c::setDashEffect(u32* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084570C-80845710 000260 0004+00 0/5 0/0 0/0 .rodata          @7691 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7691 = 2.0f;
COMPILER_STRIP_GATE(0x8084570C, &lit_7691);
#pragma pop

/* 80845710-80845714 000264 0004+00 0/1 0/0 0/0 .rodata          @7692 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7692 = 255.0f;
COMPILER_STRIP_GATE(0x80845710, &lit_7692);
#pragma pop

/* 80845714-80845718 000268 0004+00 0/3 0/0 0/0 .rodata          @7693 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7693 = 1.5f;
COMPILER_STRIP_GATE(0x80845714, &lit_7693);
#pragma pop

/* 80845718-8084571C 00026C 0004+00 0/1 0/0 0/0 .rodata          @7694 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7694 = 9.0f / 5.0f;
COMPILER_STRIP_GATE(0x80845718, &lit_7694);
#pragma pop

/* 8084571C-80845720 000270 0004+00 0/1 0/0 0/0 .rodata          @7695 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7695 = -0.75f;
COMPILER_STRIP_GATE(0x8084571C, &lit_7695);
#pragma pop

/* 80845720-80845724 000274 0004+00 0/2 0/0 0/0 .rodata          @7696 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7696 = 0.75f;
COMPILER_STRIP_GATE(0x80845720, &lit_7696);
#pragma pop

/* 80845C44-80845C54 000094 000C+04 0/1 0/0 0/0 .bss             @7469 */
#pragma push
#pragma force_active on
static u8 lit_7469[12 + 4 /* padding */];
#pragma pop

/* 80845C54-80845C60 0000A4 000C+00 0/1 0/0 0/0 .bss             runScale$7468 */
#pragma push
#pragma force_active on
static u8 runScale[12];
#pragma pop

/* 80845C60-80845C70 0000B0 000C+04 0/1 0/0 0/0 .bss             @7473 */
#pragma push
#pragma force_active on
static u8 lit_7473[12 + 4 /* padding */];
#pragma pop

/* 80845C70-80845C7C 0000C0 000C+00 0/1 0/0 0/0 .bss             landScale$7472 */
#pragma push
#pragma force_active on
static u8 landScale[12];
#pragma pop

/* 80845C7C-80845C8C 0000CC 000C+04 0/1 0/0 0/0 .bss             @7477 */
#pragma push
#pragma force_active on
static u8 lit_7477[12 + 4 /* padding */];
#pragma pop

/* 80845C8C-80845C98 0000DC 000C+00 0/1 0/0 0/0 .bss             grassRunScale$7476 */
#pragma push
#pragma force_active on
static u8 grassRunScale[12];
#pragma pop

/* 80845C98-80845CA8 0000E8 000C+04 0/1 0/0 0/0 .bss             @7481 */
#pragma push
#pragma force_active on
static u8 lit_7481[12 + 4 /* padding */];
#pragma pop

/* 80845CA8-80845CB4 0000F8 000C+00 0/1 0/0 0/0 .bss             waterDirection$7480 */
#pragma push
#pragma force_active on
static u8 waterDirection[12];
#pragma pop

/* 8083DEEC-8083E4D8 0060AC 05EC+00 1/1 0/0 0/0 .text            setEffect__9daHorse_cFv */
void daHorse_c::setEffect() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845724-80845730 000278 000C+00 0/1 0/0 0/0 .rodata          localHeadPos$7706 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const localHeadPos[12] = {
    0x41, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80845724, &localHeadPos);
#pragma pop

/* 80845730-80845734 000284 0004+00 0/1 0/0 0/0 .rodata          @7747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7747 = 170.0f;
COMPILER_STRIP_GATE(0x80845730, &lit_7747);
#pragma pop

/* 80845734-80845738 000288 0004+00 0/1 0/0 0/0 .rodata          @7748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7748 = 83.0f;
COMPILER_STRIP_GATE(0x80845734, &lit_7748);
#pragma pop

/* 80845738-8084573C 00028C 0004+00 1/3 0/0 0/0 .rodata          @7749 */
SECTION_RODATA static f32 const lit_7749 = 80.0f;
COMPILER_STRIP_GATE(0x80845738, &lit_7749);

/* 8083E4D8-8083E6E8 006698 0210+00 1/1 0/0 0/0 .text            setCollision__9daHorse_cFv */
void daHorse_c::setCollision() {
    // NONMATCHING
}

/* 8083E6E8-8083E760 0068A8 0078+00 1/1 0/0 0/0 .text            autoGroundHit__9daHorse_cFv */
void daHorse_c::autoGroundHit() {
    // NONMATCHING
}

/* 8083E760-8083E8A4 006920 0144+00 1/1 0/0 0/0 .text            setTailAngle__9daHorse_cFv */
void daHorse_c::setTailAngle() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084573C-80845740 000290 0004+00 1/1 0/0 0/0 .rodata          @7848 */
SECTION_RODATA static f32 const lit_7848 = 250000.0f;
COMPILER_STRIP_GATE(0x8084573C, &lit_7848);

/* 8083E8A4-8083EA78 006A64 01D4+00 1/1 0/0 0/0 .text            setNeckAngle__9daHorse_cFv */
void daHorse_c::setNeckAngle() {
    // NONMATCHING
}

/* 8083EA78-8083EB10 006C38 0098+00 1/1 0/0 0/0 .text            copyFootMatrix__9daHorse_cFv */
void daHorse_c::copyFootMatrix() {
    // NONMATCHING
}

/* 8083EB10-8083ED88 006CD0 0278+00 1/1 0/0 0/0 .text            setFootMatrix__9daHorse_cFv */
void daHorse_c::setFootMatrix() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845740-80845744 000294 0004+00 0/1 0/0 0/0 .rodata          @8279 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_8279 = 0x3BA3D70A;
COMPILER_STRIP_GATE(0x80845740, &lit_8279);
#pragma pop

/* 8083ED88-8083F3B0 006F48 0628+00 1/1 0/0 0/0 .text            setLegAngle__9daHorse_cFfiiPs */
void daHorse_c::setLegAngle(f32 param_0, int param_1, int param_2, s16* param_3) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845744-80845748 000298 0004+00 0/1 0/0 0/0 .rodata          @8509 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8509 = 120.0f;
COMPILER_STRIP_GATE(0x80845744, &lit_8509);
#pragma pop

/* 80845748-8084574C 00029C 0004+00 0/2 0/0 0/0 .rodata          @8510 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8510 = 1000.0f;
COMPILER_STRIP_GATE(0x80845748, &lit_8510);
#pragma pop

/* 8084574C-80845750 0002A0 0004+00 0/4 0/0 0/0 .rodata          @8511 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8511 = 30.0f;
COMPILER_STRIP_GATE(0x8084574C, &lit_8511);
#pragma pop

/* 8083F3B0-8083F9AC 007570 05FC+00 1/1 0/0 0/0 .text            footBgCheck__9daHorse_cFv */
void daHorse_c::footBgCheck() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845750-80845754 0002A4 0004+00 0/1 0/0 0/0 .rodata          @8623 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8623 = 63.0f;
COMPILER_STRIP_GATE(0x80845750, &lit_8623);
#pragma pop

/* 80845754-80845758 0002A8 0004+00 0/1 0/0 0/0 .rodata          @8624 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8624 = 17.0f;
COMPILER_STRIP_GATE(0x80845754, &lit_8624);
#pragma pop

/* 80845758-8084575C 0002AC 0004+00 0/1 0/0 0/0 .rodata          @8625 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8625 = 11.0f;
COMPILER_STRIP_GATE(0x80845758, &lit_8625);
#pragma pop

/* 8084575C-80845760 0002B0 0004+00 0/1 0/0 0/0 .rodata          @8626 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8626 = -11.0f;
COMPILER_STRIP_GATE(0x8084575C, &lit_8626);
#pragma pop

/* 80845760-80845764 0002B4 0004+00 0/1 0/0 0/0 .rodata          @8627 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8627 = -35.0f;
COMPILER_STRIP_GATE(0x80845760, &lit_8627);
#pragma pop

/* 80845764-80845768 0002B8 0004+00 0/2 0/0 0/0 .rodata          @8628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8628 = 8192.0f;
COMPILER_STRIP_GATE(0x80845764, &lit_8628);
#pragma pop

/* 80845768-8084576C 0002BC 0004+00 0/1 0/0 0/0 .rodata          @8629 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_8629 = 0x3A03126F;
COMPILER_STRIP_GATE(0x80845768, &lit_8629);
#pragma pop

/* 8084576C-80845770 0002C0 0004+00 0/3 0/0 0/0 .rodata          @8630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8630 = 20.0f;
COMPILER_STRIP_GATE(0x8084576C, &lit_8630);
#pragma pop

/* 80845CB4-80845CC4 000104 000C+04 0/1 0/0 0/0 .bss             @8516 */
#pragma push
#pragma force_active on
static u8 lit_8516[12 + 4 /* padding */];
#pragma pop

/* 80845CC4-80845CD0 000114 000C+00 0/1 0/0 0/0 .bss             reinLeftStart$8515 */
#pragma push
#pragma force_active on
static u8 reinLeftStart[12];
#pragma pop

/* 80845CD0-80845CE0 000120 000C+04 0/1 0/0 0/0 .bss             @8520 */
#pragma push
#pragma force_active on
static u8 lit_8520[12 + 4 /* padding */];
#pragma pop

/* 80845CE0-80845CEC 000130 000C+00 0/1 0/0 0/0 .bss             reinRightStart$8519 */
#pragma push
#pragma force_active on
static u8 reinRightStart[12];
#pragma pop

/* 80845CEC-80845CFC 00013C 000C+04 0/1 0/0 0/0 .bss             @8524 */
#pragma push
#pragma force_active on
static u8 lit_8524[12 + 4 /* padding */];
#pragma pop

/* 80845CFC-80845D08 00014C 000C+00 0/1 0/0 0/0 .bss             localNeckLeft$8523 */
#pragma push
#pragma force_active on
static u8 localNeckLeft[12];
#pragma pop

/* 80845D08-80845D18 000158 000C+04 0/1 0/0 0/0 .bss             @8528 */
#pragma push
#pragma force_active on
static u8 lit_8528[12 + 4 /* padding */];
#pragma pop

/* 80845D18-80845D24 000168 000C+00 0/1 0/0 0/0 .bss             localNeckRight$8527 */
#pragma push
#pragma force_active on
static u8 localNeckRight[12];
#pragma pop

/* 8083F9AC-8083FDAC 007B6C 0400+00 2/2 0/0 0/0 .text            setReinPosMoveInit__9daHorse_cFi */
void daHorse_c::setReinPosMoveInit(int param_0) {
    // NONMATCHING
}

/* 8083FDAC-8083FEB4 007F6C 0108+00 2/2 0/0 0/0 .text            copyReinPos__9daHorse_cFv */
void daHorse_c::copyReinPos() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845770-8084577C 0002C4 000C+00 1/1 0/0 0/0 .rodata          zeldaLocalLeft$8682 */
SECTION_RODATA static u8 const zeldaLocalLeft[12] = {
    0x40, 0x40, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0xC0, 0xA0, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80845770, &zeldaLocalLeft);

/* 8084577C-80845788 0002D0 000C+00 1/1 0/0 0/0 .rodata          zeldaLocalRight$8683 */
SECTION_RODATA static u8 const zeldaLocalRight[12] = {
    0x40, 0x40, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8084577C, &zeldaLocalRight);

/* 8083FEB4-8084010C 008074 0258+00 1/0 0/0 0/0 .text setReinPosHandSubstance__9daHorse_cFi */
void daHorse_c::setReinPosHandSubstance(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845788-8084578C 0002DC 0004+00 0/2 0/0 0/0 .rodata          @8805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8805 = 29.0f;
COMPILER_STRIP_GATE(0x80845788, &lit_8805);
#pragma pop

/* 8084578C-80845790 0002E0 0004+00 0/2 0/0 0/0 .rodata          @8806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8806 = -2.0f;
COMPILER_STRIP_GATE(0x8084578C, &lit_8806);
#pragma pop

/* 80845D24-80845D34 000174 000C+04 0/1 0/0 0/0 .bss             @8753 */
#pragma push
#pragma force_active on
static u8 lit_8753[12 + 4 /* padding */];
#pragma pop

/* 80845D34-80845D40 000184 000C+00 0/1 0/0 0/0 .bss             saddleLeft$8752 */
#pragma push
#pragma force_active on
static u8 saddleLeft[12];
#pragma pop

/* 80845D40-80845D50 000190 000C+04 0/1 0/0 0/0 .bss             @8757 */
#pragma push
#pragma force_active on
static u8 lit_8757[12 + 4 /* padding */];
#pragma pop

/* 80845D50-80845D5C 0001A0 000C+00 0/1 0/0 0/0 .bss             saddleRight$8756 */
#pragma push
#pragma force_active on
static u8 saddleRight[12];
#pragma pop

/* 8084010C-808402F8 0082CC 01EC+00 1/0 0/0 0/0 .text setReinPosNormalSubstance__9daHorse_cFv */
void daHorse_c::setReinPosNormalSubstance() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845790-80845794 0002E4 0004+00 0/1 0/0 0/0 .rodata          @8904 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8904 = 220.0f;
COMPILER_STRIP_GATE(0x80845790, &lit_8904);
#pragma pop

/* 80845794-80845798 0002E8 0004+00 0/1 0/0 0/0 .rodata          @8905 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8905 = -170.0f;
COMPILER_STRIP_GATE(0x80845794, &lit_8905);
#pragma pop

/* 80845D5C-80845D6C 0001AC 000C+04 0/1 0/0 0/0 .bss             @8813 */
#pragma push
#pragma force_active on
static u8 lit_8813[12 + 4 /* padding */];
#pragma pop

/* 80845D6C-80845D78 0001BC 000C+00 0/1 0/0 0/0 .bss             localCenterPos$8812 */
#pragma push
#pragma force_active on
static u8 localCenterPos[12];
#pragma pop

/* 80845D78-80845D88 0001C8 000C+04 0/1 0/0 0/0 .bss             @8817 */
#pragma push
#pragma force_active on
static u8 lit_8817[12 + 4 /* padding */];
#pragma pop

/* 80845D88-80845D94 0001D8 000C+00 0/1 0/0 0/0 .bss             localFrontPos$8816 */
#pragma push
#pragma force_active on
static u8 localFrontPos[12];
#pragma pop

/* 80845D94-80845DA4 0001E4 000C+04 0/1 0/0 0/0 .bss             @8821 */
#pragma push
#pragma force_active on
static u8 lit_8821[12 + 4 /* padding */];
#pragma pop

/* 80845DA4-80845DB0 0001F4 000C+00 0/1 0/0 0/0 .bss             localBackPos$8820 */
#pragma push
#pragma force_active on
static u8 localBackPos[12];
#pragma pop

/* 808402F8-80840714 0084B8 041C+00 1/1 0/0 0/0 .text            bgCheck__9daHorse_cFv */
void daHorse_c::bgCheck() {
    // NONMATCHING
}

/* 80840714-808407B0 0088D4 009C+00 1/0 0/0 0/0 .text
 * checkSpecialWallHitSubstance__9daHorse_cCFRC4cXyz            */
void daHorse_c::checkSpecialWallHitSubstance(cXyz const& param_0) const {
    // NONMATCHING
}

/* 808407B0-80840800 008970 0050+00 3/3 0/0 0/0 .text            setServiceWaitTimer__9daHorse_cFv
 */
void daHorse_c::setServiceWaitTimer() {
    // NONMATCHING
}

/* 80840800-80840844 0089C0 0044+00 2/2 0/0 0/0 .text            checkServiceWaitAnime__9daHorse_cFv
 */
void daHorse_c::checkServiceWaitAnime() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845798-8084579C 0002EC 0004+00 1/1 0/0 0/0 .rodata          @8963 */
SECTION_RODATA static f32 const lit_8963 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80845798, &lit_8963);

/* 80840844-808408F0 008A04 00AC+00 2/2 0/0 0/0 .text            checkTurnInput__9daHorse_cFv */
void daHorse_c::checkTurnInput() {
    // NONMATCHING
}

/* 808408F0-808409C0 008AB0 00D0+00 2/2 0/0 0/0 .text            checkTgHitTurn__9daHorse_cFv */
void daHorse_c::checkTgHitTurn() {
    // NONMATCHING
}

/* 808409C0-80840B28 008B80 0168+00 3/3 0/0 0/0 .text checkTurnAfterFastMove__9daHorse_cFf */
void daHorse_c::checkTurnAfterFastMove(f32 param_0) {
    // NONMATCHING
}

/* 80840B28-80840B88 008CE8 0060+00 2/2 0/0 0/0 .text            setNeckAnimeMorf__9daHorse_cFv */
void daHorse_c::setNeckAnimeMorf() {
    // NONMATCHING
}

/* 80840B88-80840CA4 008D48 011C+00 4/4 0/0 0/0 .text            setNeckAnime__9daHorse_cFUsffs */
void daHorse_c::setNeckAnime(u16 param_0, f32 param_1, f32 param_2, s16 param_3) {
    // NONMATCHING
}

/* 80840CA4-80840CE4 008E64 0040+00 9/9 0/0 0/0 .text            resetNeckAnime__9daHorse_cFv */
void daHorse_c::resetNeckAnime() {
    // NONMATCHING
}

/* 80840CE4-80840FE0 008EA4 02FC+00 1/1 0/0 0/0 .text            setLashCnt__9daHorse_cFv */
void daHorse_c::setLashCnt() {
    // NONMATCHING
}

/* 80840FE0-80841084 0091A0 00A4+00 1/1 0/0 0/0 .text            setTalkModeWolf__9daHorse_cFv */
void daHorse_c::setTalkModeWolf() {
    // NONMATCHING
}

/* 80841084-8084116C 009244 00E8+00 2/2 0/0 0/0 .text setBoarHit__9daHorse_cFP10fopAc_ac_ci */
void daHorse_c::setBoarHit(fopAc_ac_c* param_0, int param_1) {
    // NONMATCHING
}

/* 8084116C-808411D0 00932C 0064+00 1/1 0/0 0/0 .text            savePos__9daHorse_cFv */
void daHorse_c::savePos() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084579C-808457A0 0002F0 0004+00 0/1 0/0 0/0 .rodata          @9264 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9264 = 4000000.0f;
COMPILER_STRIP_GATE(0x8084579C, &lit_9264);
#pragma pop

/* 808457A0-808457A4 0002F4 0004+00 0/2 0/0 0/0 .rodata          @9265 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9265 = 640000.0f;
COMPILER_STRIP_GATE(0x808457A0, &lit_9265);
#pragma pop

/* 8084585C-8084585C 0003B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_808458C9 = "F_SP110";
#pragma pop

/* 808411D0-80841468 009390 0298+00 1/0 0/0 0/0 .text callHorseSubstance__9daHorse_cFPC4cXyz */
void daHorse_c::callHorseSubstance(cXyz const* param_0) {
    // NONMATCHING
}

/* 80841468-808415B4 009628 014C+00 1/0 0/0 0/0 .text
 * setHorsePosAndAngleSubstance__9daHorse_cFPC4cXyzs            */
void daHorse_c::setHorsePosAndAngleSubstance(cXyz const* param_0, s16 param_1) {
    // NONMATCHING
}

/* 808415B4-80841628 009774 0074+00 2/2 0/0 0/0 .text            checkPlayerHeavy__9daHorse_cFv */
void daHorse_c::checkPlayerHeavy() {
    // NONMATCHING
}

/* 80841628-80841698 0097E8 0070+00 2/2 0/0 0/0 .text            setTgCoGrp__9daHorse_cFUlUl */
void daHorse_c::setTgCoGrp(u32 param_0, u32 param_1) {
    // NONMATCHING
}

/* 80841698-808416D4 009858 003C+00 1/0 0/0 0/0 .text            onRideFlgSubstance__9daHorse_cFv */
void daHorse_c::onRideFlgSubstance() {
    // NONMATCHING
}

/* 808416D4-80841708 009894 0034+00 1/0 0/0 0/0 .text            offRideFlgSubstance__9daHorse_cFv
 */
void daHorse_c::offRideFlgSubstance() {
    // NONMATCHING
}

/* 80841708-808417B8 0098C8 00B0+00 8/8 0/0 0/0 .text            procWaitInit__9daHorse_cFv */
void daHorse_c::procWaitInit() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808457A4-808457A8 0002F8 0004+00 0/1 0/0 0/0 .rodata          @9537 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9537 = 15.0f;
COMPILER_STRIP_GATE(0x808457A4, &lit_9537);
#pragma pop

/* 808457A8-808457AC 0002FC 0004+00 0/1 0/0 0/0 .rodata          @9538 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9538 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x808457A8, &lit_9538);
#pragma pop

/* 808457AC-808457B0 000300 0004+00 0/1 0/0 0/0 .rodata          @9539 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9539 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x808457AC, &lit_9539);
#pragma pop

/* 808457B0-808457B4 000304 0004+00 0/1 0/0 0/0 .rodata          @9540 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9540 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x808457B0, &lit_9540);
#pragma pop

/* 808457B4-808457B8 000308 0004+00 0/2 0/0 0/0 .rodata          @9541 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9541 = 6.0f;
COMPILER_STRIP_GATE(0x808457B4, &lit_9541);
#pragma pop

/* 808417B8-80841F04 009978 074C+00 1/0 0/0 0/0 .text            procWait__9daHorse_cFv */
void daHorse_c::procWait() {
    // NONMATCHING
}

/* 80841F04-80841F80 00A0C4 007C+00 6/6 0/0 0/0 .text            procMoveInit__9daHorse_cFv */
void daHorse_c::procMoveInit() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808457B8-808457BC 00030C 0004+00 0/1 0/0 0/0 .rodata          @9676 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9676 = 350.0f;
COMPILER_STRIP_GATE(0x808457B8, &lit_9676);
#pragma pop

/* 80841F80-808423DC 00A140 045C+00 1/0 0/0 0/0 .text            procMove__9daHorse_cFv */
void daHorse_c::procMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808457BC-808457C0 000310 0004+00 0/1 0/0 0/0 .rodata          @9716 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9716 = 27.0f / 10.0f;
COMPILER_STRIP_GATE(0x808457BC, &lit_9716);
#pragma pop

/* 808423DC-808425BC 00A59C 01E0+00 3/3 0/0 0/0 .text            procStopInit__9daHorse_cFv */
void daHorse_c::procStopInit() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808457C0-808457F0 000314 0030+00 0/1 0/0 0/0 .rodata          stopFootEffectFrame$9720 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const stopFootEffectFrame[48] = {
    0x41, 0x00, 0x00, 0x00, 0x41, 0x30, 0x00, 0x00, 0x41, 0xC0, 0x00, 0x00, 0x41, 0x30, 0x00, 0x00,
    0x41, 0x60, 0x00, 0x00, 0x41, 0xD8, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00,
    0x41, 0x90, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x41, 0x50, 0x00, 0x00, 0x41, 0xB8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x808457C0, &stopFootEffectFrame);
#pragma pop

/* 808457F0-80845820 000344 0030+00 0/1 0/0 0/0 .rodata          stopStandFootEffectFrame$9721 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const stopStandFootEffectFrame[48] = {
    0x40, 0xE0, 0x00, 0x00, 0x41, 0x40, 0x00, 0x00, 0x41, 0xC0, 0x00, 0x00, 0x41, 0x30, 0x00, 0x00,
    0x41, 0x98, 0x00, 0x00, 0x41, 0xD0, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00,
    0x41, 0x90, 0x00, 0x00, 0x40, 0xE0, 0x00, 0x00, 0x41, 0x90, 0x00, 0x00, 0x41, 0xD0, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x808457F0, &stopStandFootEffectFrame);
#pragma pop

/* 80845820-80845824 000374 0004+00 0/1 0/0 0/0 .rodata          @9792 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9792 = 3.5f;
COMPILER_STRIP_GATE(0x80845820, &lit_9792);
#pragma pop

/* 80845824-80845828 000378 0004+00 0/1 0/0 0/0 .rodata          @9793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9793 = 59.0f;
COMPILER_STRIP_GATE(0x80845824, &lit_9793);
#pragma pop

/* 80845828-8084582C 00037C 0004+00 0/1 0/0 0/0 .rodata          @9794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9794 = 32.0f;
COMPILER_STRIP_GATE(0x80845828, &lit_9794);
#pragma pop

/* 808425BC-80842878 00A77C 02BC+00 1/0 0/0 0/0 .text            procStop__9daHorse_cFv */
void daHorse_c::procStop() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084582C-80845830 000380 0004+00 0/1 0/0 0/0 .rodata          @9831 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9831 = 52.0f;
COMPILER_STRIP_GATE(0x8084582C, &lit_9831);
#pragma pop

/* 80845830-80845834 000384 0004+00 0/1 0/0 0/0 .rodata          @9832 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9832 = 0x3DC90FDB;
COMPILER_STRIP_GATE(0x80845830, &lit_9832);
#pragma pop

/* 80845834-80845838 000388 0004+00 0/1 0/0 0/0 .rodata          @9833 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9833 = 53.0f;
COMPILER_STRIP_GATE(0x80845834, &lit_9833);
#pragma pop

/* 80842878-80842AB0 00AA38 0238+00 6/6 0/0 0/0 .text            procTurnInit__9daHorse_cFi */
void daHorse_c::procTurnInit(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845838-8084583C 00038C 0004+00 0/1 0/0 0/0 .rodata          @9982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9982 = 2000.0f;
COMPILER_STRIP_GATE(0x80845838, &lit_9982);
#pragma pop

/* 80842AB0-80843008 00AC70 0558+00 1/0 0/0 0/0 .text            procTurn__9daHorse_cFv */
void daHorse_c::procTurn() {
    // NONMATCHING
}

/* 80843008-808432E0 00B1C8 02D8+00 2/2 0/0 0/0 .text            procJumpInit__9daHorse_cFi */
void daHorse_c::procJumpInit(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8084583C-80845840 000390 0004+00 0/1 0/0 0/0 .rodata          @10106 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10106 = 7.0f;
COMPILER_STRIP_GATE(0x8084583C, &lit_10106);
#pragma pop

/* 808432E0-80843604 00B4A0 0324+00 1/0 0/0 0/0 .text            procJump__9daHorse_cFv */
void daHorse_c::procJump() {
    // NONMATCHING
}

/* 80843604-80843770 00B7C4 016C+00 1/1 0/0 0/0 .text            procLandInit__9daHorse_cFfi */
void daHorse_c::procLandInit(f32 param_0, int param_1) {
    // NONMATCHING
}

/* 80843770-808438AC 00B930 013C+00 1/0 0/0 0/0 .text            procLand__9daHorse_cFv */
void daHorse_c::procLand() {
    // NONMATCHING
}

/* 808438AC-8084396C 00BA6C 00C0+00 1/1 0/0 0/0 .text            procLargeDamageInit__9daHorse_cFv
 */
void daHorse_c::procLargeDamageInit() {
    // NONMATCHING
}

/* 8084396C-808439C8 00BB2C 005C+00 1/0 0/0 0/0 .text            procLargeDamage__9daHorse_cFv */
void daHorse_c::procLargeDamage() {
    // NONMATCHING
}

/* 808439C8-80843A44 00BB88 007C+00 1/1 0/0 0/0 .text            procToolDemoInit__9daHorse_cFv */
void daHorse_c::procToolDemoInit() {
    // NONMATCHING
}

/* 80843A44-80843BFC 00BC04 01B8+00 1/0 0/0 0/0 .text            procToolDemo__9daHorse_cFv */
void daHorse_c::procToolDemo() {
    // NONMATCHING
}

/* 80843BFC-80843C40 00BDBC 0044+00 1/1 0/0 0/0 .text
 * searchSceneChangeArea__9daHorse_cFP10fopAc_ac_c              */
void daHorse_c::searchSceneChangeArea(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80843C40-80843C74 00BE00 0034+00 1/1 0/0 0/0 .text
 * daHorse_searchSceneChangeArea__FP10fopAc_ac_cPv              */
static void daHorse_searchSceneChangeArea(fopAc_ac_c* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845840-8084584C 000394 000C+00 0/1 0/0 0/0 .rodata          @10308 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_10308[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80845840, &lit_10308);
#pragma pop

/* 8084584C-80845850 0003A0 0004+00 0/1 0/0 0/0 .rodata          @10523 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_10523 = 0x38D1B717;
COMPILER_STRIP_GATE(0x8084584C, &lit_10523);
#pragma pop

/* 80843C74-80844570 00BE34 08FC+00 1/1 0/0 0/0 .text            execute__9daHorse_cFv */
void daHorse_c::execute() {
    // NONMATCHING
}

/* 80844570-80844590 00C730 0020+00 1/0 0/0 0/0 .text            daHorse_Execute__FP9daHorse_c */
static void daHorse_Execute(daHorse_c* param_0) {
    // NONMATCHING
}

/* 80844590-8084476C 00C750 01DC+00 1/1 0/0 0/0 .text            draw__9daHorse_cFv */
void daHorse_c::draw() {
    // NONMATCHING
}

/* 8084476C-8084478C 00C92C 0020+00 1/0 0/0 0/0 .text            daHorse_Draw__FP9daHorse_c */
static void daHorse_Draw(daHorse_c* param_0) {
    // NONMATCHING
}

/* 8084478C-80844B1C 00C94C 0390+00 1/1 0/0 0/0 .text            __dt__9daHorse_cFv */
daHorse_c::~daHorse_c() {
    // NONMATCHING
}

/* 80844B1C-80844B44 00CCDC 0028+00 1/0 0/0 0/0 .text            daHorse_Delete__FP9daHorse_c */
static void daHorse_Delete(daHorse_c* param_0) {
    // NONMATCHING
}

/* 80844B44-80844B8C 00CD04 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80844BB4-80844BDC 00CD74 0028+00 1/0 0/0 0/0 .text
 * init__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>FRC3VecRA3_A4_Cf
 */
extern "C" void func_80844BB4(void* _this, Vec const& param_0, f32 const (&param_1)[3][4]) {
    // NONMATCHING
}

/* 80844BDC-80844C0C 00CD9C 0030+00 1/0 0/0 0/0 .text
 * calc__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>Fv */
extern "C" void func_80844BDC(void* _this) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845850-80845854 0003A4 0004+00 0/1 0/0 0/0 .rodata          @10703 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10703 = 23.5f;
COMPILER_STRIP_GATE(0x80845850, &lit_10703);
#pragma pop

/* 80845854-80845858 0003A8 0004+00 0/1 0/0 0/0 .rodata          @10704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10704 = -20.0f;
COMPILER_STRIP_GATE(0x80845854, &lit_10704);
#pragma pop

/* 80845858-8084585C 0003AC 0004+00 0/1 0/0 0/0 .rodata          @10705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10705 = 25.5f;
COMPILER_STRIP_GATE(0x80845858, &lit_10705);
#pragma pop

/* 80844C0C-80844CA0 00CDCC 0094+00 0/0 1/0 0/0 .text            __sinit_d_a_horse_cpp */
void __sinit_d_a_horse_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80844C0C, __sinit_d_a_horse_cpp);
#pragma pop

/* 80844CA0-80844CA8 00CE60 0008+00 1/0 0/0 0/0 .text            @36@__dt__14dBgS_HorseAcchFv */
static void func_80844CA0() {
    // NONMATCHING
}

/* 80844CA8-80844CB0 00CE68 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_HorseAcchFv */
static void func_80844CA8() {
    // NONMATCHING
}

/* 80844CB0-80844F70 00CE70 02C0+00 1/1 0/0 0/0 .text            __ct__9daHorse_cFv */
daHorse_c::daHorse_c() {
    // NONMATCHING
}

/* 80844F70-80844FAC 00D130 003C+00 2/2 0/0 0/0 .text            __dt__17daHorseFootData_cFv */
daHorseFootData_c::~daHorseFootData_c() {
    // NONMATCHING
}

/* 80844FAC-80844FB0 00D16C 0004+00 1/1 0/0 0/0 .text            __ct__17daHorseFootData_cFv */
daHorseFootData_c::daHorseFootData_c() {
    /* empty function */
}

/* 80844FB0-80844FEC 00D170 003C+00 2/2 0/0 0/0 .text            __dt__13daHorseRein_cFv */
// daHorseRein_c::~daHorseRein_c() {
extern "C" void __dt__13daHorseRein_cFv() {
    // NONMATCHING
}

/* 80844FEC-80844FF0 00D1AC 0004+00 1/1 0/0 0/0 .text            __ct__13daHorseRein_cFv */
// daHorseRein_c::daHorseRein_c() {
extern "C" void __ct__13daHorseRein_cFv() {
    /* empty function */
}

/* 80844FF0-80845038 00D1B0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80845038-80845080 00D1F8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80845080-808450C8 00D240 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 808450C8-80845194 00D288 00CC+00 2/2 0/0 0/0 .text            __dt__8dCcD_CylFv */
// dCcD_Cyl::~dCcD_Cyl() {
extern "C" void __dt__8dCcD_CylFv() {
    // NONMATCHING
}

/* 80845194-80845218 00D354 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
// dCcD_Cyl::dCcD_Cyl() {
extern "C" void __ct__8dCcD_CylFv() {
    // NONMATCHING
}

/* 80845218-80845274 00D3D8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80845274-808452E4 00D434 0070+00 3/2 0/0 0/0 .text            __dt__14dBgS_HorseAcchFv */
dBgS_HorseAcch::~dBgS_HorseAcch() {
    // NONMATCHING
}

/* 808452E4-80845354 00D4A4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80845354-808453B0 00D514 005C+00 3/2 0/0 0/0 .text            __dt__16daPy_frameCtrl_cFv */
// daPy_frameCtrl_c::~daPy_frameCtrl_c() {
extern "C" void __dt__16daPy_frameCtrl_cFv() {
    // NONMATCHING
}

/* 808453B0-808453FC 00D570 004C+00 1/1 0/0 0/0 .text            __ct__16daPy_frameCtrl_cFv */
daPy_frameCtrl_c::daPy_frameCtrl_c() {
    // NONMATCHING
}

/* 808453FC-80845438 00D5BC 003C+00 2/2 0/0 0/0 .text            __dt__19mDoExt_AnmRatioPackFv */
mDoExt_AnmRatioPack::~mDoExt_AnmRatioPack() {
    // NONMATCHING
}

/* 80845438-80845450 00D5F8 0018+00 1/1 0/0 0/0 .text            __ct__19mDoExt_AnmRatioPackFv */
mDoExt_AnmRatioPack::mDoExt_AnmRatioPack() {
    // NONMATCHING
}

/* 80845450-80845498 00D610 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80845DB0-80845DB4 000200 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80845DB0[4];
#pragma pop

/* 80845DB4-80845DB8 000204 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80845DB4[4];
#pragma pop

/* 80845DB8-80845DBC 000208 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80845DB8[4];
#pragma pop

/* 80845DBC-80845DC0 00020C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80845DBC[4];
#pragma pop

/* 80845DC0-80845DC4 000210 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80845DC0[4];
#pragma pop

/* 80845DC4-80845DC8 000214 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80845DC4[4];
#pragma pop

/* 80845DC8-80845DCC 000218 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80845DC8[4];
#pragma pop

/* 80845DCC-80845DD0 00021C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80845DCC[4];
#pragma pop

/* 80845DD0-80845DD4 000220 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80845DD0[4];
#pragma pop

/* 80845DD4-80845DD8 000224 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80845DD4[4];
#pragma pop

/* 80845DD8-80845DDC 000228 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80845DD8[4];
#pragma pop

/* 80845DDC-80845DE0 00022C 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80845DDC[4];
#pragma pop

/* 80845DE0-80845DE4 000230 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80845DE0[4];
#pragma pop

/* 80845DE4-80845DE8 000234 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80845DE4[4];
#pragma pop

/* 80845DE8-80845DEC 000238 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80845DE8[4];
#pragma pop

/* 80845DEC-80845DF0 00023C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80845DEC[4];
#pragma pop

/* 80845DF0-80845DF4 000240 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80845DF0[4];
#pragma pop

/* 80845DF4-80845DF8 000244 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80845DF4[4];
#pragma pop

/* 80845DF8-80845DFC 000248 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80845DF8[4];
#pragma pop

/* 80845DFC-80845E00 00024C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80845DFC[4];
#pragma pop

/* 80845E00-80845E04 000250 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80845E00[4];
#pragma pop

/* 80845E04-80845E08 000254 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80845E04[4];
#pragma pop

/* 80845E08-80845E0C 000258 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80845E08[4];
#pragma pop

/* 80845E0C-80845E10 00025C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80845E0C[4];
#pragma pop

/* 80845E10-80845E14 000260 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80845E10[4];
#pragma pop

/* 80845E14-80845E18 000264 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JAUSectionHeap>             */
#pragma push
#pragma force_active on
static u8 data_80845E14[4];
#pragma pop

/* 8084585C-8084585C 0003B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
