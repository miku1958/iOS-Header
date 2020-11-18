//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPMediaPlayback-Protocol.h>

@class MPMusicPlayerControllerInternal;

@interface MPMusicPlayerController : NSObject <MPMediaPlayback>
{
    MPMusicPlayerControllerInternal *_internal;
}

@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) BOOL isPreparedToPlay;

+ (id)applicationMusicPlayer;
+ (id)iPodMusicPlayer;
+ (void)initialize;
+ (id)runLoopForNotifications;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)systemMusicPlayer;
- (void).cxx_destruct;
- (void)_clientCheckInUsingExistencePort:(BOOL)arg1;
- (void)_isQueuePreparedDidChange:(BOOL)arg1;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_musicPlayerDidLaunch;
- (BOOL)_musicPlayerExistencePortIsValid;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_playbackStateDidChange:(long long)arg1;
- (void)_registerForLaunchNotifications;
- (void)_repeatModeDidChange:(long long)arg1;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_serverDied:(id)arg1;
- (void)_setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)_shuffleModeDidChange:(long long)arg1;
- (void)_stopMigServer;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_unregisterForLaunchNotifications;
- (BOOL)allowsBackgroundVideo;
- (void)beginGeneratingPlaybackNotifications;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (unsigned long long)currentChapterIndex;
- (void)dealloc;
- (void)endGeneratingPlaybackNotifications;
- (void)endSeeking;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)indexOfNowPlayingItem;
- (id)init;
- (BOOL)isGeniusAvailable;
- (BOOL)isGeniusAvailableForSeedItems:(id)arg1;
- (BOOL)isNowPlayingItemFromGeniusMix;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)pause;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (void)play;
- (void)playItem:(id)arg1;
- (long long)playbackSpeed;
- (long long)playbackState;
- (void)prepareQueueForPlayback;
- (void)prepareToPlay;
- (id)queueAsQuery;
- (id)queueAsRadioStation;
- (long long)repeatMode;
- (BOOL)serverIsAlive;
- (void)setAllowsBackgroundVideo:(BOOL)arg1;
- (void)setCurrentChapterIndex:(unsigned long long)arg1;
- (void)setNowPlayingItem:(id)arg1;
- (void)setPlaybackSpeed:(long long)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithRadioStation:(id)arg1;
- (BOOL)setQueueWithSeedItems:(id)arg1;
- (void)setQueueWithStoreIDs:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setUseCachedPlaybackState:(BOOL)arg1;
- (void)setUserQueueModificationsDisabled:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumePrivate:(float)arg1;
- (void)shuffle;
- (long long)shuffleMode;
- (BOOL)skipInDirection:(long long)arg1 error:(id *)arg2;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToPreviousChapter;
- (void)stop;
- (unsigned long long)unshuffledIndexOfNowPlayingItem;
- (BOOL)userQueueModificationsDisabled;
- (float)volume;

@end
