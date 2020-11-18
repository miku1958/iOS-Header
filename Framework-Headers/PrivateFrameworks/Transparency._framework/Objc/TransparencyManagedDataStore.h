//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, TransparencyManagedDataStoreController;

@interface TransparencyManagedDataStore : NSObject
{
    BOOL _permanentContext;
    TransparencyManagedDataStoreController *_controller;
    NSManagedObjectContext *_context;
    long long _contextRefCount;
}

@property (strong) NSManagedObjectContext *context; // @synthesize context=_context;
@property long long contextRefCount; // @synthesize contextRefCount=_contextRefCount;
@property (weak) TransparencyManagedDataStoreController *controller; // @synthesize controller=_controller;
@property BOOL permanentContext; // @synthesize permanentContext=_permanentContext;

+ (void)cleanseError:(id *)arg1;
+ (id)deserializeLoggableDatas:(id)arg1 error:(id *)arg2;
+ (void)reportCoreDataEventForEntity:(id)arg1 hardFailure:(BOOL)arg2 write:(BOOL)arg3 code:(long long)arg4 underlyingError:(id)arg5;
+ (void)reportCoreDataEventForEntity:(id)arg1 write:(BOOL)arg2 code:(long long)arg3 underlyingError:(id)arg4;
+ (void)reportCoreDataPersistEventForLocation:(id)arg1 underlyingError:(id)arg2;
+ (id)serializeLoggableDatas:(id)arg1;
- (void).cxx_destruct;
- (BOOL)clearState:(id *)arg1;
- (BOOL)clearStateForApplication:(id)arg1 error:(id *)arg2;
- (id)copyStatistics:(id *)arg1;
- (unsigned long long)countOutstandingRequestsForApplication:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOutstandingSMTsForApplication:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOutstandingSTHsForApplication:(id)arg1 error:(id *)arg2;
- (unsigned long long)countTotalRequestsForApplication:(id)arg1 error:(id *)arg2;
- (unsigned long long)countTotalSMTsForApplication:(id)arg1 error:(id *)arg2;
- (unsigned long long)countTotalSTHsForApplication:(id)arg1 error:(id *)arg2;
- (id)createDownloadRecord:(unsigned long long)arg1 application:(id)arg2;
- (id)createFetchRecord;
- (id)createFetchRecordForRequestData:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)createKTRequestID:(id)arg1 request:(id)arg2;
- (id)createRequest;
- (id)createRequestFailure;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 type:(unsigned long long)arg7 error:(id *)arg8;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 syncedData:(id)arg5 queryRequest:(id)arg6 queryResponse:(id)arg7 type:(unsigned long long)arg8 clientId:(id)arg9 error:(id *)arg10;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 syncedData:(id)arg5 queryRequest:(id)arg6 queryResponse:(id)arg7 type:(unsigned long long)arg8 error:(id *)arg9;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 type:(unsigned long long)arg5 error:(id *)arg6;
- (id)createSignedMutationTimestamp:(id)arg1 mutationMs:(unsigned long long)arg2 receiptTime:(double)arg3;
- (id)createSignedMutationTimestampsFailure;
- (id)createSignedTreeHeadFailure;
- (id)createTreeHead;
- (id)createTreeHead:(id)arg1 isMapHead:(BOOL)arg2 application:(id)arg3 logBeginTime:(long long)arg4 logHeadHash:(id)arg5 logType:(long long)arg6 revision:(long long)arg7;
- (BOOL)deleteDownloadRecord:(unsigned long long)arg1 application:(id)arg2 error:(id *)arg3;
- (BOOL)deleteDownloadRecordById:(id)arg1 error:(id *)arg2;
- (BOOL)deleteDownloadRecords:(id)arg1 error:(id *)arg2;
- (void)deleteObject:(id)arg1;
- (void)deleteObjectSet:(id)arg1;
- (BOOL)deleteSMTs:(id)arg1 mutationTimeLessThan:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)deleteSTHs:(id)arg1 logBeginMsLessThan:(unsigned long long)arg2 error:(id *)arg3;
- (id)downloadRecords:(id *)arg1;
- (id)fetchCompletedRequests:(id)arg1 olderThan:(id)arg2 error:(id *)arg3;
- (id)fetchDownloadRecord:(unsigned long long)arg1 application:(id)arg2 error:(id *)arg3;
- (id)fetchDownloadRecordById:(id)arg1 error:(id *)arg2;
- (id)fetchFetchRecordById:(id)arg1 error:(id *)arg2;
- (id)fetchRequestForUUID:(id)arg1 error:(id *)arg2;
- (id)fetchRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableDatas:(id)arg4 youngerThan:(id)arg5 error:(id *)arg6;
- (id)fetchRequestsForURI:(id)arg1 error:(id *)arg2;
- (id)fetchTreeHead:(id)arg1 isMapHead:(BOOL)arg2 application:(id)arg3 logBeginTime:(long long)arg4 logType:(long long)arg5 revision:(long long)arg6 error:(id *)arg7;
- (id)fetchTreeHeadsWithoutHash:(id)arg1 isMapHead:(BOOL)arg2 application:(id)arg3 logBeginTime:(long long)arg4 logType:(long long)arg5 revision:(long long)arg6 error:(id *)arg7;
- (void)garbageCollectRequests:(id)arg1 olderThan:(id)arg2 error:(id *)arg3;
- (void)garbageCollectSTHs:(id)arg1 logBeginMs:(unsigned long long)arg2 olderThan:(id)arg3 error:(id *)arg4;
- (void)gargabeCollectEntity:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
- (BOOL)hasPendingDownloadForUUID:(id)arg1 error:(id *)arg2;
- (BOOL)haveTreeHead:(id)arg1 isMapHead:(BOOL)arg2 application:(id)arg3 logBeginTime:(long long)arg4 logType:(long long)arg5 revision:(long long)arg6 error:(id *)arg7;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 context:(id)arg2;
- (id)latestConsistencyVerifiedTreeHeadRevision:(id)arg1 logBeginMs:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)logMetricsForApplication:(id)arg1 error:(id *)arg2;
- (BOOL)logRequestMetricsForApplication:(id)arg1 error:(id *)arg2;
- (BOOL)logSMTMetricsForApplication:(id)arg1 error:(id *)arg2;
- (BOOL)logSTHMetricsForApplication:(id)arg1 error:(id *)arg2;
- (BOOL)performAndWaitForDownloadId:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)performAndWaitForFetchId:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)performAndWaitForRequestId:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performForPendingSMTs:(id)arg1 uri:(id)arg2 accountId:(id)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;
- (void)performForPendingSTHs:(id)arg1 olderThan:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (void)performForRequestsWithPendingResponses:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)performForRequestsWithPendingSMTs:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)performForSMTsWithUnverifiedSignature:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)performForSTHs:(id)arg1 isMapHead:(BOOL)arg2 revision:(id)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;
- (void)performForSTHsWithUnverifiedSignature:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)performOnBatchesOfEntity:(id)arg1 predicate:(id)arg2 enforceMax:(BOOL)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;
- (void)performOnRequestsForPredicate:(id)arg1 enforceMax:(BOOL)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)persistAndRefaultObject:(id)arg1 error:(id *)arg2;
- (BOOL)persistAndRefaultObjects:(id)arg1 error:(id *)arg2;
- (BOOL)persistWithError:(id *)arg1;
- (BOOL)populateExistingRequestsToLookupTable:(id *)arg1;
- (BOOL)populateMissingLogHeadHashes:(id *)arg1;
- (void)refaultObject:(id)arg1;
- (void)releaseContext;
- (unsigned long long)requestCount:(id *)arg1;
- (unsigned long long)requestFailureCount:(id *)arg1;
- (id)requestFailures:(id *)arg1;
- (id)requestIds:(id *)arg1;
- (id)requests:(id *)arg1;
- (BOOL)resetRequestsToPending:(id)arg1 error:(id *)arg2;
- (id)retainContext;
- (BOOL)setResponse:(id)arg1 downloadId:(id)arg2 error:(id *)arg3;
- (unsigned long long)signedMutationTimestampCount:(id *)arg1;
- (id)signedMutationTimestamps:(id *)arg1;
- (unsigned long long)signedMutationTimestampsFailureCount:(id *)arg1;
- (id)signedMutationTimestampsFailures:(id *)arg1;
- (unsigned long long)signedTreeHeadFailureCount:(id *)arg1;
- (id)signedTreeHeadFailures:(id *)arg1;
- (unsigned long long)treeHeadCount:(id *)arg1;
- (id)treeHeads:(id *)arg1;
- (id)treeHeadsForApplication:(id)arg1 error:(id *)arg2;
- (id)unverifiedRevisions:(id)arg1 isMapHead:(BOOL)arg2 inclusion:(BOOL)arg3 logBeginMs:(unsigned long long)arg4 error:(id *)arg5;

@end
