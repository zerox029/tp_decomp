//
// Generated By: dol2asm
// Translation Unit: d_a_dmidna
//

#include "rel/d/a/d_a_dmidna/d_a_dmidna.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
};

struct mDoExt_McaMorfCallBack2_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_McaMorfCallBack1_c {};

struct Z2Creature {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111EC */ void modelCalc();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daDmidna_c {
    /* 8045CED8 */ void createHeap();
    /* 8045CFE4 */ void create();
    /* 8045D0B4 */ ~daDmidna_c();
    /* 8045D144 */ void setMatrix();
    /* 8045D1A0 */ void execute();
    /* 8045D204 */ void draw();
};

struct dKy_tevstr_c {};

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

static void daDmidna_createHeap(fopAc_ac_c*);
static void daDmidna_Create(fopAc_ac_c*);
static void daDmidna_Delete(daDmidna_c*);
static void daDmidna_Execute(daDmidna_c*);
static void daDmidna_Draw(daDmidna_c*);
extern "C" extern void* g_profile_DMIDNA[12];

extern "C" void createHeap__10daDmidna_cFv();
extern "C" static void daDmidna_createHeap__FP10fopAc_ac_c();
extern "C" void create__10daDmidna_cFv();
extern "C" static void daDmidna_Create__FP10fopAc_ac_c();
extern "C" void __dt__10daDmidna_cFv();
extern "C" static void daDmidna_Delete__FP10daDmidna_c();
extern "C" void setMatrix__10daDmidna_cFv();
extern "C" void execute__10daDmidna_cFv();
extern "C" static void daDmidna_Execute__FP10daDmidna_c();
extern "C" void draw__10daDmidna_cFv();
extern "C" static void daDmidna_Draw__FP10daDmidna_c();
extern "C" extern void* g_profile_DMIDNA[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelEntryDL(J3DModel*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelEntryDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* ############################################################################################## */
/* 8045D290-8045D298 0007+01 s=3 e=0 z=0  None .rodata    l_arcName */
SECTION_RODATA static u8 const l_arcName[7 + 1 /* padding */] = {
    0x44,
    0x6D,
    0x69,
    0x64,
    0x6E,
    0x61,
    0x00,
    /* padding */
    0x00,
};

/* 8045D298-8045D29C 0004+00 s=1 e=0 z=0  None .rodata    @3769 */
SECTION_RODATA static u32 const lit_3769 = 0x3F800000;

/* 8045CED8-8045CFC4 00EC+00 s=1 e=0 z=0  None .text      createHeap__10daDmidna_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDmidna_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/createHeap__10daDmidna_cFv.s"
}
#pragma pop

/* 8045CFC4-8045CFE4 0020+00 s=1 e=0 z=0  None .text      daDmidna_createHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDmidna_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/daDmidna_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8045CFE4-8045D094 00B0+00 s=1 e=0 z=0  None .text      create__10daDmidna_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDmidna_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/create__10daDmidna_cFv.s"
}
#pragma pop

/* 8045D094-8045D0B4 0020+00 s=1 e=0 z=0  None .text      daDmidna_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDmidna_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/daDmidna_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8045D0B4-8045D11C 0068+00 s=1 e=0 z=0  None .text      __dt__10daDmidna_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daDmidna_c::~daDmidna_c() {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/__dt__10daDmidna_cFv.s"
}
#pragma pop

/* 8045D11C-8045D144 0028+00 s=1 e=0 z=0  None .text      daDmidna_Delete__FP10daDmidna_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDmidna_Delete(daDmidna_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/daDmidna_Delete__FP10daDmidna_c.s"
}
#pragma pop

/* 8045D144-8045D1A0 005C+00 s=2 e=0 z=0  None .text      setMatrix__10daDmidna_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDmidna_c::setMatrix() {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/setMatrix__10daDmidna_cFv.s"
}
#pragma pop

/* 8045D1A0-8045D1E4 0044+00 s=1 e=0 z=0  None .text      execute__10daDmidna_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDmidna_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/execute__10daDmidna_cFv.s"
}
#pragma pop

/* 8045D1E4-8045D204 0020+00 s=1 e=0 z=0  None .text      daDmidna_Execute__FP10daDmidna_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDmidna_Execute(daDmidna_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/daDmidna_Execute__FP10daDmidna_c.s"
}
#pragma pop

/* 8045D204-8045D268 0064+00 s=1 e=0 z=0  None .text      draw__10daDmidna_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDmidna_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/draw__10daDmidna_cFv.s"
}
#pragma pop

/* 8045D268-8045D288 0020+00 s=1 e=0 z=0  None .text      daDmidna_Draw__FP10daDmidna_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDmidna_Draw(daDmidna_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dmidna/d_a_dmidna/daDmidna_Draw__FP10daDmidna_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045D29C-8045D2BC 0020+00 s=1 e=0 z=0  None .data      l_daDmidna_Method */
SECTION_DATA static void* l_daDmidna_Method[8] = {
    (void*)daDmidna_Create__FP10fopAc_ac_c,
    (void*)daDmidna_Delete__FP10daDmidna_c,
    (void*)daDmidna_Execute__FP10daDmidna_c,
    (void*)NULL,
    (void*)daDmidna_Draw__FP10daDmidna_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8045D2BC-8045D2EC 0030+00 s=0 e=0 z=1  None .data      g_profile_DMIDNA */
SECTION_DATA void* g_profile_DMIDNA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02D80000, (void*)&g_fpcLf_Method,
    (void*)0x00000578, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x005D0000, (void*)&l_daDmidna_Method,
    (void*)0x00060000, (void*)0x03000000,
};
