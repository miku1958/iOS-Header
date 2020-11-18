//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPNowPlayingPlaybackQueueDataSourcePrivate-Protocol.h>

@class MPCPlaybackEngine, MPCPlayerPath, MPLibraryAddStatusObserver, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSString;

@interface _MPCMediaRemotePublisher : NSObject <MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving>
{
    MPLibraryAddStatusObserver *_libraryAddStatusObserver;
    NSString *_lastContextID;
    BOOL _initializedSupportedCommands;
    BOOL _engineRestoringState;
    MPCPlaybackEngine *_playbackEngine;
    MPNowPlayingInfoCenter *_infoCenter;
    MPRemoteCommandCenter *_commandCenter;
}

@property (readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEngineRestoringState) BOOL engineRestoringState; // @synthesize engineRestoringState=_engineRestoringState;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property (nonatomic, getter=hasInitializedSupportedCommands) BOOL initializedSupportedCommands; // @synthesize initializedSupportedCommands=_initializedSupportedCommands;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_becomeActiveIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_disableQueueModificationsChangedNotification:(id)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_likedStateChangedNotification:(id)arg1;
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateSupportedCommands;
- (void)_updateUpNextItemCount;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)becomeActive;
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engineDidEndStateRestoration:(id)arg1;
- (void)engineWillBeginStateRestoration:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;
- (void)publishIfNeeded;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;

@end

