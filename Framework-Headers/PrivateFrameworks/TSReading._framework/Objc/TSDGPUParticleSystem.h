//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDMTLParticleSystem-Protocol.h>

@class NSArray, NSMutableSet, NSString, TSDGPUDataBuffer, TSDGPUDataBufferAttribute, TSDMetalContext;
@protocol MTLTexture;

@interface TSDGPUParticleSystem : NSObject <TSDMTLParticleSystem>
{
    BOOL *_visibilities;
    BOOL _isInitialized;
    BOOL _isDataBufferInitialized;
    unsigned long long _textureCount;
    BOOL _hasParticleTexture;
    NSMutableSet *_attributesInShader;
    BOOL _shouldDraw;
    id _randomGenerator;
    TSDMetalContext *_metalContext;
    id<MTLTexture> _vertexColorTexture;
    unsigned long long _particleCount;
    unsigned long long _visibleParticleCount;
    unsigned long long _particlesWide;
    unsigned long long _particlesHigh;
    double _duration;
    unsigned long long _direction;
    TSDGPUDataBufferAttribute *_positionAttribute;
    TSDGPUDataBufferAttribute *_centerAttribute;
    TSDGPUDataBufferAttribute *_texCoordAttribute;
    TSDGPUDataBufferAttribute *_particleTexCoordAttribute;
    TSDGPUDataBufferAttribute *_colorAttribute;
    TSDGPUDataBufferAttribute *_lifeSpanAttribute;
    TSDGPUDataBufferAttribute *_speedAttribute;
    TSDGPUDataBufferAttribute *_rotationAttribute;
    TSDGPUDataBufferAttribute *_scaleAttribute;
    TSDGPUDataBufferAttribute *_colorTexCoordAttribute;
    TSDGPUDataBuffer *_dataBuffer;
    struct CGSize _vertexTextureSize;
    struct CGSize _particleSize;
    struct CGSize _objectSize;
    struct CGSize _slideSize;
}

@property (readonly, nonatomic) TSDGPUDataBufferAttribute *centerAttribute; // @synthesize centerAttribute=_centerAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *colorAttribute; // @synthesize colorAttribute=_colorAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *colorTexCoordAttribute; // @synthesize colorTexCoordAttribute=_colorTexCoordAttribute;
@property (readonly, nonatomic) TSDGPUDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property (readonly, nonatomic) NSArray *dataBufferAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *lifeSpanAttribute; // @synthesize lifeSpanAttribute=_lifeSpanAttribute;
@property (readonly, nonatomic) TSDMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property (readonly, nonatomic) struct CGSize objectSize; // @synthesize objectSize=_objectSize;
@property (readonly, nonatomic) unsigned long long particleCount; // @synthesize particleCount=_particleCount;
@property (readonly, nonatomic) struct CGSize particleSize; // @synthesize particleSize=_particleSize;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *particleTexCoordAttribute; // @synthesize particleTexCoordAttribute=_particleTexCoordAttribute;
@property (readonly, nonatomic) unsigned long long particlesHigh; // @synthesize particlesHigh=_particlesHigh;
@property (readonly, nonatomic) unsigned long long particlesWide; // @synthesize particlesWide=_particlesWide;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *positionAttribute; // @synthesize positionAttribute=_positionAttribute;
@property (readonly, nonatomic) id randomGenerator; // @synthesize randomGenerator=_randomGenerator;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *rotationAttribute; // @synthesize rotationAttribute=_rotationAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *scaleAttribute; // @synthesize scaleAttribute=_scaleAttribute;
@property (readonly, nonatomic) BOOL shouldDraw; // @synthesize shouldDraw=_shouldDraw;
@property (readonly, nonatomic) struct CGSize slideSize; // @synthesize slideSize=_slideSize;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *speedAttribute; // @synthesize speedAttribute=_speedAttribute;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *texCoordAttribute; // @synthesize texCoordAttribute=_texCoordAttribute;
@property (readonly, nonatomic) id<MTLTexture> vertexColorTexture; // @synthesize vertexColorTexture=_vertexColorTexture;
@property (readonly, nonatomic) struct CGSize vertexTextureSize; // @synthesize vertexTextureSize=_vertexTextureSize;
@property (readonly, nonatomic) unsigned long long visibleParticleCount; // @synthesize visibleParticleCount=_visibleParticleCount;

+ (id)newDataBufferAttributeWithName:(id)arg1;
+ (id)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 randomGenerator:(id)arg6 shader:(id)arg7 metalContext:(id)arg8;
+ (id)newParticleSystemWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7 shader:(id)arg8 metalContext:(id)arg9;
+ (unsigned long long)numberOfVerticesPerParticle;
+ (struct CGSize)p_particleSystemSizeWithRequestedNumber:(unsigned long long)arg1 objectSize:(struct CGSize)arg2;
+ (BOOL)shouldDrawInvisibleParticles;
+ (BOOL)willOverrideColorTexCoords;
+ (BOOL)willOverrideColors;
+ (BOOL)willOverrideGeometry;
+ (BOOL)willOverrideStartingPoints;
+ (BOOL)willOverrideVisibilities;
- (CDStruct_6e3f967a)centerAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_83984b6f)colorAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_6e3f967a)colorTexCoordAtIndexPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (void)drawMetalWithEncoder:(id)arg1;
- (unsigned long long)indexFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)indexPointFromIndex:(unsigned long long)arg1;
- (id)initWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7 shader:(id)arg8 metalContext:(id)arg9;
- (CDStruct_6e3f967a)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (struct CGContext *)newContextFromTexture:(id)arg1;
- (void)p_logParticleInformation;
- (struct CGSize)p_resizeSystemToFitWithinMaxVerticesWithSystemSize:(struct CGSize)arg1;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setDataBufferAttribute:(id *)arg1 withName:(id)arg2 defaultDataType:(long long)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5;
- (void)p_setupDataBufferWithParticleCount:(unsigned long long)arg1 visibleParticleCount:(unsigned long long)arg2;
- (void)p_setupParticleDataWithTexture:(id)arg1;
- (void)p_setupParticleSystemWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7;
- (void)p_setupParticleTextureDataWithTexture:(id)arg1 capabilities:(id)arg2;
- (void)p_setupVertexData;
- (CDStruct_869f9c67)rotationAtIndexPoint:(struct CGPoint)arg1;
- (double)rotationMax;
- (double)scaleAtIndexPoint:(struct CGPoint)arg1;
- (void)setupMetalWithShader:(id)arg1;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(BOOL)arg3;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(BOOL)arg3 capabilities:(id)arg4;
- (CDStruct_869f9c67)speedAtIndexPoint:(struct CGPoint)arg1;
- (double)speedMax;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_6e3f967a)vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(struct CGPoint)arg2;
- (BOOL)visibilityAtIndexPoint:(struct CGPoint)arg1;

@end

