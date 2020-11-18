//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKDRecordFetchAggregator, CKQuery, CKQueryCursor, CKRecordZoneID, NSMutableArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDQueryOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    BOOL _shouldFetchAssetContent;
    BOOL _fetchAllResults;
    BOOL _hasCalledQueryCursorUpdatedBlock;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    CKQueryCursor *_resultsCursor;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCursorUpdatedBlock;
    NSSet *_desiredKeySet;
    CKRecordZoneID *_zoneID;
    CKDRecordFetchAggregator *_recordFetcher;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    unsigned long long _numRequestsSent;
    NSMutableArray *_requestInfos;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *desiredKeySet; // @synthesize desiredKeySet=_desiredKeySet;
@property (nonatomic) BOOL fetchAllResults; // @synthesize fetchAllResults=_fetchAllResults;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property (nonatomic) BOOL hasCalledQueryCursorUpdatedBlock; // @synthesize hasCalledQueryCursorUpdatedBlock=_hasCalledQueryCursorUpdatedBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (readonly, nonatomic) CKQuery *query; // @synthesize query=_query;
@property (copy, nonatomic) CDUnknownBlockType queryCursorUpdatedBlock; // @synthesize queryCursorUpdatedBlock=_queryCursorUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property (strong, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property (strong, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property (strong, nonatomic) CKQueryCursor *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property (readonly, nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordResponse:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (id)activityCreate;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;

@end
