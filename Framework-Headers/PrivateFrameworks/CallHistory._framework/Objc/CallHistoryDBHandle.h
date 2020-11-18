//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class CallDBManager, NSManagedObjectContext, NSString;

@interface CallHistoryDBHandle : CHLogger
{
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    CallDBManager *callDBManager;
    NSString *objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (readonly, nonatomic) CallDBManager *callDBManager; // @synthesize callDBManager;
@property (readonly, nonatomic) NSString *objectId; // @synthesize objectId;

+ (id)createForClient;
+ (id)createForServer;
+ (id)createWithDBManager:(id)arg1;
- (void).cxx_destruct;
- (id)callDBProperties;
- (id)callRecordContext;
- (id)createCallRecord;
- (void)dealloc;
- (void)deleteAll;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (id)deleteWithPredicate:(id)arg1;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)handlePersistentStoreChangedNotification:(id)arg1;
- (BOOL)handleSaveForCallRecordContext:(id)arg1 error:(id *)arg2;
- (id)initWithDBManager:(id)arg1;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id *)arg2;
- (void)postTimersChangedNotification;
- (void)registerForNotifications:(id)arg1;
- (BOOL)resetAllTimers;
- (void)resetTimers;
- (BOOL)save:(id *)arg1;
- (BOOL)saveTimers:(CDUnknownBlockType)arg1;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (void)updateCallDBProperties;

@end

