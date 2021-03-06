//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHCenterZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings
{
    double _appHeadStart;
    SBFAnimationSettings *_appZoomSettings;
    SBFAnimationSettings *_appFadeSettings;
}

@property (strong, nonatomic) SBFAnimationSettings *appFadeSettings; // @synthesize appFadeSettings=_appFadeSettings;
@property (nonatomic) double appHeadStart; // @synthesize appHeadStart=_appHeadStart;
@property (strong, nonatomic) SBFAnimationSettings *appZoomSettings; // @synthesize appZoomSettings=_appZoomSettings;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

