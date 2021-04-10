//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_acch
//

#include "d/bg/d_bg_s_acch.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct daPy_py_c {
    /* 80077494 */ bool checkPlayerFly() const;
};

struct dBgS_WtrChk {
    /* 80079164 */ dBgS_WtrChk();
};

struct cXyz {};

struct dBgS_SplGrpChk {
    /* 80078B90 */ void Set(cXyz&, f32);
    /* 80078C78 */ ~dBgS_SplGrpChk();
};

struct dBgS_RoofChk {
    /* 80078FF4 */ dBgS_RoofChk();
    /* 80079090 */ ~dBgS_RoofChk();
};

struct dBgS_PolyPassChk {
    /* 80078E0C */ void SetPassChkInfo(dBgS_PolyPassChk&);
    /* 80078EEC */ void SetUnderwaterRoof();
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct dBgS_Chk {
    /* 8007749C */ dBgS_Chk();
    /* 800774E8 */ ~dBgS_Chk();
    /* 80077560 */ void GetPolyPassChkInfo();
    /* 80077564 */ void GetGrpPassChkInfo();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F14 */ void ClrWallHit();
    /* 80075F40 */ void SetWallR(f32);
    /* 80075F48 */ void CalcWallRR();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80075F80 */ void SetWallHDirect(f32);
    /* 80077414 */ ~dBgS_AcchCir();
};

struct csXyz {};

struct Vec {};

struct cBgS_PolyInfo {
    /* 80268074 */ cBgS_PolyInfo();
    /* 802680B0 */ ~cBgS_PolyInfo();
    /* 80268120 */ void ClearPi();
    /* 8026816C */ void SetActorInfo(int, void*, unsigned int);
};

struct dBgS_Acch;
struct dBgS {
    /* 8007524C */ void WallCorrect(dBgS_Acch*);
    /* 80075374 */ void WallCorrectSort(dBgS_Acch*);
    /* 8007549C */ void RoofChk(dBgS_RoofChk*);
    /* 80075564 */ void SplGrpChk(dBgS_SplGrpChk*);
    /* 80075774 */ void MoveBgCrrPos(cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*, bool, bool);
    /* 80075B84 */ void RideCallBack(cBgS_PolyInfo const&, fopAc_ac_c*);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 800761CC */ void Init();
    /* 80076288 */ void Set(fopAc_ac_c*, int, dBgS_AcchCir*);
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 800762D8 */ void GroundCheckInit(dBgS&);
    /* 80076350 */ void GroundCheck(dBgS&);
    /* 8007654C */ void GroundRoofProc(dBgS&);
    /* 80076624 */ void LineCheck(dBgS&);
    /* 80076AAC */ void CrrPos(dBgS&);
    /* 80076F84 */ void GetWallAllR();
    /* 80076FC0 */ void SetWallCir();
    /* 8007703C */ void CalcWallBmdCyl();
    /* 80077114 */ void SetGroundUpY(f32);
    /* 80077128 */ void GetWallAllLowH();
    /* 80077178 */ void GetWallAllLowH_R();
    /* 800771E4 */ void GetSpeedY();
    /* 80077200 */ void GetWallAddY(Vec&);
    /* 80077278 */ void SetNowActorInfo(int, void*, unsigned int);
    /* 80077288 */ void SetWallPolyIndex(int, int);
    /* 800772E8 */ void CalcMovePosWork();
    /* 8007732C */ void CalcWallRR();
    /* 80077388 */ void SetMoveBGOnly();
    /* 800773A4 */ void ClrMoveBGOnly();
    /* 800773C0 */ void SetGndThinCellingOff();
    /* 800773D0 */ void ClrGndThinCellingOff();
    /* 800773E0 */ void ChkGndThinCellingOff();
    /* 800773EC */ void OnWallSort();
    /* 800773FC */ void ChkWallSort();
    /* 80077408 */ void ChkLineDown();
};

struct cM3dGPla {
    /* 8026F5D4 */ void getCrossYLessD(Vec const&, f32*) const;
};

struct cM3dGLin {
    /* 8026F2E8 */ void SetStartEnd(cXyz const&, cXyz const&);
};

struct cM3dGCyl {
    /* 8026F180 */ void Set(cXyz const&, f32, f32);
};

struct cM3dGCir {
    /* 8026EEB4 */ cM3dGCir();
    /* 8026EF18 */ ~cM3dGCir();
    /* 8026EF74 */ void Set(f32, f32, f32, f32);
};

struct cBgS_LinChk {
    /* 80267D5C */ cBgS_LinChk();
    /* 80267DBC */ ~cBgS_LinChk();
    /* 80267ED0 */ void Set2(cXyz const*, cXyz const*, unsigned int);
};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS_Chk {
    /* 80267B4C */ cBgS_Chk();
    /* 80267B70 */ ~cBgS_Chk();
    /* 80267BB8 */ void SetExtChk(cBgS_Chk&);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

//
// Forward References:
//

extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void ClrWallHit__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void CalcWallRR__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void SetWallHDirect__12dBgS_AcchCirFf();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Init__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void Set__9dBgS_AcchFP10fopAc_ac_ciP12dBgS_AcchCir();
extern "C" void GroundCheckInit__9dBgS_AcchFR4dBgS();
extern "C" void GroundCheck__9dBgS_AcchFR4dBgS();
extern "C" void GroundRoofProc__9dBgS_AcchFR4dBgS();
extern "C" void LineCheck__9dBgS_AcchFR4dBgS();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void GetWallAllR__9dBgS_AcchFv();
extern "C" void SetWallCir__9dBgS_AcchFv();
extern "C" void CalcWallBmdCyl__9dBgS_AcchFv();
extern "C" void SetGroundUpY__9dBgS_AcchFf();
extern "C" void GetWallAllLowH__9dBgS_AcchFv();
extern "C" void GetWallAllLowH_R__9dBgS_AcchFv();
extern "C" void GetSpeedY__9dBgS_AcchFv();
extern "C" void GetWallAddY__9dBgS_AcchFR3Vec();
extern "C" void SetNowActorInfo__9dBgS_AcchFiPvUi();
extern "C" void SetWallPolyIndex__9dBgS_AcchFii();
extern "C" void CalcMovePosWork__9dBgS_AcchFv();
extern "C" void CalcWallRR__9dBgS_AcchFv();
extern "C" void SetMoveBGOnly__9dBgS_AcchFv();
extern "C" void ClrMoveBGOnly__9dBgS_AcchFv();
extern "C" void SetGndThinCellingOff__9dBgS_AcchFv();
extern "C" void ClrGndThinCellingOff__9dBgS_AcchFv();
extern "C" void ChkGndThinCellingOff__9dBgS_AcchFv();
extern "C" void OnWallSort__9dBgS_AcchFv();
extern "C" void ChkWallSort__9dBgS_AcchFv();
extern "C" void ChkLineDown__9dBgS_AcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" static void func_80077484();
extern "C" static void func_8007748C();
extern "C" bool checkPlayerFly__9daPy_py_cCFv();

//
// External References:
//

extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void WallCorrect__4dBgSFP9dBgS_Acch();
extern "C" void WallCorrectSort__4dBgSFP9dBgS_Acch();
extern "C" void RoofChk__4dBgSFP12dBgS_RoofChk();
extern "C" void SplGrpChk__4dBgSFP14dBgS_SplGrpChk();
extern "C" void MoveBgCrrPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyzbb();
extern "C" void RideCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_c();
extern "C" void __ct__8dBgS_ChkFv();
extern "C" void __dt__8dBgS_ChkFv();
extern "C" void GetPolyPassChkInfo__8dBgS_ChkFv();
extern "C" void GetGrpPassChkInfo__8dBgS_ChkFv();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void Set__14dBgS_SplGrpChkFR4cXyzf();
extern "C" void __dt__14dBgS_SplGrpChkFv();
extern "C" void SetPassChkInfo__16dBgS_PolyPassChkFR16dBgS_PolyPassChk();
extern "C" void SetUnderwaterRoof__16dBgS_PolyPassChkFv();
extern "C" void __ct__12dBgS_RoofChkFv();
extern "C" void __dt__12dBgS_RoofChkFv();
extern "C" void __ct__11dBgS_WtrChkFv();
extern "C" void __ct__8cBgS_ChkFv();
extern "C" void __dt__8cBgS_ChkFv();
extern "C" void SetExtChk__8cBgS_ChkFR8cBgS_Chk();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __ct__11cBgS_LinChkFv();
extern "C" void __dt__11cBgS_LinChkFv();
extern "C" void Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ClearPi__13cBgS_PolyInfoFv();
extern "C" void SetActorInfo__13cBgS_PolyInfoFiPvUi();
extern "C" void SetPolyIndex__13cBgS_PolyInfoFi();
extern "C" void cBgW_CheckBGround__Ff();
extern "C" void __ct__8cM3dGCirFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void Set__8cM3dGCirFffff();
extern "C" void Set__8cM3dGCylFRC4cXyzff();
extern "C" void SetStartEnd__8cM3dGLinFRC4cXyzRC4cXyz();
extern "C" void getCrossYLessD__8cM3dGPlaCFRC3VecPf();
extern "C" void __dl__FPv();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareDistance();
extern "C" void __register_global_object();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8cM3dGPla[3];
extern "C" extern void* __vt__11dBgS_WtrChk[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGLin[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 data_80450F68[8];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803AB640-803AB664 008760 0024+00 2/2 0/0 0/0 .data            __vt__9dBgS_Acch */
SECTION_DATA extern void* __vt__9dBgS_Acch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9dBgS_AcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007748C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80077484,
};

/* 803AB664-803AB670 008784 000C+00 2/2 3/3 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 804526C0-804526C4 000CC0 0004+00 11/11 0/0 0/0 .sdata2          @4025 */
SECTION_SDATA2 static u8 lit_4025[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80075EAC-80075F14 0707EC 0068+00 0/0 4/4 336/336 .text            __ct__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::dBgS_AcchCir() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/__ct__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80075F14-80075F40 070854 002C+00 1/1 0/0 0/0 .text            ClrWallHit__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_AcchCir::ClrWallHit() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/ClrWallHit__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80075F40-80075F48 070880 0008+00 1/1 2/2 109/109 .text            SetWallR__12dBgS_AcchCirFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_AcchCir::SetWallR(f32 param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetWallR__12dBgS_AcchCirFf.s"
}
#pragma pop

/* 80075F48-80075F58 070888 0010+00 1/1 0/0 0/0 .text            CalcWallRR__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_AcchCir::CalcWallRR() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/CalcWallRR__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80075F58-80075F80 070898 0028+00 0/0 3/3 272/272 .text            SetWall__12dBgS_AcchCirFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_AcchCir::SetWall(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetWall__12dBgS_AcchCirFff.s"
}
#pragma pop

/* 80075F80-80075F94 0708C0 0014+00 1/1 0/0 1/1 .text            SetWallHDirect__12dBgS_AcchCirFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_AcchCir::SetWallHDirect(f32 param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetWallHDirect__12dBgS_AcchCirFf.s"
}
#pragma pop

/* 80075F94-800760A0 0708D4 010C+00 3/2 6/6 468/468 .text            __dt__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_Acch::~dBgS_Acch() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/__dt__9dBgS_AcchFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804526C4-804526C8 000CC4 0004+00 5/5 0/0 0/0 .sdata2          @4089 */
SECTION_SDATA2 static f32 lit_4089 = -1000000000.0f;

/* 804526C8-804526CC 000CC8 0004+00 1/1 0/0 0/0 .sdata2          @4090 */
SECTION_SDATA2 static f32 lit_4090 = 60.0f;

/* 804526CC-804526D0 000CCC 0004+00 3/3 0/0 0/0 .sdata2          @4091 */
SECTION_SDATA2 static f32 lit_4091 = 1000000000.0f;

/* 804526D0-804526D4 000CD0 0004+00 1/1 0/0 0/0 .sdata2          @4092 */
SECTION_SDATA2 static f32 lit_4092 = 1000.0f;

/* 800760A0-800761CC 0709E0 012C+00 0/0 4/4 338/338 .text            __ct__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_Acch::dBgS_Acch() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/__ct__9dBgS_AcchFv.s"
}
#pragma pop

/* 800761CC-80076248 070B0C 007C+00 1/1 0/0 0/0 .text            Init__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::Init() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/Init__9dBgS_AcchFv.s"
}
#pragma pop

/* 80076248-80076288 070B88 0040+00 0/0 2/2 314/314 .text
 * Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::Set(cXyz* param_0, cXyz* param_1, fopAc_ac_c* param_2, int param_3,
                        dBgS_AcchCir* param_4, cXyz* param_5, csXyz* param_6, csXyz* param_7) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz.s"
}
#pragma pop

/* 80076288-800762D8 070BC8 0050+00 0/0 1/1 7/7 .text
 * Set__9dBgS_AcchFP10fopAc_ac_ciP12dBgS_AcchCir                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::Set(fopAc_ac_c* param_0, int param_1, dBgS_AcchCir* param_2) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/Set__9dBgS_AcchFP10fopAc_ac_ciP12dBgS_AcchCir.s"
}
#pragma pop

/* 800762D8-80076350 070C18 0078+00 1/1 0/0 0/0 .text            GroundCheckInit__9dBgS_AcchFR4dBgS
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GroundCheckInit(dBgS& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GroundCheckInit__9dBgS_AcchFR4dBgS.s"
}
#pragma pop

/* ############################################################################################## */
/* 80424B20-80424B2C 051840 000C+00 1/1 0/0 0/0 .bss             @4166 */
static u8 lit_4166[12];

/* 80424B2C-80424B80 05184C 0050+04 1/1 0/0 0/0 .bss             tmpRoofChk$4165 */
static u8 tmpRoofChk[80 + 4 /* padding */];

/* 80076350-8007654C 070C90 01FC+00 2/2 0/0 0/0 .text            GroundCheck__9dBgS_AcchFR4dBgS */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GroundCheck(dBgS& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GroundCheck__9dBgS_AcchFR4dBgS.s"
}
#pragma pop

/* 8007654C-80076624 070E8C 00D8+00 1/1 0/0 0/0 .text            GroundRoofProc__9dBgS_AcchFR4dBgS
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GroundRoofProc(dBgS& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GroundRoofProc__9dBgS_AcchFR4dBgS.s"
}
#pragma pop

/* ############################################################################################## */
/* 804526D4-804526D8 000CD4 0004+00 1/1 0/0 0/0 .sdata2          @4424 */
SECTION_SDATA2 static f32 lit_4424 = 1.0f;

/* 80076624-80076AAC 070F64 0488+00 1/1 0/0 0/0 .text            LineCheck__9dBgS_AcchFR4dBgS */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::LineCheck(dBgS& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/LineCheck__9dBgS_AcchFR4dBgS.s"
}
#pragma pop

/* ############################################################################################## */
/* 804526D8-804526DC 000CD8 0004+00 1/1 0/0 0/0 .sdata2          @4554 */
SECTION_SDATA2 static f32 lit_4554 = 50.0f;

/* 804526DC-804526E0 000CDC 0004+00 1/1 0/0 0/0 .sdata2          @4555 */
SECTION_SDATA2 static f32 lit_4555 = 1000000.0f;

/* 80076AAC-80076F84 0713EC 04D8+00 0/0 15/15 414/414 .text            CrrPos__9dBgS_AcchFR4dBgS */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::CrrPos(dBgS& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/CrrPos__9dBgS_AcchFR4dBgS.s"
}
#pragma pop

/* 80076F84-80076FC0 0718C4 003C+00 1/1 0/0 0/0 .text            GetWallAllR__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GetWallAllR() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GetWallAllR__9dBgS_AcchFv.s"
}
#pragma pop

/* 80076FC0-8007703C 071900 007C+00 1/1 0/0 0/0 .text            SetWallCir__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::SetWallCir() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetWallCir__9dBgS_AcchFv.s"
}
#pragma pop

/* 8007703C-80077114 07197C 00D8+00 1/1 0/0 0/0 .text            CalcWallBmdCyl__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::CalcWallBmdCyl() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/CalcWallBmdCyl__9dBgS_AcchFv.s"
}
#pragma pop

/* 80077114-80077128 071A54 0014+00 0/0 0/0 24/24 .text            SetGroundUpY__9dBgS_AcchFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::SetGroundUpY(f32 param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetGroundUpY__9dBgS_AcchFf.s"
}
#pragma pop

/* 80077128-80077178 071A68 0050+00 1/1 0/0 0/0 .text            GetWallAllLowH__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GetWallAllLowH() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GetWallAllLowH__9dBgS_AcchFv.s"
}
#pragma pop

/* 80077178-800771E4 071AB8 006C+00 1/1 0/0 0/0 .text            GetWallAllLowH_R__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GetWallAllLowH_R() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GetWallAllLowH_R__9dBgS_AcchFv.s"
}
#pragma pop

/* 800771E4-80077200 071B24 001C+00 1/1 4/4 0/0 .text            GetSpeedY__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GetSpeedY() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GetSpeedY__9dBgS_AcchFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804526E0-804526E8 000CE0 0004+04 1/1 0/0 0/0 .sdata2          @4762 */
SECTION_SDATA2 static f32 lit_4762[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80077200-80077278 071B40 0078+00 0/0 4/4 0/0 .text            GetWallAddY__9dBgS_AcchFR3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::GetWallAddY(Vec& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/GetWallAddY__9dBgS_AcchFR3Vec.s"
}
#pragma pop

/* 80077278-80077288 071BB8 0010+00 0/0 2/2 0/0 .text            SetNowActorInfo__9dBgS_AcchFiPvUi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::SetNowActorInfo(int param_0, void* param_1, unsigned int param_2) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetNowActorInfo__9dBgS_AcchFiPvUi.s"
}
#pragma pop

/* 80077288-800772E8 071BC8 0060+00 0/0 4/4 0/0 .text            SetWallPolyIndex__9dBgS_AcchFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::SetWallPolyIndex(int param_0, int param_1) {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetWallPolyIndex__9dBgS_AcchFii.s"
}
#pragma pop

/* 800772E8-8007732C 071C28 0044+00 0/0 6/6 0/0 .text            CalcMovePosWork__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::CalcMovePosWork() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/CalcMovePosWork__9dBgS_AcchFv.s"
}
#pragma pop

/* 8007732C-80077388 071C6C 005C+00 0/0 2/2 0/0 .text            CalcWallRR__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::CalcWallRR() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/CalcWallRR__9dBgS_AcchFv.s"
}
#pragma pop

/* 80077388-800773A4 071CC8 001C+00 0/0 1/1 0/0 .text            SetMoveBGOnly__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::SetMoveBGOnly() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetMoveBGOnly__9dBgS_AcchFv.s"
}
#pragma pop

/* 800773A4-800773C0 071CE4 001C+00 0/0 4/4 17/17 .text            ClrMoveBGOnly__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::ClrMoveBGOnly() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/ClrMoveBGOnly__9dBgS_AcchFv.s"
}
#pragma pop

/* 800773C0-800773D0 071D00 0010+00 0/0 1/1 2/2 .text            SetGndThinCellingOff__9dBgS_AcchFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::SetGndThinCellingOff() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/SetGndThinCellingOff__9dBgS_AcchFv.s"
}
#pragma pop

/* 800773D0-800773E0 071D10 0010+00 0/0 1/1 0/0 .text            ClrGndThinCellingOff__9dBgS_AcchFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::ClrGndThinCellingOff() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/ClrGndThinCellingOff__9dBgS_AcchFv.s"
}
#pragma pop

/* 800773E0-800773EC 071D20 000C+00 1/1 0/0 0/0 .text            ChkGndThinCellingOff__9dBgS_AcchFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::ChkGndThinCellingOff() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/ChkGndThinCellingOff__9dBgS_AcchFv.s"
}
#pragma pop

/* 800773EC-800773FC 071D2C 0010+00 0/0 1/1 1/1 .text            OnWallSort__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::OnWallSort() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/OnWallSort__9dBgS_AcchFv.s"
}
#pragma pop

/* 800773FC-80077408 071D3C 000C+00 1/1 0/0 0/0 .text            ChkWallSort__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::ChkWallSort() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/ChkWallSort__9dBgS_AcchFv.s"
}
#pragma pop

/* 80077408-80077414 071D48 000C+00 1/1 0/0 0/0 .text            ChkLineDown__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_Acch::ChkLineDown() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/ChkLineDown__9dBgS_AcchFv.s"
}
#pragma pop

/* 80077414-80077484 071D54 0070+00 1/0 2/2 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80077484-8007748C 071DC4 0008+00 1/0 0/0 0/0 .text            @36@__dt__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80077484() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/func_80077484.s"
}
#pragma pop

/* 8007748C-80077494 071DCC 0008+00 1/0 0/0 0/0 .text            @20@__dt__9dBgS_AcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8007748C() {
    nofralloc
#include "asm/d/bg/d_bg_s_acch/func_8007748C.s"
}
#pragma pop

/* 80077494-8007749C 071DD4 0008+00 0/0 1/0 0/0 .text            checkPlayerFly__9daPy_py_cCFv */
bool daPy_py_c::checkPlayerFly() const {
    return false;
}
