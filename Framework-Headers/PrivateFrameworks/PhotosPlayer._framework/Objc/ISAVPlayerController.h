//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem;
@protocol ISAVPlayerControllerDelegate;

@interface ISAVPlayerController : NSObject
{
    struct {
        BOOL respondsToDidBeginPlaying;
        BOOL respondsToWillEndPlaying;
        BOOL respondsToDidEndPlaying;
        BOOL respondsToDidEndSeeking;
    } _delegateFlags;
    CDStruct_1b6d18a9 _cachedDuration;
    AVPlayerItem *_cachedDurationPlayerItem;
    id _playbackNearEndTimeObserver;
    BOOL __isPerfomingChanges;
    BOOL __playersNeedUpdate;
    BOOL __seekingVideo;
    BOOL __pendingReset;
    BOOL __shouldPlayAudio;
    BOOL __shouldPreroll;
    float _playVolume;
    float _playRate;
    float __hintPlayRate;
    AVPlayer *_videoPlayer;
    long long _state;
    id<ISAVPlayerControllerDelegate> _delegate;
    double _prePhotoGapTime;
    long long __seekRequestID;
    id __didBeginPlaybackObserver;
    AVPlayerItem *__playerItemToObservePlaybackEnd;
    AVPlayerItem *__currentVideoPlayerItem;
    CDStruct_1b6d18a9 __lastResetTime;
    CDStruct_1b6d18a9 __forwardPlaybackEndTime;
    CDStruct_1b6d18a9 __lastSetForwardPlaybackEndTime;
    CDStruct_1b6d18a9 __observedPlaybackNearEndTime;
}

@property (strong, nonatomic, setter=_setCurrentVideoPlayerItem:) AVPlayerItem *_currentVideoPlayerItem; // @synthesize _currentVideoPlayerItem=__currentVideoPlayerItem;
@property (strong, nonatomic, setter=_setDidBeginPlaybackObserver:) id _didBeginPlaybackObserver; // @synthesize _didBeginPlaybackObserver=__didBeginPlaybackObserver;
@property (nonatomic, setter=_setForwardPlaybackEndTime:) CDStruct_1b6d18a9 _forwardPlaybackEndTime; // @synthesize _forwardPlaybackEndTime=__forwardPlaybackEndTime;
@property (nonatomic, setter=_setHintPlayRate:) float _hintPlayRate; // @synthesize _hintPlayRate=__hintPlayRate;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerfomingChanges; // @synthesize _isPerfomingChanges=__isPerfomingChanges;
@property (nonatomic, setter=_setLastResetTime:) CDStruct_1b6d18a9 _lastResetTime; // @synthesize _lastResetTime=__lastResetTime;
@property (nonatomic, setter=_setLastSetForwardPlaybackEndTime:) CDStruct_1b6d18a9 _lastSetForwardPlaybackEndTime; // @synthesize _lastSetForwardPlaybackEndTime=__lastSetForwardPlaybackEndTime;
@property (nonatomic, setter=_setObservedPlaybackNearEndTime:) CDStruct_1b6d18a9 _observedPlaybackNearEndTime; // @synthesize _observedPlaybackNearEndTime=__observedPlaybackNearEndTime;
@property (nonatomic, getter=_hasPendingReset, setter=_setPendingReset:) BOOL _pendingReset; // @synthesize _pendingReset=__pendingReset;
@property (strong, nonatomic, setter=_setPlayerItemToObservePlaybackEnd:) AVPlayerItem *_playerItemToObservePlaybackEnd; // @synthesize _playerItemToObservePlaybackEnd=__playerItemToObservePlaybackEnd;
@property (readonly, nonatomic) BOOL _playersNeedUpdate; // @synthesize _playersNeedUpdate=__playersNeedUpdate;
@property (nonatomic, setter=_setSeekRequestID:) long long _seekRequestID; // @synthesize _seekRequestID=__seekRequestID;
@property (nonatomic, getter=_isSeekingVideo, setter=_setSeekingVideo:) BOOL _seekingVideo; // @synthesize _seekingVideo=__seekingVideo;
@property (nonatomic, setter=_setShouldPlayAudio:) BOOL _shouldPlayAudio; // @synthesize _shouldPlayAudio=__shouldPlayAudio;
@property (nonatomic, setter=_setShouldPreroll:) BOOL _shouldPreroll; // @synthesize _shouldPreroll=__shouldPreroll;
@property (weak, nonatomic) id<ISAVPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL isSeeking;
@property (nonatomic) float playRate; // @synthesize playRate=_playRate;
@property (nonatomic) float playVolume; // @synthesize playVolume=_playVolume;
@property (nonatomic) double prePhotoGapTime; // @synthesize prePhotoGapTime=_prePhotoGapTime;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (strong, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;

- (void).cxx_destruct;
- (CDStruct_1b6d18a9)_duration;
- (void)_handleSeekingRequest:(long long)arg1 toTime:(CDStruct_1b6d18a9)arg2 didFinish:(BOOL)arg3 startedTimestamp:(double)arg4;
- (void)_invalidatePlayers;
- (void)_pauseVideo;
- (void)_playVideoWithAudioIfReady;
- (void)_playerItemDidFinishPlaying:(id)arg1;
- (void)_playerItemWillFinishPlaying;
- (void)_safelyUpdateRateForPlayers;
- (void)_seekToDesiredTimeIfReady;
- (void)_setState:(long long)arg1;
- (void)_setVideoPlayer:(id)arg1;
- (void)_startPlayingFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2 withRate:(float)arg3 shouldPlayAudio:(BOOL)arg4;
- (void)_updatePlayersIfNeeded;
- (void)_videoPlayerDidBeginPlaybackWithObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2 withRate:(float)arg3 shouldPlayAudio:(BOOL)arg4;
- (void)resetToTime:(CDStruct_1b6d18a9)arg1;
- (void)resetToTime:(CDStruct_1b6d18a9)arg1 hintEndTime:(CDStruct_1b6d18a9)arg2 hintPlayRate:(float)arg3;

@end

