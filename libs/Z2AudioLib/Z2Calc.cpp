//
// Generated By: dol2asm
// Translation Unit: Z2Calc
//

#include "Z2AudioLib/Z2Calc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Z2Calc {
    struct CurveSign {};

    struct FNoise1f {
        /* 802A9944 */ void setParam(f32, f32, f32);
        /* 802A9958 */ void tau(f32);
        /* 802A99A0 */ void calcNoise1f();
    };

    /* 802A968C */ void linearTransform(f32, f32, f32, f32, f32, bool);
    /* 802A96F4 */ void getParamByExp(f32, f32, f32, f32, f32, f32, Z2Calc::CurveSign);
    /* 802A9814 */ void getRandom(f32, f32, f32);
    /* 802A98D4 */ void getRandom_0_1();

    static f32 cEqualCSlope;
    static f32 cEqualPSlope;
};

//
// Forward References:
//

extern "C" void linearTransform__6Z2CalcFfffffb();
extern "C" void getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign();
extern "C" void getRandom__6Z2CalcFfff();
extern "C" void getRandom_0_1__6Z2CalcFv();
extern "C" void setParam__Q26Z2Calc8FNoise1fFfff();
extern "C" void tau__Q26Z2Calc8FNoise1fFf();
extern "C" void calcNoise1f__Q26Z2Calc8FNoise1fFv();
extern "C" f32 cEqualCSlope__6Z2Calc;
extern "C" f32 cEqualPSlope__6Z2Calc;

//
// External References:
//

extern "C" void __ct__Q25JMath13TRandom_fast_FUl();
extern "C" void exp();
extern "C" void pow();

//
// Declarations:
//

/* 802A968C-802A96F4 2A3FCC 0068+00 1/1 16/16 0/0 .text            linearTransform__6Z2CalcFfffffb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2Calc::linearTransform(f32 param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                                 bool param_5) {
    nofralloc
#include "asm/Z2AudioLib/Z2Calc/linearTransform__6Z2CalcFfffffb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455820-80455824 003E20 0004+00 0/0 1/1 0/0 .sdata2          cEqualCSlope__6Z2Calc */
SECTION_SDATA2 f32 Z2Calc::cEqualCSlope = 1.0f;

/* 80455824-80455828 003E24 0004+00 0/0 1/1 0/0 .sdata2          cEqualPSlope__6Z2Calc */
SECTION_SDATA2 f32 Z2Calc::cEqualPSlope = 0.5f;

/* 80455828-8045582C 003E28 0004+00 1/1 0/0 0/0 .sdata2          @380 */
SECTION_SDATA2 static u8 lit_380[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045582C-80455830 003E2C 0004+00 4/4 0/0 0/0 .sdata2          @381 */
SECTION_SDATA2 static f32 lit_381 = 1.0f;

/* 802A96F4-802A9814 2A4034 0120+00 0/0 29/29 0/0 .text
 * getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2Calc::getParamByExp(f32 param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                               f32 param_5, Z2Calc::CurveSign param_6) {
    nofralloc
#include "asm/Z2AudioLib/Z2Calc/getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455830-80455834 003E30 0004+00 1/1 0/0 0/0 .sdata2          @396 */
SECTION_SDATA2 static f32 lit_396 = 2.0f;

/* 80455834-80455838 003E34 0004+00 1/1 0/0 0/0 .sdata2          @397 */
SECTION_SDATA2 static f32 lit_397 = -2.0f;

/* 802A9814-802A98D4 2A4154 00C0+00 0/0 2/2 0/0 .text            getRandom__6Z2CalcFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2Calc::getRandom(f32 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2Calc/getRandom__6Z2CalcFfff.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451330-80451334 000830 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_80451330[4];

/* 80451334-80451338 000834 0004+00 1/1 0/0 0/0 .sbss            oRandom$401 */
static u8 oRandom[4];

/* 802A98D4-802A9944 2A4214 0070+00 1/1 1/1 0/0 .text            getRandom_0_1__6Z2CalcFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2Calc::getRandom_0_1() {
    nofralloc
#include "asm/Z2AudioLib/Z2Calc/getRandom_0_1__6Z2CalcFv.s"
}
#pragma pop

/* 802A9944-802A9958 2A4284 0014+00 0/0 1/1 0/0 .text            setParam__Q26Z2Calc8FNoise1fFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2Calc::FNoise1f::setParam(f32 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2Calc/setParam__Q26Z2Calc8FNoise1fFfff.s"
}
#pragma pop

/* 802A9958-802A99A0 2A4298 0048+00 1/1 0/0 0/0 .text            tau__Q26Z2Calc8FNoise1fFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2Calc::FNoise1f::tau(f32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2Calc/tau__Q26Z2Calc8FNoise1fFf.s"
}
#pragma pop

/* 802A99A0-802A9A34 2A42E0 0094+00 0/0 5/5 0/0 .text            calcNoise1f__Q26Z2Calc8FNoise1fFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2Calc::FNoise1f::calcNoise1f() {
    nofralloc
#include "asm/Z2AudioLib/Z2Calc/calcNoise1f__Q26Z2Calc8FNoise1fFv.s"
}
#pragma pop
