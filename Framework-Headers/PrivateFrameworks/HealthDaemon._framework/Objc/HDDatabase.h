//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDContentProtectionObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDatabase-Protocol.h>
#import <HealthDaemon/HDSQLiteDatabaseDelegate-Protocol.h>
#import <HealthDaemon/HDSQLiteDatabasePoolDelegate-Protocol.h>

@class HDContentProtectionManager, HDDatabaseJournal, HDProfile, HDSQLiteDatabasePool, HKObserverSet, NSConditionLock, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HDDatabase : NSObject <HDSQLiteDatabasePoolDelegate, HDContentProtectionObserver, HDDiagnosticObject, HDHealthDatabase, HDSQLiteDatabaseDelegate>
{
    shared_ptr_88ae0538 _highFrequencyDataStore;
    BOOL _shouldNotifyFirstUnlockObservers;
    BOOL _isObservingContentProtection;
    BOOL _checkpointRequired;
    BOOL _hasScheduledCheckpoint;
    BOOL _integrityCheckInProgress;
    BOOL _didRunPostMigrationUpdates;
    int _invalidated;
    HDDatabaseJournal *_journal;
    HDDatabaseJournal *_cloudSyncJournal;
    HDProfile *_profile;
    double _offsetTimeInterval;
    NSString *_profileDirectoryPath;
    HDContentProtectionManager *_contentProtectionManager;
    NSString *_threadLocalActiveConnectionKey;
    NSString *_threadLocalSecondaryJournalKey;
    NSLock *_schemaMigrationLock;
    NSConditionLock *_activeDatabasesLock;
    NSMutableSet *_activeDatabases;
    NSHashTable *_migratedDatabases;
    NSOperationQueue *_asynchronousOperationQueue;
    NSObject<OS_dispatch_queue> *_protectedDataQueue;
    NSMutableArray *_firstUnlockBlocks;
    long long _protectedDataState;
    long long _observedContentProtectionState;
    HKObserverSet *_protectedDataObservers;
    NSObject<OS_dispatch_queue> *_journalQueue;
    NSObject<OS_dispatch_group> *_journalGroup;
    unsigned long long _pendingJournalMerges;
    NSObject<OS_dispatch_queue> *_secondaryJournalMergeQueue;
    NSObject<OS_dispatch_queue> *_hfdQueue;
    NSMutableDictionary *_extendedTransactions;
    HDSQLiteDatabasePool *_databasePool;
}

@property (strong, nonatomic) NSMutableSet *activeDatabases; // @synthesize activeDatabases=_activeDatabases;
@property (strong, nonatomic) NSConditionLock *activeDatabasesLock; // @synthesize activeDatabasesLock=_activeDatabasesLock;
@property (strong, nonatomic) NSOperationQueue *asynchronousOperationQueue; // @synthesize asynchronousOperationQueue=_asynchronousOperationQueue;
@property (nonatomic) BOOL checkpointRequired; // @synthesize checkpointRequired=_checkpointRequired;
@property (readonly, nonatomic) HDDatabaseJournal *cloudSyncJournal; // @synthesize cloudSyncJournal=_cloudSyncJournal;
@property (strong, nonatomic) HDContentProtectionManager *contentProtectionManager; // @synthesize contentProtectionManager=_contentProtectionManager;
@property (readonly, nonatomic, getter=isDataProtectedByFirstUnlockAvailable) BOOL dataProtectedByFirstUnlockAvailable;
@property (readonly, nonatomic) HDSQLiteDatabasePool *databasePool; // @synthesize databasePool=_databasePool;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRunPostMigrationUpdates; // @synthesize didRunPostMigrationUpdates=_didRunPostMigrationUpdates;
@property (strong, nonatomic) NSMutableDictionary *extendedTransactions; // @synthesize extendedTransactions=_extendedTransactions;
@property (strong, nonatomic) NSMutableArray *firstUnlockBlocks; // @synthesize firstUnlockBlocks=_firstUnlockBlocks;
@property (nonatomic) BOOL hasScheduledCheckpoint; // @synthesize hasScheduledCheckpoint=_hasScheduledCheckpoint;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *hfdQueue; // @synthesize hfdQueue=_hfdQueue;
@property (nonatomic) BOOL integrityCheckInProgress; // @synthesize integrityCheckInProgress=_integrityCheckInProgress;
@property (nonatomic) int invalidated; // @synthesize invalidated=_invalidated;
@property (nonatomic) BOOL isObservingContentProtection; // @synthesize isObservingContentProtection=_isObservingContentProtection;
@property (readonly, nonatomic) HDDatabaseJournal *journal; // @synthesize journal=_journal;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *journalGroup; // @synthesize journalGroup=_journalGroup;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *journalQueue; // @synthesize journalQueue=_journalQueue;
@property (strong, nonatomic) NSHashTable *migratedDatabases; // @synthesize migratedDatabases=_migratedDatabases;
@property (nonatomic) long long observedContentProtectionState; // @synthesize observedContentProtectionState=_observedContentProtectionState;
@property (nonatomic) double offsetTimeInterval; // @synthesize offsetTimeInterval=_offsetTimeInterval;
@property (nonatomic) unsigned long long pendingJournalMerges; // @synthesize pendingJournalMerges=_pendingJournalMerges;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (copy, nonatomic) NSString *profileDirectoryPath; // @synthesize profileDirectoryPath=_profileDirectoryPath;
@property (readonly, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;
@property (strong, nonatomic) HKObserverSet *protectedDataObservers; // @synthesize protectedDataObservers=_protectedDataObservers;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *protectedDataQueue; // @synthesize protectedDataQueue=_protectedDataQueue;
@property (nonatomic) long long protectedDataState; // @synthesize protectedDataState=_protectedDataState;
@property (strong, nonatomic) NSLock *schemaMigrationLock; // @synthesize schemaMigrationLock=_schemaMigrationLock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *secondaryJournalMergeQueue; // @synthesize secondaryJournalMergeQueue=_secondaryJournalMergeQueue;
@property (nonatomic) BOOL shouldNotifyFirstUnlockObservers; // @synthesize shouldNotifyFirstUnlockObservers=_shouldNotifyFirstUnlockObservers;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *threadLocalActiveConnectionKey; // @synthesize threadLocalActiveConnectionKey=_threadLocalActiveConnectionKey;
@property (copy, nonatomic) NSString *threadLocalSecondaryJournalKey; // @synthesize threadLocalSecondaryJournalKey=_threadLocalSecondaryJournalKey;

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
- (id)_activeDatabase;
- (BOOL)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id *)arg3;
- (BOOL)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_canAttachProtectedDatabaseWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)_cloudSyncJournalDirectoryPath;
- (BOOL)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 requiredPrefix:(id)arg3 error:(id *)arg4;
- (id)_createDatabaseConnection;
- (id)_createDatabaseConnectionWithURL:(id)arg1;
- (BOOL)_createEntitiesForSchemaProvider:(id)arg1 protectionClass:(long long)arg2 migrator:(id)arg3 error:(id *)arg4;
- (long long)_createEntitiesInDatabase:(id)arg1 protectedEntities:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)arg1 schemaProviders:(id)arg2 migrator:(id)arg3 error:(id *)arg4;
- (id)_currentDatabaseJournal;
- (id)_databaseForOptions:(unsigned long long)arg1 outerDatabase:(id)arg2 error:(id *)arg3;
- (id)_databaseNameForProtectedDatabase:(BOOL)arg1;
- (BOOL)_databaseRequiresMigration:(id)arg1 protectedDatabase:(BOOL)arg2 migrator:(id)arg3 schemaProviders:(id)arg4 error:(id *)arg5;
- (void)_enableIncrementalAutoVacuumForDatabaseAtURL:(id)arg1;
- (long long)_fileSizeForURL:(id)arg1 error:(id *)arg2;
- (shared_ptr_88ae0538)_highFrequencyDataStoreWithError:(id *)arg1;
- (id)_highPriorityReaderDatabaseWithError:(id *)arg1;
- (long long)_insertDatabaseIdentifiersIfNeededIntoDatabase:(id)arg1 error:(id *)arg2;
- (BOOL)_isDatabaseValidWithError:(id *)arg1;
- (id)_journalDirectoryPath;
- (BOOL)_journalQueue_performJournalMergeAndCleanup;
- (void)_mergeSecondaryJournals;
- (long long)_migrateDatabase:(id)arg1 fromUserVersion:(long long)arg2 protectedDatabase:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id *)arg2;
- (long long)_migrateOrCreateSchemaWithDatabase:(id)arg1 protectedDatabase:(BOOL)arg2 error:(id *)arg3;
- (id)_newDatabaseConnectionWithError:(id *)arg1;
- (void)_presentRollbackAlertForSchema:(id)arg1 protectedDatabase:(BOOL)arg2 foundVersion:(long long)arg3 currentVersion:(long long)arg4;
- (void)_protectedDataQueue_beginObservingContentProtection;
- (void)_protectedDataQueue_mergeJournalAsynchronously;
- (long long)_protectedDataState;
- (void)_protectedDatabaseDidBecomeAvailable;
- (id)_readerDatabaseWithError:(id *)arg1;
- (void)_reportDatabaseSizes;
- (BOOL)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id *)arg2;
- (id)_secondaryJournal:(long long)arg1;
- (void)_setActiveDatabase:(id)arg1;
- (id)_writerDatabaseWithError:(id *)arg1;
- (BOOL)accessHighFrequencyDataStoreWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)addJournalEntries:(id)arg1 error:(id *)arg2;
- (BOOL)addJournalEntry:(id)arg1 error:(id *)arg2;
- (void)addProtectedDataObserver:(id)arg1;
- (id)allEntityClasses;
- (id)allEntityClassesWithProtectionClass:(long long)arg1;
- (id)beginExtendedTransactionWithOptions:(unsigned long long)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id *)arg4;
- (void)beginObservingContentProtection;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (long long)currentSchemaVersionForProtectedDatabase:(BOOL)arg1;
- (void)databasePool:(id)arg1 didFlushDatabases:(id)arg2;
- (id)databaseSizeInBytesExcludingHFD;
- (id)diagnosticDescription;
- (BOOL)discardHighFrequencyDataStoreWithError:(id *)arg1;
- (id)dumpSchemaAndReturnError:(id *)arg1;
- (id)extendedDatabaseTransactionForIdentifier:(id)arg1;
- (void)finalizeExtendedTransactionForIdentifier:(id)arg1;
- (id)highFrequencyDataStoreURL;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (id)mainDatabaseURL;
- (long long)migrateOrCreateSchemaInDatabase:(id)arg1 protectedDatabaseAvailable:(BOOL)arg2 error:(id *)arg3;
- (id)newDatabaseForDatabasePool:(id)arg1 error:(id *)arg2;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2;
- (void)performAsynchronously:(CDUnknownBlockType)arg1;
- (BOOL)performJournalMergeWithOptions:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)performMigrationForOptions:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)performTransactionWithOptions:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(CDUnknownBlockType)arg1;
- (BOOL)performWithSecondaryJournal:(long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)protectedDatabaseURL;
- (void)removeProtectedDataObserver:(id)arg1;
- (id)virtualFilesystemModuleForDatabase:(id)arg1;

@end

