//
// Generated By: dol2asm
// Translation Unit: control
//

#include "JSystem/JStudio/JStudio_JParticle/control.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

namespace JStudio {
struct TObject {};

namespace stb {
struct data {
    struct TParse_TBlock_object {};
};

};  // namespace stb

struct TCreateObject {
    /* 80285488 */ ~TCreateObject();
};

struct TAdaptor_particle {};

struct TObject_particle {
    /* 8028776C */ TObject_particle(JStudio::stb::data::TParse_TBlock_object const&,
                                    JStudio::TAdaptor_particle*);
};

};  // namespace JStudio

struct JPABaseEmitter {};

struct JStudio_JParticle {
    struct TCreateObject {
        /* 8028E3A0 */ ~TCreateObject();
        /* 8028E400 */ void create(JStudio::TObject**,
                                   JStudio::stb::data::TParse_TBlock_object const&);
        /* 8028E474 */ void emitter_create(u32);
        /* 8028E4E4 */ void emitter_destroy(JPABaseEmitter*);
        /* 8028E508 */ void
        createObject_JPA_PARTICLE_(JStudio::stb::data::TParse_TBlock_object const&,
                                   JStudio_JParticle::TCreateObject*);
    };

    struct TAdaptor_particle {
        /* 8028E60C */ TAdaptor_particle(JStudio_JParticle::TCreateObject*);
    };
};

struct JPAParticleCallBack {};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct JPAEmitterCallBack {};

struct JPAEmitterManager {
    /* 8027DEBC */ void createSimpleEmitterID(JGeometry::TVec3<f32> const&, u16, u8, u8,
                                              JPAEmitterCallBack*, JPAParticleCallBack*);
    /* 8027E2D8 */ void forceDeleteEmitter(JPABaseEmitter*);
};

//
// Forward References:
//

extern "C" extern void* __vt__Q217JStudio_JParticle13TCreateObject[6];

extern "C" void __dt__Q217JStudio_JParticle13TCreateObjectFv();
extern "C" void
create__Q217JStudio_JParticle13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object();
extern "C" void emitter_create__Q217JStudio_JParticle13TCreateObjectFUl();
extern "C" void emitter_destroy__Q217JStudio_JParticle13TCreateObjectFP14JPABaseEmitter();
extern "C" void
createObject_JPA_PARTICLE___Q217JStudio_JParticle13TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ217JStudio_JParticle13TCreateObject();
extern "C" extern void* __vt__Q217JStudio_JParticle13TCreateObject[6];

//
// External References:
//

void* operator new(u32);
void operator delete(void*);

extern "C" void func_8027DEBC();
extern "C" void forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter();
extern "C" void __dt__Q27JStudio13TCreateObjectFv();
extern "C" void
__ct__Q27JStudio16TObject_particleFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio17TAdaptor_particle();
extern "C" void
__ct__Q217JStudio_JParticle17TAdaptor_particleFPQ217JStudio_JParticle13TCreateObject();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C5AD8-803C5AF0 0018+00 s=1 e=1 z=0  None .data      __vt__Q217JStudio_JParticle13TCreateObject
 */
SECTION_DATA void* __vt__Q217JStudio_JParticle13TCreateObject[6] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__Q217JStudio_JParticle13TCreateObjectFv,
    (void*)
        create__Q217JStudio_JParticle13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object,
    (void*)emitter_create__Q217JStudio_JParticle13TCreateObjectFUl,
    (void*)emitter_destroy__Q217JStudio_JParticle13TCreateObjectFP14JPABaseEmitter,
};

/* 8028E3A0-8028E400 0060+00 s=1 e=1 z=0  None .text __dt__Q217JStudio_JParticle13TCreateObjectFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JParticle::TCreateObject::~TCreateObject() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JParticle/control/__dt__Q217JStudio_JParticle13TCreateObjectFv.s"
}
#pragma pop

/* 8028E400-8028E474 0074+00 s=1 e=1 z=0  None .text
 * create__Q217JStudio_JParticle13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JParticle::TCreateObject::create(JStudio::TObject** param_0,
                                         JStudio::stb::data::TParse_TBlock_object const& param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JParticle/control/func_8028E400.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039ABA8-8039ABB8 000C+04 s=1 e=0 z=0  None .rodata    @1172 */
SECTION_RODATA static u8 const lit_1172[12 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
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

/* 8028E474-8028E4E4 0070+00 s=1 e=0 z=0  None .text
 * emitter_create__Q217JStudio_JParticle13TCreateObjectFUl      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JParticle::TCreateObject::emitter_create(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JParticle/control/emitter_create__Q217JStudio_JParticle13TCreateObjectFUl.s"
}
#pragma pop

/* 8028E4E4-8028E508 0024+00 s=1 e=1 z=0  None .text
 * emitter_destroy__Q217JStudio_JParticle13TCreateObjectFP14JPABaseEmitter */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JParticle::TCreateObject::emitter_destroy(JPABaseEmitter* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JParticle/control/emitter_destroy__Q217JStudio_JParticle13TCreateObjectFP14JPABaseEmitter.s"
}
#pragma pop

/* 8028E508-8028E60C 0104+00 s=1 e=0 z=0  None .text
 * createObject_JPA_PARTICLE___Q217JStudio_JParticle13TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ217JStudio_JParticle13TCreateObject
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JParticle::TCreateObject::createObject_JPA_PARTICLE_(
    JStudio::stb::data::TParse_TBlock_object const& param_0,
    JStudio_JParticle::TCreateObject* param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JParticle/control/func_8028E508.s"
}
#pragma pop
