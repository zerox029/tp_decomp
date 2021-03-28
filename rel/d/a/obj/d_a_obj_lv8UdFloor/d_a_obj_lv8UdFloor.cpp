//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv8UdFloor
//

#include "rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoHIO_entry_c {
    /* 80C8BD80 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daUdFloor_c {
    /* 80C8BDC8 */ void setBaseMtx();
    /* 80C8BE64 */ void CreateHeap();
    /* 80C8BEE4 */ void create();
    /* 80C8C0DC */ void Execute(f32 (**)[3][4]);
    /* 80C8C12C */ void moveLift();
    /* 80C8C264 */ void init_modeWait();
    /* 80C8C270 */ void modeWait();
    /* 80C8C274 */ void init_modeUpMoveInit();
    /* 80C8C310 */ void modeUpMoveInit();
    /* 80C8C354 */ void colorAnm(int);
    /* 80C8C5E4 */ void init_modeUpMove();
    /* 80C8C68C */ void modeUpMove();
    /* 80C8C7F8 */ void init_modeDownMoveInit();
    /* 80C8C81C */ void modeDownMoveInit();
    /* 80C8C860 */ void init_modeDownMove();
    /* 80C8C8E4 */ void modeDownMove();
    /* 80C8C994 */ void Draw();
    /* 80C8CA78 */ void Delete();
};

struct daUdFloor_HIO_c {
    /* 80C8BD0C */ daUdFloor_HIO_c();
    /* 80C8CB44 */ ~daUdFloor_HIO_c();
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

struct csXyz {};

struct cBgS_PolyInfo {};

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
};

struct J3DModel {};

//
// Forward References:
//

static void daUdFloor_Draw(daUdFloor_c*);
static void daUdFloor_Execute(daUdFloor_c*);
static void daUdFloor_Delete(daUdFloor_c*);
static void daUdFloor_Create(fopAc_ac_c*);
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv8UdFloor[12];

extern "C" void __ct__15daUdFloor_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__11daUdFloor_cFv();
extern "C" void CreateHeap__11daUdFloor_cFv();
extern "C" void create__11daUdFloor_cFv();
extern "C" void Execute__11daUdFloor_cFPPA3_A4_f();
extern "C" void moveLift__11daUdFloor_cFv();
extern "C" void init_modeWait__11daUdFloor_cFv();
extern "C" void modeWait__11daUdFloor_cFv();
extern "C" void init_modeUpMoveInit__11daUdFloor_cFv();
extern "C" void modeUpMoveInit__11daUdFloor_cFv();
extern "C" void colorAnm__11daUdFloor_cFi();
extern "C" void init_modeUpMove__11daUdFloor_cFv();
extern "C" void modeUpMove__11daUdFloor_cFv();
extern "C" void init_modeDownMoveInit__11daUdFloor_cFv();
extern "C" void modeDownMoveInit__11daUdFloor_cFv();
extern "C" void init_modeDownMove__11daUdFloor_cFv();
extern "C" void modeDownMove__11daUdFloor_cFv();
extern "C" void Draw__11daUdFloor_cFv();
extern "C" void Delete__11daUdFloor_cFv();
extern "C" static void daUdFloor_Draw__FP11daUdFloor_c();
extern "C" static void daUdFloor_Execute__FP11daUdFloor_c();
extern "C" static void daUdFloor_Delete__FP11daUdFloor_c();
extern "C" static void daUdFloor_Create__FP10fopAc_ac_c();
extern "C" void __dt__15daUdFloor_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv8UdFloor_cpp();
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv8UdFloor[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

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
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C8CBF0-80C8CBF4 0004+00 s=5 e=0 z=0  None .rodata    @3628 */
SECTION_RODATA static u8 const lit_3628[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C8CBF4-80C8CBFC 0008+00 s=1 e=0 z=0  None .rodata    l_bmdIdx */
SECTION_RODATA static u8 const l_bmdIdx[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};

/* 80C8CBFC-80C8CC04 0008+00 s=1 e=0 z=0  None .rodata    l_dzbIdx */
SECTION_RODATA static u8 const l_dzbIdx[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};

/* 80C8CC04-80C8CC0C 0008+00 s=1 e=0 z=0  None .rodata    l_heap_size */
SECTION_RODATA static u8 const l_heap_size[8] = {
    0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x14, 0x00,
};

/* 80C8CC0C-80C8CC10 0004+00 s=1 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u32 const lit_3718 = 0x42480000;

/* 80C8CC10-80C8CC18 0008+00 s=1 e=0 z=0  None .rodata    @3720 */
SECTION_RODATA static u8 const lit_3720[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C8CC18-80C8CC20 0008+00 s=2 e=0 z=0  None .rodata    @3722 */
SECTION_RODATA static u8 const lit_3722[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C8CC20-80C8CC24 0004+00 s=6 e=0 z=0  None .rodata    @3777 */
SECTION_RODATA static u32 const lit_3777 = 0x3F800000;

/* 80C8CC24-80C8CC28 0004+00 s=5 e=0 z=0  None .rodata    @3778 */
SECTION_RODATA static u32 const lit_3778 = 0xBF800000;

/* 80C8CC28-80C8CC2C 0004+00 s=1 e=0 z=0  None .rodata    @3856 */
SECTION_RODATA static u32 const lit_3856 = 0x41F00000;

/* 80C8CC2C-80C8CC30 0004+00 s=2 e=0 z=0  None .rodata    @3857 */
SECTION_RODATA static u32 const lit_3857 = 0x3DCCCCCD;

/* 80C8CC30-80C8CC34 0004+00 s=1 e=0 z=0  None .rodata    @3892 */
SECTION_RODATA static u32 const lit_3892 = 0x3E99999A;

/* 80C8CC34-80C8CC44 0010+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80C8CC34[16] = {
    /* 80C8CC34 0007 stringBase_80C8CC34 @stringBase0 */
    0x4C,
    0x38,
    0x53,
    0x74,
    0x65,
    0x70,
    0x00,
    /* 80C8CC3B 0009 data_80C8CC3B None */
    0x4C,
    0x38,
    0x53,
    0x74,
    0x65,
    0x70,
    0x58,
    0x00,
    0x00,
};

/* 80C8CC44-80C8CC50 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C8CC50-80C8CC64 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80C8CC64-80C8CC6C 0008+00 s=3 e=0 z=0  None .data      l_resNameIdx */
SECTION_DATA static void* l_resNameIdx[2] = {
    (void*)(((char*)&struct_80C8CC34) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_80C8CC34) + 0x7) /* None */,
};

/* 80C8CC6C-80C8CC78 000C+00 s=1 e=0 z=0  None .data      @3736 */
SECTION_DATA static void* lit_3736[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__11daUdFloor_cFv,
};

/* 80C8CC78-80C8CC84 000C+00 s=1 e=0 z=0  None .data      @3737 */
SECTION_DATA static void* lit_3737[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeUpMoveInit__11daUdFloor_cFv,
};

/* 80C8CC84-80C8CC90 000C+00 s=1 e=0 z=0  None .data      @3738 */
SECTION_DATA static void* lit_3738[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeUpMove__11daUdFloor_cFv,
};

/* 80C8CC90-80C8CC9C 000C+00 s=1 e=0 z=0  None .data      @3739 */
SECTION_DATA static void* lit_3739[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDownMoveInit__11daUdFloor_cFv,
};

/* 80C8CC9C-80C8CCA8 000C+00 s=1 e=0 z=0  None .data      @3740 */
SECTION_DATA static void* lit_3740[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDownMove__11daUdFloor_cFv,
};

/* 80C8CCA8-80C8CCE4 003C+00 s=1 e=0 z=0  None .data      mode_proc$3735 */
SECTION_DATA static u8 mode_proc[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C8CCE4-80C8CD04 0020+00 s=1 e=0 z=0  None .data      l_daUdFloor_Method */
SECTION_DATA static void* l_daUdFloor_Method[8] = {
    (void*)daUdFloor_Create__FP10fopAc_ac_c,
    (void*)daUdFloor_Delete__FP11daUdFloor_c,
    (void*)daUdFloor_Execute__FP11daUdFloor_c,
    (void*)NULL,
    (void*)daUdFloor_Draw__FP11daUdFloor_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C8CD04-80C8CD34 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv8UdFloor */
SECTION_DATA void* g_profile_Obj_Lv8UdFloor[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00A50000, (void*)&g_fpcLf_Method,
    (void*)0x000005C8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02860000, (void*)&l_daUdFloor_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C8CD34-80C8CD5C 0028+00 s=1 e=0 z=0  None .data      __vt__11daUdFloor_c */
SECTION_DATA static void* __vt__11daUdFloor_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__11daUdFloor_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__11daUdFloor_cFPPA3_A4_f,
    (void*)Draw__11daUdFloor_cFv,
    (void*)Delete__11daUdFloor_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C8CD5C-80C8CD68 000C+00 s=2 e=0 z=0  None .data      __vt__15daUdFloor_HIO_c */
SECTION_DATA static void* __vt__15daUdFloor_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__15daUdFloor_HIO_cFv,
};

/* 80C8CD68-80C8CD74 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C8BD0C-80C8BD80 0074+00 s=1 e=0 z=0  None .text      __ct__15daUdFloor_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daUdFloor_HIO_c::daUdFloor_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/__ct__15daUdFloor_HIO_cFv.s"
}
#pragma pop

/* 80C8BD80-80C8BDC8 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C8BDC8-80C8BE64 009C+00 s=2 e=0 z=0  None .text      setBaseMtx__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/setBaseMtx__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8BE64-80C8BEE4 0080+00 s=1 e=0 z=0  None .text      CreateHeap__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/CreateHeap__11daUdFloor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C8CD80-80C8CD8C 000C+00 s=1 e=0 z=0  None .bss       @3622 */
static u8 lit_3622[12];

/* 80C8CD8C-80C8CDA4 0018+00 s=7 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[24];

/* 80C8BEE4-80C8C0DC 01F8+00 s=1 e=0 z=0  None .text      create__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/create__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C0DC-80C8C12C 0050+00 s=1 e=0 z=0  None .text      Execute__11daUdFloor_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/Execute__11daUdFloor_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C8CDA4-80C8CDA8 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80C8CDA4[4];

/* 80C8C12C-80C8C264 0138+00 s=1 e=0 z=0  None .text      moveLift__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::moveLift() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/moveLift__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C264-80C8C270 000C+00 s=3 e=0 z=0  None .text      init_modeWait__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/init_modeWait__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C270-80C8C274 0004+00 s=1 e=0 z=0  None .text      modeWait__11daUdFloor_cFv */
void daUdFloor_c::modeWait() {
    /* empty function */
}

/* 80C8C274-80C8C310 009C+00 s=1 e=0 z=0  None .text      init_modeUpMoveInit__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::init_modeUpMoveInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/init_modeUpMoveInit__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C310-80C8C354 0044+00 s=1 e=0 z=0  None .text      modeUpMoveInit__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::modeUpMoveInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/modeUpMoveInit__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C354-80C8C5E4 0290+00 s=2 e=0 z=0  None .text      colorAnm__11daUdFloor_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::colorAnm(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/colorAnm__11daUdFloor_cFi.s"
}
#pragma pop

/* 80C8C5E4-80C8C68C 00A8+00 s=1 e=0 z=0  None .text      init_modeUpMove__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::init_modeUpMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/init_modeUpMove__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C68C-80C8C7F8 016C+00 s=1 e=0 z=0  None .text      modeUpMove__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::modeUpMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/modeUpMove__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C7F8-80C8C81C 0024+00 s=1 e=0 z=0  None .text      init_modeDownMoveInit__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::init_modeDownMoveInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/init_modeDownMoveInit__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C81C-80C8C860 0044+00 s=1 e=0 z=0  None .text      modeDownMoveInit__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::modeDownMoveInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/modeDownMoveInit__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C860-80C8C8E4 0084+00 s=1 e=0 z=0  None .text      init_modeDownMove__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::init_modeDownMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/init_modeDownMove__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C8E4-80C8C994 00B0+00 s=1 e=0 z=0  None .text      modeDownMove__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::modeDownMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/modeDownMove__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8C994-80C8CA78 00E4+00 s=1 e=0 z=0  None .text      Draw__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/Draw__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8CA78-80C8CAB8 0040+00 s=1 e=0 z=0  None .text      Delete__11daUdFloor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daUdFloor_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/Delete__11daUdFloor_cFv.s"
}
#pragma pop

/* 80C8CAB8-80C8CAE4 002C+00 s=1 e=0 z=0  None .text      daUdFloor_Draw__FP11daUdFloor_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daUdFloor_Draw(daUdFloor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/daUdFloor_Draw__FP11daUdFloor_c.s"
}
#pragma pop

/* 80C8CAE4-80C8CB04 0020+00 s=1 e=0 z=0  None .text      daUdFloor_Execute__FP11daUdFloor_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daUdFloor_Execute(daUdFloor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/daUdFloor_Execute__FP11daUdFloor_c.s"
}
#pragma pop

/* 80C8CB04-80C8CB24 0020+00 s=1 e=0 z=0  None .text      daUdFloor_Delete__FP11daUdFloor_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daUdFloor_Delete(daUdFloor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/daUdFloor_Delete__FP11daUdFloor_c.s"
}
#pragma pop

/* 80C8CB24-80C8CB44 0020+00 s=1 e=0 z=0  None .text      daUdFloor_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daUdFloor_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/daUdFloor_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C8CB44-80C8CBA0 005C+00 s=2 e=0 z=0  None .text      __dt__15daUdFloor_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daUdFloor_HIO_c::~daUdFloor_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/__dt__15daUdFloor_HIO_cFv.s"
}
#pragma pop

/* 80C8CBA0-80C8CBDC 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv8UdFloor_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lv8UdFloor_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8UdFloor/d_a_obj_lv8UdFloor/__sinit_d_a_obj_lv8UdFloor_cpp.s"
}
#pragma pop
