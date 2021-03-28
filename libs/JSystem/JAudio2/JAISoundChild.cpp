//
// Generated By: dol2asm
// Translation Unit: JAISoundChild
//

#include "JSystem/JAudio2/JAISoundChild.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASSoundParams {};

struct JASTrack {
    /* 802919F4 */ void assignExtBuffer(u32, JASSoundParams*);
};

struct JAISoundChild {
    /* 802A2AB0 */ void init();
    /* 802A2B28 */ void mixOut(JASTrack*);
    /* 802A2B7C */ void calc();
};

//
// Forward References:
//

extern "C" void init__13JAISoundChildFv();
extern "C" void mixOut__13JAISoundChildFP8JASTrack();
extern "C" void calc__13JAISoundChildFv();

//
// External References:
//

extern "C" void assignExtBuffer__8JASTrackFUlP14JASSoundParams();

//
// Declarations:
//

/* ############################################################################################## */
/* 804557D8-804557DC 0004+00 s=1 e=0 z=0  None .sdata2    @689 */
SECTION_SDATA2 static u32 lit_689 = 0x3F800000;

/* 804557DC-804557E0 0004+00 s=1 e=0 z=0  None .sdata2    @690 */
SECTION_SDATA2 static u8 lit_690[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804557E0-804557E8 0004+04 s=1 e=0 z=0  None .sdata2    @691 */
SECTION_SDATA2 static f32 lit_691[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 802A2AB0-802A2B28 0078+00 s=0 e=2 z=0  None .text      init__13JAISoundChildFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISoundChild::init() {
    nofralloc
#include "asm/JSystem/JAudio2/JAISoundChild/init__13JAISoundChildFv.s"
}
#pragma pop

/* 802A2B28-802A2B7C 0054+00 s=0 e=1 z=0  None .text      mixOut__13JAISoundChildFP8JASTrack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISoundChild::mixOut(JASTrack* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISoundChild/mixOut__13JAISoundChildFP8JASTrack.s"
}
#pragma pop

/* 802A2B7C-802A2C98 011C+00 s=0 e=2 z=0  None .text      calc__13JAISoundChildFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISoundChild::calc() {
    nofralloc
#include "asm/JSystem/JAudio2/JAISoundChild/calc__13JAISoundChildFv.s"
}
#pragma pop
