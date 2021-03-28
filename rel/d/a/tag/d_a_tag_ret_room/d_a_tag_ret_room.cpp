//
// Generated By: dol2asm
// Translation Unit: d_a_tag_ret_room
//

#include "rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagRetRm_c {
    /* 80D5EE98 */ daTagRetRm_c();
    /* 80D5EED4 */ ~daTagRetRm_c();
    /* 80D5EF34 */ void create();
    /* 80D5EF8C */ bool Delete();
    /* 80D5EF94 */ bool draw();
    /* 80D5EF9C */ void execute();
    /* 80D5F010 */ void init();
    /* 80D5F050 */ void chkPlyrInTag();
};

struct daPy_py_c {
    /* 8015F438 */ void forceRestartRoom(int, u32, int);
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

//
// Forward References:
//

static void daTagRetRm_create(daTagRetRm_c*);
static void daTagRetRm_Delete(daTagRetRm_c*);
static void daTagRetRm_execute(daTagRetRm_c*);
static void daTagRetRm_draw(daTagRetRm_c*);
extern "C" extern void* g_profile_Tag_RetRoom[12];

extern "C" void __ct__12daTagRetRm_cFv();
extern "C" void __dt__12daTagRetRm_cFv();
extern "C" void create__12daTagRetRm_cFv();
extern "C" bool Delete__12daTagRetRm_cFv();
extern "C" bool draw__12daTagRetRm_cFv();
extern "C" void execute__12daTagRetRm_cFv();
extern "C" void init__12daTagRetRm_cFv();
extern "C" void chkPlyrInTag__12daTagRetRm_cFv();
extern "C" static void daTagRetRm_create__FP12daTagRetRm_c();
extern "C" static void daTagRetRm_Delete__FP12daTagRetRm_c();
extern "C" static void daTagRetRm_execute__FP12daTagRetRm_c();
extern "C" static void daTagRetRm_draw__FP12daTagRetRm_c();
extern "C" extern void* g_profile_Tag_RetRoom[12];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void forceRestartRoom__9daPy_py_cFiUli();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5F214-80D5F234 0020+00 s=1 e=0 z=0  None .data      daTagRetRm_METHODS */
SECTION_DATA static void* daTagRetRm_METHODS[8] = {
    (void*)daTagRetRm_create__FP12daTagRetRm_c,
    (void*)daTagRetRm_Delete__FP12daTagRetRm_c,
    (void*)daTagRetRm_execute__FP12daTagRetRm_c,
    (void*)NULL,
    (void*)daTagRetRm_draw__FP12daTagRetRm_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5F234-80D5F264 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_RetRoom */
SECTION_DATA void* g_profile_Tag_RetRoom[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01890000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02DB0000, (void*)&daTagRetRm_METHODS,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D5F264-80D5F270 000C+00 s=2 e=0 z=0  None .data      __vt__12daTagRetRm_c */
SECTION_DATA static void* __vt__12daTagRetRm_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12daTagRetRm_cFv,
};

/* 80D5EE98-80D5EED4 003C+00 s=2 e=0 z=0  None .text      __ct__12daTagRetRm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagRetRm_c::daTagRetRm_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/__ct__12daTagRetRm_cFv.s"
}
#pragma pop

/* 80D5EED4-80D5EF34 0060+00 s=1 e=0 z=0  None .text      __dt__12daTagRetRm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagRetRm_c::~daTagRetRm_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/__dt__12daTagRetRm_cFv.s"
}
#pragma pop

/* 80D5EF34-80D5EF8C 0058+00 s=1 e=0 z=0  None .text      create__12daTagRetRm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRetRm_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/create__12daTagRetRm_cFv.s"
}
#pragma pop

/* 80D5EF8C-80D5EF94 0008+00 s=1 e=0 z=0  None .text      Delete__12daTagRetRm_cFv */
bool daTagRetRm_c::Delete() {
    return true;
}

/* 80D5EF94-80D5EF9C 0008+00 s=1 e=0 z=0  None .text      draw__12daTagRetRm_cFv */
bool daTagRetRm_c::draw() {
    return true;
}

/* 80D5EF9C-80D5F010 0074+00 s=1 e=0 z=0  None .text      execute__12daTagRetRm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRetRm_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/execute__12daTagRetRm_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5F208-80D5F20C 0004+00 s=1 e=0 z=0  None .rodata    @3682 */
SECTION_RODATA static u32 const lit_3682 = 0x42480000;

/* 80D5F20C-80D5F210 0004+00 s=1 e=0 z=0  None .rodata    @3683 */
SECTION_RODATA static u32 const lit_3683 = 0x42C80000;

/* 80D5F010-80D5F050 0040+00 s=1 e=0 z=0  None .text      init__12daTagRetRm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRetRm_c::init() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/init__12daTagRetRm_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5F210-80D5F214 0004+00 s=1 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u8 const lit_3718[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D5F050-80D5F14C 00FC+00 s=1 e=0 z=0  None .text      chkPlyrInTag__12daTagRetRm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRetRm_c::chkPlyrInTag() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/chkPlyrInTag__12daTagRetRm_cFv.s"
}
#pragma pop

/* 80D5F14C-80D5F1A0 0054+00 s=1 e=0 z=0  None .text      daTagRetRm_create__FP12daTagRetRm_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagRetRm_create(daTagRetRm_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/daTagRetRm_create__FP12daTagRetRm_c.s"
}
#pragma pop

/* 80D5F1A0-80D5F1C0 0020+00 s=1 e=0 z=0  None .text      daTagRetRm_Delete__FP12daTagRetRm_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagRetRm_Delete(daTagRetRm_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/daTagRetRm_Delete__FP12daTagRetRm_c.s"
}
#pragma pop

/* 80D5F1C0-80D5F1E0 0020+00 s=1 e=0 z=0  None .text      daTagRetRm_execute__FP12daTagRetRm_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagRetRm_execute(daTagRetRm_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/daTagRetRm_execute__FP12daTagRetRm_c.s"
}
#pragma pop

/* 80D5F1E0-80D5F200 0020+00 s=1 e=0 z=0  None .text      daTagRetRm_draw__FP12daTagRetRm_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagRetRm_draw(daTagRetRm_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/d_a_tag_ret_room/daTagRetRm_draw__FP12daTagRetRm_c.s"
}
#pragma pop
