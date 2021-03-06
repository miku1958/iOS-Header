//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSMutableDictionary, NSString;

@interface HDCloudSyncSynchronizeProfilesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>
{
    HDSynchronousTaskGroup *_registryFetchTaskGroup;
    HDSynchronousTaskGroup *_zoneDeletionTaskGroup;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_zonesWithIdentityLossByContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchRegistryRecords:(id)arg1 container:(id)arg2 database:(id)arg3;
- (void)_fetchRegistryRecordsForContainer:(id)arg1 database:(id)arg2;
- (void)_receivedLimitExceededError:(id)arg1 fetchingRegistryRecords:(id)arg2 container:(id)arg3 database:(id)arg4;
- (void)_recordIdentityLossForPartialError:(id)arg1 container:(id)arg2;
- (void)_registryFetchDidFinish;
- (id)_registryRecordsToFetchForContainer:(id)arg1 database:(id)arg2;
- (BOOL)_shouldStoreOwnerParticipantForProfileType:(long long)arg1;
- (BOOL)_shouldSynchronizeProfileType:(long long)arg1;
- (BOOL)_storeOwnerParticipantForProfile:(id)arg1 share:(id)arg2 zoneID:(id)arg3;
- (void)_synchronizeProfileForRegistryRecord:(id)arg1 share:(id)arg2 container:(id)arg3 database:(id)arg4;
- (void)_synchronizeProfilesForFetchedRegistryRecords:(id)arg1 container:(id)arg2 database:(id)arg3;
- (void)_zoneDeletionDidFinish;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3;

@end

