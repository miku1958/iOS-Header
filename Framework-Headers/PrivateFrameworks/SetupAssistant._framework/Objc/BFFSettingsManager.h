//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSNumber;

@interface BFFSettingsManager : NSObject
{
    NSMutableArray *_stashedPaths;
    NSMutableDictionary *_stashedPreferences;
    NSMutableDictionary *_stashedManagedConfigurationSettings;
    NSMutableArray *_stashedButtonHaptics;
    NSNumber *_stashedAssistantEnabled;
    NSNumber *_stashedAssistantVoiceTriggerEnabled;
    NSNumber *_stashedSiriDataSharingOptInStatus;
    NSNumber *_stashedLocationServicesEnabled;
    NSData *_stashedLocationServicesSettings;
    NSData *_stashedWatchData;
    NSArray *_stashedFlowSkipIdentifiers;
    NSNumber *_stashedScreenTimeEnabled;
    NSNumber *_stashedAutoUpdateEnabled;
    NSNumber *_stashedAutoDownloadEnabled;
    NSData *_stashedAccessibilityData;
    NSNumber *_stashedUserInterfaceStyleMode;
    NSMutableArray *_stashedAnalytics;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_applyAssistantPreferences;
- (void)_applyLocationServices;
- (void)_applyLocationServicesSettings;
- (void)_applyScreenTimePreferences;
- (void)_applyStashedButtonHaptics;
- (void)_applyStashedFlowSkipIdentifiers;
- (void)_applyStashedManagedConfiguration;
- (void)_applyStashedPreferences;
- (void)_applyUpdatePreferences;
- (void)_applyUserInterfaceStyleMode;
- (BOOL)_commitStash;
- (id)_preferencesForDomain:(id)arg1;
- (void)_reset:(BOOL)arg1;
- (void)_restoreAccessibilityData;
- (void)_restoreAnalyticsData;
- (unsigned long long)_restoreConfiguration;
- (void)_restoreStashedFiles;
- (void)_restoreWatchData;
- (id)_shovePath:(id)arg1 toPath:(id)arg2;
- (BOOL)_stashConfiguration:(BOOL)arg1;
- (BOOL)_stashPaths;
- (void)applySafeHavenStash;
- (void)clearHapticTypeForButtonKind:(long long)arg1;
- (BOOL)hasStashedValues;
- (BOOL)hasStashedValuesOnDisk;
- (BOOL)hideStashInSafeHaven;
- (BOOL)hideStashInSafeHavenAsProvisional:(BOOL)arg1;
- (id)init;
- (id)loadConfigurationFromDisk;
- (void)populatePathsToStash;
- (void)postDidRestoreSafeHavenNotification;
- (void)removeBoolSettingForManagedConfigurationSetting:(id)arg1;
- (BOOL)removeSafeHaven;
- (void)reset;
- (void)setAssistantEnabled:(BOOL)arg1;
- (void)setAssistantVoiceTriggerEnabled:(BOOL)arg1;
- (void)setAutoDownloadEnabled:(BOOL)arg1;
- (void)setAutoUpdateEnabled:(BOOL)arg1;
- (void)setBool:(BOOL)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setBool:(BOOL)arg1 forManagedConfigurationSetting:(id)arg2;
- (void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setScreenTimeEnabled:(BOOL)arg1;
- (void)setUserInterfaceStyleMode:(long long)arg1;
- (void)stashAccessibilityData:(id)arg1;
- (void)stashAnalyticEvent:(id)arg1 payload:(id)arg2;
- (id)stashBuildVersion;
- (long long)stashConfigurationType;
- (void)stashFlowSkipIdentifiers:(id)arg1;
- (void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)stashLocationServicesChoice:(BOOL)arg1;
- (void)stashLocationServicesSettings:(id)arg1;
- (void)stashPath:(id)arg1;
- (id)stashProductVersion;
- (unsigned long long)stashVersion;
- (void)stashWatchData:(id)arg1;

@end

