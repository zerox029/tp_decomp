//
// Generated By: dol2asm
// Translation Unit: d_a_obj_bsGate
//

#include "rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);

    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80BC28C8 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daBsGate_c {
    /* 80BC2910 */ void setBaseMtx();
    /* 80BC29AC */ void CreateHeap();
    /* 80BC2A18 */ void create();
    /* 80BC2B6C */ void Execute(f32 (**)[3][4]);
    /* 80BC2BBC */ void moveGate();
    /* 80BC2CC4 */ void init_modeWait();
    /* 80BC2CD0 */ void modeWait();
    /* 80BC2CD4 */ void init_modeOpen();
    /* 80BC2CE0 */ void modeOpen();
    /* 80BC2E34 */ void init_modeClose();
    /* 80BC2E40 */ void modeClose();
    /* 80BC2F94 */ void Draw();
    /* 80BC3038 */ void Delete();
};

struct daBsGate_HIO_c {
    /* 80BC288C */ daBsGate_HIO_c();
    /* 80BC30F4 */ ~daBsGate_HIO_c();
};

struct cXyz {};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW {};

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

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__14daBsGate_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daBsGate_cFv();
extern "C" void CreateHeap__10daBsGate_cFv();
extern "C" void create__10daBsGate_cFv();
extern "C" void Execute__10daBsGate_cFPPA3_A4_f();
extern "C" void moveGate__10daBsGate_cFv();
extern "C" void init_modeWait__10daBsGate_cFv();
extern "C" void modeWait__10daBsGate_cFv();
extern "C" void init_modeOpen__10daBsGate_cFv();
extern "C" void modeOpen__10daBsGate_cFv();
extern "C" void init_modeClose__10daBsGate_cFv();
extern "C" void modeClose__10daBsGate_cFv();
extern "C" void Draw__10daBsGate_cFv();
extern "C" void Delete__10daBsGate_cFv();
extern "C" static void daBsGate_Draw__FP10daBsGate_c();
extern "C" static void daBsGate_Execute__FP10daBsGate_c();
extern "C" static void daBsGate_Delete__FP10daBsGate_c();
extern "C" static void daBsGate_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daBsGate_HIO_cFv();
extern "C" void __sinit_d_a_obj_bsGate_cpp();
extern "C" extern char const* const d_a_obj_bsGate__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
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
/* 80BC31A0-80BC31A4 000000 0004+00 3/3 0/0 0/0 .rodata          @3625 */
SECTION_RODATA static f32 const lit_3625 = 2.0f;
COMPILER_STRIP_GATE(0x80BC31A0, &lit_3625);

/* 80BC31A4-80BC31A8 000004 0004+00 1/1 0/0 0/0 .rodata          @3626 */
SECTION_RODATA static f32 const lit_3626 = 12.0f;
COMPILER_STRIP_GATE(0x80BC31A4, &lit_3626);

/* 80BC31CC-80BC31D8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC31D8-80BC31EC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BC31EC-80BC31F8 -00001 000C+00 0/1 0/0 0/0 .data            @3724 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3724[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__10daBsGate_cFv,
};
#pragma pop

/* 80BC31F8-80BC3204 -00001 000C+00 0/1 0/0 0/0 .data            @3725 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3725[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpen__10daBsGate_cFv,
};
#pragma pop

/* 80BC3204-80BC3210 -00001 000C+00 0/1 0/0 0/0 .data            @3726 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3726[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeClose__10daBsGate_cFv,
};
#pragma pop

/* 80BC3210-80BC3234 000044 0024+00 0/1 0/0 0/0 .data            mode_proc$3723 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BC3234-80BC3254 -00001 0020+00 1/0 0/0 0/0 .data            l_daBsGate_Method */
SECTION_DATA static void* l_daBsGate_Method[8] = {
    (void*)daBsGate_Create__FP10fopAc_ac_c,
    (void*)daBsGate_Delete__FP10daBsGate_c,
    (void*)daBsGate_Execute__FP10daBsGate_c,
    (void*)NULL,
    (void*)daBsGate_Draw__FP10daBsGate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BC3254-80BC3284 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_BsGate */
SECTION_DATA extern void* g_profile_Obj_BsGate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00460000, (void*)&g_fpcLf_Method,
    (void*)0x000005B8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02060000, (void*)&l_daBsGate_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80BC3284-80BC32AC 0000B8 0028+00 1/1 0/0 0/0 .data            __vt__10daBsGate_c */
SECTION_DATA extern void* __vt__10daBsGate_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daBsGate_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__10daBsGate_cFPPA3_A4_f,
    (void*)Draw__10daBsGate_cFv,
    (void*)Delete__10daBsGate_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BC32AC-80BC32B8 0000E0 000C+00 2/2 0/0 0/0 .data            __vt__14daBsGate_HIO_c */
SECTION_DATA extern void* __vt__14daBsGate_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daBsGate_HIO_cFv,
};

/* 80BC32B8-80BC32C4 0000EC 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BC288C-80BC28C8 0000EC 003C+00 1/1 0/0 0/0 .text            __ct__14daBsGate_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBsGate_HIO_c::daBsGate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__ct__14daBsGate_HIO_cFv.s"
}
#pragma pop

/* 80BC28C8-80BC2910 000128 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC31A8-80BC31AC 000008 0004+00 2/4 0/0 0/0 .rodata          @3647 */
SECTION_RODATA static u8 const lit_3647[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BC31A8, &lit_3647);

/* 80BC2910-80BC29AC 000170 009C+00 2/2 0/0 0/0 .text            setBaseMtx__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/setBaseMtx__10daBsGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC31C4-80BC31C4 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BC31C4 = "S_Zgate";
#pragma pop

/* 80BC29AC-80BC2A18 00020C 006C+00 1/0 0/0 0/0 .text            CreateHeap__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/CreateHeap__10daBsGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC31AC-80BC31B0 00000C 0004+00 1/1 0/0 0/0 .rodata          @3710 */
SECTION_RODATA static f32 const lit_3710 = -250.0f;
COMPILER_STRIP_GATE(0x80BC31AC, &lit_3710);

/* 80BC2A18-80BC2B6C 000278 0154+00 1/1 0/0 0/0 .text            create__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/create__10daBsGate_cFv.s"
}
#pragma pop

/* 80BC2B6C-80BC2BBC 0003CC 0050+00 1/0 0/0 0/0 .text            Execute__10daBsGate_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/Execute__10daBsGate_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC32D0-80BC32DC 000008 000C+00 1/1 0/0 0/0 .bss             @3619 */
static u8 lit_3619[12];

/* 80BC32DC-80BC32EC 000014 0010+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80BC32EC-80BC32F0 000024 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80BC32EC[4];

/* 80BC2BBC-80BC2CC4 00041C 0108+00 1/1 0/0 0/0 .text            moveGate__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::moveGate() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/moveGate__10daBsGate_cFv.s"
}
#pragma pop

/* 80BC2CC4-80BC2CD0 000524 000C+00 3/3 0/0 0/0 .text            init_modeWait__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/init_modeWait__10daBsGate_cFv.s"
}
#pragma pop

/* 80BC2CD0-80BC2CD4 000530 0004+00 1/0 0/0 0/0 .text            modeWait__10daBsGate_cFv */
void daBsGate_c::modeWait() {
    /* empty function */
}

/* 80BC2CD4-80BC2CE0 000534 000C+00 1/1 0/0 0/0 .text            init_modeOpen__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::init_modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/init_modeOpen__10daBsGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC31B0-80BC31B4 000010 0004+00 0/2 0/0 0/0 .rodata          @3783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3783 = 1.0f;
COMPILER_STRIP_GATE(0x80BC31B0, &lit_3783);
#pragma pop

/* 80BC31B4-80BC31B8 000014 0004+00 0/2 0/0 0/0 .rodata          @3784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3784 = -1.0f;
COMPILER_STRIP_GATE(0x80BC31B4, &lit_3784);
#pragma pop

/* 80BC31B8-80BC31BC 000018 0004+00 0/1 0/0 0/0 .rodata          @3785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3785 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BC31B8, &lit_3785);
#pragma pop

/* 80BC31BC-80BC31C0 00001C 0004+00 0/2 0/0 0/0 .rodata          @3786 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3786 = 0.5f;
COMPILER_STRIP_GATE(0x80BC31BC, &lit_3786);
#pragma pop

/* 80BC2CE0-80BC2E34 000540 0154+00 1/0 0/0 0/0 .text            modeOpen__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/modeOpen__10daBsGate_cFv.s"
}
#pragma pop

/* 80BC2E34-80BC2E40 000694 000C+00 1/1 0/0 0/0 .text            init_modeClose__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::init_modeClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/init_modeClose__10daBsGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC31C0-80BC31C4 000020 0004+00 0/1 0/0 0/0 .rodata          @3820 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3820 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BC31C0, &lit_3820);
#pragma pop

/* 80BC2E40-80BC2F94 0006A0 0154+00 1/0 0/0 0/0 .text            modeClose__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::modeClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/modeClose__10daBsGate_cFv.s"
}
#pragma pop

/* 80BC2F94-80BC3038 0007F4 00A4+00 1/0 0/0 0/0 .text            Draw__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/Draw__10daBsGate_cFv.s"
}
#pragma pop

/* 80BC3038-80BC3068 000898 0030+00 1/0 0/0 0/0 .text            Delete__10daBsGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBsGate_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/Delete__10daBsGate_cFv.s"
}
#pragma pop

/* 80BC3068-80BC3094 0008C8 002C+00 1/0 0/0 0/0 .text            daBsGate_Draw__FP10daBsGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBsGate_Draw(daBsGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Draw__FP10daBsGate_c.s"
}
#pragma pop

/* 80BC3094-80BC30B4 0008F4 0020+00 1/0 0/0 0/0 .text            daBsGate_Execute__FP10daBsGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBsGate_Execute(daBsGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Execute__FP10daBsGate_c.s"
}
#pragma pop

/* 80BC30B4-80BC30D4 000914 0020+00 1/0 0/0 0/0 .text            daBsGate_Delete__FP10daBsGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBsGate_Delete(daBsGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Delete__FP10daBsGate_c.s"
}
#pragma pop

/* 80BC30D4-80BC30F4 000934 0020+00 1/0 0/0 0/0 .text            daBsGate_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBsGate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BC30F4-80BC3150 000954 005C+00 2/1 0/0 0/0 .text            __dt__14daBsGate_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBsGate_HIO_c::~daBsGate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__dt__14daBsGate_HIO_cFv.s"
}
#pragma pop

/* 80BC3150-80BC318C 0009B0 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_bsGate_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_bsGate_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__sinit_d_a_obj_bsGate_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80BC3150, __sinit_d_a_obj_bsGate_cpp);
#pragma pop

/* 80BC31C4-80BC31C4 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
