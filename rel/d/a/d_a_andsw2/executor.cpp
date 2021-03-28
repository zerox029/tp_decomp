//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/d_a_andsw2/executor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void _prolog();
extern "C" void _epilog();
extern "C" void _unresolved();

//
// External References:
//

extern u8 const data_804D6AC0[4];
extern u8 const data_804D6AC4[4];

extern "C" void ModuleProlog();
extern "C" void ModuleEpilog();
extern "C" void ModuleUnresolved();
extern "C" void ModuleConstructorsX();
extern "C" void ModuleDestructorsX();
extern u8 const data_804D6AC0[4];
extern u8 const data_804D6AC4[4];

//
// Declarations:
//

/* 804D5D80-804D5DAC 002C+00 s=0 e=0 z=0  None .text      _prolog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/d_a_andsw2/executor/_prolog.s"
}
#pragma pop

/* 804D5DAC-804D5DD8 002C+00 s=0 e=0 z=0  None .text      _epilog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/d_a_andsw2/executor/_epilog.s"
}
#pragma pop

/* 804D5DD8-804D5DF8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/d_a_andsw2/executor/_unresolved.s"
}
#pragma pop
