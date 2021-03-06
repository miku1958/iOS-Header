//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings
{
    double _fromViewSlideOutAnimationDelay;
    double _fromViewSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_fromViewSlideOutAnimationSettings;
    SBEntityRemovalDosidoDefaultAnimationSettings *_defaultAnimationSettings;
}

@property (strong, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings; // @synthesize defaultAnimationSettings=_defaultAnimationSettings;
@property (nonatomic) double fromViewSlideOutAnimationDelay; // @synthesize fromViewSlideOutAnimationDelay=_fromViewSlideOutAnimationDelay;
@property (strong, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings; // @synthesize fromViewSlideOutAnimationSettings=_fromViewSlideOutAnimationSettings;
@property (nonatomic) double fromViewSlideOutHeightOffsetMultiplier; // @synthesize fromViewSlideOutHeightOffsetMultiplier=_fromViewSlideOutHeightOffsetMultiplier;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

