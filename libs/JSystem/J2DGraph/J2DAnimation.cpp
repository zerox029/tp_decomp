//
// Generated By: dol2asm
// Translation Unit: J2DAnimation
//

#include "JSystem/J2DGraph/J2DAnimation.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXTlutFmt {};

struct _GXTlut {};

struct JUTTransparency {};

struct JKRArchive {};

struct JUTResReference {
    /* 802DE120 */ void getResource(void const*, u32, JKRArchive*);
};

struct JUTPalette {
    /* 802DE91C */ void storeTLUT(_GXTlut, _GXTlutFmt, JUTTransparency, u16, void*);
};

struct JUTNameTab {
    /* 802DEA58 */ void getIndex(char const*) const;
    /* 802DEAF8 */ void getName(u16) const;
};

struct J3DTransformInfo {};

struct J3DTextureSRTInfo {};

struct J3DAnmKeyTableBase {};

struct J2DScreen {
    static u8 mDataManage[4 + 4 /* padding */];
};

struct J2DResReference {
    /* 8030CF10 */ void getResReference(u16) const;
    /* 8030CF44 */ void getName(u16) const;
};

struct J2DDataManage {
    /* 8030CE18 */ void get(char const*);
};

//
// Forward References:
//

extern "C" void getTransform__19J2DAnmTransformFullCFUsP16J3DTransformInfo();
extern "C" void calcTransform__18J2DAnmTransformKeyCFfUsP16J3DTransformInfo();
extern "C" void searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen();
extern "C" void getColor__15J2DAnmColorFullCFUsP8_GXColor();
extern "C" void getColor__14J2DAnmColorKeyCFUsP8_GXColor();
extern "C" void getColor__18J2DAnmVtxColorFullCFUcUsP8_GXColor();
extern "C" void getColor__17J2DAnmVtxColorKeyCFUcUsP8_GXColor();
extern "C" void calcTransform__19J2DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo();
extern "C" void searchUpdateMaterialID__19J2DAnmTextureSRTKeyFP9J2DScreen();
extern "C" void searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen();
extern "C" void getTexNo__16J2DAnmTexPatternCFUsPUs();
extern "C" void getResTIMG__16J2DAnmTexPatternCFUs();
extern "C" void getPalette__16J2DAnmTexPatternCFUs();
extern "C" void getVisibility__20J2DAnmVisibilityFullCFUsPUc();
extern "C" void getTevColorReg__15J2DAnmTevRegKeyCFUsP11_GXColorS10();
extern "C" void getTevKonstReg__15J2DAnmTevRegKeyCFUsP8_GXColor();
extern "C" void searchUpdateMaterialID__15J2DAnmTevRegKeyFP9J2DScreen();
extern "C" void func_8030C77C(void* _this, f32, J3DAnmKeyTableBase*, s16*);
extern "C" void func_8030C9B0(void* _this, f32, J3DAnmKeyTableBase*, f32*);
extern "C" void __ct__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv();
extern "C" void __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv();
extern "C" void __dt__16J2DAnmTexPatternFv();
extern "C" void __dt__17J2DAnmVtxColorKeyFv();
extern "C" void __dt__18J2DAnmVtxColorFullFv();
extern "C" void __dt__15J2DAnmColorFullFv();
extern "C" void getTransform__18J2DAnmTransformKeyCFUsP16J3DTransformInfo();
extern "C" void __dt__19J2DAnmTransformFullFv();

//
// External References:
//

extern "C" void searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen();
extern "C" void __dt__15J2DAnmTevRegKeyFv();
extern "C" void __dt__19J2DAnmTextureSRTKeyFv();
extern "C" void __dt__11J2DAnmColorFv();
extern "C" void __dt__18J2DAnmTransformKeyFv();
extern "C" void __dt__14J2DAnmColorKeyFv();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void getResource__15JUTResReferenceFPCvUlP10JKRArchive();
extern "C" void storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv();
extern "C" void getIndex__10JUTNameTabCFPCc();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void getColor__11J2DAnmColorCFUsP8_GXColor();
extern "C" void get__13J2DDataManageFPCc();
extern "C" void getResReference__15J2DResReferenceCFUs();
extern "C" void getName__15J2DResReferenceCFUs();
extern "C" void __destroy_new_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__10J2DAnmBase[4];
extern "C" extern void* __vt__15J2DAnmTransform[5 + 4 /* padding */];
extern "C" extern void* __vt__10JUTNameTab[3];
extern "C" extern void* __vt__14J2DAnmVtxColor[5];
extern "C" u8 mDataManage__9J2DScreen[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80456300-80456308 004900 0004+04 10/10 0/0 0/0 .sdata2          @1573 */
SECTION_SDATA2 static f32 lit_1573[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80456308-80456310 004908 0008+00 5/5 0/0 0/0 .sdata2          @1576 */
SECTION_SDATA2 static f64 lit_1576 = 4503599627370496.0 /* cast u32 to float */;

/* 8030A590-8030AAFC 304ED0 056C+00 1/0 0/0 0/0 .text
 * getTransform__19J2DAnmTransformFullCFUsP16J3DTransformInfo   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTransformFull::getTransform(u16 param_0, J3DTransformInfo* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getTransform__19J2DAnmTransformFullCFUsP16J3DTransformInfo.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456310-80456314 004910 0004+00 2/2 0/0 0/0 .sdata2          @1619 */
SECTION_SDATA2 static f32 lit_1619 = 1.0f;

/* 8030AAFC-8030AF24 30543C 0428+00 1/0 0/0 0/0 .text
 * calcTransform__18J2DAnmTransformKeyCFfUsP16J3DTransformInfo  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTransformKey::calcTransform(f32 param_0, u16 param_1,
                                           J3DTransformInfo* param_2) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/calcTransform__18J2DAnmTransformKeyCFfUsP16J3DTransformInfo.s"
}
#pragma pop

/* 8030AF24-8030AFC8 305864 00A4+00 3/0 0/0 0/0 .text
 * searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmColor::searchUpdateMaterialID(J2DScreen* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen.s"
}
#pragma pop

/* 8030AFC8-8030B200 305908 0238+00 1/0 0/0 0/0 .text getColor__15J2DAnmColorFullCFUsP8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmColorFull::getColor(u16 param_0, _GXColor* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getColor__15J2DAnmColorFullCFUsP8_GXColor.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456314-80456318 004914 0004+00 3/3 0/0 0/0 .sdata2          @1748 */
SECTION_SDATA2 static f32 lit_1748 = 255.0f;

/* 8030B200-8030B4C4 305B40 02C4+00 1/0 0/0 0/0 .text getColor__14J2DAnmColorKeyCFUsP8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmColorKey::getColor(u16 param_0, _GXColor* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getColor__14J2DAnmColorKeyCFUsP8_GXColor.s"
}
#pragma pop

/* 8030B4C4-8030B704 305E04 0240+00 1/0 0/0 0/0 .text
 * getColor__18J2DAnmVtxColorFullCFUcUsP8_GXColor               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmVtxColorFull::getColor(u8 param_0, u16 param_1, _GXColor* param_2) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getColor__18J2DAnmVtxColorFullCFUcUsP8_GXColor.s"
}
#pragma pop

/* 8030B704-8030B9F0 306044 02EC+00 1/0 0/0 0/0 .text
 * getColor__17J2DAnmVtxColorKeyCFUcUsP8_GXColor                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmVtxColorKey::getColor(u8 param_0, u16 param_1, _GXColor* param_2) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getColor__17J2DAnmVtxColorKeyCFUcUsP8_GXColor.s"
}
#pragma pop

/* 8030B9F0-8030BC60 306330 0270+00 0/0 1/1 0/0 .text
 * calcTransform__19J2DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTextureSRTKey::calcTransform(f32 param_0, u16 param_1,
                                            J3DTextureSRTInfo* param_2) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/calcTransform__19J2DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo.s"
}
#pragma pop

/* 8030BC60-8030BD10 3065A0 00B0+00 1/0 0/0 0/0 .text
 * searchUpdateMaterialID__19J2DAnmTextureSRTKeyFP9J2DScreen    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTextureSRTKey::searchUpdateMaterialID(J2DScreen* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/searchUpdateMaterialID__19J2DAnmTextureSRTKeyFP9J2DScreen.s"
}
#pragma pop

/* 8030BD10-8030BEE8 306650 01D8+00 1/0 0/0 0/0 .text
 * searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTexPattern::searchUpdateMaterialID(J2DScreen* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen.s"
}
#pragma pop

/* 8030BEE8-8030BF9C 306828 00B4+00 2/2 1/1 0/0 .text            getTexNo__16J2DAnmTexPatternCFUsPUs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTexPattern::getTexNo(u16 param_0, u16* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getTexNo__16J2DAnmTexPatternCFUsPUs.s"
}
#pragma pop

/* 8030BF9C-8030BFF0 3068DC 0054+00 0/0 1/1 0/0 .text            getResTIMG__16J2DAnmTexPatternCFUs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTexPattern::getResTIMG(u16 param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getResTIMG__16J2DAnmTexPatternCFUs.s"
}
#pragma pop

/* 8030BFF0-8030C048 306930 0058+00 0/0 1/1 0/0 .text            getPalette__16J2DAnmTexPatternCFUs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTexPattern::getPalette(u16 param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getPalette__16J2DAnmTexPatternCFUs.s"
}
#pragma pop

/* 8030C048-8030C0F0 306988 00A8+00 0/0 3/3 0/0 .text getVisibility__20J2DAnmVisibilityFullCFUsPUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmVisibilityFull::getVisibility(u16 param_0, u8* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getVisibility__20J2DAnmVisibilityFullCFUsPUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456318-8045631C 004918 0004+00 1/1 0/0 0/0 .sdata2          @2110 */
SECTION_SDATA2 static f32 lit_2110 = -1024.0f;

/* 8045631C-80456320 00491C 0004+00 1/1 0/0 0/0 .sdata2          @2111 */
SECTION_SDATA2 static f32 lit_2111 = 1023.0f;

/* 8030C0F0-8030C3B4 306A30 02C4+00 0/0 1/1 0/0 .text
 * getTevColorReg__15J2DAnmTevRegKeyCFUsP11_GXColorS10          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTevRegKey::getTevColorReg(u16 param_0, _GXColorS10* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getTevColorReg__15J2DAnmTevRegKeyCFUsP11_GXColorS10.s"
}
#pragma pop

/* 8030C3B4-8030C678 306CF4 02C4+00 0/0 1/1 0/0 .text
 * getTevKonstReg__15J2DAnmTevRegKeyCFUsP8_GXColor              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTevRegKey::getTevKonstReg(u16 param_0, _GXColor* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getTevKonstReg__15J2DAnmTevRegKeyCFUsP8_GXColor.s"
}
#pragma pop

/* 8030C678-8030C77C 306FB8 0104+00 1/0 0/0 0/0 .text
 * searchUpdateMaterialID__15J2DAnmTevRegKeyFP9J2DScreen        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTevRegKey::searchUpdateMaterialID(J2DScreen* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/searchUpdateMaterialID__15J2DAnmTevRegKeyFP9J2DScreen.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456320-80456328 004920 0008+00 1/1 0/0 0/0 .sdata2          @2379 */
SECTION_SDATA2 static f64 lit_2379 = 4503601774854144.0 /* cast s32 to float */;

/* 8030C77C-8030C9B0 3070BC 0234+00 6/6 0/0 0/0 .text
 * J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8030C77C(void* _this, f32 param_0, J3DAnmKeyTableBase* param_1,
                                  s16* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/func_8030C77C.s"
}
#pragma pop

/* 8030C9B0-8030CB2C 3072F0 017C+00 2/2 0/0 0/0 .text
 * J2DGetKeyFrameInterpolation<f>__FfP18J3DAnmKeyTableBasePf    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8030C9B0(void* _this, f32 param_0, J3DAnmKeyTableBase* param_1,
                                  f32* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/func_8030C9B0.s"
}
#pragma pop

/* 8030CB2C-8030CB3C 30746C 0010+00 1/1 0/0 0/0 .text
 * __ct__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::J2DAnmTexPatternTIMGPointer() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/__ct__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv.s"
}
#pragma pop

/* 8030CB3C-8030CB90 30747C 0054+00 2/2 0/0 0/0 .text
 * __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::~J2DAnmTexPatternTIMGPointer() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/__dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD728-803CD738 02A848 0010+00 0/0 2/2 0/0 .data            __vt__15J2DAnmTevRegKey */
SECTION_DATA extern void* __vt__15J2DAnmTevRegKey[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15J2DAnmTevRegKeyFv,
    (void*)searchUpdateMaterialID__15J2DAnmTevRegKeyFP9J2DScreen,
};

/* 803CD738-803CD748 02A858 0010+00 1/1 1/1 0/0 .data            __vt__16J2DAnmTexPattern */
SECTION_DATA extern void* __vt__16J2DAnmTexPattern[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16J2DAnmTexPatternFv,
    (void*)searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen,
};

/* 8030CB90-8030CC20 3074D0 0090+00 1/0 0/0 0/0 .text            __dt__16J2DAnmTexPatternFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmTexPattern::~J2DAnmTexPattern() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/__dt__16J2DAnmTexPatternFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD748-803CD758 02A868 0010+00 0/0 2/2 0/0 .data            __vt__19J2DAnmTextureSRTKey */
SECTION_DATA extern void* __vt__19J2DAnmTextureSRTKey[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19J2DAnmTextureSRTKeyFv,
    (void*)searchUpdateMaterialID__19J2DAnmTextureSRTKeyFP9J2DScreen,
};

/* 803CD758-803CD76C 02A878 0014+00 1/1 1/1 0/0 .data            __vt__17J2DAnmVtxColorKey */
SECTION_DATA extern void* __vt__17J2DAnmVtxColorKey[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17J2DAnmVtxColorKeyFv,
    (void*)searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen,
    (void*)getColor__17J2DAnmVtxColorKeyCFUcUsP8_GXColor,
};

/* 8030CC20-8030CC8C 307560 006C+00 1/0 0/0 0/0 .text            __dt__17J2DAnmVtxColorKeyFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmVtxColorKey::~J2DAnmVtxColorKey() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/__dt__17J2DAnmVtxColorKeyFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD76C-803CD780 02A88C 0014+00 1/1 1/1 0/0 .data            __vt__18J2DAnmVtxColorFull */
SECTION_DATA extern void* __vt__18J2DAnmVtxColorFull[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18J2DAnmVtxColorFullFv,
    (void*)searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen,
    (void*)getColor__18J2DAnmVtxColorFullCFUcUsP8_GXColor,
};

/* 8030CC8C-8030CCF8 3075CC 006C+00 1/0 0/0 0/0 .text            __dt__18J2DAnmVtxColorFullFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmVtxColorFull::~J2DAnmVtxColorFull() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/__dt__18J2DAnmVtxColorFullFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD780-803CD794 02A8A0 0014+00 0/0 2/2 0/0 .data            __vt__14J2DAnmColorKey */
SECTION_DATA extern void* __vt__14J2DAnmColorKey[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14J2DAnmColorKeyFv,
    (void*)searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen,
    (void*)getColor__14J2DAnmColorKeyCFUsP8_GXColor,
};

/* 803CD794-803CD7A8 02A8B4 0014+00 1/1 1/1 0/0 .data            __vt__15J2DAnmColorFull */
SECTION_DATA extern void* __vt__15J2DAnmColorFull[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15J2DAnmColorFullFv,
    (void*)searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen,
    (void*)getColor__15J2DAnmColorFullCFUsP8_GXColor,
};

/* 803CD7A8-803CD7BC 02A8C8 0014+00 1/1 3/3 0/0 .data            __vt__11J2DAnmColor */
SECTION_DATA extern void* __vt__11J2DAnmColor[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11J2DAnmColorFv,
    (void*)searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen,
    (void*)getColor__11J2DAnmColorCFUsP8_GXColor,
};

/* 8030CCF8-8030CD7C 307638 0084+00 1/0 0/0 0/0 .text            __dt__15J2DAnmColorFullFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmColorFull::~J2DAnmColorFull() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/__dt__15J2DAnmColorFullFv.s"
}
#pragma pop

/* 8030CD7C-8030CDAC 3076BC 0030+00 1/0 0/0 0/0 .text
 * getTransform__18J2DAnmTransformKeyCFUsP16J3DTransformInfo    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DAnmTransformKey::getTransform(u16 param_0, J3DTransformInfo* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/getTransform__18J2DAnmTransformKeyCFUsP16J3DTransformInfo.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD7BC-803CD7D4 02A8DC 0018+00 0/0 2/2 0/0 .data            __vt__18J2DAnmTransformKey */
SECTION_DATA extern void* __vt__18J2DAnmTransformKey[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18J2DAnmTransformKeyFv,
    (void*)searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen,
    (void*)getTransform__18J2DAnmTransformKeyCFUsP16J3DTransformInfo,
    (void*)calcTransform__18J2DAnmTransformKeyCFfUsP16J3DTransformInfo,
};

/* 803CD7D4-803CD7E8 02A8F4 0014+00 1/1 1/1 0/0 .data            __vt__19J2DAnmTransformFull */
SECTION_DATA extern void* __vt__19J2DAnmTransformFull[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19J2DAnmTransformFullFv,
    (void*)searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen,
    (void*)getTransform__19J2DAnmTransformFullCFUsP16J3DTransformInfo,
};

/* 8030CDAC-8030CE18 3076EC 006C+00 1/0 0/0 0/0 .text            __dt__19J2DAnmTransformFullFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmTransformFull::~J2DAnmTransformFull() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DAnimation/__dt__19J2DAnmTransformFullFv.s"
}
#pragma pop
