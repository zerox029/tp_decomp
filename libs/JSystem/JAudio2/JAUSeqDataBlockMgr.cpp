//
// Generated By: dol2asm
// Translation Unit: JAUSeqDataBlockMgr
//

#include "JSystem/JAudio2/JAUSeqDataBlockMgr.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
};

struct JSUPtrList {
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

template <typename A0>
struct JSULink {};
/* JSULink<JAUSeqDataBlock> */
struct JSULink__template1 {};

struct JKRArchive {};

struct JAISoundID {};

struct JAUSeqDataBlock {
    /* 802A68F4 */ JAUSeqDataBlock();
};

struct JAUSeqDataBlocks {
    /* 802A6928 */ void getSeqData(JAISoundID);
    /* 802A6974 */ void seekFreeBlock(u32);
    /* 802A69D8 */ void append(JSULink<JAUSeqDataBlock>*);
    /* 802A69F8 */ void remove(JSULink<JAUSeqDataBlock>*);
    /* 802A6A18 */ void hasFailedBlock(JAISoundID);
};

struct JAISeqDataUser {};

struct JAISeqData {};

struct JAUDynamicSeqDataBlocks {
    /* 802A6A58 */ JAUDynamicSeqDataBlocks();
    /* 802A6AA0 */ void setSeqDataArchive(JKRArchive*);
    /* 802A6AA8 */ void getSeqData(JAISoundID, JAISeqDataUser*, JAISeqData*, bool);
    /* 802A6B8C */ void appendDynamicSeqDataBlock(JAUSeqDataBlock*);
    /* 802A6C18 */ void loadDynamicSeq(JAISoundID, bool, JAISeqDataUser*);
    /* 802A6D48 */ void releaseIdleDynamicSeqDataBlock(JAISeqDataUser*);
    /* 802A6E00 */ void releaseIdleDynamicSeqDataBlock_(JAISeqDataUser*, u32);
    /* 802A6EDC */ void rearrangeLoadingSeqs_();
};

struct JASResArcLoader {
    /* 80290BD0 */ void getResSize(JKRArchive const*, u16);
    /* 80290D18 */ void loadResourceAsync(JKRArchive*, u16, u8*, u32, void (*)(u32, u32), u32);
};

//
// Forward References:
//

static void JAUDynamicSeqDataBlocks_receiveLoaded_(u32, u32);

extern "C" void __ct__15JAUSeqDataBlockFv();
extern "C" void getSeqData__16JAUSeqDataBlocksF10JAISoundID();
extern "C" void seekFreeBlock__16JAUSeqDataBlocksFUl();
extern "C" void func_802A69D8();
extern "C" void func_802A69F8();
extern "C" void hasFailedBlock__16JAUSeqDataBlocksF10JAISoundID();
extern "C" void __ct__23JAUDynamicSeqDataBlocksFv();
extern "C" void setSeqDataArchive__23JAUDynamicSeqDataBlocksFP10JKRArchive();
extern "C" void getSeqData__23JAUDynamicSeqDataBlocksF10JAISoundIDP14JAISeqDataUserP10JAISeqDatab();
extern "C" void appendDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP15JAUSeqDataBlock();
extern "C" static void JAUDynamicSeqDataBlocks_receiveLoaded___FUlUl();
extern "C" void loadDynamicSeq__23JAUDynamicSeqDataBlocksF10JAISoundIDbP14JAISeqDataUser();
extern "C" void releaseIdleDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP14JAISeqDataUser();
extern "C" void releaseIdleDynamicSeqDataBlock___23JAUDynamicSeqDataBlocksFP14JAISeqDataUserUl();
extern "C" void rearrangeLoadingSeqs___23JAUDynamicSeqDataBlocksFv();

//
// External References:
//

extern "C" extern u8 data_80450B50[4];

extern "C" void getResSize__15JASResArcLoaderFPC10JKRArchiveUs();
extern "C" void loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern u8 data_80450B50[4];

//
// Declarations:
//

/* 802A68F4-802A6928 0034+00 s=0 e=2 z=0  None .text      __ct__15JAUSeqDataBlockFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSeqDataBlock::JAUSeqDataBlock() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/__ct__15JAUSeqDataBlockFv.s"
}
#pragma pop

/* 802A6928-802A6974 004C+00 s=1 e=0 z=0  None .text getSeqData__16JAUSeqDataBlocksF10JAISoundID
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSeqDataBlocks::getSeqData(JAISoundID param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/getSeqData__16JAUSeqDataBlocksF10JAISoundID.s"
}
#pragma pop

/* 802A6974-802A69D8 0064+00 s=1 e=0 z=0  None .text      seekFreeBlock__16JAUSeqDataBlocksFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSeqDataBlocks::seekFreeBlock(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/seekFreeBlock__16JAUSeqDataBlocksFUl.s"
}
#pragma pop

/* 802A69D8-802A69F8 0020+00 s=5 e=0 z=0  None .text
 * append__16JAUSeqDataBlocksFP26JSULink<15JAUSeqDataBlock>     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSeqDataBlocks::append(JSULink<JAUSeqDataBlock>* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/func_802A69D8.s"
}
#pragma pop

/* 802A69F8-802A6A18 0020+00 s=4 e=0 z=0  None .text
 * remove__16JAUSeqDataBlocksFP26JSULink<15JAUSeqDataBlock>     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSeqDataBlocks::remove(JSULink<JAUSeqDataBlock>* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/func_802A69F8.s"
}
#pragma pop

/* 802A6A18-802A6A58 0040+00 s=1 e=0 z=0  None .text
 * hasFailedBlock__16JAUSeqDataBlocksF10JAISoundID              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSeqDataBlocks::hasFailedBlock(JAISoundID param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/hasFailedBlock__16JAUSeqDataBlocksF10JAISoundID.s"
}
#pragma pop

/* 802A6A58-802A6AA0 0048+00 s=0 e=2 z=0  None .text      __ct__23JAUDynamicSeqDataBlocksFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUDynamicSeqDataBlocks::JAUDynamicSeqDataBlocks() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/__ct__23JAUDynamicSeqDataBlocksFv.s"
}
#pragma pop

/* 802A6AA0-802A6AA8 0008+00 s=0 e=2 z=0  None .text
 * setSeqDataArchive__23JAUDynamicSeqDataBlocksFP10JKRArchive   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUDynamicSeqDataBlocks::setSeqDataArchive(JKRArchive* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/setSeqDataArchive__23JAUDynamicSeqDataBlocksFP10JKRArchive.s"
}
#pragma pop

/* 802A6AA8-802A6B8C 00E4+00 s=0 e=1 z=0  None .text
 * getSeqData__23JAUDynamicSeqDataBlocksF10JAISoundIDP14JAISeqDataUserP10JAISeqDatab */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUDynamicSeqDataBlocks::getSeqData(JAISoundID param_0, JAISeqDataUser* param_1,
                                             JAISeqData* param_2, bool param_3) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/func_802A6AA8.s"
}
#pragma pop

/* 802A6B8C-802A6BF4 0068+00 s=0 e=2 z=0  None .text
 * appendDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP15JAUSeqDataBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUDynamicSeqDataBlocks::appendDynamicSeqDataBlock(JAUSeqDataBlock* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/appendDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP15JAUSeqDataBlock.s"
}
#pragma pop

/* 802A6BF4-802A6C18 0024+00 s=1 e=0 z=0  None .text JAUDynamicSeqDataBlocks_receiveLoaded___FUlUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JAUDynamicSeqDataBlocks_receiveLoaded_(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/JAUDynamicSeqDataBlocks_receiveLoaded___FUlUl.s"
}
#pragma pop

/* 802A6C18-802A6D48 0130+00 s=1 e=2 z=0  None .text
 * loadDynamicSeq__23JAUDynamicSeqDataBlocksF10JAISoundIDbP14JAISeqDataUser */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUDynamicSeqDataBlocks::loadDynamicSeq(JAISoundID param_0, bool param_1,
                                                 JAISeqDataUser* param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/loadDynamicSeq__23JAUDynamicSeqDataBlocksF10JAISoundIDbP14JAISeqDataUser.s"
}
#pragma pop

/* 802A6D48-802A6E00 00B8+00 s=0 e=1 z=0  None .text
 * releaseIdleDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP14JAISeqDataUser */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUDynamicSeqDataBlocks::releaseIdleDynamicSeqDataBlock(JAISeqDataUser* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/releaseIdleDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP14JAISeqDataUser.s"
}
#pragma pop

/* 802A6E00-802A6EDC 00DC+00 s=1 e=0 z=0  None .text
 * releaseIdleDynamicSeqDataBlock___23JAUDynamicSeqDataBlocksFP14JAISeqDataUserUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUDynamicSeqDataBlocks::releaseIdleDynamicSeqDataBlock_(JAISeqDataUser* param_0,
                                                                  u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/releaseIdleDynamicSeqDataBlock___23JAUDynamicSeqDataBlocksFP14JAISeqDataUserUl.s"
}
#pragma pop

/* 802A6EDC-802A6F70 0094+00 s=4 e=0 z=0  None .text
 * rearrangeLoadingSeqs___23JAUDynamicSeqDataBlocksFv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUDynamicSeqDataBlocks::rearrangeLoadingSeqs_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSeqDataBlockMgr/rearrangeLoadingSeqs___23JAUDynamicSeqDataBlocksFv.s"
}
#pragma pop
