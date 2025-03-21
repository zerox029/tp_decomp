/**
 * @file d_a_obj_swBallA.cpp
 * 
*/

#include "d/actor/d_a_obj_swBallA.h"
#include "d/actor/d_a_player.h"
#include "d/actor/d_a_obj_carry.h"
#include "d/d_com_inf_game.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "dol2asm.h"
#include "d/d_lib.h"

//
// Forward References:
//

extern "C" static void s_ball_sub__FPvPv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void checkArea_sub__14daObjSwBallA_cFP10fopAc_ac_c();
extern "C" void search_ball__14daObjSwBallA_cFv();
extern "C" void initBaseMtx__14daObjSwBallA_cFv();
extern "C" void setBaseMtx__14daObjSwBallA_cFv();
extern "C" void Create__14daObjSwBallA_cFv();
extern "C" void CreateHeap__14daObjSwBallA_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create__14daObjSwBallA_cFv();
extern "C" void execute__14daObjSwBallA_cFv();
extern "C" void actionRun__14daObjSwBallA_cFv();
extern "C" void actionStop__14daObjSwBallA_cFv();
extern "C" void PutCrrPos__14daObjSwBallA_cFv();
extern "C" void draw__14daObjSwBallA_cFv();
extern "C" void _delete__14daObjSwBallA_cFv();
extern "C" static void daObjSwBallA_Draw__FP14daObjSwBallA_c();
extern "C" static void daObjSwBallA_Execute__FP14daObjSwBallA_c();
extern "C" static void daObjSwBallA_Delete__FP14daObjSwBallA_c();
extern "C" static void daObjSwBallA_Create__FP10fopAc_ac_c();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__14daObjSwBallA_cFv();
extern "C" static void func_80CF43D4();
extern "C" extern char const* const d_a_obj_swBallA__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_btkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_28();
extern "C" void _restgpr_22();
extern "C" void _restgpr_28();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CF4508-80CF4528 000000 0020+00 2/2 0/0 0/0 .bss             l_target_info */
static daObjCarry_c* l_target_info[8];

/* 80CF4528-80CF452C 000020 0004+00 2/2 0/0 0/0 .bss             l_target_info_count */
static int l_target_info_count;

/* 80CF32F8-80CF3374 000078 007C+00 1/1 0/0 0/0 .text            s_ball_sub__FPvPv */
static void* s_ball_sub(void* param_1, void* param_2) {
    if (fopAcM_IsActor(param_1) && fopAcM_GetName(param_1) == PROC_Obj_Carry &&
        ((daObjCarry_c*)param_1)->getType() == daObjCarry_c::TYPE_LV8_BALL)
    {
        if (l_target_info_count < 8) {
            l_target_info[l_target_info_count] = (daObjCarry_c*)param_1;
            l_target_info_count++;
        }
    }
    return NULL;
}

/* 80CF3374-80CF3394 0000F4 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
static int CheckCreateHeap(fopAc_ac_c* param_0) {
    return ((daObjSwBallA_c*)param_0)->CreateHeap();
}

/* ############################################################################################## */
/* 80CF43E4-80CF43E8 000000 0004+00 4/4 0/0 0/0 .rodata          l_color */
SECTION_RODATA static GXColor const l_color = {0x3,0x96,0xFF,0xFF};
COMPILER_STRIP_GATE(0x80CF43E4, &l_color);

/* 80CF43E8-80CF43EC 000004 0004+00 0/2 0/0 0/0 .rodata          @3730 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3730 = 10.0f;
COMPILER_STRIP_GATE(0x80CF43E8, &lit_3730);
#pragma pop

/* 80CF43EC-80CF43F0 000008 0004+00 0/2 0/0 0/0 .rodata          @3731 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3731 = 100.0f;
COMPILER_STRIP_GATE(0x80CF43EC, &lit_3731);
#pragma pop

/* 80CF43F0-80CF43F4 00000C 0004+00 0/2 0/0 0/0 .rodata          @3732 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3732 = -100.0f;
COMPILER_STRIP_GATE(0x80CF43F0, &lit_3732);
#pragma pop

/* 80CF43F4-80CF43FC 000010 0004+04 2/5 0/0 0/0 .rodata          @3733 */
SECTION_RODATA static u8 const lit_3733[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CF43F4, &lit_3733);

/* 80CF3394-80CF34E4 000114 0150+00 1/1 0/0 0/0 .text
 * checkArea_sub__14daObjSwBallA_cFP10fopAc_ac_c                */
int daObjSwBallA_c::checkArea_sub(fopAc_ac_c* param_1) {
    if (param_1 == NULL) {
        return 0;
    }
    if (getType() == 0) {
        if (param_1->current.pos.y >= current.pos.y - 10.0f &&
            param_1->current.pos.y < current.pos.y + scale.y * 100.0f &&
            fopAcM_searchActorDistanceXZ(this, param_1) < scale.x * 100.0f)
        {
            return 1;
        }
    } else {
        if (getType() == 1) {
            cXyz cStack_1c(scale.x * -100.0f, 0.0f, scale.z * -100.0f);
            cXyz cStack_28(scale.x * 100.0f, scale.y * 100.0f, scale.z * 100.0f);
            cStack_1c.y += current.pos.y - 10.0f;
            cStack_28.y += current.pos.y;
            if (param_1->current.pos.y >= cStack_1c.y && param_1->current.pos.y < cStack_28.y &&
                dLib_checkActorInRectangle(param_1, this, &cStack_1c, &cStack_28))
            {
                return 1;
            }
        }
    }
    return 0;
}


/* 80CF34E4-80CF3610 000264 012C+00 1/1 0/0 0/0 .text            search_ball__14daObjSwBallA_cFv */
void daObjSwBallA_c::search_ball() {
    l_target_info_count = 0;
    for (int i = 0; i < 8; i++) {
        l_target_info[i] = NULL;
    }
    fpcM_Search(s_ball_sub, this);
    for (int i = 0; i < l_target_info_count; i++) {
        if (l_target_info[i] != 0) {
            fpc_ProcID id = fopAcM_GetID(l_target_info[i]);
            if (id != -1) {
                int idIndex = -1;
                for (int j = 0; j < 8; j++) {
                    if (id == field_0x58c[j]) {
                        idIndex = j;
                        break;
                    }
                }
                if (idIndex < 0) {
                    for (int j = 0; j < 8; j++) {
                        if (field_0x58c[j] == -1) {
                            field_0x58c[j] = id;
                            break;
                        }
                    }
                }
            }
        } 
    }
}

/* 80CF3610-80CF3630 000390 0020+00 1/1 0/0 0/0 .text            initBaseMtx__14daObjSwBallA_cFv */
void daObjSwBallA_c::initBaseMtx() {
    setBaseMtx();
}

/* 80CF3630-80CF3694 0003B0 0064+00 1/1 0/0 0/0 .text            setBaseMtx__14daObjSwBallA_cFv */
void daObjSwBallA_c::setBaseMtx() {
    mDoMtx_stack_c::transS(current.pos.x, current.pos.y, current.pos.z);
    mDoMtx_stack_c::YrotM(shape_angle.y);
    mModel->setBaseTRMtx(mDoMtx_stack_c::get());
}

/* ############################################################################################## */
/* 80CF43FC-80CF4404 000018 0008+00 1/1 0/0 0/0 .rodata          @3884 */
SECTION_RODATA static u8 const lit_3884[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CF43FC, &lit_3884);

/* 80CF3694-80CF37FC 000414 0168+00 1/1 0/0 0/0 .text            Create__14daObjSwBallA_cFv */
int daObjSwBallA_c::Create() {
    initBaseMtx();
    fopAcM_SetMtx(this, mModel->getBaseTRMtx());
    J3DJoint* joint = mModel->getModelData()->getJointNodePointer(0);
    fopAcM_setCullSizeBox(this,
        joint->getMin()->x, joint->getMin()->y, joint->getMin()->z,
        joint->getMax()->x, joint->getMax()->y, joint->getMax()->z);
    for (int i = 0; i < 8; i++) {
        field_0x58c[i] = -1;
    }
    field_0x5c0 = -1;
    if (fopAcM_isSwitch(this, getSwbit2())) {
        field_0x588->setFrame(field_0x588->getEndFrame());
        field_0x5ae = 2;
    } else {
        fopAcM_offSwitch(this, getSwbit());
        field_0x588->setFrame(0.0f);
        field_0x5ae = 0;
    }
    GXColor* color = mModel->getModelData()->getMaterialNodePointer(0)->getTevKColor(1);
    color->r = l_color.r;
    color->g = l_color.g;
    color->b = l_color.b;
    return 1;
}


/* ############################################################################################## */
/* 80CF4404-80CF4408 000020 0004+00 2/3 0/0 0/0 .rodata          @3918 */
SECTION_RODATA static f32 const lit_3918 = 1.0f;
COMPILER_STRIP_GATE(0x80CF4404, &lit_3918);

/* 80CF4410-80CF4410 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CF4410 = "P_LBswA";
#pragma pop

/* 80CF4418-80CF4424 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CF4424-80CF4438 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80CF4438-80CF443C -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static char* l_arcName = (char*)&d_a_obj_swBallA__stringBase0;

/* 80CF443C-80CF4448 -00001 000C+00 0/1 0/0 0/0 .data            @3956 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3956[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionRun__14daObjSwBallA_cFv,
};
#pragma pop

/* 80CF4448-80CF4454 -00001 000C+00 0/1 0/0 0/0 .data            @3957 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3957[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionStop__14daObjSwBallA_cFv,
};
#pragma pop

/* 80CF4454-80CF446C 00003C 0018+00 0/1 0/0 0/0 .data            l_func$3955 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CF446C-80CF448C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjSwBallA_Method */
static actor_method_class l_daObjSwBallA_Method = {
    (process_method_func)daObjSwBallA_Create__FP10fopAc_ac_c,
    (process_method_func)daObjSwBallA_Delete__FP14daObjSwBallA_c,
    (process_method_func)daObjSwBallA_Execute__FP14daObjSwBallA_c,
    0,
    (process_method_func)daObjSwBallA_Draw__FP14daObjSwBallA_c,
};

/* 80CF448C-80CF44BC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_SwBallA */
extern actor_process_profile_definition g_profile_Obj_SwBallA = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_SwBallA,       // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjSwBallA_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  571,                    // mPriority
  &l_daObjSwBallA_Method, // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80CF44BC-80CF44E0 0000A4 0024+00 2/2 0/0 0/0 .data            __vt__14daObjSwBallA_c */
SECTION_DATA extern void* __vt__14daObjSwBallA_c[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CF43D4,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)__dt__14daObjSwBallA_cFv,
};

/* 80CF44E0-80CF44F8 0000C8 0018+00 3/3 0/0 0/0 .data            __vt__17dEvLib_callback_c */
SECTION_DATA extern void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80CF44F8-80CF4504 0000E0 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CF37FC-80CF3928 00057C 012C+00 1/1 0/0 0/0 .text            CreateHeap__14daObjSwBallA_cFv */
int daObjSwBallA_c::CreateHeap() {
    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(l_arcName, 4);
    JUT_ASSERT(381, modelData != 0);
    mModel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000284);
    if (mModel == 0) {
        return 0;
    }
    J3DAnmTextureSRTKey* pbtk = (J3DAnmTextureSRTKey*)dComIfG_getObjectRes(l_arcName, 7);
    JUT_ASSERT(381, pbtk != 0);
    field_0x588 = new mDoExt_btkAnm();
    if (field_0x588 == NULL || field_0x588->init(modelData, pbtk, 1, 0, 1.0f, 0, -1) == 0) {
        return 0;
    }
    field_0x588->setPlaySpeed(0.0f);
    return 1;
}


/* 80CF3928-80CF3970 0006A8 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80CF3970-80CF3A90 0006F0 0120+00 1/1 0/0 0/0 .text            create__14daObjSwBallA_cFv */
// NONMATCHING
int daObjSwBallA_c::create() {
    fopAcM_SetupActor(this, daObjSwBallA_c);
    if (field_0x5c4 == 0) {
        field_0x5c4 = 1;
        field_0x5c6 = home.angle.x;
        field_0x5c8 = home.angle.z;
        shape_angle.x = 0;
        current.angle.x = 0;
        home.angle.x = 0;
        shape_angle.z = 0;
        current.angle.z = 0;
        home.angle.z = 0;
    }
    int res = dComIfG_resLoad(&field_0x57c, l_arcName);
    if (res == cPhs_COMPLEATE_e) {
        if (fopAcM_entrySolidHeap(this, CheckCreateHeap, 0x940) == 0) {
            return cPhs_ERROR_e;
        } else if (Create() == 0) {
            return cPhs_ERROR_e;
        }
    }
    return res;
}

/* ############################################################################################## */
/* 80CF452C-80CF4530 000024 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80CF452C[4];

/* 80CF3A90-80CF3B40 000810 00B0+00 1/1 0/0 0/0 .text            execute__14daObjSwBallA_cFv */
int daObjSwBallA_c::execute() {
    typedef void (daObjSwBallA_c::*ballfunc)();
    static ballfunc l_func[2] = {&daObjSwBallA_c::actionRun, &daObjSwBallA_c::actionStop};
    (this->*l_func[field_0x5ad])();
    eventUpdate();
    field_0x588->play();
    return 1;
}


/* ############################################################################################## */
/* 80CF4408-80CF440C 000024 0004+00 1/1 0/0 0/0 .rodata          @4032 */
SECTION_RODATA static f32 const lit_4032 = -1.0f;
COMPILER_STRIP_GATE(0x80CF4408, &lit_4032);

/* 80CF3B40-80CF3D80 0008C0 0240+00 1/0 0/0 0/0 .text            actionRun__14daObjSwBallA_cFv */
void daObjSwBallA_c::actionRun() {
    u32 iVar4 = field_0x5c0;
    search_ball();
    PutCrrPos();
    switch (field_0x5ae) {
    case 0:
        if (iVar4 == -1 && field_0x5c0 != -1) {
            fopAcM_seStart(this, Z2SE_OBJ_L8_L_BALL_SW_ON, 0);
            field_0x588->setPlaySpeed(1.0f);
            field_0x5ae = 1;
        }
        break;
    case 1:
        if (field_0x5c0 == -1) {
            fopAcM_seStart(this, Z2SE_OBJ_L8_L_BALL_SW_OFF, 0);
            field_0x588->setPlaySpeed(-1.0f);
            fopAcM_offSwitch(this, getSwbit());
            field_0x5ae = 0;
        } else {
            if (field_0x588->play() != 0) {
                fopAcM_onSwitch(this, getSwbit());
                if (getEvent() != 0xff) {
                    orderEvent(getEvent(), 0xff, 1);
                }
                if (getArg0() == 1) {
                    field_0x5ae = 2;
                }
            }
            fopAcM_seStartLevel(this, Z2SE_OBJ_L8_L_BALL_SW, 0);
        }
        break;
    }
}


/* 80CF3D80-80CF3D84 000B00 0004+00 1/0 0/0 0/0 .text            actionStop__14daObjSwBallA_cFv */
void daObjSwBallA_c::actionStop() {
    /* empty function */
}

/* ############################################################################################## */
/* 80CF440C-80CF4410 000028 0004+00 0/1 0/0 0/0 .rodata          @4122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4122 = 300.0f;
COMPILER_STRIP_GATE(0x80CF440C, &lit_4122);
#pragma pop

/* 80CF3D84-80CF406C 000B04 02E8+00 1/1 0/0 0/0 .text            PutCrrPos__14daObjSwBallA_cFv */
void daObjSwBallA_c::PutCrrPos() {
    daPy_py_c* player = daPy_getPlayerActorClass();
    s16 sVar5 = cLib_targetAngleY(&player->current.pos, &current.pos) - player->shape_angle.y;
    if (fopAcM_searchPlayerDistanceXZ(this) < 300.0f && sVar5 < 0x4000) {
        daObjCarry_c* carryObj = (daObjCarry_c*)fopAcM_SearchByID(player->getGrabActorID());
        if (carryObj != NULL &&
            fopAcM_IsActor(carryObj)
                && fopAcM_GetName(carryObj) == PROC_Obj_Carry &&
              carryObj->getType() == daObjCarry_c::TYPE_LV8_BALL)
        {
            player->setForcePutPos(current.pos);
        }
    }
    daObjCarry_c* carryObj;
    for (u8 i = 0; i < 8; i++) {
        bool isArea = false;
        u8 carryNow = 0;
        u8 hookCarryNow = 0;
        if (field_0x58c[i] != -1) {
            carryObj = (daObjCarry_c*)fopAcM_SearchByID(field_0x58c[i]);
            isArea = checkArea_sub(carryObj);
            carryNow = fopAcM_checkCarryNow(carryObj) >> 13;
            hookCarryNow = fopAcM_checkHookCarryNow(carryObj) >> 20;
            if (field_0x5c0 == -1 || field_0x5c0 == field_0x58c[i]) {
                switch(field_0x5b7[i]) {
                case 0:
                    if ((isArea && ((carryNow == 0 && checkFlag(i, 1)) ||
                                        (hookCarryNow == 0 && checkFlag(i, 4)))) ||
                        (isArea && !checkFlag(i, 2) && carryNow == 0 && hookCarryNow == 0))
                    {
                        carryObj->startCtrl();
                        field_0x5c0 = field_0x58c[i];
                        field_0x5b7[i] = 1;
                    } else {
                        if (!isArea) {
                            field_0x5c0 = 0xffffffff;
                        }
                    }
                    break;
                case 1:
                    if (isArea != 0 && carryNow == 0 && hookCarryNow == 0) {
                        cLib_chaseF(&carryObj->current.pos.x, current.pos.x,
                                                 10.0f);
                        cLib_chaseF(&carryObj->current.pos.z, current.pos.z,
                                                 10.0f);
                        if (fopAcM_searchActorDistanceXZ(this, carryObj) == 0.0f) {
                            carryObj->endCtrl();
                            field_0x5b7[i] = 0;
                        }
                    } else {
                        carryObj->endCtrl();
                        field_0x5b7[i] = 0;
                        field_0x5c0 = 0xffffffff;
                    }
                    break;
                }
            }
        }
        clrFlag(i);
        if (isArea) {
            onFlag(i, 2);
        }
        if (carryNow) {
            onFlag(i, 1);
        }
        if (hookCarryNow) {
            onFlag(i, 4);
        }
    }
}


/* 80CF406C-80CF41F4 000DEC 0188+00 1/1 0/0 0/0 .text            draw__14daObjSwBallA_cFv */
int daObjSwBallA_c::draw() {
    g_env_light.settingTevStruct(0, &current.pos, &tevStr);
    g_env_light.setLightTevColorType_MAJI(mModel, &tevStr);
    dComIfGd_setListDarkBG();
    J3DMaterial* material = mModel->getModelData()->getMaterialNodePointer(0);
    if (material->getTexGenBlock()->getTexMtx(1) != NULL) {
        J3DTexMtxInfo* texMtxInfo = &material->getTexGenBlock()->getTexMtx(1)->getTexMtxInfo();
        if (texMtxInfo != NULL) {
            Mtx auStack_48;
            C_MTXLightOrtho(auStack_48, 100.0f, -100.0f, -100.0f, 100.0f, 1.0f, 1.0f, 0.0f, 0.0f);
            mDoMtx_stack_c::XrotS(0x4000);
            mDoMtx_stack_c::transM(-current.pos.x, -current.pos.y, -current.pos.z);
            cMtx_concat(auStack_48, mDoMtx_stack_c::get(), texMtxInfo->mEffectMtx);
        }
    }
    field_0x588->entry(mModel->getModelData());
    mDoExt_modelUpdateDL(mModel);
    mDoExt_btkAnmRemove(mModel->getModelData());
    dComIfGd_setList();
    return 1;
}


/* 80CF41F4-80CF4274 000F74 0080+00 1/1 0/0 0/0 .text            _delete__14daObjSwBallA_cFv */
int daObjSwBallA_c::_delete() {
    if (!fopAcM_isSwitch(this, getSwbit2())) {
        fopAcM_offSwitch(this, getSwbit());
    }
    dComIfG_resDelete(&field_0x57c, l_arcName);
    return 1;
}

/* 80CF4274-80CF4294 000FF4 0020+00 1/0 0/0 0/0 .text daObjSwBallA_Draw__FP14daObjSwBallA_c */
static int daObjSwBallA_Draw(daObjSwBallA_c* param_0) {
    return param_0->draw();
}

/* 80CF4294-80CF42B4 001014 0020+00 1/0 0/0 0/0 .text daObjSwBallA_Execute__FP14daObjSwBallA_c */
static int daObjSwBallA_Execute(daObjSwBallA_c* param_0) {
    return param_0->execute();
}

/* 80CF42B4-80CF42D4 001034 0020+00 1/0 0/0 0/0 .text daObjSwBallA_Delete__FP14daObjSwBallA_c */
static int daObjSwBallA_Delete(daObjSwBallA_c* param_0) {
    return param_0->_delete();
}

/* 80CF42D4-80CF42F4 001054 0020+00 1/0 0/0 0/0 .text            daObjSwBallA_Create__FP10fopAc_ac_c
 */
static int daObjSwBallA_Create(fopAc_ac_c* param_0) {
    return ((daObjSwBallA_c*)param_0)->create();
}

/* 80CF42F4-80CF433C 001074 0048+00 1/0 0/0 0/0 .text            __dt__17dEvLib_callback_cFv */
void __dt__17dEvLib_callback_cFv() {
    // NONMATCHING
}

/* 80CF433C-80CF4344 0010BC 0008+00 2/0 0/0 0/0 .text            eventStart__17dEvLib_callback_cFv
 */
bool eventStart__17dEvLib_callback_cFv() {
    return true;
}

/* 80CF4344-80CF434C 0010C4 0008+00 2/0 0/0 0/0 .text            eventRun__17dEvLib_callback_cFv */
bool eventRun__17dEvLib_callback_cFv() {
    return true;
}

/* 80CF434C-80CF4354 0010CC 0008+00 2/0 0/0 0/0 .text            eventEnd__17dEvLib_callback_cFv */
bool eventEnd__17dEvLib_callback_cFv() {
    return true;
}

/* 80CF4354-80CF43D4 0010D4 0080+00 2/1 0/0 0/0 .text            __dt__14daObjSwBallA_cFv */
daObjSwBallA_c::~daObjSwBallA_c() {
    // NONMATCHING
}

/* 80CF43D4-80CF43DC 001154 0008+00 1/0 0/0 0/0 .text            @1384@__dt__14daObjSwBallA_cFv */
static void func_80CF43D4() {
    // NONMATCHING
}

/* 80CF4410-80CF4410 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
