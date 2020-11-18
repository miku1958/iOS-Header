//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryLoader-Protocol.h>
#import <SafariShared/WBSHistoryLoaderDelegate-Protocol.h>
#import <SafariShared/WBSHistoryStore-Protocol.h>

@class NSArray, NSCountedSet, NSData, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSURL, WBSHistoryCrypto, WBSPeriodicActivityScheduler, WBSSQLiteDatabase, WBSSQLiteStatementCache;
@protocol OS_dispatch_queue, WBSHistoryStoreDelegate;

@interface WBSHistorySQLiteStore : NSObject <WBSHistoryLoaderDelegate, WBSHistoryStore, WBSHistoryLoader>
{
    NSURL *_databaseURL;
    unsigned long long _itemCountLimit;
    Class _historyItemClass;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteStatementCache *_statements;
    NSMutableDictionary *_clientVersions;
    NSMutableDictionary *_itemsByDatabaseID;
    NSMapTable *_weakVisitsByDatabaseID;
    NSMutableSet *_pendingAddsOrUpdates;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingVisitDeletes;
    NSMutableSet *_pendingTombstones;
    BOOL _commitGenerationValuesOnNextWrite;
    long long _currentGeneration;
    long long _lastSyncedGeneration;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    long long _cachedNumberOfDevicesInSyncCircle;
    BOOL _loadInProgress;
    NSArray *_loadedItems;
    NSArray *_discardedItems;
    NSCountedSet *_loadedStringsForUserTypedDomainExpansion;
    int _importState;
    NSDate *_loadStartTime;
    NSTimer *_writeTimer;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _isClosed;
    NSDate *_lastMaintenanceDate;
    BOOL _writeLastMaintenanceDateOnNextWrite;
    BOOL _checkpointWriteAheadLogOnNextWrite;
    WBSPeriodicActivityScheduler *_maintenanceScheduler;
    BOOL _pushNotificationsAreInitialized;
    id<WBSHistoryStoreDelegate> _delegate;
    double _historyAgeLimit;
    WBSSQLiteDatabase *_database;
    WBSHistoryCrypto *_crypto;
}

@property (nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property (readonly, nonatomic) WBSHistoryCrypto *crypto; // @synthesize crypto=_crypto;
@property (readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WBSHistoryStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *fetchThrottlerData;
@property (readonly) unsigned long long hash;
@property (nonatomic) double historyAgeLimit; // @synthesize historyAgeLimit=_historyAgeLimit;
@property (nonatomic) BOOL pushNotificationsAreInitialized; // @synthesize pushNotificationsAreInitialized=_pushNotificationsAreInitialized;
@property (copy, nonatomic) NSData *pushThrottlerData;
@property (readonly, nonatomic) NSData *salt;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_ageLimitSinceReferenceDate;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
- (BOOL)_checkDatabaseIntegrity;
- (void)_checkpointWriteAheadLog;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_clearHistoryVisitsMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 addingTombstone:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1;
- (long long)_currentGeneration;
- (id)_deletionPlanForDeletionOfVisits:(id)arg1;
- (void)_enforceAgeAndItemCountLimits:(CDUnknownBlockType)arg1;
- (void)_expireOldVisits;
- (void)_finishLoadingOnMainThread;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)_incrementCurrentGeneration;
- (void)_insertItem:(id)arg1;
- (void)_insertTombstone:(id)arg1;
- (void)_insertVisit:(id)arg1;
- (id)_itemsOrderedForInsertion:(id)arg1;
- (id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned long long)arg1;
- (long long)_lastSyncedGeneration;
- (void)_loadClientVersions;
- (void)_loadFromDatabase;
- (void)_loadHistory;
- (void)_loadRedirectVisitsForLoadedItems:(id)arg1;
- (id)_metadataDataValueForKey:(id)arg1;
- (long long)_metadataInt64ValueForKey:(id)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (void)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2;
- (void)_performMaintenance:(CDUnknownBlockType)arg1;
- (void)_processPendingDeletes;
- (void)_processPendingVisitDeletes;
- (void)_processPendingWrites;
- (void)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1;
- (void)_recomputeDerivedVisitCountScores;
- (void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(CDUnknownBlockType)arg1 addingTombstone:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_scheduleMaintenance;
- (void)_scheduleWrite;
- (void)_setLastSyncedGeneration:(unsigned long long)arg1;
- (void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2;
- (void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2;
- (int)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2;
- (BOOL)_shouldEmitLegacyTombstones;
- (BOOL)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1;
- (id)_tombstonesNeedingSync;
- (void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(BOOL)arg2;
- (void)_updateGenerationForVisits:(id)arg1;
- (void)_updateItem:(id)arg1;
- (void)_updateVisit:(id)arg1;
- (void)_updateVisitRedirectRelationships:(id)arg1;
- (id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (id)_visitsCreatedMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4;
- (id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3;
- (id)_visitsFromRows:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)_visitsNeedingSyncWithVisitSyncWindow:(double)arg1;
- (id)_visitsOrderedForInsertion:(id)arg1;
- (id)_visitsWithOrigins:(id)arg1;
- (void)_writeTimerFired;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
- (id)allVisitsForItemsOnDatabaseQueue:(id)arg1;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (id)existingItemFromVisitRow:(id)arg1;
- (void)getAllTombstonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
- (void)itemsWereModified:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)performMaintenance:(CDUnknownBlockType)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (void)removeItemsOnDatabaseQueue:(id)arg1;
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeVisitsOnDatabaseQueue:(id)arg1;
- (void)replayAndAddTombstone:(id)arg1;
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (void)setServerChangeTokenData:(id)arg1;
- (void)startLoading;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)visitForItem:(id)arg1 row:(id)arg2;
- (id)visitForRow:(id)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)visitTitleWasUpdated:(id)arg1;
- (void)visitsWereAdded:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)waitForLoadingToComplete;

@end

