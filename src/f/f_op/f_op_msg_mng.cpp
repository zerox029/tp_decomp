/* f_op_msg_mng.cpp autogenerated by split.py v0.4 at 2021-02-15 20:21:51.945184 */

#include "f/f_op/f_op_msg_mng.h"
#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "f/f_op/f_op_scene_iter.h"
#include "f/f_pc/f_pc_manager.h"
#include "f/f_pc/f_pc_stdcreate_req.h"
#include "global.h"
#include "m_Do/m_Do_ext/m_Do_ext.h"
#include "f/f_op/f_op_scene_mng.h"
#include "f/f_pc/f_pc_node.h"
#include "f/f_pc/f_pc_priority.h"
#include "f/f_pc/f_pc_executor.h"
#include "d/d_msg_object/d_msg_object.h"

// additional symbols needed for f_op_msg_mng.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:21:51.945228
extern "C" {
void fopScnM_SearchByID__FUi(void);
void _restgpr_26(void);
void _restgpr_27(void);
void _restgpr_28(void);
void _restgpr_29(void);
void _savegpr_26(void);
void _savegpr_27(void);
void _savegpr_28(void);
void _savegpr_29(void);
void createAppend__FP10fopAc_ac_cP4cXyzPUlPUlUi(void);
void createTimerAppend__FiUlUcUcffffUi(void);
void create__10JKRExpHeapFUlP7JKRHeapb(void);
void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c(void);
void emphasisButtonDelete__9dMeter2_cFv(void);
void endFlowGroup__12dMsgObject_cFv(void);
void setMessageIndex__12dMsgObject_cFUlUlb(void);
void setMessageIndexDemo__12dMsgObject_cFUlb(void);
void setTalkActor__12dMsgObject_cFP10fopAc_ac_c(void);
void setTalkPartner__12dMsgObject_cFP10fopAc_ac_c(void);
void destroy__7JKRHeapFv(void);
void fopMsgM_Create__FsPFPv_iPv(void);
void fopMsgM_Delete__FPv(void);
void fopMsgM_GetAppend__FPv(void);
void fopMsgM_SearchByID__FUi(void);
void fopMsgM_create__FsP10fopAc_ac_cP4cXyzPUlPUlPFPv_i(void);
void fopMsgM_createExpHeap__FUlP7JKRHeap(void);
void fopMsgM_destroyExpHeap__FP10JKRExpHeap(void);
void fopMsgM_messageGet__FPcUl(void);
void fopMsgM_messageSet__FUlP10fopAc_ac_cUl(void);
void fopMsgM_messageSetDemo__FUl(void);
void fopMsgM_messageSet__FUlUl(void);
void fopMsgM_setMessageID__FUi(void);
void fopMsgM_setStageLayer__FPv(void);
void fopMsgM_valueIncrease__FiiUc(void);
// void fopScnM_SearchByID(void);
void fop_Timer_create__FsUcUlUcUcffffPFPv_i(void);
void fpcEx_SearchByID__FUi(void);
void fpcM_Delete__FPv(void);
void setAlpha__7J2DPaneFUc(void);
void setBlendRatio__10J2DPictureFff(void);
void append__10J2DPictureFPCcf(void);
void insert__10J2DPictureFPCcUcf(void);
void memalignB__3cMlFiUl(void);
}

// additional symbols needed for f_op_msg_mng.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:21:51.945234
extern u8 lbl_803A3970;
extern u8 lbl_8043028C;
extern u8 lbl_80439A20;
extern unsigned int i_msgID;
extern int g_fpcNd_type;
extern unsigned int _mProcID;
extern u8 lbl_80451C70;
extern u8 lbl_80451C74;
extern u8 lbl_80451C78;
extern u8 lbl_80451C7C;
extern u8 lbl_80451C80;
extern u8 lbl_80451C84;
extern u8 lbl_80451C88;
extern u8 lbl_80430188;


#ifdef NON_MATCHING
// 1 instruction off, needs alot of cleanup
void fopMsgM_setStageLayer(void* param_1) {
    struct unk {
        u8 field_0x00[0xb4];
        int field_0xB4;
        u8 field_0xB8[0x10];
        int* field_0xC8;
    };

    int* pUnk;

    unk* pScene = (unk*)fopScnM_SearchByID(_mProcID);

    if (!fpcBs_Is_JustOfType(g_fpcNd_type,pScene->field_0xB4)) {
        pUnk = (int*)-1;
    } else {
        pUnk = pScene->field_0xC8;
    }

    fpcPi_Change((process_priority_class*)param_1,(u32)pUnk,0xFFFD,0xFFFD);
}
#else
asm void fopMsgM_setStageLayer(void*) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_8001F9B4.s"
}
#endif

void fopMsgM_SearchByID(unsigned int id) {
    fpcEx_SearchByID(id);
}

// matches but can be improved
u32 fopMsgM_GetAppend(void* pProc) {
    struct unk {
        u8 field_0x00[0xAC];
        u32 field_0xac;
    };

    return ((unk*)pProc)->field_0xac;
}

// fopMsgM_Delete__FPv
// fopMsgM_Delete__FPv(void*)
void fopMsgM_Delete(void* pProc) {
    fpcM_Delete(pProc);
}

// createAppend__FP10fopAc_ac_cP4cXyzPUlPUlUi
// createAppend(fopAc_ac_c*, cXyz*, u32*, u32*, unsigned int)
asm dMsgObject_c** createAppend(fopAc_ac_c*, cXyz*, u32*, u32*, unsigned int) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_8001FA6C.s"
}

// createTimerAppend__FiUlUcUcffffUi
// createTimerAppend__FiUlUcUcffffUi(int, u32, u8, u8, f32, f32, f32, f32, unsigned int)
asm void createTimerAppend(int, u32, u8, u8, f32, f32, f32, f32, unsigned int) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_8001FB50.s"
}

s32 fopMsgM_create(s16 param_1, fopAc_ac_c* pActor, cXyz* pPosition, u32* param_4, u32* param_5, fopMsgCreateFunc param_6) {
    s32 ret;
    dMsgObject_c** ppMsg = createAppend(pActor,pPosition,param_4,param_5,-1);

    if (!ppMsg) {
        ret = -1;
    } else {
        layer_class* pLayer = fpcLy_CurrentLayer();
        ret = fpcSCtRq_Request(pLayer,param_1,(stdCreateFunc)param_6,0,ppMsg);
    }

    return ret;
}

// fop_Timer_create__FsUcUlUcUcffffPFPv_i
// fop_Timer_create__FsUcUlUcUcffffPFPv_i(s16, u8, u32, u8, u8, f32, f32, f32, f32, int (*)(void*))
asm void fop_Timer_create(s16, u8, u32, u8, u8, f32, f32, f32, f32, int (*)(void*)) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_8001FCC0.s"
}

// fopMsgM_messageSet__FUlP10fopAc_ac_cUl
// fopMsgM_messageSet__FUlP10fopAc_ac_cUl(u32, fopAc_ac_c*, u32)
asm void fopMsgM_messageSet(u32, fopAc_ac_c*, u32) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_8001FD34.s"
}

// fopMsgM_messageSet__FUlUl
// fopMsgM_messageSet__FUlP10fopAc_ac_cUl(u32, u32)
asm void fopMsgM_messageSet(u32, u32) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_8001FE84.s"
}

// fopMsgM_messageSetDemo__FUl
// fopMsgM_messageSetDemo__FUl(u32)
asm void fopMsgM_messageSetDemo(u32) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_8001FFC4.s"
}

// fopMsgM_messageGet__FPcUl
// fopMsgM_messageGet__FPcUl(s8*, u32)
asm void fopMsgM_messageGet(char*, u32) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_800200C0.s"
}

// fopMsgM_setMessageID__FUi
// fopMsgM_setMessageID__FUi(unsigned int)
void fopMsgM_setMessageID(unsigned int messageId) {
    i_msgID = messageId;
}

// fopMsgM_Create__FsPFPv_iPv
// fopMsgM_Create__FsPFPv_iPv(s16, int (*)(void*), void*)
asm void fopMsgM_Create(s16, int (*)(void*), void*) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_80020108.s"
}

// setAlpha__7J2DPaneFUc
// J2DPane::setAlpha(u8)
void J2DPane::setAlpha(u8 i_alpha) {
    this->mAlpha = i_alpha;
}

// fopMsgM_valueIncrease__FiiUc
// fopMsgM_valueIncrease__FiiUc(int, int, u8)
asm void fopMsgM_valueIncrease(int, int, u8) {
    nofralloc
#include "f/f_op/f_op_msg_mng/asm/func_80020160.s"
}

void J2DPicture::setBlendRatio(f32 param_1, f32 param_2) {
    setBlendColorRatio(param_1, param_2);
    setBlendAlphaRatio(param_1, param_2);
}

void J2DPicture::append(const char* param_1, f32 param_2) {
    insert(param_1, field_0x08, param_2);
}

void J2DPicture::insert(const char* param_1, u8 param_2, f32 param_3) {
    insert(param_1, 0, param_2, param_3);
}

void fopMsgM_createExpHeap(u32 param_1, JKRHeap* pJKRHeap) {
    if (!pJKRHeap) {
        pJKRHeap = mDoExt_getGameHeap__Fv();  // fix this in header later
    }

    JKRExpHeap::create(param_1, pJKRHeap, false);
}

void fopMsgM_destroyExpHeap(JKRExpHeap* pJKRExpHeap) {
    pJKRExpHeap->destroy();
}