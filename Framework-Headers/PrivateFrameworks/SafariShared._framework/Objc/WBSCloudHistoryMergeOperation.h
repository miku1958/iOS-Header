//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, WBSCloudHistoryFetchResult, WBSHistory;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryMergeOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    WBSHistory *_history;
    WBSCloudHistoryFetchResult *_fetchResult;
    BOOL _mergeStarted;
    NSMutableDictionary *_visitsByVisitIdentifiers;
    NSMutableSet *_redirectChainEarliestVisits;
    NSSet *_tombstones;
    NSMutableDictionary *_tombstonesByURLString;
    NSSet *_existingVisits;
    NSSet *_redirectChainSourceVisits;
}

- (void).cxx_destruct;
- (void)_buildRedirectChains;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_filterVisitsByTombstones;
- (void)_loadTombstonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lookUpExistingItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lookupRedirectChainSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_mergeVisitsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeDuplicateVisits;
- (void)_replayAndAddTombstones;
- (void)_updateClientVersions;
- (id)initWithHistory:(id)arg1 fetchResult:(id)arg2;
- (void)mergeWithCompletion:(CDUnknownBlockType)arg1;

@end

