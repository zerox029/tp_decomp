//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_kankyo_mng
//

#include "f_op/f_op_kankyo_mng.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct layer_class {};

struct dPa_levelEcallBack {};

struct csXyz {};

struct cXyz {};

struct dKy_tevstr_c {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct cMl {
    /* 80263228 */ void memalignB(int, u32);
};

//
// Forward References:
//

static void fopKyM_CreateAppend();
static void createAppend(int, cXyz*, cXyz*);
void fopKyM_Delete(void*);
static void fopKyM_Create(s16, int (*)(void*), void*);
void fopKyM_create(s16, int, cXyz*, cXyz*, int (*)(void*));
void fopKyM_fastCreate(s16, int, cXyz*, cXyz*, int (*)(void*));
void fopKyM_createWpillar(cXyz const*, f32, int);
void fopKyM_createMpillar(cXyz const*, f32);

extern "C" static void fopKyM_CreateAppend__Fv();
extern "C" static void createAppend__FiP4cXyzP4cXyz();
extern "C" void fopKyM_Delete__FPv();
extern "C" static void fopKyM_Create__FsPFPv_iPv();
extern "C" void fopKyM_create__FsiP4cXyzP4cXyzPFPv_i();
extern "C" void fopKyM_fastCreate__FsiP4cXyzP4cXyzPFPv_i();
extern "C" void fopKyM_createWpillar__FPC4cXyzfi();
extern "C" void fopKyM_createMpillar__FPC4cXyzf();

//
// External References:
//

void fpcLy_CurrentLayer();
void fpcM_Delete(void*);
void fpcM_FastCreate(s16, int (*)(void*), void*, void*);
void fpcSCtRq_Request(layer_class*, s16, int (*)(void*, void*), void*, void*);
void cLib_memSet(void*, int, u32);
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void fpcLy_CurrentLayer__Fv();
extern "C" void fpcM_Delete__FPv();
extern "C" void fpcM_FastCreate__FsPFPv_iPvPv();
extern "C" void fpcSCtRq_Request__FP11layer_classsPFPvPv_iPvPv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void memalignB__3cMlFiUl();
extern "C" void cLib_memSet__FPviUl();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451C68-80451C70 0004+04 s=2 e=0 z=0  None .sdata2    @3713 */
SECTION_SDATA2 static f32 lit_3713[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 8001F660-8001F6B8 0058+00 s=2 e=0 z=0  None .text      fopKyM_CreateAppend__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopKyM_CreateAppend() {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/fopKyM_CreateAppend__Fv.s"
}
#pragma pop

/* 8001F6B8-8001F748 0090+00 s=2 e=0 z=0  None .text      createAppend__FiP4cXyzP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createAppend(int param_0, cXyz* param_1, cXyz* param_2) {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/createAppend__FiP4cXyzP4cXyz.s"
}
#pragma pop

/* 8001F748-8001F768 0020+00 s=0 e=3 z=1  None .text      fopKyM_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopKyM_Delete(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/fopKyM_Delete__FPv.s"
}
#pragma pop

/* 8001F768-8001F7B8 0050+00 s=2 e=0 z=0  None .text      fopKyM_Create__FsPFPv_iPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopKyM_Create(s16 param_0, int (*)(void*), void* param_2) {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/fopKyM_Create__FsPFPv_iPv.s"
}
#pragma pop

/* 8001F7B8-8001F818 0060+00 s=0 e=3 z=1  None .text      fopKyM_create__FsiP4cXyzP4cXyzPFPv_i */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopKyM_create(s16 param_0, int param_1, cXyz* param_2, cXyz* param_3, int (*)(void*)) {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/fopKyM_create__FsiP4cXyzP4cXyzPFPv_i.s"
}
#pragma pop

/* 8001F818-8001F87C 0064+00 s=0 e=1 z=0  None .text      fopKyM_fastCreate__FsiP4cXyzP4cXyzPFPv_i
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopKyM_fastCreate(s16 param_0, int param_1, cXyz* param_2, cXyz* param_3, int (*)(void*)) {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/fopKyM_fastCreate__FsiP4cXyzP4cXyzPFPv_i.s"
}
#pragma pop

/* 8001F87C-8001F90C 0090+00 s=0 e=6 z=37  None .text      fopKyM_createWpillar__FPC4cXyzfi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopKyM_createWpillar(cXyz const* param_0, f32 param_1, int param_2) {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/fopKyM_createWpillar__FPC4cXyzfi.s"
}
#pragma pop

/* ############################################################################################## */
/* 804505C0-804505C8 0004+04 s=1 e=0 z=0  None .sdata     m_name$3788 */
SECTION_SDATA static u8 m_name[4 + 4 /* padding */] = {
    0x87,
    0x57,
    0x87,
    0x58,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8001F90C-8001F9B4 00A8+00 s=0 e=0 z=3  None .text      fopKyM_createMpillar__FPC4cXyzf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopKyM_createMpillar(cXyz const* param_0, f32 param_1) {
    nofralloc
#include "asm/f_op/f_op_kankyo_mng/fopKyM_createMpillar__FPC4cXyzf.s"
}
#pragma pop
