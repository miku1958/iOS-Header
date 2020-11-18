//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, CNIndexClientState;
@protocol CNCSSearchableIndex, CNSpotlightIndexingLogger;

@interface CNIndexRequestHandler : NSObject
{
    BOOL _isFullSyncNeeded;
    CNContactStore *_contactStore;
    id<CNCSSearchableIndex> _index;
    id<CNSpotlightIndexingLogger> _logger;
    unsigned long long _batchSize;
    CNIndexClientState *_clientState;
}

@property (readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (strong, nonatomic) CNIndexClientState *clientState; // @synthesize clientState=_clientState;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) id<CNCSSearchableIndex> index; // @synthesize index=_index;
@property (nonatomic) BOOL isFullSyncNeeded; // @synthesize isFullSyncNeeded=_isFullSyncNeeded;
@property (readonly, nonatomic) id<CNSpotlightIndexingLogger> logger; // @synthesize logger=_logger;

- (void).cxx_destruct;
- (BOOL)_batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2 fullSyncOffset:(id)arg3 fullSyncDone:(id)arg4;
- (id)_futureForDeleteAllSearchableItems;
- (id)_futureForDeleteSearchableItemsWithIdentifiers:(id)arg1;
- (id)_futureForEndIndexBatchWithClientState:(id)arg1;
- (id)_futureForFetchLastClientState;
- (id)_futureForIndexSearchableItems:(id)arg1;
- (void)_performIndexingWithForcedReindexing:(BOOL)arg1;
- (BOOL)batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2;
- (BOOL)batchIndexUpdatingItems:(id)arg1 fullSyncOffset:(long long)arg2 fullSyncDone:(BOOL)arg3;
- (BOOL)beginIndexBatch;
- (void)consumeChangeHistory:(id)arg1;
- (BOOL)deleteAllSearchableItems;
- (BOOL)deleteSearchableItemsWithIdentifiers:(id)arg1;
- (BOOL)deltaSyncContacts:(id)arg1;
- (BOOL)endIndexBatchWithClientState;
- (void)fetchAndCheckLastClientState;
- (id)fetchChangeHistory;
- (BOOL)fetchLastClientState;
- (BOOL)fullSyncContacts;
- (BOOL)indexSearchableItems:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1 searchableIndex:(id)arg2 logger:(id)arg3 batchSize:(unsigned long long)arg4;
- (void)performIndexing;
- (BOOL)prepareForFullSync:(id)arg1;
- (void)registerForChangeHistory;
- (void)reindexAllSearchableItems;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (id)searchableItemsForContactIdentifiers:(id)arg1;

@end

