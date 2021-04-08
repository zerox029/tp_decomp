//
// Generated By: dol2asm
// Translation Unit: c_bg_s_lin_chk
//

#include "SSystem/SComponent/c_bg_s_lin_chk.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "SSystem/SComponent/c_bg_s_chk.h"
#include "SSystem/SComponent/c_bg_s_poly_info.h"

//
// Forward References:
//

extern "C" void __ct__11cBgS_LinChkFv();
extern "C" void __dt__11cBgS_LinChkFv();
extern "C" void ct__11cBgS_LinChkFv();
extern "C" void Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi();
extern "C" void PreCalc__11cBgS_LinChkFv();
extern "C" static void func_80267F80();

//
// External References:
//

extern "C" void __ct__8cBgS_ChkFv();
extern "C" void __dt__8cBgS_ChkFv();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ClearPi__13cBgS_PolyInfoFv();
extern "C" void SetStartEnd__8cM3dGLinFRC4cXyzRC4cXyz();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8cM3dGLin[3];
extern "C" f32 Zero__4cXyz[3];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C3FA8-803C3FC0 0210C8 0018+00 2/2 0/0 0/0 .data            __vt__11cBgS_LinChk */
SECTION_DATA extern void* __vt__11cBgS_LinChk[6] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)__dt__11cBgS_LinChkFv, (void*)NULL, (void*)NULL,
    (void*)func_80267F80,
};

/* 80267D5C-80267DBC 26269C 0060+00 0/0 2/2 0/0 .text            __ct__11cBgS_LinChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cBgS_LinChk::cBgS_LinChk() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_lin_chk/__ct__11cBgS_LinChkFv.s"
}
#pragma pop

/* 80267DBC-80267E48 2626FC 008C+00 2/1 2/2 0/0 .text            __dt__11cBgS_LinChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cBgS_LinChk::~cBgS_LinChk() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_lin_chk/__dt__11cBgS_LinChkFv.s"
}
#pragma pop

/* 80267E48-80267ED0 262788 0088+00 1/1 0/0 0/0 .text            ct__11cBgS_LinChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_LinChk::ct() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_lin_chk/ct__11cBgS_LinChkFv.s"
}
#pragma pop

/* 80267ED0-80267F40 262810 0070+00 0/0 2/2 0/0 .text Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_LinChk::Set2(cXyz const* param_0, cXyz const* param_1, unsigned int param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_lin_chk/Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi.s"
}
#pragma pop

/* 80267F40-80267F80 262880 0040+00 0/0 1/1 0/0 .text            PreCalc__11cBgS_LinChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_LinChk::PreCalc() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_lin_chk/PreCalc__11cBgS_LinChkFv.s"
}
#pragma pop

/* 80267F80-80267F88 2628C0 0008+00 1/0 0/0 0/0 .text            @20@__dt__11cBgS_LinChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80267F80() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_lin_chk/func_80267F80.s"
}
#pragma pop
