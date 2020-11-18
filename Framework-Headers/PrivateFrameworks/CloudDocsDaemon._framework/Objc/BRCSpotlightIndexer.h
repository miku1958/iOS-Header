//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>
#import <CloudDocsDaemon/CSSearchableIndexDelegate-Protocol.h>

@class BRCAccountSession, BRCThrottle, CSSearchableIndex, NSString, br_pacer;
@protocol BRCIndexingArbiter, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCSpotlightIndexer : NSObject <BRCModule, CSSearchableIndexDelegate>
{
    CSSearchableIndex *_index;
    BRCAccountSession *_session;
    BRCThrottle *_failureThrottle;
    NSObject<OS_dispatch_source> *_failureTimer;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_pacer;
    BOOL _readyForIndexing;
    unsigned long long _minNotifRank;
    unsigned long long _flushedNotifRank;
    unsigned long long _clientState;
    NSString *_loggedInUserDisplayName;
    id<BRCIndexingArbiter> _indexingArbiter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<BRCIndexingArbiter> indexingArbiter; // @synthesize indexingArbiter=_indexingArbiter;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) Class superclass;

+ (void)dropAllContainersIndexForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_deleteAllItemsAndReindexResumingIndexing:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteAllRanks;
- (id)_deletedDocIdResultSetWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2;
- (void)_failedIndexing;
- (void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2;
- (void)_indexNextBatch;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)arg1;
- (void)_saveStateForNotifRank:(unsigned long long)arg1;
- (void)_scheduleIndexing;
- (void)_scheduleThrottledTask:(CDUnknownBlockType)arg1 taskName:(const char *)arg2;
- (void)_signalIndexing;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (void)docID:(unsigned long long)arg1 wasDeletedForNotifRank:(unsigned long long)arg2;
- (void)dropIndexForClientZone:(id)arg1;
- (void)garbageCollectSupersededRanks;
- (id)initWithAccountSession:(id)arg1;
- (void)maxNotifRankWasFlushed;
- (void)resume;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;

@end
