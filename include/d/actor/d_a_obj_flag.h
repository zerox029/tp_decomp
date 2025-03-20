#ifndef D_A_OBJ_FLAG_H
#define D_A_OBJ_FLAG_H

#include "f_op/f_op_actor_mng.h"
#include "d/d_com_inf_game.h"
#include "d/actor/d_a_set_bgobj.h"

static int createSolidHeap(fopAc_ac_c*);

class FlagJoint_c {
public:
    /* 80BEC3BC */ ~FlagJoint_c();
    /* 80BEC4E0 */ FlagJoint_c();

    csXyz joint1;
    csXyz joint2;
    csXyz joint3;
    short rv;
};

/**
 * @ingroup actors-objects
 * @class daObjFlag_c
 * @brief Flag 1
 *
 * @details
 *
 */
class daObjFlag_c : public fopAc_ac_c {
private:
    /* 0x568 */ J3DModel* mpModel1;
    /* 0x56c */ J3DModel* mpModel2;
    /* 0x570 */ request_of_phase_process_class mPhase;
    /* 0x578 */ request_of_phase_process_class mPhase2;
    /* 0x580 */ FlagJoint_c mFlagJoints[4];
    /* 0x5d0 */ cXyz mPos;
    /* 0x5dc */ float field_0x5dc;
    /* 0x5e0 */ s16 field_0x5e0;
    /* 0x5e2 */ short field_0x5e2;
    /* 0x5e4 */ short field_0x5e4;
    /* 0x5e6 */ short field_0x5e6;
    /* 0x5e8 */ short field_0x5e8;
    /* 0x5ea */ u8 field_0x568[0x5ec - 0x5ea];
public:
    /* 80BEB778 */ void create_init();
    /* 80BEB8F0 */ void initBaseMtx();
    /* 80BEB984 */ void getJointAngle(csXyz*, int);
    /* 80BEB9AC */ void calcJointAngle();
    /* 80BEBC58 */ void calcAngleSwingZ(FlagJoint_c*, f32);
    /* 80BEBDAC */ int calcAngleSwingX(FlagJoint_c*, f32);
    /* 80BEBE64 */ f32 getSwingY(f32);

    ~daObjFlag_c() {
        dComIfG_resDelete(&this->mPhase, "FlagObj");
        dComIfG_resDelete(&this->mPhase2, daSetBgObj_c::getArcName(this));
    }

    int create() {
        fopAcM_SetupActor(this, daObjFlag_c);
    
        int phase_state = dComIfG_resLoad(&mPhase, "create");
        if (phase_state != cPhs_COMPLEATE_e) {
            return phase_state;
        }

        phase_state = dComIfG_resLoad(&mPhase2, daSetBgObj_c::getArcName(this));
        if(phase_state != cPhs_COMPLEATE_e) {
            return phase_state;
        }

        if(!fopAcM_entrySolidHeap(this, createSolidHeap, 0x4000)) {
            return cPhs_ERROR_e;
        }

        create_init();

        return phase_state;
    }

    int execute() {
        if (mpModel1 == NULL) {
            return 1;
        }

        calcJointAngle();
        return 1;
    }

    int draw() {
        g_env_light.settingTevStruct(0x10, &current.pos, &tevStr);
        dComIfGd_setListBG();
        g_env_light.setLightTevColorType_MAJI(mpModel2, &tevStr);
        mDoExt_modelUpdateDL(mpModel2);
        
        if(mpModel1 != NULL) {
            g_env_light.setLightTevColorType_MAJI(mpModel1, &tevStr);
            mDoExt_modelUpdateDL(mpModel1);
        }

        dComIfGd_setList();

        return 1;
    }

    int createHeap() {
        int bvar2 = 0;
        if(shape_angle.x < '\0' || shape_angle.x > 'c') {
            bvar2 = 0;
        }
        else {
            bvar2 = 1;
            shape_angle.setall(0);
            current.angle.setall(0);

            // if(dComIfG_getObjectRes(daSetBgObj_c::getArcName(this), "FlagObj") == 0) {
                // Debug stuff
            // }
        
            J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(daSetBgObj_c::getArcName(this), "FlagObj");
            mpModel1 = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
        }

        return 1;
    }

    struct M_attrs {
        /* 0x00 */ float not_sure;
        /* 0x04 */ float field_0x04;
        /* 0x08 */ float field_0x08;
        /* 0x0c */ short field_0x0c;
        /* 0x0e */ short field_0x0e;
        /* 0x10 */ float undefined;
        /* 0x14 */ short field_0x14;
        /* 0x16 */ short field_0x16;
        /* 0x18 */ short field_0x18;
        /* 0x1a */ short field_0x1a;
        /* 0x1c */ short field_0x1c;
        /* 0x1e */ short field_0x1e;
        /* 0x20 */ short field_0x20;
        /* 0x22 */ short field_0x22;
        /* 0x24 */ char field_0x24;
        /* 0x25 */ char field_0x25;
        /* 0x26 */ short maybe;
        /* 0x28 */ float field_0x28;
        /* 0x2c */ float field_0x2c;
        /* 0x30 */ float field_0x30;
    };

    static M_attrs const M_attr;
};

STATIC_ASSERT(sizeof(daObjFlag_c) == 0x5ec);


#endif /* D_A_OBJ_FLAG_H */
