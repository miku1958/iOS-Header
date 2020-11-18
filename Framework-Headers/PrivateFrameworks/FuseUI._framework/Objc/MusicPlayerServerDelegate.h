//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MPMusicPlayerControllerServerDelegate-Protocol.h>

@class MPAVController, MPCMediaPlayerLegacyReportingController, MPMediaItem, MPNowPlayingObserver, NSDictionary, NSString;

@interface MusicPlayerServerDelegate : NSObject <MPMusicPlayerControllerServerDelegate>
{
    NSDictionary *_assetStoreFrontOverrides;
    MPAVController *_systemPlayer;
    MPAVController *_applicationPlayer;
    MPCMediaPlayerLegacyReportingController *_applicationPlayerReportingController;
    MPMediaItem *_firstItem;
    NSString *_firstItemIdentifier;
    MPNowPlayingObserver *_nowPlayingObserver;
    long long _playbackShuffleMode;
    CDUnknownBlockType _repeatChangeHandler;
    MPAVController *_repeatChangeHandlerPlayer;
    long long _repeatMode;
    CDUnknownBlockType _shuffleChangeHandler;
    MPAVController *_shuffleChangeHandlerPlayer;
    long long _shuffleMode;
    NSDictionary *_timeModifications;
    MPAVController *_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appDefaultsChanged:(id)arg1;
- (id)currentMediaQueryForMusicPlayerServer:(id)arg1;
- (id)currentRadioStationForMusicPlayerServer:(id)arg1;
- (void)dealloc;
- (unsigned long long)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (id)init;
- (id)initWithSystemPlayer:(id)arg1;
- (BOOL)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithRadioStation:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithStoreIDs:(id)arg2;
- (void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(CDUnknownBlockType)arg2;
- (void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(CDUnknownBlockType)arg2;
- (void)musicPlayerServer:(id)arg1 setAssetStoreFrontOverrides:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setFirstItemIdentifier:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(long long)arg2;
- (void)musicPlayerServer:(id)arg1 setShuffleMode:(long long)arg2;
- (void)musicPlayerServer:(id)arg1 setTimeModifications:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setUserQueueModificationsDisabled:(BOOL)arg2;
- (id)nowPlayingItemForMusicPlayerServer:(id)arg1;
- (long long)playbackSpeedForMusicPlayerServer:(id)arg1;
- (id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(BOOL)arg2;
- (unsigned long long)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (BOOL)userQueueModificationsDisabledForMusicPlayerServer:(id)arg1;

@end

