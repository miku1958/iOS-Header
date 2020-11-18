//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMSingletonOverride.h>

@class IMCloudKitMockSyncState, NSArray, NSDate, NSDictionary;

@interface IMCloudKitHookTestSingleton : IMSingletonOverride
{
    IMCloudKitMockSyncState *_testState;
    BOOL _rampedIntoTruthZone;
    BOOL _isStartingSync;
    BOOL _isDisablingDevices;
    long long _isChangingEnabledState;
    unsigned long long _syncControllerSyncState;
    long long _syncType;
    NSDictionary *_syncStats;
}

@property (strong, nonatomic) NSArray *IMCloudKitSyncErrors;
@property (nonatomic) BOOL eligibleForTruthZone;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long isChangingEnabledState; // @synthesize isChangingEnabledState=_isChangingEnabledState;
@property (nonatomic) BOOL isDisablingDevices; // @synthesize isDisablingDevices=_isDisablingDevices;
@property (nonatomic) BOOL isStartingSync; // @synthesize isStartingSync=_isStartingSync;
@property (strong, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) BOOL rampedIntoTruthZone; // @synthesize rampedIntoTruthZone=_rampedIntoTruthZone;
@property (nonatomic) unsigned long long syncControllerSyncState; // @synthesize syncControllerSyncState=_syncControllerSyncState;
@property (strong, nonatomic) NSDictionary *syncStats; // @synthesize syncStats=_syncStats;
@property (nonatomic) long long syncType; // @synthesize syncType=_syncType;
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (strong, nonatomic) IMCloudKitMockSyncState *testState; // @synthesize testState=_testState;

+ (id)logHandle;
- (void).cxx_destruct;
- (void)fetchSyncStateStatistics;
- (id)init;
- (void)initiatePeriodicSync;
- (BOOL)isInExitState;
- (id)logHandle;
- (void)sendSyncChangedEvent;
- (void)setControllerSyncState:(unsigned long long)arg1;
- (void)setControllerSyncType:(long long)arg1;
- (void)setIsInExitState:(BOOL)arg1;
- (id)syncStateDictionary;

@end

