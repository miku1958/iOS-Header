//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNBuildRenderer.h>

#import <iWorkImport/KNAmbientBuildRenderer-Protocol.h>
#import <iWorkImport/TSKMediaPlayerControllerDelegate-Protocol.h>

@class CALayer, NSObject, NSString, TSUWeakReference;
@protocol NSCopying, TSKLayerMediaPlayerController, TSKMediaPlayerController;

__attribute__((visibility("hidden")))
@interface KNMovieRenderer : KNBuildRenderer <TSKMediaPlayerControllerDelegate, KNAmbientBuildRenderer>
{
    NSObject<TSKLayerMediaPlayerController> *_playerController;
    CALayer *_videoLayer;
    double _startTime;
    double _playbackAtStartTimePauseTime;
    double _playbackAtStartTimePauseOffset;
    TSUWeakReference *_buildInRendererReference;
    struct CGRect _frameInContainerView;
    id _movieStartCallbackTarget;
    SEL _movieStartCallbackSelector;
    unsigned int _hasMoviePlaybackStarted:1;
    unsigned int _needsToSendMovieStartCallback:1;
    unsigned int _needsToSendBuildEndCallback:1;
    unsigned int _isObservingVideoLayerReadyForDisplay:1;
    unsigned int _needsPlaybackAtStartTime:1;
    unsigned int _hasPendingTogglePlayingControl:1;
    unsigned int _pendingTogglePlayingControlStartsPlaying:1;
    unsigned int _shouldMoviePlaybackEndOnCompletion:1;
    unsigned int _wasMoviePlayingBeforeAnimationPause:1;
    unsigned int _isTeardownCompletionBlockPending:1;
}

@property (weak, nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAmbientBuildStarted;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<NSCopying> *movieTimelineMovieIdentifier;
@property (readonly, nonatomic) CALayer *offscreenVideoLayer;
@property (readonly, nonatomic) NSObject<TSKMediaPlayerController> *playerController; // @synthesize playerController=_playerController;
@property (readonly, nonatomic) BOOL shouldActionBuildsStopAnimations;
@property (readonly) Class superclass;

+ (id)movieInfoForMovieTimelineMovieIdentifier:(id)arg1;
+ (id)movieTimelineMovieIdentifierForMovieInfo:(id)arg1;
- (BOOL)addAnimationsAtLayerTime:(double)arg1;
- (void)animateAfterDelay:(double)arg1;
- (void)applyMovieControl:(long long)arg1;
- (void)dealloc;
- (void)forceRemoveAnimations;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5;
- (void)interruptAndReset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_applyActionEffect:(id)arg1;
- (void)p_cancelPlaybackAtStartTime;
- (struct CGImage *)p_copyCurrentVideoFrameImage;
- (struct CGImage *)p_copyCurrentVideoFrameImageUsingAVAssetImageGenerator;
- (void)p_didEndMoviePlayback;
- (void)p_didStartMoviePlayback;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupPlayerController;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg1 strokeTexture:(id)arg2 reflectionMaskTexture:(id)arg3 frameMaskTexture:(id)arg4;
- (void)p_setupVideoLayer;
- (void)p_showVideoLayer;
- (void)p_startMoviePlaybackIfNeeded;
- (void)p_startPlaybackAtStartTime;
- (void)p_teardownUpdatingTexture:(BOOL)arg1;
- (void)p_unschedulePlaybackAtStartTime;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)registerForAmbientBuildStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)stopAnimations;
- (void)updateAnimationsForLayerTime:(double)arg1;

@end
