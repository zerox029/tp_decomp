//
// Generated By: dol2asm
// Translation Unit: JUTProcBar
//

#include "JSystem/JUtility/JUTProcBar.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUtility {
    struct TColor {};
};

struct JUTProcBar {
    struct CTime {
        /* 802E7340 */ CTime();
    };

    /* 802E5888 */ JUTProcBar();
    /* 802E599C */ ~JUTProcBar();
    /* 802E59E0 */ void create();
    /* 802E5A28 */ void destroy();
    /* 802E5A60 */ void clear();
    /* 802E5B30 */ void bar_subroutine(int, int, int, int, int, int, int, JUtility::TColor,
                                       JUtility::TColor);
    /* 802E5CC4 */ void adjustMeterLength(u32, f32*, f32, f32, int*);
    /* 802E5E08 */ void draw();
    /* 802E5E3C */ void drawProcessBar();
    /* 802E6FA0 */ void drawHeapBar();
};

struct JKRHeap {
    /* 802CE784 */ void getTotalFreeSize();
};

//
// Forward References:
//

static void addrToXPos(void*, int);
static void byteToXLen(int, int);
static void heapBar(JKRHeap*, int, int, int, int, int);
extern "C" extern u8 sManager__10JUTProcBar[4];

extern "C" void __ct__10JUTProcBarFv();
extern "C" void __dt__10JUTProcBarFv();
extern "C" void create__10JUTProcBarFv();
extern "C" void destroy__10JUTProcBarFv();
extern "C" void clear__10JUTProcBarFv();
extern "C" void bar_subroutine__10JUTProcBarFiiiiiiiQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void adjustMeterLength__10JUTProcBarFUlPfffPi();
extern "C" void draw__10JUTProcBarFv();
extern "C" void drawProcessBar__10JUTProcBarFv();
extern "C" static void addrToXPos__FPvi();
extern "C" static void byteToXLen__Fii();
extern "C" static void heapBar__FP7JKRHeapiiiii();
extern "C" void drawHeapBar__10JUTProcBarFv();
extern "C" void __ct__Q210JUTProcBar5CTimeFv();
extern "C" extern u8 sManager__10JUTProcBar[4];

//
// External References:
//

void* operator new(u32);
void operator delete(void*);
void J2DDrawLine(f32, f32, f32, f32, JUtility::TColor, int);
void J2DFillBox(f32, f32, f32, f32, JUtility::TColor);
void J2DDrawFrame(f32, f32, f32, f32, JUtility::TColor, u8);
extern "C" extern u8 sSystemHeap__7JKRHeap[4];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 sRootHeap__7JKRHeap[4];
extern "C" extern u8 mCodeStart__7JKRHeap[4];
extern "C" extern u8 mCodeEnd__7JKRHeap[4];
extern "C" extern u8 mUserRamStart__7JKRHeap[4];
extern "C" extern u8 mUserRamEnd__7JKRHeap[4];
extern "C" extern u8 mMemorySize__7JKRHeap[4];
extern "C" extern u8 sManager__8JUTVideo[4];

extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void J2DDrawLine__FffffQ28JUtility6TColori();
extern "C" void J2DFillBox__FffffQ28JUtility6TColor();
extern "C" void J2DDrawFrame__FffffQ28JUtility6TColorUc();
extern "C" void OSGetTick();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_21();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" extern u8 sSystemHeap__7JKRHeap[4];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 sRootHeap__7JKRHeap[4];
extern "C" extern u8 mCodeStart__7JKRHeap[4];
extern "C" extern u8 mCodeEnd__7JKRHeap[4];
extern "C" extern u8 mUserRamStart__7JKRHeap[4];
extern "C" extern u8 mUserRamEnd__7JKRHeap[4];
extern "C" extern u8 mMemorySize__7JKRHeap[4];
extern "C" extern u8 sManager__8JUTVideo[4];

//
// Declarations:
//

/* 802E5888-802E599C 0114+00 s=1 e=0 z=0  None .text      __ct__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTProcBar::JUTProcBar() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/__ct__10JUTProcBarFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451558-8045155C 0004+00 s=4 e=6 z=0  None .sbss      sManager__10JUTProcBar */
u8 sManager__10JUTProcBar[4];

/* 802E599C-802E59E0 0044+00 s=1 e=0 z=0  None .text      __dt__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTProcBar::~JUTProcBar() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/__dt__10JUTProcBarFv.s"
}
#pragma pop

/* 802E59E0-802E5A28 0048+00 s=0 e=1 z=0  None .text      create__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::create() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/create__10JUTProcBarFv.s"
}
#pragma pop

/* 802E5A28-802E5A60 0038+00 s=0 e=1 z=0  None .text      destroy__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::destroy() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/destroy__10JUTProcBarFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450900-80450904 0004+00 s=2 e=0 z=0  None .sdata     oneFrameRate */
SECTION_SDATA static u32 oneFrameRate = 0x41000000;

/* 80450904-80450908 0004+00 s=2 e=0 z=0  None .sdata     oneFrameRateUser */
SECTION_SDATA static u32 oneFrameRateUser = 0x41200000;

/* 804560D8-804560DC 0004+00 s=1 e=0 z=0  None .sdata2    @2258 */
SECTION_SDATA2 static u32 lit_2258 = 0x41000000;

/* 804560DC-804560E0 0004+00 s=2 e=0 z=0  None .sdata2    @2259 */
SECTION_SDATA2 static u32 lit_2259 = 0x41200000;

/* 802E5A60-802E5B30 00D0+00 s=0 e=1 z=0  None .text      clear__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::clear() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/clear__10JUTProcBarFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804560E0-804560E8 0004+04 s=1 e=0 z=0  None .sdata2    @2279 */
SECTION_SDATA2 static f32 lit_2279[1 + 1 /* padding */] = {
    6.0f,
    /* padding */
    0.0f,
};

/* 804560E8-804560F0 0008+00 s=7 e=0 z=0  None .sdata2    @2281 */
SECTION_SDATA2 static u8 lit_2281[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 802E5B30-802E5CC4 0194+00 s=1 e=0 z=0  None .text
 * bar_subroutine__10JUTProcBarFiiiiiiiQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::bar_subroutine(int param_0, int param_1, int param_2, int param_3, int param_4,
                                    int param_5, int param_6, JUtility::TColor param_7,
                                    JUtility::TColor param_8) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/bar_subroutine__10JUTProcBarFiiiiiiiQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* ############################################################################################## */
/* 804560F0-804560F4 0004+00 s=2 e=0 z=0  None .sdata2    @2308 */
SECTION_SDATA2 static u32 lit_2308 = 0x41A00000;

/* 804560F4-804560F8 0004+00 s=1 e=0 z=0  None .sdata2    @2309 */
SECTION_SDATA2 static u32 lit_2309 = 0x46823400;

/* 804560F8-804560FC 0004+00 s=1 e=0 z=0  None .sdata2    @2310 */
SECTION_SDATA2 static u32 lit_2310 = 0x41F00000;

/* 804560FC-80456100 0004+00 s=1 e=0 z=0  None .sdata2    @2311 */
SECTION_SDATA2 static u32 lit_2311 = 0x3DCCCCCD;

/* 80456100-80456104 0004+00 s=1 e=0 z=0  None .sdata2    @2312 */
SECTION_SDATA2 static u32 lit_2312 = 0x3E4CCCCD;

/* 80456104-80456108 0004+00 s=1 e=0 z=0  None .sdata2    @2313 */
SECTION_SDATA2 static u32 lit_2313 = 0x42700000;

/* 80456108-80456110 0008+00 s=3 e=0 z=0  None .sdata2    @2315 */
SECTION_SDATA2 static u8 lit_2315[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 802E5CC4-802E5E08 0144+00 s=1 e=0 z=0  None .text      adjustMeterLength__10JUTProcBarFUlPfffPi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::adjustMeterLength(u32 param_0, f32* param_1, f32 param_2, f32 param_3,
                                       int* param_4) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/adjustMeterLength__10JUTProcBarFUlPfffPi.s"
}
#pragma pop

/* 802E5E08-802E5E3C 0034+00 s=0 e=1 z=0  None .text      draw__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::draw() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/draw__10JUTProcBarFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045155C-80451560 0004+00 s=1 e=0 z=0  None .sbss      cnt$2330 */
static u8 cnt[4];

/* 80451560-80451564 0004+00 s=1 e=0 z=0  None .sbss      None */
static u8 data_80451560[4];

/* 80451564-80451568 0004+00 s=1 e=0 z=0  None .sbss      cntUser$2379 */
static u8 cntUser[4];

/* 80451568-80451570 0008+00 s=1 e=0 z=0  None .sbss      None */
static u8 data_80451568[8];

/* 80456110-80456114 0004+00 s=1 e=0 z=0  None .sdata2    @2580 */
SECTION_SDATA2 static u32 lit_2580 = 0x3F800000;

/* 80456114-80456118 0004+00 s=1 e=0 z=0  None .sdata2    @2581 */
SECTION_SDATA2 static u32 lit_2581 = 0x40400000;

/* 802E5E3C-802E6D3C 0F00+00 s=1 e=0 z=0  None .text      drawProcessBar__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::drawProcessBar() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/drawProcessBar__10JUTProcBarFv.s"
}
#pragma pop

/* 802E6D3C-802E6DA4 0068+00 s=2 e=0 z=0  None .text      addrToXPos__FPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void addrToXPos(void* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/addrToXPos__FPvi.s"
}
#pragma pop

/* 802E6DA4-802E6E0C 0068+00 s=2 e=0 z=0  None .text      byteToXLen__Fii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void byteToXLen(int param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/byteToXLen__Fii.s"
}
#pragma pop

/* 802E6E0C-802E6FA0 0194+00 s=1 e=0 z=0  None .text      heapBar__FP7JKRHeapiiiii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void heapBar(JKRHeap* param_0, int param_1, int param_2, int param_3, int param_4,
                        int param_5) {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/heapBar__FP7JKRHeapiiiii.s"
}
#pragma pop

/* 802E6FA0-802E7340 03A0+00 s=1 e=0 z=0  None .text      drawHeapBar__10JUTProcBarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTProcBar::drawHeapBar() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/drawHeapBar__10JUTProcBarFv.s"
}
#pragma pop

/* 802E7340-802E7354 0014+00 s=1 e=0 z=0  None .text      __ct__Q210JUTProcBar5CTimeFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTProcBar::CTime::CTime() {
    nofralloc
#include "asm/JSystem/JUtility/JUTProcBar/__ct__Q210JUTProcBar5CTimeFv.s"
}
#pragma pop
