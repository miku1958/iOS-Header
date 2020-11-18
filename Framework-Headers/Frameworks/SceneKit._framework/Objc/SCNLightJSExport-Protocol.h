//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLLight, NSArray, NSString, NSURL, SCNLight, SCNMaterialProperty;

@protocol SCNLightJSExport <JSExport>

@property (strong, nonatomic) NSURL *IESProfileURL;
@property (nonatomic) double attenuationEndDistance;
@property (nonatomic) double attenuationFalloffExponent;
@property (nonatomic) double attenuationStartDistance;
@property (nonatomic) BOOL automaticallyAdjustsShadowProjection;
@property (nonatomic) BOOL castsShadow;
@property (nonatomic) unsigned long long categoryBitMask;
@property (strong, nonatomic) id color;
@property (nonatomic) BOOL forcesBackFaceCasters;
@property (readonly, nonatomic) SCNMaterialProperty *gobo;
@property (nonatomic) double intensity;
@property (nonatomic) double maximumShadowDistance;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double orthographicScale;
@property (readonly, nonatomic) SCNLight *presentationLight;
@property (nonatomic) BOOL sampleDistributedShadowMaps;
@property (nonatomic) double shadowBias;
@property (nonatomic) unsigned long long shadowCascadeCount;
@property (nonatomic) double shadowCascadeSplittingFactor;
@property (strong, nonatomic) id shadowColor;
@property (nonatomic) struct CGSize shadowMapSize;
@property (nonatomic) long long shadowMode;
@property (nonatomic) double shadowRadius;
@property (nonatomic) unsigned long long shadowSampleCount;
@property (nonatomic) double spotInnerAngle;
@property (nonatomic) double spotOuterAngle;
@property (nonatomic) double temperature;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double zFar;
@property (nonatomic) double zNear;

+ (id)light;
+ (id)lightWithMDLLight:(MDLLight *)arg1;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (id)attributeForKey:(NSString *)arg1;
- (id)copy;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)setAttribute:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)valueForKey:(NSString *)arg1;
- (id)valueForKeyPath:(NSString *)arg1;
@end
