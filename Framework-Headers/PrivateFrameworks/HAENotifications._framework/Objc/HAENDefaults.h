//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@interface HAENDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_domainSettings;
    struct os_unfair_lock_s _lock;
}

+ (BOOL)isCurrentProcessMediaserverd;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_generateAccessoryKeyWithManufacture:(id)arg1 andSerialNumber:(id)arg2;
- (void)_registerNotification:(id)arg1;
- (BOOL)_shouldRepromptSinceDate:(id)arg1;
- (void)_updateSetting:(id)arg1 value:(id)arg2 notify:(BOOL)arg3;
- (void)forceReadDefaults;
- (long long)getAudioAccessoryConnectionInfo;
- (double)getLiveMonitorTimeWindowInSeconds;
- (double)getLiveMonitoringThreshold;
- (int)getReduceLoudSoundThreshold;
- (id)init;
- (BOOL)isConnectedUnknownWiredDeviceHeadphone;
- (BOOL)isHAENFeatureEnabled;
- (BOOL)isReduceLoudSoundEnabled;
- (void)removeAllAdapters;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)arg1;
- (void)setUserVolumeWithValue:(float)arg1 mininum:(float)arg2;
- (BOOL)softwareVersionEnabled;
- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)arg1;
- (void)updateRLSSettings;
- (void)updateUserVolumeForVolumeLimit;
- (double)volumeReductionDelta;
- (void)wiredDeviceStatusDidChange;

@end
