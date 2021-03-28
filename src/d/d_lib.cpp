//
// Generated By: dol2asm
// Translation Unit: d/d_lib
//

#include "d/d_lib.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct dLib_time_c {
    /* 80032804 */ void getTime();
    /* 80032880 */ void stopTime();
    /* 800328BC */ void startTime();
};

struct dEvt_control_c {
    /* 800434D8 */ void searchMapEventData(u8);
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct STControl {
    /* 80032044 */ STControl(s16, s16, s16, s16, f32, f32, s16, s16);
    /* 80032088 */ void setWaitParm(s16, s16, s16, s16, f32, f32, s16, s16);
    /* 800320AC */ void init();
    /* 800320FC */ void Xinit();
    /* 8003212C */ void Yinit();
    /* 8003215C */ void getValueStick();
    /* 8003216C */ void getAngleStick();
    /* 8003219C */ void checkTrigger();
    /* 8003242C */ void checkLeftTrigger();
    /* 800324A8 */ void checkRightTrigger();
    /* 80032524 */ void checkUpTrigger();
    /* 800325A0 */ void checkDownTrigger();
};

struct JKRHeap {};

struct JKRExpandSwitch {};

struct JKRArchive {
    /* 802D65A4 */ void findFsResource(char const*, u32) const;
};

struct JKRAramArchive {
    /* 802D781C */ void getAramAddress(char const*);
};

struct JKRAram {
    /* 802D25B4 */ void aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
};

struct CSTControl {
    /* 8003217C */ void getValueStick();
    /* 8003218C */ void getAngleStick();
};

//
// Forward References:
//

void dLib_getEventSwitchNo(int);
void dLib_checkActorInRectangle(fopAc_ac_c*, fopAc_ac_c*, cXyz const*, cXyz const*);
void dLib_getExpandSizeFromAramArchive(JKRAramArchive*, char const*);
extern "C" extern u8 ZeroQuat[16];
extern "C" extern void* __vt__10CSTControl[4];
extern "C" extern void* __vt__9STControl[4];
extern "C" extern u8 struct_80450DF0[8];

extern "C" void __ct__9STControlFssssffss();
extern "C" void setWaitParm__9STControlFssssffss();
extern "C" void init__9STControlFv();
extern "C" void Xinit__9STControlFv();
extern "C" void Yinit__9STControlFv();
extern "C" void getValueStick__9STControlFv();
extern "C" void getAngleStick__9STControlFv();
extern "C" void getValueStick__10CSTControlFv();
extern "C" void getAngleStick__10CSTControlFv();
extern "C" void checkTrigger__9STControlFv();
extern "C" void checkLeftTrigger__9STControlFv();
extern "C" void checkRightTrigger__9STControlFv();
extern "C" void checkUpTrigger__9STControlFv();
extern "C" void checkDownTrigger__9STControlFv();
extern "C" void dLib_getEventSwitchNo__Fi();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc();
extern "C" void getTime__11dLib_time_cFv();
extern "C" void stopTime__11dLib_time_cFv();
extern "C" void startTime__11dLib_time_cFv();
extern "C" extern u8 ZeroQuat[16];
extern "C" extern void* __vt__10CSTControl[4];
extern "C" extern void* __vt__9STControl[4];
extern "C" extern u8 struct_80450DF0[8];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void searchMapEventData__14dEvt_control_cFUc();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void findFsResource__10JKRArchiveCFPCcUl();
extern "C" void getAramAddress__14JKRAramArchiveFPCc();
extern "C" void OSGetTime();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803A7240-803A7250 0010+00 s=0 e=0 z=6  None .data      ZeroQuat */
SECTION_DATA u8 ZeroQuat[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 803A7250-803A7260 0010+00 s=0 e=1 z=0  None .data      __vt__10CSTControl */
SECTION_DATA void* __vt__10CSTControl[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)getValueStick__10CSTControlFv,
    (void*)getAngleStick__10CSTControlFv,
};

/* 803A7260-803A7270 0010+00 s=1 e=1 z=0  None .data      __vt__9STControl */
SECTION_DATA void* __vt__9STControl[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)getValueStick__9STControlFv,
    (void*)getAngleStick__9STControlFv,
};

/* 80032044-80032088 0044+00 s=0 e=6 z=0  None .text      __ct__9STControlFssssffss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm STControl::STControl(s16 param_0, s16 param_1, s16 param_2, s16 param_3, f32 param_4,
                         f32 param_5, s16 param_6, s16 param_7) {
    nofralloc
#include "asm/d/d_lib/__ct__9STControlFssssffss.s"
}
#pragma pop

/* 80032088-800320AC 0024+00 s=1 e=3 z=0  None .text      setWaitParm__9STControlFssssffss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::setWaitParm(s16 param_0, s16 param_1, s16 param_2, s16 param_3, f32 param_4,
                                f32 param_5, s16 param_6, s16 param_7) {
    nofralloc
#include "asm/d/d_lib/setWaitParm__9STControlFssssffss.s"
}
#pragma pop

/* 800320AC-800320FC 0050+00 s=1 e=1 z=0  None .text      init__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::init() {
    nofralloc
#include "asm/d/d_lib/init__9STControlFv.s"
}
#pragma pop

/* 800320FC-8003212C 0030+00 s=1 e=0 z=0  None .text      Xinit__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::Xinit() {
    nofralloc
#include "asm/d/d_lib/Xinit__9STControlFv.s"
}
#pragma pop

/* 8003212C-8003215C 0030+00 s=1 e=0 z=0  None .text      Yinit__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::Yinit() {
    nofralloc
#include "asm/d/d_lib/Yinit__9STControlFv.s"
}
#pragma pop

/* 8003215C-8003216C 0010+00 s=1 e=0 z=0  None .text      getValueStick__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::getValueStick() {
    nofralloc
#include "asm/d/d_lib/getValueStick__9STControlFv.s"
}
#pragma pop

/* 8003216C-8003217C 0010+00 s=1 e=0 z=0  None .text      getAngleStick__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::getAngleStick() {
    nofralloc
#include "asm/d/d_lib/getAngleStick__9STControlFv.s"
}
#pragma pop

/* 8003217C-8003218C 0010+00 s=1 e=0 z=0  None .text      getValueStick__10CSTControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CSTControl::getValueStick() {
    nofralloc
#include "asm/d/d_lib/getValueStick__10CSTControlFv.s"
}
#pragma pop

/* 8003218C-8003219C 0010+00 s=1 e=0 z=0  None .text      getAngleStick__10CSTControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CSTControl::getAngleStick() {
    nofralloc
#include "asm/d/d_lib/getAngleStick__10CSTControlFv.s"
}
#pragma pop

/* 8003219C-8003242C 0290+00 s=0 e=24 z=0  None .text      checkTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkTrigger() {
    nofralloc
#include "asm/d/d_lib/checkTrigger__9STControlFv.s"
}
#pragma pop

/* 8003242C-800324A8 007C+00 s=0 e=14 z=0  None .text      checkLeftTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkLeftTrigger() {
    nofralloc
#include "asm/d/d_lib/checkLeftTrigger__9STControlFv.s"
}
#pragma pop

/* 800324A8-80032524 007C+00 s=0 e=14 z=0  None .text      checkRightTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkRightTrigger() {
    nofralloc
#include "asm/d/d_lib/checkRightTrigger__9STControlFv.s"
}
#pragma pop

/* 80032524-800325A0 007C+00 s=0 e=20 z=0  None .text      checkUpTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkUpTrigger() {
    nofralloc
#include "asm/d/d_lib/checkUpTrigger__9STControlFv.s"
}
#pragma pop

/* 800325A0-8003261C 007C+00 s=0 e=21 z=0  None .text      checkDownTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkDownTrigger() {
    nofralloc
#include "asm/d/d_lib/checkDownTrigger__9STControlFv.s"
}
#pragma pop

/* 8003261C-80032654 0038+00 s=0 e=0 z=1  None .text      dLib_getEventSwitchNo__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_getEventSwitchNo(int param_0) {
    nofralloc
#include "asm/d/d_lib/dLib_getEventSwitchNo__Fi.s"
}
#pragma pop

/* 80032654-80032738 00E4+00 s=0 e=0 z=8  None .text
 * dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_checkActorInRectangle(fopAc_ac_c* param_0, fopAc_ac_c* param_1, cXyz const* param_2,
                                    cXyz const* param_3) {
    nofralloc
#include "asm/d/d_lib/dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz.s"
}
#pragma pop

/* 80032738-80032804 00CC+00 s=0 e=4 z=0  None .text
 * dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_getExpandSizeFromAramArchive(JKRAramArchive* param_0, char const* param_1) {
    nofralloc
#include "asm/d/d_lib/dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DD8-80450DDC 0004+00 s=2 e=0 z=0  None .sbss      m_diffTime__11dLib_time_c */
static u8 m_diffTime__11dLib_time_c[4];

/* 80450DDC-80450DE0 0004+00 s=2 e=0 z=0  None .sbss      None */
static u8 data_80450DDC[4];

/* 80450DE0-80450DE4 0004+00 s=3 e=0 z=0  None .sbss      m_stopTime__11dLib_time_c */
static u8 m_stopTime__11dLib_time_c[4];

/* 80450DE4-80450DE8 0004+00 s=3 e=0 z=0  None .sbss      None */
static u8 data_80450DE4[4];

/* 80450DE8-80450DF0 0008+00 s=3 e=0 z=0  None .sbss      None */
static u8 data_80450DE8[8];

/* 80032804-80032880 007C+00 s=0 e=8 z=0  None .text      getTime__11dLib_time_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_time_c::getTime() {
    nofralloc
#include "asm/d/d_lib/getTime__11dLib_time_cFv.s"
}
#pragma pop

/* 80032880-800328BC 003C+00 s=0 e=1 z=0  None .text      stopTime__11dLib_time_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_time_c::stopTime() {
    nofralloc
#include "asm/d/d_lib/stopTime__11dLib_time_cFv.s"
}
#pragma pop

/* 800328BC-80032918 005C+00 s=0 e=1 z=0  None .text      startTime__11dLib_time_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_time_c::startTime() {
    nofralloc
#include "asm/d/d_lib/startTime__11dLib_time_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DF0-80450DF8 0008+00 s=0 e=4 z=0  None .sbss      None */
u8 struct_80450DF0[8];
