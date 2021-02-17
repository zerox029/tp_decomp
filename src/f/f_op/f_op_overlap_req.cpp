/* f_op_overlap_req.cpp autogenerated by split.py v0.4 at 2021-02-15 20:24:53.163616 */

#include "f/f_op/f_op_overlap_req.h"
#include "f/f_pc/f_pc_executor.h"
#include "f/f_pc/f_pc_manager.h"
#include "global.h"

// additional symbols needed for f_op_overlap_req.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:24:53.163652
extern "C" {
void _restgpr_29(void);
void _savegpr_29(void);
void cReq_Command__FP18request_base_classUc(void);
void cReq_Create__FP18request_base_classUc(void);
void cReq_Done__FP18request_base_class(void);
void cReq_Is_Done__FP18request_base_class(void);
void fopOvlpReq_Cancel__FP21overlap_request_class(void);
void fopOvlpReq_Is_PeektimeLimit(void);
void fopOvlpReq_OverlapClr__FP21overlap_request_class(void);
void fopOvlpReq_Request__FP21overlap_request_classsUs(void);
void fopOvlpReq_Handler__FP21overlap_request_class(void);
void fopOvlpReq_phase_Done__FP21overlap_request_class(void);
void fopOvlpReq_SetPeektime__FP21overlap_request_classUs(void);
void fopOvlpReq_Is_PeektimeLimit__FP21overlap_request_class(void);
void fopOvlpReq_SetPeektime(void);
void fopOvlpReq_phase_Done(void);
void fpcSCtRq_Request(void);
void func_8001E748(void);
void func_8001E794(void);
void func_8001E7E4(void);
void func_8001E854(void);
void func_8001E8A4(void);
void func_8001E904(void);
}

// additional symbols needed for f_op_overlap_req.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:24:53.163658
extern u8 lbl_803A3890;

int fopOvlpReq_phase_Done(overlap_request_class* pOvlpReq) {
    if (fpcM_Delete(pOvlpReq->field_0x20) == 1) {
        pOvlpReq->field_0x20 = 0;
        pOvlpReq->field_0x4 = 0;
        pOvlpReq->field_0x6 = 0;
        pOvlpReq->field_0x8 = 0;
        pOvlpReq->field_0xc = 0;
        return 2;
    }
    return 0;
}

// return line is wrong
#ifdef NONMATCHING
s16 fopOvlpReq_phase_IsDone(overlap_request_class* param_1) {
    cReq_Done((request_base_class*)param_1);
    param_1->field_0x2--;
    return ((int)param_1->field_0x2 | ~-(int)param_1->field_0x2) >> 0x1F & 2;
}
#else
asm void fopOvlpReq_phase_IsDone(overlap_request_class*) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001E748.s"
}
#endif

int fopOvlpReq_phase_IsWaitOfFadeout(overlap_request_class* pOvlpReq) {
    if (cReq_Is_Done((request_base_class*)(pOvlpReq->field_0x20 + 0xC4))) {
        pOvlpReq->field_0x8 = 0;
        return 2;
    }
    return 0;
}

int fopOvlpReq_phase_WaitOfFadeout(overlap_request_class* pOvlpReq) {
    if (pOvlpReq->field_0x6) {
        pOvlpReq->field_0x6--;
    }

    if (((u8)(pOvlpReq->field_0x0 & 0x3F)) == 2 && !pOvlpReq->field_0x6) {
        cReq_Command((request_base_class*)(pOvlpReq->field_0x20 + 0xC4), 2);
        return 2;
    }

    pOvlpReq->field_0x8 = 1;
    return 0;
}

int fopOvlpReq_phase_IsComplete(overlap_request_class* pOvlpReq) {
    if (cReq_Is_Done((request_base_class*)(pOvlpReq->field_0x20 + 0xC4))) {
        cReq_Done((request_base_class*)pOvlpReq);
        return 2;
    }
    return 0;
}

int fopOvlpReq_phase_IsCreated(overlap_request_class* pOvlpReq) {
    if (fpcM_IsCreating(pOvlpReq->field_0x14) == 0) {
        base_process_class* pBaseProc = fpcEx_SearchByID(pOvlpReq->field_0x14);
        if (!pBaseProc) {
            return 5;
        }
        pOvlpReq->field_0x20 = (u8*)pBaseProc;
        return 2;
    }
    return 0;
}

asm void fopOvlpReq_phase_Create(overlap_request_class*) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001E904.s"
}

asm request_base_class* fopOvlpReq_Request(overlap_request_class*, s16, u16) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001E954.s"
}

asm int fopOvlpReq_Handler(overlap_request_class*) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001E9F0.s"
}

asm int fopOvlpReq_Cancel(overlap_request_class*) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001EA88.s"
}

asm void fopOvlpReq_Is_PeektimeLimit(overlap_request_class*) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001EAB4.s"
}

asm void fopOvlpReq_SetPeektime(overlap_request_class*, u16) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001EAC4.s"
}

asm int fopOvlpReq_OverlapClr(overlap_request_class*) {
    nofralloc
#include "f/f_op/f_op_overlap_req/asm/func_8001EAD8.s"
}