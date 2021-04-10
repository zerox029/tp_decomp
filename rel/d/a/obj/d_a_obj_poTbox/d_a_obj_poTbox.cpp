//
// Generated By: dol2asm
// Translation Unit: d_a_obj_poTbox
//

#include "rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80CB4280 */ ~mDoHIO_entry_c();
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DModelData {};

struct J3DAnmTransform {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct daPoTbox_c {
    /* 80CB42C8 */ void setBaseMtx();
    /* 80CB43D0 */ void CreateHeap();
    /* 80CB46C4 */ void create();
    /* 80CB499C */ void Execute(f32 (**)[3][4]);
    /* 80CB4AA8 */ void init_modeWait();
    /* 80CB4AB4 */ void modeWait();
    /* 80CB4B10 */ void init_modeOpen();
    /* 80CB4BF8 */ void modeOpen();
    /* 80CB4C54 */ void init_modeOpenEnd();
    /* 80CB4C60 */ void modeOpenEnd();
    /* 80CB4C84 */ void init_modeEnd();
    /* 80CB4C90 */ void modeEnd();
    /* 80CB4C94 */ void Draw();
    /* 80CB4E14 */ void Delete();
};

struct daPoTbox_HIO_c {
    /* 80CB424C */ daPoTbox_HIO_c();
    /* 80CB4F14 */ ~daPoTbox_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct cBgS_PolyInfo {};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80CB4954 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__14daPoTbox_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daPoTbox_cFv();
extern "C" void CreateHeap__10daPoTbox_cFv();
extern "C" void create__10daPoTbox_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__10daPoTbox_cFPPA3_A4_f();
extern "C" void init_modeWait__10daPoTbox_cFv();
extern "C" void modeWait__10daPoTbox_cFv();
extern "C" void init_modeOpen__10daPoTbox_cFv();
extern "C" void modeOpen__10daPoTbox_cFv();
extern "C" void init_modeOpenEnd__10daPoTbox_cFv();
extern "C" void modeOpenEnd__10daPoTbox_cFv();
extern "C" void init_modeEnd__10daPoTbox_cFv();
extern "C" void modeEnd__10daPoTbox_cFv();
extern "C" void Draw__10daPoTbox_cFv();
extern "C" void Delete__10daPoTbox_cFv();
extern "C" static void daPoTbox_Draw__FP10daPoTbox_c();
extern "C" static void daPoTbox_Execute__FP10daPoTbox_c();
extern "C" static void daPoTbox_Delete__FP10daPoTbox_c();
extern "C" static void daPoTbox_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daPoTbox_HIO_cFv();
extern "C" void __sinit_d_a_obj_poTbox_cpp();
extern "C" extern char const* const d_a_obj_poTbox__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CB4FC0-80CB4FC4 000000 0004+00 1/1 0/0 0/0 .rodata          @3628 */
SECTION_RODATA static f32 const lit_3628 = 2.0f;
COMPILER_STRIP_GATE(0x80CB4FC0, &lit_3628);

/* 80CB4FC4-80CB4FC8 000004 0004+00 1/1 0/0 0/0 .rodata          @3629 */
SECTION_RODATA static f32 const lit_3629 = 12.0f;
COMPILER_STRIP_GATE(0x80CB4FC4, &lit_3629);

/* 80CB4FDC-80CB4FDC 00001C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CB4FDC = "pouBox0";
SECTION_DEAD static char const* const stringBase_80CB4FE4 = "pouBox1";
#pragma pop

/* 80CB4FEC-80CB4FF8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CB4FF8-80CB500C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80CB500C-80CB5014 -00001 0008+00 3/3 0/0 0/0 .data            l_type */
SECTION_DATA static void* l_type[2] = {
    (void*)&d_a_obj_poTbox__stringBase0,
    (void*)(((char*)&d_a_obj_poTbox__stringBase0) + 0x8),
};

/* 80CB5014-80CB501C 000028 0008+00 1/1 0/0 0/0 .data            l_bmdIdx */
SECTION_DATA static u8 l_bmdIdx[8] = {
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x08,
};

/* 80CB501C-80CB5024 000030 0008+00 1/1 0/0 0/0 .data            l_dzbIdx */
SECTION_DATA static u8 l_dzbIdx[8] = {
    0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x0B,
};

/* 80CB5024-80CB5030 -00001 000C+00 0/1 0/0 0/0 .data            @3867 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3867[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__10daPoTbox_cFv,
};
#pragma pop

/* 80CB5030-80CB503C -00001 000C+00 0/1 0/0 0/0 .data            @3868 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3868[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpen__10daPoTbox_cFv,
};
#pragma pop

/* 80CB503C-80CB5048 -00001 000C+00 0/1 0/0 0/0 .data            @3869 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3869[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpenEnd__10daPoTbox_cFv,
};
#pragma pop

/* 80CB5048-80CB5054 -00001 000C+00 0/1 0/0 0/0 .data            @3870 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3870[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeEnd__10daPoTbox_cFv,
};
#pragma pop

/* 80CB5054-80CB5084 000068 0030+00 0/1 0/0 0/0 .data            mode_proc$3866 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CB5084-80CB50A4 -00001 0020+00 1/0 0/0 0/0 .data            l_daPoTbox_Method */
SECTION_DATA static void* l_daPoTbox_Method[8] = {
    (void*)daPoTbox_Create__FP10fopAc_ac_c,
    (void*)daPoTbox_Delete__FP10daPoTbox_c,
    (void*)daPoTbox_Execute__FP10daPoTbox_c,
    (void*)NULL,
    (void*)daPoTbox_Draw__FP10daPoTbox_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CB50A4-80CB50D4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_poTbox */
SECTION_DATA extern void* g_profile_Obj_poTbox[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01930000, (void*)&g_fpcLf_Method,
    (void*)0x00000608, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02940000, (void*)&l_daPoTbox_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80CB50D4-80CB50E0 0000E8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CB50E0-80CB5108 0000F4 0028+00 1/1 0/0 0/0 .data            __vt__10daPoTbox_c */
SECTION_DATA extern void* __vt__10daPoTbox_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daPoTbox_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__10daPoTbox_cFPPA3_A4_f,
    (void*)Draw__10daPoTbox_cFv,
    (void*)Delete__10daPoTbox_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CB5108-80CB5114 00011C 000C+00 2/2 0/0 0/0 .data            __vt__14daPoTbox_HIO_c */
SECTION_DATA extern void* __vt__14daPoTbox_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daPoTbox_HIO_cFv,
};

/* 80CB5114-80CB5120 000128 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80CB424C-80CB4280 0000EC 0034+00 1/1 0/0 0/0 .text            __ct__14daPoTbox_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daPoTbox_HIO_c::daPoTbox_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/__ct__14daPoTbox_HIO_cFv.s"
}
#pragma pop

/* 80CB4280-80CB42C8 000120 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80CB42C8-80CB43D0 000168 0108+00 2/2 0/0 0/0 .text            setBaseMtx__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/setBaseMtx__10daPoTbox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB4FC8-80CB4FD0 000008 0004+04 3/3 0/0 0/0 .rodata          @3724 */
SECTION_RODATA static f32 const lit_3724[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80CB4FC8, &lit_3724);

/* 80CB43D0-80CB46C4 000270 02F4+00 1/0 0/0 0/0 .text            CreateHeap__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/CreateHeap__10daPoTbox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB4FD0-80CB4FD8 000010 0008+00 1/1 0/0 0/0 .rodata          @3835 */
SECTION_RODATA static u8 const lit_3835[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB4FD0, &lit_3835);

/* 80CB46C4-80CB4954 000564 0290+00 1/1 0/0 0/0 .text            create__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/create__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4954-80CB499C 0007F4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB5128-80CB5134 000008 000C+00 1/1 0/0 0/0 .bss             @3622 */
static u8 lit_3622[12];

/* 80CB5134-80CB5140 000014 000C+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 80CB5140-80CB5144 000020 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80CB5140[4];

/* 80CB499C-80CB4AA8 00083C 010C+00 1/0 0/0 0/0 .text            Execute__10daPoTbox_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/Execute__10daPoTbox_cFPPA3_A4_f.s"
}
#pragma pop

/* 80CB4AA8-80CB4AB4 000948 000C+00 1/1 0/0 0/0 .text            init_modeWait__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/init_modeWait__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4AB4-80CB4B10 000954 005C+00 1/0 0/0 0/0 .text            modeWait__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/modeWait__10daPoTbox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB4FD8-80CB4FDC 000018 0004+00 1/1 0/0 0/0 .rodata          @3926 */
SECTION_RODATA static f32 const lit_3926 = -1.0f;
COMPILER_STRIP_GATE(0x80CB4FD8, &lit_3926);

/* 80CB4B10-80CB4BF8 0009B0 00E8+00 1/1 0/0 0/0 .text            init_modeOpen__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::init_modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/init_modeOpen__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4BF8-80CB4C54 000A98 005C+00 1/0 0/0 0/0 .text            modeOpen__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/modeOpen__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4C54-80CB4C60 000AF4 000C+00 2/2 0/0 0/0 .text            init_modeOpenEnd__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::init_modeOpenEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/init_modeOpenEnd__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4C60-80CB4C84 000B00 0024+00 1/0 0/0 0/0 .text            modeOpenEnd__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::modeOpenEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/modeOpenEnd__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4C84-80CB4C90 000B24 000C+00 1/1 0/0 0/0 .text            init_modeEnd__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::init_modeEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/init_modeEnd__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4C90-80CB4C94 000B30 0004+00 1/0 0/0 0/0 .text            modeEnd__10daPoTbox_cFv */
void daPoTbox_c::modeEnd() {
    /* empty function */
}

/* 80CB4C94-80CB4E14 000B34 0180+00 1/0 0/0 0/0 .text            Draw__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/Draw__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4E14-80CB4E88 000CB4 0074+00 1/0 0/0 0/0 .text            Delete__10daPoTbox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPoTbox_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/Delete__10daPoTbox_cFv.s"
}
#pragma pop

/* 80CB4E88-80CB4EB4 000D28 002C+00 1/0 0/0 0/0 .text            daPoTbox_Draw__FP10daPoTbox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daPoTbox_Draw(daPoTbox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/daPoTbox_Draw__FP10daPoTbox_c.s"
}
#pragma pop

/* 80CB4EB4-80CB4ED4 000D54 0020+00 1/0 0/0 0/0 .text            daPoTbox_Execute__FP10daPoTbox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daPoTbox_Execute(daPoTbox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/daPoTbox_Execute__FP10daPoTbox_c.s"
}
#pragma pop

/* 80CB4ED4-80CB4EF4 000D74 0020+00 1/0 0/0 0/0 .text            daPoTbox_Delete__FP10daPoTbox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daPoTbox_Delete(daPoTbox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/daPoTbox_Delete__FP10daPoTbox_c.s"
}
#pragma pop

/* 80CB4EF4-80CB4F14 000D94 0020+00 1/0 0/0 0/0 .text            daPoTbox_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daPoTbox_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/daPoTbox_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CB4F14-80CB4F70 000DB4 005C+00 2/1 0/0 0/0 .text            __dt__14daPoTbox_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daPoTbox_HIO_c::~daPoTbox_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/__dt__14daPoTbox_HIO_cFv.s"
}
#pragma pop

/* 80CB4F70-80CB4FAC 000E10 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_poTbox_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_poTbox_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poTbox/d_a_obj_poTbox/__sinit_d_a_obj_poTbox_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80CB4F70, __sinit_d_a_obj_poTbox_cpp);
#pragma pop

/* 80CB4FDC-80CB4FDC 00001C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
