//
// Generated By: dol2asm
// Translation Unit: msg/scrn/d_msg_scrn_explain
//

#include "msg/scrn/d_msg_scrn_explain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoCPd_c {
    static u8 m_cpadInfo[256];
};

struct dMsgString_c {
    /* 80249C20 */ dMsgString_c();
    /* 80249D28 */ ~dMsgString_c();
};

struct STControl {
    /* 8003219C */ void checkTrigger();
    /* 80032524 */ void checkUpTrigger();
    /* 800325A0 */ void checkDownTrigger();
};

struct J2DOrthoGraph {};

struct dMsgScrnExplain_c {
    /* 8023CC88 */ dMsgScrnExplain_c(STControl*, u8, bool, u8);
    /* 8023D538 */ ~dMsgScrnExplain_c();
    /* 8023D7D8 */ void move();
    /* 8023D918 */ void draw(J2DOrthoGraph*);
    /* 8023DAD0 */ void wait_init();
    /* 8023DAD4 */ void wait_proc();
    /* 8023DAD8 */ void open_request_init();
    /* 8023DADC */ void open_request_proc();
    /* 8023DBE4 */ void open_init();
    /* 8023DC7C */ void open_proc();
    /* 8023DD90 */ void move_init();
    /* 8023DDB4 */ void move_proc();
    /* 8023DE8C */ void move_select_init();
    /* 8023E0F4 */ void move_select_proc();
    /* 8023E43C */ void close_init();
    /* 8023E448 */ void close_proc();
    /* 8023E558 */ void openExplain(u32, u8, u8, u8, bool);
    /* 8023E5CC */ void getAlphaRatio();
    /* 8023E640 */ void checkTriggerA();
    /* 8023E654 */ void checkTriggerB();
};

struct dMsgScrnArrow_c {
    /* 8023B9B4 */ dMsgScrnArrow_c();
    /* 8023BDC0 */ void draw();
    /* 8023BDF8 */ void setPos(f32, f32);
    /* 8023BE34 */ void arwAnimeInit();
};

struct dMsgScrn3Select_c {
    /* 802390B4 */ dMsgScrn3Select_c();
    /* 80239C64 */ void isSelect();
    /* 80239C78 */ void setString(char*, char*, char*);
    /* 80239D08 */ void setRubyString(char*, char*, char*);
    /* 80239D98 */ void translate(f32, f32);
    /* 80239DD4 */ void draw(f32, f32);
    /* 8023A094 */ void selAnimeInit(u8, u8, u8, f32, u8);
    /* 8023A398 */ void selAnimeMove(u8, u8, bool);
    /* 8023A680 */ void selAnimeEnd();
    /* 8023A934 */ void getTextBoxWidth();
    /* 8023A94C */ void getFontSize();
    /* 8023A97C */ void getCharSpace();
};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct JUTFont {};

struct COutFont_c {
    /* 80225C94 */ COutFont_c(u8);
};

struct dMsgObject_c {
    /* 802380F4 */ void getString(u32, J2DTextBox*, J2DTextBox*, JUTFont*, COutFont_c*, char*,
                                  char*, char*, s16*);
};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C250 */ void getString(u32, char*, JMSMesgEntry_c*);
    /* 8021C7FC */ void getStringLength(JUTFont*, f32, f32, char*);
};

struct Z2SpeechMgr2 {
    /* 802CBF60 */ void setTextCount(s16);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct ResTIMG {};

struct JKRExpHeap {};

struct JKRArchive {};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct J2DPicture {
    /* 802FC708 */ J2DPicture(ResTIMG const*);
};

struct J2DPane {
    /* 802F7100 */ void getBounds();
};

struct CPaneMgrAlpha {
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802545B0 */ void paneTrans(f32, f32);
    /* 80254EBC */ void getGlobalVtxCenter(J2DPane*, bool, s16);
};

//
// Forward References:
//

extern "C" void __ct__17dMsgScrnExplain_cFP9STControlUcbUc();
extern "C" void __dt__17dMsgScrnExplain_cFv();
extern "C" void move__17dMsgScrnExplain_cFv();
extern "C" void draw__17dMsgScrnExplain_cFP13J2DOrthoGraph();
extern "C" void wait_init__17dMsgScrnExplain_cFv();
extern "C" void wait_proc__17dMsgScrnExplain_cFv();
extern "C" void open_request_init__17dMsgScrnExplain_cFv();
extern "C" void open_request_proc__17dMsgScrnExplain_cFv();
extern "C" void open_init__17dMsgScrnExplain_cFv();
extern "C" void open_proc__17dMsgScrnExplain_cFv();
extern "C" void move_init__17dMsgScrnExplain_cFv();
extern "C" void move_proc__17dMsgScrnExplain_cFv();
extern "C" void move_select_init__17dMsgScrnExplain_cFv();
extern "C" void move_select_proc__17dMsgScrnExplain_cFv();
extern "C" void close_init__17dMsgScrnExplain_cFv();
extern "C" void close_proc__17dMsgScrnExplain_cFv();
extern "C" void openExplain__17dMsgScrnExplain_cFUlUcUcUcb();
extern "C" void getAlphaRatio__17dMsgScrnExplain_cFv();
extern "C" void checkTriggerA__17dMsgScrnExplain_cFv();
extern "C" void checkTriggerB__17dMsgScrnExplain_cFv();
extern "C" void __sinit_d_msg_scrn_explain_cpp();
extern "C" extern char const* const msg_scrn_d_msg_scrn_explain__stringBase0;

//
// External References:
//

extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void checkTrigger__9STControlFv();
extern "C" void checkUpTrigger__9STControlFv();
extern "C" void checkDownTrigger__9STControlFv();
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void getStringLength__13dMeter2Info_cFP7JUTFontffPc();
extern "C" void dMeter2Info_set2DVibrationM__Fv();
extern "C" void __ct__10COutFont_cFUc();
extern "C" void
getString__12dMsgObject_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cPcPcPcPs();
extern "C" void __ct__17dMsgScrn3Select_cFv();
extern "C" void isSelect__17dMsgScrn3Select_cFv();
extern "C" void setString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void setRubyString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void translate__17dMsgScrn3Select_cFff();
extern "C" void draw__17dMsgScrn3Select_cFff();
extern "C" void selAnimeInit__17dMsgScrn3Select_cFUcUcUcfUc();
extern "C" void selAnimeMove__17dMsgScrn3Select_cFUcUcb();
extern "C" void selAnimeEnd__17dMsgScrn3Select_cFv();
extern "C" void getTextBoxWidth__17dMsgScrn3Select_cFv();
extern "C" void getFontSize__17dMsgScrn3Select_cFv();
extern "C" void getCharSpace__17dMsgScrn3Select_cFv();
extern "C" void __ct__15dMsgScrnArrow_cFv();
extern "C" void draw__15dMsgScrnArrow_cFv();
extern "C" void setPos__15dMsgScrnArrow_cFff();
extern "C" void arwAnimeInit__15dMsgScrnArrow_cFv();
extern "C" void __ct__12dMsgString_cFv();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void setTextCount__12Z2SpeechMgr2Fs();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getBounds__7J2DPaneFv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void snprintf();
extern "C" void strcat();
extern "C" void strcpy();
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 g_MsgObject_HIO_c[1040];
extern "C" extern u8 data_80450B70[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80399910-80399910 025F70 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80399910 = "zelda_message_window_new.blo";
SECTION_DEAD static char const* const stringBase_8039992D =
    "zelda_message_window_text_save_road.blo";
SECTION_DEAD static char const* const stringBase_80399955 = "zelda_message_window_text.blo";
SECTION_DEAD static char const* const stringBase_80399973 = "";
SECTION_DEAD static char const* const stringBase_80399974 = "tt_block8x8.bti";
#pragma pop

/* 803C0E40-803C0E4C 01DF60 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803C0E4C-803C0E58 -00001 000C+00 0/1 0/0 0/0 .data            @3819 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3819[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_init__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0E58-803C0E64 -00001 000C+00 0/1 0/0 0/0 .data            @3820 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3820[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open_request_init__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0E64-803C0E70 -00001 000C+00 0/1 0/0 0/0 .data            @3821 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3821[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open_init__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0E70-803C0E7C -00001 000C+00 0/1 0/0 0/0 .data            @3822 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3822[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_init__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0E7C-803C0E88 -00001 000C+00 0/1 0/0 0/0 .data            @3823 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3823[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_select_init__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0E88-803C0E94 -00001 000C+00 0/1 0/0 0/0 .data            @3824 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3824[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)close_init__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0E94-803C0EDC 01DFB4 0048+00 1/2 0/0 0/0 .data            init_process */
SECTION_DATA static u8 init_process[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803C0EDC-803C0EE8 -00001 000C+00 0/1 0/0 0/0 .data            @3825 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3825[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_proc__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0EE8-803C0EF4 -00001 000C+00 0/1 0/0 0/0 .data            @3826 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3826[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open_request_proc__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0EF4-803C0F00 -00001 000C+00 0/1 0/0 0/0 .data            @3827 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3827[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open_proc__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0F00-803C0F0C -00001 000C+00 0/1 0/0 0/0 .data            @3828 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3828[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_proc__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0F0C-803C0F18 -00001 000C+00 0/1 0/0 0/0 .data            @3829 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3829[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_select_proc__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0F18-803C0F24 -00001 000C+00 0/1 0/0 0/0 .data            @3830 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3830[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)close_proc__17dMsgScrnExplain_cFv,
};
#pragma pop

/* 803C0F24-803C0F6C 01E044 0048+00 1/2 0/0 0/0 .data            move_process */
SECTION_DATA static u8 move_process[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803C0F6C-803C0F78 01E08C 000C+00 2/2 0/0 0/0 .data            __vt__17dMsgScrnExplain_c */
SECTION_DATA extern void* __vt__17dMsgScrnExplain_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dMsgScrnExplain_cFv,
};

/* 80454BB8-80454BBC 0031B8 0004+00 5/5 0/0 0/0 .sdata2          @3978 */
SECTION_SDATA2 static f32 lit_3978 = 608.0f;

/* 80454BBC-80454BC0 0031BC 0004+00 1/1 0/0 0/0 .sdata2          @3979 */
SECTION_SDATA2 static f32 lit_3979 = -10.0f;

/* 80454BC0-80454BC4 0031C0 0004+00 5/5 0/0 0/0 .sdata2          @3980 */
SECTION_SDATA2 static u8 lit_3980[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454BC4-80454BC8 0031C4 0004+00 1/1 0/0 0/0 .sdata2          @3981 */
SECTION_SDATA2 static f32 lit_3981 = -190.0f;

/* 8023CC88-8023D538 2375C8 08B0+00 0/0 2/2 0/0 .text __ct__17dMsgScrnExplain_cFP9STControlUcbUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnExplain_c::dMsgScrnExplain_c(STControl* param_0, u8 param_1, bool param_2, u8 param_3) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/__ct__17dMsgScrnExplain_cFP9STControlUcbUc.s"
}
#pragma pop

/* 8023D538-8023D7D8 237E78 02A0+00 1/0 0/0 0/0 .text            __dt__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnExplain_c::~dMsgScrnExplain_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/__dt__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454BC8-80454BCC 0031C8 0004+00 1/1 0/0 0/0 .sdata2          @4078 */
SECTION_SDATA2 static f32 lit_4078 = -35.0f;

/* 8023D7D8-8023D918 238118 0140+00 0/0 4/4 0/0 .text            move__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::move() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/move__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454BCC-80454BD0 0031CC 0004+00 1/1 0/0 0/0 .sdata2          @4120 */
SECTION_SDATA2 static f32 lit_4120 = 448.0f;

/* 80454BD0-80454BD4 0031D0 0004+00 4/4 0/0 0/0 .sdata2          @4121 */
SECTION_SDATA2 static f32 lit_4121 = -1.0f;

/* 80454BD4-80454BD8 0031D4 0004+00 1/1 0/0 0/0 .sdata2          @4122 */
SECTION_SDATA2 static f32 lit_4122 = -100.0f;

/* 80454BD8-80454BDC 0031D8 0004+00 1/1 0/0 0/0 .sdata2          @4123 */
SECTION_SDATA2 static f32 lit_4123 = 486.0f;

/* 80454BDC-80454BE0 0031DC 0004+00 1/1 0/0 0/0 .sdata2          @4124 */
SECTION_SDATA2 static f32 lit_4124 = 209.0f;

/* 8023D918-8023DAD0 238258 01B8+00 0/0 3/3 0/0 .text draw__17dMsgScrnExplain_cFP13J2DOrthoGraph
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::draw(J2DOrthoGraph* param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/draw__17dMsgScrnExplain_cFP13J2DOrthoGraph.s"
}
#pragma pop

/* 8023DAD0-8023DAD4 238410 0004+00 1/0 0/0 0/0 .text            wait_init__17dMsgScrnExplain_cFv */
void dMsgScrnExplain_c::wait_init() {
    /* empty function */
}

/* 8023DAD4-8023DAD8 238414 0004+00 1/0 0/0 0/0 .text            wait_proc__17dMsgScrnExplain_cFv */
void dMsgScrnExplain_c::wait_proc() {
    /* empty function */
}

/* 8023DAD8-8023DADC 238418 0004+00 2/1 0/0 0/0 .text open_request_init__17dMsgScrnExplain_cFv */
void dMsgScrnExplain_c::open_request_init() {
    /* empty function */
}

/* 8023DADC-8023DBE4 23841C 0108+00 1/0 0/0 0/0 .text open_request_proc__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::open_request_proc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/open_request_proc__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454BE0-80454BE4 0031E0 0004+00 6/6 0/0 0/0 .sdata2          @4211 */
SECTION_SDATA2 static f32 lit_4211 = 1.0f;

/* 8023DBE4-8023DC7C 238524 0098+00 1/0 0/0 0/0 .text            open_init__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::open_init() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/open_init__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454BE4-80454BE8 0031E4 0004+00 2/2 0/0 0/0 .sdata2          @4230 */
SECTION_SDATA2 static f32 lit_4230 = 150.0f;

/* 8023DC7C-8023DD90 2385BC 0114+00 1/0 0/0 0/0 .text            open_proc__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::open_proc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/open_proc__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023DD90-8023DDB4 2386D0 0024+00 1/0 0/0 0/0 .text            move_init__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::move_init() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/move_init__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023DDB4-8023DE8C 2386F4 00D8+00 1/0 0/0 0/0 .text            move_proc__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::move_proc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/move_proc__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80399910-80399910 025F70 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80399984 = ""
                                                            "\x1B"
                                                            "CR[%d]";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039998C = "\0\0\0";
#pragma pop

/* 80454BE8-80454BEC 0031E8 0004+00 1/1 0/0 0/0 .sdata2          @4294 */
SECTION_SDATA2 static f32 lit_4294 = 0.5f;

/* 8023DE8C-8023E0F4 2387CC 0268+00 1/0 0/0 0/0 .text move_select_init__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::move_select_init() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/move_select_init__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023E0F4-8023E43C 238A34 0348+00 1/0 0/0 0/0 .text move_select_proc__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::move_select_proc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/move_select_proc__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023E43C-8023E448 238D7C 000C+00 1/0 0/0 0/0 .text            close_init__17dMsgScrnExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::close_init() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/close_init__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023E448-8023E558 238D88 0110+00 1/0 0/0 0/0 .text            close_proc__17dMsgScrnExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::close_proc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/close_proc__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023E558-8023E5CC 238E98 0074+00 0/0 7/7 0/0 .text openExplain__17dMsgScrnExplain_cFUlUcUcUcb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::openExplain(u32 param_0, u8 param_1, u8 param_2, u8 param_3,
                                        bool param_4) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/openExplain__17dMsgScrnExplain_cFUlUcUcUcb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454BEC-80454BF0 0031EC 0004+00 1/1 0/0 0/0 .sdata2          @4414 */
SECTION_SDATA2 static f32 lit_4414 = 5.0f;

/* 80454BF0-80454BF8 0031F0 0008+00 1/1 0/0 0/0 .sdata2          @4416 */
SECTION_SDATA2 static f64 lit_4416 = 4503601774854144.0 /* cast s32 to float */;

/* 8023E5CC-8023E640 238F0C 0074+00 2/2 0/0 0/0 .text getAlphaRatio__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::getAlphaRatio() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/getAlphaRatio__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023E640-8023E654 238F80 0014+00 1/1 0/0 0/0 .text checkTriggerA__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::checkTriggerA() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/checkTriggerA__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023E654-8023E668 238F94 0014+00 1/1 0/0 0/0 .text checkTriggerB__17dMsgScrnExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnExplain_c::checkTriggerB() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/checkTriggerB__17dMsgScrnExplain_cFv.s"
}
#pragma pop

/* 8023E668-8023E79C 238FA8 0134+00 0/0 1/0 0/0 .text            __sinit_d_msg_scrn_explain_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_msg_scrn_explain_cpp() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_explain/__sinit_d_msg_scrn_explain_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8023E668, __sinit_d_msg_scrn_explain_cpp);
#pragma pop

/* 80399910-80399910 025F70 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
