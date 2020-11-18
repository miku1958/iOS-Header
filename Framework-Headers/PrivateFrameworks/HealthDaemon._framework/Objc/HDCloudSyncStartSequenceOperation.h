//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncSequenceRecord, HDCloudSyncTarget;

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncOperation
{
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncSequenceRecord *_replacedSequenceRecord;
    _Atomic BOOL _shouldClearRebaselineDeadline;
}

@property BOOL shouldClearRebaselineDeadline;

- (void).cxx_destruct;
- (void)_deleteReplacedSequence;
- (void)_pushNewSequence;
- (BOOL)_updateDisplayNameForRegistryRecord:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 replacingSequence:(id)arg5;
- (void)main;

@end
