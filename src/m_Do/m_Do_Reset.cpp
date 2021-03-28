//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_Reset
//

#include "m_Do/m_Do_Reset.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoRst {
    /* 800157F4 */ void getResetData();
};

struct mDoDvdThd {
    /* 800157FC */ void main(void*);
};

struct Z2AudioMgr {
    /* 802CDA6C */ void hasReset() const;
};

struct JUTXfb {
    /* 802E5214 */ void clearIndex();
};

struct JUTVideo {
    /* 802E4CAC */ void destroyManager();
};

struct JASTaskThread {
    /* 8028FE88 */ void pause(bool);
};

struct JASDvd {
    /* 8028FEFC */ void getThreadPointer();
};

//
// Forward References:
//

static void my_OSCancelAlarmAll();
static void destroyVideo();
void mDoRst_reset(int, u32, int);
void mDoRst_resetCallBack(int, void*);
extern "C" extern char const* const m_Do_m_Do_Reset__stringBase0;
extern "C" extern u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" extern u8 struct_80450C80[8];
extern "C" extern u8 data_80450C88[8];

extern "C" static void my_OSCancelAlarmAll__Fv();
extern "C" static void destroyVideo__Fv();
extern "C" void mDoRst_reset__FiUli();
extern "C" void mDoRst_resetCallBack__FiPv();
extern "C" void getResetData__6mDoRstFv();
extern "C" extern char const* const m_Do_m_Do_Reset__stringBase0;
extern "C" extern u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" extern u8 struct_80450C80[8];
extern "C" extern u8 data_80450C88[8];

//
// External References:
//

void mDoDvdErr_ThdCleanup();
void cAPICPad_recalibrate();
extern "C" extern u8 g_mDoMemCd_control[8192];
extern "C" extern u8 struct_80450BB8[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];
extern "C" extern u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];
extern "C" extern u8 struct_80451500[4];
extern "C" extern u8 sManager__6JUTXfb[4 + 4 /* padding */];

extern "C" void OSAttention();
extern "C" void main__9mDoDvdThdFPv();
extern "C" void mDoDvdErr_ThdCleanup__Fv();
extern "C" void cAPICPad_recalibrate__Fv();
extern "C" void pause__13JASTaskThreadFb();
extern "C" void getThreadPointer__6JASDvdFv();
extern "C" void hasReset__10Z2AudioMgrCFv();
extern "C" void destroyManager__8JUTVideoFv();
extern "C" void clearIndex__6JUTXfbFv();
extern "C" void LCDisable();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSSetSaveRegion();
extern "C" void OSResetSystem();
extern "C" void OSGetCurrentThread();
extern "C" void OSCancelThread();
extern "C" void OSDetachThread();
extern "C" void OSSuspendThread();
extern "C" void DVDGetDriveStatus();
extern "C" void DVDCheckDisk();
extern "C" void VIWaitForRetrace();
extern "C" void VIFlush();
extern "C" void VISetBlack();
extern "C" void GXSetCurrentGXThread();
extern "C" void GXGetCurrentGXThread();
extern "C" void GXFlush();
extern "C" void GXAbortFrame();
extern "C" void GXDrawDone();
extern "C" void GXSetDrawDoneCallback();
extern "C" void _savegpr_27();
extern "C" extern u8 g_mDoMemCd_control[8192];
extern "C" extern u8 struct_80450BB8[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];
extern "C" extern u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];
extern "C" extern u8 struct_80451500[4];
extern "C" extern u8 sManager__6JUTXfb[4 + 4 /* padding */];

//
// Declarations:
//

/* 800155D8-800155DC 0004+00 s=1 e=0 z=0  None .text      my_OSCancelAlarmAll__Fv */
static void my_OSCancelAlarmAll() {
    /* empty function */
}

/* 800155DC-80015614 0038+00 s=1 e=0 z=0  None .text      destroyVideo__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void destroyVideo() {
    nofralloc
#include "asm/m_Do/m_Do_Reset/destroyVideo__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80374198-803741A8 0010+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80374198 = "DVD_STATE_BUSY\n";
#pragma pop

/* 80450C78-80450C80 0004+04 s=3 e=42 z=2  None .sbss      mResetData__6mDoRst */
u8 mResetData__6mDoRst[4 + 4 /* padding */];

/* 80015614-8001574C 0138+00 s=0 e=3 z=0  None .text      mDoRst_reset__FiUli */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoRst_reset(int param_0, u32 param_1, int param_2) {
    nofralloc
#include "asm/m_Do/m_Do_Reset/mDoRst_reset__FiUli.s"
}
#pragma pop

/* 8001574C-800157F4 00A8+00 s=0 e=3 z=0  None .text      mDoRst_resetCallBack__FiPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoRst_resetCallBack(int param_0, void* param_1) {
    nofralloc
#include "asm/m_Do/m_Do_Reset/mDoRst_resetCallBack__FiPv.s"
}
#pragma pop

/* 800157F4-800157FC 0008+00 s=1 e=0 z=0  None .text      getResetData__6mDoRstFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoRst::getResetData() {
    nofralloc
#include "asm/m_Do/m_Do_Reset/getResetData__6mDoRstFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450C80-80450C88 0008+00 s=0 e=6 z=0  None .sbss      None */
u8 struct_80450C80[8];

/* 80450C88-80450C90 0008+00 s=0 e=2 z=0  None .sbss      None */
u8 data_80450C88[8];
