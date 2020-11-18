//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider
{
    NSSet *_cameraProfiles;
    unsigned long long _settingsContext;
    NSMutableSet *_smartDetectionSettingsItems;
}

@property (readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property (readonly, nonatomic) unsigned long long settingsContext; // @synthesize settingsContext=_settingsContext;
@property (readonly, nonatomic) NSMutableSet *smartDetectionSettingsItems; // @synthesize smartDetectionSettingsItems=_smartDetectionSettingsItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2;
- (id)items;
- (id)reloadItems;

@end
