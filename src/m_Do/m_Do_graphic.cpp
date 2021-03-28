//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_graphic
//

#include "m_Do/m_Do_graphic.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct view_port_class {};

struct view_class {};

struct _GXColor {};

struct mDoGph_gInf_c {
    struct bloom_c {
        /* 80009544 */ void create();
        /* 800095F8 */ void remove();
        /* 80009650 */ void draw();
    };

    /* 80007E44 */ void create();
    /* 80007F90 */ void beginRender();
    /* 800080D0 */ void fadeOut(f32);
    /* 80007FD8 */ void fadeOut(f32, _GXColor&);
    /* 80008028 */ void fadeOut_f(f32, _GXColor&);
    /* 800080A0 */ void onBlure(f32 const (*)[4]);
    /* 80008078 */ void onBlure();
    /* 80008330 */ void calcFade();
};

struct layer_class {};

struct fast_create_request {};

struct daPy_py_c {
    /* 8000B1E4 */ s32 getAtnActorID() const;
};

struct JPADrawInfo {};

struct dPa_control_c {
    /* 8004C134 */ void calcMenu();
    /* 8004C188 */ void draw(JPADrawInfo*, u8);
};

struct dMenu_Collect3D_c {
    /* 801B75E8 */ void setupItem3D(f32 (*)[4]);
};

struct dDlst_shadowControl_c {
    /* 800557C8 */ void imageDraw(f32 (*)[4]);
    /* 80055A14 */ void draw(f32 (*)[4]);
};

struct J3DDrawBuffer {};

struct dDlst_base_c {};

struct dDlst_list_c {
    /* 80056390 */ void init();
    /* 80056538 */ void reset();
    /* 800566D4 */ void drawOpaDrawList(J3DDrawBuffer*);
    /* 80056710 */ void drawXluDrawList(J3DDrawBuffer*);
    /* 8005674C */ void drawOpaListItem3d();
    /* 80056770 */ void drawXluListItem3d();
    /* 800567C4 */ void draw(dDlst_base_c**, dDlst_base_c**);
    /* 80056900 */ void calcWipe();
};

struct dAttention_c {
    /* 800737E4 */ void LockonTruth();
};

struct cXyz {
    /* 80009184 */ ~cXyz();
};

struct _GXRenderModeObj {};

struct Vec {};

struct JUtility {
    struct TColor {};
};

struct JUTXfb {
    struct EXfbNumber {};
};

struct JUTVideo {
    /* 802E5198 */ void setRenderMode(_GXRenderModeObj const*);
};

struct JUTFader {
    /* 802E5530 */ JUTFader(int, int, int, int, JUtility::TColor);
};

struct JKRSolidHeap {};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE474 */ void alloc(u32, int, JKRHeap*);
    /* 802CE548 */ void free(void*);
};

struct JGeometry {
    template <typename A1>
    struct TBox2 {};
    /* TBox2<f32> */
    struct TBox2__template0 {};
};

struct JFWDisplay {
    /* 802721DC */ void createManager(_GXRenderModeObj const*, JKRHeap*, JUTXfb::EXfbNumber, bool);
};

struct J3DSys {
    /* 803100BC */ void drawInit();
    /* 8031073C */ void reinitGX();
};

struct J2DPrint {
    /* 802F4658 */ void setBuffer(u32);
};

struct J2DOrthoGraph {
    /* 8000B118 */ ~J2DOrthoGraph();
    /* 802E96D0 */ J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
    /* 802E97B4 */ void setPort();
    /* 802E980C */ void setOrtho(JGeometry::TBox2<f32> const&, f32, f32);
};

//
// Forward References:
//

static void createTimg(u16, u16, u32);
static void darwFilter(_GXColor);
void mDoGph_BlankingON();
void mDoGph_BlankingOFF();
static void dScnPly_BeforeOfPaint();
void mDoGph_BeforeOfDraw();
void mDoGph_AfterOfDraw();
static void drawDepth2(view_class*, view_port_class*, int);
static void trimming(view_class*, view_port_class*);
void mDoGph_drawFilterQuad(s8, s8);
static void retry_captue_frame(view_class*, view_port_class*, int);
static void motionBlure(view_class*);
static void setLight();
static void drawItem3D();
void mDoGph_Painter();
void mDoGph_Create();
extern "C" extern char const* const m_Do_m_Do_graphic__stringBase0;
extern "C" extern u8 mFrameBufferTexObj__13mDoGph_gInf_c[32];
extern "C" extern u8 m_bloom__13mDoGph_gInf_c[20];
extern "C" extern u8 mBackColor__13mDoGph_gInf_c[4];
extern "C" extern u8 mFadeColor__13mDoGph_gInf_c[4];
extern "C" extern u8 mFader__13mDoGph_gInf_c[4];
extern "C" extern u8 mFrameBufferTimg__13mDoGph_gInf_c[4];
extern "C" extern u8 mFrameBufferTex__13mDoGph_gInf_c[4];
extern "C" extern u8 mZbufferTimg__13mDoGph_gInf_c[4];
extern "C" extern u8 mZbufferTex__13mDoGph_gInf_c[4];
extern "C" extern f32 mFadeRate__13mDoGph_gInf_c;
extern "C" extern u8 struct_80450BE4[4];

extern "C" static void createTimg__FUsUsUl();
extern "C" void create__13mDoGph_gInf_cFv();
extern "C" void beginRender__13mDoGph_gInf_cFv();
extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void fadeOut_f__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void onBlure__13mDoGph_gInf_cFv();
extern "C" void onBlure__13mDoGph_gInf_cFPA4_Cf();
extern "C" void fadeOut__13mDoGph_gInf_cFf();
extern "C" static void darwFilter__F8_GXColor();
extern "C" void calcFade__13mDoGph_gInf_cFv();
extern "C" void mDoGph_BlankingON__Fv();
extern "C" void mDoGph_BlankingOFF__Fv();
extern "C" static void dScnPly_BeforeOfPaint__Fv();
extern "C" void mDoGph_BeforeOfDraw__Fv();
extern "C" void mDoGph_AfterOfDraw__Fv();
extern "C" static void drawDepth2__FP10view_classP15view_port_classi();
extern "C" void __dt__4cXyzFv();
extern "C" static void trimming__FP10view_classP15view_port_class();
extern "C" void mDoGph_drawFilterQuad__FScSc();
extern "C" void create__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" void remove__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" void draw__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" static void retry_captue_frame__FP10view_classP15view_port_classi();
extern "C" static void motionBlure__FP10view_class();
extern "C" static void setLight__Fv();
extern "C" static void drawItem3D__Fv();
extern "C" void mDoGph_Painter__Fv();
extern "C" void __dt__13J2DOrthoGraphFv();
extern "C" void mDoGph_Create__Fv();
extern "C" void __sinit_m_Do_graphic_cpp();
extern "C" s32 getAtnActorID__9daPy_py_cCFv();
extern "C" extern char const* const m_Do_m_Do_graphic__stringBase0;
extern "C" extern u8 mFrameBufferTexObj__13mDoGph_gInf_c[32];
extern "C" extern u8 m_bloom__13mDoGph_gInf_c[20];
extern "C" extern u8 mBackColor__13mDoGph_gInf_c[4];
extern "C" extern u8 mFadeColor__13mDoGph_gInf_c[4];
extern "C" extern u8 mFader__13mDoGph_gInf_c[4];
extern "C" extern u8 mFrameBufferTimg__13mDoGph_gInf_c[4];
extern "C" extern u8 mFrameBufferTex__13mDoGph_gInf_c[4];
extern "C" extern u8 mZbufferTimg__13mDoGph_gInf_c[4];
extern "C" extern u8 mZbufferTex__13mDoGph_gInf_c[4];
extern "C" extern f32 mFadeRate__13mDoGph_gInf_c;
extern "C" extern u8 struct_80450BE4[4];

//
// External References:
//

void mDoMtx_lookAt(f32 (*)[4], Vec const*, Vec const*, Vec const*, s16);
void mDoExt_getArchiveHeap();
void mDoExt_createSolidHeapToCurrent(u32, JKRHeap*, u32);
void mDoExt_adjustSolidHeap(JKRSolidHeap*);
void mDoExt_restoreCurrentHeap();
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fpcSch_JudgeByID(void*, void*);
void fpcFCtRq_Do(fast_create_request*);
void fpcFCtRq_Request(layer_class*, s16, int (*)(void*, void*), void*, void*);
void dCam_getBody();
void dKy_setLight();
void cLib_memSet(void*, int, u32);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void* operator new(u32);
void operator delete(void*);
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_HIO[64 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 mPadStatus__10JUTGamePad[48];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 data_80450580;
extern "C" extern void* mRenderModeObj__15mDoMch_render_c[1 + 1 /* padding */];
extern "C" extern u8 g_clearColor[4];
extern "C" extern u32 g_whiteColor;
extern "C" extern u32 __float_nan;
extern "C" extern u8 systemConsole__9JFWSystem[4];
extern "C" extern u8 sManager__10JFWDisplay[4];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 sDebugPrint__10JUTDbPrint[4 + 4 /* padding */];
extern "C" extern u8 sManager__8JUTVideo[4];
extern "C" extern u8 sManager__6JUTXfb[4 + 4 /* padding */];
extern "C" extern u8 sManager__10JUTProcBar[4];

extern "C" void mDoMtx_lookAt__FPA4_fPC3VecPC3VecPC3Vecs();
extern "C" void mDoExt_getArchiveHeap__Fv();
extern "C" void mDoExt_createSolidHeapToCurrent__FUlP7JKRHeapUl();
extern "C" void mDoExt_adjustSolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_restoreCurrentHeap__Fv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void fpcFCtRq_Do__FP19fast_create_request();
extern "C" void fpcFCtRq_Request__FP11layer_classsPFPvPv_iPvPv();
extern "C" void calcMenu__13dPa_control_cFv();
extern "C" void draw__13dPa_control_cFP11JPADrawInfoUc();
extern "C" void imageDraw__21dDlst_shadowControl_cFPA4_f();
extern "C" void draw__21dDlst_shadowControl_cFPA4_f();
extern "C" void init__12dDlst_list_cFv();
extern "C" void reset__12dDlst_list_cFv();
extern "C" void drawOpaDrawList__12dDlst_list_cFP13J3DDrawBuffer();
extern "C" void drawXluDrawList__12dDlst_list_cFP13J3DDrawBuffer();
extern "C" void drawOpaListItem3d__12dDlst_list_cFv();
extern "C" void drawXluListItem3d__12dDlst_list_cFv();
extern "C" void draw__12dDlst_list_cFPP12dDlst_base_cPP12dDlst_base_c();
extern "C" void calcWipe__12dDlst_list_cFv();
extern "C" void LockonTruth__12dAttention_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void dKy_setLight__Fv();
extern "C" void setupItem3D__17dMenu_Collect3D_cFPA4_f();
extern "C" void cLib_memSet__FPviUl();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb();
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void setRenderMode__8JUTVideoFPC16_GXRenderModeObj();
extern "C" void __ct__8JUTFaderFiiiiQ28JUtility6TColor();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void setPort__13J2DOrthoGraphFv();
extern "C" void func_802E980C();
extern "C" void setBuffer__8J2DPrintFUl();
extern "C" void drawInit__6J3DSysFv();
extern "C" void reinitGX__6J3DSysFv();
extern "C" void PPCSync();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void C_MTXLightPerspective();
extern "C" void C_MTXLightOrtho();
extern "C" void C_MTXPerspective();
extern "C" void C_MTXOrtho();
extern "C" void PSVECSquareDistance();
extern "C" void VISetBlack();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumTexGens();
extern "C" void GXPixModeSync();
extern "C" void GXBegin();
extern "C" void GXSetCullMode();
extern "C" void GXSetCoPlanar();
extern "C" void GXSetTexCopySrc();
extern "C" void GXSetTexCopyDst();
extern "C" void GXSetCopyFilter();
extern "C" void GXCopyTex();
extern "C" void GXInitLightSpot();
extern "C" void GXInitLightDistAttn();
extern "C" void GXInitLightPos();
extern "C" void GXInitLightDir();
extern "C" void GXInitLightColor();
extern "C" void GXLoadLightObjImm();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetNumChans();
extern "C" void GXSetChanCtrl();
extern "C" void GXGetTexBufferSize();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjLOD();
extern "C" void GXLoadTexObj();
extern "C" void GXInvalidateTexAll();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevColorIn();
extern "C" void GXSetTevAlphaIn();
extern "C" void GXSetTevColorOp();
extern "C" void GXSetTevAlphaOp();
extern "C" void GXSetTevColor();
extern "C" void GXSetTevColorS10();
extern "C" void GXSetTevKAlphaSel();
extern "C" void GXSetTevSwapMode();
extern "C" void GXSetTevSwapModeTable();
extern "C" void GXSetAlphaCompare();
extern "C" void GXSetZTexture();
extern "C" void GXSetTevOrder();
extern "C" void GXSetNumTevStages();
extern "C" void GXSetFog();
extern "C" void GXSetFogRangeAdj();
extern "C" void GXSetBlendMode();
extern "C" void GXSetAlphaUpdate();
extern "C" void GXSetZMode();
extern "C" void GXSetZCompLoc();
extern "C" void GXSetDither();
extern "C" void GXProject();
extern "C" void GXSetProjection();
extern "C" void GXGetProjectionv();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void GXLoadTexMtxImm();
extern "C" void GXSetViewport();
extern "C" void GXGetViewportv();
extern "C" void GXSetScissor();
extern "C" void GXSetClipMode();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_17();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_17();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void strcmp();
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_HIO[64 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 mPadStatus__10JUTGamePad[48];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 data_80450580;
extern "C" extern void* mRenderModeObj__15mDoMch_render_c[1 + 1 /* padding */];
extern "C" extern u8 g_clearColor[4];
extern "C" extern u32 g_whiteColor;
extern "C" extern u32 __float_nan;
extern "C" extern u8 systemConsole__9JFWSystem[4];
extern "C" extern u8 sManager__10JFWDisplay[4];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 sDebugPrint__10JUTDbPrint[4 + 4 /* padding */];
extern "C" extern u8 sManager__8JUTVideo[4];
extern "C" extern u8 sManager__6JUTXfb[4 + 4 /* padding */];
extern "C" extern u8 sManager__10JUTProcBar[4];

//
// Declarations:
//

/* 80007D9C-80007E44 00A8+00 s=1 e=0 z=0  None .text      createTimg__FUsUsUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createTimg(u16 param_0, u16 param_1, u32 param_2) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/createTimg__FUsUsUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450590-80450594 0004+00 s=2 e=1 z=0  None .sdata     mBackColor__13mDoGph_gInf_c */
SECTION_SDATA u8 mBackColor__13mDoGph_gInf_c[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80450594-80450598 0004+00 s=4 e=3 z=0  None .sdata     mFadeColor__13mDoGph_gInf_c */
SECTION_SDATA u8 mFadeColor__13mDoGph_gInf_c[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80450BC8-80450BCC 0004+00 s=2 e=38 z=1  None .sbss      mFader__13mDoGph_gInf_c */
u8 mFader__13mDoGph_gInf_c[4];

/* 80450BCC-80450BD0 0004+00 s=3 e=8 z=1  None .sbss      mFrameBufferTimg__13mDoGph_gInf_c */
u8 mFrameBufferTimg__13mDoGph_gInf_c[4];

/* 80450BD0-80450BD4 0004+00 s=3 e=6 z=0  None .sbss      mFrameBufferTex__13mDoGph_gInf_c */
u8 mFrameBufferTex__13mDoGph_gInf_c[4];

/* 80450BD4-80450BD8 0004+00 s=1 e=1 z=0  None .sbss      mZbufferTimg__13mDoGph_gInf_c */
u8 mZbufferTimg__13mDoGph_gInf_c[4];

/* 80450BD8-80450BDC 0004+00 s=3 e=1 z=0  None .sbss      mZbufferTex__13mDoGph_gInf_c */
u8 mZbufferTex__13mDoGph_gInf_c[4];

/* 80450BDC-80450BE0 0004+00 s=3 e=3 z=1  None .sbss      mFadeRate__13mDoGph_gInf_c */
f32 mFadeRate__13mDoGph_gInf_c;

/* 80450BE0-80450BE4 0004+00 s=3 e=0 z=0  None .sbss      mFadeSpeed__13mDoGph_gInf_c */
static f32 mFadeSpeed__13mDoGph_gInf_c;

/* 80450BE4-80450BE8 0004+00 s=8 e=9 z=11  None .sbss      None */
u8 struct_80450BE4[4];

/* 80007E44-80007F90 014C+00 s=1 e=0 z=0  None .text      create__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::create() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/create__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450BE8-80450BF0 0008+00 s=1 e=0 z=0  None .sbss      None */
static u8 data_80450BE8[8];

/* 80007F90-80007FD8 0048+00 s=1 e=2 z=0  None .text      beginRender__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::beginRender() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/beginRender__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451A38-80451A3C 0004+00 s=11 e=0 z=0  None .sdata2    @4062 */
SECTION_SDATA2 static u8 lit_4062[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451A3C-80451A40 0004+00 s=8 e=0 z=0  None .sdata2    @4063 */
SECTION_SDATA2 static u32 lit_4063 = 0x3F800000;

/* 80007FD8-80008028 0050+00 s=1 e=6 z=15  None .text      fadeOut__13mDoGph_gInf_cFfR8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::fadeOut(f32 param_0, _GXColor& param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/fadeOut__13mDoGph_gInf_cFfR8_GXColor.s"
}
#pragma pop

/* 80008028-80008078 0050+00 s=0 e=0 z=2  None .text      fadeOut_f__13mDoGph_gInf_cFfR8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::fadeOut_f(f32 param_0, _GXColor& param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/fadeOut_f__13mDoGph_gInf_cFfR8_GXColor.s"
}
#pragma pop

/* 80008078-800080A0 0028+00 s=0 e=1 z=8  None .text      onBlure__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::onBlure() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/onBlure__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803DD3E8-803DD408 0020+00 s=3 e=3 z=0  None .bss       mFrameBufferTexObj__13mDoGph_gInf_c */
u8 mFrameBufferTexObj__13mDoGph_gInf_c[32];

/* 803DD408-803DD428 0020+00 s=1 e=0 z=0  None .bss       mZbufferTexObj__13mDoGph_gInf_c */
static u8 mZbufferTexObj__13mDoGph_gInf_c[32];

/* 803DD428-803DD43C 0014+00 s=2 e=3 z=0  None .bss       m_bloom__13mDoGph_gInf_c */
u8 m_bloom__13mDoGph_gInf_c[20];

/* 803DD43C-803DD470 0030+04 s=2 e=0 z=0  None .bss       mBlureMtx__13mDoGph_gInf_c */
static u8 mBlureMtx__13mDoGph_gInf_c[48 + 4 /* padding */];

/* 800080A0-800080D0 0030+00 s=1 e=1 z=0  None .text      onBlure__13mDoGph_gInf_cFPA4_Cf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::onBlure(f32 const (*param_0)[4]) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/onBlure__13mDoGph_gInf_cFPA4_Cf.s"
}
#pragma pop

/* 800080D0-800080F4 0024+00 s=0 e=3 z=7  None .text      fadeOut__13mDoGph_gInf_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::fadeOut(f32 param_0) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/fadeOut__13mDoGph_gInf_cFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451A40-80451A44 0004+00 s=5 e=0 z=0  None .sdata2    @4105 */
SECTION_SDATA2 static u32 lit_4105 = 0x41200000;

/* 800080F4-80008330 023C+00 s=1 e=0 z=0  None .text      darwFilter__F8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void darwFilter(_GXColor param_0) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/darwFilter__F8_GXColor.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451A44-80451A48 0004+00 s=1 e=0 z=0  None .sdata2    @4131 */
SECTION_SDATA2 static u32 lit_4131 = 0x437F0000;

/* 80008330-8000841C 00EC+00 s=1 e=0 z=0  None .text      calcFade__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::calcFade() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/calcFade__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* 8000841C-80008420 0004+00 s=0 e=1 z=0  None .text      mDoGph_BlankingON__Fv */
void mDoGph_BlankingON() {
    /* empty function */
}

/* 80008420-80008424 0004+00 s=0 e=1 z=0  None .text      mDoGph_BlankingOFF__Fv */
void mDoGph_BlankingOFF() {
    /* empty function */
}

/* 80008424-80008450 002C+00 s=1 e=0 z=0  None .text      dScnPly_BeforeOfPaint__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dScnPly_BeforeOfPaint() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/dScnPly_BeforeOfPaint__Fv.s"
}
#pragma pop

/* 80008450-80008474 0024+00 s=0 e=1 z=0  None .text      mDoGph_BeforeOfDraw__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_BeforeOfDraw() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_BeforeOfDraw__Fv.s"
}
#pragma pop

/* 80008474-80008630 01BC+00 s=0 e=1 z=0  None .text      mDoGph_AfterOfDraw__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_AfterOfDraw() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_AfterOfDraw__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450598-8045059C 0004+00 s=1 e=0 z=0  None .sdata     l_tevColor0$4208 */
SECTION_SDATA static u8 l_tevColor0[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045059C-804505A0 0004+00 s=1 e=0 z=0  None .sdata     None */
SECTION_SDATA static u8 data_8045059C[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451A48-80451A4C 0004+00 s=1 e=0 z=0  None .sdata2    @4422 */
SECTION_SDATA2 static u32 lit_4422 = 0xC37F0000;

/* 80451A4C-80451A50 0004+00 s=2 e=0 z=0  None .sdata2    @4423 */
SECTION_SDATA2 static u32 lit_4423 = 0x42700000;

/* 80451A50-80451A54 0004+00 s=1 e=0 z=0  None .sdata2    @4424 */
SECTION_SDATA2 static u32 lit_4424 = 0x42400000;

/* 80451A54-80451A58 0004+00 s=1 e=0 z=0  None .sdata2    @4425 */
SECTION_SDATA2 static u32 lit_4425 = 0x43C80000;

/* 80451A58-80451A60 0008+00 s=1 e=0 z=0  None .sdata2    @4426 */
SECTION_SDATA2 static u8 lit_4426[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451A60-80451A68 0008+00 s=1 e=0 z=0  None .sdata2    @4427 */
SECTION_SDATA2 static u8 lit_4427[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451A68-80451A70 0008+00 s=1 e=0 z=0  None .sdata2    @4428 */
SECTION_SDATA2 static u8 lit_4428[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451A70-80451A74 0004+00 s=1 e=0 z=0  None .sdata2    @4429 */
SECTION_SDATA2 static u32 lit_4429 = 0x438C0000;

/* 80451A74-80451A78 0004+00 s=1 e=0 z=0  None .sdata2    @4430 */
SECTION_SDATA2 static u32 lit_4430 = 0x3F4CCCCD;

/* 80451A78-80451A7C 0004+00 s=1 e=0 z=0  None .sdata2    @4431 */
SECTION_SDATA2 static u32 lit_4431 = 0xC3340000;

/* 80451A7C-80451A80 0004+00 s=1 e=0 z=0  None .sdata2    @4432 */
SECTION_SDATA2 static u32 lit_4432 = 0x42960000;

/* 80451A80-80451A84 0004+00 s=1 e=0 z=0  None .sdata2    @4433 */
SECTION_SDATA2 static u32 lit_4433 = 0x40400000;

/* 80451A84-80451A88 0004+00 s=1 e=0 z=0  None .sdata2    @4434 */
SECTION_SDATA2 static u32 lit_4434 = 0x497423F0;

/* 80451A88-80451A8C 0004+00 s=1 e=0 z=0  None .sdata2    @4435 */
SECTION_SDATA2 static u32 lit_4435 = 0x42A00000;

/* 80451A8C-80451A90 0004+00 s=1 e=0 z=0  None .sdata2    @4436 */
SECTION_SDATA2 static u32 lit_4436 = 0x3DCCCCCD;

/* 80451A90-80451A94 0004+00 s=1 e=0 z=0  None .sdata2    @4437 */
SECTION_SDATA2 static u32 lit_4437 = 0x42C80000;

/* 80451A94-80451A98 0004+00 s=1 e=0 z=0  None .sdata2    @4438 */
SECTION_SDATA2 static u32 lit_4438 = 0x38D1B717;

/* 80451A98-80451A9C 0004+00 s=1 e=0 z=0  None .sdata2    @4439 */
SECTION_SDATA2 static u32 lit_4439 = 0xC37E0000;

/* 80451A9C-80451AA0 0004+00 s=1 e=0 z=0  None .sdata2    @4440 */
SECTION_SDATA2 static u32 lit_4440 = 0x43FE8000;

/* 80451AA0-80451AA4 0004+00 s=1 e=0 z=0  None .sdata2    @4441 */
SECTION_SDATA2 static u32 lit_4441 = 0x3B23D70A;

/* 80451AA4-80451AA8 0004+00 s=1 e=0 z=0  None .sdata2    @4442 */
SECTION_SDATA2 static u32 lit_4442 = 0xBB23D70A;

/* 80008630-80009184 0B54+00 s=1 e=0 z=0  None .text drawDepth2__FP10view_classP15view_port_classi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void drawDepth2(view_class* param_0, view_port_class* param_1, int param_2) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/drawDepth2__FP10view_classP15view_port_classi.s"
}
#pragma pop

/* 80009184-800091C0 003C+00 s=0 e=53 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AA8-80451AAC 0004+00 s=3 e=0 z=0  None .sdata2    @4480 */
SECTION_SDATA2 static u32 lit_4480 = 0x43E00000;

/* 80451AAC-80451AB0 0004+00 s=3 e=0 z=0  None .sdata2    @4481 */
SECTION_SDATA2 static u32 lit_4481 = 0x44180000;

/* 800091C0-800094B4 02F4+00 s=1 e=0 z=0  None .text      trimming__FP10view_classP15view_port_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void trimming(view_class* param_0, view_port_class* param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/trimming__FP10view_classP15view_port_class.s"
}
#pragma pop

/* 800094B4-80009544 0090+00 s=2 e=1 z=0  None .text      mDoGph_drawFilterQuad__FScSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_drawFilterQuad(s8 param_0, s8 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_drawFilterQuad__FScSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AB0-80451AB4 0004+00 s=1 e=0 z=0  None .sdata2    @4505 */
SECTION_SDATA2 static u32 lit_4505 = 0xFFFFFFFF;

/* 80009544-800095F8 00B4+00 s=0 e=1 z=0  None .text      create__Q213mDoGph_gInf_c7bloom_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::bloom_c::create() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/create__Q213mDoGph_gInf_c7bloom_cFv.s"
}
#pragma pop

/* 800095F8-80009650 0058+00 s=0 e=1 z=0  None .text      remove__Q213mDoGph_gInf_c7bloom_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::bloom_c::remove() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/remove__Q213mDoGph_gInf_c7bloom_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AB4-80451AB8 0004+00 s=1 e=0 z=0  None .sdata2    @4528 */
SECTION_SDATA2 static u8 lit_4528[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451AB8-80451ABC 0004+00 s=1 e=0 z=0  None .sdata2    None */
SECTION_SDATA2 static u32 data_80451AB8 = 0x00000040;

/* 80451ABC-80451AC0 0004+00 s=1 e=0 z=0  None .sdata2    @4592 */
SECTION_SDATA2 static u32 lit_4592 = 0x40800000;

/* 80451AC0-80451AC8 0004+04 s=1 e=0 z=0  None .sdata2    @4593 */
SECTION_SDATA2 static f32 lit_4593[1 + 1 /* padding */] = {
    0.00015624999650754035f,
    /* padding */
    0.0f,
};

/* 80451AC8-80451AD0 0008+00 s=1 e=0 z=0  None .sdata2    @4595 */
SECTION_SDATA2 static u8 lit_4595[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456B60-80456B68 0004+04 s=1 e=0 z=0  None .sbss2     @4530 */
SECTION_SBSS2 static u8 lit_4530[4 + 4 /* padding */];

/* 80009650-8000A160 0B10+00 s=1 e=0 z=0  None .text      draw__Q213mDoGph_gInf_c7bloom_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::bloom_c::draw() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/draw__Q213mDoGph_gInf_c7bloom_cFv.s"
}
#pragma pop

/* 8000A160-8000A290 0130+00 s=1 e=0 z=0  None .text
 * retry_captue_frame__FP10view_classP15view_port_classi        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void retry_captue_frame(view_class* param_0, view_port_class* param_1, int param_2) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/retry_captue_frame__FP10view_classP15view_port_classi.s"
}
#pragma pop

/* 8000A290-8000A504 0274+00 s=1 e=0 z=0  None .text      motionBlure__FP10view_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void motionBlure(view_class* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/motionBlure__FP10view_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AD0-80451AD4 0004+00 s=1 e=0 z=0  None .sdata2    @4641 */
SECTION_SDATA2 static u32 lit_4641 = 0xC708B800;

/* 80451AD4-80451AD8 0004+00 s=1 e=0 z=0  None .sdata2    @4642 */
SECTION_SDATA2 static u32 lit_4642 = 0xC6EA6000;

/* 8000A504-8000A58C 0088+00 s=1 e=0 z=0  None .text      setLight__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void setLight() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/setLight__Fv.s"
}
#pragma pop

/* 8000A58C-8000A604 0078+00 s=1 e=0 z=0  None .text      drawItem3D__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void drawItem3D() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/drawItem3D__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80373DD0-80373DE8 0017+01 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80373DD0 = "F_SP124";
SECTION_DEAD char const* const stringBase_80373DD8 = "D_MN08";
SECTION_DEAD char const* const stringBase_80373DDF = "F_SP127";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80373DE7 = "";
#pragma pop

/* 80451AD8-80451ADC 0004+00 s=1 e=0 z=0  None .sdata2    @5023 */
SECTION_SDATA2 static u32 lit_5023 = 0xBF800000;

/* 80451ADC-80451AE0 0004+00 s=1 e=0 z=0  None .sdata2    @5024 */
SECTION_SDATA2 static u32 lit_5024 = 0x3F000000;

/* 80451AE0-80451AE4 0004+00 s=1 e=0 z=0  None .sdata2    @5025 */
SECTION_SDATA2 static u32 lit_5025 = 0xBF000000;

/* 80451AE4-80451AE8 0004+00 s=1 e=0 z=0  None .sdata2    @5026 */
SECTION_SDATA2 static u32 lit_5026 = 0x3FADB6DB;

/* 80451AE8-80451AEC 0004+00 s=1 e=0 z=0  None .sdata2    @5027 */
SECTION_SDATA2 static u32 lit_5027 = 0x47C35000;

/* 80451AEC-80451AF0 0004+00 s=1 e=0 z=0  None .sdata2    @5028 */
SECTION_SDATA2 static u32 lit_5028 = 0xC0000000;

/* 80451AF0-80451AF4 0004+00 s=1 e=0 z=0  None .sdata2    @5029 */
SECTION_SDATA2 static u32 lit_5029 = 0xC7C35000;

/* 80451AF4-80451AF8 0004+00 s=1 e=0 z=0  None .sdata2    @5030 */
SECTION_SDATA2 static u32 lit_5030 = 0x43980000;

/* 80451AF8-80451B00 0004+04 s=1 e=0 z=0  None .sdata2    @5031 */
SECTION_SDATA2 static f32 lit_5031[1 + 1 /* padding */] = {
    224.0f,
    /* padding */
    0.0f,
};

/* 8000A604-8000B118 0B14+00 s=0 e=1 z=0  None .text      mDoGph_Painter__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_Painter() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_Painter__Fv.s"
}
#pragma pop

/* 8000B118-8000B174 005C+00 s=0 e=1 z=0  None .text      __dt__13J2DOrthoGraphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DOrthoGraph::~J2DOrthoGraph() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/__dt__13J2DOrthoGraphFv.s"
}
#pragma pop

/* 8000B174-8000B1D0 005C+00 s=0 e=2 z=0  None .text      mDoGph_Create__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_Create() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_Create__Fv.s"
}
#pragma pop

/* 8000B1D0-8000B1E4 0014+00 s=0 e=1 z=0  None .text      __sinit_m_Do_graphic_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_m_Do_graphic_cpp() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/__sinit_m_Do_graphic_cpp.s"
}
#pragma pop

/* 8000B1E4-8000B1EC 0008+00 s=0 e=1 z=0  None .text      getAtnActorID__9daPy_py_cCFv */
s32 daPy_py_c::getAtnActorID() const {
    return -1;
}
