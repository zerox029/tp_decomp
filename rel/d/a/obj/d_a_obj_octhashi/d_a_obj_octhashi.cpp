//
// Generated By: dol2asm
// Translation Unit: d_a_obj_octhashi
//

#include "rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
    /* 80CA624C */ csXyz();
    /* 8026745C */ void operator+=(csXyz&);
    /* 80CA546C */ ~csXyz();
};

struct cXyz {
    /* 80CA54A8 */ ~cXyz();
    /* 80CA6250 */ cXyz();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);
};

struct daObjOCTHASHI_c {
    /* 80CA4BB8 */ void initCcCylinder();
    /* 80CA4DFC */ void SetCoSph();
    /* 80CA4EA4 */ void SetCoCyl();
    /* 80CA4F24 */ void HakaiSet2(int);
    /* 80CA52F0 */ void HakaiMotion2();
    /* 80CA54E4 */ void CylAction();
    /* 80CA55C4 */ void SphAction();
    /* 80CA5844 */ void SphAction2();
    /* 80CA58F4 */ void Action();
    /* 80CA59BC */ void setBaseMtx();
    /* 80CA5AE0 */ void CreateHeap();
    /* 80CA5B98 */ void create();
    /* 80CA62A4 */ void Create();
    /* 80CA62F8 */ void Execute(f32 (**)[3][4]);
    /* 80CA636C */ void Draw();
    /* 80CA6444 */ void Delete();
};

struct dSv_memBit_c {
    /* 80034934 */ void isDungeonItem(int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
    /* 80CA610C */ ~dCcD_Stts();
    /* 80CA619C */ dCcD_Stts();
};

struct dCcD_SrcSph {};

struct dCcD_SrcCyl {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 80CA5F74 */ ~dCcD_Sph();
    /* 80CA6040 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80CA61F0 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084658 */ void ChkCoHit();
    /* 800846F0 */ void GetCoHitObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW_Base {};

struct dBgW {};

struct cBgS_PolyInfo {};

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

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80CA60C4 */ ~cM3dGSph();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 80CA5EE4 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80CA5F2C */ ~cM3dGAab();
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80CA625C */ ~cCcD_GStts();
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjOCTHASHI_Create(fopAc_ac_c*);
static void daObjOCTHASHI_Delete(daObjOCTHASHI_c*);
static void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void daObjOCTHASHI_Draw(daObjOCTHASHI_c*);
static void daObjOCTHASHI_Execute(daObjOCTHASHI_c*);
static bool daObjOCTHASHI_IsDelete(daObjOCTHASHI_c*);
extern "C" extern u8 const lit_3887[8];
extern "C" extern u8 const lit_3888[8];
extern "C" extern u8 const lit_3889[8];
extern "C" extern u32 const lit_3890;
extern "C" extern u32 const lit_3903;
extern "C" extern u32 const lit_3904;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OCTHASHI[12];

extern "C" void initCcCylinder__15daObjOCTHASHI_cFv();
extern "C" static void daObjOCTHASHI_Create__FP10fopAc_ac_c();
extern "C" static void daObjOCTHASHI_Delete__FP15daObjOCTHASHI_c();
extern "C" void SetCoSph__15daObjOCTHASHI_cFv();
extern "C" void SetCoCyl__15daObjOCTHASHI_cFv();
extern "C" void HakaiSet2__15daObjOCTHASHI_cFi();
extern "C" void HakaiMotion2__15daObjOCTHASHI_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__4cXyzFv();
extern "C" void CylAction__15daObjOCTHASHI_cFv();
extern "C" void SphAction__15daObjOCTHASHI_cFv();
extern "C" void SphAction2__15daObjOCTHASHI_cFv();
extern "C" void Action__15daObjOCTHASHI_cFv();
extern "C" void setBaseMtx__15daObjOCTHASHI_cFv();
extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void daObjOCTHASHI_Draw__FP15daObjOCTHASHI_c();
extern "C" static void daObjOCTHASHI_Execute__FP15daObjOCTHASHI_c();
extern "C" void CreateHeap__15daObjOCTHASHI_cFv();
extern "C" void create__15daObjOCTHASHI_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__9dCcD_SttsFv();
extern "C" void __ct__9dCcD_SttsFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjOCTHASHI_IsDelete__FP15daObjOCTHASHI_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void Create__15daObjOCTHASHI_cFv();
extern "C" void Execute__15daObjOCTHASHI_cFPPA3_A4_f();
extern "C" void Draw__15daObjOCTHASHI_cFv();
extern "C" void Delete__15daObjOCTHASHI_cFv();
extern "C" extern u8 const lit_3887[8];
extern "C" extern u8 const lit_3888[8];
extern "C" extern u8 const lit_3889[8];
extern "C" extern u32 const lit_3890;
extern "C" extern u32 const lit_3903;
extern "C" extern u32 const lit_3904;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OCTHASHI[12];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void def_se_set(Z2Creature*, cCcD_Obj*, u32, fopAc_ac_c*);
void cM_rndFX(f32);
void cLib_targetAngleY(Vec const*, Vec const*);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern f32 mGroundY__11fopAcM_gc_c;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80CA6680[4];

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__5csXyzFsss();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void cM_rndFX__Ff();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern f32 mGroundY__11fopAcM_gc_c;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80CA6680[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CA6480-80CA64C0 0040+00 s=6 e=0 z=0  None .rodata    ccSphSrc$3655 */
SECTION_RODATA static u8 const ccSphSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0x00, 0x10, 0x40, 0x02, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x7F, 0x0A, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x0A, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00,
};

/* 80CA64C0-80CA64C4 0004+00 s=1 e=0 z=0  None .rodata    @3681 */
SECTION_RODATA static u32 const lit_3681 = 0x44480000;

/* 80CA64C4-80CA64C8 0004+00 s=2 e=0 z=0  None .rodata    @3682 */
SECTION_RODATA static u32 const lit_3682 = 0x42C80000;

/* 80CA64C8-80CA64CC 0004+00 s=5 e=0 z=0  None .rodata    @3683 */
SECTION_RODATA static u8 const lit_3683[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CA64CC-80CA64D0 0004+00 s=1 e=0 z=0  None .rodata    @3684 */
SECTION_RODATA static u32 const lit_3684 = 0x43C80000;

/* 80CA64D0-80CA64D8 0008+00 s=3 e=0 z=0  None .rodata    @3686 */
SECTION_RODATA static u8 const lit_3686[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CA64D8-80CA64DC 0004+00 s=1 e=0 z=0  None .rodata    @3713 */
SECTION_RODATA static u32 const lit_3713 = 0x43EB0000;

/* 80CA64DC-80CA64E0 0004+00 s=1 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u32 const lit_3718 = 0x44458000;

/* 80CA64E0-80CA64E4 0004+00 s=2 e=0 z=0  None .rodata    @3776 */
SECTION_RODATA static u32 const lit_3776 = 0x41200000;

/* 80CA64E4-80CA64E8 0004+00 s=1 e=0 z=0  None .rodata    @3777 */
SECTION_RODATA static u32 const lit_3777 = 0x3F4CCCCD;

/* 80CA64E8-80CA64EC 0004+00 s=1 e=0 z=0  None .rodata    @3778 */
SECTION_RODATA static u32 const lit_3778 = 0x45FA0000;

/* 80CA64EC-80CA64F0 0004+00 s=1 e=0 z=0  None .rodata    @3779 */
SECTION_RODATA static u32 const lit_3779 = 0x3F19999A;

/* 80CA64F0-80CA64F4 0004+00 s=3 e=0 z=0  None .rodata    @3780 */
SECTION_RODATA static u32 const lit_3780 = 0x3F800000;

/* 80CA64F4-80CA64F8 0004+00 s=1 e=0 z=0  None .rodata    @3781 */
SECTION_RODATA static u32 const lit_3781 = 0x3F333333;

/* 80CA64F8-80CA6500 0004+04 s=1 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u32 const lit_3823[1 + 1 /* padding */] = {
    0x40E00000,
    /* padding */
    0x00000000,
};

/* 80CA6500-80CA6508 0008+00 s=0 e=0 z=0  None .rodata    @3887 */
SECTION_RODATA u8 const lit_3887[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA6508-80CA6510 0008+00 s=0 e=0 z=0  None .rodata    @3888 */
SECTION_RODATA u8 const lit_3888[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA6510-80CA6518 0008+00 s=0 e=0 z=0  None .rodata    @3889 */
SECTION_RODATA u8 const lit_3889[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA6518-80CA651C 0004+00 s=0 e=0 z=0  None .rodata    @3890 */
SECTION_RODATA u32 const lit_3890 = 0x44FA0000;

/* 80CA651C-80CA6520 0004+00 s=0 e=0 z=0  None .rodata    @3903 */
SECTION_RODATA u32 const lit_3903 = 0x44180000;

/* 80CA6520-80CA6524 0004+00 s=0 e=0 z=0  None .rodata    @3904 */
SECTION_RODATA u32 const lit_3904 = 0x43E00000;

/* 80CA6524-80CA6528 0004+00 s=1 e=0 z=0  None .rodata    @3989 */
SECTION_RODATA static u32 const lit_3989 = 0xC2200000;

/* 80CA6528-80CA652C 0004+00 s=1 e=0 z=0  None .rodata    @3990 */
SECTION_RODATA static u32 const lit_3990 = 0x3DA3D70A;

/* 80CA652C-80CA6530 0004+00 s=2 e=0 z=0  None .rodata    @3991 */
SECTION_RODATA static u32 const lit_3991 = 0xBF800000;

/* 80CA6530-80CA6534 0004+00 s=3 e=0 z=0  None .rodata    @3992 */
SECTION_RODATA static u32 const lit_3992 = 0x43FA0000;

/* 80CA6534-80CA6538 0004+00 s=1 e=0 z=0  None .rodata    @3993 */
SECTION_RODATA static u32 const lit_3993 = 0x41700000;

/* 80CA6538-80CA653C 0004+00 s=1 e=0 z=0  None .rodata    @3994 */
SECTION_RODATA static u32 const lit_3994 = 0xC1700000;

/* 80CA653C-80CA6540 0004+00 s=1 e=0 z=0  None .rodata    @3995 */
SECTION_RODATA static u32 const lit_3995 = 0x3F000000;

/* 80CA6540-80CA6544 0004+00 s=1 e=0 z=0  None .rodata    @4057 */
SECTION_RODATA static u32 const lit_4057 = 0xC3C80000;

/* 80CA6544-80CA6548 0004+00 s=2 e=0 z=0  None .rodata    @4165 */
SECTION_RODATA static u32 const lit_4165 = 0xC47A0000;

/* 80CA6548-80CA654C 0004+00 s=2 e=0 z=0  None .rodata    @4166 */
SECTION_RODATA static u32 const lit_4166 = 0xC3FA0000;

/* 80CA654C-80CA6550 0004+00 s=2 e=0 z=0  None .rodata    @4167 */
SECTION_RODATA static u32 const lit_4167 = 0x447A0000;

/* 80CA6550-80CA6583 0033+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CA6550 = "Octhashi";
SECTION_DEAD char const* const stringBase_80CA6559 = "S_octhashi00.bmd";
SECTION_DEAD char const* const stringBase_80CA656A = "D_MN01A";
SECTION_DEAD char const* const stringBase_80CA6572 = "S_octhashi00.dzb";
#pragma pop

/* 80CA6584-80CA6588 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CA6588-80CA65CC 0044+00 s=1 e=0 z=0  None .data      ccCylSrc$3656 */
SECTION_DATA static u8 ccCylSrc[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0D, 0x00, 0x10, 0x40, 0x02, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x75,
    0x0A, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0A, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA4BB8-80CA4D98 01E0+00 s=1 e=0 z=0  None .text      initCcCylinder__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/initCcCylinder__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA4D98-80CA4DB8 0020+00 s=1 e=0 z=0  None .text      daObjOCTHASHI_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjOCTHASHI_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/daObjOCTHASHI_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CA4DB8-80CA4DFC 0044+00 s=1 e=0 z=0  None .text      daObjOCTHASHI_Delete__FP15daObjOCTHASHI_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjOCTHASHI_Delete(daObjOCTHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/daObjOCTHASHI_Delete__FP15daObjOCTHASHI_c.s"
}
#pragma pop

/* 80CA4DFC-80CA4EA4 00A8+00 s=1 e=0 z=0  None .text      SetCoSph__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::SetCoSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/SetCoSph__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA4EA4-80CA4F24 0080+00 s=1 e=0 z=0  None .text      SetCoCyl__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::SetCoCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/SetCoCyl__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA4F24-80CA52F0 03CC+00 s=1 e=0 z=0  None .text      HakaiSet2__15daObjOCTHASHI_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::HakaiSet2(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/HakaiSet2__15daObjOCTHASHI_cFi.s"
}
#pragma pop

/* 80CA52F0-80CA546C 017C+00 s=1 e=0 z=0  None .text      HakaiMotion2__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::HakaiMotion2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/HakaiMotion2__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA546C-80CA54A8 003C+00 s=1 e=0 z=0  None .text      __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__5csXyzFv.s"
}
#pragma pop

/* 80CA54A8-80CA54E4 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__4cXyzFv.s"
}
#pragma pop

/* 80CA54E4-80CA55C4 00E0+00 s=1 e=0 z=0  None .text      CylAction__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::CylAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/CylAction__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA55C4-80CA5844 0280+00 s=1 e=0 z=0  None .text      SphAction__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::SphAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/SphAction__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA5844-80CA58F4 00B0+00 s=1 e=0 z=0  None .text      SphAction2__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::SphAction2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/SphAction2__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA58F4-80CA59BC 00C8+00 s=1 e=0 z=0  None .text      Action__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/Action__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA59BC-80CA5A88 00CC+00 s=1 e=0 z=0  None .text      setBaseMtx__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/setBaseMtx__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA5A88-80CA5A94 000C+00 s=1 e=0 z=0  None .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80CA5A94-80CA5AC0 002C+00 s=1 e=0 z=0  None .text      daObjOCTHASHI_Draw__FP15daObjOCTHASHI_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjOCTHASHI_Draw(daObjOCTHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/daObjOCTHASHI_Draw__FP15daObjOCTHASHI_c.s"
}
#pragma pop

/* 80CA5AC0-80CA5AE0 0020+00 s=2 e=0 z=0  None .text      daObjOCTHASHI_Execute__FP15daObjOCTHASHI_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjOCTHASHI_Execute(daObjOCTHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/daObjOCTHASHI_Execute__FP15daObjOCTHASHI_c.s"
}
#pragma pop

/* 80CA5AE0-80CA5B98 00B8+00 s=1 e=0 z=0  None .text      CreateHeap__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/CreateHeap__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA65CC-80CA65EC 0020+00 s=1 e=0 z=0  None .data      l_daObjOCTHASHI_Method */
SECTION_DATA static void* l_daObjOCTHASHI_Method[8] = {
    (void*)daObjOCTHASHI_Create__FP10fopAc_ac_c,
    (void*)daObjOCTHASHI_Delete__FP15daObjOCTHASHI_c,
    (void*)daObjOCTHASHI_Execute__FP15daObjOCTHASHI_c,
    (void*)daObjOCTHASHI_IsDelete__FP15daObjOCTHASHI_c,
    (void*)daObjOCTHASHI_Draw__FP15daObjOCTHASHI_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CA65EC-80CA661C 0030+00 s=0 e=0 z=1  None .data      g_profile_OCTHASHI */
SECTION_DATA void* g_profile_OCTHASHI[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x006D0000, (void*)&g_fpcLf_Method,
    (void*)0x000014B0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01D10000, (void*)&l_daObjOCTHASHI_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80CA661C-80CA6628 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CA6628-80CA6634 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CA6634-80CA6640 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80CA6640-80CA664C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CA664C-80CA6658 000C+00 s=4 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CA6658-80CA6680 0028+00 s=1 e=0 z=0  None .data      __vt__15daObjOCTHASHI_c */
SECTION_DATA static void* __vt__15daObjOCTHASHI_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__15daObjOCTHASHI_cFv,
    (void*)Create__15daObjOCTHASHI_cFv,
    (void*)Execute__15daObjOCTHASHI_cFPPA3_A4_f,
    (void*)Draw__15daObjOCTHASHI_cFv,
    (void*)Delete__15daObjOCTHASHI_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CA5B98-80CA5EE4 034C+00 s=1 e=0 z=0  None .text      create__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/create__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA5EE4-80CA5F2C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80CA5F2C-80CA5F74 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CA5F74-80CA6040 00CC+00 s=1 e=0 z=0  None .text      __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80CA6040-80CA60C4 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80CA60C4-80CA610C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80CA610C-80CA619C 0090+00 s=1 e=0 z=0  None .text      __dt__9dCcD_SttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Stts::~dCcD_Stts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__9dCcD_SttsFv.s"
}
#pragma pop

/* 80CA619C-80CA61F0 0054+00 s=1 e=0 z=0  None .text      __ct__9dCcD_SttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Stts::dCcD_Stts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__ct__9dCcD_SttsFv.s"
}
#pragma pop

/* 80CA61F0-80CA624C 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CA624C-80CA6250 0004+00 s=1 e=0 z=0  None .text      __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 80CA6250-80CA6254 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80CA6254-80CA625C 0008+00 s=1 e=0 z=0  None .text daObjOCTHASHI_IsDelete__FP15daObjOCTHASHI_c
 */
static bool daObjOCTHASHI_IsDelete(daObjOCTHASHI_c* param_0) {
    return true;
}

/* 80CA625C-80CA62A4 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80CA62A4-80CA62F8 0054+00 s=1 e=0 z=0  None .text      Create__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/func_80CA62A4.s"
}
#pragma pop

/* 80CA62F8-80CA636C 0074+00 s=1 e=0 z=0  None .text      Execute__15daObjOCTHASHI_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/Execute__15daObjOCTHASHI_cFPPA3_A4_f.s"
}
#pragma pop

/* 80CA636C-80CA6444 00D8+00 s=1 e=0 z=0  None .text      Draw__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/Draw__15daObjOCTHASHI_cFv.s"
}
#pragma pop

/* 80CA6444-80CA6478 0034+00 s=1 e=0 z=0  None .text      Delete__15daObjOCTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOCTHASHI_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_octhashi/d_a_obj_octhashi/Delete__15daObjOCTHASHI_cFv.s"
}
#pragma pop
