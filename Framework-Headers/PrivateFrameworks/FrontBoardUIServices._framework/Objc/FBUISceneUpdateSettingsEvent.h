//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardUIServices/FBUISceneEvent.h>

@class FBSSceneSettings, FBSSceneSettingsDiff;

@interface FBUISceneUpdateSettingsEvent : FBUISceneEvent
{
    FBSSceneSettings *_settings;
    FBSSceneSettingsDiff *_diff;
}

@property (copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (strong, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_diff;

- (void)dealloc;

@end

