//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation
{
    BOOL _fetchAllChanges;
    BOOL _shouldFetchAssetContents;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchArchivedRecordsCompletionBlock;
    NSArray *_recordZoneIDs;
    NSDictionary *_optionsByRecordZoneID;
    NSMutableDictionary *_statusByZoneID;
    NSMutableDictionary *_perItemErrors;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (strong, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property (copy, nonatomic) CDUnknownBlockType fetchArchivedRecordsCompletionBlock; // @synthesize fetchArchivedRecordsCompletionBlock=_fetchArchivedRecordsCompletionBlock;
@property (copy, nonatomic) NSDictionary *optionsByRecordZoneID; // @synthesize optionsByRecordZoneID=_optionsByRecordZoneID;
@property (strong, nonatomic) NSMutableDictionary *perItemErrors; // @synthesize perItemErrors=_perItemErrors;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock; // @synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock; // @synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock;
@property (copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property (strong, nonatomic) NSMutableDictionary *statusByZoneID; // @synthesize statusByZoneID=_statusByZoneID;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (void)performCKOperation;
- (id)recordZoneArchivesStatusByZoneID;

@end

