//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDGLParticleSystem-Protocol.h>
#import <iWorkImport/TSDMTLParticleSystem-Protocol.h>

@class NSArray, NSMutableSet, NSString, TSDGLDataBufferAttribute, TSDGLShader, TSDGPUDataBuffer;
@protocol MTLDevice, TSDAnimationRandomGenerator;

__attribute__((visibility("hidden")))
@interface TSDGPUParticleSystem : NSObject <TSDMTLParticleSystem, TSDGLParticleSystem>
{
    BOOL *_visibilities;
    BOOL _isInitialized;
    BOOL _isDataBufferInitialized;
    unsigned long long _textureCount;
    BOOL _hasParticleTexture;
    NSMutableSet *_attributesInShader;
    BOOL _shouldDraw;
    BOOL _shouldUseMetal;
    BOOL _shouldUseGLSL;
    id<TSDAnimationRandomGenerator> _randomGenerator;
    id<MTLDevice> _device;
    unsigned long long _particleCount;
    unsigned long long _visibleParticleCount;
    unsigned long long _particlesWide;
    unsigned long long _particlesHigh;
    double _duration;
    unsigned long long _direction;
    TSDGLDataBufferAttribute *_positionAttribute;
    TSDGLDataBufferAttribute *_centerAttribute;
    TSDGLDataBufferAttribute *_texCoordAttribute;
    TSDGLDataBufferAttribute *_particleTexCoordAttribute;
    TSDGLDataBufferAttribute *_colorAttribute;
    TSDGLDataBufferAttribute *_lifeSpanAttribute;
    TSDGLDataBufferAttribute *_speedAttribute;
    TSDGLDataBufferAttribute *_rotationAttribute;
    TSDGLDataBufferAttribute *_scaleAttribute;
    TSDGPUDataBuffer *_dataBuffer;
    TSDGLShader *_shader;
    struct CGSize _particleSize;
    struct CGSize _objectSize;
    struct CGSize _slideSize;
}

@property (readonly, nonatomic) TSDGLDataBufferAttribute *centerAttribute; // @synthesize centerAttribute=_centerAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *colorAttribute; // @synthesize colorAttribute=_colorAttribute;
@property (readonly, nonatomic) TSDGPUDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property (readonly, nonatomic) NSArray *dataBufferAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<MTLDevice> device; // @synthesize device=_device;
@property (readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *lifeSpanAttribute; // @synthesize lifeSpanAttribute=_lifeSpanAttribute;
@property (readonly, nonatomic) struct CGSize objectSize; // @synthesize objectSize=_objectSize;
@property (readonly, nonatomic) unsigned long long particleCount; // @synthesize particleCount=_particleCount;
@property (readonly, nonatomic) struct CGSize particleSize; // @synthesize particleSize=_particleSize;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *particleTexCoordAttribute; // @synthesize particleTexCoordAttribute=_particleTexCoordAttribute;
@property (readonly, nonatomic) unsigned long long particlesHigh; // @synthesize particlesHigh=_particlesHigh;
@property (readonly, nonatomic) unsigned long long particlesWide; // @synthesize particlesWide=_particlesWide;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *positionAttribute; // @synthesize positionAttribute=_positionAttribute;
@property (readonly, nonatomic) id<TSDAnimationRandomGenerator> randomGenerator; // @synthesize randomGenerator=_randomGenerator;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *rotationAttribute; // @synthesize rotationAttribute=_rotationAttribute;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *scaleAttribute; // @synthesize scaleAttribute=_scaleAttribute;
@property (readonly, nonatomic) TSDGLShader *shader; // @synthesize shader=_shader;
@property (readonly, nonatomic) BOOL shouldDraw; // @synthesize shouldDraw=_shouldDraw;
@property (readonly, nonatomic) BOOL shouldUseGLSL; // @synthesize shouldUseGLSL=_shouldUseGLSL;
@property (readonly, nonatomic) BOOL shouldUseMetal; // @synthesize shouldUseMetal=_shouldUseMetal;
@property (readonly, nonatomic) struct CGSize slideSize; // @synthesize slideSize=_slideSize;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *speedAttribute; // @synthesize speedAttribute=_speedAttribute;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSDGLDataBufferAttribute *texCoordAttribute; // @synthesize texCoordAttribute=_texCoordAttribute;
@property (readonly, nonatomic) unsigned long long visibleParticleCount; // @synthesize visibleParticleCount=_visibleParticleCount;

+ (id)newDataBufferAttributeWithName:(id)arg1;
+ (id)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 randomGenerator:(id)arg6 pipelineDescriptor:(id)arg7 device:(id)arg8;
+ (id)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(id)arg6 randomGenerator:(id)arg7;
+ (id)newParticleSystemWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7 pipelineDescriptor:(id)arg8 device:(id)arg9;
+ (id)newParticleSystemWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(id)arg7 randomGenerator:(id)arg8;
+ (unsigned long long)numberOfVerticesPerParticle;
+ (struct CGSize)p_particleSystemSizeWithRequestedNumber:(unsigned long long)arg1 objectSize:(struct CGSize)arg2;
+ (BOOL)shouldDrawInvisibleParticles;
+ (BOOL)willOverrideColors;
+ (BOOL)willOverrideGeometry;
+ (BOOL)willOverrideStartingPoints;
+ (BOOL)willOverrideVisibilities;
- (CDStruct_6e3f967a)centerAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_818bb265)colorAtIndexPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (void)drawGLSLWithPercent:(double)arg1 opacity:(double)arg2;
- (void)drawMetalWithEncoder:(id)arg1;
- (unsigned long long)indexFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)indexPointFromIndex:(unsigned long long)arg1;
- (id)initWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7 pipelineDescriptor:(id)arg8 device:(id)arg9;
- (id)initWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(id)arg7 randomGenerator:(id)arg8;
- (CDStruct_6e3f967a)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (struct CGContext *)newContextFromTexture:(id)arg1;
- (void)p_logParticleInformation;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setDataBufferAttribute:(id *)arg1 withName:(id)arg2 defaultDataType:(long long)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5;
- (void)p_setupDataBufferWithParticleCount:(unsigned long long)arg1 visibleParticleCount:(unsigned long long)arg2;
- (void)p_setupParticleDataWithTexture:(id)arg1;
- (void)p_setupParticleSystemWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7;
- (void)p_setupVertexData;
- (CDStruct_03942939)rotationAtIndexPoint:(struct CGPoint)arg1;
- (double)rotationMax;
- (double)scaleAtIndexPoint:(struct CGPoint)arg1;
- (void)setupGLSL;
- (void)setupMetalWithPipelineDescriptor:(id)arg1;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(BOOL)arg3;
- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;
- (double)speedMax;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_6e3f967a)vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(struct CGPoint)arg2;
- (BOOL)visibilityAtIndexPoint:(struct CGPoint)arg1;

@end

