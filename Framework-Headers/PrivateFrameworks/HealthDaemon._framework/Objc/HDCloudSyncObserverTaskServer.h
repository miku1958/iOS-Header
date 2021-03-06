//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDCloudSyncManagerObserver-Protocol.h>
#import <HealthDaemon/HKCloudSyncObserverServerInterface-Protocol.h>

@class HKCloudSyncObserverStatus, NSObject, NSObservation, NSString;
@protocol OS_dispatch_queue;

@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HKCloudSyncObserverServerInterface, HDCloudSyncManagerObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HKCloudSyncObserverStatus *_status;
    NSObservation *_waitForSyncObservations;
    BOOL _observingSyncStatus;
    BOOL _hasRestoreCompleted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (long long)_completeCloudSyncRestoreForJournalMergeResult:(long long)arg1 error:(id)arg2;
- (BOOL)_persistRestoreCompletionDate:(id)arg1;
- (long long)_queue_checkCloudSyncEarlyExitConditionsWithError:(id *)arg1;
- (long long)_queue_checkCloudSyncOngoingExitConditionsWithError:(id *)arg1;
- (void)_queue_didUpdateSyncStatus;
- (void)_queue_didUpdateSyncStatusWithErrorRequiringUserAction:(id)arg1;
- (void)_queue_didUpdateSyncStatusWithLastPullDate:(id)arg1;
- (void)_queue_didUpdateSyncStatusWithLastPulledUpdateDate:(id)arg1;
- (void)_queue_didUpdateSyncStatusWithLastPushDate:(id)arg1;
- (void)_queue_didUpdateSyncStatusWithRestoreCompleteDate:(id)arg1;
- (void)_queue_didUpdateSyncStatusWithSyncEnabled:(BOOL)arg1;
- (void)_queue_mergeCloudSyncJournalsForProfile:(id)arg1 progress:(id)arg2 taskTree:(id)arg3;
- (void)_queue_mergeCloudSyncJournalsWithTaskTree:(id)arg1 progress:(id)arg2;
- (void)_queue_startObservingSync;
- (id)_queue_startSyncIfRestoreNotCompletedWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_syncDidStart;
- (BOOL)_queue_verifyCloudSyncEnabledWithError:(id *)arg1;
- (id)_readErrorRequiringUserActionOnCloudSyncError:(id *)arg1;
- (id)_readRestoreCompletionDateWithError:(id *)arg1;
- (void)cloudSyncManager:(id)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)cloudSyncManager:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPullDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPulledUpdateDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPushDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_startObservingSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

