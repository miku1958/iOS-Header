//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, NSArray, NSDictionary, NSString, SCNGeometry, SCNParticleSystem;

@protocol SCNParticleSystemJSExport <JSExport>

@property (nonatomic) struct SCNVector3 acceleration;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) BOOL affectedByPhysicsFields;
@property (nonatomic) long long birthDirection;
@property (nonatomic) long long birthLocation;
@property (nonatomic) double birthRate;
@property (nonatomic) double birthRateVariation;
@property (nonatomic, getter=isBlackPassEnabled) BOOL blackPassEnabled;
@property (nonatomic) long long blendMode;
@property (copy, nonatomic) NSArray *colliderNodes;
@property (nonatomic) double dampingFactor;
@property (nonatomic) double emissionDuration;
@property (nonatomic) double emissionDurationVariation;
@property (strong, nonatomic) SCNGeometry *emitterShape;
@property (nonatomic) struct SCNVector3 emittingDirection;
@property (nonatomic) double fresnelExponent;
@property (nonatomic) double idleDuration;
@property (nonatomic) double idleDurationVariation;
@property (nonatomic) long long imageSequenceAnimationMode;
@property (nonatomic) unsigned long long imageSequenceColumnCount;
@property (nonatomic) double imageSequenceFrameRate;
@property (nonatomic) double imageSequenceFrameRateVariation;
@property (nonatomic) double imageSequenceInitialFrame;
@property (nonatomic) double imageSequenceInitialFrameVariation;
@property (nonatomic) unsigned long long imageSequenceRowCount;
@property (nonatomic, getter=isLightingEnabled) BOOL lightingEnabled;
@property (nonatomic, getter=isLocal) BOOL local;
@property (nonatomic) BOOL loops;
@property (nonatomic) struct SCNVector3 orientationDirection;
@property (nonatomic) long long orientationMode;
@property (nonatomic) double particleAngle;
@property (nonatomic) double particleAngleVariation;
@property (nonatomic) double particleAngularVelocity;
@property (nonatomic) double particleAngularVelocityVariation;
@property (nonatomic) double particleBounce;
@property (nonatomic) double particleBounceVariation;
@property (nonatomic) double particleCharge;
@property (nonatomic) double particleChargeVariation;
@property (strong, nonatomic) id particleColor;
@property (nonatomic) struct SCNVector4 particleColorVariation;
@property (nonatomic) BOOL particleDiesOnCollision;
@property (nonatomic) double particleFriction;
@property (nonatomic) double particleFrictionVariation;
@property (strong, nonatomic) id particleImage;
@property (nonatomic) double particleIntensity;
@property (nonatomic) double particleIntensityVariation;
@property (nonatomic) double particleLifeSpan;
@property (nonatomic) double particleLifeSpanVariation;
@property (nonatomic) double particleMass;
@property (nonatomic) double particleMassVariation;
@property (nonatomic) double particleSize;
@property (nonatomic) double particleSizeVariation;
@property (nonatomic) double particleVelocity;
@property (nonatomic) double particleVelocityVariation;
@property (copy, nonatomic) NSDictionary *propertyControllers;
@property (nonatomic) long long sortingMode;
@property (nonatomic) double speedFactor;
@property (nonatomic) double spreadingAngle;
@property (nonatomic) double stretchFactor;
@property (strong, nonatomic) SCNParticleSystem *systemSpawnedOnCollision;
@property (strong, nonatomic) SCNParticleSystem *systemSpawnedOnDying;
@property (strong, nonatomic) SCNParticleSystem *systemSpawnedOnLiving;
@property (nonatomic) double warmupDuration;

+ (id)particleSystem;
+ (id)particleSystemNamed:(NSString *)arg1 inDirectory:(NSString *)arg2;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (void)addModifierForProperties:(NSArray *)arg1 atStage:(long long)arg2 withBlock:(void (^)(void **, unsigned long long *, long long, long long, float))arg3;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (id)copy;
- (void)handleEvent:(long long)arg1 forProperties:(NSArray *)arg2 withBlock:(void (^)(void **, unsigned long long *, unsigned int *, long long))arg3;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)removeAllModifiers;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeModifiersOfStage:(long long)arg1;
- (void)reset;
- (void)resumeAnimationForKey:(NSString *)arg1;
@end

