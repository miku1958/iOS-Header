//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayer.h>

#import <MediaPlaybackCore/MPNowPlayingPlaybackQueueDataSource-Protocol.h>
#import <MediaPlaybackCore/MPRemoteCommandDelegate_Private-Protocol.h>

@class MPAVController, MPCMediaPlayerLegacyAVController, MPCMediaPlayerLegacyItem, MPCMediaPlayerLegacyItemContainer, MPCMediaPlayerLegacyNowPlayingObserver, MPCMediaPlayerLegacyReportingController, MPCPlaybackIntent, MPCRadioPlaybackCoordinator, NSMapTable, NSString, RadioRecentStationsController;

@interface MPCMediaPlayerLegacyPlayer : MPCPlayer <MPNowPlayingPlaybackQueueDataSource, MPRemoteCommandDelegate_Private>
{
    NSMapTable *_avItemToPlayerItemWeakMap;
    MPCMediaPlayerLegacyItemContainer *_currentContainer;
    MPCMediaPlayerLegacyItem *_currentItem;
    BOOL _isRestoringPlaybackState;
    BOOL _hasReceivedAddPlaybackIntent;
    BOOL _mediaRemoteSync;
    BOOL _iAmTheiPod;
    MPCPlaybackIntent *_fallbackPlaybackIntent;
    MPCMediaPlayerLegacyAVController *_player;
    MPCMediaPlayerLegacyNowPlayingObserver *_playerObserver;
    MPCMediaPlayerLegacyReportingController *_reportingController;
    MPCRadioPlaybackCoordinator *_radioPlaybackCoordinator;
}

@property (readonly, nonatomic) MPAVController *avController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent; // @synthesize fallbackPlaybackIntent=_fallbackPlaybackIntent;
@property (readonly, nonatomic) unsigned long long hardQueueItemCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL iAmTheiPod; // @synthesize iAmTheiPod=_iAmTheiPod;
@property (readonly, nonatomic, getter=isMediaRemoteSyncing) BOOL mediaRemoteSync; // @synthesize mediaRemoteSync=_mediaRemoteSync;
@property (strong, nonatomic) MPCMediaPlayerLegacyAVController *player; // @synthesize player=_player;
@property (strong, nonatomic) MPCMediaPlayerLegacyNowPlayingObserver *playerObserver; // @synthesize playerObserver=_playerObserver;
@property (strong, nonatomic) MPCRadioPlaybackCoordinator *radioPlaybackCoordinator; // @synthesize radioPlaybackCoordinator=_radioPlaybackCoordinator;
@property (strong, nonatomic) RadioRecentStationsController *recentStationsController;
@property (strong, nonatomic) MPCMediaPlayerLegacyReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property (readonly) Class superclass;

+ (Class)queueRequestOperationClass;
- (void).cxx_destruct;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_currentItemChangedNotification:(id)arg1;
- (void)_currentItemInvalidedCommandsNotification:(id)arg1;
- (void)_handleCreateRadioStationCommandEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleInsertIntoQueueCommandEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleSetQueueCommandEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_playerDidPausePlaybackForLeaseEndNotification:(id)arg1;
- (id)_playerItemForAVItem:(id)arg1;
- (void)_playerPlaybackErrorNotification:(id)arg1;
- (void)_refreshIAmTheiPod;
- (void)_reloadPlayerWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_repeatShuffleTypeChangedNotification:(id)arg1;
- (BOOL)_shouldVendContentItemForOffset:(long long)arg1;
- (void)_soundCheckEnabledChangedNotification:(id)arg1;
- (void)_updateSupportedCommands;
- (id)activeRouteName;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearPlaybackQueueWithCompletion:(CDUnknownBlockType)arg1;
- (id)contentItemForOffset:(long long)arg1;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)currentContainer;
- (id)currentItem;
- (void)dealloc;
- (id)init;
- (BOOL)isRestoringPlaybackState;
- (void)performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preservePlaybackStateImmediately;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerWithPlaybackLeaseController:(id)arg1;
- (BOOL)remoteCommand:(id)arg1 isEnabledForContentItemIdentifier:(id)arg2;
- (BOOL)remoteCommand:(id)arg1 isSupportedForContentItemIdentifier:(id)arg2;
- (void)restorePlaybackStateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)schedulePlaybackStatePreservation;
- (void)startMediaRemoteSync;
- (long long)state;
- (void)stopMediaRemoteSync;
- (id)videoLayer;

@end

