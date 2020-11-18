//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVItem, MPQueuePlayer, NSArray, NSHashTable, NSMutableSet, NSOperationQueue;
@protocol MPAVQueueCoordinatorDataSource;

@interface MPAVQueueCoordinator : NSObject
{
    NSOperationQueue *_assetQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    BOOL _holdingPlaybackTransactionForFirstItem;
    BOOL _isPendingPlayerItemSync;
    BOOL _isSyncingPlayerItems;
    NSHashTable *_itemsPendingAssetLoading;
    MPAVItem *_lastItemAnchor;
    unsigned long long _lastPreferredQueueDepth;
    BOOL _needsCurrentItemUpdateAfterPlayerItemSync;
    BOOL _preventLoadingItems;
    NSMutableSet *_reusableItems;
    BOOL _shouldExpectEmptyQueue;
    BOOL _shouldDeferItemLoading;
    MPQueuePlayer *_player;
    id<MPAVQueueCoordinatorDataSource> _dataSource;
    MPAVItem *_currentItem;
    NSArray *_items;
    CDUnknownBlockType _equilibriumAchievedHandler;
}

@property (readonly, nonatomic) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property (readonly, weak, nonatomic) id<MPAVQueueCoordinatorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (copy, nonatomic) CDUnknownBlockType equilibriumAchievedHandler; // @synthesize equilibriumAchievedHandler=_equilibriumAchievedHandler;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) MPQueuePlayer *player; // @synthesize player=_player;
@property (nonatomic) BOOL shouldDeferItemLoading; // @synthesize shouldDeferItemLoading=_shouldDeferItemLoading;
@property (nonatomic) BOOL shouldExpectEmptyQueue; // @synthesize shouldExpectEmptyQueue=_shouldExpectEmptyQueue;

- (void).cxx_destruct;
- (void)_beginBackgroundTaskAssertion;
- (void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)_dequeueFailedItem:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (BOOL)_hasAchievedEquilibrium;
- (void)_loadAssetForItem:(id)arg1;
- (id)_playerItems;
- (unsigned long long)_preferredQueueDepthWithFirstItem:(id)arg1;
- (void)_reloadItemsKeepingCurrentItem:(BOOL)arg1;
- (void)_removeItemFromPlayer:(id)arg1;
- (void)_sendItemsDidChange;
- (void)_syncItemsWithPreviousItems:(id)arg1;
- (void)_syncPlayerItems;
- (void)_updateCurrentItem;
- (void)_updateQueueDepthIfNeeded;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 dataSource:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadItemsKeepingCurrentItem:(BOOL)arg1;

@end
