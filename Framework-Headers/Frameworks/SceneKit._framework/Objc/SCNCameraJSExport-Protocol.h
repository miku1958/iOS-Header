//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLCamera, NSArray, NSString, SCNMaterialProperty;

@protocol SCNCameraJSExport <JSExport>

@property (nonatomic) double aperture;
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
@property (nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property (nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property (nonatomic) double exposureOffset;
@property (nonatomic) double focalBlurRadius;
@property (nonatomic) double focalDistance;
@property (nonatomic) double focalSize;
@property (nonatomic) double maximumExposure;
@property (nonatomic) double minimumExposure;
@property (nonatomic) double motionBlurIntensity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double orthographicScale;
@property (nonatomic) struct SCNMatrix4 projectionTransform;
@property (nonatomic) double saturation;
@property (nonatomic) BOOL usesOrthographicProjection;
@property (nonatomic) double vignettingIntensity;
@property (nonatomic) double vignettingPower;
@property (nonatomic) BOOL wantsExposureAdaptation;
@property (nonatomic) BOOL wantsHDR;
@property (nonatomic) double whitePoint;
@property (nonatomic) double xFov;
@property (nonatomic) double yFov;
@property (nonatomic) double zFar;
@property (nonatomic) double zNear;

+ (id)camera;
+ (id)cameraWithMDLCamera:(MDLCamera *)arg1;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (id)copy;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)valueForKey:(NSString *)arg1;
- (id)valueForKeyPath:(NSString *)arg1;
@end

