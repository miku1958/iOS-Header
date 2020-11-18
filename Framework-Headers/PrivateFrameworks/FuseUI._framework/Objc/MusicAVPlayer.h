//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/MPUAVPlayer.h>

#import <FuseUI/MPNowPlayingPlaybackQueueDataSource-Protocol.h>

@class MPCRadioStationPlaybackMetadata, MPPlaybackContext, NSObject, NSString, RadioStation;
@protocol OS_dispatch_queue;

@interface MusicAVPlayer : MPUAVPlayer <MPNowPlayingPlaybackQueueDataSource>
{
    MPPlaybackContext *_lastPlaybackContext;
    BOOL _isSubscribed;
    BOOL _checkedDefaultsForLastPlayedStation;
    MPCRadioStationPlaybackMetadata *_lastPlayedStationMetadata;
    NSObject<OS_dispatch_queue> *_lastPlayedStationSaveQueue;
    NSObject<OS_dispatch_queue> *_radioUIAccessQueue;
    BOOL _banningCurrentItemShouldSkipToNextItem;
}

@property (nonatomic) BOOL banningCurrentItemShouldSkipToNextItem; // @synthesize banningCurrentItemShouldSkipToNextItem=_banningCurrentItemShouldSkipToNextItem;
@property (readonly, nonatomic) RadioStation *currentStation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPCRadioStationPlaybackMetadata *lastPlayedStationMetadata;
@property (readonly) Class superclass;

+ (Class)playlistManagerClass;
+ (id)sharedAVPlayer;
- (void).cxx_destruct;
- (void)_connectAVPlayer;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (id)_fallbackMusicPlaybackContext;
- (void)_feederContentsDidChangeNotification:(id)arg1;
- (void)_handlePlaybackQueueChangedNotification;
- (void)_initiateMusicPlayback;
- (void)_itemLikedStateDidChangeNotification:(id)arg1;
- (void)_musicPlayer_defaultsDidChangeNotification:(id)arg1;
- (void)_registerPlaybackQueueDataSource;
- (BOOL)_shouldVendContentItemForOffset:(long long)arg1;
- (void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification;
- (void)_unregisterPlaybackQueueDataSource;
- (void)_updateLastPlayedStationMetadata;
- (void)beginOrTogglePlayback;
- (BOOL)beginOrTogglePlaybackWithCoordinator:(id)arg1;
- (void)beginPlayback;
- (BOOL)beginPlaybackWithCoordinator:(id)arg1;
- (id)contentItemForOffset:(long long)arg1;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (void)dealloc;
- (BOOL)hasVolumeControl;
- (id)init;
- (void)reloadWithPlaybackContext:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekAlbum:(int)arg1;
- (void)seekPlaylist:(int)arg1;

@end
