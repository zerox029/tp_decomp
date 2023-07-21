//
// Generated By: dol2asm
// Translation Unit: d/map/d_map_path_fmap
//

#include "d/map/d_map_path_fmap.h"
#include "MSL_C/float.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void addTypeGroupData__26fmpTresTypeGroupDataList_cFUcPCQ27dTres_c6data_s();
extern "C" void isArrival__22dMenu_Fmap_room_data_cFv();
extern "C" void buildTresTypeGroup__22dMenu_Fmap_room_data_cFiii();
extern "C" void buildFmapRoomData__22dMenu_Fmap_room_data_cFiiffff();
extern "C" void isArrival__23dMenu_Fmap_stage_data_cFv();
extern "C" void buildFmapStageData__23dMenu_Fmap_stage_data_cFiff();
extern "C" void getMenuFmapStageData__24dMenu_Fmap_region_data_cFi();
extern "C" void getPointStagePathInnerNo__24dMenu_Fmap_region_data_cFffiPiPi();
extern "C" void buildFmapRegionData__24dMenu_Fmap_region_data_cFi();
extern "C" void create__23dMenu_Fmap_world_data_cFP24dMenu_Fmap_region_data_c();
extern "C" void buildFmapWorldData__23dMenu_Fmap_world_data_cFv();
extern "C" void
init__22dMenuFmapIconPointer_cFP24dMenu_Fmap_region_data_cP23dMenu_Fmap_stage_data_cUcii();
extern "C" void getFirstData__22dMenuFmapIconPointer_cFv();
extern "C" void getData__22dMenuFmapIconPointer_cFv();
extern "C" void getFirstRoomData__22dMenuFmapIconPointer_cFv();
extern "C" void getNextRoomData__22dMenuFmapIconPointer_cFv();
extern "C" void getNextStageData__22dMenuFmapIconPointer_cFv();
extern "C" void getNextData__22dMenuFmapIconPointer_cFv();
extern "C" void nextData__22dMenuFmapIconPointer_cFv();
extern "C" void getValidData__22dMenuFmapIconPointer_cFv();
extern "C" void getPosition__19dMenuFmapIconDisp_cFPiPiPfPfPPCQ27dTres_c6data_s();
extern "C" void isDrawDisp__19dMenuFmapIconDisp_cFv();
extern "C" void __dt__26fmpTresTypeGroupDataList_cFv();
extern "C" void __dt__22fmpTresTypeGroupData_cFv();
extern "C" void __ct__26fmpTresTypeGroupDataList_cFv();
extern "C" extern void* __vt__19dMenuFmapIconDisp_c[3];

//
// External References:
//

extern "C" void dComIfGs_isStageTbox__Fii();
extern "C" void dComIfGs_isStageSwitch__Fii();
extern "C" void dComIfGp_isLightDropMapVisible__Fv();
extern "C" void isTbox__12dSv_memBit_cCFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void isVisitedRoom__13dSv_memory2_cFi();
extern "C" void getSave2__10dSv_save_cFi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getFirstData__7dTres_cFUc();
extern "C" void getNextData__7dTres_cFPQ27dTres_c15typeGroupData_c();
extern "C" void getTypeGroupNoToType__7dTres_cFUc();
extern "C" void getTypeToTypeGroupNo__7dTres_cFUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_14();
extern "C" void _savegpr_22();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_14();
extern "C" void _restgpr_22();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];

//
// Declarations:
//

/* 8003D790-8003D818 0380D0 0088+00 1/1 0/0 0/0 .text
 * addTypeGroupData__26fmpTresTypeGroupDataList_cFUcPCQ27dTres_c6data_s */
void fmpTresTypeGroupDataList_c::addTypeGroupData(u8 i_typeGroupNo,
                                                  dTres_c::data_s const* i_tresData) {
    fmpTresTypeGroupData_c* next = mpNextData;
    fmpTresTypeGroupData_c* fmpTresTypeGroupData_p = new fmpTresTypeGroupData_c();

    if (mpTypeGroupDataHead == NULL) {
        mpTypeGroupDataHead = fmpTresTypeGroupData_p;
    }

    fmpTresTypeGroupData_p->setTresData(i_tresData);
    fmpTresTypeGroupData_p->setNextData(NULL);
    fmpTresTypeGroupData_p->setTypeGroupNo(i_typeGroupNo);

    if (next != NULL) {
        next->setNextData(fmpTresTypeGroupData_p);
    }

    mpNextData = fmpTresTypeGroupData_p;
}

/* 8003D818-8003D868 038158 0050+00 1/1 1/1 0/0 .text isArrival__22dMenu_Fmap_room_data_cFv */
bool dMenu_Fmap_room_data_c::isArrival() {
    u8 table_no = mp_parentStage->getStageArc()->mVisitedRoomSaveTableNo;
    return dComIfGs_isSaveVisitedRoom(table_no, m_roomNo) != false;
}

/* 8003D868-8003D92C 0381A8 00C4+00 1/1 0/0 0/0 .text
 * buildTresTypeGroup__22dMenu_Fmap_room_data_cFiii             */
void dMenu_Fmap_room_data_c::buildTresTypeGroup(int param_0, int param_1, int param_2) {
    dTres_c::list_class* tresure_p = mp_fmapData->getTresure();
    if (tresure_p != NULL) {
        int num = tresure_p->field_0x0;
        dTres_c::data_s* data_p = tresure_p->field_0x4->getDataPointer();

        if (mp_fmpTresTypeGroupDataListAll == NULL) {
            mp_fmpTresTypeGroupDataListAll = new fmpTresTypeGroupDataListAll_c();
        }

        for (int i = 0; i < num; i++) {
            data_p->mRoomNo = param_2;
            u8 typeGroupNo = dTres_c::getTypeToTypeGroupNo(data_p->mType);
            mp_fmpTresTypeGroupDataListAll->addTypeGroupData(typeGroupNo, data_p);
            data_p++;
        }
    }
}

/* 8003D92C-8003D95C 03826C 0030+00 1/1 0/0 0/0 .text
 * buildFmapRoomData__22dMenu_Fmap_room_data_cFiiffff           */
void dMenu_Fmap_room_data_c::buildFmapRoomData(int param_0, int param_1, f32 param_2, f32 param_3,
                                               f32 param_4, f32 param_5) {
    int roomNo = m_roomNo;

    if (mp_fmapData != NULL) {
        buildTresTypeGroup(param_0, param_1, roomNo);
    }
}

/* 8003D95C-8003D9D8 03829C 007C+00 1/1 0/0 0/0 .text isArrival__23dMenu_Fmap_stage_data_cFv */
#ifdef NONMATCHING
bool dMenu_Fmap_stage_data_c::isArrival() {
    bool is_arrival = false;

    dMenu_Fmap_room_data_c* room = mp_roomTop;
    u8 table_no = mpStageArc->getVisitedRoomSaveTableNo();
    for (; !is_arrival && room != NULL; room = room->getNextData()) {
        is_arrival = dComIfGs_isSaveVisitedRoom(table_no, room->getRoomNo()) != false;
    }

    return is_arrival;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool dMenu_Fmap_stage_data_c::isArrival() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/isArrival__23dMenu_Fmap_stage_data_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80451E20-80451E28 000420 0004+04 5/5 0/0 0/0 .sdata2          @3894 */
SECTION_SDATA2 static f32 lit_3894[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 8003D9D8-8003DB48 038318 0170+00 1/1 0/0 0/0 .text
 * buildFmapStageData__23dMenu_Fmap_stage_data_cFiff            */
int dMenu_Fmap_stage_data_c::buildFmapStageData(int param_0, f32 param_1, f32 param_2) {
    dMenu_Fmap_room_data_c* room = mp_roomTop;
    f32 fvar3 = FLT_MAX;
    f32 fvar4 = FLT_MAX;
    f32 fvar5 = -FLT_MAX;
    f32 fvar6 = -FLT_MAX;
    int ivar = 0;

    for (; room != NULL; room = room->getNextData()) {
        room->buildFmapRoomData(param_0, ivar, param_1, param_2, m_offsetX, m_offsetZ);
        f32 min_x = room->getFileList2MinX();
        f32 min_z = room->getFileList2MinZ();
        f32 max_x = room->getFileList2MaxX();
        f32 max_z = room->getFileList2MaxZ();

        if (min_x < fvar3) {
            fvar3 = min_x;
        }

        if (min_z < fvar4) {
            fvar4 = min_z;
        }

        if (max_x > fvar5) {
            fvar5 = max_x;
        }

        if (max_z > fvar6) {
            fvar6 = max_z;
        }

        ivar++;
    }

    if (ivar > 0) {
        m_stageMinX = fvar3;
        m_stageMinZ = fvar4;
        m_stageMaxX = fvar5;
        m_stageMaxZ = fvar6;
    } else {
        f32 tmp_0 = lit_3894[0];
        m_stageMinX = tmp_0;
        m_stageMinZ = tmp_0;
        m_stageMaxX = tmp_0;
        m_stageMaxZ = tmp_0;
    }

    return ivar;
}

/* 8003DB48-8003DB70 038488 0028+00 0/0 1/1 0/0 .text
 * getMenuFmapStageData__24dMenu_Fmap_region_data_cFi           */
dMenu_Fmap_stage_data_c* dMenu_Fmap_region_data_c::getMenuFmapStageData(int param_0) {
    dMenu_Fmap_stage_data_c* stage = mpMenuFmapStageDataTop;
    for (int i = 0; stage != NULL && i < param_0; i++) {
        stage = stage->getNextData();
    }

    return stage;
}

/* 8003DB70-8003DEE0 0384B0 0370+00 0/0 1/1 0/0 .text
 * getPointStagePathInnerNo__24dMenu_Fmap_region_data_cFffiPiPi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fmap_region_data_c::getPointStagePathInnerNo(f32 param_0, f32 param_1, int param_2,
                                                            int* param_3, int* param_4) {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getPointStagePathInnerNo__24dMenu_Fmap_region_data_cFffiPiPi.s"
}
#pragma pop

/* 8003DEE0-8003E028 038820 0148+00 0/0 1/1 0/0 .text
 * buildFmapRegionData__24dMenu_Fmap_region_data_cFi            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fmap_region_data_c::buildFmapRegionData(int param_0) {
    nofralloc
#include "asm/d/map/d_map_path_fmap/buildFmapRegionData__24dMenu_Fmap_region_data_cFi.s"
}
#pragma pop

/* 8003E028-8003E04C 038968 0024+00 0/0 1/1 0/0 .text
 * create__23dMenu_Fmap_world_data_cFP24dMenu_Fmap_region_data_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fmap_world_data_c::create(dMenu_Fmap_region_data_c* param_0) {
    nofralloc
#include "asm/d/map/d_map_path_fmap/create__23dMenu_Fmap_world_data_cFP24dMenu_Fmap_region_data_c.s"
}
#pragma pop

/* 8003E04C-8003E114 03898C 00C8+00 1/1 0/0 0/0 .text
 * buildFmapWorldData__23dMenu_Fmap_world_data_cFv              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fmap_world_data_c::buildFmapWorldData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/buildFmapWorldData__23dMenu_Fmap_world_data_cFv.s"
}
#pragma pop

/* 8003E114-8003E1C0 038A54 00AC+00 0/0 3/3 0/0 .text
 * init__22dMenuFmapIconPointer_cFP24dMenu_Fmap_region_data_cP23dMenu_Fmap_stage_data_cUcii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::init(dMenu_Fmap_region_data_c* param_0,
                                      dMenu_Fmap_stage_data_c* param_1, u8 param_2, int param_3,
                                      int param_4) {
    nofralloc
#include "asm/d/map/d_map_path_fmap/init__22dMenuFmapIconPointer_cFP24dMenu_Fmap_region_data_cP23dMenu_Fmap_stage_data_cUcii.s"
}
#pragma pop

/* 8003E1C0-8003E2BC 038B00 00FC+00 2/2 0/0 0/0 .text getFirstData__22dMenuFmapIconPointer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::getFirstData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getFirstData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E2BC-8003E350 038BFC 0094+00 1/1 0/0 0/0 .text            getData__22dMenuFmapIconPointer_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::getData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E350-8003E37C 038C90 002C+00 2/2 0/0 0/0 .text getFirstRoomData__22dMenuFmapIconPointer_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::getFirstRoomData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getFirstRoomData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E37C-8003E3A4 038CBC 0028+00 1/1 0/0 0/0 .text getNextRoomData__22dMenuFmapIconPointer_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::getNextRoomData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getNextRoomData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E3A4-8003E3D8 038CE4 0034+00 1/1 0/0 0/0 .text getNextStageData__22dMenuFmapIconPointer_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::getNextStageData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getNextStageData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E3D8-8003E490 038D18 00B8+00 1/1 0/0 0/0 .text getNextData__22dMenuFmapIconPointer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::getNextData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getNextData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E490-8003E510 038DD0 0080+00 1/1 3/3 0/0 .text nextData__22dMenuFmapIconPointer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::nextData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/nextData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E510-8003E578 038E50 0068+00 0/0 3/3 0/0 .text getValidData__22dMenuFmapIconPointer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconPointer_c::getValidData() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getValidData__22dMenuFmapIconPointer_cFv.s"
}
#pragma pop

/* 8003E578-8003E6E8 038EB8 0170+00 0/0 3/3 0/0 .text
 * getPosition__19dMenuFmapIconDisp_cFPiPiPfPfPPCQ27dTres_c6data_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconDisp_c::getPosition(int* param_0, int* param_1, f32* param_2, f32* param_3,
                                          dTres_c::data_s const** param_4) {
    nofralloc
#include "asm/d/map/d_map_path_fmap/getPosition__19dMenuFmapIconDisp_cFPiPiPfPfPPCQ27dTres_c6data_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A7D38-803A7D74 -00001 003C+00 1/1 0/0 0/0 .data            @4467 */
SECTION_DATA static void* lit_4467[15] = {
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x40C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0xA8),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x40C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x40C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x154),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x1FC),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x308),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x40C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0xA8),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x40C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x35C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x40C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x40C),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x388),
    (void*)(((char*)isDrawDisp__19dMenuFmapIconDisp_cFv) + 0x388),
};

/* 8003E6E8-8003EB10 039028 0428+00 2/0 3/3 0/0 .text            isDrawDisp__19dMenuFmapIconDisp_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuFmapIconDisp_c::isDrawDisp() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/isDrawDisp__19dMenuFmapIconDisp_cFv.s"
}
#pragma pop

/* 8003EB10-8003EB70 039450 0060+00 1/1 1/1 0/0 .text __dt__26fmpTresTypeGroupDataList_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fmpTresTypeGroupDataList_c::~fmpTresTypeGroupDataList_c() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/__dt__26fmpTresTypeGroupDataList_cFv.s"
}
#pragma pop

/* 8003EB70-8003EC90 0394B0 0120+00 1/1 0/0 0/0 .text            __dt__22fmpTresTypeGroupData_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fmpTresTypeGroupData_c::~fmpTresTypeGroupData_c() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/__dt__22fmpTresTypeGroupData_cFv.s"
}
#pragma pop

/* 8003EC90-8003ECA0 0395D0 0010+00 1/1 0/0 0/0 .text __ct__26fmpTresTypeGroupDataList_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fmpTresTypeGroupDataList_c::fmpTresTypeGroupDataList_c() {
    nofralloc
#include "asm/d/map/d_map_path_fmap/__ct__26fmpTresTypeGroupDataList_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A7D74-803A7D80 004E94 000C+00 0/0 3/3 0/0 .data            __vt__19dMenuFmapIconDisp_c */
SECTION_DATA extern void* __vt__19dMenuFmapIconDisp_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)isDrawDisp__19dMenuFmapIconDisp_cFv,
};
