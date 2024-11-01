//
// Generated By: dol2asm
// Translation Unit: J3DShapeMtx
//

#include "JSystem/J3DGraphBase/J3DShapeMtx.h"
#include "JSystem/J3DGraphAnimator/J3DModel.h"
#include "JSystem/J3DGraphBase/J3DGD.h"
#include "JSystem/J3DGraphBase/J3DMatBlock.h"
#include "JSystem/J3DGraphBase/J3DTexture.h"
#include "dolphin/types.h"

/* 80434C80-80434C98 0619A0 0014+04 2/2 0/0 0/0 .bss             sMtxLoadCache__11J3DShapeMtx */
u16 J3DShapeMtx::sMtxLoadCache[10];

/* 803130A8-803130E4 30D9E8 003C+00 0/0 1/1 0/0 .text            resetMtxLoadCache__11J3DShapeMtxFv
 */
void J3DShapeMtx::resetMtxLoadCache() {
    sMtxLoadCache[9] = 0xFFFF;
    sMtxLoadCache[8] = 0xFFFF;
    sMtxLoadCache[7] = 0xFFFF;
    sMtxLoadCache[6] = 0xFFFF;
    sMtxLoadCache[5] = 0xFFFF;
    sMtxLoadCache[4] = 0xFFFF;
    sMtxLoadCache[3] = 0xFFFF;
    sMtxLoadCache[2] = 0xFFFF;
    sMtxLoadCache[1] = 0xFFFF;
    sMtxLoadCache[0] = 0xFFFF;
}

/* 803130E4-80313128 30DA24 0044+00 1/0 0/0 0/0 .text loadMtxIndx_PNGP__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_PNGP(int slot, u16 indx) const {
    // inlined J3DFifoLoadPosMtxIndx
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_A, indx, 0xB000 | ((u16)(slot * 0x0C)));
    // inlined J3DFifoLoadNrmMtxIndx3x3
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_B, indx, 0x8000 | ((u16)((slot * 0x09) + 0x400)));
}

/* 80313128-80313188 30DA68 0060+00 1/0 0/0 0/0 .text loadMtxIndx_PCPU__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_PCPU(int slot, u16 indx) const {
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
    j3dSys.loadNrmMtxIndx(slot, indx);
}

/* 80313188-803131D4 30DAC8 004C+00 1/0 0/0 0/0 .text loadMtxIndx_NCPU__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_NCPU(int slot, u16 indx) const {
    j3dSys.loadPosMtxIndx(slot, indx);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
}

/* 803131D4-8031322C 30DB14 0058+00 1/0 0/0 0/0 .text loadMtxIndx_PNCPU__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_PNCPU(int slot, u16 indx) const {
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
}

/* 803CD9C0-803CD9F0 02AAE0 0030+00 2/3 0/0 0/0 .data            sMtxLoadPipeline__11J3DShapeMtx */
J3DShapeMtx_LoadFunc J3DShapeMtx::sMtxLoadPipeline[4] = {
    &loadMtxIndx_PNGP,
    &loadMtxIndx_PCPU,
    &loadMtxIndx_NCPU,
    &loadMtxIndx_PNCPU,
};

/* 803CDA20-803CDA50 02AB40 0030+00 2/3 0/0 0/0 .data sMtxLoadPipeline__21J3DShapeMtxConcatView */
J3DShapeMtxConcatView_LoadFunc J3DShapeMtxConcatView::sMtxLoadPipeline[4] = {
    &loadMtxConcatView_PNGP,
    &loadMtxConcatView_PCPU,
    &loadMtxConcatView_NCPU,
    &loadMtxConcatView_PNCPU,
};

/* 803CDA80-803CDAB0 02ABA0 0030+00 1/2 0/0 0/0 .data sMtxLoadLODPipeline__21J3DShapeMtxConcatView
 */
J3DShapeMtxConcatView_LoadFunc J3DShapeMtxConcatView::sMtxLoadLODPipeline[4] = {
    &loadMtxConcatView_PNGP_LOD,
    &loadMtxConcatView_PCPU,
    &loadMtxConcatView_NCPU,
    &loadMtxConcatView_PNCPU,
};

/* 804515A8-804515AC 000AA8 0004+00 4/4 2/2 0/0 .sbss            sCurrentPipeline__11J3DShapeMtx */
u32 J3DShapeMtx::sCurrentPipeline;

/* 804515AC-804515B0 000AAC 0004+00 3/3 1/1 0/0 .sbss            sCurrentScaleFlag__11J3DShapeMtx */
u8* J3DShapeMtx::sCurrentScaleFlag;

// This below is technically part of J3DScaleFlag.

/* 804515B0-804515B4 -00001 0004+00 5/5 3/3 0/0 .sbss            None */
/* 804515B0 0001+00 data_804515B0 None */
/* 804515B1 0003+00 data_804515B1 None */
extern u8 struct_804515B0; // temporary
u8 J3DShapeMtx::sNBTFlag;
u8 J3DShapeMtx::sLODFlag;

/* 804515B4-804515B8 000AB4 0004+00 4/4 1/1 0/0 .sbss            sTexMtxLoadType__11J3DShapeMtx */
u32 J3DShapeMtx::sTexMtxLoadType;

/* 804515B8-804515C0 000AB8 0008+00 2/2 0/0 0/0 .sbss            sMtxPtrTbl__21J3DShapeMtxConcatView
 */
MtxP J3DShapeMtxConcatView::sMtxPtrTbl[2];

/* 804515C0-804515C4 000AC0 0004+00 6/6 2/2 0/0 .sbss            sTexGenBlock__17J3DDifferedTexMtx
 */
J3DTexGenBlock* J3DDifferedTexMtx::sTexGenBlock;

/* 804515C4-804515C8 000AC4 0004+00 1/1 2/2 0/0 .sbss            sTexMtxObj__17J3DDifferedTexMtx */
J3DTexMtxObj* J3DDifferedTexMtx::sTexMtxObj;

/* 8031322C-80313828 30DB6C 05FC+00 7/5 0/0 0/0 .text loadExecute__17J3DDifferedTexMtxFPA4_Cf */
// NONMATCHING regalloc
void J3DDifferedTexMtx::loadExecute(f32 const (*param_0)[4]) {
    static Mtx qMtx = {
        {0.5f, 0.0f, 0.5f, 0.0f},
        {0.0f, -0.5f, 0.5f, 0.0f},
        {0.0f, 0.0f, 1.0f, 0.0f},
    };
    static Mtx qMtx2 = {
        {0.5f, 0.0f, 0.0f, 0.5f},
        {0.0f, -0.5f, 0.0f, 0.5f},
        {0.0f, 0.0f, 1.0f, 0.0f}
    };
    J3DTexCoord* tex_coord;
    J3DTexMtx* tex_mtx;
    Mtx* mtx;
    Mtx44* eff_mtx;
    Mtx tmp2;
    Mtx44 tmp1, tmp0;
    J3DTexMtxInfo* tex_mtx_info;
    J3DTexGenBlock* tex_gen_block = sTexGenBlock;
    J3DTexMtxObj* tex_mtx_obj = sTexMtxObj;
    u16 tex_mtx_num = tex_mtx_obj->getNumTexMtx();
    if ((j3dSys.checkFlag(J3DSysFlag_PostTexMtx))) {
        for (u16 i = 0; i < (u16)tex_mtx_num; i++) {
            tex_coord = tex_gen_block->getTexCoord(i);
            int tex_gen_type = tex_coord->getTexGenType();
            if (tex_gen_type == 1 || tex_gen_type == 0) {
                tex_mtx = tex_gen_block->getTexMtx(i);
                u8 tex_gen_src = tex_mtx->getTexMtxInfo().mInfo;
                u32 unk;
                switch (tex_gen_src & 0x3f) {
                case 3:
                case 9: {
                    Mtx& tmp5 = tex_mtx_obj->getMtx(i);
                    mtx = &tmp5;
                    break;
                }
                case 1:
                case 6:
                case 7: {
                    Mtx& tmp6 = tex_mtx_obj->getMtx(i);
                    mtx = &tmp6;
                    break;
                }
                case 2:
                case 8:
                    PSMTXInverse(j3dSys.mViewMtx, tmp2);
                    PSMTXConcat(tex_mtx_obj->getMtx(i), tmp2, tmp2);
                    mtx = &tmp2;
                    break;
                case 5:
                    tex_mtx_info = &tex_mtx->getTexMtxInfo();
                    unk = (tex_gen_src & 0x80) >> 7;
                    if (unk == 0) {
                        J3DGetTextureMtxOld(tex_mtx_info->mSRT, tex_mtx_info->mCenter, tmp0);
                    } else if (unk == 1) {
                        J3DGetTextureMtxMayaOld(tex_mtx_info->mSRT, tmp0);
                    }
                    eff_mtx = &tex_mtx_obj->getEffectMtx(i);
                    J3DMtxProjConcat(tmp0, *eff_mtx, tmp2);
                    PSMTXInverse(j3dSys.mViewMtx, tmp1);
                    PSMTXConcat(tmp2, tmp1, tmp2);
                    tmp2[2][3] = 0.0f;
                    tmp2[1][3] = 0.0f;
                    tmp2[0][3] = 0.0f;
                    mtx = &tmp2;
                    break;
                case 10:
                    tex_mtx_info = &tex_mtx->getTexMtxInfo();
                    unk = (tex_gen_src & 0x80) >> 7;
                    if (unk == 0) {
                        J3DGetTextureMtx(tex_mtx_info->mSRT, tex_mtx_info->mCenter, tmp0);
                    } else if (unk == 1) {
                        J3DGetTextureMtxMaya(tex_mtx_info->mSRT, tmp0);
                    }
                    PSMTXConcat(tmp0, qMtx, tmp0);
                    eff_mtx = &tex_mtx_obj->getEffectMtx(i);
                    J3DMtxProjConcat(tmp0, *eff_mtx, tmp2);
                    PSMTXInverse(j3dSys.mViewMtx, tmp1);
                    PSMTXConcat(tmp2, tmp1, tmp2);
                    tmp2[2][3] = 0.0f;
                    tmp2[1][3] = 0.0f;
                    tmp2[0][3] = 0.0f;
                    mtx = &tmp2;
                    break;
                case 11:
                    tex_mtx_info = &tex_mtx->getTexMtxInfo();
                    unk = (tex_gen_src & 0x80) >> 7;
                    if (unk == 0) {
                        J3DGetTextureMtx(tex_mtx_info->mSRT, tex_mtx_info->mCenter, tmp0);
                    } else if (unk == 1) {
                        J3DGetTextureMtxMaya(tex_mtx_info->mSRT, tmp0);
                    }
                    PSMTXConcat(tmp0, qMtx2, tmp0);
                    eff_mtx = &tex_mtx_obj->getEffectMtx(i);
                    J3DMtxProjConcat(tmp0, *eff_mtx, tmp2);
                    PSMTXInverse(j3dSys.mViewMtx, tmp1);
                    PSMTXConcat(tmp2, tmp1, tmp2);
                    tmp2[2][3] = 0.0f;
                    tmp2[1][3] = 0.0f;
                    tmp2[0][3] = 0.0f;
                    mtx = &tmp2;
                    break;
                default:
                    Mtx& tmp7 = tex_mtx_obj->getMtx(i);
                    mtx = &tmp7;
                    break;
                }
                GXLoadTexMtxImm(*mtx, i * 3 + 0x40, GX_MTX3x4);
            }
        }
    } else {
        for (u16 i = 0; i < (u16)tex_mtx_num; i++) {
            int tex_gen_type = tex_gen_block->getTexCoord(i)->getTexGenType();
            if (tex_gen_type == 1 || tex_gen_type == 0) {
                tex_mtx = tex_gen_block->getTexMtx(i);
                u8 tex_gen_src = tex_mtx->getTexMtxInfo().mInfo;
                u32 unk;
                switch (tex_gen_src & 0x3f) {
                case 3:
                case 9:
                    PSMTXConcat(tex_mtx_obj->getMtx(i), param_0, tmp2);
                    mtx = &tmp2;
                    break;
                case 1:
                case 6:
                case 7:
                    PSMTXCopy(param_0, tmp1);
                    tmp1[2][3] = 0.0f;
                    tmp1[1][3] = 0.0f;
                    tmp1[0][3] = 0.0f;
                    PSMTXConcat(tex_mtx_obj->getMtx(i), tmp1, tmp2);
                    mtx = &tmp2;
                    break;
                case 2:
                case 8:
                    mtx = &tex_mtx_obj->getMtx(i);
                    break;
                case 5:
                    tex_mtx_info = &tex_mtx->getTexMtxInfo();
                    unk = (tex_gen_src & 0x80) >> 7;
                    if (unk == 0) {
                        J3DGetTextureMtxOld(tex_mtx_info->mSRT, tex_mtx_info->mCenter, tmp0);
                    } else if (unk == 1) {
                        J3DGetTextureMtxMayaOld(tex_mtx_info->mSRT, tmp0);
                    }
                    eff_mtx = &tex_mtx_obj->getEffectMtx(i);
                    J3DMtxProjConcat(tmp0, *eff_mtx, tmp2);
                    PSMTXInverse(j3dSys.mViewMtx, tmp1);
                    PSMTXConcat(tmp2, tmp1, tmp2);
                    PSMTXConcat(tmp2, param_0, tmp2);
                    tmp2[2][3] = 0.0f;
                    tmp2[1][3] = 0.0f;
                    tmp2[0][3] = 0.0f;
                    mtx = &tmp2;
                    break;
                case 10:
                    tex_mtx_info = &tex_mtx->getTexMtxInfo();
                    unk = (tex_gen_src & 0x80) >> 7;
                    if (unk == 0) {
                        J3DGetTextureMtx(tex_mtx_info->mSRT, tex_mtx_info->mCenter, tmp0);
                    } else if (unk == 1) {
                        J3DGetTextureMtxMaya(tex_mtx_info->mSRT, tmp0);
                    }
                    PSMTXConcat(tmp0, qMtx, tmp0);
                    eff_mtx = &tex_mtx_obj->getEffectMtx(i);
                    J3DMtxProjConcat(tmp0, *eff_mtx, tmp2);
                    PSMTXInverse(j3dSys.mViewMtx, tmp1);
                    PSMTXConcat(tmp2, tmp1, tmp2);
                    PSMTXConcat(tmp2, param_0, tmp2);
                    tmp2[2][3] = 0.0f;
                    tmp2[1][3] = 0.0f;
                    tmp2[0][3] = 0.0f;
                    mtx = &tmp2;
                    break;
                case 11:
                    tex_mtx_info = &tex_mtx->getTexMtxInfo();
                    unk = (tex_gen_src & 0x80) >> 7;
                    if (unk == 0) {
                        J3DGetTextureMtx(tex_mtx_info->mSRT, tex_mtx_info->mCenter, tmp0);
                    } else if (unk == 1) {
                        J3DGetTextureMtxMaya(tex_mtx_info->mSRT, tmp0);
                    }
                    PSMTXConcat(tmp0, qMtx2, tmp0);
                    eff_mtx = &tex_mtx_obj->getEffectMtx(i);
                    J3DMtxProjConcat(tmp0, *eff_mtx, tmp2);
                    PSMTXInverse(j3dSys.mViewMtx, tmp1);
                    PSMTXConcat(tmp2, tmp1, tmp2);
                    PSMTXConcat(tmp2, param_0, tmp2);
                    tmp2[2][3] = 0.0f;
                    tmp2[1][3] = 0.0f;
                    tmp2[0][3] = 0.0f;
                    mtx = &tmp2;
                    break;
                default:
                    mtx = &tex_mtx_obj->getMtx(i);
                    break;
                }
                GXLoadTexMtxImm(*mtx, i * 3 + 0x1e,
                                (GXTexMtxType)tex_mtx->getTexMtxInfo().mProjection);
            }
        }
    }
}

/* 80313828-803138C8 30E168 00A0+00 1/0 0/0 0/0 .text
 * loadMtxConcatView_PNGP__21J3DShapeMtxConcatViewCFiUs         */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP(int slot, u16 drw) const {
    Mtx m;
    MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drw), m);
    J3DDifferedTexMtx::load(m);
    J3DFifoLoadPosMtxImm(m, slot * 3);
    loadNrmMtx(slot, drw, m);
}

/* 803138C8-8031396C 30E208 00A4+00 2/0 0/0 0/0 .text
 * loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs         */
void J3DShapeMtxConcatView::loadMtxConcatView_PCPU(int slot, u16 drw) const {
    Mtx m;
    MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drw), m);
    J3DDifferedTexMtx::load(m);
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
    loadNrmMtx(slot, drw, m);
}

/* 8031396C-80313A14 30E2AC 00A8+00 2/0 0/0 0/0 .text
 * loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs         */
void J3DShapeMtxConcatView::loadMtxConcatView_NCPU(int slot, u16 drw) const {
    Mtx m;
    MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drw), m);
    J3DDifferedTexMtx::load(m);
    J3DFifoLoadPosMtxImm(m, slot * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
    if (J3DShapeMtx::sTexMtxLoadType == 0x2000)
        J3DFifoLoadNrmMtxToTexMtx(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3 + GX_TEXMTX0);
}

/* 80313A14-80313AC8 30E354 00B4+00 2/0 0/0 0/0 .text
 * loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs        */
void J3DShapeMtxConcatView::loadMtxConcatView_PNCPU(int slot, u16 drw) const {
    Mtx m;
    if (J3DDifferedTexMtx::sTexGenBlock != NULL) {
        MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drw), m);
        J3DDifferedTexMtx::loadExecute(m);
    }
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3);
    if (J3DShapeMtx::sTexMtxLoadType == 0x2000)
        J3DFifoLoadNrmMtxToTexMtx(*j3dSys.getShapePacket()->getBaseMtxPtr(), slot * 3 + GX_TEXMTX0);
}

/* 80313AC8-80313B94 30E408 00CC+00 1/0 0/0 0/0 .text
 * loadMtxConcatView_PNGP_LOD__21J3DShapeMtxConcatViewCFiUs     */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP_LOD(int slot, u16 drw) const {
    Mtx m;
    MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(drw), m);
    MTXConcat(m, j3dSys.mModel->getModelData()->getInvJointMtx(drw), m);
    J3DDifferedTexMtx::load(m);
    J3DFifoLoadPosMtxImm(m, slot * 3);
    loadNrmMtx(slot, drw, m);
}

/* 80313B94-80313BF0 30E4D4 005C+00 1/0 0/0 0/0 .text            load__11J3DShapeMtxCFv */
void J3DShapeMtx::load() const {
    J3DShapeMtx_LoadFunc func = sMtxLoadPipeline[sCurrentPipeline];
    (this->*func)(0, mUseMtxIndex);
}

/* 80313BF0-80313C54 30E530 0064+00 5/0 0/0 0/0 .text
 * calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f           */
void J3DShapeMtx::calcNBTScale(Vec const& param_0, Mtx33* param_1, Mtx33* param_2) {
    J3DPSMtx33Copy(param_1[mUseMtxIndex], param_2[mUseMtxIndex]);
    J3DScaleNrmMtx33(param_2[mUseMtxIndex], param_0);
}

/* 80313C54-80313D28 30E594 00D4+00 1/0 0/0 0/0 .text            load__21J3DShapeMtxConcatViewCFv */
void J3DShapeMtxConcatView::load() const {
    sMtxPtrTbl[0] = j3dSys.getModel()->getMtxBuffer()->getUserAnmMtx(0);
    sMtxPtrTbl[1] = j3dSys.getModel()->getMtxBuffer()->getWeightAnmMtx(0);
    J3DShapeMtxConcatView_LoadFunc func = sMtxLoadPipeline[sCurrentPipeline];
    u32 draw_mtx_flag = j3dSys.getModel()->getModelData()->getDrawMtxFlag(mUseMtxIndex);
    j3dSys.setModelDrawMtx((Mtx*)sMtxPtrTbl[draw_mtx_flag]);
    u16 draw_mtx_index = j3dSys.getModel()->getModelData()->getDrawMtxIndex(mUseMtxIndex);
    (this->*func)(0, draw_mtx_index);
}

/* 80313D28-80313E4C 30E668 0124+00 3/0 0/0 0/0 .text
 * loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f                */
void J3DShapeMtxConcatView::loadNrmMtx(int param_0, u16 param_1, MtxP param_2) const {
    if (sCurrentScaleFlag[param_1] == 1) {
        if (sTexMtxLoadType == 0x2000) {
            J3DFifoLoadNrmMtxToTexMtx(param_2, 0x1e);
        }
        if (!sNBTFlag) {
            J3DFifoLoadNrmMtxImm(param_2, 0);
        } else {
            Mtx33 mtx;
            Vec* scale = j3dSys.getNBTScale();
            J3DPSMtx33CopyFrom34(param_2, mtx);
            J3DScaleNrmMtx33(mtx, *scale);
            J3DFifoLoadNrmMtxImm3x3(mtx, 0);
        }
    } else {
        Mtx33 mtx;
        J3DPSCalcInverseTranspose(param_2, mtx);
        if (sTexMtxLoadType == 0x2000) {
            J3DFifoLoadNrmMtxToTexMtx3x3(mtx, 0x1e);
        }
        if (!sNBTFlag) {
            J3DFifoLoadNrmMtxImm3x3(mtx, 0);
        } else {
            Vec* scale = j3dSys.getNBTScale();
            J3DScaleNrmMtx33(mtx, *scale);
            J3DFifoLoadNrmMtxImm3x3(mtx, 0);
        }
    }
}

/* 80313E4C-80313EEC 30E78C 00A0+00 1/0 0/0 0/0 .text            load__16J3DShapeMtxMultiCFv */
void J3DShapeMtxMulti::load() const {
    J3DShapeMtx_LoadFunc func = sMtxLoadPipeline[sCurrentPipeline];
    int use_mtx_num = mUseMtxNum;
    for (int i = 0; i < use_mtx_num; i++) {
        u16 use_mtx_index = mUseMtxIndexTable[i];
        if (use_mtx_index != 0xffff) {
            (this->*func)(i, use_mtx_index);
        }
    }
}

/* 80313EEC-80313FA4 30E82C 00B8+00 1/0 0/0 0/0 .text
 * calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f      */
void J3DShapeMtxMulti::calcNBTScale(Vec const& param_0, Mtx33* param_1, Mtx33* param_2) {
    int use_mtx_num = mUseMtxNum;
    for (int i = 0; i < use_mtx_num; i++) {
        u16 use_mtx_index = mUseMtxIndexTable[i];
        if (use_mtx_index != 0xffff) {
            J3DPSMtx33Copy(param_1[use_mtx_index], param_2[use_mtx_index]);
            J3DScaleNrmMtx33(param_2[mUseMtxIndexTable[i]], param_0);
        }
    }
}

/* 80313FA4-8031419C 30E8E4 01F8+00 1/0 0/0 0/0 .text load__26J3DShapeMtxMultiConcatViewCFv */
void J3DShapeMtxMultiConcatView::load() const {
    sMtxPtrTbl[0] = j3dSys.getModel()->getMtxBuffer()->getUserAnmMtx(0);
    sMtxPtrTbl[1] = j3dSys.getModel()->getMtxBuffer()->getWeightAnmMtx(0);
    if (!sLODFlag) {
        J3DShapeMtxConcatView_LoadFunc func = sMtxLoadPipeline[sCurrentPipeline];
        int use_mtx_num = mUseMtxNum;
        for (int i = 0; i < use_mtx_num; i++) {
            u16 use_mtx_index = mUseMtxIndexTable[i];
            if (use_mtx_index != 0xffff) {
                u16 draw_mtx_index =
                    j3dSys.getModel()->getModelData()->getDrawMtxIndex(use_mtx_index);
                u8 draw_mtx_flag = j3dSys.getModel()->getModelData()->getDrawMtxFlag(use_mtx_index);
                j3dSys.setModelDrawMtx((Mtx*)sMtxPtrTbl[draw_mtx_flag]);
                (this->*func)(i, draw_mtx_index);
            }
        }
    } else {
        u16* important_mtx_indices = j3dSys.getModel()->getModelData()->getWEvlpImportantMtxIndex();
        j3dSys.setModelDrawMtx((Mtx*)sMtxPtrTbl[0]);
        int use_mtx_num = mUseMtxNum;
        for (int i = 0; i < use_mtx_num; i++) {
            u32 current_pipeline = sCurrentPipeline;
            J3DShapeMtxConcatView_LoadFunc func = sMtxLoadLODPipeline[current_pipeline];
            u16 use_mtx_index = mUseMtxIndexTable[i];
            if (use_mtx_index != 0xffff) {
                u16 important_mtx_index = important_mtx_indices[use_mtx_index];
                if (important_mtx_index != sMtxLoadCache[i]) {
                    u8 draw_mtx_flag =
                        j3dSys.getModel()->getModelData()->getDrawMtxFlag(use_mtx_index);
                    if (draw_mtx_flag == 0) {
                        func = sMtxLoadPipeline[current_pipeline];
                    }
                    (this->*func)(i, important_mtx_index);
                    sMtxLoadCache[i] = important_mtx_index;
                }
            }
        }
    }
}

/* 8031419C-803142D4 30EADC 0138+00 1/0 0/0 0/0 .text
 * loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f           */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int param_0, u16 param_1, MtxP param_2) const {
    Mtx33 mtx1, mtx2;
    if (sCurrentScaleFlag[param_1] == 1) {
        if (sTexMtxLoadType == 0x2000) {
            J3DFifoLoadNrmMtxToTexMtx(param_2, param_0 * 3 + 0x1e);
        }
        if (!sNBTFlag) {
            J3DFifoLoadNrmMtxImm(param_2, param_0 * 3);
        } else {
            Vec* nbt_scale = j3dSys.getNBTScale();
            J3DPSMtx33CopyFrom34(param_2, mtx1);
            J3DScaleNrmMtx33(mtx1, *nbt_scale);
            J3DFifoLoadNrmMtxImm3x3(mtx1, 0);
        }
    } else {
        J3DPSCalcInverseTranspose(param_2, mtx2);
        if (sTexMtxLoadType == 0x2000) {
            J3DFifoLoadNrmMtxToTexMtx3x3(mtx2, param_0 * 3 + 0x1e);
        }
        if (!sNBTFlag) {
            J3DFifoLoadNrmMtxImm3x3(mtx2, param_0 * 3);
        } else {
            Vec* nbt_scale = j3dSys.getNBTScale();
            J3DScaleNrmMtx33(mtx2, *nbt_scale);
            J3DFifoLoadNrmMtxImm3x3(mtx2, param_0 * 3);
        }
    }
}

/* 803142D4-803143E4 30EC14 0110+00 1/0 0/0 0/0 .text load__27J3DShapeMtxBBoardConcatViewCFv */
void J3DShapeMtxBBoardConcatView::load() const {
    Mtx mtx;
    u16 draw_mtx_index = j3dSys.getModel()->getModelData()->getDrawMtxIndex(mUseMtxIndex);
    u8 draw_mtx_flag = j3dSys.getModel()->getModelData()->getDrawMtxFlag(mUseMtxIndex);
    if (draw_mtx_flag == 0) {
        MtxP user_anm_mtx = j3dSys.getModel()->getMtxBuffer()->getUserAnmMtx(draw_mtx_index);
        PSMTXConcat(j3dSys.getViewMtx(), user_anm_mtx, mtx);
    } else {
        MtxP weight_anm_mtx = j3dSys.getModel()->getMtxBuffer()->getWeightAnmMtx(draw_mtx_index);
        PSMTXConcat(j3dSys.getViewMtx(), weight_anm_mtx, mtx);
    }
    J3DCalcBBoardMtx(mtx);
    J3DFifoLoadPosMtxImm(mtx, 0);
    mtx[0][0] = 1.0f / mtx[0][0];
    mtx[1][1] = 1.0f / mtx[1][1];
    mtx[2][2] = 1.0f / mtx[2][2];
    mtx[0][3] = 0.0f;
    mtx[1][3] = 0.0f;
    mtx[2][3] = 0.0f;
    if (!sNBTFlag) {
        J3DFifoLoadNrmMtxImm(mtx, 0);
    } else {
        Vec* nbt_scale = j3dSys.getNBTScale();
        J3DScaleNrmMtx(mtx, *nbt_scale);
        J3DFifoLoadNrmMtxImm(mtx, 0);
    }
}

/* 803143E4-80314520 30ED24 013C+00 1/0 0/0 0/0 .text load__28J3DShapeMtxYBBoardConcatViewCFv */
void J3DShapeMtxYBBoardConcatView::load() const {
    Mtx mtx1;
    Mtx33 mtx2;
    u16 draw_mtx_index = j3dSys.getModel()->getModelData()->getDrawMtxIndex(mUseMtxIndex);
    u8 draw_mtx_flag = j3dSys.getModel()->getModelData()->getDrawMtxFlag(mUseMtxIndex);
    if (draw_mtx_flag == 0) {
        MtxP user_anm_mtx = j3dSys.getModel()->getMtxBuffer()->getUserAnmMtx(draw_mtx_index);
        PSMTXConcat(j3dSys.getViewMtx(), user_anm_mtx, mtx1);
    } else {
        MtxP weight_anm_mtx = j3dSys.getModel()->getMtxBuffer()->getWeightAnmMtx(draw_mtx_index);
        PSMTXConcat(j3dSys.getViewMtx(), weight_anm_mtx, mtx1);
    }
    J3DCalcYBBoardMtx(mtx1);
    J3DFifoLoadPosMtxImm(mtx1, 0);
    if (sCurrentScaleFlag[mUseMtxIndex] == 1) {
        if (!sNBTFlag) {
            J3DFifoLoadNrmMtxImm(mtx1, 0);
        } else {
            Vec* nbt_scale = j3dSys.getNBTScale();
            J3DScaleNrmMtx(mtx1, *nbt_scale);
            J3DFifoLoadNrmMtxImm(mtx1, 0);
        }
    } else {
        J3DPSCalcInverseTranspose(mtx1, mtx2);
        if (!sNBTFlag) {
            J3DFifoLoadNrmMtxImm3x3(mtx2, 0);
        } else {
            Vec* nbt_scale = j3dSys.getNBTScale();
            J3DScaleNrmMtx33(mtx2, *nbt_scale);
            J3DFifoLoadNrmMtxImm3x3(mtx2, 0);
        }
    }
}

static void dummy() {
    static u8 mtxCache[20] = {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    };
}
