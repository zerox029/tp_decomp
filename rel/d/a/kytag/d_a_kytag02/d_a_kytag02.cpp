//
// Generated By: dol2asm
// Translation Unit: d_a_kytag02
//

#include "rel/d/a/kytag/d_a_kytag02/d_a_kytag02.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct kytag02_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct Vec {};

struct Z2EnvSeMgr {
    /* 802C7FBC */ void initStrongWindSe();
    /* 802C7FC8 */ void setWindDirection(Vec*);
    /* 802C800C */ void startStrongWindSe(s8);
};

//
// Forward References:
//

static bool daKytag02_Draw(kytag02_class*);
static void daKytag02_Execute(kytag02_class*);
static bool daKytag02_IsDelete(kytag02_class*);
static void daKytag02_Delete(kytag02_class*);
static void daKytag02_Create(fopAc_ac_c*);
extern "C" extern void* g_profile_KYTAG02[12];

extern "C" static bool daKytag02_Draw__FP13kytag02_class();
extern "C" static void daKytag02_Execute__FP13kytag02_class();
extern "C" static bool daKytag02_IsDelete__FP13kytag02_class();
extern "C" static void daKytag02_Delete__FP13kytag02_class();
extern "C" static void daKytag02_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_KYTAG02[12];

//
// External References:
//

void dComIfGp_getReverb(int);
void dKyw_get_wind_vec();
void dKyw_evt_wind_set(s16, s16);
void dKyw_evt_wind_set_go();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_mEnvSeMgr[780];
extern "C" extern u8 struct_80450D64[4];

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void dKyw_get_wind_vec__Fv();
extern "C" void dKyw_evt_wind_set__Fss();
extern "C" void dKyw_evt_wind_set_go__Fv();
extern "C" void initStrongWindSe__10Z2EnvSeMgrFv();
extern "C" void setWindDirection__10Z2EnvSeMgrFP3Vec();
extern "C" void startStrongWindSe__10Z2EnvSeMgrFSc();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_mEnvSeMgr[780];
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* 80855AB8-80855AC0 0008+00 s=1 e=0 z=0  None .text      daKytag02_Draw__FP13kytag02_class */
static bool daKytag02_Draw(kytag02_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80855DFC-80855E00 0004+00 s=1 e=0 z=0  None .rodata    @3666 */
SECTION_RODATA static u32 const lit_3666 = 0x3E8A3D71;

/* 80855E00-80855E04 0004+00 s=1 e=0 z=0  None .rodata    @3667 */
SECTION_RODATA static u32 const lit_3667 = 0x3ECF5C28;

/* 80855E04-80855E08 0004+00 s=2 e=0 z=0  None .rodata    @3668 */
SECTION_RODATA static u8 const lit_3668[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80855E08-80855E0C 0004+00 s=1 e=0 z=0  None .rodata    @3669 */
SECTION_RODATA static u32 const lit_3669 = 0x3E99999A;

/* 80855AC0-80855CC4 0204+00 s=1 e=0 z=0  None .text      daKytag02_Execute__FP13kytag02_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag02_Execute(kytag02_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag02/d_a_kytag02/daKytag02_Execute__FP13kytag02_class.s"
}
#pragma pop

/* 80855CC4-80855CCC 0008+00 s=1 e=0 z=0  None .text      daKytag02_IsDelete__FP13kytag02_class */
static bool daKytag02_IsDelete(kytag02_class* param_0) {
    return true;
}

/* 80855CCC-80855CEC 0020+00 s=1 e=0 z=0  None .text      daKytag02_Delete__FP13kytag02_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag02_Delete(kytag02_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag02/d_a_kytag02/daKytag02_Delete__FP13kytag02_class.s"
}
#pragma pop

/* 80855CEC-80855DF4 0108+00 s=1 e=0 z=0  None .text      daKytag02_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag02_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag02/d_a_kytag02/daKytag02_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80855E0C-80855E2C 0020+00 s=1 e=0 z=0  None .data      l_daKytag02_Method */
SECTION_DATA static void* l_daKytag02_Method[8] = {
    (void*)daKytag02_Create__FP10fopAc_ac_c,
    (void*)daKytag02_Delete__FP13kytag02_class,
    (void*)daKytag02_Execute__FP13kytag02_class,
    (void*)daKytag02_IsDelete__FP13kytag02_class,
    (void*)daKytag02_Draw__FP13kytag02_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80855E2C-80855E5C 0030+00 s=0 e=0 z=1  None .data      g_profile_KYTAG02 */
SECTION_DATA void* g_profile_KYTAG02[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02AC0000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00600000, (void*)&l_daKytag02_Method,
    (void*)0x00044000, (void*)NULL,
};
