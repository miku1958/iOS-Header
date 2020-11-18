//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>
#import <HealthDaemon/HDContentProtectionObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseJournalDelegate-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDatabase-Protocol.h>
#import <HealthDaemon/HDSQLiteDatabaseDelegate-Protocol.h>
#import <HealthDaemon/HDSQLiteDatabasePoolDelegate-Protocol.h>
#import <HealthDaemon/HDSQLiteDatabaseProvider-Protocol.h>

@class HDAssertionManager, HDContentProtectionManager, HDDatabaseJournal, HDProfile, HKObserverSet, NSConditionLock, NSDate, NSDictionary, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabase : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider, HDDatabaseJournalDelegate, HDHealthDatabase>
{
    _Atomic BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_serialAsynchronousQueue;
    NSObject<OS_dispatch_queue> *_hfdQueue;
    shared_ptr_88ae0538 _highFrequencyDataStore;
    NSLock *_writeLock;
    NSObject<OS_dispatch_queue> *_protectedDataQueue;
    HKObserverSet *_protectedDataObservers;
    long long _protectedDataState;
    long long _observedContentProtectionState;
    BOOL _isObservingContentProtection;
    NSMutableArray *_firstUnlockBlocks;
    BOOL _shouldNotifyFirstUnlockObservers;
    NSDate *_protectedDataFlushDeadlineDate;
    NSObject<OS_dispatch_source> *_protectedDataFlushDeadlineTimer;
    BOOL _hasFlushedProtectedData;
    NSMutableDictionary *_databaseJournalMergeObserverSetByType;
    BOOL _didRunPostMigrationUpdates;
    HDDatabaseJournal *_journal;
    HDDatabaseJournal *_cloudSyncJournal;
    HDProfile *_profile;
    NSString *_profileDirectoryPath;
    NSString *_threadLocalTransactionKey;
    NSString *_threadLocalTransactionContextKey;
    NSString *_threadLocalIgnoreTransactionContextKey;
    HDAssertionManager *_assertionManager;
    NSLock *_schemaMigrationLock;
    NSConditionLock *_activeDatabasesLock;
    NSMutableSet *_activeDatabases;
    NSHashTable *_migratedDatabases;
    NSOperationQueue *_asynchronousOperationQueue;
    NSObject<OS_dispatch_queue> *_journalQueue;
    NSObject<OS_dispatch_group> *_journalGroup;
    unsigned long long _pendingJournalMerges;
    NSObject<OS_dispatch_queue> *_secondaryJournalMergeQueue;
    NSMutableDictionary *_extendedTransactions;
    NSDictionary *_databasePoolForType;
    HDContentProtectionManager *_contentProtectionManager;
    double _offsetTimeInterval;
    double _protectedDataFlushInterval;
    CDUnknownBlockType _unitTest_didWaitForJournalMergeHandler;
}

@property (strong, nonatomic) NSMutableSet *activeDatabases; // @synthesize activeDatabases=_activeDatabases;
@property (strong, nonatomic) NSConditionLock *activeDatabasesLock; // @synthesize activeDatabasesLock=_activeDatabasesLock;
@property (strong, nonatomic) HDAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property (strong, nonatomic) NSOperationQueue *asynchronousOperationQueue; // @synthesize asynchronousOperationQueue=_asynchronousOperationQueue;
@property (readonly, nonatomic) HDDatabaseJournal *cloudSyncJournal; // @synthesize cloudSyncJournal=_cloudSyncJournal;
@property (readonly, nonatomic) HDContentProtectionManager *contentProtectionManager; // @synthesize contentProtectionManager=_contentProtectionManager;
@property (readonly, nonatomic, getter=isDataProtectedByFirstUnlockAvailable) BOOL dataProtectedByFirstUnlockAvailable;
@property (strong, nonatomic) NSDictionary *databasePoolForType; // @synthesize databasePoolForType=_databasePoolForType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRunPostMigrationUpdates; // @synthesize didRunPostMigrationUpdates=_didRunPostMigrationUpdates;
@property (strong, nonatomic) NSMutableDictionary *extendedTransactions; // @synthesize extendedTransactions=_extendedTransactions;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL invalidated;
@property (readonly, nonatomic) HDDatabaseJournal *journal; // @synthesize journal=_journal;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *journalGroup; // @synthesize journalGroup=_journalGroup;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *journalQueue; // @synthesize journalQueue=_journalQueue;
@property (strong, nonatomic) NSHashTable *migratedDatabases; // @synthesize migratedDatabases=_migratedDatabases;
@property (nonatomic) double offsetTimeInterval; // @synthesize offsetTimeInterval=_offsetTimeInterval;
@property (nonatomic) unsigned long long pendingJournalMerges; // @synthesize pendingJournalMerges=_pendingJournalMerges;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, copy, nonatomic) NSString *profileDirectoryPath; // @synthesize profileDirectoryPath=_profileDirectoryPath;
@property (readonly, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;
@property (nonatomic) double protectedDataFlushInterval; // @synthesize protectedDataFlushInterval=_protectedDataFlushInterval;
@property (strong, nonatomic) NSLock *schemaMigrationLock; // @synthesize schemaMigrationLock=_schemaMigrationLock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *secondaryJournalMergeQueue; // @synthesize secondaryJournalMergeQueue=_secondaryJournalMergeQueue;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *threadLocalIgnoreTransactionContextKey; // @synthesize threadLocalIgnoreTransactionContextKey=_threadLocalIgnoreTransactionContextKey;
@property (readonly, copy, nonatomic) NSString *threadLocalTransactionContextKey; // @synthesize threadLocalTransactionContextKey=_threadLocalTransactionContextKey;
@property (readonly, copy, nonatomic) NSString *threadLocalTransactionKey; // @synthesize threadLocalTransactionKey=_threadLocalTransactionKey;
@property (copy, nonatomic) CDUnknownBlockType unitTest_didWaitForJournalMergeHandler; // @synthesize unitTest_didWaitForJournalMergeHandler=_unitTest_didWaitForJournalMergeHandler;

+ (id)_databaseCorruptionDefaultKeyForDatabaseWithName:(id)arg1;
+ (id)allCurrentAndFutureEntityClasses;
+ (void)didEncounterUncorruptedDatabaseWithName:(id)arg1;
+ (void)didPassIntegrityCheck;
+ (void)loadEntityClasses;
+ (void)reportDatabaseCorruptionForDatabaseWithName:(id)arg1;
+ (void)reportIntegrityCheckFailure;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)HFDSizeInBytes;
- (id)_URLForWALForDatabaseAtURL:(id)arg1;
- (BOOL)_allowProtectedDataAccessWhileLockedWithTransaction:(id)arg1;
- (BOOL)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id *)arg3;
- (BOOL)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (BOOL)_canAttachProtectedDatabaseForTransaction:(id)arg1 error:(id *)arg2;
- (void)_checkInDatabase:(id)arg1 type:(long long)arg2 flushImmediately:(BOOL)arg3;
- (id)_checkOutDatabaseForTransaction:(id)arg1 databaseType:(long long)arg2 error:(id *)arg3;
- (id)_cloudSyncJournalDirectoryPath;
- (BOOL)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 requiredPrefix:(id)arg3 error:(id *)arg4;
- (id)_createDatabaseConnection;
- (id)_createDatabaseConnectionWithURL:(id)arg1;
- (BOOL)_createEntitiesForSchemaProvider:(id)arg1 protectionClass:(long long)arg2 migrator:(id)arg3 error:(id *)arg4;
- (BOOL)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)arg1 schemaProviders:(id)arg2 migrator:(id)arg3 error:(id *)arg4;
- (long long)_createEntitiesWithMigrationTransaction:(id)arg1 error:(id *)arg2;
- (id)_currentDatabaseJournal;
- (void)_enableIncrementalAutovacuumIfNeededForTransaction:(id)arg1;
- (long long)_fileSizeForURL:(id)arg1 error:(id *)arg2;
- (shared_ptr_88ae0538)_highFrequencyDataStoreWithError:(id *)arg1;
- (BOOL)_isDatabaseValidWithError:(id *)arg1;
- (id)_journalDirectoryPath;
- (id)_journalForType:(long long)arg1;
- (BOOL)_journalQueue_performJournalMergeAndCleanup;
- (void)_mergeSecondaryJournals;
- (BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id *)arg2;
- (long long)_migrateOrCreateSchemaWithMigrationTransaction:(id)arg1 error:(id *)arg2;
- (long long)_migrateWithMigrationTransaction:(id)arg1 fromUserVersion:(long long)arg2 error:(id *)arg3;
- (BOOL)_migrationRequiredForProtectionClass:(long long)arg1 migrator:(id)arg2 schemaProviders:(id)arg3 error:(id *)arg4;
- (id)_newDatabaseConnectionWithError:(id *)arg1;
- (long long)_performMigrationWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (void)_performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_presentRollbackAlertForSchema:(id)arg1 protectionClass:(long long)arg2 foundVersion:(long long)arg3 currentVersion:(long long)arg4;
- (void)_protectedDataQueue_beginObservingContentProtection;
- (void)_protectedDataQueue_cancelProtectedDataFlushTimer;
- (void)_protectedDataQueue_flushProtectedDataIfNecessary;
- (BOOL)_protectedDataQueue_isProtectedDataFlushDeadlinePassed;
- (void)_protectedDataQueue_mergeJournalAsynchronously;
- (long long)_protectedDataState;
- (void)_reportDatabaseSizes;
- (void)_reportMigrationResultIfNecessaryForStatus:(long long)arg1 database:(id)arg2 protectedDatabase:(BOOL)arg3 error:(id)arg4;
- (BOOL)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id *)arg2;
- (id)_threadLocalTransaction;
- (id)_threadLocalTransactionContext;
- (long long)_verifyDatabaseIdentifiersAreValidWithMigrationTransaction:(id)arg1 error:(id *)arg2;
- (BOOL)_waitForMergesWithCurrentJournal:(id)arg1 error:(id *)arg2;
- (BOOL)accessHighFrequencyDataStoreWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (void)addDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 queue:(id)arg3;
- (BOOL)addJournalEntries:(id)arg1 error:(id *)arg2;
- (BOOL)addJournalEntry:(id)arg1 error:(id *)arg2;
- (void)addProtectedDataObserver:(id)arg1;
- (void)addProtectedDataObserver:(id)arg1 queue:(id)arg2;
- (id)allEntityClasses;
- (id)allEntityClassesWithProtectionClass:(long long)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)beginExtendedTransactionWithContext:(id)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id *)arg4;
- (void)beginObservingContentProtection;
- (void)checkInDatabase:(id)arg1 type:(long long)arg2;
- (id)cloneAccessibilityAssertion:(id)arg1 ownerIdentifier:(id)arg2 error:(id *)arg3;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (long long)currentSchemaVersionForProtectionClass:(long long)arg1;
- (void)databaseJournalMergeDidComplete:(id)arg1;
- (void)databasePool:(id)arg1 didFlushDatabases:(id)arg2;
- (id)databasePoolForDatabaseType:(long long)arg1;
- (id)databaseSizeInBytesExcludingHFD;
- (id)databaseTransaction:(id)arg1 checkOutDatabaseWithType:(long long)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)diagnosticDescription;
- (BOOL)discardHighFrequencyDataStoreWithError:(id *)arg1;
- (id)dumpSchemaAndReturnError:(id *)arg1;
- (id)extendedDatabaseTransactionForIdentifier:(id)arg1;
- (void)finalizeExtendedTransactionForIdentifier:(id)arg1;
- (id)highFrequencyDataStoreURL;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (unsigned long long)journalFileCountForType:(long long)arg1;
- (id)mainDatabaseURL;
- (long long)migrateOrCreateSchemaWithMigrationTransaction:(id)arg1 error:(id *)arg2;
- (id)newDatabaseForDatabasePool:(id)arg1 error:(id *)arg2;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2;
- (void)performAsynchronously:(CDUnknownBlockType)arg1;
- (void)performAsynchronouslySerial:(CDUnknownBlockType)arg1;
- (BOOL)performTransactionWithContext:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(CDUnknownBlockType)arg1;
- (void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)performWithJournalType:(long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)performWithTransactionContext:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)progressForJournalMergeWithType:(long long)arg1;
- (id)protectedDatabaseURL;
- (void)removeDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2;
- (void)removeProtectedDataObserver:(id)arg1;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 shouldPerformTransaction:(BOOL)arg2 timeout:(double)arg3 error:(id *)arg4;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (id)unitTest_currentTransaction;
- (void)unitTest_setContentProtectionStateAndWait:(long long)arg1;
- (id)virtualFilesystemModuleForDatabase:(id)arg1;

@end
