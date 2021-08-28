//
// Generated By: dol2asm
// Translation Unit: J2DPicture
//

#include "JSystem/J2DGraph/J2DPicture.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__10J2DPictureFv();
extern "C" void __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive();
extern "C" void __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void func_802FC800();
extern "C" void private_readStream__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive();
extern "C" void initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT();
extern "C" void private_initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT();
extern "C" void initinfo__10J2DPictureFv();
extern "C" void __dt__10J2DPictureFv();
extern "C" void prepareTexture__10J2DPictureFUc();
extern "C" void insert__10J2DPictureFPC7ResTIMGP10JUTPaletteUcf();
extern "C" void insert__10J2DPictureFPCcP10JUTPaletteUcf();
extern "C" void insert__10J2DPictureFP10JUTTextureUcf();
extern "C" void remove__10J2DPictureFUc();
extern "C" void remove__10J2DPictureFP10JUTTexture();
extern "C" void changeTexture__10J2DPictureFPC7ResTIMGUc();
extern "C" void changeTexture__10J2DPictureFPCcUc();
extern "C" void changeTexture__10J2DPictureFPC7ResTIMGUcP10JUTPalette();
extern "C" void changeTexture__10J2DPictureFPCcUcP10JUTPalette();
extern "C" void drawSelf__10J2DPictureFff();
extern "C" void drawSelf__10J2DPictureFffPA3_A4_f();
extern "C" void drawFullSet__10J2DPictureFffffPA3_A4_f();
extern "C" void draw__10J2DPictureFffffbbb();
extern "C" void func_802FDF88();
extern "C" void drawTexCoord__10J2DPictureFffffssssssssPA3_A4_f();
extern "C" void setTevMode__10J2DPictureFv();
extern "C" void swap__10J2DPictureFRfRf();
extern "C" void setBlendColorRatio__10J2DPictureFff();
extern "C" void setBlendAlphaRatio__10J2DPictureFff();
extern "C" void setBlendKonstColor__10J2DPictureFv();
extern "C" void setBlendKonstAlpha__10J2DPictureFv();
extern "C" void getNewColor__10J2DPictureFPQ28JUtility6TColor();
extern "C" void setTexCoord__10J2DPictureFPC10JUTTexture10J2DBinding9J2DMirrorb();
extern "C" void func_802FED84();
extern "C" void isUsed__10J2DPictureFPC7ResTIMG();
extern "C" void getUsableTlut__10J2DPictureFUc();
extern "C" void getTlutID__10J2DPictureFPC7ResTIMGUc();
extern "C" void func_802FF204(void* _this);
extern "C" void append__10J2DPictureFP10JUTTexturef();
extern "C" void append__10J2DPictureFPC7ResTIMGP10JUTPalettef();
extern "C" void load__10J2DPictureFUc();
extern "C" void load__10J2DPictureF11_GXTexMapIDUc();
extern "C" s32 getTypeID__10J2DPictureCFv();
extern "C" void append__10J2DPictureFPCcP10JUTPalettef();
extern "C" void prepend__10J2DPictureFP10JUTTexturef();
extern "C" void prepend__10J2DPictureFPCcP10JUTPalettef();
extern "C" void prepend__10J2DPictureFPCcf();
extern "C" void prepend__10J2DPictureFPC7ResTIMGP10JUTPalettef();
extern "C" void prepend__10J2DPictureFPC7ResTIMGf();
extern "C" void remove__10J2DPictureFv();
extern "C" void draw__10J2DPictureFffUcbbb();
extern "C" void draw__10J2DPictureFffbbb();
extern "C" void drawOut__10J2DPictureFffffffff();
extern "C" void drawOut__10J2DPictureFffffff();
extern "C" void getTextureCount__10J2DPictureCFv();
extern "C" void isUsed__10J2DPictureFPC7ResFONT();
extern "C" void rewriteAlpha__10J2DPictureFv();

//
// External References:
//

extern "C" void setAlpha__7J2DPaneFUc();
extern "C" void setBlendRatio__10J2DPictureFff();
extern "C" void append__10J2DPictureFPCcf();
extern "C" void insert__10J2DPictureFPCcUcf();
extern "C" void getTexture__10J2DPictureCFUc();
extern "C" void calcMtx__7J2DPaneFv();
extern "C" void makeMatrix__7J2DPaneFff();
extern "C" void setWhite__10J2DPictureFQ28JUtility6TColor();
extern "C" void setBlack__10J2DPictureFQ28JUtility6TColor();
extern "C" void setAnimation__7J2DPaneFP15J2DAnmTevRegKey();
extern "C" void setAnimation__7J2DPaneFP11J2DAnmColor();
extern "C" void setBlackWhite__10J2DPictureFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey();
extern "C" void __ct__Q28JUtility6TColorFv();
extern "C" void append__10J2DPictureFPC7ResTIMGf();
extern "C" void insert__10J2DPictureFPC7ResTIMGUcf();
extern "C" void getWhite__10J2DPictureCFv();
extern "C" void getBlack__10J2DPictureCFv();
extern "C" void setAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void setAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setAnimation__7J2DPaneFP16J2DAnmTexPattern();
extern "C" bool getMaterial__10J2DPictureCFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void read__14JSUInputStreamFPvl();
extern "C" void peek__20JSURandomInputStreamFPvl();
extern "C" void seek__20JSURandomInputStreamFl17JSUStreamSeekFrom();
extern "C" void __dt__10JUTTextureFv();
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGUc();
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette();
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut();
extern "C" void attachPalette__10JUTTextureFP10JUTPalette();
extern "C" void load__10JUTTextureF11_GXTexMapID();
extern "C" void storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT();
extern "C" void __ct__7J2DPaneFv();
extern "C" void func_802F5E88();
extern "C" void makePaneStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream();
extern "C" void __dt__7J2DPaneFv();
extern "C" void func_802F6D18();
extern "C" void move__7J2DPaneFff();
extern "C" void add__7J2DPaneFff();
extern "C" void resize__7J2DPaneFff();
extern "C" void search__7J2DPaneFUx();
extern "C" void searchUserInfo__7J2DPaneFUx();
extern "C" void isUsed__7J2DPaneFPC7ResTIMG();
extern "C" void isUsed__7J2DPaneFPC7ResFONT();
extern "C" void makeMatrix__7J2DPaneFffff();
extern "C" void setCullBack__7J2DPaneF11_GXCullMode();
extern "C" void makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream();
extern "C" void J2DCast_F32_to_S16__7J2DPaneFfUc();
extern "C" void getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive();
extern "C" void setAnimation__7J2DPaneFP10J2DAnmBase();
extern "C" void setAnimation__7J2DPaneFP15J2DAnmTransform();
extern "C" void clearAnmTransform__7J2DPaneFv();
extern "C" void animationTransform__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void animationPane__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setAnimationVC__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void setCullBack__7J2DPaneFb();
extern "C" void setConnectParent__7J2DPaneFb();
extern "C" void update__7J2DPaneFv();
extern "C" void getNameResource__9J2DScreenFPCc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevDirect();
extern "C" void GXSetTevKColor();
extern "C" void GXSetTevKColorSel();
extern "C" void GXSetTevKAlphaSel();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CD1D8-803CD328 02A2F8 014C+04 6/6 0/0 0/0 .data            __vt__10J2DPicture */
SECTION_DATA extern void* __vt__10J2DPicture[83 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10J2DPictureFv,
    (void*)getTypeID__10J2DPictureCFv,
    (void*)move__7J2DPaneFff,
    (void*)add__7J2DPaneFff,
    (void*)resize__7J2DPaneFff,
    (void*)setCullBack__7J2DPaneFb,
    (void*)setCullBack__7J2DPaneF11_GXCullMode,
    (void*)setAlpha__7J2DPaneFUc,
    (void*)setConnectParent__7J2DPaneFb,
    (void*)calcMtx__7J2DPaneFv,
    (void*)update__7J2DPaneFv,
    (void*)drawSelf__10J2DPictureFff,
    (void*)drawSelf__10J2DPictureFffPA3_A4_f,
    (void*)search__7J2DPaneFUx,
    (void*)searchUserInfo__7J2DPaneFUx,
    (void*)makeMatrix__7J2DPaneFff,
    (void*)makeMatrix__7J2DPaneFffff,
    (void*)isUsed__10J2DPictureFPC7ResTIMG,
    (void*)isUsed__10J2DPictureFPC7ResFONT,
    (void*)clearAnmTransform__7J2DPaneFv,
    (void*)rewriteAlpha__10J2DPictureFv,
    (void*)setAnimation__7J2DPaneFP10J2DAnmBase,
    (void*)setAnimation__7J2DPaneFP15J2DAnmTransform,
    (void*)setAnimation__7J2DPaneFP11J2DAnmColor,
    (void*)setAnimation__7J2DPaneFP16J2DAnmTexPattern,
    (void*)setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey,
    (void*)setAnimation__7J2DPaneFP15J2DAnmTevRegKey,
    (void*)setAnimation__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setAnimation__7J2DPaneFP14J2DAnmVtxColor,
    (void*)animationTransform__7J2DPaneFPC15J2DAnmTransform,
    (void*)setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor,
    (void*)setAnimationVC__7J2DPaneFP14J2DAnmVtxColor,
    (void*)animationPane__7J2DPaneFPC15J2DAnmTransform,
    (void*)initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT,
    (void*)prepareTexture__10J2DPictureFUc,
    (void*)append__10J2DPictureFPC7ResTIMGf,
    (void*)append__10J2DPictureFPC7ResTIMGP10JUTPalettef,
    (void*)append__10J2DPictureFPCcf,
    (void*)append__10J2DPictureFPCcP10JUTPalettef,
    (void*)append__10J2DPictureFP10JUTTexturef,
    (void*)prepend__10J2DPictureFPC7ResTIMGf,
    (void*)prepend__10J2DPictureFPC7ResTIMGP10JUTPalettef,
    (void*)prepend__10J2DPictureFPCcf,
    (void*)prepend__10J2DPictureFPCcP10JUTPalettef,
    (void*)prepend__10J2DPictureFP10JUTTexturef,
    (void*)insert__10J2DPictureFPC7ResTIMGUcf,
    (void*)insert__10J2DPictureFPC7ResTIMGP10JUTPaletteUcf,
    (void*)insert__10J2DPictureFPCcUcf,
    (void*)insert__10J2DPictureFPCcP10JUTPaletteUcf,
    (void*)insert__10J2DPictureFP10JUTTextureUcf,
    (void*)remove__10J2DPictureFUc,
    (void*)remove__10J2DPictureFv,
    (void*)remove__10J2DPictureFP10JUTTexture,
    (void*)draw__10J2DPictureFffbbb,
    (void*)draw__10J2DPictureFffUcbbb,
    (void*)draw__10J2DPictureFffffbbb,
    (void*)drawOut__10J2DPictureFffffff,
    (void*)drawOut__10J2DPictureFffffffff,
    (void*)func_802FDF88,
    (void*)load__10J2DPictureF11_GXTexMapIDUc,
    (void*)load__10J2DPictureFUc,
    (void*)setBlendRatio__10J2DPictureFff,
    (void*)setBlendColorRatio__10J2DPictureFff,
    (void*)setBlendAlphaRatio__10J2DPictureFff,
    (void*)changeTexture__10J2DPictureFPC7ResTIMGUc,
    (void*)changeTexture__10J2DPictureFPCcUc,
    (void*)changeTexture__10J2DPictureFPC7ResTIMGUcP10JUTPalette,
    (void*)changeTexture__10J2DPictureFPCcUcP10JUTPalette,
    (void*)getTexture__10J2DPictureCFUc,
    (void*)getTextureCount__10J2DPictureCFv,
    (void*)setBlack__10J2DPictureFQ28JUtility6TColor,
    (void*)setWhite__10J2DPictureFQ28JUtility6TColor,
    (void*)setBlackWhite__10J2DPictureFQ28JUtility6TColorQ28JUtility6TColor,
    (void*)getBlack__10J2DPictureCFv,
    (void*)getWhite__10J2DPictureCFv,
    (void*)getMaterial__10J2DPictureCFv,
    (void*)drawFullSet__10J2DPictureFffffPA3_A4_f,
    (void*)drawTexCoord__10J2DPictureFffffssssssssPA3_A4_f,
    (void*)getUsableTlut__10J2DPictureFUc,
    /* padding */
    NULL,
};

/* 802FC050-802FC118 2F6990 00C8+00 0/0 2/2 0/0 .text            __ct__10J2DPictureFv */
#ifdef NONMATCHING
J2DPicture::J2DPicture()
    : field_0x10a(), field_0x12c(NULL), mWhite(), mBlack(), mCornerColor(), field_0x148(),
      field_0x14c() {
    for (int i = 0; i < 2; i++) {
        mTexture[i] = NULL;
    }

    field_0x109 = 0;
    mTextureCount = 0;
    initinfo();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DPicture::J2DPicture() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/__ct__10J2DPictureFv.s"
}
#pragma pop
#endif

/* 802FC118-802FC1D4 2F6A58 00BC+00 0/0 1/1 0/0 .text
 * __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DPicture::J2DPicture(J2DPane* param_0, JSURandomInputStream* param_1, JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/__ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456260-80456268 004860 0008+00 1/1 0/0 0/0 .sdata2          @1739 */
SECTION_SDATA2 static f64 lit_1739 = 4503599627370496.0 /* cast u32 to float */;

/* 802FC1D4-802FC708 2F6B14 0534+00 0/0 1/1 0/0 .text
 * __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DPicture::J2DPicture(J2DPane* param_0, JSURandomInputStream* param_1, J2DMaterial* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/__ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456268-8045626C 004868 0004+00 9/9 0/0 0/0 .sdata2          @1767 */
SECTION_SDATA2 static f32 lit_1767 = 1.0f;

/* 802FC708-802FC800 2F7048 00F8+00 0/0 20/20 1/1 .text            __ct__10J2DPictureFPC7ResTIMG */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DPicture::J2DPicture(ResTIMG const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/__ct__10J2DPictureFPC7ResTIMG.s"
}
#pragma pop

/* 802FC800-802FC8E8 2F7140 00E8+00 0/0 5/5 0/0 .text
 * __ct__10J2DPictureFUxRCQ29JGeometry8TBox2<f>PC7ResTIMGPC7ResTLUT */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DPicture::J2DPicture(u64 param_0, JGeometry::TBox2<f32> const& param_1,
                           ResTIMG const* param_2, ResTLUT const* param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/func_802FC800.s"
}
#pragma pop

/* 802FC8E8-802FCCDC 2F7228 03F4+00 1/1 0/0 0/0 .text
 * private_readStream__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::private_readStream(J2DPane* param_0, JSURandomInputStream* param_1,
                                        JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/private_readStream__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045626C-80456270 00486C 0004+00 9/9 0/0 0/0 .sdata2          @2017 */
SECTION_SDATA2 static u8 lit_2017[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456270-80456278 004870 0008+00 7/7 0/0 0/0 .sdata2          @2021 */
SECTION_SDATA2 static f64 lit_2021 = 4503601774854144.0 /* cast s32 to float */;

/* 802FCCDC-802FCD70 2F761C 0094+00 1/0 0/0 0/0 .text initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::initiate(ResTIMG const* param_0, ResTLUT const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT.s"
}
#pragma pop

/* 802FCD70-802FCE9C 2F76B0 012C+00 2/2 0/0 0/0 .text
 * private_initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::private_initiate(ResTIMG const* param_0, ResTLUT const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/private_initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT.s"
}
#pragma pop

/* 802FCE9C-802FCFF0 2F77DC 0154+00 3/3 0/0 0/0 .text            initinfo__10J2DPictureFv */
// matches with real literal
#ifdef NONMATCHING
void J2DPicture::initinfo() {
    id = 'PIC1';
    setTexCoord(NULL, BIND15, MIRROR0, false);
    setBlendRatio(lit_1767, lit_1767);

    mBlack = 0;
    mWhite = -1;
    setCornerColor(-1, -1, -1, -1);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::initinfo() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/initinfo__10J2DPictureFv.s"
}
#pragma pop
#endif

/* 802FCFF0-802FD098 2F7930 00A8+00 1/0 3/3 0/0 .text            __dt__10J2DPictureFv */
J2DPicture::~J2DPicture() {
    for (int i = 0; i < 2; i++) {
        if ((int)(field_0x109 & 1 << i) != 0) {
            delete mTexture[i];
        }
    }
    delete field_0x12c;
}

/* 802FD098-802FD168 2F79D8 00D0+00 1/0 0/0 0/0 .text            prepareTexture__10J2DPictureFUc */
bool J2DPicture::prepareTexture(u8 param_0) {
    for (u8 i = 0; i < param_0; i++) {
        if (i >= 2) {
            return 0;
        }

        if (mTexture[i] == NULL) {
            JUTTexture* tmp = new JUTTexture();
            mTexture[i] = tmp;

            if (mTexture[i] == NULL) {
                return 0;
            }
            field_0x109 |= (1 << i);
        }
    }
    return 1;
}

/* 802FD168-802FD4B4 2F7AA8 034C+00 1/0 0/0 0/0 .text
 * insert__10J2DPictureFPC7ResTIMGP10JUTPaletteUcf              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::insert(ResTIMG const* param_0, JUTPalette* param_1, u8 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/insert__10J2DPictureFPC7ResTIMGP10JUTPaletteUcf.s"
}
#pragma pop

/* 802FD4B4-802FD524 2F7DF4 0070+00 1/0 0/0 0/0 .text insert__10J2DPictureFPCcP10JUTPaletteUcf */
void J2DPicture::insert(char const* param_0, JUTPalette* param_1, u8 param_2, f32 param_3) {
    void* resource = J2DScreen::getNameResource(param_0);
    insert((ResTIMG*)resource, param_1, param_2, param_3);
}

/* 802FD524-802FD6F4 2F7E64 01D0+00 1/0 0/0 0/0 .text insert__10J2DPictureFP10JUTTextureUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::insert(JUTTexture* param_0, u8 param_1, f32 param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/insert__10J2DPictureFP10JUTTextureUcf.s"
}
#pragma pop

/* 802FD6F4-802FD814 2F8034 0120+00 1/0 0/0 0/0 .text            remove__10J2DPictureFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int J2DPicture::remove(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/remove__10J2DPictureFUc.s"
}
#pragma pop

/* 802FD814-802FD874 2F8154 0060+00 1/0 0/0 0/0 .text            remove__10J2DPictureFP10JUTTexture
 */
void J2DPicture::remove(JUTTexture* param_0) {
    u8 i = 0;
    for (; i < mTextureCount; i++) {
        if (mTexture[i] == param_0) {
            break;
        }
    }
    remove(i);
}

/* 802FD874-802FD964 2F81B4 00F0+00 1/0 0/0 0/0 .text changeTexture__10J2DPictureFPC7ResTIMGUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::changeTexture(ResTIMG const* param_0, u8 param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/changeTexture__10J2DPictureFPC7ResTIMGUc.s"
}
#pragma pop

/* 802FD964-802FD9BC 2F82A4 0058+00 1/0 0/0 0/0 .text            changeTexture__10J2DPictureFPCcUc
 */
void J2DPicture::changeTexture(char const* param_0, u8 param_1) {
    void* resource = J2DScreen::getNameResource(param_0);
    changeTexture((ResTIMG*)resource, param_1);
}

/* 802FD9BC-802FDAC8 2F82FC 010C+00 1/0 0/0 0/0 .text
 * changeTexture__10J2DPictureFPC7ResTIMGUcP10JUTPalette        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::changeTexture(ResTIMG const* param_0, u8 param_1, JUTPalette* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/changeTexture__10J2DPictureFPC7ResTIMGUcP10JUTPalette.s"
}
#pragma pop

/* 802FDAC8-802FDB28 2F8408 0060+00 1/0 0/0 0/0 .text
 * changeTexture__10J2DPictureFPCcUcP10JUTPalette               */
void J2DPicture::changeTexture(char const* param_0, u8 param_1, JUTPalette* param_2) {
    void* resource = J2DScreen::getNameResource(param_0);
    changeTexture((ResTIMG*)resource, param_1, param_2);
}

/* 802FDB28-802FDB90 2F8468 0068+00 1/0 1/0 0/0 .text            drawSelf__10J2DPictureFff */
void J2DPicture::drawSelf(f32 param_0, f32 param_1) {
    Mtx tmp;
    PSMTXIdentity(tmp);

    drawSelf(param_0, param_1, &tmp);
}

/* 802FDB90-802FDBFC 2F84D0 006C+00 1/0 0/0 0/0 .text            drawSelf__10J2DPictureFffPA3_A4_f
 */
void J2DPicture::drawSelf(f32 param_0, f32 param_1, Mtx* param_2) {
    if (mTexture[0] != NULL && mTextureCount != 0) {
        drawFullSet(mGlobalBounds.i.x + param_0, mGlobalBounds.i.y + param_1,
                    mBounds.f.x - mBounds.i.x, mBounds.f.y - mBounds.i.y, param_2);
    }
}

/* 802FDBFC-802FDC70 2F853C 0074+00 1/0 0/0 0/0 .text drawFullSet__10J2DPictureFffffPA3_A4_f */
void J2DPicture::drawFullSet(f32 param_0, f32 param_1, f32 param_2, f32 param_3, Mtx* param_4) {
    if (mTexture[0] != NULL && mTextureCount != 0) {
        drawTexCoord(mBounds.i.x, mBounds.i.y, param_2, param_3, field_0x10a[0].x, field_0x10a[0].y,
                     field_0x10a[1].x, field_0x10a[1].y, field_0x10a[2].x, field_0x10a[2].y,
                     field_0x10a[3].x, field_0x10a[3].y, param_4);
    }
}

/* 802FDC70-802FDF88 2F85B0 0318+00 1/0 1/1 0/0 .text            draw__10J2DPictureFffffbbb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::draw(f32 param_0, f32 param_1, f32 param_2, f32 param_3, bool param_4,
                          bool param_5, bool param_6) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/draw__10J2DPictureFffffbbb.s"
}
#pragma pop

/* 802FDF88-802FE380 2F88C8 03F8+00 1/0 0/0 0/0 .text
 * drawOut__10J2DPictureFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::drawOut(JGeometry::TBox2<f32> const& param_0,
                             JGeometry::TBox2<f32> const& param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/func_802FDF88.s"
}
#pragma pop

/* 802FE380-802FE5D0 2F8CC0 0250+00 1/0 0/0 0/0 .text
 * drawTexCoord__10J2DPictureFffffssssssssPA3_A4_f              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::drawTexCoord(f32 param_0, f32 param_1, f32 param_2, f32 param_3, s16 param_4,
                                  s16 param_5, s16 param_6, s16 param_7, s16 param_8, s16 param_9,
                                  s16 param_10, s16 param_11, f32 (*param_12)[3][4]) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/drawTexCoord__10J2DPictureFffffssssssssPA3_A4_f.s"
}
#pragma pop

/* 802FE5D0-802FEA60 2F8F10 0490+00 3/3 0/0 0/0 .text            setTevMode__10J2DPictureFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::setTevMode() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/setTevMode__10J2DPictureFv.s"
}
#pragma pop

/* 802FEA60-802FEA74 2F93A0 0014+00 1/1 0/0 0/0 .text            swap__10J2DPictureFRfRf */
void J2DPicture::swap(f32& lhs, f32& rhs) {
    f32 tmp = lhs;
    lhs = rhs;
    rhs = tmp;
}

/* 802FEA74-802FEA9C 2F93B4 0028+00 1/0 0/0 0/0 .text            setBlendColorRatio__10J2DPictureFff
 */
void J2DPicture::setBlendColorRatio(f32 param_0, f32 param_1) {
    field_0x11c[0] = param_0;
    field_0x11c[1] = param_1;
    setBlendKonstColor();
}

/* 802FEA9C-802FEAC4 2F93DC 0028+00 1/0 0/0 0/0 .text            setBlendAlphaRatio__10J2DPictureFff
 */
void J2DPicture::setBlendAlphaRatio(f32 param_0, f32 param_1) {
    field_0x11c[2] = param_0;
    field_0x11c[3] = param_1;
    setBlendKonstAlpha();
}

/* ############################################################################################## */
/* 80456278-8045627C 004878 0004+00 2/2 0/0 0/0 .sdata2          @2758 */
SECTION_SDATA2 static f32 lit_2758 = 255.0f;

/* 802FEAC4-802FEB94 2F9404 00D0+00 4/4 0/0 0/0 .text            setBlendKonstColor__10J2DPictureFv
 */
// matches with real literals
#ifdef NONMATCHING
void J2DPicture::setBlendKonstColor() {
    int uvar3 = 0;
    for (u8 i = 1; i < mTextureCount; i++) {
        f32 tmp = 0.0f;
        for (u8 j = 0; j < i; j++) {
            tmp += field_0x11c[j];
        }

        f32 tmp2 = tmp + field_0x11c[i];
        if (tmp2 != 0.0f) {
            // probably fake match but idk whats happening here
            uvar3 |= (u8)(255.0f * (1.0f - tmp / tmp2)) << (i - 1) * 8;
        }
    }
    field_0x148 = uvar3;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::setBlendKonstColor() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/setBlendKonstColor__10J2DPictureFv.s"
}
#pragma pop
#endif

/* 802FEB94-802FEC64 2F94D4 00D0+00 4/4 0/0 0/0 .text            setBlendKonstAlpha__10J2DPictureFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::setBlendKonstAlpha() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/setBlendKonstAlpha__10J2DPictureFv.s"
}
#pragma pop

/* 802FEC64-802FED44 2F95A4 00E0+00 3/3 0/0 0/0 .text
 * getNewColor__10J2DPictureFPQ28JUtility6TColor                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::getNewColor(JUtility::TColor* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/getNewColor__10J2DPictureFPQ28JUtility6TColor.s"
}
#pragma pop

/* 802FED44-802FED84 2F9684 0040+00 4/4 0/0 0/0 .text
 * setTexCoord__10J2DPictureFPC10JUTTexture10J2DBinding9J2DMirrorb */
void J2DPicture::setTexCoord(JUTTexture const* param_0, J2DBinding param_1, J2DMirror param_2,
                             bool param_3) {
    setTexCoord(&field_0x10a[0], param_0, param_1, param_2, param_3);
}

/* ############################################################################################## */
/* 8045627C-80456280 00487C 0004+00 1/1 0/0 0/0 .sdata2          @2933 */
SECTION_SDATA2 static f32 lit_2933 = 0.5f;

/* 802FED84-802FF09C 2F96C4 0318+00 2/2 0/0 0/0 .text
 * setTexCoord__10J2DPictureFPQ29JGeometry8TVec2<s>PC10JUTTexture10J2DBinding9J2DMirrorb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::setTexCoord(JGeometry::TVec2<s16>* param_0, JUTTexture const* param_1,
                                 J2DBinding param_2, J2DMirror param_3, bool param_4) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/func_802FED84.s"
}
#pragma pop

/* 802FF09C-802FF100 2F99DC 0064+00 1/0 0/0 0/0 .text            isUsed__10J2DPictureFPC7ResTIMG */
bool J2DPicture::isUsed(ResTIMG const* param_0) {
    for (u8 i = 0; i < mTextureCount; i++) {
        if (mTexture[i] != NULL && mTexture[i]->getTexInfo() == param_0) {
            return true;
        }
    }

    return J2DPane::isUsed(param_0);
}

/* 802FF100-802FF1D0 2F9A40 00D0+00 1/0 0/0 0/0 .text            getUsableTlut__10J2DPictureFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::getUsableTlut(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/getUsableTlut__10J2DPictureFUc.s"
}
#pragma pop

/* 802FF1D0-802FF204 2F9B10 0034+00 1/1 1/1 0/0 .text getTlutID__10J2DPictureFPC7ResTIMGUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u8 J2DPicture::getTlutID(ResTIMG const* param_0, u8 param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/getTlutID__10J2DPictureFPC7ResTIMGUc.s"
}
#pragma pop

/* 802FF204-802FF208 2F9B44 0004+00 5/5 1/1 0/0 .text            __ct__Q29JGeometry8TVec2<s>Fv */
extern "C" void func_802FF204(void* _this) {
    /* empty function */
}

/* 802FF208-802FF238 2F9B48 0030+00 1/0 0/0 0/0 .text            append__10J2DPictureFP10JUTTexturef
 */
void J2DPicture::append(JUTTexture* param_0, f32 param_1) {
    insert(param_0, mTextureCount, param_1);
}

/* 802FF238-802FF268 2F9B78 0030+00 1/0 0/0 0/0 .text
 * append__10J2DPictureFPC7ResTIMGP10JUTPalettef                */
void J2DPicture::append(ResTIMG const* param_0, JUTPalette* param_1, f32 param_2) {
    insert(param_0, param_1, mTextureCount, param_2);
}

/* 802FF268-802FF29C 2F9BA8 0034+00 1/0 0/0 0/0 .text            load__10J2DPictureFUc */
void J2DPicture::load(u8 param_0) {
    load((_GXTexMapID)param_0, param_0);
}

/* 802FF29C-802FF2E8 2F9BDC 004C+00 1/0 0/0 0/0 .text            load__10J2DPictureF11_GXTexMapIDUc
 */
void J2DPicture::load(_GXTexMapID param_0, u8 param_1) {
    if (param_1 < mTextureCount && param_1 < 2 && mTexture[param_1] != NULL) {
        mTexture[param_1]->load(param_0);
    }
}

/* 802FF2E8-802FF2F0 2F9C28 0008+00 1/0 1/0 0/0 .text            getTypeID__10J2DPictureCFv */
s32 J2DPicture::getTypeID() const {
    return 18;
}

/* 802FF2F0-802FF320 2F9C30 0030+00 1/0 0/0 0/0 .text append__10J2DPictureFPCcP10JUTPalettef */
void J2DPicture::append(char const* param_0, JUTPalette* param_1, f32 param_2) {
    insert(param_0, param_1, mTextureCount, param_2);
}

/* 802FF320-802FF350 2F9C60 0030+00 1/0 0/0 0/0 .text prepend__10J2DPictureFP10JUTTexturef */
void J2DPicture::prepend(JUTTexture* param_0, f32 param_1) {
    insert(param_0, 0, param_1);
}

/* 802FF350-802FF380 2F9C90 0030+00 1/0 0/0 0/0 .text prepend__10J2DPictureFPCcP10JUTPalettef */
void J2DPicture::prepend(char const* param_0, JUTPalette* param_1, f32 param_2) {
    insert(param_0, param_1, 0, param_2);
}

/* 802FF380-802FF3B0 2F9CC0 0030+00 1/0 0/0 0/0 .text            prepend__10J2DPictureFPCcf */
void J2DPicture::prepend(char const* param_0, f32 param_1) {
    insert(param_0, 0, param_1);
}

/* 802FF3B0-802FF3E0 2F9CF0 0030+00 1/0 0/0 0/0 .text
 * prepend__10J2DPictureFPC7ResTIMGP10JUTPalettef               */
void J2DPicture::prepend(ResTIMG const* param_0, JUTPalette* param_1, f32 param_2) {
    insert(param_0, param_1, 0, param_2);
}

/* 802FF3E0-802FF410 2F9D20 0030+00 1/0 0/0 0/0 .text            prepend__10J2DPictureFPC7ResTIMGf
 */
void J2DPicture::prepend(ResTIMG const* param_0, f32 param_1) {
    insert(param_0, 0, param_1);
}

/* 802FF410-802FF448 2F9D50 0038+00 1/0 0/0 0/0 .text            remove__10J2DPictureFv */
int J2DPicture::remove() {
    return remove(mTextureCount - 1);
}

/* 802FF448-802FF4E0 2F9D88 0098+00 1/0 0/0 0/0 .text            draw__10J2DPictureFffUcbbb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::draw(f32 param_0, f32 param_1, u8 param_2, bool param_3, bool param_4,
                          bool param_5) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/draw__10J2DPictureFffUcbbb.s"
}
#pragma pop

/* 802FF4E0-802FF524 2F9E20 0044+00 1/0 0/0 0/0 .text            draw__10J2DPictureFffbbb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::draw(f32 param_0, f32 param_1, bool param_2, bool param_3, bool param_4) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/draw__10J2DPictureFffbbb.s"
}
#pragma pop

/* 802FF524-802FF588 2F9E64 0064+00 1/0 0/0 0/0 .text            drawOut__10J2DPictureFffffffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::drawOut(f32 param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                             f32 param_5, f32 param_6, f32 param_7) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/drawOut__10J2DPictureFffffffff.s"
}
#pragma pop

/* 802FF588-802FF634 2F9EC8 00AC+00 1/0 0/0 0/0 .text            drawOut__10J2DPictureFffffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::drawOut(f32 param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                             f32 param_5) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DPicture/drawOut__10J2DPictureFffffff.s"
}
#pragma pop

/* 802FF634-802FF63C 2F9F74 0008+00 1/0 0/0 0/0 .text            getTextureCount__10J2DPictureCFv */
u8 J2DPicture::getTextureCount() const {
    return mTextureCount;
}

/* 802FF63C-802FF65C 2F9F7C 0020+00 1/0 0/0 0/0 .text            isUsed__10J2DPictureFPC7ResFONT */
bool J2DPicture::isUsed(ResFONT const* param_0) {
    return J2DPane::isUsed(param_0);
}

/* 802FF65C-802FF660 2F9F9C 0004+00 1/0 0/0 0/0 .text            rewriteAlpha__10J2DPictureFv */
void J2DPicture::rewriteAlpha() {
    /* empty function */
}
