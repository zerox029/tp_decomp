//
// Generated By: dol2asm
// Translation Unit: d/msg/d_msg_string
//

#include "d/msg/d_msg_string.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J2DTextBox {};

struct JUTFont {};

struct COutFont_c {
    /* 80225C94 */ COutFont_c(u8);
};

struct dMsgString_c {
    /* 80191B6C */ void getString(u32, J2DTextBox*, J2DTextBox*, JUTFont*, COutFont_c*, u8);
    /* 801E1D10 */ void getStringPage(u32, u8, u8, J2DTextBox*, J2DTextBox*, JUTFont*, COutFont_c*,
                                      u8);
    /* 80249C20 */ dMsgString_c();
    /* 80249CA0 */ dMsgString_c(u8);
    /* 80249D28 */ ~dMsgString_c();
    /* 80249DB4 */ void resetStringLocal(J2DTextBox*);
    /* 80249DE4 */ void drawOutFontLocal(J2DTextBox*, f32);
    /* 80249ED0 */ void drawFontLocal(J2DTextBox*, u8, f32, f32, f32, f32, u32, u8);
};

struct dMsgStringBase_c {
    /* 802493B4 */ dMsgStringBase_c();
    /* 80249528 */ ~dMsgStringBase_c();
    /* 80249700 */ void getResource();
    /* 80249BF8 */ void getMessage(u32, char*);
};

struct J2DPane {
    /* 802F79A8 */ void getGlbVtx(u8) const;
};

//
// Forward References:
//

extern "C" void __ct__12dMsgString_cFv();
extern "C" void __ct__12dMsgString_cFUc();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void resetStringLocal__12dMsgString_cFP10J2DTextBox();
extern "C" void drawOutFontLocal__12dMsgString_cFP10J2DTextBoxf();
extern "C" void drawFontLocal__12dMsgString_cFP10J2DTextBoxUcffffUlUc();

//
// External References:
//

extern "C" void getString__12dMsgString_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc();
extern "C" void
getStringPage__12dMsgString_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc();
extern "C" void __ct__10COutFont_cFUc();
extern "C" void __ct__16dMsgStringBase_cFv();
extern "C" void __dt__16dMsgStringBase_cFv();
extern "C" void getResource__16dMsgStringBase_cFv();
extern "C" void getMessage__16dMsgStringBase_cFUlPc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbVtx__7J2DPaneCFUc();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C1498-803C14B8 01E5B8 0020+00 3/3 0/0 0/0 .data            __vt__12dMsgString_c */
SECTION_DATA extern void* __vt__12dMsgString_c[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getString__12dMsgString_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc,
    (void*)getStringPage__12dMsgString_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc,
    (void*)getMessage__16dMsgStringBase_cFUlPc,
    (void*)resetStringLocal__12dMsgString_cFP10J2DTextBox,
    (void*)drawOutFontLocal__12dMsgString_cFP10J2DTextBoxf,
    (void*)drawFontLocal__12dMsgString_cFP10J2DTextBoxUcffffUlUc,
};

/* 80249C20-80249CA0 244560 0080+00 0/0 15/15 0/0 .text            __ct__12dMsgString_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgString_c::dMsgString_c() {
    nofralloc
#include "asm/d/msg/d_msg_string/__ct__12dMsgString_cFv.s"
}
#pragma pop

/* 80249CA0-80249D28 2445E0 0088+00 0/0 1/1 0/0 .text            __ct__12dMsgString_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgString_c::dMsgString_c(u8 param_0) {
    nofralloc
#include "asm/d/msg/d_msg_string/__ct__12dMsgString_cFUc.s"
}
#pragma pop

/* 80249D28-80249DB4 244668 008C+00 0/0 17/17 0/0 .text            __dt__12dMsgString_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgString_c::~dMsgString_c() {
    nofralloc
#include "asm/d/msg/d_msg_string/__dt__12dMsgString_cFv.s"
}
#pragma pop

/* 80249DB4-80249DE4 2446F4 0030+00 1/0 0/0 0/0 .text
 * resetStringLocal__12dMsgString_cFP10J2DTextBox               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgString_c::resetStringLocal(J2DTextBox* param_0) {
    nofralloc
#include "asm/d/msg/d_msg_string/resetStringLocal__12dMsgString_cFP10J2DTextBox.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454D78-80454D7C 003378 0004+00 1/1 0/0 0/0 .sdata2          @3777 */
SECTION_SDATA2 static f32 lit_3777 = 255.0f;

/* 80454D7C-80454D80 00337C 0004+00 1/1 0/0 0/0 .sdata2          @3778 */
SECTION_SDATA2 static f32 lit_3778 = -1.0f;

/* 80454D80-80454D88 003380 0004+04 1/1 0/0 0/0 .sdata2          @3779 */
SECTION_SDATA2 static f32 lit_3779[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80454D88-80454D90 003388 0008+00 1/1 0/0 0/0 .sdata2          @3781 */
SECTION_SDATA2 static f64 lit_3781 = 4503599627370496.0 /* cast u32 to float */;

/* 80249DE4-80249ED0 244724 00EC+00 1/0 0/0 0/0 .text
 * drawOutFontLocal__12dMsgString_cFP10J2DTextBoxf              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgString_c::drawOutFontLocal(J2DTextBox* param_0, f32 param_1) {
    nofralloc
#include "asm/d/msg/d_msg_string/drawOutFontLocal__12dMsgString_cFP10J2DTextBoxf.s"
}
#pragma pop

/* 80249ED0-80249F00 244810 0030+00 1/0 0/0 0/0 .text
 * drawFontLocal__12dMsgString_cFP10J2DTextBoxUcffffUlUc        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgString_c::drawFontLocal(J2DTextBox* param_0, u8 param_1, f32 param_2, f32 param_3,
                                     f32 param_4, f32 param_5, u32 param_6, u8 param_7) {
    nofralloc
#include "asm/d/msg/d_msg_string/drawFontLocal__12dMsgString_cFP10J2DTextBoxUcffffUlUc.s"
}
#pragma pop
