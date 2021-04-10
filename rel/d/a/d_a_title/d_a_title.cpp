//
// Generated By: dol2asm
// Translation Unit: d_a_title
//

#include "rel/d/a/d_a_title/d_a_title.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct scene_class {};

struct request_of_phase_process_class {};

struct mDoRst {
    static u8 mResetData[4 + 4 /* padding */];
};

struct mDoGph_gInf_c {
    static u8 mFader[4];
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

struct J3DAnmColor {};

struct mDoExt_bpkAnm {
    /* 8000D47C */ void init(J3DMaterialTable*, J3DAnmColor*, int, int, f32, s16, s16);
    /* 8000D518 */ void entry(J3DMaterialTable*, f32);
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

struct JKRHeap {
    /* 802CE438 */ void becomeCurrentHeap();
    /* 802CE448 */ void destroy();
};

struct mDoDvdThd_mountArchive_c {
    /* 80015E14 */ void create(char const*, u8, JKRHeap*);
};

struct mDoCPd_c {
    static u8 m_cpadInfo[256];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daTitle_c {
    /* 80D66B54 */ void CreateHeap();
    /* 80D66CDC */ void create();
    /* 80D66E7C */ void createHeapCallBack(fopAc_ac_c*);
    /* 80D66E9C */ void Execute();
    /* 80D66F34 */ void KeyWaitAnm();
    /* 80D67010 */ void loadWait_init();
    /* 80D6701C */ void loadWait_proc();
    /* 80D672E0 */ void logoDispWaitInit();
    /* 80D672EC */ void logoDispWait();
    /* 80D67350 */ void logoDispAnmInit();
    /* 80D6737C */ void logoDispAnm();
    /* 80D674A8 */ void keyWaitInit();
    /* 80D674B4 */ void keyWait();
    /* 80D67544 */ void nextScene_init();
    /* 80D67550 */ void nextScene_proc();
    /* 80D675EC */ void fastLogoDispInit();
    /* 80D676AC */ void fastLogoDisp();
    /* 80D676F4 */ void getDemoPrm();
    /* 80D67768 */ void Draw();
    /* 80D6786C */ void Delete();
};

struct daTit_HIO_c {
    /* 80D66B0C */ daTit_HIO_c();
    /* 80D67A08 */ ~daTit_HIO_c();
};

struct dStage_roomControl_c {
    static u8 mProcID[4];
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dMenu_Collect3D_c {
    static f32 mViewOffsetY[1 + 1 /* padding */];
};

struct dDlst_base_c {
    /* 80D67A04 */ void draw();
};

struct dDlst_list_c {
    /* 80056794 */ void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct dDlst_daTitle_c {
    /* 80D679C8 */ void draw();
    /* 80D67B30 */ ~dDlst_daTitle_c();
};

struct dDemo_object_c {
    /* 80039088 */ void getActor(u8);
};

struct dDemo_c {
    static u8 m_object[4];
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

namespace JStudio {
namespace stb {
struct data {
    struct TParse_TParagraph_data {
        struct TData {};

        /* 80289A80 */ void getData(JStudio::stb::data::TParse_TParagraph_data::TData*) const;
    };
};

};  // namespace stb

};  // namespace JStudio

struct JKRExpHeap {
    /* 802CEE2C */ void create(u32, JKRHeap*, bool);
};

struct JKRArchive {};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D67B78 */ ~J3DFrameCtrl();
};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct CPaneMgrAlpha {
    /* 802553FC */ CPaneMgrAlpha(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 80255878 */ void alphaAnime(s16, u8, u8, u8);
    /* 80255964 */ void alphaAnimeLoop(s16, u8, u8, u8);
};

//
// Forward References:
//

extern "C" void __ct__11daTit_HIO_cFv();
extern "C" void CreateHeap__9daTitle_cFv();
extern "C" void create__9daTitle_cFv();
extern "C" void createHeapCallBack__9daTitle_cFP10fopAc_ac_c();
extern "C" void Execute__9daTitle_cFv();
extern "C" void KeyWaitAnm__9daTitle_cFv();
extern "C" void loadWait_init__9daTitle_cFv();
extern "C" void loadWait_proc__9daTitle_cFv();
extern "C" void logoDispWaitInit__9daTitle_cFv();
extern "C" void logoDispWait__9daTitle_cFv();
extern "C" void logoDispAnmInit__9daTitle_cFv();
extern "C" void logoDispAnm__9daTitle_cFv();
extern "C" void keyWaitInit__9daTitle_cFv();
extern "C" void keyWait__9daTitle_cFv();
extern "C" void nextScene_init__9daTitle_cFv();
extern "C" void nextScene_proc__9daTitle_cFv();
extern "C" void fastLogoDispInit__9daTitle_cFv();
extern "C" void fastLogoDisp__9daTitle_cFv();
extern "C" void getDemoPrm__9daTitle_cFv();
extern "C" void Draw__9daTitle_cFv();
extern "C" void Delete__9daTitle_cFv();
extern "C" static void daTitle_Draw__FP9daTitle_c();
extern "C" static void daTitle_Execute__FP9daTitle_c();
extern "C" static void daTitle_Delete__FP9daTitle_c();
extern "C" static void daTitle_Create__FP10fopAc_ac_c();
extern "C" void draw__15dDlst_daTitle_cFv();
extern "C" void draw__12dDlst_base_cFv();
extern "C" void __dt__11daTit_HIO_cFv();
extern "C" void __sinit_d_a_title_cpp();
extern "C" void __dt__15dDlst_daTitle_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" extern char const* const d_a_title__stringBase0;

//
// External References:
//

extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bpkAnmFP16J3DMaterialTableP11J3DAnmColoriifss();
extern "C" void entry__13mDoExt_bpkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_getGameHeap__Fv();
extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void fopScnM_SearchByID__FUi();
extern "C" void fopScnM_ChangeReq__FP11scene_classssUs();
extern "C" void fopMsgM_messageGet__FPcUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getActor__14dDemo_object_cFUc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void __ct__13CPaneMgrAlphaFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void alphaAnime__13CPaneMgrAlphaFsUcUcUc();
extern "C" void alphaAnimeLoop__13CPaneMgrAlphaFsUcUcUc();
extern "C" void
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void becomeCurrentHeap__7JKRHeapFv();
extern "C" void destroy__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void create__10JKRExpHeapFUlP7JKRHeapb();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 g_blackColor;
extern "C" f32 mViewOffsetY__17dMenu_Collect3D_c[1 + 1 /* padding */];
extern "C" u8 mFader__13mDoGph_gInf_c[4];
extern "C" u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" u8 mProcID__20dStage_roomControl_c[4];
extern "C" u8 m_object__7dDemo_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D67BD4-80D67BE0 000000 000C+00 2/2 0/0 0/0 .rodata          @3772 */
SECTION_RODATA static u8 const lit_3772[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D67BD4, &lit_3772);

/* 80D67BE0-80D67BE8 00000C 0006+02 3/3 0/0 0/0 .rodata          l_arcName */
SECTION_RODATA static u8 const l_arcName[6 + 2 /* padding */] = {
    0x54,
    0x69,
    0x74,
    0x6C,
    0x65,
    0x00,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D67BE0, &l_arcName);

/* 80D67BE8-80D67BEC 000014 0004+00 3/4 0/0 0/0 .rodata          @4003 */
SECTION_RODATA static f32 const lit_4003 = 1.0f;
COMPILER_STRIP_GATE(0x80D67BE8, &lit_4003);

/* 80D67BEC-80D67BF0 000018 0004+00 0/1 0/0 0/0 .rodata          @4004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4004 = 303.0f;
COMPILER_STRIP_GATE(0x80D67BEC, &lit_4004);
#pragma pop

/* 80D67BF0-80D67BF4 00001C 0004+00 0/1 0/0 0/0 .rodata          @4005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4005 = 347.0f;
COMPILER_STRIP_GATE(0x80D67BF0, &lit_4005);
#pragma pop

/* 80D67C40-80D67C4C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D67C4C-80D67C60 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80D67C60-80D67C6C -00001 000C+00 0/1 0/0 0/0 .data            @4031 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4031[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadWait_proc__9daTitle_cFv,
};
#pragma pop

/* 80D67C6C-80D67C78 -00001 000C+00 0/1 0/0 0/0 .data            @4032 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4032[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)logoDispWait__9daTitle_cFv,
};
#pragma pop

/* 80D67C78-80D67C84 -00001 000C+00 0/1 0/0 0/0 .data            @4033 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4033[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)logoDispAnm__9daTitle_cFv,
};
#pragma pop

/* 80D67C84-80D67C90 -00001 000C+00 0/1 0/0 0/0 .data            @4034 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4034[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)keyWait__9daTitle_cFv,
};
#pragma pop

/* 80D67C90-80D67C9C -00001 000C+00 0/1 0/0 0/0 .data            @4035 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4035[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)nextScene_proc__9daTitle_cFv,
};
#pragma pop

/* 80D67C9C-80D67CA8 -00001 000C+00 0/1 0/0 0/0 .data            @4036 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4036[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)fastLogoDisp__9daTitle_cFv,
};
#pragma pop

/* 80D67CA8-80D67CF0 000068 0048+00 1/2 0/0 0/0 .data            daTitleProc */
SECTION_DATA static u8 daTitleProc[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D67CF0-80D67D10 -00001 0020+00 1/0 0/0 0/0 .data            l_daTitle_Method */
SECTION_DATA static void* l_daTitle_Method[8] = {
    (void*)daTitle_Create__FP10fopAc_ac_c,
    (void*)daTitle_Delete__FP9daTitle_c,
    (void*)daTitle_Execute__FP9daTitle_c,
    (void*)NULL,
    (void*)daTitle_Draw__FP9daTitle_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D67D10-80D67D40 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TITLE */
SECTION_DATA extern void* g_profile_TITLE[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02E10000, (void*)&g_fpcLf_Method,
    (void*)0x00000608, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x000A0000, (void*)&l_daTitle_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80D67D40-80D67D50 000100 0010+00 2/2 0/0 0/0 .data            __vt__15dDlst_daTitle_c */
SECTION_DATA extern void* __vt__15dDlst_daTitle_c[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__15dDlst_daTitle_cFv,
    (void*)__dt__15dDlst_daTitle_cFv,
};

/* 80D67D50-80D67D5C 000110 000C+00 1/1 0/0 0/0 .data            __vt__12dDlst_base_c */
SECTION_DATA extern void* __vt__12dDlst_base_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__12dDlst_base_cFv,
};

/* 80D67D5C-80D67D68 00011C 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D67D68-80D67D74 000128 000C+00 2/2 0/0 0/0 .data            __vt__11daTit_HIO_c */
SECTION_DATA extern void* __vt__11daTit_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daTit_HIO_cFv,
};

/* 80D66B0C-80D66B54 0000EC 0048+00 1/1 0/0 0/0 .text            __ct__11daTit_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTit_HIO_c::daTit_HIO_c() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/__ct__11daTit_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D67BF4-80D67BF8 000020 0004+00 1/1 0/0 0/0 .rodata          @4030 */
SECTION_RODATA static f32 const lit_4030 = 2.0f;
COMPILER_STRIP_GATE(0x80D67BF4, &lit_4030);

/* 80D66B54-80D66CDC 000134 0188+00 1/1 0/0 0/0 .text            CreateHeap__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/CreateHeap__9daTitle_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D67C10-80D67C10 00003C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D67C10 = "/res/Layout/Title2D.arc";
#pragma pop

/* 80D67D80-80D67D8C 000008 000C+00 1/1 0/0 0/0 .bss             @3998 */
static u8 lit_3998[12];

/* 80D67D8C-80D67DA8 000014 001C+00 4/4 0/0 0/0 .bss             g_daTitHIO */
static u8 g_daTitHIO[28];

/* 80D66CDC-80D66E7C 0002BC 01A0+00 1/1 0/0 0/0 .text            create__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/create__9daTitle_cFv.s"
}
#pragma pop

/* 80D66E7C-80D66E9C 00045C 0020+00 1/1 0/0 0/0 .text createHeapCallBack__9daTitle_cFP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/createHeapCallBack__9daTitle_cFP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D67BF8-80D67BFC 000024 0004+00 3/4 0/0 0/0 .rodata          @4139 */
SECTION_RODATA static u8 const lit_4139[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D67BF8, &lit_4139);

/* 80D66E9C-80D66F34 00047C 0098+00 1/1 0/0 0/0 .text            Execute__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::Execute() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/Execute__9daTitle_cFv.s"
}
#pragma pop

/* 80D66F34-80D67010 000514 00DC+00 1/1 0/0 0/0 .text            KeyWaitAnm__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::KeyWaitAnm() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/KeyWaitAnm__9daTitle_cFv.s"
}
#pragma pop

/* 80D67010-80D6701C 0005F0 000C+00 1/1 0/0 0/0 .text            loadWait_init__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::loadWait_init() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/loadWait_init__9daTitle_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D67C10-80D67C10 00003C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D67C28 = "zelda_press_start.blo";
SECTION_DEAD static char const* const stringBase_80D67C3E = "";
#pragma pop

/* 80D6701C-80D672E0 0005FC 02C4+00 1/0 0/0 0/0 .text            loadWait_proc__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::loadWait_proc() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/loadWait_proc__9daTitle_cFv.s"
}
#pragma pop

/* 80D672E0-80D672EC 0008C0 000C+00 1/1 0/0 0/0 .text            logoDispWaitInit__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::logoDispWaitInit() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/logoDispWaitInit__9daTitle_cFv.s"
}
#pragma pop

/* 80D672EC-80D67350 0008CC 0064+00 1/0 0/0 0/0 .text            logoDispWait__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::logoDispWait() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/logoDispWait__9daTitle_cFv.s"
}
#pragma pop

/* 80D67350-80D6737C 000930 002C+00 1/1 0/0 0/0 .text            logoDispAnmInit__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::logoDispAnmInit() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/logoDispAnmInit__9daTitle_cFv.s"
}
#pragma pop

/* 80D6737C-80D674A8 00095C 012C+00 1/0 0/0 0/0 .text            logoDispAnm__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::logoDispAnm() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/logoDispAnm__9daTitle_cFv.s"
}
#pragma pop

/* 80D674A8-80D674B4 000A88 000C+00 2/2 0/0 0/0 .text            keyWaitInit__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::keyWaitInit() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/keyWaitInit__9daTitle_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D67BFC-80D67C04 000028 0004+04 1/2 0/0 0/0 .rodata          @4287 */
SECTION_RODATA static f32 const lit_4287[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D67BFC, &lit_4287);

/* 80D674B4-80D67544 000A94 0090+00 1/0 0/0 0/0 .text            keyWait__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::keyWait() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/keyWait__9daTitle_cFv.s"
}
#pragma pop

/* 80D67544-80D67550 000B24 000C+00 1/1 0/0 0/0 .text            nextScene_init__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::nextScene_init() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/nextScene_init__9daTitle_cFv.s"
}
#pragma pop

/* 80D67550-80D675EC 000B30 009C+00 1/0 0/0 0/0 .text            nextScene_proc__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::nextScene_proc() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/nextScene_proc__9daTitle_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D67C04-80D67C0C 000030 0008+00 1/1 0/0 0/0 .rodata          @4337 */
SECTION_RODATA static u8 const lit_4337[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D67C04, &lit_4337);

/* 80D675EC-80D676AC 000BCC 00C0+00 1/1 0/0 0/0 .text            fastLogoDispInit__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::fastLogoDispInit() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/fastLogoDispInit__9daTitle_cFv.s"
}
#pragma pop

/* 80D676AC-80D676F4 000C8C 0048+00 1/0 0/0 0/0 .text            fastLogoDisp__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::fastLogoDisp() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/fastLogoDisp__9daTitle_cFv.s"
}
#pragma pop

/* 80D676F4-80D67768 000CD4 0074+00 1/1 0/0 0/0 .text            getDemoPrm__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::getDemoPrm() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/getDemoPrm__9daTitle_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D67C0C-80D67C10 000038 0004+00 0/1 0/0 0/0 .rodata          @4453 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4453 = -430.0f;
COMPILER_STRIP_GATE(0x80D67C0C, &lit_4453);
#pragma pop

/* 80D67768-80D6786C 000D48 0104+00 1/1 0/0 0/0 .text            Draw__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::Draw() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/Draw__9daTitle_cFv.s"
}
#pragma pop

/* 80D6786C-80D67948 000E4C 00DC+00 1/1 0/0 0/0 .text            Delete__9daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTitle_c::Delete() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/Delete__9daTitle_cFv.s"
}
#pragma pop

/* 80D67948-80D67968 000F28 0020+00 1/0 0/0 0/0 .text            daTitle_Draw__FP9daTitle_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTitle_Draw(daTitle_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/daTitle_Draw__FP9daTitle_c.s"
}
#pragma pop

/* 80D67968-80D67988 000F48 0020+00 1/0 0/0 0/0 .text            daTitle_Execute__FP9daTitle_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTitle_Execute(daTitle_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/daTitle_Execute__FP9daTitle_c.s"
}
#pragma pop

/* 80D67988-80D679A8 000F68 0020+00 1/0 0/0 0/0 .text            daTitle_Delete__FP9daTitle_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTitle_Delete(daTitle_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/daTitle_Delete__FP9daTitle_c.s"
}
#pragma pop

/* 80D679A8-80D679C8 000F88 0020+00 1/0 0/0 0/0 .text            daTitle_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTitle_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/daTitle_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D679C8-80D67A04 000FA8 003C+00 1/0 0/0 0/0 .text            draw__15dDlst_daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_daTitle_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/draw__15dDlst_daTitle_cFv.s"
}
#pragma pop

/* 80D67A04-80D67A08 000FE4 0004+00 1/0 0/0 0/0 .text            draw__12dDlst_base_cFv */
void dDlst_base_c::draw() {
    /* empty function */
}

/* 80D67A08-80D67A50 000FE8 0048+00 2/1 0/0 0/0 .text            __dt__11daTit_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTit_HIO_c::~daTit_HIO_c() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/__dt__11daTit_HIO_cFv.s"
}
#pragma pop

/* 80D67A50-80D67B30 001030 00E0+00 0/0 1/0 0/0 .text            __sinit_d_a_title_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_title_cpp() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/__sinit_d_a_title_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80D67A50, __sinit_d_a_title_cpp);
#pragma pop

/* 80D67B30-80D67B78 001110 0048+00 1/0 0/0 0/0 .text            __dt__15dDlst_daTitle_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_daTitle_c::~dDlst_daTitle_c() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/__dt__15dDlst_daTitle_cFv.s"
}
#pragma pop

/* 80D67B78-80D67BC0 001158 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/d_a_title/d_a_title/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80D67C10-80D67C10 00003C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
