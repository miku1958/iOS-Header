//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBFWakeAnimationSettings : PTSettings
{
    double _backlightFadeDuration;
    double _speedMultiplierForWake;
    double _speedMultiplierForLiftToWake;
    SBFAnimationSettings *_dateWakeSettings;
    SBFAnimationSettings *_contentWakeSettings;
    double _awakeColorBrightness;
    double _awakeDateAlpha;
    SBFAnimationSettings *_awakeWallpaperFilterSettings;
    SBFAnimationSettings *_dateSleepSettings;
    double _sleepColorBrightness;
    SBFAnimationSettings *_sleepWallpaperFilterSettings;
}

@property (nonatomic) double awakeColorBrightness; // @synthesize awakeColorBrightness=_awakeColorBrightness;
@property (nonatomic) double awakeDateAlpha; // @synthesize awakeDateAlpha=_awakeDateAlpha;
@property (strong, nonatomic) SBFAnimationSettings *awakeWallpaperFilterSettings; // @synthesize awakeWallpaperFilterSettings=_awakeWallpaperFilterSettings;
@property (nonatomic) double backlightFadeDuration; // @synthesize backlightFadeDuration=_backlightFadeDuration;
@property (strong, nonatomic) SBFAnimationSettings *contentWakeSettings; // @synthesize contentWakeSettings=_contentWakeSettings;
@property (strong, nonatomic) SBFAnimationSettings *dateSleepSettings; // @synthesize dateSleepSettings=_dateSleepSettings;
@property (strong, nonatomic) SBFAnimationSettings *dateWakeSettings; // @synthesize dateWakeSettings=_dateWakeSettings;
@property (nonatomic) double sleepColorBrightness; // @synthesize sleepColorBrightness=_sleepColorBrightness;
@property (strong, nonatomic) SBFAnimationSettings *sleepWallpaperFilterSettings; // @synthesize sleepWallpaperFilterSettings=_sleepWallpaperFilterSettings;
@property (nonatomic) double speedMultiplierForLiftToWake; // @synthesize speedMultiplierForLiftToWake=_speedMultiplierForLiftToWake;
@property (nonatomic) double speedMultiplierForWake; // @synthesize speedMultiplierForWake=_speedMultiplierForWake;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
