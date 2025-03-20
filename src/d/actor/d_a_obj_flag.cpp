/**
 * @file d_a_obj_flag.cpp
 * 
*/

#include "d/actor/d_a_obj_flag.h"
#include "dol2asm.h"




//
// Forward References:
//

extern "C" void create_init__11daObjFlag_cFv();
extern "C" void initBaseMtx__11daObjFlag_cFv();
extern "C" void getJointAngle__11daObjFlag_cFP5csXyzi();
extern "C" void calcJointAngle__11daObjFlag_cFv();
extern "C" void calcAngleSwingZ__11daObjFlag_cFP11FlagJoint_cf();
extern "C" void calcAngleSwingX__11daObjFlag_cFP11FlagJoint_cf();
extern "C" void getSwingY__11daObjFlag_cFf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" static void daObjFlag_Draw__FP11daObjFlag_c();
extern "C" static void daObjFlag_Execute__FP11daObjFlag_c();
extern "C" static bool daObjFlag_IsDelete__FP11daObjFlag_c();
extern "C" static void daObjFlag_Delete__FP11daObjFlag_c();
extern "C" void __dt__11FlagJoint_cFv();
extern "C" static void daObjFlag_Create__FP10fopAc_ac_c();
extern "C" void __ct__11FlagJoint_cFv();
extern "C" u8 const M_attr__11daObjFlag_c[52];
extern "C" extern char const* const d_a_obj_flag__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getArcName__12daSetBgObj_cFP10fopAc_ac_c();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void __mi__5csXyzFR5csXyz();
extern "C" void __ml__5csXyzFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseS__FPsss();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80BEC4EC-80BEC520 000000 0034+00 4/4 0/0 0/0 .rodata          M_attr__11daObjFlag_c */
s16 const daObjFlag_c::M_attr[26] = {
    0x457A, 0x0000, 0x3F80, 0x0000, 0x3E99, 0x999A, 0x000F, 
    0x07D0, 0x05DC, 0x0FA0, 0x0708, 0x0000, 0x0000,
    0x03E8, 0x0190, 0x0000, 0x0000, 0x012C, 0x0101, 
    0x0000, 0x463B, 0x8000, 0x453B, 0x8000, 0x463B, 0x8000,
};


/* 80BEC520-80BEC524 000034 0004+00 1/1 0/0 0/0 .rodata          @3637 */
SECTION_RODATA static f32 const lit_3637 = 65535.0f;
COMPILER_STRIP_GATE(0x80BEC520, &lit_3637);

/* 80BEC524-80BEC52C 000038 0008+00 1/1 0/0 0/0 .rodata          @3639 */
SECTION_RODATA static u8 const lit_3639[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEC524, &lit_3639);

/* 80BEC554-80BEC554 000068 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BEC554 = "spec.dat";
#pragma pop

/* 80BEB778-80BEB8F0 000078 0178+00 1/1 0/0 0/0 .text            create_init__11daObjFlag_cFv */
void daObjFlag_c::create_init() {
    // NONMATCHING
}

/* 80BEB8F0-80BEB984 0001F0 0094+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjFlag_cFv */
void daObjFlag_c::initBaseMtx() {
    mDoMtx_stack_c::transS(current.pos);
    PSMTXCopy(mDoMtx_stack_c::now, mpModel2->mBaseTransformMtx);
    cullMtx = mpModel2->mBaseTransformMtx;
    if (mpModel1 != NULL) {
        mDoMtx_stack_c::transS(mPos);
        mDoMtx_YrotM(mDoMtx_stack_c::now, shape_angle.y);
        PSMTXCopy(mDoMtx_stack_c::now, mpModel1->mBaseTransformMtx);
        cullMtx = mpModel1->mBaseTransformMtx;
    }
}

/* 80BEB984-80BEB9AC 000284 0028+00 1/1 0/0 0/0 .text getJointAngle__11daObjFlag_cFP5csXyzi */
void daObjFlag_c::getJointAngle(csXyz* i_angle, int i_index) {
    *i_angle = mFlagJoints[i_index].joint1;
}

/* ############################################################################################## */
/* 80BEC52C-80BEC530 000040 0004+00 0/3 0/0 0/0 .rodata          @3759 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3759[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BEC52C, &lit_3759);
#pragma pop

/* 80BEC530-80BEC534 000044 0004+00 0/1 0/0 0/0 .rodata          @3760 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3760 = 127.0f;
COMPILER_STRIP_GATE(0x80BEC530, &lit_3760);
#pragma pop

/* 80BEC534-80BEC538 000048 0004+00 0/1 0/0 0/0 .rodata          @3761 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3761 = 1.0f;
COMPILER_STRIP_GATE(0x80BEC534, &lit_3761);
#pragma pop

/* 80BEC538-80BEC53C 00004C 0004+00 0/1 0/0 0/0 .rodata          @3762 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3762 = -1.0f;
COMPILER_STRIP_GATE(0x80BEC538, &lit_3762);
#pragma pop

/* 80BEC53C-80BEC544 000050 0008+00 1/4 0/0 0/0 .rodata          @3764 */
SECTION_RODATA static u8 const lit_3764[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEC53C, &lit_3764);

/* 80BEB9AC-80BEBC58 0002AC 02AC+00 1/1 0/0 0/0 .text            calcJointAngle__11daObjFlag_cFv */
void daObjFlag_c::calcJointAngle() {
    cXyz direction;
    float power;
    JAISoundID aJStack_80[4];
    csXyz cStack_60;

    dKyw_get_AllWind_vec(&mPos, &direction, &power);
    if(power > 0.0f) {
        Z2GetAudioMgr()->seStartLevel(JAISoundID(Z2SE_OBJ_FLAG_TRAILING), &mPos, power * 127.0f, 0, 1.0, 1.0, -1.0, -1.0, 0);
    }

    cLib_addCalcAngleS(&field_0x5e0, cM_atan2s(direction.x, direction.y), 4, 0x7fff, 0);

    FlagJoint_c l_joint = mFlagJoints[0];
    for(int i = 0; i < 4; i++) {
        if(power != 0.0f && i != 0) {
            calcAngleSwingZ(&l_joint, power);
        }
        if(i == 0) {
            l_joint.joint2 = l_joint.joint1;
            l_joint.joint1.y = field_0x5e0 + (getSwingY(power), cM_ssin(l_joint.rv));
            l_joint.rv += power * M_attr[0x28];
            cStack_60  = cStack_60 - l_joint.joint2;
            l_joint.joint3 = cStack_60;
        }
        else {
            l_joint.joint2 = l_joint.joint1;
            cStack_60 = cStack_60 * M_attr[0x4];
            l_joint.joint3 = cStack_60;
        }

        if(M_attr[0x12] == NULL) {
            l_joint.joint1.x = 0;
        }
        else {
            calcAngleSwingX(&l_joint, power);
        }

        l_joint = mFlagJoints[i];
    }
}

/* ############################################################################################## */
/* 80BEC544-80BEC548 000058 0004+00 1/1 0/0 0/0 .rodata          @3791 */
SECTION_RODATA static f32 const lit_3791 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BEC544, &lit_3791);

/* 80BEBC58-80BEBDAC 000558 0154+00 1/1 0/0 0/0 .text
 * calcAngleSwingZ__11daObjFlag_cFP11FlagJoint_cf               */
void daObjFlag_c::calcAngleSwingZ(FlagJoint_c* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BEC548-80BEC54C 00005C 0004+00 0/1 0/0 0/0 .rodata          @3803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3803 = 16384.0f;
COMPILER_STRIP_GATE(0x80BEC548, &lit_3803);
#pragma pop

/* 80BEBDAC-80BEBE64 0006AC 00B8+00 1/1 0/0 0/0 .text
 * calcAngleSwingX__11daObjFlag_cFP11FlagJoint_cf               */
void daObjFlag_c::calcAngleSwingX(FlagJoint_c* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BEC54C-80BEC550 000060 0004+00 0/1 0/0 0/0 .rodata          @3832 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3832 = 0x45D05555;
COMPILER_STRIP_GATE(0x80BEC54C, &lit_3832);
#pragma pop

/* 80BEC550-80BEC554 000064 0004+00 0/1 0/0 0/0 .rodata          @3833 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3833 = 4000.0f;
COMPILER_STRIP_GATE(0x80BEC550, &lit_3833);
#pragma pop

/* 80BEBE64-80BEBFC8 000764 0164+00 1/1 0/0 0/0 .text            getSwingY__11daObjFlag_cFf */
f32 daObjFlag_c::getSwingY(f32 param_0) {
    f32 swing = param_0 * 6666.6665f;
    if(swing > 4000.0f) {
        swing = 4000.0f;
    }
    if(param_0 == 0) {
        return swing;
    }

    float var3 = (float)(int)M_attr[10] * cM_ssin(field_0x5e2);
    float var4 = (float)(int)M_attr[11] * cM_ssin(field_0x5e4);
    float var5 = (float)(int)M_attr[12] * cM_ssin(field_0x5e6);

    if(M_attr[14] == 0) {
        var3 = 0.0;
    }
    if(M_attr[15] == 0) {
        var4 = 0.0;
    }
    if(M_attr[16] == 0) {
        var5 = 0.0;
    }

    field_0x5e2 += M_attr[14];
    field_0x5e4 += M_attr[15];
    field_0x5e6 += M_attr[16];
    
    return (int)(short)(int)(var5 + var4 + (swing + var3));
}

/* 80BEBFC8-80BEC0B8 0008C8 00F0+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static int nodeCallBack(J3DJoint* param_0, int param_1) {
    J3DModel* pJVar1;
    u32 uVar2;
    csXyz local_18[2];

    pJVar1 = j3dSys.getModel();
    if(param_1 == 0) {
        uVar2 = param_0->getJntNo() & 0xffff;
    }

    return 1;
}

/* ############################################################################################## */
/* 80BEC554-80BEC554 000068 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BEC55D = "flag%02d.bmd";
SECTION_DEAD static char const* const stringBase_80BEC56A = "FlagObj";
SECTION_DEAD static char const* const stringBase_80BEC572 = "model0.bmd";
#pragma pop

/* 80BEC0B8-80BEC234 0009B8 017C+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
static int createSolidHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80BEC234-80BEC300 000B34 00CC+00 1/0 0/0 0/0 .text            daObjFlag_Draw__FP11daObjFlag_c */
static int daObjFlag_Draw(daObjFlag_c* param_0) {
    return param_0->draw();
}

/* 80BEC300-80BEC338 000C00 0038+00 1/0 0/0 0/0 .text            daObjFlag_Execute__FP11daObjFlag_c
 */
static int daObjFlag_Execute(daObjFlag_c* param_0) {
    return param_0->execute();
}

/* 80BEC338-80BEC340 000C38 0008+00 1/0 0/0 0/0 .text            daObjFlag_IsDelete__FP11daObjFlag_c
 */
static bool daObjFlag_IsDelete(daObjFlag_c* param_0) {
    return true;
}

/* 80BEC340-80BEC3BC 000C40 007C+00 1/0 0/0 0/0 .text            daObjFlag_Delete__FP11daObjFlag_c
 */
static void daObjFlag_Delete(daObjFlag_c* param_0) {
    // NONMATCHING
}

/* 80BEC3BC-80BEC3F8 000CBC 003C+00 2/2 0/0 0/0 .text            __dt__11FlagJoint_cFv */
FlagJoint_c::~FlagJoint_c() {
    // NONMATCHING
}

/* 80BEC3F8-80BEC4E0 000CF8 00E8+00 1/0 0/0 0/0 .text            daObjFlag_Create__FP10fopAc_ac_c */
static int daObjFlag_Create(fopAc_ac_c* param_0) {
    return static_cast<daObjFlag_c*>(param_0)->create();
}

/* 80BEC4E0-80BEC4E4 000DE0 0004+00 1/1 0/0 0/0 .text            __ct__11FlagJoint_cFv */
FlagJoint_c::FlagJoint_c() {
    /* empty function */
}

/* ############################################################################################## */
/* 80BEC580-80BEC5A0 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjFlag_Method */
static actor_method_class l_daObjFlag_Method = {
    (process_method_func)daObjFlag_Create__FP10fopAc_ac_c,
    (process_method_func)daObjFlag_Delete__FP11daObjFlag_c,
    (process_method_func)daObjFlag_Execute__FP11daObjFlag_c,
    (process_method_func)daObjFlag_IsDelete__FP11daObjFlag_c,
    (process_method_func)daObjFlag_Draw__FP11daObjFlag_c,
};

/* 80BEC5A0-80BEC5D0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Flag */
extern actor_process_profile_definition g_profile_Obj_Flag = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Flag,          // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjFlag_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  26,                     // mPriority
  &l_daObjFlag_Method,    // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BEC554-80BEC554 000068 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
