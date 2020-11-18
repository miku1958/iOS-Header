//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation
{
    BOOL _fetchAllChanges;
    BOOL _shouldFetchAssetContents;
    NSArray *_recordZoneIDs;
    NSDictionary *_optionsByRecordZoneID;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchRecordZoneChangesCompletionBlock;
    NSMutableDictionary *_statusByZoneID;
    NSMutableDictionary *_perItemErrors;
}

@property (nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordZoneChangesCompletionBlock; // @synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock;
@property (copy, nonatomic) NSDictionary *optionsByRecordZoneID; // @synthesize optionsByRecordZoneID=_optionsByRecordZoneID;
@property (strong, nonatomic) NSMutableDictionary *perItemErrors; // @synthesize perItemErrors=_perItemErrors;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock; // @synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock; // @synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock; // @synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock;
@property (copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property (copy, nonatomic) NSMutableDictionary *statusByZoneID; // @synthesize statusByZoneID=_statusByZoneID;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (long long)changeTypesFromSetCallbacks;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (void)performCKOperation;
- (id)recordZoneChangesStatusByZoneID;

@end

