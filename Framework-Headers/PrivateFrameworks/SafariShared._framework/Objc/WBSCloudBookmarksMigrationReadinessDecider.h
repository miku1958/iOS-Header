//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, WBSDeviceEligibilityInformation;
@protocol OS_dispatch_queue, WBSLogger;

@interface WBSCloudBookmarksMigrationReadinessDecider : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDate *_nonMigratableDeviceGracePeriodStartDate;
    NSDate *_dateOfCloudTabDevicesSyncRequest;
    NSDate *_dateOfLastCloudTabDevicesUpdate;
    NSDate *_dateOfDeviceEligibilityUpdate;
    NSMutableDictionary *_nonMigratableDeviceIdentifiersToLastModifiedDates;
    WBSDeviceEligibilityInformation *_deviceEligibilityInformation;
    BOOL _readyToMigrate;
    BOOL _lastCloudTabDevicesSyncRequestWasSuccessful;
    id<WBSLogger> _keyActionsLogger;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDate *earliestPossibleDateOfMigration;
@property (strong, nonatomic) id<WBSLogger> keyActionsLogger; // @synthesize keyActionsLogger=_keyActionsLogger;
@property (readonly, nonatomic, getter=isReadyToMigrate) BOOL readyToMigrate;

- (void).cxx_destruct;
- (double)_deviceEligibilityUpdateInterval;
- (void)_fetchDeviceEligibilityInformationWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_isCloudTabDeviceDataPastExpiration;
- (BOOL)_isDateInGracePeriod:(id)arg1;
- (BOOL)_isInternalInstall;
- (BOOL)_isPastMinimumWaitAfterCloudTabDeviceSyncRequest;
- (void)_logDevicesExcludedFromUpdateWithDevices:(id)arg1;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (void)_logKeyActionForUpdateWithDevice:(id)arg1;
- (void)_logPrunedDeviceIdentifiers:(id)arg1;
- (double)_maximumAgeForCloudTabDevicesUpdate;
- (double)_minimumWaitForCloudTabDevicesUpdateAfterSync;
- (double)_nonMigratableDeviceGracePeriod;
- (void)_pruneOldNonMigratableDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reevaluateReadinessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_shouldRequestCloudTabDevicesSync;
- (BOOL)_shouldWaitForCloudTabDevicesUpdate;
- (void)_synchronizeCloudTabDevicesWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)_timescale;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (void)updateWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

