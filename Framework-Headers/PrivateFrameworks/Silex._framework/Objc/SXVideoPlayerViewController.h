//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/AVPlayerViewControllerDelegatePrivate-Protocol.h>
#import <Silex/AVPlayerViewControllerDelegate_WebKitOnly-Protocol.h>
#import <Silex/SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate-Protocol.h>
#import <Silex/SXVideoAdViewControllerProviding-Protocol.h>
#import <Silex/SXVideoPlaybackObserver-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>

@class AVPlayerViewController, NSString, SVAdPrivacyButton, SVKeyValueObserver, SVLearnMoreButton, SXAutomaticFullscreenVideoPlaybackBehaviorManager, SXPlaybackCoordinator, SXVideoAdSkipButton, SXVideoPlaybackQueue, SXVideoVolumeObserver, UIActivityIndicatorView, UIGestureRecognizer;
@protocol SVVolumeReporting, SXVideoAdProviding, SXVideoPlayerViewControllerDataSource, SXVideoPlayerViewControllerDelegate;

@interface SXVideoPlayerViewController : UIViewController <SXVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SXVideoAdViewControllerProviding>
{
    BOOL _fullscreen;
    BOOL _playButtonTapped;
    BOOL _showsPlaybackControls;
    id<SXVideoPlayerViewControllerDelegate> _delegate;
    id<SXVideoPlayerViewControllerDataSource> _dataSource;
    unsigned long long _mode;
    unsigned long long _fullscreenBehavior;
    SXVideoPlaybackQueue *_queue;
    SXPlaybackCoordinator *_coordinator;
    id<SXVideoAdProviding> _videoAd;
    AVPlayerViewController *_playerViewController;
    SVLearnMoreButton *_learnMoreButton;
    SXVideoAdSkipButton *_skipButton;
    SVAdPrivacyButton *_adPrivacyButton;
    UIActivityIndicatorView *_activityIndicatorView;
    SVKeyValueObserver *_videoBoundsObserver;
    SXAutomaticFullscreenVideoPlaybackBehaviorManager *_fullscreenBehaviorManager;
    id<SVVolumeReporting> _volumeReporter;
    SXVideoVolumeObserver *_volumeObserver;
    UIGestureRecognizer *_tapGesture;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property (strong, nonatomic) SVAdPrivacyButton *adPrivacyButton; // @synthesize adPrivacyButton=_adPrivacyButton;
@property (strong, nonatomic) SXPlaybackCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property (weak, nonatomic) id<SXVideoPlayerViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXVideoPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property (nonatomic) unsigned long long fullscreenBehavior; // @synthesize fullscreenBehavior=_fullscreenBehavior;
@property (readonly, nonatomic) SXAutomaticFullscreenVideoPlaybackBehaviorManager *fullscreenBehaviorManager; // @synthesize fullscreenBehaviorManager=_fullscreenBehaviorManager;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SVLearnMoreButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (nonatomic) BOOL playButtonTapped; // @synthesize playButtonTapped=_playButtonTapped;
@property (strong, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (strong, nonatomic) SXVideoPlaybackQueue *queue; // @synthesize queue=_queue;
@property (nonatomic) BOOL showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property (strong, nonatomic) SXVideoAdSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property (strong, nonatomic) id<SXVideoAdProviding> videoAd; // @synthesize videoAd=_videoAd;
@property (strong, nonatomic) SVKeyValueObserver *videoBoundsObserver; // @synthesize videoBoundsObserver=_videoBoundsObserver;
@property (readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
@property (strong, nonatomic) SXVideoVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property (readonly, nonatomic) id<SVVolumeReporting> volumeReporter; // @synthesize volumeReporter=_volumeReporter;

- (void).cxx_destruct;
- (void)adSkipButtonTapped:(id)arg1;
- (void)advance;
- (void)dealloc;
- (void)enterFullscreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)exitFullscreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finished;
- (void)fullscreenBehaviorManagerRequiresFullscreenPlayback:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithVolumeReporter:(id)arg1;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)loadView;
- (void)pause;
- (void)playWithButtonTapped:(BOOL)arg1;
- (BOOL)playbackAllowedForPlaybackCoordinator:(id)arg1;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorPausedPlayback:(id)arg1;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)refreshControlsForPlaybackCoordinator:(id)arg1;
- (void)setupQueueIfNeeded;
- (void)startPlaybackForCoordinatorIfAllowed:(id)arg1;
- (void)tapped;
- (void)transitionToCoordinator:(id)arg1;
- (void)updateSkipButtonWithThreshold:(unsigned long long)arg1 time:(double)arg2;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end
