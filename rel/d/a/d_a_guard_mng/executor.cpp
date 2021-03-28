//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/d_a_guard_mng/executor.h"
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

extern u8 const data_80837DDC[4];
extern u8 const data_80837DE0[4];

extern "C" void ModuleProlog();
extern "C" void ModuleEpilog();
extern "C" void ModuleUnresolved();
extern "C" void ModuleConstructorsX();
extern "C" void ModuleDestructorsX();
extern u8 const data_80837DDC[4];
extern u8 const data_80837DE0[4];

//
// Declarations:
//

/* 80837AA0-80837ACC 002C+00 s=0 e=0 z=0  None .text      _prolog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/d_a_guard_mng/executor/_prolog.s"
}
#pragma pop

/* 80837ACC-80837AF8 002C+00 s=0 e=0 z=0  None .text      _epilog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/d_a_guard_mng/executor/_epilog.s"
}
#pragma pop

/* 80837AF8-80837B18 0020+00 s=0 e=0 z=0  None .text      _unresolved */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/d_a_guard_mng/executor/_unresolved.s"
}
#pragma pop
