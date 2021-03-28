//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_msg_mng
//

#include "f_op/f_op_msg_mng.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct process_priority_class {};

struct layer_class {};

struct fopAc_ac_c {};

struct dMsgObject_c {
    /* 80233D04 */ void setMessageIndex(u32, u32, bool);
    /* 80233E70 */ void setMessageIndexDemo(u32, bool);
    /* 80237A74 */ void setTalkPartner(fopAc_ac_c*);
    /* 80238098 */ void endFlowGroup();
    /* 8023826C */ void setTalkActor(fopAc_ac_c*);
};

struct dMeter2_c {
    /* 8021F6EC */ void emphasisButtonDelete();
};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C250 */ void getString(u32, char*, JMSMesgEntry_c*);
};

struct cXyz {};

struct cMl {
    /* 80263228 */ void memalignB(int, u32);
};

struct JKRHeap {
    /* 802CE448 */ void destroy();
};

struct JKRExpHeap {
    /* 802CEE2C */ void create(u32, JKRHeap*, bool);
};

struct J2DPicture {
    /* 800202CC */ void setBlendRatio(f32, f32);
    /* 80020338 */ void append(char const*, f32);
    /* 80020368 */ void insert(char const*, u8, f32);
};

struct J2DPane {
    /* 80020158 */ void setAlpha(u8);
};

//
// Forward References:
//

void fopMsgM_setStageLayer(void*);
void fopMsgM_SearchByID(unsigned int);
void fopMsgM_GetAppend(void*);
void fopMsgM_Delete(void*);
static void createAppend(fopAc_ac_c*, cXyz*, u32*, u32*, unsigned int);
static void createTimerAppend(int, u32, u8, u8, f32, f32, f32, f32, unsigned int);
void fopMsgM_create(s16, fopAc_ac_c*, cXyz*, u32*, u32*, int (*)(void*));
void fop_Timer_create(s16, u8, u32, u8, u8, f32, f32, f32, f32, int (*)(void*));
void fopMsgM_messageSet(u32, fopAc_ac_c*, u32);
void fopMsgM_messageSet(u32, u32);
void fopMsgM_messageSetDemo(u32);
void fopMsgM_messageGet(char*, u32);
void fopMsgM_setMessageID(unsigned int);
void fopMsgM_Create(s16, int (*)(void*), void*);
void fopMsgM_valueIncrease(int, int, u8);
void fopMsgM_createExpHeap(u32, JKRHeap*);
void fopMsgM_destroyExpHeap(JKRExpHeap*);

extern "C" void fopMsgM_setStageLayer__FPv();
extern "C" void fopMsgM_SearchByID__FUi();
extern "C" void fopMsgM_GetAppend__FPv();
extern "C" void fopMsgM_Delete__FPv();
extern "C" static void createAppend__FP10fopAc_ac_cP4cXyzPUlPUlUi();
extern "C" static void createTimerAppend__FiUlUcUcffffUi();
extern "C" void fopMsgM_create__FsP10fopAc_ac_cP4cXyzPUlPUlPFPv_i();
extern "C" void fop_Timer_create__FsUcUlUcUcffffPFPv_i();
extern "C" void fopMsgM_messageSet__FUlP10fopAc_ac_cUl();
extern "C" void fopMsgM_messageSet__FUlUl();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void fopMsgM_messageGet__FPcUl();
extern "C" void fopMsgM_setMessageID__FUi();
extern "C" void fopMsgM_Create__FsPFPv_iPv();
extern "C" void setAlpha__7J2DPaneFUc();
extern "C" void fopMsgM_valueIncrease__FiiUc();
extern "C" void setBlendRatio__10J2DPictureFff();
extern "C" void append__10J2DPictureFPCcf();
extern "C" void insert__10J2DPictureFPCcUcf();
extern "C" void fopMsgM_createExpHeap__FUlP7JKRHeap();
extern "C" void fopMsgM_destroyExpHeap__FP10JKRExpHeap();

//
// External References:
//

void mDoExt_getGameHeap();
void fopScnM_SearchByID(unsigned int);
void fpcBs_Is_JustOfType(int, int);
void fpcEx_SearchByID(unsigned int);
void fpcLy_CurrentLayer();
void fpcM_Delete(void*);
void fpcPi_Change(process_priority_class*, unsigned int, u16, u16);
void fpcSCtRq_Request(layer_class*, s16, int (*)(void*, void*), void*, void*);
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 g_MsgObject_HIO_c[1040];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 g_fpcNd_type[4 + 4 /* padding */];
extern "C" extern u8 mProcID__20dStage_roomControl_c[4];

extern "C" void mDoExt_getGameHeap__Fv();
extern "C" void fopScnM_SearchByID__FUi();
extern "C" void fpcBs_Is_JustOfType__Fii();
extern "C" void fpcEx_SearchByID__FUi();
extern "C" void fpcLy_CurrentLayer__Fv();
extern "C" void fpcM_Delete__FPv();
extern "C" void fpcPi_Change__FP22process_priority_classUiUsUs();
extern "C" void fpcSCtRq_Request__FP11layer_classsPFPvPv_iPvPv();
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void emphasisButtonDelete__9dMeter2_cFv();
extern "C" void setMessageIndex__12dMsgObject_cFUlUlb();
extern "C" void setMessageIndexDemo__12dMsgObject_cFUlb();
extern "C" void setTalkPartner__12dMsgObject_cFP10fopAc_ac_c();
extern "C" void endFlowGroup__12dMsgObject_cFv();
extern "C" void setTalkActor__12dMsgObject_cFP10fopAc_ac_c();
extern "C" void memalignB__3cMlFiUl();
extern "C" void destroy__7JKRHeapFv();
extern "C" void create__10JKRExpHeapFUlP7JKRHeapb();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 g_MsgObject_HIO_c[1040];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 g_fpcNd_type[4 + 4 /* padding */];
extern "C" extern u8 mProcID__20dStage_roomControl_c[4];

//
// Declarations:
//

/* 8001F9B4-8001FA24 0070+00 s=0 e=3 z=0  None .text      fopMsgM_setStageLayer__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_setStageLayer(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_setStageLayer__FPv.s"
}
#pragma pop

/* 8001FA24-8001FA44 0020+00 s=3 e=14 z=4  None .text      fopMsgM_SearchByID__FUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_SearchByID(unsigned int param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_SearchByID__FUi.s"
}
#pragma pop

/* 8001FA44-8001FA4C 0008+00 s=0 e=2 z=0  None .text      fopMsgM_GetAppend__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_GetAppend(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_GetAppend__FPv.s"
}
#pragma pop

/* 8001FA4C-8001FA6C 0020+00 s=0 e=2 z=0  None .text      fopMsgM_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_Delete(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_Delete__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451C70-80451C74 0004+00 s=6 e=0 z=0  None .sdata2    @3902 */
SECTION_SDATA2 static u8 lit_3902[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8001FA6C-8001FB50 00E4+00 s=1 e=0 z=0  None .text      createAppend__FP10fopAc_ac_cP4cXyzPUlPUlUi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createAppend(fopAc_ac_c* param_0, cXyz* param_1, u32* param_2, u32* param_3,
                             unsigned int param_4) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/createAppend__FP10fopAc_ac_cP4cXyzPUlPUlUi.s"
}
#pragma pop

/* 8001FB50-8001FC4C 00FC+00 s=1 e=0 z=0  None .text      createTimerAppend__FiUlUcUcffffUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createTimerAppend(int param_0, u32 param_1, u8 param_2, u8 param_3, f32 param_4,
                                  f32 param_5, f32 param_6, f32 param_7, unsigned int param_8) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/createTimerAppend__FiUlUcUcffffUi.s"
}
#pragma pop

/* 8001FC4C-8001FCC0 0074+00 s=0 e=1 z=0  None .text
 * fopMsgM_create__FsP10fopAc_ac_cP4cXyzPUlPUlPFPv_i            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_create(s16 param_0, fopAc_ac_c* param_1, cXyz* param_2, u32* param_3, u32* param_4,
                        int (*)(void*)) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_create__FsP10fopAc_ac_cP4cXyzPUlPUlPFPv_i.s"
}
#pragma pop

/* 8001FCC0-8001FD34 0074+00 s=0 e=2 z=0  None .text      fop_Timer_create__FsUcUlUcUcffffPFPv_i */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fop_Timer_create(s16 param_0, u8 param_1, u32 param_2, u8 param_3, u8 param_4, f32 param_5,
                          f32 param_6, f32 param_7, f32 param_8, int (*)(void*)) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fop_Timer_create__FsUcUlUcUcffffPFPv_i.s"
}
#pragma pop

/* ############################################################################################## */
/* 804505C8-804505D0 0004+04 s=4 e=0 z=0  None .sdata     i_msgID */
SECTION_SDATA static u32 i_msgID[1 + 1 /* padding */] = {
    0xFFFFFFFF,
    /* padding */
    0x00000000,
};

/* 8001FD34-8001FE84 0150+00 s=0 e=2 z=1  None .text      fopMsgM_messageSet__FUlP10fopAc_ac_cUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_messageSet(u32 param_0, fopAc_ac_c* param_1, u32 param_2) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_messageSet__FUlP10fopAc_ac_cUl.s"
}
#pragma pop

/* 8001FE84-8001FFC4 0140+00 s=0 e=6 z=4  None .text      fopMsgM_messageSet__FUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_messageSet(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_messageSet__FUlUl.s"
}
#pragma pop

/* 8001FFC4-800200C0 00FC+00 s=0 e=1 z=13  None .text      fopMsgM_messageSetDemo__FUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_messageSetDemo(u32 param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_messageSetDemo__FUl.s"
}
#pragma pop

/* 800200C0-80020100 0040+00 s=0 e=7 z=1  None .text      fopMsgM_messageGet__FPcUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_messageGet(char* param_0, u32 param_1) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_messageGet__FPcUl.s"
}
#pragma pop

/* 80020100-80020108 0008+00 s=0 e=1 z=0  None .text      fopMsgM_setMessageID__FUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_setMessageID(unsigned int param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_setMessageID__FUi.s"
}
#pragma pop

/* 80020108-80020158 0050+00 s=0 e=2 z=0  None .text      fopMsgM_Create__FsPFPv_iPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_Create(s16 param_0, int (*)(void*), void* param_2) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_Create__FsPFPv_iPv.s"
}
#pragma pop

/* 80020158-80020160 0008+00 s=0 e=5 z=0  None .text      setAlpha__7J2DPaneFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPane::setAlpha(u8 param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/setAlpha__7J2DPaneFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A3970-803A3990 001C+04 s=1 e=0 z=0  None .data      @4305 */
SECTION_DATA static void* lit_4305[7 + 1 /* padding */] = {
    (void*)(((char*)fopMsgM_valueIncrease__FiiUc) + 0x88),
    (void*)(((char*)fopMsgM_valueIncrease__FiiUc) + 0x90),
    (void*)(((char*)fopMsgM_valueIncrease__FiiUc) + 0xB4),
    (void*)(((char*)fopMsgM_valueIncrease__FiiUc) + 0xBC),
    (void*)(((char*)fopMsgM_valueIncrease__FiiUc) + 0xD8),
    (void*)(((char*)fopMsgM_valueIncrease__FiiUc) + 0x10C),
    (void*)(((char*)fopMsgM_valueIncrease__FiiUc) + 0x140),
    /* padding */
    NULL,
};

/* 80451C74-80451C78 0004+00 s=1 e=0 z=0  None .sdata2    @4167 */
SECTION_SDATA2 static u32 lit_4167 = 0x3F000000;

/* 80451C78-80451C7C 0004+00 s=1 e=0 z=0  None .sdata2    @4298 */
SECTION_SDATA2 static u32 lit_4298 = 0x3F800000;

/* 80451C7C-80451C80 0004+00 s=1 e=0 z=0  None .sdata2    @4299 */
SECTION_SDATA2 static u32 lit_4299 = 0x40000000;

/* 80451C80-80451C84 0004+00 s=1 e=0 z=0  None .sdata2    @4300 */
SECTION_SDATA2 static u32 lit_4300 = 0x47000000;

/* 80451C84-80451C88 0004+00 s=1 e=0 z=0  None .sdata2    @4301 */
SECTION_SDATA2 static u32 lit_4301 = 0x477FFF00;

/* 80451C88-80451C90 0008+00 s=1 e=0 z=0  None .sdata2    @4303 */
SECTION_SDATA2 static u8 lit_4303[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80020160-800202CC 016C+00 s=1 e=4 z=2  None .text      fopMsgM_valueIncrease__FiiUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_valueIncrease(int param_0, int param_1, u8 param_2) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_valueIncrease__FiiUc.s"
}
#pragma pop

/* 800202CC-80020338 006C+00 s=0 e=2 z=0  None .text      setBlendRatio__10J2DPictureFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::setBlendRatio(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/setBlendRatio__10J2DPictureFff.s"
}
#pragma pop

/* 80020338-80020368 0030+00 s=0 e=1 z=0  None .text      append__10J2DPictureFPCcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::append(char const* param_0, f32 param_1) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/append__10J2DPictureFPCcf.s"
}
#pragma pop

/* 80020368-8002039C 0034+00 s=0 e=1 z=0  None .text      insert__10J2DPictureFPCcUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPicture::insert(char const* param_0, u8 param_1, f32 param_2) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/insert__10J2DPictureFPCcUcf.s"
}
#pragma pop

/* 8002039C-800203E0 0044+00 s=0 e=3 z=0  None .text      fopMsgM_createExpHeap__FUlP7JKRHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_createExpHeap(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_createExpHeap__FUlP7JKRHeap.s"
}
#pragma pop

/* 800203E0-80020400 0020+00 s=0 e=3 z=0  None .text      fopMsgM_destroyExpHeap__FP10JKRExpHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopMsgM_destroyExpHeap(JKRExpHeap* param_0) {
    nofralloc
#include "asm/f_op/f_op_msg_mng/fopMsgM_destroyExpHeap__FP10JKRExpHeap.s"
}
#pragma pop
