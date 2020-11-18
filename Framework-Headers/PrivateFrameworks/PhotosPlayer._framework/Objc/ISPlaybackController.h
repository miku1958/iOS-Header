//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/ISAVPlayerControllerDelegate-Protocol.h>
#import <PhotosPlayer/ISPlaybackStateTransitionManagerDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, ISAVPlayerController, ISPlaybackSpec, ISPlaybackStateTransitionManager, ISReuseQueue, NSError, NSHashTable, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface ISPlaybackController : NSObject <ISPlaybackStateTransitionManagerDelegate, ISAVPlayerControllerDelegate>
{
    BOOL _videoVisible;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _shouldReusePlayer;
    float _volume;
    float _timeOffset;
    float _vitalityPlayRate;
    float _vitalityHintPlayRate;
    float _hintProgress;
    float _playRate;
    ISPlaybackSpec *_playbackSpec;
    double _prePhotoGapTime;
    AVPlayerItem *_videoPlayerItem;
    double _maximumVideoTransitionDelay;
    long long _playbackState;
    CDUnknownBlockType _playbackEndHandler;
    long long _videoPlayerStatus;
    NSError *_videoPlayerError;
    ISReuseQueue *__playerReuseQueue;
    NSHashTable *__outputs;
    long long __currentTransitionRequestID;
    ISAVPlayerController *__avPlayerController;
    ISPlaybackStateTransitionManager *__transitionManager;
    long long __previousPlaybackState;
    id __videoTimeObserver;
    AVPlayer *__videoPlayer;
    id __videoPlayerPerformanceDiagnosticsTimeObserver;
    long long __currentPlaybackID;
    long long __hasStartedVideoForCurrentPlayback;
    double __videoPlaybackRequestTime;
    double __lastHintProgress;
    CDStruct_1b6d18a9 _idleTime;
    CDStruct_1b6d18a9 __videoDuration;
}

@property (readonly, nonatomic) ISAVPlayerController *_avPlayerController; // @synthesize _avPlayerController=__avPlayerController;
@property (nonatomic, setter=_setCurrentPlaybackID:) long long _currentPlaybackID; // @synthesize _currentPlaybackID=__currentPlaybackID;
@property (nonatomic, setter=_setCurrentTransitionRequestID:) long long _currentTransitionRequestID; // @synthesize _currentTransitionRequestID=__currentTransitionRequestID;
@property (nonatomic, setter=_setHasStartedVideoForCurrentPlayback:) long long _hasStartedVideoForCurrentPlayback; // @synthesize _hasStartedVideoForCurrentPlayback=__hasStartedVideoForCurrentPlayback;
@property (nonatomic, setter=_setLastHintProgress:) double _lastHintProgress; // @synthesize _lastHintProgress=__lastHintProgress;
@property (readonly, nonatomic) NSHashTable *_outputs; // @synthesize _outputs=__outputs;
@property (readonly, nonatomic) ISReuseQueue *_playerReuseQueue; // @synthesize _playerReuseQueue=__playerReuseQueue;
@property (nonatomic, setter=_setPreviousPlaybackState:) long long _previousPlaybackState; // @synthesize _previousPlaybackState=__previousPlaybackState;
@property (readonly, nonatomic) ISPlaybackStateTransitionManager *_transitionManager; // @synthesize _transitionManager=__transitionManager;
@property (setter=_setVideoDuration:) CDStruct_1b6d18a9 _videoDuration; // @synthesize _videoDuration=__videoDuration;
@property (nonatomic, setter=_setVideoPlaybackRequestTime:) double _videoPlaybackRequestTime; // @synthesize _videoPlaybackRequestTime=__videoPlaybackRequestTime;
@property (readonly, nonatomic) AVPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property (readonly, nonatomic) id _videoPlayerPerformanceDiagnosticsTimeObserver; // @synthesize _videoPlayerPerformanceDiagnosticsTimeObserver=__videoPlayerPerformanceDiagnosticsTimeObserver;
@property (strong, nonatomic, setter=_setVideoTimeObserver:) id _videoTimeObserver; // @synthesize _videoTimeObserver=__videoTimeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float hintProgress; // @synthesize hintProgress=_hintProgress;
@property (nonatomic) CDStruct_1b6d18a9 idleTime; // @synthesize idleTime=_idleTime;
@property (nonatomic) double maximumVideoTransitionDelay; // @synthesize maximumVideoTransitionDelay=_maximumVideoTransitionDelay;
@property (readonly, nonatomic) NSSet *outputs;
@property (nonatomic) float playRate; // @synthesize playRate=_playRate;
@property (copy, nonatomic) CDUnknownBlockType playbackEndHandler; // @synthesize playbackEndHandler=_playbackEndHandler;
@property (strong, nonatomic) ISPlaybackSpec *playbackSpec; // @synthesize playbackSpec=_playbackSpec;
@property (nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property (nonatomic) double prePhotoGapTime; // @synthesize prePhotoGapTime=_prePhotoGapTime;
@property (readonly) Class superclass;
@property (nonatomic) float timeOffset; // @synthesize timeOffset=_timeOffset;
@property (strong, nonatomic) NSError *videoPlayerError; // @synthesize videoPlayerError=_videoPlayerError;
@property (strong, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property (nonatomic) long long videoPlayerStatus; // @synthesize videoPlayerStatus=_videoPlayerStatus;
@property (nonatomic) float vitalityHintPlayRate; // @synthesize vitalityHintPlayRate=_vitalityHintPlayRate;
@property (nonatomic) float vitalityPlayRate; // @synthesize vitalityPlayRate=_vitalityPlayRate;
@property (nonatomic) float volume; // @synthesize volume=_volume;

+ (id)_sharedPlayerReuseQueue;
+ (id)avfQueue;
+ (void)resetPlayerCache;
- (void).cxx_destruct;
- (void)_callPlaybackEndHandler;
- (void)_configureOutput:(id)arg1;
- (void)_didEndTransitionToPlaybackState:(long long)arg1 forTransitionRequestID:(long long)arg2 finished:(BOOL)arg3;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleMediaServiceResetIfNecessaryWithError:(id)arg1;
- (void)_performBeginPlaybackTransition;
- (CDStruct_1b6d18a9)_playbackEndTime;
- (CDStruct_1b6d18a9)_playbackStartTime;
- (void)_setHintProgress:(float)arg1;
- (void)_setPlayRate:(float)arg1;
- (void)_setPlaybackState:(long long)arg1;
- (void)_setTimeOffset:(float)arg1;
- (void)_setVideoPlayerError:(id)arg1;
- (void)_setVideoPlayerStatus:(long long)arg1;
- (void)_setVitalityPlayRate:(float)arg1;
- (void)_startVideoPlaybackWithPlaybackID:(long long)arg1;
- (void)_updatePlayerController;
- (void)_updatePlayerControllerVolume;
- (void)_updateStatus;
- (void)_videoDidPlayToEndTime;
- (void)_videoWillPlayToEndTime;
- (void)addOutput:(id)arg1;
- (void)avPlayerControllerDidBeginPlaying:(id)arg1;
- (void)avPlayerControllerDidEndPlaying:(id)arg1;
- (void)avPlayerControllerDidEndSeeking:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2 didFinish:(BOOL)arg3;
- (void)avPlayerControllerWillEndPlaying:(id)arg1;
- (CDStruct_1b6d18a9)cachedDuration;
- (void)dealloc;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerObserver:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)transitionManager:(id)arg1 didEndTransitionToPlaybackState:(long long)arg2 forRequestID:(long long)arg3 finished:(BOOL)arg4;
- (void)transitionToPlaybackState:(long long)arg1 playRate:(float)arg2 withTimeOffset:(float)arg3 vitalityPlayRate:(float)arg4 hintProgress:(float)arg5;
- (void)unregisterObserver:(id)arg1;

@end

