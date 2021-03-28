//
// Generated By: dol2asm
// Translation Unit: CARDRead
//

#include "dolphin/card/CARDRead.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __CARDSeek();
extern "C" static void ReadCallback();
extern "C" static void CARDReadAsync();
extern "C" void CARDRead();

//
// External References:
//

extern "C" extern u8 __CARDBlock[544];

extern "C" void DCInvalidateRange();
extern "C" void __CARDDefaultApiCallback();
extern "C" void __CARDSyncCallback();
extern "C" void __CARDGetControlBlock();
extern "C" void __CARDPutControlBlock();
extern "C" void __CARDSync();
extern "C" void __CARDRead();
extern "C" void __CARDGetFatBlock();
extern "C" void __CARDGetDirBlock();
extern "C" void __CARDIsReadable();
extern "C" extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 803584A0-80358658 01B8+00 s=1 e=1 z=0  None .text      __CARDSeek */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __CARDSeek() {
    nofralloc
#include "asm/dolphin/card/CARDRead/__CARDSeek.s"
}
#pragma pop

/* 80358658-80358788 0130+00 s=1 e=0 z=0  None .text      ReadCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void ReadCallback() {
    nofralloc
#include "asm/dolphin/card/CARDRead/ReadCallback.s"
}
#pragma pop

/* 80358788-803588CC 0144+00 s=1 e=0 z=0  None .text      CARDReadAsync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void CARDReadAsync() {
    nofralloc
#include "asm/dolphin/card/CARDRead/CARDReadAsync.s"
}
#pragma pop

/* 803588CC-80358914 0048+00 s=0 e=2 z=0  None .text      CARDRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void CARDRead() {
    nofralloc
#include "asm/dolphin/card/CARDRead/CARDRead.s"
}
#pragma pop
