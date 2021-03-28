//
// Generated By: dol2asm
// Translation Unit: d_a_obj_mirror_chain
//

#include "rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266CBC */ void outprod(Vec const&) const;
    /* 802670AC */ void isZero() const;
    /* 80C96DAC */ ~cXyz();
    /* 80C9801C */ cXyz();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DAnmTevRegKey {};

struct J3DMaterialTable {
    /* 8032F880 */ void removeTevRegAnimator(J3DAnmTevRegKey*);
};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjMirrorChain_c {
    /* 80C96E40 */ void createHeap();
    /* 80C975EC */ void initBaseMtx();
    /* 80C97618 */ void setBaseMtx();
    /* 80C976B8 */ void draw();
    /* 80C97988 */ void execute();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dScissorEnd_packet_c {
    /* 80C96DE8 */ void draw();
    /* 80C97F3C */ ~dScissorEnd_packet_c();
};

struct dScissorBegin_packet_c {
    /* 80C96698 */ void draw();
    /* 80C97F98 */ ~dScissorBegin_packet_c();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
    /* 80C97CC4 */ ~dBgW();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 8007933C */ ~cBgW();
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DPacket;
struct J3DDrawBuffer {
    /* 8032548C */ void entryImm(J3DPacket*, u16);
};

struct J3DPacket {
    /* 80312750 */ bool entry(J3DDrawBuffer*);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C975A4 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void createSolidHeap(fopAc_ac_c*);
static void daObjMirrorChain_Draw(daObjMirrorChain_c*);
static void daObjMirrorChain_Execute(daObjMirrorChain_c*);
static bool daObjMirrorChain_IsDelete(daObjMirrorChain_c*);
static void daObjMirrorChain_Delete(daObjMirrorChain_c*);
static void daObjMirrorChain_Create(fopAc_ac_c*);
extern "C" extern u8 const data_80C98060[4];
extern "C" extern u8 const data_80C98064[4];
extern "C" extern u8 const data_80C98068[4];
extern "C" extern u8 const data_80C9806C[4];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MirrorChain[12];

extern "C" void draw__22dScissorBegin_packet_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void draw__20dScissorEnd_packet_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void createHeap__18daObjMirrorChain_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void initBaseMtx__18daObjMirrorChain_cFv();
extern "C" void setBaseMtx__18daObjMirrorChain_cFv();
extern "C" static void daObjMirrorChain_Draw__FP18daObjMirrorChain_c();
extern "C" void draw__18daObjMirrorChain_cFv();
extern "C" static void daObjMirrorChain_Execute__FP18daObjMirrorChain_c();
extern "C" void execute__18daObjMirrorChain_cFv();
extern "C" static bool daObjMirrorChain_IsDelete__FP18daObjMirrorChain_c();
extern "C" static void daObjMirrorChain_Delete__FP18daObjMirrorChain_c();
extern "C" void __dt__4dBgWFv();
extern "C" static void daObjMirrorChain_Create__FP10fopAc_ac_c();
extern "C" void __dt__20dScissorEnd_packet_cFv();
extern "C" void __dt__22dScissorBegin_packet_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" extern u8 const data_80C98060[4];
extern "C" extern u8 const data_80C98064[4];
extern "C" extern u8 const data_80C98068[4];
extern "C" extern u8 const data_80C9806C[4];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MirrorChain[12];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__4dBgW[65];
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 __float_max;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __dt__4cBgWFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void outprod__4cXyzCFRC3Vec();
extern "C" void isZero__4cXyzCFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" bool entry__9J3DPacketFP13J3DDrawBuffer();
extern "C" void entryImm__13J3DDrawBufferFP9J3DPacketUs();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSMTXMultVecArray();
extern "C" void PSVECScale();
extern "C" void GXSetScissor();
extern "C" void GXGetScissor();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_22();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" void tan();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__4dBgW[65];
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 __float_max;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C98028-80C9802C 0004+00 s=2 e=0 z=0  None .rodata    @3915 */
SECTION_RODATA static u32 const lit_3915 = 0x3C8EFA35;

/* 80C9802C-80C98030 0004+00 s=1 e=0 z=0  None .rodata    @3916 */
SECTION_RODATA static u32 const lit_3916 = 0x3F000000;

/* 80C98030-80C98034 0004+00 s=4 e=0 z=0  None .rodata    @3917 */
SECTION_RODATA static u8 const lit_3917[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C98034-80C98038 0004+00 s=1 e=0 z=0  None .rodata    @3918 */
SECTION_RODATA static u32 const lit_3918 = 0x40000000;

/* 80C98038-80C9803C 0004+00 s=1 e=0 z=0  None .rodata    @3919 */
SECTION_RODATA static u32 const lit_3919 = 0x43980000;

/* 80C9803C-80C98040 0004+00 s=1 e=0 z=0  None .rodata    @3920 */
SECTION_RODATA static u32 const lit_3920 = 0x44180000;

/* 80C98040-80C98044 0004+00 s=1 e=0 z=0  None .rodata    @3921 */
SECTION_RODATA static u32 const lit_3921 = 0x43600000;

/* 80C98044-80C98048 0004+00 s=1 e=0 z=0  None .rodata    @3922 */
SECTION_RODATA static u32 const lit_3922 = 0x43E00000;

/* 80C98048-80C98050 0004+04 s=3 e=0 z=0  None .rodata    @3923 */
SECTION_RODATA static u32 const lit_3923[1 + 1 /* padding */] = {
    0x3F800000,
    /* padding */
    0x00000000,
};

/* 80C98050-80C98058 0008+00 s=1 e=0 z=0  None .rodata    @3925 */
SECTION_RODATA static u8 const lit_3925[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C98138-80C98148 0010+00 s=2 e=0 z=0  None .bss       l_scissor */
static u8 l_scissor[16];

/* 80C96698-80C96DAC 0714+00 s=1 e=0 z=0  None .text      draw__22dScissorBegin_packet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dScissorBegin_packet_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/draw__22dScissorBegin_packet_cFv.s"
}
#pragma pop

/* 80C96DAC-80C96DE8 003C+00 s=3 e=0 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/__dt__4cXyzFv.s"
}
#pragma pop

/* 80C96DE8-80C96E20 0038+00 s=1 e=0 z=0  None .text      draw__20dScissorEnd_packet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dScissorEnd_packet_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/draw__20dScissorEnd_packet_cFv.s"
}
#pragma pop

/* 80C96E20-80C96E40 0020+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C98058-80C98060 0008+00 s=1 e=0 z=0  None .rodata    @4164 */
SECTION_RODATA static u8 const lit_4164[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C98060-80C98064 0004+00 s=0 e=0 z=0  None .rodata
 * SCISSOR_CENTER_X$localstatic3$draw__18daObjMirrorChain_cFv   */
SECTION_RODATA u8 const data_80C98060[4] = {
    0x44,
    0xE0,
    0xE6,
    0x66,
};

/* 80C98064-80C98068 0004+00 s=0 e=0 z=0  None .rodata
 * SCISSOR_CENTER_Y$localstatic4$draw__18daObjMirrorChain_cFv   */
SECTION_RODATA u8 const data_80C98064[4] = {
    0x45,
    0x95,
    0x5C,
    0xA4,
};

/* 80C98068-80C9806C 0004+00 s=0 e=0 z=0  None .rodata
 * SCISSOR_CENTER_Z$localstatic5$draw__18daObjMirrorChain_cFv   */
SECTION_RODATA u8 const data_80C98068[4] = {
    0xC6,
    0xB3,
    0xE1,
    0x0F,
};

/* 80C9806C-80C98070 0004+00 s=0 e=0 z=0  None .rodata
 * SCISSOR_SIZE$localstatic6$draw__18daObjMirrorChain_cFv       */
SECTION_RODATA u8 const data_80C9806C[4] = {
    0x44,
    0x76,
    0x00,
    0x00,
};

/* 80C98070-80C98074 0004+00 s=1 e=0 z=0  None .rodata    @4494 */
SECTION_RODATA static u32 const lit_4494 = 0xBF800000;

/* 80C98074-80C9807D 0009+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C98074 = "MR-Chain";
#pragma pop

/* 80C98080-80C98084 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C98084-80C980B4 0030+00 s=1 e=0 z=0  None .data
 * l_offsetScissor$localstatic7$draw__18daObjMirrorChain_cFv    */
SECTION_DATA static u8 data_80C98084[48] = {
    0x44, 0xA3, 0x66, 0x66, 0x45, 0xB4, 0x1C, 0xA4, 0xC6, 0xB3, 0xE1, 0x0F, 0x45, 0x0F, 0x33, 0x33,
    0x45, 0xB4, 0x1C, 0xA4, 0xC6, 0xB3, 0xE1, 0x0F, 0x45, 0x0F, 0x33, 0x33, 0x45, 0x95, 0x5C, 0xA4,
    0xC6, 0xB3, 0xE1, 0x0F, 0x44, 0xA3, 0x66, 0x66, 0x45, 0x95, 0x5C, 0xA4, 0xC6, 0xB3, 0xE1, 0x0F,
};

/* 80C980B4-80C980D4 0020+00 s=1 e=0 z=0  None .data      l_daObjMirrorChain_Method */
SECTION_DATA static void* l_daObjMirrorChain_Method[8] = {
    (void*)daObjMirrorChain_Create__FP10fopAc_ac_c,
    (void*)daObjMirrorChain_Delete__FP18daObjMirrorChain_c,
    (void*)daObjMirrorChain_Execute__FP18daObjMirrorChain_c,
    (void*)daObjMirrorChain_IsDelete__FP18daObjMirrorChain_c,
    (void*)daObjMirrorChain_Draw__FP18daObjMirrorChain_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C980D4-80C98104 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MirrorChain */
SECTION_DATA void* g_profile_Obj_MirrorChain[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00B10000, (void*)&g_fpcLf_Method,
    (void*)0x0000078C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02A90000, (void*)&l_daObjMirrorChain_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80C98104-80C98110 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C96E40-80C975A4 0764+00 s=1 e=0 z=0  None .text      createHeap__18daObjMirrorChain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorChain_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/createHeap__18daObjMirrorChain_cFv.s"
}
#pragma pop

/* 80C975A4-80C975EC 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C975EC-80C97618 002C+00 s=1 e=0 z=0  None .text      initBaseMtx__18daObjMirrorChain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorChain_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/initBaseMtx__18daObjMirrorChain_cFv.s"
}
#pragma pop

/* 80C97618-80C97698 0080+00 s=1 e=0 z=0  None .text      setBaseMtx__18daObjMirrorChain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorChain_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/setBaseMtx__18daObjMirrorChain_cFv.s"
}
#pragma pop

/* 80C97698-80C976B8 0020+00 s=1 e=0 z=0  None .text daObjMirrorChain_Draw__FP18daObjMirrorChain_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorChain_Draw(daObjMirrorChain_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/daObjMirrorChain_Draw__FP18daObjMirrorChain_c.s"
}
#pragma pop

/* 80C976B8-80C97968 02B0+00 s=1 e=0 z=0  None .text      draw__18daObjMirrorChain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorChain_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/draw__18daObjMirrorChain_cFv.s"
}
#pragma pop

/* 80C97968-80C97988 0020+00 s=1 e=0 z=0  None .text
 * daObjMirrorChain_Execute__FP18daObjMirrorChain_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorChain_Execute(daObjMirrorChain_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/daObjMirrorChain_Execute__FP18daObjMirrorChain_c.s"
}
#pragma pop

/* 80C97988-80C97BA4 021C+00 s=1 e=0 z=0  None .text      execute__18daObjMirrorChain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorChain_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/execute__18daObjMirrorChain_cFv.s"
}
#pragma pop

/* 80C97BA4-80C97BAC 0008+00 s=1 e=0 z=0  None .text
 * daObjMirrorChain_IsDelete__FP18daObjMirrorChain_c            */
static bool daObjMirrorChain_IsDelete(daObjMirrorChain_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80C98110-80C98124 0014+00 s=3 e=0 z=0  None .data      __vt__20dScissorEnd_packet_c */
SECTION_DATA static void* __vt__20dScissorEnd_packet_c[5] = {
    (void*)NULL,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__20dScissorEnd_packet_cFv,
    (void*)__dt__20dScissorEnd_packet_cFv,
};

/* 80C98124-80C98138 0014+00 s=3 e=0 z=0  None .data      __vt__22dScissorBegin_packet_c */
SECTION_DATA static void* __vt__22dScissorBegin_packet_c[5] = {
    (void*)NULL,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__22dScissorBegin_packet_cFv,
    (void*)__dt__22dScissorBegin_packet_cFv,
};

/* 80C97BAC-80C97CC4 0118+00 s=1 e=0 z=0  None .text
 * daObjMirrorChain_Delete__FP18daObjMirrorChain_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorChain_Delete(daObjMirrorChain_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/daObjMirrorChain_Delete__FP18daObjMirrorChain_c.s"
}
#pragma pop

/* 80C97CC4-80C97D24 0060+00 s=2 e=0 z=0  None .text      __dt__4dBgWFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgW::~dBgW() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/__dt__4dBgWFv.s"
}
#pragma pop

/* 80C97D24-80C97F3C 0218+00 s=1 e=0 z=0  None .text      daObjMirrorChain_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorChain_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/daObjMirrorChain_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C97F3C-80C97F98 005C+00 s=1 e=0 z=0  None .text      __dt__20dScissorEnd_packet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScissorEnd_packet_c::~dScissorEnd_packet_c() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/__dt__20dScissorEnd_packet_cFv.s"
}
#pragma pop

/* 80C97F98-80C9801C 0084+00 s=1 e=0 z=0  None .text      __dt__22dScissorBegin_packet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScissorBegin_packet_c::~dScissorBegin_packet_c() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_chain/d_a_obj_mirror_chain/__dt__22dScissorBegin_packet_cFv.s"
}
#pragma pop

/* 80C9801C-80C98020 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}
