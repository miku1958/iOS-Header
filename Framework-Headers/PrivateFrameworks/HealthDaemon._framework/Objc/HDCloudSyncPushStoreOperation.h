//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncTarget, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation
{
    HDCloudSyncTarget *_target;
    struct os_unfair_lock_s _lock;
    _HDCloudSyncStorePersistableState *_storeState;
}

@property (copy) HDCloudSyncTarget *target;

- (void).cxx_destruct;
- (id)_currentOwnedStoreIdentifiersForPush;
- (id)_operationForExistingSequenceRecord:(id)arg1;
- (id)_operationForNewSequenceRecord:(id)arg1 replacingSequence:(id)arg2 isRebaseline:(BOOL)arg3;
- (id)_pendingSequenceRecordOperationForPushWithIncludedStoreIdentifiers:(id)arg1;
- (id)_replacePendingSequenceRecordWithIncludedStoreIdentifiers:(id)arg1;
- (void)_sequencePushesDidFinishSuccessfully;
- (id)_validatedSequenceRecordOperationsForPush;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3;
- (void)main;

@end

