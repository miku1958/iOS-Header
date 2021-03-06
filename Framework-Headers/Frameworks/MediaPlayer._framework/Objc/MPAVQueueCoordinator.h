//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAVQueueCoordinating-Protocol.h>

@class MPAVItem, MPQueuePlayer, NSArray, NSHashTable, NSMutableSet, NSOperationQueue, NSString;
@protocol MPAVQueueCoordinatingDataSource;

@interface MPAVQueueCoordinator : NSObject <MPAVQueueCoordinating>
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
    MPAVItem *_currentItem;
    NSArray *_items;
    MPQueuePlayer *_player;
    id<MPAVQueueCoordinatingDataSource> _dataSource;
    CDUnknownBlockType _equilibriumAchievedHandler;
}

@property (readonly, nonatomic) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property (readonly, weak, nonatomic) id<MPAVQueueCoordinatingDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType equilibriumAchievedHandler; // @synthesize equilibriumAchievedHandler=_equilibriumAchievedHandler;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) MPQueuePlayer *player; // @synthesize player=_player;
@property (nonatomic) BOOL shouldDeferItemLoading; // @synthesize shouldDeferItemLoading=_shouldDeferItemLoading;
@property (nonatomic) BOOL shouldExpectEmptyQueue; // @synthesize shouldExpectEmptyQueue=_shouldExpectEmptyQueue;
@property (readonly) Class superclass;

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
- (void)reset;

@end

