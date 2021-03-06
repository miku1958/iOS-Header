//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable
{
    CallHistoryDBHandle *dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
}

@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle; // @synthesize dbStoreHandle;

+ (id)createForClient;
+ (id)createForServer;
- (void).cxx_destruct;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (id)convertToCHRecentCalls_sync:(id)arg1 limit:(unsigned long long)arg2;
- (BOOL)createCallRecord:(id)arg1;
- (BOOL)createCallRecord:(id)arg1 error:(id *)arg2;
- (BOOL)createCallRecord:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (BOOL)createCallRecords:(id)arg1;
- (BOOL)createCallRecords:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (BOOL)deleteAll;
- (BOOL)deleteAll:(id *)arg1;
- (long long)deleteCallsWithPredicate:(id)arg1;
- (BOOL)deleteObjectWithUniqueId:(id)arg1;
- (BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2;
- (BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (BOOL)deleteObjectsWithUniqueIds:(id)arg1;
- (BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id *)arg2;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)handleCallRecordSave_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (id)init;
- (id)init:(BOOL)arg1;
- (id)manager;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(BOOL *)arg2 isOriginated:(BOOL *)arg3;
- (void)registerForNotifications;
- (BOOL)resetAllTimers;
- (void)resetTimers;
- (BOOL)saveDatabase:(id *)arg1;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (id)updateAllCallRecords:(id)arg1;
- (id)updateAllCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateAllCallRecords_sync:(id)arg1 error:(id *)arg2;
- (BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;
- (id)updateCallRecords:(id)arg1;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (id)updateCallRecords_sync:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (id)updateCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 error:(id *)arg3;
- (BOOL)willHandleNotification_sync:(id)arg1;

@end

