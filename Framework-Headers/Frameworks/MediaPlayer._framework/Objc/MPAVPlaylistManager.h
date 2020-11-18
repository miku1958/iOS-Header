//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPAVQueueController-Protocol.h>
#import <MediaPlayer/MPAVQueueCoordinatorDataSource-Protocol.h>
#import <MediaPlayer/MPQueueBehaviorManaging-Protocol.h>
#import <MediaPlayer/MPQueueFeederDelegate-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPAVController, MPAVItem, MPAVQueueCoordinator, MPQueueFeeder, NSString;
@protocol MPAVItemQueueIdentifier, MPAVPlaylistManagerDelegate;

@interface MPAVPlaylistManager : NSObject <MPQueueFeederDelegate, MPAVQueueCoordinatorDataSource, MPAVQueueController, MPQueueBehaviorManaging, NSSecureCoding>
{
    MPAVItem *_currentItem;
    BOOL _goToTargetIndex;
    long long _lastSelectionDirection;
    MPQueueFeeder *_playlistFeeder;
    long long _repeatMode;
    long long _targetIndex;
    BOOL _updatedAudioSessionMode;
    MPQueueFeeder *_currentQueueFeeder;
    id<MPAVItemQueueIdentifier> _currentItemQueueIdentifier;
    long long _playbackMode;
    MPAVController *_avController;
    MPAVQueueCoordinator *_queueCoordinator;
    id<MPAVPlaylistManagerDelegate> _delegate;
}

@property (readonly, nonatomic) BOOL allowsQueueResetWhenReachingEnd;
@property (readonly, nonatomic) BOOL allowsUserVisibleUpcomingItems;
@property (weak, nonatomic) MPAVController *avController; // @synthesize avController=_avController;
@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, nonatomic) BOOL canSkipToPreviousItem;
@property (readonly) long long currentIndex;
@property (strong) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPAVPlaylistManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property (readonly, nonatomic) MPQueueFeeder *playlistFeeder; // @synthesize playlistFeeder=_playlistFeeder;
@property (readonly, nonatomic) long long playlistItemCount;
@property (readonly) MPAVQueueCoordinator *queueCoordinator; // @synthesize queueCoordinator=_queueCoordinator;
@property (nonatomic) long long repeatMode;
@property (nonatomic) BOOL shouldDeferItemLoading;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long upNextItemCount;
@property (readonly, nonatomic) BOOL userCanChangeShuffleAndRepeatType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_applyVolumeNormalizationForQueuedItems;
- (long long)_indexForStringIdentifier:(id)arg1;
- (id)_itemToFollowItemIndex:(long long)arg1 skipUnavailableContent:(BOOL)arg2;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (long long)_nextItemIndex:(long long)arg1 repeatMode:(long long)arg2;
- (void)_notifyQueueFeederContentsChanged;
- (id)_nowplayingContentItemForIndex:(long long)arg1;
- (id)_nowplayingContentItemIdentifierForIndex:(long long)arg1;
- (unsigned long long)_playbackIndexForDelta:(long long)arg1 fromIndex:(unsigned long long)arg2 ignoreElapsedTime:(BOOL)arg3 totalItemCount:(unsigned long long)arg4 didReachEnd:(BOOL *)arg5;
- (long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (id)_queuePlayerFeederItemForIndex:(long long)arg1;
- (void)_reloadQueuedItemsIfPathBecameAvailable;
- (void)_updateAudioSessionModeWithIndex:(unsigned long long)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (BOOL)canSeekItem:(id)arg1;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSkipToPreviousItemForItem:(id)arg1;
- (void)clearQueueFeeder;
- (void)connectQueueCoordinator:(id)arg1;
- (id)contentItemIDForPlaylistIndex:(long long)arg1;
- (id)currentQueueUUID;
- (void)dealloc;
- (void)disconnectQueueCoordinator;
- (unsigned long long)displayCountForItem:(id)arg1;
- (unsigned long long)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (BOOL)hasQueueContents;
- (unsigned long long)indexForContentItemID:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL *)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isPlaceholderItemForContentItemID:(id)arg1;
- (id)itemForContentItemID:(id)arg1;
- (id)itemForPlaylistIndex:(long long)arg1;
- (id)metadataItemForPlaylistIndex:(long long)arg1;
- (id)musicPlayerControllerQueueForUUID:(id)arg1;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeederForPlaylistIndex:(long long)arg1;
- (long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfItem:(id)arg1;
- (long long)playlistIndexOfItemIdentifier:(id)arg1;
- (long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL *)arg4;
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
- (void)queueCoordinatorDidChangeItems:(id)arg1;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeederDidInvalidateAssets:(id)arg1;
- (void)queueFeederDidInvalidateRealRepeatType:(id)arg1;
- (void)queueFeederDidInvalidateRealShuffleType:(id)arg1;
- (void)queueFeederDidReplaceItem:(id)arg1;
- (void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestMusicPlayerControllerQueueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (BOOL)setMusicPlayerControllerQueue:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(BOOL)arg3;
- (void)updateForSoundCheckDefaultsChange;
- (void)updateLocationDependentPropertiesForItem:(id)arg1;

@end

