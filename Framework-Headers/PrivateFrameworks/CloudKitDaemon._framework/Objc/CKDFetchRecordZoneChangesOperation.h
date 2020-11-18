//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKDFetchZoneChangesRequestOperationResult, CKDRecordCache, CKDRecordFetchAggregator, NSArray, NSDictionary, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZoneChangesOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    BOOL _shouldFetchAssetContents;
    BOOL _fetchAllChanges;
    BOOL _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
    CKDRecordCache *_recordCache;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
    NSArray *_recordZoneIDs;
    NSDictionary *_optionsByRecordZoneID;
    unsigned long long _numRequestsSent;
    long long _changeTypes;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    CKDRecordFetchAggregator *_recordFetcher;
    NSMutableArray *_requestInfos;
    CKDFetchZoneChangesRequestOperationResult *_savedResult;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property (nonatomic) BOOL clientIsUsingLegacyCKFetchRecordChangesOperationAPI; // @synthesize clientIsUsingLegacyCKFetchRecordChangesOperationAPI=_clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property (strong, nonatomic) NSDictionary *optionsByRecordZoneID; // @synthesize optionsByRecordZoneID=_optionsByRecordZoneID;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (readonly, nonatomic) CKDRecordCache *recordCache; // @synthesize recordCache=_recordCache;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
@property (strong, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property (strong, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (strong, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property (strong, nonatomic) CKDFetchZoneChangesRequestOperationResult *savedResult; // @synthesize savedResult=_savedResult;
@property (copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property (nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordChange:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;
- (id)activityCreate;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;

@end
