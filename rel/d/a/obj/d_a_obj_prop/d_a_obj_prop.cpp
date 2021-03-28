//
// Generated By: dol2asm
// Translation Unit: d_a_obj_prop
//

#include "rel/d/a/obj/d_a_obj_prop/d_a_obj_prop.h"
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

struct daObjProp_c {
    /* 80CB51F8 */ daObjProp_c();
    /* 80CB5234 */ ~daObjProp_c();
    /* 80CB52B4 */ void createHeap();
    /* 80CB5334 */ void create();
    /* 80CB5408 */ void Delete();
    /* 80CB543C */ void draw();
    /* 80CB54A0 */ void execute();
    /* 80CB54E4 */ void init();
    /* 80CB54F4 */ void setModelMtx();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjProp_c_createHeap(fopAc_ac_c*);
static void daObjProp_create(daObjProp_c*);
static void daObjProp_Delete(daObjProp_c*);
static void daObjProp_execute(daObjProp_c*);
static void daObjProp_draw(daObjProp_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Prop[12];

extern "C" static void daObjProp_c_createHeap__FP10fopAc_ac_c();
extern "C" void __ct__11daObjProp_cFv();
extern "C" void __dt__11daObjProp_cFv();
extern "C" void createHeap__11daObjProp_cFv();
extern "C" void create__11daObjProp_cFv();
extern "C" void Delete__11daObjProp_cFv();
extern "C" void draw__11daObjProp_cFv();
extern "C" void execute__11daObjProp_cFv();
extern "C" void init__11daObjProp_cFv();
extern "C" void setModelMtx__11daObjProp_cFv();
extern "C" static void daObjProp_create__FP11daObjProp_c();
extern "C" static void daObjProp_Delete__FP11daObjProp_c();
extern "C" static void daObjProp_execute__FP11daObjProp_c();
extern "C" static void daObjProp_draw__FP11daObjProp_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Prop[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdate(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdate__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 80CB51D8-80CB51F8 0020+00 s=1 e=0 z=0  None .text      daObjProp_c_createHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjProp_c_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/daObjProp_c_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB5614-80CB561C 0008+00 s=1 e=0 z=0  None .rodata    BMD_IDX$3638 */
SECTION_RODATA static u8 const BMD_IDX[8] = {
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
};

/* 80CB561C-80CB5620 0004+00 s=1 e=0 z=0  None .rodata    ADD_ANGLE$3689 */
SECTION_RODATA static u8 const ADD_ANGLE[4] = {
    0x18,
    0x00,
    0xE8,
    0x00,
};

/* 80CB5620-80CB5627 0007+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CB5620 = "L7Prop";
#pragma pop

/* 80CB5628-80CB562C 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CB562C-80CB564C 0020+00 s=1 e=0 z=0  None .data      daObjProp_METHODS */
SECTION_DATA static void* daObjProp_METHODS[8] = {
    (void*)daObjProp_create__FP11daObjProp_c,
    (void*)daObjProp_Delete__FP11daObjProp_c,
    (void*)daObjProp_execute__FP11daObjProp_c,
    (void*)NULL,
    (void*)daObjProp_draw__FP11daObjProp_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CB564C-80CB567C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Prop */
SECTION_DATA void* g_profile_Obj_Prop[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01970000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02E10000, (void*)&daObjProp_METHODS,
    (void*)0x00040000, (void*)0x030E0000,
};

/* 80CB567C-80CB5688 000C+00 s=2 e=0 z=0  None .data      __vt__11daObjProp_c */
SECTION_DATA static void* __vt__11daObjProp_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__11daObjProp_cFv,
};

/* 80CB51F8-80CB5234 003C+00 s=2 e=0 z=0  None .text      __ct__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjProp_c::daObjProp_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/__ct__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB5234-80CB52B4 0080+00 s=1 e=0 z=0  None .text      __dt__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjProp_c::~daObjProp_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/__dt__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB52B4-80CB5334 0080+00 s=1 e=0 z=0  None .text      createHeap__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjProp_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/createHeap__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB5334-80CB5408 00D4+00 s=1 e=0 z=0  None .text      create__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjProp_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/create__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB5408-80CB543C 0034+00 s=1 e=0 z=0  None .text      Delete__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjProp_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/Delete__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB543C-80CB54A0 0064+00 s=1 e=0 z=0  None .text      draw__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjProp_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/draw__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB54A0-80CB54E4 0044+00 s=1 e=0 z=0  None .text      execute__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjProp_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/execute__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB54E4-80CB54F4 0010+00 s=1 e=0 z=0  None .text      init__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjProp_c::init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/init__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB54F4-80CB5558 0064+00 s=2 e=0 z=0  None .text      setModelMtx__11daObjProp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjProp_c::setModelMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/setModelMtx__11daObjProp_cFv.s"
}
#pragma pop

/* 80CB5558-80CB55AC 0054+00 s=1 e=0 z=0  None .text      daObjProp_create__FP11daObjProp_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjProp_create(daObjProp_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/daObjProp_create__FP11daObjProp_c.s"
}
#pragma pop

/* 80CB55AC-80CB55CC 0020+00 s=1 e=0 z=0  None .text      daObjProp_Delete__FP11daObjProp_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjProp_Delete(daObjProp_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/daObjProp_Delete__FP11daObjProp_c.s"
}
#pragma pop

/* 80CB55CC-80CB55EC 0020+00 s=1 e=0 z=0  None .text      daObjProp_execute__FP11daObjProp_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjProp_execute(daObjProp_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/daObjProp_execute__FP11daObjProp_c.s"
}
#pragma pop

/* 80CB55EC-80CB560C 0020+00 s=1 e=0 z=0  None .text      daObjProp_draw__FP11daObjProp_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjProp_draw(daObjProp_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_prop/d_a_obj_prop/daObjProp_draw__FP11daObjProp_c.s"
}
#pragma pop
