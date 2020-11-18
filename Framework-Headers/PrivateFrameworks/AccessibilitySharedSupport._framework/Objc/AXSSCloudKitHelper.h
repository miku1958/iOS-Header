//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilitySharedSupport/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKDatabase, CKRecordZone, CKRecordZoneSubscription, NSError, NSManagedObjectContext, NSMutableArray, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXSSCloudKitHelper : NSObject <APSConnectionDelegate>
{
    NSMutableArray *_accumulatedQueuedData;
    BOOL _observeLocalDatabaseChanges;
    BOOL _isProtectedDataAvailable;
    NSPersistentStore *_observedStore;
    NSPersistentStoreCoordinator *_observedCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_containerIdentifier;
    CKContainer *_container;
    CKRecordZone *_recordZone;
    CKRecordZoneSubscription *_zoneSubscription;
    CKDatabase *_database;
    NSObject<OS_dispatch_queue> *_cloudkitQueue;
    NSObject<OS_dispatch_semaphore> *_cloudKitQueueSemaphore;
    APSConnection *_apsConnection;
    NSError *_lastInitializationError;
    NSURL *_largeBlobDirectoryURL;
}

@property (readonly, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore; // @synthesize cloudKitQueueSemaphore=_cloudKitQueueSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudkitQueue; // @synthesize cloudkitQueue=_cloudkitQueue;
@property (readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isProtectedDataAvailable; // @synthesize isProtectedDataAvailable=_isProtectedDataAvailable;
@property (readonly, nonatomic) NSURL *largeBlobDirectoryURL; // @synthesize largeBlobDirectoryURL=_largeBlobDirectoryURL;
@property (readonly, nonatomic) NSError *lastInitializationError; // @synthesize lastInitializationError=_lastInitializationError;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (nonatomic) BOOL observeLocalDatabaseChanges; // @synthesize observeLocalDatabaseChanges=_observeLocalDatabaseChanges;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *observedCoordinator; // @synthesize observedCoordinator=_observedCoordinator;
@property (readonly, weak, nonatomic) NSPersistentStore *observedStore; // @synthesize observedStore=_observedStore;
@property (readonly, nonatomic) CKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKRecordZoneSubscription *zoneSubscription; // @synthesize zoneSubscription=_zoneSubscription;

- (void).cxx_destruct;
- (BOOL)_checkAccountStatus:(id *)arg1;
- (BOOL)_createSchemaIfNecessary:(id *)arg1;
- (BOOL)_createZoneIfNecessary:(id *)arg1;
- (void)_initializeCloudkitForObservedStore;
- (void)_processAccumulatedQueueData;
- (void)_setApsConnection:(id)arg1;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (BOOL)_setupPushConnection:(id *)arg1;
- (BOOL)_setupZoneSubscriptionIfNecessary:(id *)arg1;
- (id)apsEnvironment;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)arg1;
- (id)cloudKitPushTopic;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)createCKRecordFromObject:(id)arg1;
- (void)dealloc;
- (void)fetchChangesAndUpdateObservedStore;
- (id)initWithContainerIdentifier:(id)arg1 zoneName:(id)arg2;
- (void)logMessage:(id)arg1;
- (Class)managedObjectClass;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)observeChangesForManagedContext:(id)arg1;
- (void)openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(CDUnknownBlockType)arg2;
- (void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4;
- (void)processLocalChangesAndPush;
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;
- (id)recordType;
- (void)retrieveLocalChangesForCloud:(CDUnknownBlockType)arg1;
- (id)serverChangeTokenMetadataKey;
- (BOOL)shouldExportManagedObject:(id)arg1;
- (id)testRecordForSchemaCreation:(id)arg1;
- (id)zoneCreatedKey;
- (id)zoneSubscriptionKey;

@end
