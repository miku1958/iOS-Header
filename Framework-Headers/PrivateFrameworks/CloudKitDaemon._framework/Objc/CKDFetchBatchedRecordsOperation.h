//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKDRecordCache, CKDRecordFetchAggregator, NSArray, NSDictionary, NSMutableArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    BOOL _shouldFetchAssetContents;
    BOOL _fetchAllChanges;
    BOOL _forcePCSDecryptionAttempt;
    CKDRecordCache *_recordCache;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSSet *_desiredAssetKeys;
    NSArray *_recordZoneIDs;
    NSDictionary *_optionsByRecordZoneID;
    unsigned long long _numRequestsSent;
    CKDRecordFetchAggregator *_recordFetcher;
    NSMutableArray *_requestInfos;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (strong, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property (nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property (nonatomic) BOOL forcePCSDecryptionAttempt; // @synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property (strong, nonatomic) NSDictionary *optionsByRecordZoneID; // @synthesize optionsByRecordZoneID=_optionsByRecordZoneID;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (readonly, nonatomic) CKDRecordCache *recordCache; // @synthesize recordCache=_recordCache;
@property (strong, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property (strong, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (strong, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property (nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordChange:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_handleRecordDelete:(id)arg1 recordType:(id)arg2 perRequestSchedulerInfo:(id)arg3;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteOperationBeginning;
- (void)_noteOperationEnding;
- (void)_noteOperationFinishedBlockEnd;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (id)_possiblyWrapError:(id)arg1 withCode:(long long)arg2 format:(id)arg3;
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;

@end

