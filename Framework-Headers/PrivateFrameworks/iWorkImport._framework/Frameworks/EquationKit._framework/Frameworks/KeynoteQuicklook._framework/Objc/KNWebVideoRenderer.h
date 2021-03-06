//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/KNBuildRenderer.h>

#import <KeynoteQuicklook/KNAmbientBuildRenderer-Protocol.h>

@class NSString, TSDTextureSet;

@interface KNWebVideoRenderer : KNBuildRenderer <KNAmbientBuildRenderer>
{
    double _startTime;
    BOOL _needsVideoAtStartTime;
    BOOL _animationsPaused;
    double _playbackAtStartTimePauseTime;
    double _playbackAtStartTimePauseOffset;
    id _ambientBuildStartCallbackTarget;
    SEL _ambientBuildCallbackSelector;
    BOOL _needsToSendAmbientBuildStartCallback;
    BOOL _needsToSendBuildEndCallback;
    TSDTextureSet *_posterImageTextureSet;
    BOOL _hasAmbientBuildStarted;
    KNBuildRenderer *_buildInRenderer;
}

@property (weak, nonatomic) KNBuildRenderer *buildInRenderer; // @synthesize buildInRenderer=_buildInRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAmbientBuildStarted; // @synthesize hasAmbientBuildStarted=_hasAmbientBuildStarted;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldActionBuildsStopAnimations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)addAnimationsAtLayerTime:(double)arg1;
- (void)animate;
- (void)forceRemoveAnimations;
- (void)interruptAndReset;
- (void)p_cancelVideoAtStartTime;
- (void)p_didFailWithError:(id)arg1;
- (void)p_didStartVideo;
- (void)p_didStopVideo;
- (void)p_scheduleVideoAtStartTime;
- (void)p_showVideoAtStartTime;
- (void)p_startVideo;
- (void)p_stopVideo;
- (void)p_unscheduleVideoAtStartTime;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)registerForAmbientBuildStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)stopAnimations;
- (void)updateAnimationsForLayerTime:(double)arg1;

@end

