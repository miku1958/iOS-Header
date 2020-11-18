//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface KNAnimationUtils : NSObject
{
}

+ (id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)arg1;
+ (id)customAttributesArrayWithDeliveryOptions:(id)arg1;
+ (id)customAttributesArrayWithJiggleIntensityOptions:(id)arg1;
+ (id)customAttributesArrayWithTextDeliveryOptions:(id)arg1;
+ (unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)arg1;
+ (void)getRecommendedPosition:(struct CGPoint *)arg1 andTransform:(struct CATransform3D *)arg2 toFitLayer:(id)arg3 inContainerWithBounds:(struct CGRect)arg4 contentsScale:(double)arg5;
+ (void)hitPreviewButtonIfExists;
+ (void)initialize;
+ (BOOL)isAnimationTestingEnabled;
+ (BOOL)isCustomEffectTimingCurveEditingEnabled;
+ (BOOL)isDiscreteGPUNeededInShow:(id)arg1;
+ (BOOL)isDisplayLoggingEnabled;
+ (BOOL)isFPSGraphEnabled;
+ (BOOL)isFPSLoggingEnabled;
+ (BOOL)isFPSLoggingTimerDisabled;
+ (BOOL)isGLStateValidationEnabled;
+ (BOOL)isMaxConcurrentTexturePrecachingEnabled;
+ (BOOL)isMetalDisabled;
+ (BOOL)isMotionBlurBlacklistedWithCapabilities:(id)arg1;
+ (BOOL)isMotionBlurCapableWithAnimationContext:(id)arg1;
+ (BOOL)isRandomNumberSeedInspectionEnabled;
+ (BOOL)isRenderingLocal;
+ (BOOL)isResponsivenessLoggingEnabled;
+ (BOOL)isSOATSImageExportTestEnabled;
+ (BOOL)isTexturePrecachingDisabled;
+ (unsigned long long)randomBasicDirection;
+ (unsigned long long)randomDirection;
+ (struct CGRect)recommendedLayerBoundsForNaturalPlaybackSize:(struct CGSize)arg1 inContainerWithBounds:(struct CGRect)arg2 contentsScale:(double)arg3 isExternalDisplay:(BOOL)arg4;
+ (BOOL)shouldBadgeMetalRendering;
+ (BOOL)shouldForceDisplayPreferredMode;
+ (id)timingsArrayWithDirection:(unsigned long long)arg1 duration:(double)arg2 count:(unsigned long long)arg3 chunkDuration:(double)arg4 randomness:(double)arg5 randomGenerator:(id)arg6;
+ (void)updateDefaultsValues;

@end

