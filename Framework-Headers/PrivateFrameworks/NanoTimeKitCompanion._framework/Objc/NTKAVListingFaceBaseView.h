//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAVFaceBaseView.h>

@class NSTimer, NTKDelayedBlock, NTKTaskScheduler, UIView;
@protocol NTKAVListing;

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView
{
    CDUnknownBlockType _unpauseFromSwitcherBlock;
    NTKTaskScheduler *_taskScheduler;
    BOOL _preLoadingVideoOnSleep;
    BOOL _preLoadedVideoOnSleep;
    BOOL _shouldPlayOnWake;
    BOOL _isPauseLockedout;
    BOOL _isPaused;
    BOOL _shouldPause;
    NSTimer *_playOnWakeTimeout;
    NTKDelayedBlock *_playNextVideoDelayBlock;
    NTKDelayedBlock *_pauseLockoutBlock;
    UIView *_blackView;
    long long _previousDataMode;
    BOOL _shouldChangeVariantForScreenWake;
    BOOL _contentUnloadedForFaceSwiping;
    id<NTKAVListing> _currentListing;
}

@property (nonatomic) BOOL contentUnloadedForFaceSwiping; // @synthesize contentUnloadedForFaceSwiping=_contentUnloadedForFaceSwiping;
@property (strong, nonatomic) id<NTKAVListing> currentListing; // @synthesize currentListing=_currentListing;
@property (readonly, nonatomic) BOOL paused; // @synthesize paused=_isPaused;
@property (nonatomic) BOOL shouldChangeVariantForScreenWake; // @synthesize shouldChangeVariantForScreenWake=_shouldChangeVariantForScreenWake;
@property (readonly, nonatomic) BOOL shouldPause; // @synthesize shouldPause=_shouldPause;

- (void).cxx_destruct;
- (void)_activatePauseLockout;
- (void)_addSubviewInOrder:(id)arg1;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applySlow;
- (void)_cancelDelayedPlayback;
- (void)_cancelPauseLockout;
- (BOOL)_changeCurrentListing;
- (void)_cleanupAfterOrb:(BOOL)arg1;
- (id)_curtainView;
- (BOOL)_curtainViewVisible;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleOrdinaryScreenWake;
- (void)_handleScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_hideCurtainView;
- (void)_loadSnapshotContentViews;
- (void)_loadVideoForListing;
- (BOOL)_needsVignette;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (void)_pauseImmediately;
- (void)_performPreloadVideoTask;
- (void)_playNextVideo;
- (void)_playNextVideoAfterDelay:(double)arg1;
- (void)_playQueuedUpVideo;
- (void)_playVideo;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_queuePreloadVideoTask;
- (void)_reset;
- (void)_resetVideoForListing;
- (void)_selectDefaultListing;
- (void)_showCurtainView;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_timeLabelUsesLegibility;
- (void)_transitionToPosterView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_unpauseFromSwitcher;
- (void)_updateImageToBlur;
- (void)_updatePaused;
- (void)dealloc;
- (void)faultInFaceContentSkippedDuringSwiping;
- (id)initWithFrame:(struct CGRect)arg1;

@end

