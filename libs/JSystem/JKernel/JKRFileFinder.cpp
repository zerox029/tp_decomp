//
// Generated By: dol2asm
// Translation Unit: JKRFileFinder
//

#include "JSystem/JKernel/JKRFileFinder.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRFileFinder {
    /* 802D4910 */ ~JKRFileFinder();
};

struct JKRDvdFinder {
    /* 802D4770 */ JKRDvdFinder(char const*);
    /* 802D47F4 */ ~JKRDvdFinder();
    /* 802D4874 */ void findNextFile();
};

struct JKRArchive {
    struct SDirEntry {};

    /* 802D5AC0 */ void getDirEntry(JKRArchive::SDirEntry*, u32) const;
};

struct JKRArcFinder {
    /* 802D4638 */ JKRArcFinder(JKRArchive*, s32, s32);
    /* 802D46C4 */ void findNextFile();
    /* 802D4958 */ ~JKRArcFinder();
};

//
// Forward References:
//

extern "C" void __ct__12JKRArcFinderFP10JKRArchivell();
extern "C" void findNextFile__12JKRArcFinderFv();
extern "C" void __ct__12JKRDvdFinderFPCc();
extern "C" void __dt__12JKRDvdFinderFv();
extern "C" void findNextFile__12JKRDvdFinderFv();
extern "C" void __dt__13JKRFileFinderFv();
extern "C" void __dt__12JKRArcFinderFv();

//
// External References:
//

void operator delete(void*);

extern "C" void __dl__FPv();
extern "C" void getDirEntry__10JKRArchiveCFPQ210JKRArchive9SDirEntryUl();
extern "C" void DVDOpenDir();
extern "C" void DVDReadDir();
extern "C" bool DVDCloseDir();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC208-803CC218 0010+00 s=2 e=0 z=0  None .data      __vt__12JKRDvdFinder */
SECTION_DATA static void* __vt__12JKRDvdFinder[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12JKRDvdFinderFv,
    (void*)findNextFile__12JKRDvdFinderFv,
};

/* 803CC218-803CC228 0010+00 s=2 e=0 z=0  None .data      __vt__12JKRArcFinder */
SECTION_DATA static void* __vt__12JKRArcFinder[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12JKRArcFinderFv,
    (void*)findNextFile__12JKRArcFinderFv,
};

/* 803CC228-803CC238 0010+00 s=5 e=0 z=0  None .data      __vt__13JKRFileFinder */
SECTION_DATA static void* __vt__13JKRFileFinder[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__13JKRFileFinderFv,
    (void*)NULL,
};

/* 802D4638-802D46C4 008C+00 s=0 e=1 z=0  None .text      __ct__12JKRArcFinderFP10JKRArchivell */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRArcFinder::JKRArcFinder(JKRArchive* param_0, s32 param_1, s32 param_2) {
    nofralloc
#include "asm/JSystem/JKernel/JKRFileFinder/__ct__12JKRArcFinderFP10JKRArchivell.s"
}
#pragma pop

/* 802D46C4-802D4770 00AC+00 s=1 e=0 z=0  None .text      findNextFile__12JKRArcFinderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRArcFinder::findNextFile() {
    nofralloc
#include "asm/JSystem/JKernel/JKRFileFinder/findNextFile__12JKRArcFinderFv.s"
}
#pragma pop

/* 802D4770-802D47F4 0084+00 s=0 e=1 z=0  None .text      __ct__12JKRDvdFinderFPCc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDvdFinder::JKRDvdFinder(char const* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRFileFinder/__ct__12JKRDvdFinderFPCc.s"
}
#pragma pop

/* 802D47F4-802D4874 0080+00 s=1 e=0 z=0  None .text      __dt__12JKRDvdFinderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDvdFinder::~JKRDvdFinder() {
    nofralloc
#include "asm/JSystem/JKernel/JKRFileFinder/__dt__12JKRDvdFinderFv.s"
}
#pragma pop

/* 802D4874-802D4910 009C+00 s=1 e=0 z=0  None .text      findNextFile__12JKRDvdFinderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDvdFinder::findNextFile() {
    nofralloc
#include "asm/JSystem/JKernel/JKRFileFinder/findNextFile__12JKRDvdFinderFv.s"
}
#pragma pop

/* 802D4910-802D4958 0048+00 s=1 e=0 z=0  None .text      __dt__13JKRFileFinderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRFileFinder::~JKRFileFinder() {
    nofralloc
#include "asm/JSystem/JKernel/JKRFileFinder/__dt__13JKRFileFinderFv.s"
}
#pragma pop

/* 802D4958-802D49B4 005C+00 s=1 e=0 z=0  None .text      __dt__12JKRArcFinderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRArcFinder::~JKRArcFinder() {
    nofralloc
#include "asm/JSystem/JKernel/JKRFileFinder/__dt__12JKRArcFinderFv.s"
}
#pragma pop
