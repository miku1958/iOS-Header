//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalMedusaDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings
{
    double _toBeMadeFullScreenPushInScale;
    double _toBeMadeFullScreenScaleResetAnimationDelay;
    double _toBeRemovedSlideOutAnimationDelay;
    double _toBeRemovedSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_toBeMadeFullscreenPushInScaleAnimationSettings;
    SBFFluidBehaviorSettings *_toBeMadeFullscreenScaleResetAnimationSettings;
    SBFFluidBehaviorSettings *_toBeRemovedSlideOutAnimationSettings;
    SBEntityRemovalMedusaDefaultAnimationSettings *_defaultAnimationSettings;
}

@property (strong, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *defaultAnimationSettings; // @synthesize defaultAnimationSettings=_defaultAnimationSettings;
@property (nonatomic) double toBeMadeFullScreenPushInScale; // @synthesize toBeMadeFullScreenPushInScale=_toBeMadeFullScreenPushInScale;
@property (nonatomic) double toBeMadeFullScreenScaleResetAnimationDelay; // @synthesize toBeMadeFullScreenScaleResetAnimationDelay=_toBeMadeFullScreenScaleResetAnimationDelay;
@property (strong, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenPushInScaleAnimationSettings; // @synthesize toBeMadeFullscreenPushInScaleAnimationSettings=_toBeMadeFullscreenPushInScaleAnimationSettings;
@property (strong, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenScaleResetAnimationSettings; // @synthesize toBeMadeFullscreenScaleResetAnimationSettings=_toBeMadeFullscreenScaleResetAnimationSettings;
@property (nonatomic) double toBeRemovedSlideOutAnimationDelay; // @synthesize toBeRemovedSlideOutAnimationDelay=_toBeRemovedSlideOutAnimationDelay;
@property (strong, nonatomic) SBFFluidBehaviorSettings *toBeRemovedSlideOutAnimationSettings; // @synthesize toBeRemovedSlideOutAnimationSettings=_toBeRemovedSlideOutAnimationSettings;
@property (nonatomic) double toBeRemovedSlideOutHeightOffsetMultiplier; // @synthesize toBeRemovedSlideOutHeightOffsetMultiplier=_toBeRemovedSlideOutHeightOffsetMultiplier;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

