//
// Generated By: dol2asm
// Translation Unit: JKRFile
//

#include "JSystem/JKernel/JKRFile.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRFile {
    /* 802D9518 */ void read(void*, s32, s32);
};

//
// Forward References:
//

extern "C" void read__7JKRFileFPvll();

//
// External References:
//

extern "C" void VIWaitForRetrace();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* 802D9518-802D9584 006C+00 s=0 e=2 z=0  None .text      read__7JKRFileFPvll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRFile::read(void* param_0, s32 param_1, s32 param_2) {
    nofralloc
#include "asm/JSystem/JKernel/JKRFile/read__7JKRFileFPvll.s"
}
#pragma pop
