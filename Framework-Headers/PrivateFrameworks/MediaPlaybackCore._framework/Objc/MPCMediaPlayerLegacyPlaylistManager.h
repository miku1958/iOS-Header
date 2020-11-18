//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVPlaylistManager.h>

#import <MediaPlaybackCore/MPCQueueBehaviorManaging-Protocol.h>

@class MPAVItem, MPMutableBidirectionalDictionary, MPQueueFeeder, NSMutableArray, NSMutableIndexSet, NSObject, NSString, _MPCAVItemSourceContext, _MPCAVPlaylistIteration;
@protocol OS_dispatch_queue;

@interface MPCMediaPlayerLegacyPlaylistManager : MPAVPlaylistManager <MPCQueueBehaviorManaging>
{
    BOOL _ignoreNextIndexChanges;
    BOOL _disableSoftQueueFaulting;
    BOOL _ignoreSoftQueueInvalidation;
    BOOL _ignoreHardQueueInvalidation;
    unsigned long long _maximumModifiedPlaylistIterationIndex;
    unsigned long long _minimumPlaylistIndex;
    unsigned long long _maximumPlaylistIndex;
    NSMutableIndexSet *_failedSoftQueueIndexes;
    MPMutableBidirectionalDictionary *_identifiersToIndexes;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disableQueueModifications;
    MPQueueFeeder *_softQueueFeeder;
    NSMutableArray *_hardQueueSourceContexts;
    MPAVItem *_lastPlayedSoftQueueItem;
    long long _nextCurrentIndex;
    long long _hardQueueInsertionIndex;
    _MPCAVItemSourceContext *_repeatPlaylistIdentifer;
    _MPCAVPlaylistIteration *_softQueueModifications;
}

@property (readonly, nonatomic) BOOL allowsUserVisibleUpcomingItems;
@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, nonatomic) BOOL canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableQueueModifications; // @synthesize disableQueueModifications=_disableQueueModifications;
@property (nonatomic) long long hardQueueInsertionIndex; // @synthesize hardQueueInsertionIndex=_hardQueueInsertionIndex;
@property (readonly, nonatomic) struct _NSRange hardQueuePlaylistIndexRange;
@property (strong, nonatomic) NSMutableArray *hardQueueSourceContexts; // @synthesize hardQueueSourceContexts=_hardQueueSourceContexts;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPAVItem *lastPlayedSoftQueueItem; // @synthesize lastPlayedSoftQueueItem=_lastPlayedSoftQueueItem;
@property (nonatomic) long long nextCurrentIndex; // @synthesize nextCurrentIndex=_nextCurrentIndex;
@property (readonly, nonatomic) long long playbackMode;
@property (copy, nonatomic) _MPCAVItemSourceContext *repeatPlaylistIdentifer; // @synthesize repeatPlaylistIdentifer=_repeatPlaylistIdentifer;
@property (strong, nonatomic) MPQueueFeeder *softQueueFeeder; // @synthesize softQueueFeeder=_softQueueFeeder;
@property (strong, nonatomic) _MPCAVPlaylistIteration *softQueueModifications; // @synthesize softQueueModifications=_softQueueModifications;
@property (readonly, nonatomic) struct _NSRange softQueuePlaylistIndexRange;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL userCanChangeShuffleAndRepeatType;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_handleConfiguredQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (long long)_hardQueueIndexForIndex:(long long)arg1;
- (struct _NSRange)_hardQueuePlaylistIndexRangeIncludingCurrentItem:(BOOL)arg1;
- (void)_insertSoftQueueSourceContext:(id)arg1 atIndex:(long long)arg2;
- (id)_itemForPlaylistIndex:(long long)arg1;
- (id)_itemForSourceContext:(id)arg1;
- (BOOL)_itemIsHardQueueItem:(id)arg1;
- (BOOL)_itemIsSoftQueueItem:(id)arg1;
- (id)_metadataItemForSourceContext:(id)arg1;
- (void)_notifyQueueFeederContentsChanged;
- (long long)_playlistIndexOfItemIdentifier:(id)arg1;
- (id)_playlistIterationForQueueFeeder:(id)arg1 withMaxQueueIndexToPreload:(unsigned long long)arg2;
- (long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (id)_queueFeeder:(id)arg1 itemForIdentifier:(id)arg2;
- (BOOL)_removeHardQueueItems;
- (id)_removeSoftQueueSourceContextAtIndex:(long long)arg1;
- (long long)_softQueueIndexForIndex:(long long)arg1;
- (struct _NSRange)_softQueuePlaylistIndexRangeIncludingCurrentItem:(BOOL)arg1;
- (id)_softQueueSourceContextForIndex:(long long)arg1;
- (id)_sourceContextForPlaylistIndex:(unsigned long long)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHardQueue;
- (void)clearSoftQueue;
- (long long)currentIndex;
- (unsigned long long)displayCountForItem:(id)arg1;
- (unsigned long long)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1 queueFeeder:(id)arg2;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1 queueFeeder:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemForPlaylistIndex:(long long)arg1;
- (id)metadataItemForPlaylistIndex:(long long)arg1;
- (void)moveItemAtPlaybackIndex:(long long)arg1 toPlaybackIndex:(long long)arg2 intoHardQueue:(BOOL)arg3;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeeder;
- (id)playlistFeederForPlaylistIndex:(long long)arg1;
- (long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfItem:(id)arg1;
- (long long)playlistIndexOfItemIdentifier:(id)arg1;
- (long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL *)arg4;
- (unsigned long long)playlistItemCount;
- (BOOL)preventsHardQueueModificationsForItem:(id)arg1;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeederDidInvalidateRealShuffleType:(id)arg1;
- (void)removeItemAtPlaybackIndex:(long long)arg1;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (BOOL)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(BOOL)arg3;
- (void)setRepeatMode:(long long)arg1;
- (BOOL)supportsAddToQueue;

@end

