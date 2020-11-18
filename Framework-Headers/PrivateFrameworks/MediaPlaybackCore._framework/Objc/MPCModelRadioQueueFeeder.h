//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import <MediaPlaybackCore/MPRTCReportingItemSessionContaining-Protocol.h>

@class ICStoreRequestContext, ICUserIdentityStore, MPAVItem, MPCModelRadioPersonalizationResponse, MPCModelRadioPlaybackQueue, MPCPlaybackRequestEnvironment, NSDictionary, NSOperationQueue, NSString, SSVPlayActivityController;
@protocol MPAVItemQueueIdentifier;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining>
{
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    MPAVItem *_currentItem;
    BOOL _hasLoadedAdditionalItemsForCurrentItem;
    id<MPAVItemQueueIdentifier> _lastCleanPlayedIdentifier;
    id<MPAVItemQueueIdentifier> _lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse *_lastResponse;
    long long _loadingOperationDepth;
    NSOperationQueue *_loadingOperationQueue;
    BOOL _mayHaveRestrictedContent;
    ICUserIdentityStore *_observedIdentityStore;
    SSVPlayActivityController *_playActivityController;
    MPCModelRadioPlaybackQueue *_playbackQueue;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _queueGeneration;
    ICStoreRequestContext *_storeRequestContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_beginObservingIdentityStoreForSignOut;
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;
- (void)_detectSignOutForIdentityStore:(id)arg1;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (void)_endObservingIdentityStoreForSignOut;
- (void)_failAfterRequest:(id)arg1 withError:(id)arg2;
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3;
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3;
- (long long)_indexOfAVItem:(id)arg1;
- (void)_loadAdditionalItemsIfNeeded;
- (void)_loadTracksWithRequest:(id)arg1;
- (void)_observePersonalizationResponse:(id)arg1;
- (void)_removeRestrictedTracks;
- (void)_repersonalizeCurrentTracks;
- (void)_responseDidInvalidate;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1;
- (id)_startPlaybackRequestWithPlaybackContext:(id)arg1;
- (BOOL)allowsQueueResetWhenReachingEnd;
- (BOOL)allowsUserVisibleUpcomingItems;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (BOOL)canReorder;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSkipToPreviousItemForItem:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)init;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (BOOL)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (BOOL)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (id)modelPlayEvent;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (BOOL)preventsHardQueueModificationsForItem:(id)arg1;
- (long long)realRepeatType;
- (long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)userCanChangeShuffleAndRepeatType;

@end

