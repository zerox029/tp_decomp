//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_method_iter
//

#include "f_pc/f_pc_method_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct node_list_class {};

struct node_class {};

//
// Forward References:
//

extern "C" void fpcMtdIt_Method__FP15node_list_classPFPv_i();

//
// External References:
//

extern "C" void cLsIt_Method__FP15node_list_classPFP10node_classPv_iPv();

//
// Declarations:
//

/* 80023764-80023788 01E0A4 0024+00 0/0 1/1 0/0 .text fpcMtdIt_Method__FP15node_list_classPFPv_i
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcMtdIt_Method(node_list_class* param_0, int (*param_1)(void*)) {
    nofralloc
#include "asm/f_pc/f_pc_method_iter/fpcMtdIt_Method__FP15node_list_classPFPv_i.s"
}
#pragma pop
