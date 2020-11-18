//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AVKit/AVPictureInPictureControllerDelegate-Protocol.h>
#import <AVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <AVKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <AVKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <AVKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class AVAudioOnlyIndicatorView, AVExternalPlaybackIndicatorView, AVFullScreenViewController, AVLoadingIndicatorView, AVNowPlayingInfoController, AVPictureInPictureController, AVPlaybackControlsViewController, AVPlayer, AVPlayerController, AVTouchIgnoringView, AVUnsupportedContentIndicatorView, NSDictionary, NSString, NSTimer, UIView, UIWindow, __AVPlayerLayerView;
@protocol AVPlayerViewControllerDelegate;

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    AVPlayerController *_playerController;
    unsigned int _playerShouldAutoplay:1;
    unsigned int _showsPlaybackControls:1;
    long long _videoGravity;
    unsigned int _allowsPictureInPicturePlayback:1;
    NSDictionary *_pixelBufferAttributes;
    AVNowPlayingInfoController *_nowPlayingInfoController;
    AVPictureInPictureController *_pictureInPictureController;
    UIView *_containerView;
    AVUnsupportedContentIndicatorView *_unsupportedContentIndicatorView;
    AVAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UIView *_contentView;
    __AVPlayerLayerView *_playerLayerView;
    UIView *_contentOverlayView;
    UIView *_controlsView;
    AVTouchIgnoringView *_iAdPrerollView;
    AVPlaybackControlsViewController *_playbackControlsViewController;
    UIWindow *_secondScreenWindow;
    unsigned int _viewIsFullScreen:1;
    id _screenDidConnectObserver;
    id _screenDidDisconnectObserver;
    id _screenModeDidChangeObserver;
    id _activeAudioRouteDidChangeObserver;
    id _nowPlayingControllerDidReceiveStopCommandEventObserver;
    id _applicationSuspendedObserver;
    NSTimer *_loadingIndicatorTimer;
    unsigned int _playbackControlsViewControllerShouldShowLoadingIndicator:1;
    unsigned int _playbackControlsViewControllerShowsScaleButton:1;
    long long _playbackControlsViewControllerScaleButtonType;
    unsigned int _playbackControlsViewControllerPictureInPictureButtonEnabled:1;
    unsigned int _playbackControlsViewVisibilityNeedsUpdate:1;
    long long _playbackControlsViewVisibilityCounter;
    NSTimer *_playbackControlsViewVisibilityTimer;
    unsigned int _isShowingPlaybackControlsViewForUserInteraction:1;
    unsigned int _isShowingPlaybackControlsViewAfterUserInteraction:1;
    unsigned int _isShowingPlaybackControlsViewForUnsupportedContent:1;
    unsigned int _isShowingPlaybackControlsViewForAudioOnlyContent:1;
    unsigned int _isShowingPlaybackControlsViewForPlayingOnExternalScreen:1;
    unsigned int _isHidingPlaybackControlsViewForPictureInPicturePlayback:1;
    unsigned int _showsPlaybackControlsView:1;
    unsigned int _isAnimatingPlaybackControlsViewVisibility:1;
    AVFullScreenViewController *_fullScreenViewController;
    unsigned int _animateFullScreenTransitionForPresenting:1;
    unsigned int _isTransitioningToOrFromFullScreen:1;
    unsigned int _animateFullScreenTransition:1;
    unsigned int _transitionFromFullScreenOrDismissViewControllerWhenEnteringBackgroundAfterPictureInPictureStart:1;
    id<AVPlayerViewControllerDelegate> _delegate;
    struct {
        unsigned int playerViewControllerWillStartPictureInPicture:1;
        unsigned int playerViewControllerDidStartPictureInPicture:1;
        unsigned int playerViewController_failedToStartPictureInPictureWithError:1;
        unsigned int playerViewControllerWillStopPictureInPicture:1;
        unsigned int playerViewControllerDidStopPictureInPicture:1;
        unsigned int playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:1;
        unsigned int playerViewController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:1;
        unsigned int playerViewController_shouldExitFullScreenWithReason:1;
    } _delegateRespondsTo;
    unsigned int _showsExitFullScreenButton:1;
}

@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVPlayerViewControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *iAdPrerollView;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (readonly, nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (strong, nonatomic) AVPlayer *player;
@property (strong, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) BOOL showsExitFullScreenButton;
@property (nonatomic) BOOL showsPlaybackControls;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter;
@property (readonly, nonatomic) struct CGRect videoBounds;
@property (copy, nonatomic) NSString *videoGravity;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)keyPathsForValuesAffectingPixelBufferAttributes;
+ (id)keyPathsForValuesAffectingPlayer;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoGravity;
- (void).cxx_destruct;
- (void)_fireLoadingIndicatorTimer:(id)arg1;
- (void)_firePlaybackControlsViewVisibilityTimer:(id)arg1;
- (void)_handleDoubleDoubleTapGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_hidePlaybackControlsViewIfPossible;
- (void)_hidePlaybackControlsViewIfPossibleAfterDelayIfPlaying;
- (void)_hidePlaybackControlsViewIfPossibleUntilFurtherUserInteraction;
- (BOOL)_ignoreAppSupportedOrientations;
- (BOOL)_isAudioOnlyContent;
- (BOOL)_isUnsupportedContent;
- (void)_mediaSelectionDoneButtonTapped:(id)arg1;
- (void)_setPlaybackControlsViewVisibilityNeedsUpdate;
- (void)_showOrHidePlaybackControlsView;
- (void)_showPlaybackControlsViewIfNeeded;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlaying;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (BOOL)_showsPlaybackControlsView;
- (void)_togglePictureInPicture;
- (void)_transitionFromFullScreenViewControllerAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transitionFromFullScreenViewControllerWithReason:(long long)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_transitionToFullScreenViewControllerAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAudioOnlyIndicatorView;
- (void)_updateExternalPlaybackIndicatorView;
- (void)_updatePictureInPictureButtonEnabled;
- (void)_updatePlaybackControlsViewController;
- (void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
- (void)_updatePlaybackControlsViewVisibilityForPlayingOnExternalScreen;
- (void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
- (void)_updatePlaybackControlsViewVisibilityIfNeeded;
- (void)_updatePlayerLayerViewAndContentOverlayView;
- (void)_updateScaleButtonType;
- (void)_updateShowsScaleButton;
- (void)_updateUnsupportedContentIndicatorView;
- (void)_updateViewIsFullScreen:(BOOL)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (void)doneButtonTapped:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enterFullScreenAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)exitFullScreenAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fullScreenButtonTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hidePlaybackControlsViewForTouchUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlayerLayerView:(id)arg1;
- (void)loadView;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pictureInPictureButtonTapped:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)scaleButtonTapped:(id)arg1;
- (void)showPlaybackControlsViewForTouchDown;
- (void)showPlaybackControlsViewForVolumeChange;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)togglePlayback:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

