//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSDictionary, SKAction, SKKeyframeSequence, SKShader, SKTexture, UIColor;

@interface SKEmitterNode : SKNode
{
    SKTexture *_particleTexture;
    struct SKCEmitterNode *_skcEmitterNode;
    SKNode *_target;
    SKKeyframeSequence *_colorSequence;
    SKKeyframeSequence *_colorBlendSequence;
    SKKeyframeSequence *_alphaSequence;
    SKKeyframeSequence *_scaleSequence;
    SKKeyframeSequence *_rotationSequence;
    SKKeyframeSequence *_fieldInfluenceSequence;
    SKKeyframeSequence *_particleSpeedSequence;
    unsigned long long _particleRenderOrder;
}

@property (copy, nonatomic) NSDictionary *attributeValues; // @dynamic attributeValues;
@property (nonatomic) double emissionAngle;
@property (nonatomic) double emissionAngleRange;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned long long numParticlesToEmit;
@property (copy, nonatomic) SKAction *particleAction;
@property (nonatomic) double particleAlpha;
@property (nonatomic) double particleAlphaRange;
@property (strong, nonatomic) SKKeyframeSequence *particleAlphaSequence;
@property (nonatomic) double particleAlphaSpeed;
@property (nonatomic) double particleBirthRate;
@property (nonatomic) long long particleBlendMode;
@property (strong, nonatomic) UIColor *particleColor;
@property (nonatomic) double particleColorAlphaRange;
@property (nonatomic) double particleColorAlphaSpeed;
@property (nonatomic) double particleColorBlendFactor;
@property (nonatomic) double particleColorBlendFactorRange;
@property (strong, nonatomic) SKKeyframeSequence *particleColorBlendFactorSequence;
@property (nonatomic) double particleColorBlendFactorSpeed;
@property (nonatomic) double particleColorBlueRange;
@property (nonatomic) double particleColorBlueSpeed;
@property (nonatomic) double particleColorGreenRange;
@property (nonatomic) double particleColorGreenSpeed;
@property (nonatomic) double particleColorRedRange;
@property (nonatomic) double particleColorRedSpeed;
@property (strong, nonatomic) SKKeyframeSequence *particleColorSequence;
@property (nonatomic) double particleLifetime;
@property (nonatomic) double particleLifetimeRange;
@property (nonatomic) struct CGPoint particlePosition;
@property (nonatomic) struct CGVector particlePositionRange;
@property (nonatomic) unsigned long long particleRenderOrder; // @synthesize particleRenderOrder=_particleRenderOrder;
@property (nonatomic) double particleRotation;
@property (nonatomic) double particleRotationRange;
@property (nonatomic) double particleRotationSpeed;
@property (nonatomic) double particleScale;
@property (nonatomic) double particleScaleRange;
@property (strong, nonatomic) SKKeyframeSequence *particleScaleSequence;
@property (nonatomic) double particleScaleSpeed;
@property (nonatomic) struct CGSize particleSize;
@property (nonatomic) double particleSpeed;
@property (nonatomic) double particleSpeedRange;
@property (strong, nonatomic) SKTexture *particleTexture;
@property (nonatomic) double particleZPosition;
@property (nonatomic) double particleZPositionRange;
@property (nonatomic) double particleZPositionSpeed;
@property (strong, nonatomic) SKShader *shader;
@property (weak, nonatomic) SKNode *targetNode;
@property (nonatomic) double xAcceleration;
@property (nonatomic) double yAcceleration;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;
- (unsigned int)activeParticleCount;
- (void)addSubEmitterNode:(id)arg1;
- (void)advanceSimulationTime:(double)arg1;
- (void)commonInit;
- (void)copyParticlePropertiesToNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugHierarchyPropertyDescriptions;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;
- (BOOL)densityBased;
- (id)description;
- (double)emissionDistance;
- (double)emissionDistanceRange;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldInfluenceSequence;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumParticleCapacity:(unsigned long long)arg1;
- (id)initWithMinimumParticleCapacity:(unsigned long long)arg1 minimumPositionBufferCapacity:(unsigned long long)arg2;
- (BOOL)isEqualToNode:(id)arg1;
- (double)particleDensity;
- (id)particleRotationSequence;
- (id)particleSpeedSequence;
- (id)physicsWorld;
- (void)resetSimulation;
- (void)setDensityBased:(BOOL)arg1;
- (void)setEmissionDistance:(double)arg1;
- (void)setEmissionDistanceRange:(double)arg1;
- (void)setFieldInfluenceSequence:(id)arg1;
- (void)setParticleDensity:(double)arg1;
- (void)setParticleRotationSequence:(id)arg1;
- (void)setParticleSpeedSequence:(id)arg1;
- (void)setPhysicsWorld:(id)arg1;
- (void)setUsesPointSprites:(BOOL)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (void)setWantsNewParticles:(BOOL)arg1;
- (void)setZPosition:(double)arg1;
- (id)subEmitterNode;
- (BOOL)usesPointSprites;
- (id)valueForAttributeNamed:(id)arg1;
- (BOOL)wantsNewParticles;

@end

