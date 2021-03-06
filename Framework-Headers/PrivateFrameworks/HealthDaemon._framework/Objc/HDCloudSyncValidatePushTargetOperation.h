//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncTarget;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation
{
    struct os_unfair_lock_s _lock;
    BOOL _shouldValidateCurrentSequence;
    HDCloudSyncTarget *_target;
    long long _result;
}

@property (readonly, nonatomic) long long result; // @synthesize result=_result;
@property (nonatomic) BOOL shouldValidateCurrentSequence; // @synthesize shouldValidateCurrentSequence=_shouldValidateCurrentSequence;
@property (copy, nonatomic) HDCloudSyncTarget *target; // @synthesize target=_target;

- (void).cxx_destruct;
- (BOOL)_isRelevantChangeRecord:(id)arg1 forStoreRecord:(id)arg2;
- (BOOL)_orderedChangeRecordSequenceRequiresRebase:(id)arg1;
- (void)_requireRebaseForTarget;
- (BOOL)_validateAnchorRanges;
- (BOOL)_validateAnchorRangesForSequenceRecord:(id)arg1;
- (void)_validateCurrentSequence;
- (void)_validateCurrentSequenceChanges;
- (BOOL)_validateCurrentSequenceChildCount;
- (BOOL)_validatePersistedStoreState;
- (void)_validateSequenceOrdering;
- (id)analyticsDictionary;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;

@end

