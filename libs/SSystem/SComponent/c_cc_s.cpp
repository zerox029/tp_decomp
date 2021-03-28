//
// Generated By: dol2asm
// Translation Unit: c_cc_s
//

#include "SSystem/SComponent/c_cc_s.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct cXyz {
    /* 80009184 */ ~cXyz();
};

struct cM3dGAab {
    /* 8026ECF8 */ void ClearForMinMax();
    /* 8026ED60 */ void SetMinMax(cM3dGAab const&);
    /* 8026EE24 */ void CalcCenter(cXyz*) const;
};

struct cCcD_Stts {
    /* 80263934 */ void PlusCcMove(f32, f32, f32);
    /* 8026395C */ void ClrCcMove();
    /* 80263970 */ void PlusDmg(int);
    /* 80263984 */ void GetWeightF() const;
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

struct cCcD_GStts {};

struct cCcD_GObjInf {};

struct cCcS {
    /* 80030BDC */ ~cCcS();
    /* 80264A6C */ cCcS();
    /* 80264A94 */ void Ct();
    /* 80264B60 */ void Dt();
    /* 80264B80 */ void GetWt(u8) const;
    /* 80264BA8 */ void Set(cCcD_Obj*);
    /* 80264C5C */ void ClrCoHitInf();
    /* 80264CF0 */ void ClrTgHitInf();
    /* 80264D90 */ void ClrAtHitInf();
    /* 80264E2C */ void ChkNoHitAtTg(cCcD_Obj*, cCcD_Obj*);
    /* 80264F40 */ void ChkAtTg();
    /* 8026515C */ void ChkNoHitCo(cCcD_Obj*, cCcD_Obj*);
    /* 80265230 */ void ChkCo();
    /* 802653A0 */ void CalcTgPlusDmg(cCcD_Obj*, cCcD_Obj*, cCcD_Stts*, cCcD_Stts*);
    /* 802653C8 */ void SetAtTgCommonHitInf(cCcD_Obj*, cCcD_Obj*, cXyz*);
    /* 802655E4 */ void SetCoCommonHitInf(cCcD_Obj*, cXyz*, cCcD_Obj*, cXyz*, f32);
    /* 80265750 */ void SetPosCorrect(cCcD_Obj*, cXyz*, cCcD_Obj*, cXyz*, f32);
    /* 80265BB4 */ void CalcArea();
    /* 80265CCC */ void Move();
    /* 80265D30 */ void DrawClear();
    /* 80265DF4 */ void SetCoGCorrectProc(cCcD_Obj*, cCcD_Obj*);
    /* 80265DF8 */ void SetCoGObjInf(bool, bool, cCcD_GObjInf*, cCcD_GObjInf*, cCcD_Stts*,
                                     cCcD_Stts*, cCcD_GStts*, cCcD_GStts*);
    /* 80265DFC */ void SetAtTgGObjInf(bool, bool, cCcD_Obj*, cCcD_Obj*, cCcD_GObjInf*,
                                       cCcD_GObjInf*, cCcD_Stts*, cCcD_Stts*, cCcD_GStts*,
                                       cCcD_GStts*, cXyz*);
    /* 80265E00 */ bool ChkNoHitGAtTg(cCcD_GObjInf const*, cCcD_GObjInf const*, cCcD_GStts*,
                                      cCcD_GStts*);
    /* 80265E08 */ bool ChkAtTgHitAfterCross(bool, bool, cCcD_GObjInf const*, cCcD_GObjInf const*,
                                             cCcD_Stts*, cCcD_Stts*, cCcD_GStts*, cCcD_GStts*);
    /* 80265E10 */ bool ChkNoHitGCo(cCcD_Obj*, cCcD_Obj*);
    /* 80265E18 */ void MoveAfterCheck();
};

struct cCcD_ObjTg {
    /* 802648C8 */ void SetHit(cCcD_Obj*);
};

struct cCcD_ObjCo {
    /* 802648D8 */ void SetHit(cCcD_Obj*);
};

struct cCcD_ObjAt {
    /* 8026483C */ void SetHit(cCcD_Obj*);
};

struct cCcD_DivideInfo {
    /* 80263368 */ void Chk(cCcD_DivideInfo const&) const;
};

struct cCcD_DivideArea {
    /* 802633A8 */ void SetArea(cM3dGAab const&);
    /* 802634D4 */ void CalcDivideInfo(cCcD_DivideInfo*, cM3dGAab const&, u32);
};

//
// Forward References:
//

extern "C" extern void* __vt__4cCcS[12];
extern "C" extern f32 lit_2762[1 + 1 /* padding */];

extern "C" void __ct__4cCcSFv();
extern "C" void Ct__4cCcSFv();
extern "C" void Dt__4cCcSFv();
extern "C" void GetWt__4cCcSCFUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void ClrCoHitInf__4cCcSFv();
extern "C" void ClrTgHitInf__4cCcSFv();
extern "C" void ClrAtHitInf__4cCcSFv();
extern "C" void ChkNoHitAtTg__4cCcSFP8cCcD_ObjP8cCcD_Obj();
extern "C" void ChkAtTg__4cCcSFv();
extern "C" void ChkNoHitCo__4cCcSFP8cCcD_ObjP8cCcD_Obj();
extern "C" void ChkCo__4cCcSFv();
extern "C" void CalcTgPlusDmg__4cCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts();
extern "C" void SetAtTgCommonHitInf__4cCcSFP8cCcD_ObjP8cCcD_ObjP4cXyz();
extern "C" void SetCoCommonHitInf__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf();
extern "C" void SetPosCorrect__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf();
extern "C" void CalcArea__4cCcSFv();
extern "C" void Move__4cCcSFv();
extern "C" void DrawClear__4cCcSFv();
extern "C" void SetCoGCorrectProc__4cCcSFP8cCcD_ObjP8cCcD_Obj();
extern "C" void
SetCoGObjInf__4cCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts();
extern "C" void
SetAtTgGObjInf__4cCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz();
extern "C" bool ChkNoHitGAtTg__4cCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts();
extern "C" bool
ChkAtTgHitAfterCross__4cCcSFbbPC12cCcD_GObjInfPC12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts();
extern "C" bool ChkNoHitGCo__4cCcSFP8cCcD_ObjP8cCcD_Obj();
extern "C" void MoveAfterCheck__4cCcSFv();
extern "C" extern void* __vt__4cCcS[12];
extern "C" extern f32 lit_2762[1 + 1 /* padding */];

//
// External References:
//

extern "C" extern void* __vt__15cCcD_DivideArea[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern u32 __float_nan;
extern "C" extern u8 data_80451158[8];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

extern "C" void __dt__4cXyzFv();
extern "C" void __dt__4cCcSFv();
extern "C" void Chk__15cCcD_DivideInfoCFRC15cCcD_DivideInfo();
extern "C" void SetArea__15cCcD_DivideAreaFRC8cM3dGAab();
extern "C" void CalcDivideInfo__15cCcD_DivideAreaFP15cCcD_DivideInfoRC8cM3dGAabUl();
extern "C" void PlusCcMove__9cCcD_SttsFfff();
extern "C" void ClrCcMove__9cCcD_SttsFv();
extern "C" void PlusDmg__9cCcD_SttsFi();
extern "C" void GetWeightF__9cCcD_SttsCFv();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void SetHit__10cCcD_ObjAtFP8cCcD_Obj();
extern "C" void SetHit__10cCcD_ObjTgFP8cCcD_Obj();
extern "C" void SetHit__10cCcD_ObjCoFP8cCcD_Obj();
extern "C" void ClearForMinMax__8cM3dGAabFv();
extern "C" void SetMinMax__8cM3dGAabFRC8cM3dGAab();
extern "C" void CalcCenter__8cM3dGAabCFP4cXyz();
extern "C" void PSVECAdd();
extern "C" void PSVECSubtract();
extern "C" void PSVECScale();
extern "C" void PSVECMag();
extern "C" void __register_global_object();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__15cCcD_DivideArea[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern u32 __float_nan;
extern "C" extern u8 data_80451158[8];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C3748-803C3778 0030+00 s=1 e=2 z=0  None .data      __vt__4cCcS */
SECTION_DATA void* __vt__4cCcS[12] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CalcTgPlusDmg__4cCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts,
    (void*)SetPosCorrect__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf,
    (void*)
        SetCoGObjInf__4cCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts,
    (void*)
        SetAtTgGObjInf__4cCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz,
    (void*)ChkNoHitGAtTg__4cCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts,
    (void*)
        ChkAtTgHitAfterCross__4cCcSFbbPC12cCcD_GObjInfPC12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts,
    (void*)ChkNoHitGCo__4cCcSFP8cCcD_ObjP8cCcD_Obj,
    (void*)__dt__4cCcSFv,
    (void*)MoveAfterCheck__4cCcSFv,
    (void*)SetCoGCorrectProc__4cCcSFP8cCcD_ObjP8cCcD_Obj,
};

/* 80264A6C-80264A94 0028+00 s=0 e=1 z=0  None .text      __ct__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcS::cCcS() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/__ct__4cCcSFv.s"
}
#pragma pop

/* 80264A94-80264B60 00CC+00 s=1 e=1 z=0  None .text      Ct__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::Ct() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/Ct__4cCcSFv.s"
}
#pragma pop

/* 80264B60-80264B80 0020+00 s=0 e=1 z=0  None .text      Dt__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::Dt() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/Dt__4cCcSFv.s"
}
#pragma pop

/* 80264B80-80264BA8 0028+00 s=1 e=0 z=0  None .text      GetWt__4cCcSCFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::GetWt(u8 param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/GetWt__4cCcSCFUc.s"
}
#pragma pop

/* 80264BA8-80264C5C 00B4+00 s=0 e=7 z=454  None .text      Set__4cCcSFP8cCcD_Obj */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::Set(cCcD_Obj* param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/Set__4cCcSFP8cCcD_Obj.s"
}
#pragma pop

/* 80264C5C-80264CF0 0094+00 s=1 e=0 z=0  None .text      ClrCoHitInf__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::ClrCoHitInf() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/ClrCoHitInf__4cCcSFv.s"
}
#pragma pop

/* 80264CF0-80264D90 00A0+00 s=1 e=0 z=0  None .text      ClrTgHitInf__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::ClrTgHitInf() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/ClrTgHitInf__4cCcSFv.s"
}
#pragma pop

/* 80264D90-80264E2C 009C+00 s=1 e=0 z=0  None .text      ClrAtHitInf__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::ClrAtHitInf() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/ClrAtHitInf__4cCcSFv.s"
}
#pragma pop

/* 80264E2C-80264F40 0114+00 s=1 e=0 z=0  None .text      ChkNoHitAtTg__4cCcSFP8cCcD_ObjP8cCcD_Obj
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::ChkNoHitAtTg(cCcD_Obj* param_0, cCcD_Obj* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/ChkNoHitAtTg__4cCcSFP8cCcD_ObjP8cCcD_Obj.s"
}
#pragma pop

/* ############################################################################################## */
/* 80430CC0-80430CCC 000C+00 s=1 e=0 z=0  None .bss       @2492 */
static u8 lit_2492[12];

/* 80430CCC-80430CD8 000C+00 s=1 e=0 z=0  None .bss       cross$2491 */
static u8 cross[12];

/* 80455038-8045503C 0004+00 s=2 e=0 z=0  None .sdata2    @2532 */
SECTION_SDATA2 static u8 lit_2532[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80264F40-8026515C 021C+00 s=1 e=0 z=0  None .text      ChkAtTg__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::ChkAtTg() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/ChkAtTg__4cCcSFv.s"
}
#pragma pop

/* 8026515C-80265230 00D4+00 s=1 e=0 z=0  None .text      ChkNoHitCo__4cCcSFP8cCcD_ObjP8cCcD_Obj */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::ChkNoHitCo(cCcD_Obj* param_0, cCcD_Obj* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/ChkNoHitCo__4cCcSFP8cCcD_ObjP8cCcD_Obj.s"
}
#pragma pop

/* 80265230-802653A0 0170+00 s=1 e=0 z=0  None .text      ChkCo__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::ChkCo() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/ChkCo__4cCcSFv.s"
}
#pragma pop

/* 802653A0-802653C8 0028+00 s=1 e=0 z=0  None .text
 * CalcTgPlusDmg__4cCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::CalcTgPlusDmg(cCcD_Obj* param_0, cCcD_Obj* param_1, cCcD_Stts* param_2,
                             cCcD_Stts* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/CalcTgPlusDmg__4cCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts.s"
}
#pragma pop

/* 802653C8-802655E4 021C+00 s=1 e=0 z=0  None .text
 * SetAtTgCommonHitInf__4cCcSFP8cCcD_ObjP8cCcD_ObjP4cXyz        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::SetAtTgCommonHitInf(cCcD_Obj* param_0, cCcD_Obj* param_1, cXyz* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/SetAtTgCommonHitInf__4cCcSFP8cCcD_ObjP8cCcD_ObjP4cXyz.s"
}
#pragma pop

/* 802655E4-80265750 016C+00 s=1 e=0 z=0  None .text
 * SetCoCommonHitInf__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::SetCoCommonHitInf(cCcD_Obj* param_0, cXyz* param_1, cCcD_Obj* param_2, cXyz* param_3,
                                 f32 param_4) {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/SetCoCommonHitInf__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045503C-80455040 0004+00 s=1 e=0 z=0  None .sdata2    @2759 */
SECTION_SDATA2 static u32 lit_2759 = 0x3C03126F;

/* 80455040-80455044 0004+00 s=1 e=0 z=0  None .sdata2    @2760 */
SECTION_SDATA2 static u32 lit_2760 = 0x3F800000;

/* 80455044-80455048 0004+00 s=1 e=0 z=0  None .sdata2    @2761 */
SECTION_SDATA2 static u32 lit_2761 = 0x40000000;

/* 80455048-80455050 0004+04 s=1 e=1 z=0  None .sdata2    @2762 */
SECTION_SDATA2 f32 lit_2762[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80455050-80455058 0008+00 s=1 e=0 z=0  None .sdata2    @2763 */
SECTION_SDATA2 static u8 lit_2763[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455058-80455060 0008+00 s=1 e=0 z=0  None .sdata2    @2764 */
SECTION_SDATA2 static u8 lit_2764[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455060-80455068 0008+00 s=1 e=0 z=0  None .sdata2    @2765 */
SECTION_SDATA2 static u8 lit_2765[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455068-80455070 0004+04 s=1 e=0 z=0  None .sdata2    @2766 */
SECTION_SDATA2 static f32 lit_2766[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};

/* 80265750-80265BB4 0464+00 s=1 e=0 z=0  None .text
 * SetPosCorrect__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::SetPosCorrect(cCcD_Obj* param_0, cXyz* param_1, cCcD_Obj* param_2, cXyz* param_3,
                             f32 param_4) {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/SetPosCorrect__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf.s"
}
#pragma pop

/* 80265BB4-80265CCC 0118+00 s=1 e=0 z=0  None .text      CalcArea__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::CalcArea() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/CalcArea__4cCcSFv.s"
}
#pragma pop

/* 80265CCC-80265D30 0064+00 s=0 e=1 z=0  None .text      Move__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::Move() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/Move__4cCcSFv.s"
}
#pragma pop

/* 80265D30-80265DF4 00C4+00 s=0 e=1 z=0  None .text      DrawClear__4cCcSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cCcS::DrawClear() {
    nofralloc
#include "asm/SSystem/SComponent/c_cc_s/DrawClear__4cCcSFv.s"
}
#pragma pop

/* 80265DF4-80265DF8 0004+00 s=1 e=1 z=0  None .text SetCoGCorrectProc__4cCcSFP8cCcD_ObjP8cCcD_Obj
 */
void cCcS::SetCoGCorrectProc(cCcD_Obj* param_0, cCcD_Obj* param_1) {
    /* empty function */
}

/* 80265DF8-80265DFC 0004+00 s=1 e=0 z=0  None .text
 * SetCoGObjInf__4cCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts
 */
void cCcS::SetCoGObjInf(bool param_0, bool param_1, cCcD_GObjInf* param_2, cCcD_GObjInf* param_3,
                        cCcD_Stts* param_4, cCcD_Stts* param_5, cCcD_GStts* param_6,
                        cCcD_GStts* param_7) {
    /* empty function */
}

/* 80265DFC-80265E00 0004+00 s=1 e=0 z=0  None .text
 * SetAtTgGObjInf__4cCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz
 */
void cCcS::SetAtTgGObjInf(bool param_0, bool param_1, cCcD_Obj* param_2, cCcD_Obj* param_3,
                          cCcD_GObjInf* param_4, cCcD_GObjInf* param_5, cCcD_Stts* param_6,
                          cCcD_Stts* param_7, cCcD_GStts* param_8, cCcD_GStts* param_9,
                          cXyz* param_10) {
    /* empty function */
}

/* 80265E00-80265E08 0008+00 s=1 e=0 z=0  None .text
 * ChkNoHitGAtTg__4cCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts */
bool cCcS::ChkNoHitGAtTg(cCcD_GObjInf const* param_0, cCcD_GObjInf const* param_1,
                         cCcD_GStts* param_2, cCcD_GStts* param_3) {
    return false;
}

/* 80265E08-80265E10 0008+00 s=1 e=0 z=0  None .text
 * ChkAtTgHitAfterCross__4cCcSFbbPC12cCcD_GObjInfPC12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts
 */
bool cCcS::ChkAtTgHitAfterCross(bool param_0, bool param_1, cCcD_GObjInf const* param_2,
                                cCcD_GObjInf const* param_3, cCcD_Stts* param_4, cCcD_Stts* param_5,
                                cCcD_GStts* param_6, cCcD_GStts* param_7) {
    return false;
}

/* 80265E10-80265E18 0008+00 s=1 e=0 z=0  None .text      ChkNoHitGCo__4cCcSFP8cCcD_ObjP8cCcD_Obj */
bool cCcS::ChkNoHitGCo(cCcD_Obj* param_0, cCcD_Obj* param_1) {
    return false;
}

/* 80265E18-80265E1C 0004+00 s=1 e=0 z=0  None .text      MoveAfterCheck__4cCcSFv */
void cCcS::MoveAfterCheck() {
    /* empty function */
}
