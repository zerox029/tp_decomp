//
// Generated By: dol2asm
// Translation Unit: d_a_obj_bk_leaf
//

#include "rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf.h"
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

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daBkLeaf_c {
    /* 80BB60F8 */ void setBokkuri();
    /* 80BB618C */ void initBaseMtx();
    /* 80BB61C8 */ void setBaseMtx();
    /* 80BB621C */ void Create();
    /* 80BB629C */ void CreateHeap();
    /* 80BB63F4 */ void create();
    /* 80BB64A8 */ void execute();
    /* 80BB65C4 */ void draw();
    /* 80BB6654 */ void _delete();
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct csXyz {};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80BB63AC */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void CheckCreateHeap(fopAc_ac_c*);
static void daBkLeaf_Draw(daBkLeaf_c*);
static void daBkLeaf_Execute(daBkLeaf_c*);
static void daBkLeaf_Delete(daBkLeaf_c*);
static void daBkLeaf_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_BkLeaf[12];

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void setBokkuri__10daBkLeaf_cFv();
extern "C" void initBaseMtx__10daBkLeaf_cFv();
extern "C" void setBaseMtx__10daBkLeaf_cFv();
extern "C" void Create__10daBkLeaf_cFv();
extern "C" void CreateHeap__10daBkLeaf_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create__10daBkLeaf_cFv();
extern "C" void execute__10daBkLeaf_cFv();
extern "C" void draw__10daBkLeaf_cFv();
extern "C" void _delete__10daBkLeaf_cFv();
extern "C" static void daBkLeaf_Draw__FP10daBkLeaf_c();
extern "C" static void daBkLeaf_Execute__FP10daBkLeaf_c();
extern "C" static void daBkLeaf_Delete__FP10daBkLeaf_c();
extern "C" static void daBkLeaf_Create__FP10fopAc_ac_c();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_BkLeaf[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_createChild(s16, unsigned int, u32, cXyz const*, int, csXyz const*, cXyz const*, s8,
                        int (*)(void*));
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void fpcSch_JudgeByID(void*, void*);
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
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 80BB60D8-80BB60F8 0020+00 s=1 e=0 z=0  None .text      CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BB60F8-80BB618C 0094+00 s=2 e=0 z=0  None .text      setBokkuri__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::setBokkuri() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/setBokkuri__10daBkLeaf_cFv.s"
}
#pragma pop

/* 80BB618C-80BB61C8 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/initBaseMtx__10daBkLeaf_cFv.s"
}
#pragma pop

/* 80BB61C8-80BB621C 0054+00 s=2 e=0 z=0  None .text      setBaseMtx__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/setBaseMtx__10daBkLeaf_cFv.s"
}
#pragma pop

/* 80BB621C-80BB629C 0080+00 s=1 e=0 z=0  None .text      Create__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/Create__10daBkLeaf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BB6710-80BB6714 0004+00 s=2 e=0 z=0  None .rodata    @3742 */
SECTION_RODATA static u32 const lit_3742 = 0x3F800000;

/* 80BB6714-80BB6718 0004+00 s=1 e=0 z=0  None .rodata    @3811 */
SECTION_RODATA static u8 const lit_3811[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BB6718-80BB6720 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BB6718 = "Obj_bkl";
#pragma pop

/* 80BB6720-80BB6738 0018+00 s=2 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80BB6720[24] = {
    /* 80BB6720 0007 data_80BB6720 None */
    0x68,
    0x6C,
    0x2E,
    0x62,
    0x6D,
    0x64,
    0x00,
    /* 80BB6727 0011 data_80BB6727 None */
    0x68,
    0x6C,
    0x5F,
    0x73,
    0x68,
    0x61,
    0x6B,
    0x65,
    0x31,
    0x2E,
    0x62,
    0x63,
    0x6B,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BB6738-80BB6744 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BB6744-80BB6758 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80BB6758-80BB675C 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80BB675C-80BB6760 0004+00 s=1 e=0 z=0  None .data      l_bmdName */
SECTION_DATA static void* l_bmdName = (void*)(((char*)&struct_80BB6720) + 0x0) /* None */;

/* 80BB6760-80BB6764 0004+00 s=1 e=0 z=0  None .data      l_bckName */
SECTION_DATA static void* l_bckName = (void*)(((char*)&struct_80BB6720) + 0x7) /* None */;

/* 80BB6764-80BB6784 0020+00 s=1 e=0 z=0  None .data      l_daBkLeaf_Method */
SECTION_DATA static void* l_daBkLeaf_Method[8] = {
    (void*)daBkLeaf_Create__FP10fopAc_ac_c,
    (void*)daBkLeaf_Delete__FP10daBkLeaf_c,
    (void*)daBkLeaf_Execute__FP10daBkLeaf_c,
    (void*)NULL,
    (void*)daBkLeaf_Draw__FP10daBkLeaf_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BB6784-80BB67B4 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_BkLeaf */
SECTION_DATA void* g_profile_Obj_BkLeaf[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02C00000, (void*)&g_fpcLf_Method,
    (void*)0x00000580, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00FC0000, (void*)&l_daBkLeaf_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80BB67B4-80BB67C0 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BB629C-80BB63AC 0110+00 s=1 e=0 z=0  None .text      CreateHeap__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/CreateHeap__10daBkLeaf_cFv.s"
}
#pragma pop

/* 80BB63AC-80BB63F4 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80BB63F4-80BB64A8 00B4+00 s=1 e=0 z=0  None .text      create__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/func_80BB63F4.s"
}
#pragma pop

/* 80BB64A8-80BB65C4 011C+00 s=1 e=0 z=0  None .text      execute__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/execute__10daBkLeaf_cFv.s"
}
#pragma pop

/* 80BB65C4-80BB6654 0090+00 s=1 e=0 z=0  None .text      draw__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/draw__10daBkLeaf_cFv.s"
}
#pragma pop

/* 80BB6654-80BB6688 0034+00 s=1 e=0 z=0  None .text      _delete__10daBkLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBkLeaf_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/_delete__10daBkLeaf_cFv.s"
}
#pragma pop

/* 80BB6688-80BB66A8 0020+00 s=1 e=0 z=0  None .text      daBkLeaf_Draw__FP10daBkLeaf_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBkLeaf_Draw(daBkLeaf_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/daBkLeaf_Draw__FP10daBkLeaf_c.s"
}
#pragma pop

/* 80BB66A8-80BB66C8 0020+00 s=1 e=0 z=0  None .text      daBkLeaf_Execute__FP10daBkLeaf_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBkLeaf_Execute(daBkLeaf_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/daBkLeaf_Execute__FP10daBkLeaf_c.s"
}
#pragma pop

/* 80BB66C8-80BB66E8 0020+00 s=1 e=0 z=0  None .text      daBkLeaf_Delete__FP10daBkLeaf_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBkLeaf_Delete(daBkLeaf_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/daBkLeaf_Delete__FP10daBkLeaf_c.s"
}
#pragma pop

/* 80BB66E8-80BB6708 0020+00 s=1 e=0 z=0  None .text      daBkLeaf_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBkLeaf_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/d_a_obj_bk_leaf/daBkLeaf_Create__FP10fopAc_ac_c.s"
}
#pragma pop
