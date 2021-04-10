//
// Generated By: dol2asm
// Translation Unit: d/d_select_icon
//

#include "d/d_select_icon.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dSi_HIO_c {
    /* 80195A2C */ dSi_HIO_c();
    /* 80195C1C */ ~dSi_HIO_c();
};

struct J2DPane {};

struct dSelect_icon_c {
    /* 80195A3C */ void animation();
    /* 80195B40 */ void setAlpha(u8);
    /* 80195B70 */ void setPos(J2DPane*, f32, f32);
};

struct J2DScreen {
    /* 802F9690 */ void animation();
};

struct CPaneMgr {
    /* 80254638 */ void paneScale(f32, f32);
};

//
// Forward References:
//

extern "C" void __ct__9dSi_HIO_cFv();
extern "C" void animation__14dSelect_icon_cFv();
extern "C" void setAlpha__14dSelect_icon_cFUc();
extern "C" void setPos__14dSelect_icon_cFP7J2DPaneff();
extern "C" void __dt__9dSi_HIO_cFv();
extern "C" void __sinit_d_select_icon_cpp();

//
// External References:
//

extern "C" void paneScale__8CPaneMgrFff();
extern "C" void __dl__FPv();
extern "C" void animation__9J2DScreenFv();
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 803BB7B8-803BB7C8 0188D8 000C+04 2/2 0/0 0/0 .data            __vt__9dSi_HIO_c */
SECTION_DATA extern void* __vt__9dSi_HIO_c[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9dSi_HIO_cFv,
    /* padding */
    NULL,
};

/* 80195A2C-80195A3C 19036C 0010+00 1/1 0/0 0/0 .text            __ct__9dSi_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSi_HIO_c::dSi_HIO_c() {
    nofralloc
#include "asm/d/d_select_icon/__ct__9dSi_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453A70-80453A78 002070 0004+04 1/1 0/0 0/0 .sdata2          @3740 */
SECTION_SDATA2 static f32 lit_3740[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80453A78-80453A80 002078 0008+00 1/1 0/0 0/0 .sdata2          @3773 */
SECTION_SDATA2 static f64 lit_3773 = 4503601774854144.0 /* cast s32 to float */;

/* 80195A3C-80195B40 19037C 0104+00 0/0 1/1 0/0 .text            animation__14dSelect_icon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_icon_c::animation() {
    nofralloc
#include "asm/d/d_select_icon/animation__14dSelect_icon_cFv.s"
}
#pragma pop

/* 80195B40-80195B70 190480 0030+00 0/0 1/1 0/0 .text            setAlpha__14dSelect_icon_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_icon_c::setAlpha(u8 param_0) {
    nofralloc
#include "asm/d/d_select_icon/setAlpha__14dSelect_icon_cFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453A80-80453A88 002080 0004+04 1/1 0/0 0/0 .sdata2          @3814 */
SECTION_SDATA2 static f32 lit_3814[1 + 1 /* padding */] = {
    100.0f,
    /* padding */
    0.0f,
};

/* 80195B70-80195C1C 1904B0 00AC+00 0/0 1/1 0/0 .text setPos__14dSelect_icon_cFP7J2DPaneff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_icon_c::setPos(J2DPane* param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/d/d_select_icon/setPos__14dSelect_icon_cFP7J2DPaneff.s"
}
#pragma pop

/* 80195C1C-80195C64 19055C 0048+00 2/1 0/0 0/0 .text            __dt__9dSi_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSi_HIO_c::~dSi_HIO_c() {
    nofralloc
#include "asm/d/d_select_icon/__dt__9dSi_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8042CA10-8042CA20 059730 000C+04 1/1 0/0 0/0 .bss             @3648 */
static u8 lit_3648[12 + 4 /* padding */];

/* 80451050-80451058 000550 0008+00 1/1 0/0 0/0 .sbss            g_siHIO */
static u8 g_siHIO[8];

/* 80195C64-80195C9C 1905A4 0038+00 0/0 1/0 0/0 .text            __sinit_d_select_icon_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_select_icon_cpp() {
    nofralloc
#include "asm/d/d_select_icon/__sinit_d_select_icon_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80195C64, __sinit_d_select_icon_cpp);
#pragma pop
