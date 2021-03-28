//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ss_drink
//

#include "rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DAnmTexPattern {};

struct J3DMaterialTable {};

struct mDoExt_btpAnm {
    /* 8000D54C */ void init(J3DMaterialTable*, J3DAnmTexPattern*, int, int, f32, s16, s16);
    /* 8000D5E8 */ void entry(J3DMaterialTable*, s16);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct daPy_py_c {
    /* 80CE673C */ void getLeftHandPos() const;
};

struct daObj_SSDrink_c {
    /* 80CE4F78 */ ~daObj_SSDrink_c();
    /* 80CE51C8 */ void create();
    /* 80CE53EC */ void CreateHeap();
    /* 80CE55F0 */ void Delete();
    /* 80CE5624 */ void Execute();
    /* 80CE5858 */ void Draw();
    /* 80CE59DC */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CE59FC */ void setSoldOut();
    /* 80CE5A50 */ void getResName();
    /* 80CE5A60 */ void getTypeFromParam();
    /* 80CE5B0C */ void getSwitchFromParam();
    /* 80CE5B18 */ void getCapacityFromParam();
    /* 80CE5B3C */ void getFlowNodeNum();
    /* 80CE5B74 */ void getValue();
    /* 80CE5B80 */ void restart();
    /* 80CE5BF0 */ void initialize();
    /* 80CE5DB0 */ void checkProcess(int (daObj_SSDrink_c::*)(void*));
    /* 80CE5DDC */ void setProcess(int (daObj_SSDrink_c::*)(void*));
    /* 80CE5EC8 */ void setParam();
    /* 80CE5FE4 */ void setEnvTevColor();
    /* 80CE6040 */ void setRoomNo();
    /* 80CE6084 */ void setMtx();
    /* 80CE60E8 */ void setAttnPos();
    /* 80CE6170 */ void animeEntry();
    /* 80CE61E4 */ void animePlay();
    /* 80CE622C */ void chkEvent();
    /* 80CE63AC */ void orderEvent();
    /* 80CE644C */ bool wait(void*);
    /* 80CE6454 */ void talk(void*);
    /* 80CE6514 */ void drink(void*);
};

struct daObj_SSBase_c {
    /* 8015E3F8 */ daObj_SSBase_c();
    /* 8015E450 */ ~daObj_SSBase_c();
    /* 8015E4B0 */ void getProcessID();
};

struct daMyna_c {
    /* 809487EC */ void soldoutItem(unsigned int);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
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
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 800487F0 */ void ChkPresentEnd();
};

struct _GXTexObj {};

struct dDlst_shadowControl_c {
    /* 80055F84 */ void setSimple(cXyz*, f32, f32, cXyz*, s16, f32, _GXTexObj*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
    /* 80CE6858 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80CE68B4 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F40 */ void SetWallR(f32);
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80CE67E8 */ ~dBgS_AcchCir();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS {
    /* 80074BE8 */ void GetPolyColor(cBgS_PolyInfo const&);
    /* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGPla {
    /* 80CE5994 */ ~cM3dGPla();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80CE6758 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80CE67A0 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80CE66AC */ ~cCcD_GStts();
};

struct cBgS_GndChk {
    /* 80267C1C */ cBgS_GndChk();
    /* 80267C94 */ ~cBgS_GndChk();
};

struct cBgS {
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80CE55A8 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daObj_SSDrink_Create(void*);
static void daObj_SSDrink_Delete(void*);
static void daObj_SSDrink_Execute(void*);
static void daObj_SSDrink_Draw(void*);
static bool daObj_SSDrink_IsDelete(void*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_OBJ_SSDRINK[12];

extern "C" void __dt__15daObj_SSDrink_cFv();
extern "C" void create__15daObj_SSDrink_cFv();
extern "C" void CreateHeap__15daObj_SSDrink_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Delete__15daObj_SSDrink_cFv();
extern "C" void Execute__15daObj_SSDrink_cFv();
extern "C" void Draw__15daObj_SSDrink_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void createHeapCallBack__15daObj_SSDrink_cFP10fopAc_ac_c();
extern "C" void setSoldOut__15daObj_SSDrink_cFv();
extern "C" void getResName__15daObj_SSDrink_cFv();
extern "C" void getTypeFromParam__15daObj_SSDrink_cFv();
extern "C" void getSwitchFromParam__15daObj_SSDrink_cFv();
extern "C" void getCapacityFromParam__15daObj_SSDrink_cFv();
extern "C" void getFlowNodeNum__15daObj_SSDrink_cFv();
extern "C" void getValue__15daObj_SSDrink_cFv();
extern "C" void restart__15daObj_SSDrink_cFv();
extern "C" void initialize__15daObj_SSDrink_cFv();
extern "C" void checkProcess__15daObj_SSDrink_cFM15daObj_SSDrink_cFPCvPvPv_i();
extern "C" void setProcess__15daObj_SSDrink_cFM15daObj_SSDrink_cFPCvPvPv_i();
extern "C" void setParam__15daObj_SSDrink_cFv();
extern "C" void setEnvTevColor__15daObj_SSDrink_cFv();
extern "C" void setRoomNo__15daObj_SSDrink_cFv();
extern "C" void setMtx__15daObj_SSDrink_cFv();
extern "C" void setAttnPos__15daObj_SSDrink_cFv();
extern "C" void animeEntry__15daObj_SSDrink_cFv();
extern "C" void animePlay__15daObj_SSDrink_cFv();
extern "C" void chkEvent__15daObj_SSDrink_cFv();
extern "C" void orderEvent__15daObj_SSDrink_cFv();
extern "C" bool wait__15daObj_SSDrink_cFPv();
extern "C" void talk__15daObj_SSDrink_cFPv();
extern "C" void drink__15daObj_SSDrink_cFPv();
extern "C" static void daObj_SSDrink_Create__FPv();
extern "C" static void daObj_SSDrink_Delete__FPv();
extern "C" static void daObj_SSDrink_Execute__FPv();
extern "C" static void daObj_SSDrink_Draw__FPv();
extern "C" static bool daObj_SSDrink_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_obj_ss_drink_cpp();
extern "C" static void func_80CE672C();
extern "C" static void func_80CE6734();
extern "C" void getLeftHandPos__9daPy_py_cCFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_OBJ_SSDRINK[12];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_posMoveF(fopAc_ac_c*, cXyz const*);
void fopAcM_setEffectMtx(fopAc_ac_c const*, J3DModelData const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dMsgObject_addTotalPrice(s16);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern u8 const data_80CE692C[4];

extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void setSimple__21dDlst_shadowControl_cFP4cXyzffP4cXyzsfP9_GXTexObj();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void __ct__14daObj_SSBase_cFv();
extern "C" void __dt__14daObj_SSBase_cFv();
extern "C" void getProcessID__14daObj_SSBase_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dMsgObject_addTotalPrice__Fs();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_test();
extern "C" void __ptmf_cmpr();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" void soldoutItem__8daMyna_cFUi();
extern u8 const data_80CE692C[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CE6930-80CE6960 0030+00 s=5 e=0 z=0  None .rodata    mCcDObjInfo__15daObj_SSDrink_c */
SECTION_RODATA static u8 const mCcDObjInfo__15daObj_SSDrink_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CE6960-80CE6964 0004+00 s=3 e=0 z=0  None .rodata    @4000 */
SECTION_RODATA static u32 const lit_4000 = 0x3F800000;

/* 80CE6964-80CE6968 0004+00 s=2 e=0 z=0  None .rodata    @4057 */
SECTION_RODATA static u32 const lit_4057 = 0xCE6E6B28;

/* 80CE6968-80CE696C 0004+00 s=2 e=0 z=0  None .rodata    @4058 */
SECTION_RODATA static u32 const lit_4058 = 0x41200000;

/* 80CE696C-80CE6970 0004+00 s=2 e=0 z=0  None .rodata    @4059 */
SECTION_RODATA static u32 const lit_4059 = 0x41F00000;

/* 80CE6970-80CE6974 0004+00 s=1 e=0 z=0  None .rodata    @4204 */
SECTION_RODATA static u32 const lit_4204 = 0xC1F00000;

/* 80CE6974-80CE6978 0004+00 s=1 e=0 z=0  None .rodata    @4205 */
SECTION_RODATA static u32 const lit_4205 = 0xC1700000;

/* 80CE6978-80CE697C 0004+00 s=1 e=0 z=0  None .rodata    @4206 */
SECTION_RODATA static u32 const lit_4206 = 0x42340000;

/* 80CE697C-80CE6980 0004+00 s=2 e=0 z=0  None .rodata    @4207 */
SECTION_RODATA static u32 const lit_4207 = 0x41C00000;

/* 80CE6980-80CE6984 0004+00 s=2 e=0 z=0  None .rodata    @4208 */
SECTION_RODATA static u32 const lit_4208 = 0x41400000;

/* 80CE6984-80CE6988 0004+00 s=1 e=0 z=0  None .rodata    @4257 */
SECTION_RODATA static u32 const lit_4257 = 0xC0A00000;

/* 80CE6988-80CE6990 0008+00 s=1 e=0 z=0  None .rodata    @4320 */
SECTION_RODATA static u8 const lit_4320[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CE6990-80CE6998 0008+00 s=2 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CE6990 = "Obj_btl";
#pragma pop

/* 80CE6998-80CE69C4 002C+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80CE6998[44] = {
    0x61, 0x6C, 0x5F, 0x62, 0x6F, 0x74, 0x74, 0x6C, 0x65, 0x2E, 0x62, 0x6D, 0x64, 0x00, 0x61,
    0x6C, 0x5F, 0x62, 0x6F, 0x74, 0x74, 0x6C, 0x65, 0x2E, 0x62, 0x74, 0x70, 0x00, 0x61, 0x6C,
    0x5F, 0x62, 0x6F, 0x74, 0x74, 0x6C, 0x65, 0x2E, 0x62, 0x72, 0x6B, 0x00, 0x00, 0x00,
};

/* 80CE69C4-80CE69D0 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CE69D0-80CE69E4 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80CE69E4-80CE69E8 0004+00 s=2 e=0 z=0  None .data      l_resFileName */
SECTION_DATA static void* l_resFileName = (void*)&stringBase0;

/* 80CE69E8-80CE69EC 0004+00 s=2 e=0 z=0  None .data      l_bmdName */
SECTION_DATA static void* l_bmdName = (void*)&data_80CE6998;

/* 80CE69EC-80CE6A30 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__15daObj_SSDrink_c */
SECTION_DATA static u8 mCcDCyl__15daObj_SSDrink_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CE6A30-80CE6A3C 000C+00 s=1 e=0 z=0  None .data      @4020 */
SECTION_DATA static void* lit_4020[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drink__15daObj_SSDrink_cFPv,
};

/* 80CE6A3C-80CE6A48 000C+00 s=1 e=0 z=0  None .data      @4063 */
SECTION_DATA static void* lit_4063[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drink__15daObj_SSDrink_cFPv,
};

/* 80CE6A48-80CE6A54 000C+00 s=1 e=0 z=0  None .data      @4164 */
SECTION_DATA static void* lit_4164[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__15daObj_SSDrink_cFPv,
};

/* 80CE6A54-80CE6A60 000C+00 s=1 e=0 z=0  None .data      @4233 */
SECTION_DATA static void* lit_4233[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drink__15daObj_SSDrink_cFPv,
};

/* 80CE6A60-80CE6A6C 000C+00 s=1 e=0 z=0  None .data      @4284 */
SECTION_DATA static void* lit_4284[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__15daObj_SSDrink_cFPv,
};

/* 80CE6A6C-80CE6A78 000C+00 s=1 e=0 z=0  None .data      @4334 */
SECTION_DATA static void* lit_4334[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drink__15daObj_SSDrink_cFPv,
};

/* 80CE6A78-80CE6A84 000C+00 s=1 e=0 z=0  None .data      @4344 */
SECTION_DATA static void* lit_4344[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__15daObj_SSDrink_cFPv,
};

/* 80CE6A84-80CE6A90 000C+00 s=1 e=0 z=0  None .data      @4352 */
SECTION_DATA static void* lit_4352[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__15daObj_SSDrink_cFPv,
};

/* 80CE6A90-80CE6A9C 000C+00 s=1 e=0 z=0  None .data      @4405 */
SECTION_DATA static void* lit_4405[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)drink__15daObj_SSDrink_cFPv,
};

/* 80CE6A9C-80CE6AA8 000C+00 s=1 e=0 z=0  None .data      @4432 */
SECTION_DATA static void* lit_4432[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__15daObj_SSDrink_cFPv,
};

/* 80CE6AA8-80CE6AC8 0020+00 s=1 e=0 z=0  None .data      daObj_SSDrink_MethodTable */
SECTION_DATA static void* daObj_SSDrink_MethodTable[8] = {
    (void*)daObj_SSDrink_Create__FPv,
    (void*)daObj_SSDrink_Delete__FPv,
    (void*)daObj_SSDrink_Execute__FPv,
    (void*)daObj_SSDrink_IsDelete__FPv,
    (void*)daObj_SSDrink_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CE6AC8-80CE6AF8 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_SSDRINK */
SECTION_DATA void* g_profile_OBJ_SSDRINK[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01200000, (void*)&g_fpcLf_Method,
    (void*)0x00000B10, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00440000, (void*)&daObj_SSDrink_MethodTable,
    (void*)0x00064100, (void*)0x050E0000,
};

/* 80CE6AF8-80CE6B04 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGPla */
SECTION_DATA static void* __vt__8cM3dGPla[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80CE6B04-80CE6B10 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CE6B10-80CE6B34 0024+00 s=3 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_80CE6734,
    (void*)NULL, (void*)NULL, (void*)func_80CE672C,
};

/* 80CE6B34-80CE6B40 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CE6B40-80CE6B4C 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CE6B4C-80CE6B58 000C+00 s=2 e=0 z=0  None .data      __vt__12dBgS_AcchCir */
SECTION_DATA static void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80CE6B58-80CE6B64 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CE6B64-80CE6B70 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CE6B70-80CE6B84 0014+00 s=2 e=0 z=0  None .data      __vt__15daObj_SSDrink_c */
SECTION_DATA static void* __vt__15daObj_SSDrink_c[5] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__15daObj_SSDrink_cFv,
    (void*)setSoldOut__15daObj_SSDrink_cFv,
    (void*)getProcessID__14daObj_SSBase_cFv,
};

/* 80CE4F78-80CE51C8 0250+00 s=1 e=0 z=0  None .text      __dt__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_SSDrink_c::~daObj_SSDrink_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE51C8-80CE53EC 0224+00 s=1 e=0 z=0  None .text      create__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/create__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE53EC-80CE55A8 01BC+00 s=1 e=0 z=0  None .text      CreateHeap__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/CreateHeap__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE55A8-80CE55F0 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80CE55F0-80CE5624 0034+00 s=1 e=0 z=0  None .text      Delete__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/Delete__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5624-80CE5858 0234+00 s=2 e=0 z=0  None .text      Execute__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/Execute__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5858-80CE5994 013C+00 s=1 e=0 z=0  None .text      Draw__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/Draw__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5994-80CE59DC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80CE59DC-80CE59FC 0020+00 s=1 e=0 z=0  None .text
 * createHeapCallBack__15daObj_SSDrink_cFP10fopAc_ac_c          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/createHeapCallBack__15daObj_SSDrink_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80CE59FC-80CE5A50 0054+00 s=1 e=0 z=0  None .text      setSoldOut__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::setSoldOut() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/setSoldOut__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5A50-80CE5A60 0010+00 s=4 e=0 z=0  None .text      getResName__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::getResName() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/getResName__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5A60-80CE5B0C 00AC+00 s=1 e=0 z=0  None .text      getTypeFromParam__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::getTypeFromParam() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/getTypeFromParam__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5B0C-80CE5B18 000C+00 s=1 e=0 z=0  None .text      getSwitchFromParam__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::getSwitchFromParam() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/getSwitchFromParam__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5B18-80CE5B3C 0024+00 s=1 e=0 z=0  None .text      getCapacityFromParam__15daObj_SSDrink_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::getCapacityFromParam() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/getCapacityFromParam__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5B3C-80CE5B74 0038+00 s=2 e=0 z=0  None .text      getFlowNodeNum__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::getFlowNodeNum() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/getFlowNodeNum__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5B74-80CE5B80 000C+00 s=1 e=0 z=0  None .text      getValue__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::getValue() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/getValue__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5B80-80CE5BF0 0070+00 s=1 e=0 z=0  None .text      restart__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::restart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/restart__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5BF0-80CE5DB0 01C0+00 s=1 e=0 z=0  None .text      initialize__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::initialize() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/initialize__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5DB0-80CE5DDC 002C+00 s=6 e=0 z=0  None .text
 * checkProcess__15daObj_SSDrink_cFM15daObj_SSDrink_cFPCvPvPv_i */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::checkProcess(int (daObj_SSDrink_c::*)(void*)) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/checkProcess__15daObj_SSDrink_cFM15daObj_SSDrink_cFPCvPvPv_i.s"
}
#pragma pop

/* 80CE5DDC-80CE5EC8 00EC+00 s=4 e=0 z=0  None .text
 * setProcess__15daObj_SSDrink_cFM15daObj_SSDrink_cFPCvPvPv_i   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::setProcess(int (daObj_SSDrink_c::*)(void*)) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/setProcess__15daObj_SSDrink_cFM15daObj_SSDrink_cFPCvPvPv_i.s"
}
#pragma pop

/* 80CE5EC8-80CE5FE4 011C+00 s=1 e=0 z=0  None .text      setParam__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::setParam() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/setParam__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE5FE4-80CE6040 005C+00 s=2 e=0 z=0  None .text      setEnvTevColor__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::setEnvTevColor() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/setEnvTevColor__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE6040-80CE6084 0044+00 s=2 e=0 z=0  None .text      setRoomNo__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::setRoomNo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/setRoomNo__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE6084-80CE60E8 0064+00 s=1 e=0 z=0  None .text      setMtx__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/setMtx__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE60E8-80CE6170 0088+00 s=1 e=0 z=0  None .text      setAttnPos__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::setAttnPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/setAttnPos__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE6170-80CE61E4 0074+00 s=1 e=0 z=0  None .text      animeEntry__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::animeEntry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/animeEntry__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE61E4-80CE622C 0048+00 s=1 e=0 z=0  None .text      animePlay__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::animePlay() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/animePlay__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE622C-80CE63AC 0180+00 s=1 e=0 z=0  None .text      chkEvent__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::chkEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/chkEvent__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE63AC-80CE644C 00A0+00 s=1 e=0 z=0  None .text      orderEvent__15daObj_SSDrink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::orderEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/orderEvent__15daObj_SSDrink_cFv.s"
}
#pragma pop

/* 80CE644C-80CE6454 0008+00 s=2 e=0 z=0  None .text      wait__15daObj_SSDrink_cFPv */
bool daObj_SSDrink_c::wait(void* param_0) {
    return true;
}

/* 80CE6454-80CE6514 00C0+00 s=3 e=0 z=0  None .text      talk__15daObj_SSDrink_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::talk(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/talk__15daObj_SSDrink_cFPv.s"
}
#pragma pop

/* 80CE6514-80CE6624 0110+00 s=5 e=0 z=0  None .text      drink__15daObj_SSDrink_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSDrink_c::drink(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/drink__15daObj_SSDrink_cFPv.s"
}
#pragma pop

/* 80CE6624-80CE6644 0020+00 s=1 e=0 z=0  None .text      daObj_SSDrink_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SSDrink_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/daObj_SSDrink_Create__FPv.s"
}
#pragma pop

/* 80CE6644-80CE6664 0020+00 s=1 e=0 z=0  None .text      daObj_SSDrink_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SSDrink_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/daObj_SSDrink_Delete__FPv.s"
}
#pragma pop

/* 80CE6664-80CE6684 0020+00 s=1 e=0 z=0  None .text      daObj_SSDrink_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SSDrink_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/daObj_SSDrink_Execute__FPv.s"
}
#pragma pop

/* 80CE6684-80CE66A4 0020+00 s=1 e=0 z=0  None .text      daObj_SSDrink_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SSDrink_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/daObj_SSDrink_Draw__FPv.s"
}
#pragma pop

/* 80CE66A4-80CE66AC 0008+00 s=1 e=0 z=0  None .text      daObj_SSDrink_IsDelete__FPv */
static bool daObj_SSDrink_IsDelete(void* param_0) {
    return true;
}

/* 80CE66AC-80CE66F4 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80CE66F4-80CE672C 0038+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_ss_drink_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_ss_drink_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__sinit_d_a_obj_ss_drink_cpp.s"
}
#pragma pop

/* 80CE672C-80CE6734 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80CE672C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/func_80CE672C.s"
}
#pragma pop

/* 80CE6734-80CE673C 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80CE6734() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/func_80CE6734.s"
}
#pragma pop

/* 80CE673C-80CE6758 001C+00 s=2 e=0 z=0  None .text      getLeftHandPos__9daPy_py_cCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::getLeftHandPos() const {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/getLeftHandPos__9daPy_py_cCFv.s"
}
#pragma pop

/* 80CE6758-80CE67A0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80CE67A0-80CE67E8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CE67E8-80CE6858 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80CE6858-80CE68B4 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CE68B4-80CE6924 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_drink/d_a_obj_ss_drink/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop
