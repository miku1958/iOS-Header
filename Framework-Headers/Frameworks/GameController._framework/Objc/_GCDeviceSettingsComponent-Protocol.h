//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCDeviceComponent-Protocol.h>

@class GCControllerSettings, NSString;

@protocol _GCDeviceSettingsComponent <_GCDeviceComponent>
- (GCControllerSettings *)defaultSettings;
- (GCControllerSettings *)settingsForBundleIdentifier:(NSString *)arg1;
@end

