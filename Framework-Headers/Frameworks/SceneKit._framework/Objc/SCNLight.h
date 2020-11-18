//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString, NSURL, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;
@protocol MTLTexture;

@interface SCNLight : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    struct __C3DLight *_light;
    unsigned int _isPresentationInstance:1;
    unsigned int _goboProjectShadows:1;
    unsigned int _castsShadow:1;
    unsigned int _usesDeferredShadows:1;
    unsigned int _usesModulatedMode:1;
    unsigned int _baked:1;
    unsigned int _shouldBakeDirectLighting:1;
    unsigned int _shouldBakeIndirectLighting:1;
    unsigned int _automaticallyAdjustsShadowProjection:1;
    unsigned int _forcesBackFaceCasters:1;
    unsigned int _sampleDistributedShadowMaps:1;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSString *_type;
    id _color;
    id _shadowColor;
    float _shadowRadius;
    double _intensity;
    double _temperature;
    double _orthographicScale;
    struct CGSize _shadowMapSize;
    unsigned long long _categoryBitMask;
    unsigned char _shadowSampleCount;
    unsigned char _shadowCascadeCount;
    double _maximumShadowDistance;
    double _shadowCascadeSplittingFactor;
    double _cascadeDebugFactor;
    double _zNear;
    double _zFar;
    double _shadowBias;
    float _attenuationStartDistance;
    float _attenuationEndDistance;
    float _attenuationFalloffExponent;
    float _spotInnerAngle;
    float _spotOuterAngle;
    float _spotFalloffExponent;
    SCNMaterialProperty *_gobo;
    SCNMaterialProperty *_ies;
    NSURL *_IESProfileURL;
    SCNTechnique *_technique;
    NSData *_sphericalHarmonics;
    id<MTLTexture> _probeTexture;
}

@property (strong, nonatomic) NSURL *IESProfileURL;
@property (readonly) NSArray *animationKeys;
@property (nonatomic) double attenuationEndDistance;
@property (nonatomic) double attenuationFalloffExponent;
@property (nonatomic) double attenuationStartDistance;
@property (nonatomic) BOOL automaticallyAdjustsShadowProjection;
@property (nonatomic) BOOL castsShadow;
@property (nonatomic) unsigned long long categoryBitMask;
@property (strong, nonatomic) id color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcesBackFaceCasters;
@property (readonly, nonatomic) SCNMaterialProperty *gobo;
@property (readonly) unsigned long long hash;
@property (nonatomic) double intensity;
@property (nonatomic) double maximumShadowDistance;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double orthographicScale;
@property (nonatomic) BOOL sampleDistributedShadowMaps;
@property (nonatomic) double shadowBias;
@property (nonatomic) unsigned long long shadowCascadeCount;
@property (nonatomic) double shadowCascadeSplittingFactor;
@property (strong, nonatomic) id shadowColor;
@property (nonatomic) struct CGSize shadowMapSize;
@property (nonatomic) long long shadowMode;
@property (nonatomic) double shadowRadius;
@property (nonatomic) unsigned long long shadowSampleCount;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) double spotInnerAngle;
@property (nonatomic) double spotOuterAngle;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;
@property (nonatomic) double temperature;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double zFar;
@property (nonatomic) double zNear;

+ (id)light;
+ (id)lightWithLightRef:(struct __C3DLight *)arg1;
+ (id)lightWithMDLLight:(id)arg1;
+ (id)lightWithMDLLightProbe:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (const void *)__CFObject;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNLight:(id)arg1;
- (void)_customEncodingOfSCNLight:(id)arg1;
- (void)_didDecodeSCNLight:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (id)_probeTexture;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (double)_shadowCascadeDebugFactor;
- (id)_sphericalHarmonics;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (BOOL)adjustsShadowProjection;
- (id)animationForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)forceBackFaceCasters;
- (id)identifier;
- (id)init;
- (id)initPresentationLightWithLightRef:(struct __C3DLight *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLightRef:(struct __C3DLight *)arg1;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (BOOL)isBaked;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DLight *)lightRef;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationLight;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)setAdjustsShadowProjection:(BOOL)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setBaked:(BOOL)arg1;
- (void)setForceBackFaceCasters:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShouldBakeDirectLighting:(BOOL)arg1;
- (void)setShouldBakeIndirectLighting:(BOOL)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (void)setSpotFalloffExponent:(double)arg1;
- (void)setUsesDeferredShadows:(BOOL)arg1;
- (void)setUsesModulatedMode:(BOOL)arg1;
- (void)set_probeTexture:(id)arg1;
- (void)set_shadowCascadeDebugFactor:(double)arg1;
- (void)set_sphericalHarmonics:(id)arg1;
- (BOOL)shouldBakeDirectLighting;
- (BOOL)shouldBakeIndirectLighting;
- (double)spotFalloffExponent;
- (void)unbindAnimatablePath:(id)arg1;
- (BOOL)usesDeferredShadows;
- (BOOL)usesModulatedMode;

@end
