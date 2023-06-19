//
// Generated By: dol2asm
// Translation Unit: d/msg/d_msg_out_font
//

#include "d/msg/d_msg_out_font.h"
#include "d/com/d_com_inf_game.h"
#include "d/meter/d_meter2_info.h"
#include "d/msg/d_msg_object.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "global.h"
#include "d/com/d_com_inf_game.h"
#include "f_op/f_op_msg_mng.h"

//
// Forward References:
//

extern "C" void __ct__13COutFontSet_cFv();
extern "C" void __dt__13COutFontSet_cFv();
extern "C" void initialize__13COutFontSet_cFv();
extern "C" void drawFont__13COutFontSet_cFP10J2DTextBoxUcffffUlUc();
extern "C" void __ct__10COutFont_cFUc();
extern "C" void __dt__10COutFont_cFv();
extern "C" void setPane__10COutFont_cFP10J2DPicture();
extern "C" void createPane__10COutFont_cFv();
extern "C" void initialize__10COutFont_cFv();
extern "C" void drawFont__10COutFont_cFP10J2DTextBoxUcffffUlUc();
extern "C" void setAlphaRatio__10COutFont_cFf();
extern "C" void draw__10COutFont_cFP10J2DTextBoxfff();
extern "C" void reset__10COutFont_cFP10J2DTextBox();
extern "C" void setBlendAnime__10COutFont_cFP10J2DPictures();
extern "C" void getBtiName__10COutFont_cFi();
extern "C" extern char const* const d_msg_d_msg_out_font__stringBase0;

//
// External References:
//

extern "C" void fopMsgM_valueIncrease__FiiUc();
extern "C" void dMeter2Info_getNumberTextureName__Fi();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void rotate__7J2DPaneFff13J2DRotateAxisf();
extern "C" void getParentPane__7J2DPaneFv();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern dMsgObject_HIO_c g_MsgObject_HIO_c;

//
// Declarations:
//

/* ############################################################################################## */
/* 80399350-80399350 0259B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80399350 = "font_07_02.bti";
SECTION_DEAD static char const* const stringBase_8039935F = "font_20.bti";
SECTION_DEAD static char const* const stringBase_8039936B = "font_21.bti";
SECTION_DEAD static char const* const stringBase_80399377 = "font_30.bti";
SECTION_DEAD static char const* const stringBase_80399383 = "font_31.bti";
SECTION_DEAD static char const* const stringBase_8039938F = "font_34.bti";
SECTION_DEAD static char const* const stringBase_8039939B = "font_00.bti";
SECTION_DEAD static char const* const stringBase_803993A7 = "font_01.bti";
SECTION_DEAD static char const* const stringBase_803993B3 = "font_09.bti";
SECTION_DEAD static char const* const stringBase_803993BF = "font_04.bti";
SECTION_DEAD static char const* const stringBase_803993CB = "font_05.bti";
SECTION_DEAD static char const* const stringBase_803993D7 = "font_02.bti";
SECTION_DEAD static char const* const stringBase_803993E3 = "font_03.bti";
SECTION_DEAD static char const* const stringBase_803993EF = "font_06.bti";
SECTION_DEAD static char const* const stringBase_803993FB = "font_08.bti";
SECTION_DEAD static char const* const stringBase_80399407 = "font_07_01.bti";
SECTION_DEAD static char const* const stringBase_80399416 = "font_10.bti";
SECTION_DEAD static char const* const stringBase_80399422 = "font_15.bti";
SECTION_DEAD static char const* const stringBase_8039942E = "font_12.bti";
SECTION_DEAD static char const* const stringBase_8039943A = "im_map_icon_portal_4ia_40_05.bti";
SECTION_DEAD static char const* const stringBase_8039945B = "font_16_backlight.bti";
SECTION_DEAD static char const* const stringBase_80399471 = "font_13.bti";
SECTION_DEAD static char const* const stringBase_8039947D = "font_14.bti";
SECTION_DEAD static char const* const stringBase_80399489 = "im_zelda_item_icon_rupy_13.bti";
SECTION_DEAD static char const* const stringBase_803994A8 = "";
SECTION_DEAD static char const* const stringBase_803994A9 = "st_bompoach_lv1.bti";
SECTION_DEAD static char const* const stringBase_803994BD = "font_46.bti";
SECTION_DEAD static char const* const stringBase_803994C9 = "font_47.bti";
SECTION_DEAD static char const* const stringBase_803994D5 = "font_35.bti";
SECTION_DEAD static char const* const stringBase_803994E1 = "font_36.bti";
SECTION_DEAD static char const* const stringBase_803994ED = "font_19.bti";
SECTION_DEAD static char const* const stringBase_803994F9 = "font_22.bti";
SECTION_DEAD static char const* const stringBase_80399505 = "font_23.bti";
SECTION_DEAD static char const* const stringBase_80399511 = "font_24.bti";
SECTION_DEAD static char const* const stringBase_8039951D = "font_25.bti";
SECTION_DEAD static char const* const stringBase_80399529 = "font_40.bti";
SECTION_DEAD static char const* const stringBase_80399535 = "font_39.bti";
SECTION_DEAD static char const* const stringBase_80399541 = "font_29.bti";
SECTION_DEAD static char const* const stringBase_8039954D = "font_28.bti";
SECTION_DEAD static char const* const stringBase_80399559 = "font_32.bti";
SECTION_DEAD static char const* const stringBase_80399565 = "font_33.bti";
SECTION_DEAD static char const* const stringBase_80399571 = "font_41.bti";
SECTION_DEAD static char const* const stringBase_8039957D = "font_42.bti";
SECTION_DEAD static char const* const stringBase_80399589 = "font_50.bti";
SECTION_DEAD static char const* const stringBase_80399595 = "font_49.bti";
SECTION_DEAD static char const* const stringBase_803995A1 = "font_51.bti";
SECTION_DEAD static char const* const stringBase_803995AD = "font_52.bti";
SECTION_DEAD static char const* const stringBase_803995B9 = "font_53.bti";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803995C5 = "\0\0";
#pragma pop

/* 803BFA90-803BFBA8 -00001 0118+00 1/1 0/0 0/0 .data            @4395 */
SECTION_DATA static void* lit_4395[70] = {
    (void*)(((char*)createPane__10COutFont_cFv) + 0xDC),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x140),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x1A0),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x200),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x200),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x200),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x200),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x2C4),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x200),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x328),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xE20),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xE20),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xE20),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xE20),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x328),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x328),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x328),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x328),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x328),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x328),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x3E0),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x440),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x4A0),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x4FC),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x558),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x5B0),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x60C),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x670),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x6CC),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x77C),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x7D8),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x870),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x8C8),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x724),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x6CC),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x978),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xA30),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xA30),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xAE8),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xB44),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xB44),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xB44),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xB9C),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xC54),
    (void*)(((char*)createPane__10COutFont_cFv) + 0x920),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xD0C),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xB44),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xB44),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xA30),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xA30),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xA30),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xA30),
    (void*)(((char*)createPane__10COutFont_cFv) + 0xDC4),
};

/* 803BFBA8-803BFCAC -00001 0104+00 1/1 0/0 0/0 .data            @5000 */
SECTION_DATA static void* lit_5000[65] = {
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x5B8),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x5B8),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x6F0),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x198),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x29C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x4B4),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xB8C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x824),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x8A0),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x91C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x998),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xA14),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xAD0),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xD40),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xD40),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xD40),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xC90),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xDE4),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xF48),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xC90),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xC90),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x3A0),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xF7C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x102C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x10A8),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xD0C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0xC90),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x10DC),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1204),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x13D4),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x127C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x127C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x13D4),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x13D4),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1450),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x150C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x127C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x127C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x127C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x127C),
    (void*)(((char*)draw__10COutFont_cFP10J2DTextBoxfff) + 0x1248),
};

/* 80225BB8-80225BF4 2204F8 003C+00 1/1 0/0 0/0 .text            __ct__13COutFontSet_cFv */
COutFontSet_c::COutFontSet_c() {
    initialize();
}

/* 80225BF4-80225C3C 220534 0048+00 1/0 0/0 0/0 .text            __dt__13COutFontSet_cFv */
COutFontSet_c::~COutFontSet_c() {}

/* ############################################################################################## */
/* 80454A10-80454A14 003010 0004+00 4/4 0/0 0/0 .sdata2          @3748 */
SECTION_SDATA2 static u8 lit_3748[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454A14-80454A18 003014 0004+00 6/6 0/0 0/0 .sdata2          @3749 */
SECTION_SDATA2 static f32 lit_3749 = 1.0f;

/* 80225C3C-80225C70 22057C 0034+00 2/2 0/0 0/0 .text            initialize__13COutFontSet_cFv */
void COutFontSet_c::initialize() {
    mpTextBoxPtr = NULL;
    f32 tmp_0 = FLOAT_LABEL(lit_3748);
    mPosX = tmp_0;
    mPosY = tmp_0;
    f32 tmp_1 = lit_3749;
    mSizeX = tmp_1;
    mSizeY = tmp_1;
    mAlpha = 255;
    mType = 0x47;
}

/* 80225C70-80225C94 2205B0 0024+00 1/1 0/0 0/0 .text
 * drawFont__13COutFontSet_cFP10J2DTextBoxUcffffUlUc            */
void COutFontSet_c::drawFont(J2DTextBox* p_textBox, u8 type, f32 posX, f32 posY,
                                 f32 sizeX, f32 sizeY, u32 color, u8 alpha) {
    mpTextBoxPtr = p_textBox;
    mPosX = posX;
    mPosY = posY;
    mSizeX = sizeX;
    mSizeY = sizeY;
    mAlpha = alpha;
    mColor = color;
    mType = type;
}

/* 80225C94-80225D60 2205D4 00CC+00 0/0 5/5 0/0 .text            __ct__10COutFont_cFUc */
COutFont_c::COutFont_c(u8 param_0) {
    field_0x242 = param_0;

    for (int i = 0; i < 35; i++) {
        mpOfs[i] = new COutFontSet_c();
    }

    for (int i = 0; i < 70; i++) {
        mpPane[i] = NULL;
        field_0x1b4[i] = 0;
    }

    mAlphaRatio = FLOAT_LABEL(lit_3748);
    f32 tmp_1 = lit_3749;
    field_0x1b0 = tmp_1;
    field_0x1ac = tmp_1;
    field_0x240 = 0;
    mRupeeColor = 0;
}

/* 80225D60-80225E7C 2206A0 011C+00 1/0 0/0 0/0 .text            __dt__10COutFont_cFv */
COutFont_c::~COutFont_c() {
    for (int i = 0; i < 35; i++) {
        delete mpOfs[i];
        mpOfs[i] = NULL;
    }

    if (field_0x240) {
        field_0x240 = 0;

        for (int i = 0; i < 70; i++) {
            if (mpPane[i] != NULL) {
                delete mpPane[i];
                mpPane[i] = NULL;
            }
        }
    }

    if (dComIfGp_getExpHeap2D() == NULL) {
        dComIfGp_getItemIconArchive()->removeResourceAll();
    }
}

/* 80225E7C-80225EA8 2207BC 002C+00 1/0 0/0 0/0 .text            setPane__10COutFont_cFP10J2DPicture
 */
void COutFont_c::setPane(J2DPicture* p_pic) {
    for (int i = 0; i < 70; i++) {
        mpPane[i] = p_pic;
        p_pic++;
    }
    field_0x240 = false;
}

/* ############################################################################################## */
/* 80454A18-80454A20 003018 0008+00 2/2 0/0 0/0 .sdata2          @4397 */
SECTION_SDATA2 static f64 lit_4397 = 4503599627370496.0 /* cast u32 to float */;

/* 80225EA8-80226CF8 2207E8 0E50+00 2/0 0/0 0/0 .text            createPane__10COutFont_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void COutFont_c::createPane() {
    nofralloc
#include "asm/d/msg/d_msg_out_font/createPane__10COutFont_cFv.s"
}
#pragma pop

/* 80226CF8-80226D4C 221638 0054+00 0/0 2/2 0/0 .text            initialize__10COutFont_cFv */
void COutFont_c::initialize() {
    for (int i = 0; i < 35; i++) {
        mpOfs[i]->initialize();
    }
}

/* 80226D4C-80226DA8 22168C 005C+00 1/0 0/0 0/0 .text
 * drawFont__10COutFont_cFP10J2DTextBoxUcffffUlUc               */
void COutFont_c::drawFont(J2DTextBox* p_textBox, u8 type, f32 posX, f32 posY,
                              f32 sizeX, f32 sizeY, u32 color, u8 alpha) {
    posY += lit_3749;
    for (int i = 0; i < 35; i++) {
        if (mpOfs[i]->getType() == 0x47) {
            mpOfs[i]->drawFont(p_textBox, type, posX, posY, sizeX, sizeY, color, alpha);
            return;
        }
    }
}

/* 80226DA8-80226DB0 2216E8 0008+00 1/0 0/0 0/0 .text            setAlphaRatio__10COutFont_cFf */
void COutFont_c::setAlphaRatio(f32 ratio) {
    mAlphaRatio = ratio;
}

/* ############################################################################################## */
/* 80454A20-80454A24 003020 0004+00 1/1 0/0 0/0 .sdata2          @4986 */
SECTION_SDATA2 static f32 lit_4986 = 2.0f;

/* 80454A24-80454A28 003024 0004+00 1/1 0/0 0/0 .sdata2          @4987 */
SECTION_SDATA2 static f32 lit_4987 = 3.0f;

/* 80454A28-80454A2C 003028 0004+00 1/1 0/0 0/0 .sdata2          @4988 */
SECTION_SDATA2 static f32 lit_4988 = 0.5f;

/* 80454A2C-80454A30 00302C 0004+00 1/1 0/0 0/0 .sdata2          @4989 */
SECTION_SDATA2 static f32 lit_4989 = 360.0f;

/* 80454A30-80454A34 003030 0004+00 1/1 0/0 0/0 .sdata2          @4990 */
SECTION_SDATA2 static f32 lit_4990 = 28.0f;

/* 80454A34-80454A38 003034 0004+00 1/1 0/0 0/0 .sdata2          @4991 */
SECTION_SDATA2 static f32 lit_4991 = 50.0f;

/* 80454A38-80454A3C 003038 0004+00 1/1 0/0 0/0 .sdata2          @4992 */
SECTION_SDATA2 static f32 lit_4992 = 205.0f;

/* 80454A3C-80454A40 00303C 0004+00 1/1 0/0 0/0 .sdata2          @4993 */
SECTION_SDATA2 static f32 lit_4993 = 9.0f;

/* 80454A40-80454A44 003040 0004+00 1/1 0/0 0/0 .sdata2          @4994 */
SECTION_SDATA2 static f32 lit_4994 = 18.0f;

/* 80454A44-80454A48 003044 0004+00 1/1 0/0 0/0 .sdata2          @4995 */
SECTION_SDATA2 static f32 lit_4995 = -3.0f;

/* 80454A48-80454A4C 003048 0004+00 1/1 0/0 0/0 .sdata2          @4996 */
SECTION_SDATA2 static f32 lit_4996 = 4.0f;

/* 80454A4C-80454A50 00304C 0004+00 1/1 0/0 0/0 .sdata2          @4997 */
SECTION_SDATA2 static f32 lit_4997 = 1.25f;

/* 80454A50-80454A58 003050 0008+00 1/1 0/0 0/0 .sdata2          @5001 */
SECTION_SDATA2 static f64 lit_5001 = 4503601774854144.0 /* cast s32 to float */;

/* 80226DB0-80228448 2216F0 1698+00 2/0 0/0 0/0 .text            draw__10COutFont_cFP10J2DTextBoxfff
 */
#ifdef NONMATCHING
void COutFont_c::draw(J2DTextBox* p_textBox, f32 param_1, f32 param_2, f32 param_3) {
    s16 sp256[70];

    for (int i = 0; i < 70; i++) {
        sp256[i] = field_0x1b4[i];
    }

    for (int i = 0; i < 35; i++) {
        u8 type = mpOfs[i]->getType();
        J2DTextBox* tbox = mpOfs[i]->getTextBoxPtr();

        if (p_textBox == tbox && type != 0x47) {
            f32 local_10c = 1.0f;
            f32 local_110 = 1.0f;

            if (p_textBox != NULL) {
                for (J2DPane* pane = p_textBox; pane != NULL; pane = pane->getParentPane()) {
                    local_10c *= pane->getScaleX();
                    local_110 *= pane->getScaleY();
                }
            }

            f32 posX = param_1 + param_3 * (local_10c * mpOfs[i]->getPosX());
            f32 posY = param_2 + (local_110 * mpOfs[i]->getPosY());
            f32 sizeX = local_10c * mpOfs[i]->getSizeX();
            f32 sizeY = local_110 * mpOfs[i]->getSizeY();

            if (mpPane[type] != NULL) {
                mpPane[type]->setAlpha(mAlphaRatio * mpPane[i]->getAlpha());
                
                switch (type) {
                case 10:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, false, true);

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), mpOfs[i]->getColor());
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, true);
                    break;
                case 11:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, true, true);

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), mpOfs[i]->getColor());
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, true, true);
                    break;
                case 29:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, true, true);

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(255, 80, 80, 255));
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, true, true);
                    break;
                case 12:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, true, false);

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), mpOfs[i]->getColor());
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, true, false);
                    break;
                case 5:
                case 6: {
                    posY += 1.0f;
                    sizeY -= 3.0f;
                    JUtility::TColor black = mpPane[type]->getBlack();
                    JUtility::TColor white = mpPane[type]->getWhite();

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, false, false);

                    mpPane[type]->setBlackWhite(black, white);
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                }
                case 9:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 80) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }

                    if (field_0x1b4[type] < 20) {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, true);
                    } else if (field_0x1b4[type] < 40) {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    } else if (field_0x1b4[type] < 60) {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, true, true, true);
                    } else {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, true, true, false);
                    }
                    break;
                case 14:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 20) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, true);
                    break;
                case 15:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 20) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, true, true, true);
                    break;
                case 16:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 20) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 17:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 20) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, true, true, false);
                    break;
                case 18:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 40) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }

                    if (field_0x1b4[type] < 20) {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, true);
                    } else {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, true, true, true);
                    }                    
                    break;
                case 19:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 40) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }

                    if (field_0x1b4[type] < 20) {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    } else {
                        mpPane[type]->draw(posX, posY, sizeX, sizeY, true, true, false);
                    }                    
                    break;
                case 13:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, false, false);

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), mpOfs[i]->getColor());
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 24:
                case 27:
                case 28:
                case 43:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), mpOfs[i]->getColor());
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 42:
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 20:
                case 21:
                case 22:
                    field_0x1b4[type]++;
                    if (field_0x1b4[type] >= 28) {
                        field_0x1b4[type] = 0;
                    }

                    mpPane[type]->rotate(0.5f * posX, 0.5f * posY, ROTATE_Z, (360.0f * (f32)field_0x1b4[type]) / 28.0f);
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 25:  // some issues in here, 2020
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 18) {
                            field_0x1b4[type] -= 18;
                        }
                    }

                    f32 alpha;
                    if (field_0x1b4[type] < 9) {
                        alpha = field_0x1b4[type];
                    } else {
                        alpha = 18.0f - field_0x1b4[type];
                    }

                    mpPane[26]->setAlpha(((alpha / 9.0f) * 205.0f + 50.0f) * mAlphaRatio);
                    f32 tmpX = 0.5f * (g_MsgObject_HIO_c.mPortalIconScale - 1.0f) * sizeX;
                    f32 tmpY = 0.5f * (g_MsgObject_HIO_c.mPortalIconScale - 1.0f) * sizeY;
                    mpPane[26]->draw(posX - tmpX, posY - tmpY, g_MsgObject_HIO_c.mPortalIconScale * sizeX, g_MsgObject_HIO_c.mPortalIconScale * sizeY, false, false, false);
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 26:
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 30:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(255, 255, 255, 255));
                    mpPane[type]->draw(posX + (0.5f * (sizeX * (field_0x1ac - 1.0f))), posY + (0.5f * (sizeY * (field_0x1b0 - 1.0f))), sizeX * field_0x1ac, sizeY * field_0x1b0, false, false, false);
                    break;
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
                case 40:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), mpOfs[i]->getColor());
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 41:
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 44:
                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + ((posY + -3.0f) - 4.0f), sizeX, sizeY * 1.25f, false, false, false);

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), mpOfs[i]->getColor());
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 45:
                    mpPane[type]->draw(posX, (posY + -3.0f) - 4.0f, sizeX, sizeY * 1.25f, false, false, false);
                    break;
                case 46:
                case 47:
                case 55:
                case 56:
                case 57:
                case 58:
                case 61:
                case 69:
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 49:
                case 50:
                case 65:
                case 66:
                case 67:
                case 68:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 40) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, false, false);

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(255, 255, 255, 255));
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 48:
                case 59:
                case 60:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 40) {
                            field_0x1b4[type] = 0;
                        }
                        setBlendAnime(mpPane[type], field_0x1b4[type]);
                    }
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                case 62:
                    if (sp256[type] == field_0x1b4[type]) {
                        field_0x1b4[type]++;

                        if (field_0x1b4[type] >= 10) {
                            field_0x1b4[type] = 0;
                        }
                        
                        if (field_0x1b4[type] < 5) {
                            mpPane[type]->setBlendRatio(1.0f, 0.0f);
                        } else {
                            mpPane[type]->setBlendRatio(0.0f, 1.0f);
                        }
                    }

                    mpPane[type]->draw(posX, -3.0f + posY, sizeX, 1.25f * sizeY, false, false, false);
                    break;
                default:
                    JUtility::TColor black = mpPane[type]->getBlack();
                    JUtility::TColor white = mpPane[type]->getWhite();

                    mpPane[type]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));
                    mpPane[type]->draw(2.0f + posX, 2.0f + posY, sizeX, sizeY, false, false, false);

                    mpPane[type]->setBlackWhite(black, white);
                    mpPane[type]->draw(posX, posY, sizeX, sizeY, false, false, false);
                    break;
                }
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void COutFont_c::draw(J2DTextBox* param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/d/msg/d_msg_out_font/draw__10COutFont_cFP10J2DTextBoxfff.s"
}
#pragma pop
#endif

/* 80228448-80228490 222D88 0048+00 1/0 0/0 0/0 .text            reset__10COutFont_cFP10J2DTextBox
 */
void COutFont_c::reset(J2DTextBox* p_textBox) {
    if (p_textBox != NULL) {
        for (int i = 0; i < 35; i++) {
            if (p_textBox == mpOfs[i]->getTextBoxPtr()) {
                mpOfs[i]->setTextBoxPtr(NULL);
                mpOfs[i]->resetType();
            }
        }
    }
}

/* 80228490-80228530 222DD0 00A0+00 1/1 0/0 0/0 .text setBlendAnime__10COutFont_cFP10J2DPictures
 */
// matches with literals
#ifdef NONMATCHING
void COutFont_c::setBlendAnime(J2DPicture* param_0, s16 param_1) {
    int iVar5 = param_1 % 0x14;
    if (iVar5 < 10) {
        f32 dVar6 = fopMsgM_valueIncrease(10, iVar5, 0);
        param_0->setBlendRatio(1.0f - dVar6, dVar6);
    } else {
        f32 dVar6 = fopMsgM_valueIncrease(10, iVar5 - 10, 0);
        param_0->setBlendRatio(dVar6, 1.0f - dVar6);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void COutFont_c::setBlendAnime(J2DPicture* param_0, s16 param_1) {
    nofralloc
#include "asm/d/msg/d_msg_out_font/setBlendAnime__10COutFont_cFP10J2DPictures.s"
}
#pragma pop
#endif

/* 80228530-80228578 222E70 0048+00 1/1 0/0 0/0 .text            getBtiName__10COutFont_cFi */
const char* COutFont_c::getBtiName(int nameIdx) {
    static const char* mpIconName[70] = {
        "font_00.bti",
        "font_01.bti",
        "font_09.bti",
        "font_04.bti",
        "font_05.bti",
        "font_02.bti",
        "font_03.bti",
        "font_06.bti",
        "font_08.bti",
        "font_07_01.bti",
        "font_10.bti",
        "font_10.bti",
        "font_10.bti",
        "font_10.bti",
        "font_07_01.bti",
        "font_07_01.bti",
        "font_07_01.bti",
        "font_07_01.bti",
        "font_07_01.bti",
        "font_07_01.bti",
        "font_15.bti",
        "font_15.bti",
        "font_15.bti",
        "font_12.bti",
        "font_15.bti",
        "im_map_icon_portal_4ia_40_05.bti",
        "font_16_backlight.bti",
        "font_13.bti",
        "font_14.bti",
        "font_10.bti",
        "im_zelda_item_icon_rupy_13.bti",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "st_bompoach_lv1.bti",
        "font_46.bti",
        "font_47.bti",
        "font_35.bti",
        "font_36.bti",
        "font_19.bti",
        "font_20.bti",
        "font_19.bti",
        "font_22.bti",
        "font_23.bti",
        "font_24.bti",
        "font_25.bti",
        "font_40.bti",
        "font_39.bti",
        "font_29.bti",
        "font_28.bti",
        "font_30.bti",
        "font_31.bti",
        "font_29.bti",
        "font_28.bti",
        "font_32.bti",
        "font_33.bti",
        "font_41.bti",
        "font_42.bti",
        "font_50.bti",
        "font_49.bti",
        "font_51.bti",
        "font_52.bti",
        "font_53.bti",
    };

    if (nameIdx >= 31 && nameIdx <= 40) {
        return dMeter2Info_getNumberTextureName(nameIdx - 31);
    }

    return mpIconName[nameIdx];
}

/* 80399350-80399350 0259B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
