//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/CSSearchableIndexDelegate-Protocol.h>
#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class CSSearchableIndex, MFCoalescer, MFLazyCache, NSMutableArray, NSMutableSet, NSString, _MFLibrarySearchableIndexPendingRemovals;
@protocol MFLibrarySearchableIndexDataSource, OS_dispatch_queue, OS_dispatch_source;

@interface MFLibrarySearchableIndex : NSObject <MFDiagnosticsGenerator, CSSearchableIndexDelegate>
{
    NSString *_indexName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    long long _resumeCount;
    long long _transaction;
    unsigned long long _throttledIndexingBatchSize;
    unsigned long long _throttledDataSourceBatchSize;
    unsigned long long _currentMaximumBatchSize;
    MFCoalescer *_budgetCoalescer;
    double _remainingIndexingBudget;
    long long _remainingIndexingBudgetOverage;
    NSMutableArray *_pendingItems;
    NSMutableSet *_pendingDomainRemovals;
    _MFLibrarySearchableIndexPendingRemovals *_pendingIdentifierRemovals;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    MFLazyCache *_searchResultsCache;
    struct {
        unsigned int isForeground:1;
        unsigned int isActive:1;
        unsigned int needsRefresh:1;
        unsigned int needsVerification:1;
        unsigned int clientStateFetched:1;
        unsigned int coalesceTimerFired:1;
        unsigned int scheduledProcessing:1;
        unsigned int scheduledRefresh:1;
        unsigned int scheduledVerification:1;
    } _state;
    CSSearchableIndex *_index;
    id<MFLibrarySearchableIndexDataSource> _dataSource;
}

@property (nonatomic) id<MFLibrarySearchableIndexDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_isForeground, setter=_setForeground:) BOOL foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, getter=_transaction) long long transaction;

+ (id)_localClientState;
+ (id)_localClientStateURL;
+ (void)_saveLocalClientState:(id)arg1;
- (id)_budgetPersistenceKey;
- (void)_coalescingTimerFired;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 forItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceIndexItemsNeedingRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dataSourceScheduleWork:(CDUnknownBlockType)arg1;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchLastClientState;
- (void)_getDomainRemovals:(id *)arg1 identifierRemovals:(id *)arg2;
- (void)_indexItems:(id)arg1 fromRefresh:(BOOL)arg2;
- (void)_invalidateCache;
- (long long)_nextTransaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_persistRemainingIndexingBudgetValue:(id)arg1;
- (void)_powerStateChanged:(id)arg1;
- (void)_processDomainRemovals:(id)arg1 identifierRemovals:(id)arg2;
- (void)_processIndexingBatch:(id)arg1;
- (void)_processRefreshRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processSpotlightVerificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1;
- (void)_queueRefresh;
- (void)_queueTransitionActive:(BOOL)arg1;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_resetIndexingBudgetTimer;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItems;
- (void)_scheduleResetIndexingBudgetTimer;
- (void)_scheduleSpotlightVerification;
- (void)_startCoalescingTimer;
- (void)_stopCoalescingTimer;
- (double)_throttleRequestedSize:(unsigned long long *)arg1 action:(CDUnknownBlockType)arg2;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_verifySpotlightIndex;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)identifiersMatchingCriterion:(id)arg1;
- (void)indexItems:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 dataSource:(id)arg2;
- (double)persistedRemainingIndexingBudget;
- (void)refresh;
- (void)removeAllItems;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)resume;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)setRemainingIndexingBudget:(double)arg1 shouldPersist:(BOOL)arg2;
- (void)suspend;

@end

