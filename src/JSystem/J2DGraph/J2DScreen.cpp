//
// Generated By: dol2asm
// Translation Unit: J2DScreen
//

#include "JSystem/J2DGraph/J2DScreen.h"
#include "JSystem/J2DGraph/J2DMaterialFactory.h"
#include "JSystem/J2DGraph/J2DPictureEx.h"
#include "JSystem/J2DGraph/J2DTextBoxEx.h"
#include "JSystem/J2DGraph/J2DWindowEx.h"
#include "JSystem/J2DGraph/J2DOrthoGraph.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUMemoryStream.h"
#include "dolphin/types.h"
#include "global.h"

/* 802F8498-802F8540 2F2DD8 00A8+00 0/0 59/59 4/4 .text            __ct__9J2DScreenFv */
J2DScreen::J2DScreen()
    : J2DPane(NULL, true, 'root', JGeometry::TBox2<f32>(JGeometry::TVec2<f32>(0.0f, 0.0f), JGeometry::TVec2<f32>(640.0f, 480.0f))), mColor() {
    field_0x4 = -1;
    mScissor = false;
    mMaterialNum = 0;
    mMaterials = NULL;
    mTexRes = NULL;
    mFontRes = NULL;
    mNameTable = NULL;
}

/* 802F8540-802F85A8 2F2E80 0068+00 1/0 0/0 0/0 .text            __dt__9J2DScreenFv */
J2DScreen::~J2DScreen() {
    clean();
}

/* 802F85A8-802F8648 2F2EE8 00A0+00 3/3 0/0 0/0 .text            clean__9J2DScreenFv */
void J2DScreen::clean() {
    delete[] mMaterials;
    mMaterialNum = 0;
    mMaterials = NULL;

    delete[] mTexRes;
    mTexRes = NULL;

    delete[] mFontRes;
    mFontRes = NULL;

    if (mNameTable != NULL) {
        delete[] mNameTable->getResNameTable();
        delete mNameTable;
        mNameTable = NULL;
    }
}

/* 802F8648-802F8748 2F2F88 0100+00 0/0 58/58 4/4 .text setPriority__9J2DScreenFPCcUlP10JKRArchive
 */
bool J2DScreen::setPriority(char const* resName, u32 param_1, JKRArchive* p_archive) {
    if (p_archive == NULL) {
        return false;
    }

    void* res = JKRFileLoader::getGlbResource(resName, p_archive);
    if (res != NULL) {
        u32 size = p_archive->getExpandedResSize(res);
        JSUMemoryInputStream stream(res, size);
        return setPriority(&stream, param_1, p_archive);
    }

    return false;
}

/* 802F8748-802F8778 2F3088 0030+00 1/1 1/1 0/0 .text
 * setPriority__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive */
bool J2DScreen::setPriority(JSURandomInputStream* p_stream, u32 param_1, JKRArchive* p_archive) {
    if (p_archive == NULL) {
        return false;
    } else {
        return private_set(p_stream, param_1, p_archive);
    }
}

/* 802F8778-802F8834 2F30B8 00BC+00 1/1 0/0 0/0 .text
 * private_set__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive */
bool J2DScreen::private_set(JSURandomInputStream* p_stream, u32 param_1, JKRArchive* p_archive) {
    if (!checkSignature(p_stream)) {
        return false;
    }

    if (!getScreenInformation(p_stream)) {
        return false;
    }

    bool make_end = makeHierarchyPanes(this, p_stream, param_1, p_archive) != 2;

    if (!(param_1 & 0x1F0000)) {
        clean();
    }

    if (make_end) {
        return p_stream->isGood();
    }

    return false;
}

/* 802F8834-802F8894 2F3174 0060+00 1/1 0/0 0/0 .text
 * checkSignature__9J2DScreenFP20JSURandomInputStream           */
bool J2DScreen::checkSignature(JSURandomInputStream* p_stream) {
    J2DScrnHeader header;
    p_stream->read(&header, sizeof(J2DScrnHeader));

    if (header.mTag != 'SCRN' || (header.mType != 'blo1' && header.mType != 'blo2')) {
        return false;
    } else {
        return true;
    }
}

/* 802F8894-802F8990 2F31D4 00FC+00 1/1 0/0 0/0 .text
 * getScreenInformation__9J2DScreenFP20JSURandomInputStream     */
bool J2DScreen::getScreenInformation(JSURandomInputStream* p_stream) {
    J2DScrnInfoHeader info;
    p_stream->read(&info, sizeof(J2DScrnInfoHeader));

    if (info.mTag != 'INF1') {
        return false;
    }

    JGeometry::TBox2<f32> dimensions(0.0f, 0.0f, info.mWidth, info.mHeight);
    place(dimensions);

    JUtility::TColor color(info.mColor);
    mColor = color;

    if (info.mSize > 0x10) {
        p_stream->skip(info.mSize - 0x10);
    }

    return true;
}

/* 802F8990-802F8B98 2F32D0 0208+00 1/1 0/0 0/0 .text
 * makeHierarchyPanes__9J2DScreenFP7J2DPaneP20JSURandomInputStreamUlP10JKRArchive */
s32 J2DScreen::makeHierarchyPanes(J2DPane* p_basePane, JSURandomInputStream* p_stream, u32 param_2,
                                  JKRArchive* p_archive) {
    J2DPane* next_pane = p_basePane;

    while (true) {
        J2DScrnBlockHeader header;
        p_stream->peek(&header, sizeof(J2DScrnBlockHeader));

        switch (header.mTag) {
        case 'EXT1':
            p_stream->seek(header.mSize, JSUStreamSeekFrom_CUR);
            return 1;
        case 'BGN1':
            p_stream->seek(header.mSize, JSUStreamSeekFrom_CUR);

            int ret = makeHierarchyPanes(next_pane, p_stream, param_2, p_archive);
            if (ret != 0) {
                return ret;
            }
            break;
        case 'END1':
            p_stream->seek(header.mSize, JSUStreamSeekFrom_CUR);
            return 0;
        case 'TEX1':
            J2DResReference* texRes = getResReference(p_stream, param_2);
            mTexRes = texRes;

            if (texRes == NULL) {
                return 2;
            }
            break;
        case 'FNT1':
            J2DResReference* fntRes = getResReference(p_stream, param_2);
            mFontRes = fntRes;

            if (fntRes == NULL) {
                return 2;
            }
            break;
        case 'MAT1':
            if (!createMaterial(p_stream, param_2, p_archive)) {
                return 2;
            }
            break;
        default:
            if (p_archive == NULL) {
                next_pane = createPane(header, p_stream, p_basePane, param_2);
            } else {
                next_pane = createPane(header, p_stream, p_basePane, param_2, p_archive);
            }

            if (next_pane == NULL) {
                return 2;
            }
            break;
        }
    }
}

/* 802F8B98-802F8ED4 2F34D8 033C+00 1/0 0/0 0/0 .text
 * createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive */
J2DPane* J2DScreen::createPane(J2DScrnBlockHeader const& header, JSURandomInputStream* p_stream,
                               J2DPane* p_basePane, u32 param_3, JKRArchive* p_archive) {
    J2DPane* newPane;

    switch (header.mTag) {
    case 'PAN1':
        newPane = new J2DPane(p_basePane, p_stream, 0);
        break;
    case 'WIN1':
        newPane = new J2DWindow(p_basePane, p_stream, p_archive);
        break;
    case 'PIC1':
        newPane = new J2DPicture(p_basePane, p_stream, p_archive);
        break;
    case 'TBX1':
        newPane = new J2DTextBox(p_basePane, p_stream, p_archive);
        break;
    case 'PAN2':
        newPane = new J2DPane(p_basePane, p_stream, 1);
        break;
    case 'WIN2':
        if (param_3 & 0x1F0000) {
            newPane = new J2DWindowEx(p_basePane, p_stream, param_3, mMaterials);
            break;
        }
        newPane = new J2DWindow(p_basePane, p_stream, mMaterials);
        break;
    case 'PIC2':
        if (param_3 & 0x1F0000) {
            newPane = new J2DPictureEx(p_basePane, p_stream, param_3, mMaterials);
            break;
        }
        newPane = new J2DPicture(p_basePane, p_stream, mMaterials);
        break;
    case 'TBX2':
        if (param_3 & 0x1F0000) {
            newPane = new J2DTextBoxEx(p_basePane, p_stream, param_3, mMaterials);
            break;
        }
        newPane = new J2DTextBox(p_basePane, p_stream, param_3, mMaterials);
        break;
    default:
        s32 position = p_stream->getPosition();
        s32 size = header.mSize;
        s32 start = size + position;

        newPane = new J2DPane(p_basePane, p_stream, 0);
        p_stream->seek(start, JSUStreamSeekFrom_SET);
        break;
    }

    return newPane;
}

/* 802F8ED4-802F90A0 2F3814 01CC+00 0/0 51/51 4/4 .text draw__9J2DScreenFffPC14J2DGrafContext */
void J2DScreen::draw(f32 x, f32 y, J2DGrafContext const* grafCtx) {
    u32 l_x, l_y, width, height;

    if (mScissor) {
        GXGetScissor(&l_x, &l_y, &width, &height);
    }

    if (grafCtx != NULL) {
        J2DPane::draw(x, y, grafCtx, mScissor, true);
    } else {
        J2DOrthoGraph ortho(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
        ortho.setPort();
        J2DPane::draw(x, y, &ortho, mScissor, true);
    }

    if (mScissor) {
        GXSetScissor(l_x, l_y, width, height);
    }

    GXSetNumIndStages(0);
    for (int i = 0; i < 0x10; i++) {
        GXSetTevDirect((GXTevStageID)i);
    }
    GXSetNumTevStages(1);
    GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
    GXSetCullMode(GX_CULL_NONE);
    GXSetNumTexGens(0);
    GXSetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE,
                  GX_AF_NONE);
    for (int i = 0; i < 4; i++) {
        GXSetTevSwapModeTable((GXTevSwapSel)i, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
    }
}

/* 802F90A0-802F90E0 2F39E0 0040+00 1/0 0/0 0/0 .text            search__9J2DScreenFUx */
J2DPane* J2DScreen::search(u64 tag) {
    if (tag == 0) {
        return NULL;
    }

    return J2DPane::search(tag);
}

/* 802F90E0-802F9120 2F3A20 0040+00 1/0 0/0 0/0 .text            searchUserInfo__9J2DScreenFUx */
J2DPane* J2DScreen::searchUserInfo(u64 tag) {
    if (tag == 0) {
        return NULL;
    }

    return J2DPane::searchUserInfo(tag);
}

/* 802F9120-802F9280 2F3A60 0160+00 1/0 0/0 0/0 .text            drawSelf__9J2DScreenFffPA3_A4_f */
void J2DScreen::drawSelf(f32 param_0, f32 param_1, Mtx* param_2) {
    JUtility::TColor color(mColor);
    u8 alpha = (color.a * mAlpha) / 255;

    if (alpha != 0) {
        JUtility::TColor sp8(alpha | ((u32)color & 0xFFFFFF00));
        color = sp8;

        GXSetBlendMode(GX_BM_BLEND, GX_BL_SRC_ALPHA, GX_BL_INV_SRC_ALPHA, GX_LO_SET);
        GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
        GXBegin(GX_QUADS, GX_VTXFMT0, 4);

        GXPosition3f32(0.0f, 0.0f, 0.0f);
        GXColor1u32(color);

        GXPosition3f32(getWidth(), 0.0f, 0.0f);
        GXColor1u32(color);

        GXPosition3f32(getWidth(), getHeight(), 0.0f);
        GXColor1u32(color);

        GXPosition3f32(0.0f, getHeight(), 0.0f);
        GXColor1u32(color);

        GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
        GXEnd();
    }
}

/* 802F9280-802F937C 2F3BC0 00FC+00 1/1 0/0 0/0 .text
 * getResReference__9J2DScreenFP20JSURandomInputStreamUl        */
J2DResReference* J2DScreen::getResReference(JSURandomInputStream* p_stream, u32 param_1) {
    s32 position = p_stream->getPosition();
    p_stream->skip(4);

    s32 size1, size2;
    size1 = p_stream->readS32();
    p_stream->skip(4);
    size2 = p_stream->readS32();
    p_stream->seek(position + size2, JSUStreamSeekFrom_SET);

    size1 = size1 - size2;

    char* buffer;
    if (param_1 & 0x1F0000) {
        buffer = new char[size1];
    } else {
        buffer = new (-4) char[size1];
    }

    if (buffer != NULL) {
        p_stream->read(buffer, size1);
    }

    return (J2DResReference*)buffer;
}

/* 802F937C-802F9600 2F3CBC 0284+00 1/1 0/0 0/0 .text
 * createMaterial__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive */
// NONMATCHING - nametab section has issues
bool J2DScreen::createMaterial(JSURandomInputStream* p_stream, u32 param_1, JKRArchive* p_archive) {
    s32 position = p_stream->getPosition();

    J2DScrnBlockHeader header;
    p_stream->read(&header, 8);
    mMaterialNum = p_stream->readU16();

    p_stream->skip(2);

    if (param_1 & 0x1F0000) {
        mMaterials = new J2DMaterial[mMaterialNum];
    } else {
        mMaterials = new (-4) J2DMaterial[mMaterialNum];
    }

    u8* buffer = new (-4) u8[header.mSize];
    if (mMaterials != NULL && buffer != NULL) {
        p_stream->seek(position, JSUStreamSeekFrom_SET);
        p_stream->read(buffer, header.mSize);
        J2DMaterialFactory factory(*(J2DMaterialBlock*)buffer);

        for (u16 i = 0; i < mMaterialNum; i++) {
            factory.create(&mMaterials[i], i, param_1, mTexRes, mFontRes, p_archive);
        }

        if (param_1 & 0x1F0000) {
            u32 offset =
                buffer[0x14] << 0x18 | buffer[0x15] << 0x10 | buffer[0x16] << 8 | buffer[0x17];
            char* sec = (char*)buffer + offset;
            u16* sec_s = ((u16*)sec);
            u32 size = ((u16*)sec)[0]*2;
            u16 num = sec_s[size + 1];
            while (sec[num] != 0) {
                num++;  
            }
            num++; 

            u8* nametab = new u8[num];
            if (nametab != NULL) {
                for (u16 i = 0; i < num; i++) {
                    nametab[i] = sec[i];
                }

                mNameTable = new JUTNameTab((ResNTAB*)nametab);
                if (mNameTable == NULL) {
                    delete[] nametab;
                } else {
                    success:
                    delete[] buffer;
                    return true;
                }
            }
        } else {
            goto success;
        }
    }

    delete[] buffer;
    clean();
    return false;
}

/* 802F9600-802F9620 2F3F40 0020+00 1/0 0/0 0/0 .text            isUsed__9J2DScreenFPC7ResTIMG */
bool J2DScreen::isUsed(ResTIMG const* p_timg) {
    return J2DPane::isUsed(p_timg);
}

/* 802F9620-802F9640 2F3F60 0020+00 1/0 0/0 0/0 .text            isUsed__9J2DScreenFPC7ResFONT */
bool J2DScreen::isUsed(ResFONT const* p_font) {
    return J2DPane::isUsed(p_font);
}

/* ############################################################################################## */
/* 80451590-80451598 000A90 0004+04 1/1 3/3 0/0 .sbss            mDataManage__9J2DScreen */
J2DDataManage* J2DScreen::mDataManage;

/* 802F9640-802F9690 2F3F80 0050+00 0/0 6/6 0/0 .text            getNameResource__9J2DScreenFPCc */
void* J2DScreen::getNameResource(char const* resName) {
    void* res = JKRFileLoader::getGlbResource(resName, NULL);

    if (res == NULL && mDataManage != NULL) {
        res = mDataManage->get(resName);
    }

    return res;
}

/* 802F9690-802F9704 2F3FD0 0074+00 0/0 30/30 3/3 .text            animation__9J2DScreenFv */
void J2DScreen::animation() {
    animationPane(mTransform);

    for (u16 i = 0; i < mMaterialNum; i++) {
        mMaterials[i].animation();
    }
}

/* 802F9704-802F9798 2F4044 0094+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP11J2DAnmColor */
void J2DScreen::setAnimation(J2DAnmColor* p_anmColor) {
    p_anmColor->searchUpdateMaterialID(this);
    u16 matNum = p_anmColor->getUpdateMaterialNum();

    for (u16 i = 0; i < matNum; i++) {
        u16 matID = p_anmColor->getUpdateMaterialID(i);
        if (matID < mMaterialNum) {
            mMaterials[matID].setAnimation(p_anmColor);
        }
    }
}

/* 802F9798-802F9838 2F40D8 00A0+00 1/0 0/0 0/0 .text
 * setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey              */
void J2DScreen::setAnimation(J2DAnmTextureSRTKey* p_anmSRTKey) {
    p_anmSRTKey->searchUpdateMaterialID(this);
    u16 matNum = p_anmSRTKey->getUpdateMaterialNum();

    for (u16 i = 0; i < matNum; i++) {
        u16 matID = p_anmSRTKey->getUpdateMaterialID(i);
        if (matID < mMaterialNum) {
            mMaterials[matID].setAnimation(p_anmSRTKey);
        }
    }
}

/* 802F9838-802F98CC 2F4178 0094+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP16J2DAnmTexPattern
 */
void J2DScreen::setAnimation(J2DAnmTexPattern* p_anmPattern) {
    p_anmPattern->searchUpdateMaterialID(this);
    u16 matNum = p_anmPattern->getUpdateMaterialNum();

    for (u16 i = 0; i < matNum; i++) {
        u16 matID = p_anmPattern->getUpdateMaterialID(i);
        if (matID < mMaterialNum) {
            mMaterials[matID].setAnimation(p_anmPattern);
        }
    }
}

/* 802F98CC-802F99A8 2F420C 00DC+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP15J2DAnmTevRegKey
 */
void J2DScreen::setAnimation(J2DAnmTevRegKey* p_anmRegKey) {
    p_anmRegKey->searchUpdateMaterialID(this);

    u16 cMatNum = p_anmRegKey->getCRegUpdateMaterialNum();
    for (u16 i = 0; i < cMatNum; i++) {
        u16 matID = p_anmRegKey->getCRegUpdateMaterialID(i);
        if (matID < mMaterialNum) {
            mMaterials[matID].setAnimation(p_anmRegKey);
        }
    }

    u16 kMatNum = p_anmRegKey->getKRegUpdateMaterialNum();
    for (u16 i = 0; i < kMatNum; i++) {
        u16 matID = p_anmRegKey->getKRegUpdateMaterialID(i);
        if (matID < mMaterialNum) {
            mMaterials[matID].setAnimation(p_anmRegKey);
        }
    }
}

/* 802F99A8-802F99C8 2F42E8 0020+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP14J2DAnmVtxColor
 */
void J2DScreen::setAnimation(J2DAnmVtxColor* p_anmVtxColor) {
    J2DPane::setVtxColorAnimation(p_anmVtxColor);
}

/* 802F99C8-802F99E8 2F4308 0020+00 1/0 0/0 0/0 .text
 * setAnimation__9J2DScreenFP20J2DAnmVisibilityFull             */
void J2DScreen::setAnimation(J2DAnmVisibilityFull* p_anmVisibility) {
    J2DPane::setVisibileAnimation(p_anmVisibility);
}

/* 802F99E8-802F9A18 2F4328 0030+00 1/0 0/0 0/0 .text
 * createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl */
J2DPane* J2DScreen::createPane(J2DScrnBlockHeader const& header, JSURandomInputStream* p_stream,
                               J2DPane* p_basePane, u32 param_3) {
    return createPane(header, p_stream, p_basePane, param_3, NULL);
}

/* 802F9A18-802F9A20 2F4358 0008+00 1/0 0/0 0/0 .text            getTypeID__9J2DScreenCFv */
u16 J2DScreen::getTypeID() const {
    return 8;
}

/* 802F9A20-802F9A54 2F4360 0034+00 1/0 0/0 0/0 .text            calcMtx__9J2DScreenFv */
void J2DScreen::calcMtx() {
    makeMatrix(mTranslateX, mTranslateY);
}

/* 802F9A54-802F9A74 2F4394 0020+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP10J2DAnmBase */
void J2DScreen::setAnimation(J2DAnmBase* p_anm) {
    J2DPane::setAnimation(p_anm);
}

/* 802F9A74-802F9A78 2F43B4 0004+00 1/0 0/0 0/0 .text
 * setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull           */
void J2DScreen::setAnimationVF(J2DAnmVisibilityFull*) {
    /* empty function */
}

/* 802F9A78-802F9A7C 2F43B8 0004+00 1/0 0/0 0/0 .text setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
 */
void J2DScreen::setAnimationVC(J2DAnmVtxColor*) {
    /* empty function */
}
