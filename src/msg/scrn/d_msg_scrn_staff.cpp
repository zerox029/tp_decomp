//
// Generated By: dol2asm
// Translation Unit: msg/scrn/d_msg_scrn_staff
//

#include "msg/scrn/d_msg_scrn_staff.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dMsgScrnStaff_c {
    /* 80246B34 */ dMsgScrnStaff_c(u8);
    /* 80246DD8 */ ~dMsgScrnStaff_c();
    /* 80246EE8 */ void exec();
    /* 80246F68 */ void drawSelf();
    /* 80246FC0 */ void fukiAlpha(f32);
    /* 80246FE4 */ void fukiScale(f32);
    /* 80246FE8 */ void fukiTrans(f32, f32);
    /* 80246FEC */ void fontAlpha(f32);
};

struct dMsgScrnBase_c {
    /* 80238C40 */ void setSelectRubyString(char*, char*, char*);
    /* 80238C44 */ void setSelectString(char*, char*, char*);
    /* 80238C48 */ bool selectAnimeMove(u8, u8, bool);
    /* 80238C50 */ void selectAnimeInit(u8, u8, f32, u8);
    /* 80238C54 */ void arwAnimeMove();
    /* 80238C58 */ void arwAnimeInit();
    /* 80238C5C */ void fukiPosCalc(u8);
    /* 80238C60 */ bool isSelect();
    /* 80238C68 */ bool selectAnimeEnd();
    /* 80238C70 */ void dotAnimeMove();
    /* 80238C74 */ void dotAnimeInit();
    /* 8023C0DC */ dMsgScrnBase_c();
    /* 8023C124 */ ~dMsgScrnBase_c();
    /* 8023C16C */ void init();
    /* 8023C234 */ void multiDraw();
    /* 8023C274 */ void draw();
    /* 8023C32C */ void drawOutFont(f32, f32, f32);
    /* 8023C574 */ void isTalkNow();
};

struct JKRExpHeap {};

struct JKRArchive {};

struct J2DTextBox {
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
};

struct CPaneMgrAlpha {
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802542E8 */ void getGlobalPosX();
    /* 80254364 */ void getGlobalPosY();
};

//
// Forward References:
//

extern "C" void __ct__15dMsgScrnStaff_cFUc();
extern "C" void __dt__15dMsgScrnStaff_cFv();
extern "C" void exec__15dMsgScrnStaff_cFv();
extern "C" void drawSelf__15dMsgScrnStaff_cFv();
extern "C" void fukiAlpha__15dMsgScrnStaff_cFf();
extern "C" void fukiScale__15dMsgScrnStaff_cFf();
extern "C" void fukiTrans__15dMsgScrnStaff_cFff();
extern "C" void fontAlpha__15dMsgScrnStaff_cFf();
extern "C" extern char const* const msg_scrn_d_msg_scrn_staff__stringBase0;

//
// External References:
//

extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void setSelectRubyString__14dMsgScrnBase_cFPcPcPc();
extern "C" void setSelectString__14dMsgScrnBase_cFPcPcPc();
extern "C" bool selectAnimeMove__14dMsgScrnBase_cFUcUcb();
extern "C" void selectAnimeInit__14dMsgScrnBase_cFUcUcfUc();
extern "C" void arwAnimeMove__14dMsgScrnBase_cFv();
extern "C" void arwAnimeInit__14dMsgScrnBase_cFv();
extern "C" void fukiPosCalc__14dMsgScrnBase_cFUc();
extern "C" bool isSelect__14dMsgScrnBase_cFv();
extern "C" bool selectAnimeEnd__14dMsgScrnBase_cFv();
extern "C" void dotAnimeMove__14dMsgScrnBase_cFv();
extern "C" void dotAnimeInit__14dMsgScrnBase_cFv();
extern "C" void __ct__14dMsgScrnBase_cFv();
extern "C" void __dt__14dMsgScrnBase_cFv();
extern "C" void init__14dMsgScrnBase_cFv();
extern "C" void multiDraw__14dMsgScrnBase_cFv();
extern "C" void draw__14dMsgScrnBase_cFv();
extern "C" void drawOutFont__14dMsgScrnBase_cFfff();
extern "C" void isTalkNow__14dMsgScrnBase_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void getGlobalPosX__8CPaneMgrFv();
extern "C" void getGlobalPosY__8CPaneMgrFv();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_MsgObject_HIO_c[1040];

//
// Declarations:
//

/* ############################################################################################## */
/* 80399B98-80399B98 0261F8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80399B98 = "zelda_staff_roll.blo";
SECTION_DEAD static char const* const stringBase_80399BAD = "";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80399BAE = "\0";
#pragma pop

/* 803C1340-803C1370 01E460 0030+00 1/1 0/0 0/0 .data            t_tag$3752 */
SECTION_DATA static u8 t_tag[48] = {
    0x00, 0x72, 0x69, 0x67, 0x68, 0x74, 0x5F, 0x73, 0x00, 0x00, 0x00, 0x72, 0x69, 0x67, 0x68, 0x74,
    0x63, 0x65, 0x6E, 0x74, 0x65, 0x72, 0x5F, 0x73, 0x00, 0x00, 0x63, 0x65, 0x6E, 0x74, 0x65, 0x72,
    0x00, 0x00, 0x6C, 0x65, 0x66, 0x74, 0x5F, 0x73, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x65, 0x66, 0x74,
};

/* 803C1370-803C13C8 01E490 0058+00 2/2 0/0 0/0 .data            __vt__15dMsgScrnStaff_c */
SECTION_DATA extern void* __vt__15dMsgScrnStaff_c[22] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__14dMsgScrnBase_cFv,
    (void*)__dt__15dMsgScrnStaff_cFv,
    (void*)exec__15dMsgScrnStaff_cFv,
    (void*)multiDraw__14dMsgScrnBase_cFv,
    (void*)drawSelf__15dMsgScrnStaff_cFv,
    (void*)setSelectString__14dMsgScrnBase_cFPcPcPc,
    (void*)setSelectRubyString__14dMsgScrnBase_cFPcPcPc,
    (void*)arwAnimeInit__14dMsgScrnBase_cFv,
    (void*)arwAnimeMove__14dMsgScrnBase_cFv,
    (void*)dotAnimeInit__14dMsgScrnBase_cFv,
    (void*)dotAnimeMove__14dMsgScrnBase_cFv,
    (void*)isSelect__14dMsgScrnBase_cFv,
    (void*)selectAnimeInit__14dMsgScrnBase_cFUcUcfUc,
    (void*)selectAnimeMove__14dMsgScrnBase_cFUcUcb,
    (void*)selectAnimeEnd__14dMsgScrnBase_cFv,
    (void*)fukiScale__15dMsgScrnStaff_cFf,
    (void*)fukiTrans__15dMsgScrnStaff_cFff,
    (void*)fukiAlpha__15dMsgScrnStaff_cFf,
    (void*)fontAlpha__15dMsgScrnStaff_cFf,
    (void*)fukiPosCalc__14dMsgScrnBase_cFUc,
};

/* 80454CF8-80454CFC 0032F8 0004+00 2/2 0/0 0/0 .sdata2          @3842 */
SECTION_SDATA2 static u8 lit_3842[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80246B34-80246DD8 241474 02A4+00 0/0 1/1 0/0 .text            __ct__15dMsgScrnStaff_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnStaff_c::dMsgScrnStaff_c(u8 param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_staff/__ct__15dMsgScrnStaff_cFUc.s"
}
#pragma pop

/* 80246DD8-80246EE8 241718 0110+00 1/0 0/0 0/0 .text            __dt__15dMsgScrnStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnStaff_c::~dMsgScrnStaff_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_staff/__dt__15dMsgScrnStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454CFC-80454D00 0032FC 0004+00 2/2 0/0 0/0 .sdata2          @3877 */
SECTION_SDATA2 static f32 lit_3877 = 1.0f;

/* 80246EE8-80246F68 241828 0080+00 1/0 0/0 0/0 .text            exec__15dMsgScrnStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnStaff_c::exec() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_staff/exec__15dMsgScrnStaff_cFv.s"
}
#pragma pop

/* 80246F68-80246FC0 2418A8 0058+00 1/0 0/0 0/0 .text            drawSelf__15dMsgScrnStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnStaff_c::drawSelf() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_staff/drawSelf__15dMsgScrnStaff_cFv.s"
}
#pragma pop

/* 80246FC0-80246FE4 241900 0024+00 1/0 0/0 0/0 .text            fukiAlpha__15dMsgScrnStaff_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnStaff_c::fukiAlpha(f32 param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_staff/fukiAlpha__15dMsgScrnStaff_cFf.s"
}
#pragma pop

/* 80246FE4-80246FE8 241924 0004+00 1/0 0/0 0/0 .text            fukiScale__15dMsgScrnStaff_cFf */
void dMsgScrnStaff_c::fukiScale(f32 param_0) {
    /* empty function */
}

/* 80246FE8-80246FEC 241928 0004+00 1/0 0/0 0/0 .text            fukiTrans__15dMsgScrnStaff_cFff */
void dMsgScrnStaff_c::fukiTrans(f32 param_0, f32 param_1) {
    /* empty function */
}

/* 80246FEC-80246FF0 24192C 0004+00 1/0 0/0 0/0 .text            fontAlpha__15dMsgScrnStaff_cFf */
void dMsgScrnStaff_c::fontAlpha(f32 param_0) {
    /* empty function */
}

/* 80399B98-80399B98 0261F8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
