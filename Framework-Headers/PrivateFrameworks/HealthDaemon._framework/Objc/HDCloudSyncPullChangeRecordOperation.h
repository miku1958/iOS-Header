//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncChangeRecord, HDCloudSyncSequenceRecord, HDCloudSyncTarget, NSFileHandle;

@interface HDCloudSyncPullChangeRecordOperation : HDCloudSyncOperation
{
    NSFileHandle *_fileHandle;
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncChangeRecord *_changeRecord;
}

@property (readonly, nonatomic) HDCloudSyncChangeRecord *changeRecord; // @synthesize changeRecord=_changeRecord;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord; // @synthesize sequenceRecord=_sequenceRecord;
@property (readonly, nonatomic) HDCloudSyncTarget *target; // @synthesize target=_target;

+ (id)_assetFileHandleWithName:(id)arg1 error:(id *)arg2;
+ (long long)progressCount;
- (void).cxx_destruct;
- (BOOL)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (long long)_assetExtractionFailureCount;
- (id)_assetExtractionFailureCountKey;
- (void)_fetchedRecord:(id)arg1 recordID:(id)arg2 inMemoryAsset:(BOOL)arg3 error:(id)arg4;
- (void)_finishWithAssetExtractionError:(id)arg1;
- (BOOL)_persistFetchedArchiveAsset:(id)arg1 changeRecord:(id)arg2 error:(id *)arg3;
- (void)_recordAppliedChange;
- (void)_setAssetExtractionFailureCount:(long long)arg1;
- (id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(BOOL)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequenceRecord:(id)arg4 changeRecord:(id)arg5;
- (void)main;

@end

