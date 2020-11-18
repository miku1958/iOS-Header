//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;

@interface SCNCamera : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    struct __C3DCamera *_camera;
    unsigned int _isPresentationInstance:1;
    unsigned int _custom:1;
    unsigned int _legacyFov:1;
    unsigned int _usesOrthographicProjection:1;
    unsigned int _automaticallyAdjustsZRange:1;
    unsigned int _fillMode:1;
    unsigned int _projectionDirection:1;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    float _xFov;
    float _yFov;
    double _orthographicScale;
    double _zNear;
    double _zFar;
    float _fieldOfView;
    float _focalLength;
    float _sensorSize;
    float _fStop;
    float _focusDistance;
    float _dofIntensity;
    long long _bladeCount;
    long long _focalBlurSampleCount;
    float _aspectRatio;
    unsigned long long _categoryBitMask;
    struct SCNMatrix4 _projectionTransform;
    SCNTechnique *_technique;
    SCNMaterialProperty *_colorGrading;
    BOOL _wantsHDR;
    float _whitePoint;
    float _averageGray;
    float _exposureOffset;
    float _minimumExposure;
    float _maximumExposure;
    BOOL _wantsExposureAdaptation;
    float _exposureAdaptationDuration;
    float _exposureAdaptationBrighteningSpeedFactor;
    float _exposureAdaptationDarkeningSpeedFactor;
    double _exposureAdaptationHistogramRangeHighProbability;
    double _exposureAdaptationHistogramRangeLowProbability;
    long long _exposureAdaptationMode;
    float _bloomIntensity;
    float _bloomThreshold;
    int _bloomIteration;
    float _bloomBlurRadius;
    float _motionBlurIntensity;
    float _vignettingPower;
    float _vignettingIntensity;
    float _colorFringeStrength;
    float _colorFringeIntensity;
    float _saturation;
    float _contrast;
    struct {
        float intensity;
        float radius;
        float bias;
        float depthThreshold;
        float normalThreshold;
        long long sampleCount;
        long long downSample;
    } _screenSpaceAmbientOcclusion;
}

@property (readonly) NSArray *animationKeys;
@property (nonatomic) double aperture;
@property (nonatomic) long long apertureBladeCount;
@property (nonatomic) BOOL automaticallyAdjustsZRange;
@property (nonatomic) double averageGray;
@property (nonatomic) double bloomBlurRadius;
@property (nonatomic) double bloomIntensity;
@property (nonatomic) double bloomThreshold;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) double colorFringeIntensity;
@property (nonatomic) double colorFringeStrength;
@property (readonly, nonatomic) SCNMaterialProperty *colorGrading;
@property (nonatomic) double contrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property (nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property (nonatomic) double exposureOffset;
@property (nonatomic) double fStop;
@property (nonatomic) double fieldOfView;
@property (nonatomic) double focalBlurRadius;
@property (nonatomic) long long focalBlurSampleCount;
@property (nonatomic) double focalDistance;
@property (nonatomic) double focalLength;
@property (nonatomic) double focalSize;
@property (nonatomic) double focusDistance;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumExposure;
@property (nonatomic) double minimumExposure;
@property (nonatomic) double motionBlurIntensity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double orthographicScale;
@property (nonatomic) long long projectionDirection;
@property (nonatomic) struct SCNMatrix4 projectionTransform;
@property (nonatomic) double saturation;
@property (nonatomic) double screenSpaceAmbientOcclusionBias;
@property (nonatomic) double screenSpaceAmbientOcclusionDepthThreshold;
@property (nonatomic) double screenSpaceAmbientOcclusionIntensity;
@property (nonatomic) double screenSpaceAmbientOcclusionNormalThreshold;
@property (nonatomic) double screenSpaceAmbientOcclusionRadius;
@property (nonatomic) double sensorHeight;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;
@property (nonatomic) BOOL usesOrthographicProjection;
@property (nonatomic) double vignettingIntensity;
@property (nonatomic) double vignettingPower;
@property (nonatomic) BOOL wantsDepthOfField;
@property (nonatomic) BOOL wantsExposureAdaptation;
@property (nonatomic) BOOL wantsHDR;
@property (nonatomic) double whitePoint;
@property (nonatomic) double xFov;
@property (nonatomic) double yFov;
@property (nonatomic) double zFar;
@property (nonatomic) double zNear;

+ (id)camera;
+ (id)cameraWithCameraRef:(struct __C3DCamera *)arg1;
+ (id)cameraWithMDLCamera:(id)arg1;
+ (id)keyPathsForValuesAffectingFieldOfView;
+ (id)keyPathsForValuesAffectingFocalLength;
+ (BOOL)supportsSecureCoding;
- (const void *)__CFObject;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customEncodingOfSCNCamera:(id)arg1;
- (void)_didDecodeSCNCamera:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (void)_registerAsObserver;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateFocalLength;
- (void)_updateFov;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (double)aspectRatio;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (long long)bloomIteration;
- (struct __C3DCamera *)cameraRef;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;
- (float)dofIntensity;
- (void)encodeWithCoder:(id)arg1;
- (double)exposureAdaptationDuration;
- (double)exposureAdaptationHistogramRangeHighProbability;
- (double)exposureAdaptationHistogramRangeLowProbability;
- (long long)exposureAdaptationMode;
- (long long)fieldOfViewOrientation;
- (long long)fillMode;
- (BOOL)hasCustomProjectionTransform;
- (id)identifier;
- (id)init;
- (id)initPresentationCameraWithCameraRef:(struct __C3DCamera *)arg1;
- (id)initWithCameraRef:(struct __C3DCamera *)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (BOOL)isPausedOrPausedByInheritance;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationCamera;
- (id)presentationInstance;
- (struct SCNMatrix4)projectionTransformWithViewportSize:(struct CGSize)arg1;
- (void)removeAllAnimations;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (long long)screenSpaceAmbientOcclusionDownSample;
- (long long)screenSpaceAmbientOcclusionSampleCount;
- (void)setAspectRatio:(double)arg1;
- (void)setBloomIteration:(long long)arg1;
- (void)setDofIntensity:(float)arg1;
- (void)setExposureAdaptationDuration:(double)arg1;
- (void)setExposureAdaptationHistogramRangeHighProbability:(double)arg1;
- (void)setExposureAdaptationHistogramRangeLowProbability:(double)arg1;
- (void)setExposureAdaptationMode:(long long)arg1;
- (void)setFieldOfViewOrientation:(long long)arg1;
- (void)setFillMode:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setScreenSpaceAmbientOcclusionDownSample:(long long)arg1;
- (void)setScreenSpaceAmbientOcclusionSampleCount:(long long)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setXMag:(double)arg1;
- (void)setYMag:(double)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (BOOL)useLegacyFov;
- (double)xMag;
- (double)yMag;

@end

