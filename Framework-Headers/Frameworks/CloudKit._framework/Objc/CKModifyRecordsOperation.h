//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordsOperation : CKDatabaseOperation
{
    BOOL _atomic;
    BOOL _shouldOnlySaveAssetContent;
    BOOL _shouldReportRecordsInFlight;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _modifyRecordsCompletionBlock;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    CDUnknownBlockType _recordsInFlightBlock;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    NSMutableDictionary *_recordsByRecordIDs;
    NSMutableDictionary *_recordErrors;
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
}

@property (strong, nonatomic) NSMutableDictionary *assetsByRecordIDAndRecordKey; // @synthesize assetsByRecordIDAndRecordKey=_assetsByRecordIDAndRecordKey;
@property (nonatomic) BOOL atomic; // @synthesize atomic=_atomic;
@property (copy, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property (strong, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property (strong, nonatomic) NSMutableArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property (copy, nonatomic) CDUnknownBlockType modifyRecordsCompletionBlock; // @synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
@property (strong, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property (copy, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property (strong, nonatomic) NSMutableDictionary *recordsByRecordIDs; // @synthesize recordsByRecordIDs=_recordsByRecordIDs;
@property (copy, nonatomic) CDUnknownBlockType recordsInFlightBlock; // @synthesize recordsInFlightBlock=_recordsInFlightBlock;
@property (copy, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property (nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property (strong, nonatomic) NSMutableArray *savedRecords; // @synthesize savedRecords=_savedRecords;
@property (nonatomic) BOOL shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property (nonatomic) BOOL shouldReportRecordsInFlight; // @synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_trackAssetsToUpload;
- (unsigned long long)activityStart;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)performCKOperation;

@end

