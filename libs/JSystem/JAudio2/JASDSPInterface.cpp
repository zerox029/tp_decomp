//
// Generated By: dol2asm
// Translation Unit: JASDSPInterface
//

#include "JSystem/JAudio2/JASDSPInterface.h"
#include "JSystem/JAudio2/JASCalc.h"
#include "JSystem/JAudio2/JASHeapCtrl.h"
#include "JSystem/JAudio2/JASWaveInfo.h"
#include "JSystem/JAudio2/dsptask.h"
#include "JSystem/JAudio2/osdsp_task.h"
#include "JSystem/JKernel/JKRSolidHeap.h"
#include "dol2asm.h"
#include "dolphin/dsp/dsp.h"
#include "dolphin/os/OSCache.h"

//
// Forward References:
//

extern "C" void boot__6JASDspFPFPv_v();
extern "C" void releaseHalt__6JASDspFUl();
extern "C" void finishWork__6JASDspFUs();
extern "C" void syncFrame__6JASDspFUlUlUl();
extern "C" void setDSPMixerLevel__6JASDspFf();
extern "C" void getDSPMixerLevel__6JASDspFv();
extern "C" void getDSPHandle__6JASDspFi();
extern "C" void setFilterTable__6JASDspFPsPsUl();
extern "C" void flushBuffer__6JASDspFv();
extern "C" void invalChannelAll__6JASDspFv();
extern "C" void initBuffer__6JASDspFv();
extern "C" void setFXLine__6JASDspFUcPsPQ26JASDsp13FxlineConfig_();
extern "C" void init__Q26JASDsp8TChannelFv();
extern "C" void playStart__Q26JASDsp8TChannelFv();
extern "C" void playStop__Q26JASDsp8TChannelFv();
extern "C" void replyFinishRequest__Q26JASDsp8TChannelFv();
extern "C" void forceStop__Q26JASDsp8TChannelFv();
extern "C" void isActive__Q26JASDsp8TChannelCFv();
extern "C" void isFinish__Q26JASDsp8TChannelCFv();
extern "C" void setWaveInfo__Q26JASDsp8TChannelFRC11JASWaveInfoUlUl();
extern "C" void setOscInfo__Q26JASDsp8TChannelFUl();
extern "C" void initAutoMixer__Q26JASDsp8TChannelFv();
extern "C" void setAutoMixer__Q26JASDsp8TChannelFUsUcUcUcUc();
extern "C" void setPitch__Q26JASDsp8TChannelFUs();
extern "C" void setMixerInitVolume__Q26JASDsp8TChannelFUcs();
extern "C" void setMixerVolume__Q26JASDsp8TChannelFUcs();
extern "C" void setPauseFlag__Q26JASDsp8TChannelFUc();
extern "C" void flush__Q26JASDsp8TChannelFv();
extern "C" void initFilter__Q26JASDsp8TChannelFv();
extern "C" void setFilterMode__Q26JASDsp8TChannelFUs();
extern "C" void setIIRFilterParam__Q26JASDsp8TChannelFPs();
extern "C" void setFIR8FilterParam__Q26JASDsp8TChannelFPs();
extern "C" void setDistFilter__Q26JASDsp8TChannelFs();
extern "C" void setBusConnect__Q26JASDsp8TChannelFUcUc();
extern "C" void DSP_CreateMap2__FUl();
extern "C" u8 const DSPADPCM_FILTER__6JASDsp[64];
extern "C" void* const DSPRES_FILTER__6JASDsp[320];
extern "C" u8 SEND_TABLE__6JASDsp[24 + 24 /* padding */];
extern "C" u32 one__11JASWaveInfo[1 + 1 /* padding */];
extern "C" u8 CH_BUF__6JASDsp[4];
extern "C" u8 FX_BUF__6JASDsp[4];
extern "C" f32 sDSPVolume__6JASDsp;

//
// External References:
//

extern "C" void cDyl_InitAsyncIsDone__Fv();
extern "C" void bzero__7JASCalcFPvUl();
extern "C" void DSPReleaseHalt2__FUl();
extern "C" void DsetupTable__FUlUlUlUlUl();
extern "C" void DsetMixerLevel__Ff();
extern "C" void DspBoot__FPFPv_v();
extern "C" void DspFinishWork__FUs();
extern "C" void DsyncFrame2__FUlUlUl();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 804512E8-804512EC 0007E8 0004+00 5/5 0/0 0/0 .sbss            CH_BUF__6JASDsp */
JASDsp::TChannel* JASDsp::CH_BUF;

/* 804512EC-804512F0 0007EC 0004+00 3/3 0/0 0/0 .sbss            FX_BUF__6JASDsp */
void* JASDsp::FX_BUF;

/* 804512F0-804512F4 0007F0 0004+00 2/2 0/0 0/0 .sbss            sDSPVolume__6JASDsp */
f32 JASDsp::sDSPVolume;

/* 8029D958-8029D9A4 298298 004C+00 0/0 1/1 0/0 .text            boot__6JASDspFPFPv_v */
void JASDsp::boot(void (*param_0)(void*)) {
    static bool data_804512F4 = true;
    if (data_804512F4) {
        DspBoot(param_0);
        data_804512F4 = false;
    }
}

/* 8029D9A4-8029D9C4 2982E4 0020+00 0/0 1/1 0/0 .text            releaseHalt__6JASDspFUl */
void JASDsp::releaseHalt(u32 param_0) {
    DSPReleaseHalt2(param_0);
}

/* 8029D9C4-8029D9E4 298304 0020+00 0/0 1/1 0/0 .text            finishWork__6JASDspFUs */
void JASDsp::finishWork(u16 param_0) {
    DspFinishWork(param_0);
}

/* 8029D9E4-8029DA04 298324 0020+00 0/0 1/1 0/0 .text            syncFrame__6JASDspFUlUlUl */
void JASDsp::syncFrame(u32 param_0, u32 param_1, u32 param_2) {
    DsyncFrame2(param_0, param_1, param_2);
}

/* ############################################################################################## */
/* 80455748-8045574C 003D48 0004+00 1/1 0/0 0/0 .sdata2          @176 */
SECTION_SDATA2 static f32 lit_176 = 4.0f;

/* 8029DA04-8029DA30 298344 002C+00 0/0 1/1 0/0 .text            setDSPMixerLevel__6JASDspFf */
void JASDsp::setDSPMixerLevel(f32 dsp_level) {
    sDSPVolume = dsp_level;
    dsp_level *= 4.0f;
    DsetMixerLevel(dsp_level);
}

/* 8029DA30-8029DA38 298370 0008+00 0/0 1/1 0/0 .text            getDSPMixerLevel__6JASDspFv */
f32 JASDsp::getDSPMixerLevel() {
    return sDSPVolume;
}

/* 8029DA38-8029DA48 298378 0010+00 0/0 1/1 0/0 .text            getDSPHandle__6JASDspFi */
JASDsp::TChannel* JASDsp::getDSPHandle(int param_0) {
    return CH_BUF + param_0;
}

/* 8029DA48-8029DA6C 298388 0024+00 3/3 0/0 0/0 .text            setFilterTable__6JASDspFPsPsUl */
void JASDsp::setFilterTable(s16* param_0, s16* param_1, u32 param_2) {
    for (int i = 0; i < param_2; i++) {
        *param_0++ = *param_1++;
    }
}

/* 8029DA6C-8029DAA0 2983AC 0034+00 1/1 0/0 0/0 .text            flushBuffer__6JASDspFv */
void JASDsp::flushBuffer() {
    DCFlushRange(CH_BUF, sizeof(TChannel) * 64);
    DCFlushRange(FX_BUF, 0x80);
}

/* 8029DAA0-8029DAC8 2983E0 0028+00 0/0 1/1 0/0 .text            invalChannelAll__6JASDspFv */
void JASDsp::invalChannelAll() {
    DCInvalidateRange(CH_BUF, sizeof(TChannel) * 64);
}

/* ############################################################################################## */
/* 8039B360-8039B3A0 0279C0 0040+00 1/1 0/0 0/0 .rodata          DSPADPCM_FILTER__6JASDsp */
SECTION_RODATA u8 const JASDsp::DSPADPCM_FILTER[64] = {
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x04, 0x00,
    0x10, 0x00, 0xF8, 0x00, 0x0E, 0x00, 0xFA, 0x00, 0x0C, 0x00, 0xFC, 0x00, 0x12, 0x00, 0xF6, 0x00,
    0x10, 0x68, 0xF7, 0x38, 0x12, 0xC0, 0xF7, 0x04, 0x14, 0x00, 0xF4, 0x00, 0x08, 0x00, 0xF8, 0x00,
    0x04, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x04, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8039B360, &JASDsp::DSPADPCM_FILTER);

/* 8039B3A0-8039B8A0 -00001 0500+00 1/1 0/0 0/0 .rodata          DSPRES_FILTER__6JASDsp */
SECTION_RODATA void* const JASDsp::DSPRES_FILTER[320] = {
    (void*)0x0C3966AD,
    (void*)0x0D46FFDF,
    (void*)0x0B396696,
    (void*)0x0E5FFFD8,
    (void*)0x0A446669,
    (void*)0x0F83FFD0,
    (void*)0x095A6626,
    (void*)0x10B4FFC8,
    (void*)0x087D65CD,
    (void*)0x11F0FFBF,
    (void*)0x07AB655E,
    (void*)0x1338FFB6,
    (void*)0x06E464D9,
    (void*)0x148CFFAC,
    (void*)0x0628643F,
    (void*)0x15EBFFA1,
    (void*)0x0577638F,
    (void*)0x1756FF96,
    (void*)0x04D162CB,
    (void*)0x18CBFF8A,
    (void*)0x043561F3,
    (void*)0x1A4CFF7E,
    (void*)0x03A46106,
    (void*)0x1BD7FF71,
    (void*)0x031C6007,
    (void*)0x1D6CFF64,
    (void*)0x029F5EF5,
    (void*)0x1F0BFF56,
    (void*)0x022A5DD0,
    (void*)0x20B3FF48,
    (void*)0x01BE5C9A,
    (void*)0x2264FF3A,
    (void*)0x015B5B53,
    (void*)0x241EFF2C,
    (void*)0x010159FC,
    (void*)0x25E0FF1E,
    (void*)0x00AE5896,
    (void*)0x27A9FF10,
    (void*)0x00635720,
    (void*)0x297AFF02,
    (void*)0x001F559D,
    (void*)0x2B50FEF4,
    (void*)0xFFE2540D,
    (void*)0x2D2CFEE8,
    (void*)0xFFAC5270,
    (void*)0x2F0DFEDB,
    (void*)0xFF7C50C7,
    (void*)0x30F3FED0,
    (void*)0xFF534F14,
    (void*)0x32DCFEC6,
    (void*)0xFF2E4D57,
    (void*)0x34C8FEBD,
    (void*)0xFF0F4B91,
    (void*)0x36B6FEB6,
    (void*)0xFEF549C2,
    (void*)0x38A5FEB0,
    (void*)0xFEDF47ED,
    (void*)0x3A95FEAC,
    (void*)0xFECE4611,
    (void*)0x3C85FEAB,
    (void*)0xFEC04430,
    (void*)0x3E74FEAC,
    (void*)0xFEB6424A,
    (void*)0x4060FEAF,
    (void*)0xFEAF4060,
    (void*)0x424AFEB6,
    (void*)0xFEAC3E74,
    (void*)0x4430FEC0,
    (void*)0xFEAB3C85,
    (void*)0x4611FECE,
    (void*)0xFEAC3A95,
    (void*)0x47EDFEDF,
    (void*)0xFEB038A5,
    (void*)0x49C2FEF5,
    (void*)0xFEB636B6,
    (void*)0x4B91FF0F,
    (void*)0xFEBD34C8,
    (void*)0x4D57FF2E,
    (void*)0xFEC632DC,
    (void*)0x4F14FF53,
    (void*)0xFED030F3,
    (void*)0x50C7FF7C,
    (void*)0xFEDB2F0D,
    (void*)0x5270FFAC,
    (void*)0xFEE82D2C,
    (void*)0x540DFFE2,
    (void*)0xFEF42B50,
    (void*)0x559D001F,
    (void*)0xFF02297A,
    (void*)0x57200063,
    (void*)0xFF1027A9,
    (void*)0x589600AE,
    (void*)0xFF1E25E0,
    (void*)0x59FC0101,
    (void*)0xFF2C241E,
    (void*)0x5B53015B,
    (void*)0xFF3A2264,
    (void*)0x5C9A01BE,
    (void*)0xFF4820B3,
    (void*)0x5DD0022A,
    (void*)0xFF561F0B,
    (void*)0x5EF5029F,
    (void*)0xFF641D6C,
    (void*)0x6007031C,
    (void*)0xFF711BD7,
    (void*)0x610603A4,
    (void*)0xFF7E1A4C,
    (void*)0x61F30435,
    (void*)0xFF8A18CB,
    (void*)0x62CB04D1,
    (void*)0xFF961756,
    (void*)0x638F0577,
    (void*)0xFFA115EB,
    (void*)0x643F0628,
    (void*)0xFFAC148C,
    (void*)0x64D906E4,
    (void*)0xFFB61338,
    (void*)0x655E07AB,
    (void*)0xFFBF11F0,
    (void*)0x65CD087D,
    (void*)0xFFC810B4,
    (void*)0x6626095A,
    (void*)0xFFD00F83,
    (void*)0x66690A44,
    (void*)0xFFD80E5F,
    (void*)0x66960B39,
    (void*)0xFFDF0D46,
    (void*)0x66AD0C39,
    (void*)0x00000C8B,
    (void*)0x18F82527,
    (void*)0x30FB3C56,
    (void*)0x471C5133,
    (void*)0x5A8262F1,
    (void*)0x6A6D70E2,
    (void*)0x76417A7C,
    (void*)0x7D897F61,
    (void*)0x7FFF7F61,
    (void*)0x7D897A7C,
    (void*)0x764170E2,
    (void*)0x6A6D62F1,
    (void*)0x5A825133,
    (void*)0x471C3C56,
    (void*)0x30FB2527,
    (void*)0x18F80C8B,
    (void*)0x0000F375,
    (void*)0xE708DAD9,
    (void*)0xCF05C3AA,
    (void*)0xB8E4AECD,
    (void*)0xA57E9D0F,
    (void*)0x95938F1E,
    (void*)0x89BF8584,
    (void*)0x8277809F,
    (void*)0x8001809F,
    (void*)0x82778584,
    (void*)0x89BF8F1E,
    (void*)0x95939D0F,
    (void*)0xA57EAECD,
    (void*)0xB8E4C3AA,
    (void*)0xCF05DAD9,
    (void*)0xE708F375,
    (void*)0x000007FF,
    (void*)0x0FFF17FF,
    (void*)0x1FFF27FF,
    (void*)0x2FFF37FF,
    (void*)0x3FFF47FF,
    (void*)0x4FFF57FF,
    (void*)0x5FFF67FF,
    (void*)0x6FFF77FF,
    (void*)0x7FFF7800,
    (void*)0x70006800,
    (void*)0x60005800,
    (void*)0x50004800,
    (void*)0x40003800,
    (void*)0x30002800,
    (void*)0x20001800,
    (void*)0x10000800,
    (void*)0x0000F801,
    (void*)0xF001E801,
    (void*)0xE001D801,
    (void*)0xD001C801,
    (void*)0xC001B801,
    (void*)0xB001A801,
    (void*)0xA0019801,
    (void*)0x90018801,
    (void*)(((char*)cDyl_InitAsyncIsDone__Fv) + 0x68),
    (void*)0x90009800,
    (void*)0xA000A800,
    (void*)0xB000B800,
    (void*)0xC000C800,
    (void*)0xD000D800,
    (void*)0xE000E800,
    (void*)0xF000F800,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x1FFF3FFF,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x1FFFC001,
    (void*)0x00000192,
    (void*)0x032404B6,
    (void*)0x064707D9,
    (void*)0x096A0AFB,
    (void*)0x0C8B0E1B,
    (void*)0x0FAB1139,
    (void*)0x12C71455,
    (void*)0x15E1176D,
    (void*)0x18F81A82,
    (void*)0x1C0B1D93,
    (void*)0x1F19209F,
    (void*)0x222323A6,
    (void*)0x252726A7,
    (void*)0x282629A3,
    (void*)0x2B1F2C98,
    (void*)0x2E102F87,
    (void*)0x30FB326E,
    (void*)0x33DE354D,
    (void*)0x36B93824,
    (void*)0x398C3AF2,
    (void*)0x3C563DB7,
    (void*)0x3F174073,
    (void*)0x41CD4325,
    (void*)0x447A45CC,
    (void*)0x471C4869,
    (void*)0x49B34AFB,
    (void*)0x4C3F4D81,
    (void*)0x4EBF4FFB,
    (void*)0x51335268,
    (void*)0x539A54C9,
    (void*)0x55F5571D,
    (void*)0x58425964,
    (void*)0x5A825B9C,
    (void*)0x5CB35DC7,
    (void*)0x5ED75FE3,
    (void*)0x60EB61F0,
    (void*)0x62F163EE,
    (void*)0x64E865DD,
    (void*)0x66CF67BC,
    (void*)0x68A6698B,
    (void*)0x6A6D6B4A,
    (void*)0x6C236CF8,
    (void*)0x6DC96E96,
    (void*)0x6F5E7022,
    (void*)0x70E2719D,
    (void*)0x72547307,
    (void*)0x73B5745F,
    (void*)0x750475A5,
    (void*)0x764176D8,
    (void*)0x776B77FA,
    (void*)0x78847909,
    (void*)0x79897A05,
    (void*)0x7A7C7AEE,
    (void*)0x7B5C7BC5,
    (void*)0x7C297C88,
    (void*)0x7CE37D39,
    (void*)0x7D897DD5,
    (void*)0x7E1D7E5F,
    (void*)0x7E9C7ED5,
    (void*)0x7F097F37,
    (void*)0x7F617F86,
    (void*)0x7FA67FC1,
    (void*)0x7FD87FE9,
    (void*)0x7FF57FFD,
};
COMPILER_STRIP_GATE(0x8039B3A0, &JASDsp::DSPRES_FILTER);

/* 8029DAC8-8029DB78 298408 00B0+00 0/0 1/1 0/0 .text            initBuffer__6JASDspFv */
void JASDsp::initBuffer() {
    CH_BUF = new(JASDram, 0x20) TChannel[64];
    FX_BUF = new(JASDram, 0x20) u8[0x80];
    JASCalc::bzero(CH_BUF, 0x6000);
    JASCalc::bzero(FX_BUF, 0x80);
    for (u8 i = 0; i < 4; i++) {
        setFXLine(i, NULL, NULL);
    }
    DsetupTable(0x40, u32(CH_BUF), u32(&DSPRES_FILTER), u32(&DSPADPCM_FILTER), u32(FX_BUF));
    flushBuffer();
}

/* ############################################################################################## */
/* 803C78F0-803C7920 024A10 0018+18 1/1 0/0 0/0 .data            SEND_TABLE__6JASDsp */
SECTION_DATA u16 JASDsp::SEND_TABLE[12 + 12 /* padding */] = {
    0x0D00,
    0x0D60,
    0x0DC8,
    0x0E28,
    0x0E88,
    0x0EE8,
    0x0CA0,
    0x0F40,
    0x0FA0,
    0x0B00,
    0x09A0,
    0x0000,
    /* padding */
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
};

/* 8029DB78-8029DCA4 2984B8 012C+00 1/1 1/1 0/0 .text
 * setFXLine__6JASDspFUcPsPQ26JASDsp13FxlineConfig_             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDsp::setFXLine(u8 param_0, s16* param_1, JASDsp::FxlineConfig_* param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASDSPInterface/setFXLine__6JASDspFUcPsPQ26JASDsp13FxlineConfig_.s"
}
#pragma pop

/* 8029DCA4-8029DCE0 2985E4 003C+00 0/0 1/1 0/0 .text            init__Q26JASDsp8TChannelFv */
void JASDsp::TChannel::init() {
    mPauseFlag = 0;
    mIsFinished = 0;
    mForcedStop = 0;
    mIsActive = 0;
    field_0x058 = 0;
    field_0x068 = 0;
    initFilter();
}

/* 8029DCE0-8029DD44 298620 0064+00 0/0 1/1 0/0 .text            playStart__Q26JASDsp8TChannelFv */
// regswap
#ifdef NONMATCHING
void JASDsp::TChannel::playStart() {
    field_0x10c = 0;
    field_0x060 = 0;
    field_0x008 = 1;
    field_0x066 = 0;
    for (int i = 0; i < 4; i++) {
        field_0x078[i] = 0;
        field_0x0a8[i] = 0;
    }
    for (int i = 0; i < 20; i++) {
        field_0x080[i] = 0;
    }
    mIsActive = 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDsp::TChannel::playStart() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDSPInterface/playStart__Q26JASDsp8TChannelFv.s"
}
#pragma pop
#endif

/* 8029DD44-8029DD50 298684 000C+00 0/0 1/1 0/0 .text            playStop__Q26JASDsp8TChannelFv */
void JASDsp::TChannel::playStop() {
    mIsActive = 0;
}

/* 8029DD50-8029DD60 298690 0010+00 0/0 1/1 0/0 .text replyFinishRequest__Q26JASDsp8TChannelFv */
void JASDsp::TChannel::replyFinishRequest() {
    mIsFinished = 0;
    mIsActive = 0;
}

/* 8029DD60-8029DD6C 2986A0 000C+00 0/0 1/1 0/0 .text            forceStop__Q26JASDsp8TChannelFv */
void JASDsp::TChannel::forceStop() {
    mForcedStop = 1;
}

/* 8029DD6C-8029DD7C 2986AC 0010+00 1/1 0/0 0/0 .text            isActive__Q26JASDsp8TChannelCFv */
bool JASDsp::TChannel::isActive() const {
    return mIsActive != 0;
}

/* 8029DD7C-8029DD8C 2986BC 0010+00 0/0 1/1 0/0 .text            isFinish__Q26JASDsp8TChannelCFv */
bool JASDsp::TChannel::isFinish() const {
    return mIsFinished != 0;
}

/* ############################################################################################## */
/* 8045574C-80455754 003D4C 0008+00 1/1 0/0 0/0 .sdata2          COMP_BLOCKSAMPLES$331 */
SECTION_SDATA2 static u8 COMP_BLOCKSAMPLES[8] = {
    0x10, 0x10, 0x01, 0x01, 0x01, 0x10, 0x10, 0x01,
};

/* 80455754-8045575C 003D54 0008+00 1/1 0/0 0/0 .sdata2          COMP_BLOCKBYTES$332 */
SECTION_SDATA2 static u8 COMP_BLOCKBYTES[8] = {
    0x09, 0x05, 0x08, 0x10, 0x01, 0x01, 0x01, 0x01,
};

/* 8029DD8C-8029DEAC 2986CC 0120+00 0/0 1/1 0/0 .text
 * setWaveInfo__Q26JASDsp8TChannelFRC11JASWaveInfoUlUl          */
void JASDsp::TChannel::setWaveInfo(JASWaveInfo const& param_0, u32 param_1, u32 param_2) {
    field_0x118 = param_1;
    field_0x064 = COMP_BLOCKSAMPLES[param_0.field_0x00];
    field_0x100 = COMP_BLOCKBYTES[param_0.field_0x00];
    field_0x068 = 0;
    if (field_0x100 >= 4) {
        field_0x11c = param_0.field_0x18;
        field_0x102 = param_0.field_0x02;
        if (field_0x102) {
            if (param_2 == 1) {
                param_2 = param_0.field_0x10;
            }
            field_0x110 = param_0.field_0x10;
            field_0x114 = param_0.field_0x14;
            field_0x104 = param_0.field_0x1c;
            field_0x106 = param_0.field_0x1e;
        } else {
            field_0x114 = field_0x11c;
        }
        if (param_2 && field_0x114 > param_2) {
            switch (param_0.field_0x00) {
            case 0:
            case 1:
                field_0x068 = param_2;
                field_0x118 += param_2 * field_0x100 >> 4;
                field_0x110 -= param_2;
                field_0x114 -= param_2;
                break;
            case 2:
            case 3:
                field_0x068 = param_2;
                break;
            }
        }
        for (int i = 0; i < 16; i++) {
            field_0x0b0[i] = 0;
        }
    }
}

/* 8029DEAC-8029DEC4 2987EC 0018+00 0/0 1/1 0/0 .text            setOscInfo__Q26JASDsp8TChannelFUl
 */
void JASDsp::TChannel::setOscInfo(u32 param_0) {
    field_0x118 = 0;
    field_0x064 = 16;
    field_0x100 = param_0;
}

/* 8029DEC4-8029DEF0 298804 002C+00 0/0 1/1 0/0 .text            initAutoMixer__Q26JASDsp8TChannelFv
 */
void JASDsp::TChannel::initAutoMixer() {
    if (field_0x058) {
        field_0x054 = field_0x056;
    } else {
        field_0x054 = 0;
        field_0x058 = 1;
    }
}

/* 8029DEF0-8029DF1C 298830 002C+00 0/0 1/1 0/0 .text setAutoMixer__Q26JASDsp8TChannelFUsUcUcUcUc
 */
void JASDsp::TChannel::setAutoMixer(u16 param_0, u8 param_1, u8 param_2, u8 param_3,
                                        u8 param_4) {
    field_0x050 = (param_1 << 8) | param_2;
    field_0x052 = param_3 << 8 | param_3 << 1;
    field_0x056 = param_0;
    field_0x058 = 1;
}

/* 8029DF1C-8029DF34 29885C 0018+00 0/0 2/2 0/0 .text            setPitch__Q26JASDsp8TChannelFUs */
void JASDsp::TChannel::setPitch(u16 param_0) {
    if (param_0 >= 0x7fff) {
        param_0 = 0x7fff;
    }
    mPitch = param_0;
}

/* 8029DF34-8029DF54 298874 0020+00 0/0 1/1 0/0 .text setMixerInitVolume__Q26JASDsp8TChannelFUcs
 */
void JASDsp::TChannel::setMixerInitVolume(u8 param_0, s16 param_1) {
    u16* tmp = field_0x010[param_0];
    tmp[2] = param_1;
    tmp[1] = param_1;
    tmp[3] = 0;
}

/* 8029DF54-8029DF80 298894 002C+00 0/0 1/1 0/0 .text setMixerVolume__Q26JASDsp8TChannelFUcs */
void JASDsp::TChannel::setMixerVolume(u8 param_0, s16 param_1) {
    if (mForcedStop == 0) {
        u16* tmp = field_0x010[param_0];
        tmp[1] = param_1;
        tmp[3] &= 0xff;
    }
}

/* 8029DF80-8029DF8C 2988C0 000C+00 0/0 2/2 0/0 .text            setPauseFlag__Q26JASDsp8TChannelFUc
 */
void JASDsp::TChannel::setPauseFlag(u8 param_0) {
    mPauseFlag = param_0;
}

/* 8029DF8C-8029DFB0 2988CC 0024+00 0/0 1/1 0/0 .text            flush__Q26JASDsp8TChannelFv */
void JASDsp::TChannel::flush() {
    DCFlushRange(this, sizeof(*this));
}

/* 8029DFB0-8029E00C 2988F0 005C+00 1/1 0/0 0/0 .text            initFilter__Q26JASDsp8TChannelFv */
// regswap
#ifdef NONMATCHING
void JASDsp::TChannel::initFilter() {
    for (int i = 0; i < 8; i++) {
        fir_filter_params[i] = 0;
    }
    fir_filter_params[0] = 0x7fff;
    for (int i = 0; i < 8; i++) {
        iir_filter_params[i] = 0;
    }
    iir_filter_params[0] = 0x7fff;
    iir_filter_params[4] = 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDsp::TChannel::initFilter() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDSPInterface/initFilter__Q26JASDsp8TChannelFv.s"
}
#pragma pop
#endif

/* 8029E00C-8029E044 29894C 0038+00 0/0 1/1 0/0 .text setFilterMode__Q26JASDsp8TChannelFUs */
void JASDsp::TChannel::setFilterMode(u16 param_0) {
    u8 r30 = param_0 & 0x20;
    u8 r31 = param_0 & 0x1f;
    if (r30) {
        if (r31 > 0x14) {
            r31 = 0x14;
        }
    } else {
        if (r31 > 0x18) {
            r31 = 0x18;
        }
    }
    mFilterMode = r30 + r31;
}

/* 8029E044-8029E06C 298984 0028+00 0/0 1/1 0/0 .text setIIRFilterParam__Q26JASDsp8TChannelFPs */
void JASDsp::TChannel::setIIRFilterParam(s16* param_0) {
    setFilterTable(iir_filter_params, param_0, 8);
}

/* 8029E06C-8029E094 2989AC 0028+00 0/0 1/1 0/0 .text setFIR8FilterParam__Q26JASDsp8TChannelFPs */
void JASDsp::TChannel::setFIR8FilterParam(s16* param_0) {
    setFilterTable(fir_filter_params, param_0, 8);
}

/* 8029E094-8029E09C -00001 0008+00 0/0 0/0 0/0 .text            setDistFilter__Q26JASDsp8TChannelFs
 */
void JASDsp::TChannel::setDistFilter(s16 param_0) {
    iir_filter_params[4] = param_0;
}

/* ############################################################################################## */
/* 8039B8A0-8039B8B8 027F00 0018+00 1/1 0/0 0/0 .rodata          connect_table$463 */
SECTION_RODATA static u16 const connect_table[12] = {
    0x0000, 0x0D00, 0x0D60, 0x0DC0, 0x0E20, 0x0E80,
    0x0EE0, 0x0CA0, 0x0F40, 0x0FA0, 0x0B00, 0x09A0,
};
COMPILER_STRIP_GATE(0x8039B8A0, &connect_table);

/* 8029E09C-8029E0BC 2989DC 0020+00 0/0 1/1 0/0 .text setBusConnect__Q26JASDsp8TChannelFUcUc */
void JASDsp::TChannel::setBusConnect(u8 param_0, u8 param_1) {
    u16* tmp = field_0x010[param_0];
    tmp[0] = connect_table[param_1];
}

/* 8029E0BC-8029E130 2989FC 0074+00 0/0 1/1 0/0 .text            DSP_CreateMap2__FUl */
u16 DSP_CreateMap2(u32 param_0) {
    u16 r30 = 0;
    JASDsp::TChannel* channel = &JASDsp::CH_BUF[param_0 << 4];
    for (int i = 0; i < 16; i++) {
        r30 <<= 1;
        if (channel->isActive()) {
            r30 |= 1;
        }
        channel++;
    }
    return r30;
}

/* ############################################################################################## */
/* 804507B8-804507C0 000238 0004+04 0/0 5/5 0/0 .sdata           one__11JASWaveInfo */
SECTION_SDATA u32 JASWaveInfo::one[1 + 1 /* padding */] = {
    0x00000001,
    /* padding */
    0x00000000,
};

/* 8045575C-80455760 -00001 0004+00 0/0 0/0 0/0 .sdata2          None */
#pragma push
#pragma force_active on
SECTION_SDATA2 static u8 pad_8045575C[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
#pragma pop
