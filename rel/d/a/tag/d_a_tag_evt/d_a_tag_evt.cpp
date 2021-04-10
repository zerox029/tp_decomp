//
// Generated By: dol2asm
// Translation Unit: d_a_tag_evt
//

#include "rel/d/a/tag/d_a_tag_evt/d_a_tag_evt.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Evt_c {
    /* 8048B918 */ void create();
    /* 8048B9D8 */ void destroy();
    /* 8048BA0C */ void execute();
    /* 8048BE44 */ bool draw();
    /* 8048BE4C */ void getParam();
    /* 8048BF64 */ void isDelete();
    /* 8048C090 */ void doEvtCutWait(int);
    /* 8048C124 */ void doEvtCutTalk(int);
    /* 8048C1C8 */ void doEvtCutNext(int);
    /* 8048C304 */ ~daTag_Evt_c();

    static void* mEvtCutList[3];
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
    /* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
    /* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
    /* 8024A528 */ void getEventId(int*);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

//
// Forward References:
//

extern "C" void create__11daTag_Evt_cFv();
extern "C" void destroy__11daTag_Evt_cFv();
extern "C" void execute__11daTag_Evt_cFv();
extern "C" bool draw__11daTag_Evt_cFv();
extern "C" void getParam__11daTag_Evt_cFv();
extern "C" void isDelete__11daTag_Evt_cFv();
extern "C" void doEvtCutWait__11daTag_Evt_cFi();
extern "C" void doEvtCutTalk__11daTag_Evt_cFi();
extern "C" void doEvtCutNext__11daTag_Evt_cFi();
extern "C" static void daTag_Evt_Create__FPv();
extern "C" static void daTag_Evt_Delete__FPv();
extern "C" static void daTag_Evt_Execute__FPv();
extern "C" static void daTag_Evt_Draw__FPv();
extern "C" static bool daTag_Evt_IsDelete__FPv();
extern "C" void __dt__11daTag_Evt_cFv();
extern "C" void func_8048C374(void* _this, int*);
extern "C" extern char const* const d_a_tag_evt__stringBase0;
extern "C" void* mEvtCutList__11daTag_Evt_c[3];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void daNpcMsg_setEvtNum__FUc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" void strcpy();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8048C3BC-8048C3BC 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8048C3BC = "JUMP_DEMOSTAGE";
SECTION_DEAD static char const* const stringBase_8048C3CB = "TAGEVT";
SECTION_DEAD static char const* const stringBase_8048C3D2 = "WAIT";
SECTION_DEAD static char const* const stringBase_8048C3D7 = "TALK";
SECTION_DEAD static char const* const stringBase_8048C3DC = "NEXT";
SECTION_DEAD static char const* const stringBase_8048C3E1 = "TagEvt";
#pragma pop

/* 8048C3FC-8048C404 -00001 0008+00 1/1 0/0 0/0 .data            l_evtNameList */
SECTION_DATA static void* l_evtNameList[2] = {
    (void*)NULL,
    (void*)&d_a_tag_evt__stringBase0,
};

/* 8048C404-8048C408 -00001 0004+00 2/2 0/0 0/0 .data            l_resFileName */
SECTION_DATA static void* l_resFileName = (void*)(((char*)&d_a_tag_evt__stringBase0) + 0xF);

/* 8048C408-8048C414 -00001 000C+00 1/1 0/0 0/0 .data            mEvtCutList__11daTag_Evt_c */
SECTION_DATA void* daTag_Evt_c::mEvtCutList[3] = {
    (void*)(((char*)&d_a_tag_evt__stringBase0) + 0x16),
    (void*)(((char*)&d_a_tag_evt__stringBase0) + 0x1B),
    (void*)(((char*)&d_a_tag_evt__stringBase0) + 0x20),
};

/* 8048C414-8048C434 -00001 0020+00 1/0 0/0 0/0 .data            daTag_Evt_MethodTable */
SECTION_DATA static void* daTag_Evt_MethodTable[8] = {
    (void*)daTag_Evt_Create__FPv,
    (void*)daTag_Evt_Delete__FPv,
    (void*)daTag_Evt_Execute__FPv,
    (void*)daTag_Evt_IsDelete__FPv,
    (void*)daTag_Evt_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8048C434-8048C464 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_EVT */
SECTION_DATA extern void* g_profile_TAG_EVT[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02D20000, (void*)&g_fpcLf_Method,
    (void*)0x000005EC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x011C0000, (void*)&daTag_Evt_MethodTable,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 8048C464-8048C470 000068 000C+00 2/2 0/0 0/0 .data            __vt__11daTag_Evt_c */
SECTION_DATA extern void* __vt__11daTag_Evt_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daTag_Evt_cFv,
};

/* 8048B918-8048B9D8 000078 00C0+00 1/1 0/0 0/0 .text            create__11daTag_Evt_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/create__11daTag_Evt_cFv.s"
}
#pragma pop

/* 8048B9D8-8048BA0C 000138 0034+00 1/1 0/0 0/0 .text            destroy__11daTag_Evt_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::destroy() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/destroy__11daTag_Evt_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048C398-8048C39C 000000 0004+00 2/2 0/0 0/0 .rodata          @3784 */
SECTION_RODATA static f32 const lit_3784 = 100.0f;
COMPILER_STRIP_GATE(0x8048C398, &lit_3784);

/* 8048C39C-8048C3A0 000004 0004+00 1/2 0/0 0/0 .rodata          @3785 */
SECTION_RODATA static u8 const lit_3785[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8048C39C, &lit_3785);

/* 8048C3A0-8048C3A8 000008 0008+00 0/1 0/0 0/0 .rodata          @3786 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3786[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048C3A0, &lit_3786);
#pragma pop

/* 8048C3A8-8048C3B0 000010 0008+00 0/1 0/0 0/0 .rodata          @3787 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3787[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048C3A8, &lit_3787);
#pragma pop

/* 8048C3B0-8048C3B8 000018 0008+00 0/1 0/0 0/0 .rodata          @3788 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3788[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048C3B0, &lit_3788);
#pragma pop

/* 8048BA0C-8048BE44 00016C 0438+00 1/1 0/0 0/0 .text            execute__11daTag_Evt_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/execute__11daTag_Evt_cFv.s"
}
#pragma pop

/* 8048BE44-8048BE4C 0005A4 0008+00 1/1 0/0 0/0 .text            draw__11daTag_Evt_cFv */
bool daTag_Evt_c::draw() {
    return true;
}

/* ############################################################################################## */
/* 8048C3B8-8048C3BC 000020 0004+00 1/1 0/0 0/0 .rodata          @3815 */
SECTION_RODATA static f32 const lit_3815 = 10.0f;
COMPILER_STRIP_GATE(0x8048C3B8, &lit_3815);

/* 8048BE4C-8048BF64 0005AC 0118+00 1/1 0/0 0/0 .text            getParam__11daTag_Evt_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::getParam() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/getParam__11daTag_Evt_cFv.s"
}
#pragma pop

/* 8048BF64-8048C090 0006C4 012C+00 1/1 0/0 0/0 .text            isDelete__11daTag_Evt_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::isDelete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/isDelete__11daTag_Evt_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048C3BC-8048C3BC 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8048C3E8 = "timer";
#pragma pop

/* 8048C090-8048C124 0007F0 0094+00 1/1 0/0 0/0 .text            doEvtCutWait__11daTag_Evt_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::doEvtCutWait(int param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/doEvtCutWait__11daTag_Evt_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048C3BC-8048C3BC 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8048C3EE = "flowNodeNo";
#pragma pop

/* 8048C124-8048C1C8 000884 00A4+00 1/1 0/0 0/0 .text            doEvtCutTalk__11daTag_Evt_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::doEvtCutTalk(int param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/doEvtCutTalk__11daTag_Evt_cFi.s"
}
#pragma pop

/* 8048C1C8-8048C27C 000928 00B4+00 1/1 0/0 0/0 .text            doEvtCutNext__11daTag_Evt_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Evt_c::doEvtCutNext(int param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/doEvtCutNext__11daTag_Evt_cFi.s"
}
#pragma pop

/* 8048C27C-8048C29C 0009DC 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Evt_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/daTag_Evt_Create__FPv.s"
}
#pragma pop

/* 8048C29C-8048C2BC 0009FC 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Evt_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/daTag_Evt_Delete__FPv.s"
}
#pragma pop

/* 8048C2BC-8048C2DC 000A1C 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Evt_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/daTag_Evt_Execute__FPv.s"
}
#pragma pop

/* 8048C2DC-8048C2FC 000A3C 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Evt_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/daTag_Evt_Draw__FPv.s"
}
#pragma pop

/* 8048C2FC-8048C304 000A5C 0008+00 1/0 0/0 0/0 .text            daTag_Evt_IsDelete__FPv */
static bool daTag_Evt_IsDelete(void* param_0) {
    return true;
}

/* 8048C304-8048C374 000A64 0070+00 1/0 0/0 0/0 .text            __dt__11daTag_Evt_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Evt_c::~daTag_Evt_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/__dt__11daTag_Evt_cFv.s"
}
#pragma pop

/* 8048C374-8048C390 000AD4 001C+00 2/2 0/0 0/0 .text            cLib_calcTimer<i>__FPi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8048C374(void* _this, int* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evt/d_a_tag_evt/func_8048C374.s"
}
#pragma pop

/* 8048C3BC-8048C3BC 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
