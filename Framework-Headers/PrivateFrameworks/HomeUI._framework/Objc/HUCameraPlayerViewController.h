//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPlayerViewController.h>

#import <HomeUI/AVPlayerViewControllerDelegate-Protocol.h>
#import <HomeUI/AVPlayerViewControllerDelegatePrivate-Protocol.h>
#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUCameraPlayerAVBehaviorDelegate-Protocol.h>
#import <HomeUI/HUItemPresentationContainer-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class AVHomeLoadingButtonControlItem, AVPlayerLooper, AVQueuePlayer, HFCameraItem, HFCameraPlaybackEngine, HFItem, HFItemManager, HMCameraProfile, HMHome, HUCalendarScrubberContainerViewController, HUCameraBlurViewController, HUCameraMicrophoneControl, HUCameraPlayerAVBehavior, HUCameraPlayerAccessoryViewController, HUCameraPlayerConfiguration, HUCameraPlayerFooterViewController, HUCameraPlayerLiveContentViewController, HUCameraPlayerPlaceholderContentViewController, HUCameraRecordingPlayerView, HUCameraStatusOverlayView, HUClipScrubberViewController, HUDiagnosticsCameraPlayerController, HULegibilityLabel, NAFuture, NAUILayoutConstraintSet, NSArray, NSLayoutConstraint, NSString, NSTimer, UIAlertController, UIButton, UIView;
@protocol HUCameraPlayerViewControllerDelegate, HUPresentationDelegate;

@interface HUCameraPlayerViewController : AVPlayerViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate, HUPresentationDelegate, HUItemPresentationContainer, HUPresentationDelegateHost>
{
    BOOL _recordedClipInterfaceAvailable;
    BOOL _enteringFullScreen;
    BOOL _viewVisible;
    BOOL _viewDisappearing;
    BOOL _observingReadyForDisplay;
    BOOL _applicationIsActive;
    BOOL _shouldResumePlaying;
    BOOL _hu_playbackControlsAreVisible;
    BOOL _displayingDetailsViewController;
    BOOL _needsToFetchClip;
    BOOL _finishedFetchingCameraEvents;
    id<HUPresentationDelegate> presentationDelegate;
    id<HUCameraPlayerViewControllerDelegate> _cameraDelegate;
    HFCameraItem *_cameraItem;
    HUCameraPlayerAVBehavior *_behavior;
    HUCameraPlayerConfiguration *_playerConfiguration;
    HFCameraPlaybackEngine *_playbackEngine;
    double _cornerRadius;
    HFItemManager *_itemManager;
    HUCameraStatusOverlayView *_cameraStatusView;
    UIButton *_cameraPickerButton;
    NSArray *_savedControlItems;
    AVHomeLoadingButtonControlItem *_nextControlItem;
    HUCalendarScrubberContainerViewController *_calendarContainerViewController;
    HUCameraPlayerAccessoryViewController *_accessoryViewController;
    HUCameraPlayerFooterViewController *_footerViewController;
    HUCameraPlayerLiveContentViewController *_liveContentViewController;
    HUClipScrubberViewController *_clipScrubberViewController;
    HUCameraPlayerPlaceholderContentViewController *_placeholderContentViewController;
    HUCameraBlurViewController *_blurViewController;
    NAUILayoutConstraintSet *_staticConstraintSet;
    NAUILayoutConstraintSet *_cameraStatusViewConstraintSet;
    NAUILayoutConstraintSet *_scrubberConstraintSet;
    NAUILayoutConstraintSet *_calendarConstraintSet;
    NAUILayoutConstraintSet *_portraitMicrophoneConstraintSet;
    NAUILayoutConstraintSet *_landscapeMicrophoneConstraintSet;
    NSLayoutConstraint *_cameraStatusViewTopConstraint;
    NSLayoutConstraint *_dayLabelTopConstraint;
    HUCameraRecordingPlayerView *_demoPlayerView;
    AVPlayerLooper *_looper;
    AVQueuePlayer *_demoModeQueuePlayer;
    UIAlertController *_airplaneAlertController;
    HULegibilityLabel *_dayLabel;
    HULegibilityLabel *_timeLabel;
    UIView *_loadingOverlayView;
    NSTimer *_liveTimer;
    NAFuture *_clipsLoadedFuture;
    HUCameraMicrophoneControl *_portraitMicrophoneControl;
    HUCameraMicrophoneControl *_landscapeMicrophoneControl;
    HUDiagnosticsCameraPlayerController *_diagnosticsController;
}

@property (strong, nonatomic) HUCameraPlayerAccessoryViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property (weak, nonatomic) UIAlertController *airplaneAlertController; // @synthesize airplaneAlertController=_airplaneAlertController;
@property (nonatomic) BOOL applicationIsActive; // @synthesize applicationIsActive=_applicationIsActive;
@property (strong, nonatomic) HUCameraPlayerAVBehavior *behavior; // @synthesize behavior=_behavior;
@property (strong, nonatomic) HUCameraBlurViewController *blurViewController; // @synthesize blurViewController=_blurViewController;
@property (strong, nonatomic) NAUILayoutConstraintSet *calendarConstraintSet; // @synthesize calendarConstraintSet=_calendarConstraintSet;
@property (strong, nonatomic) HUCalendarScrubberContainerViewController *calendarContainerViewController; // @synthesize calendarContainerViewController=_calendarContainerViewController;
@property (weak, nonatomic) id<HUCameraPlayerViewControllerDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property (strong, nonatomic) HFCameraItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property (strong, nonatomic) UIButton *cameraPickerButton; // @synthesize cameraPickerButton=_cameraPickerButton;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (strong, nonatomic) HUCameraStatusOverlayView *cameraStatusView; // @synthesize cameraStatusView=_cameraStatusView;
@property (strong, nonatomic) NAUILayoutConstraintSet *cameraStatusViewConstraintSet; // @synthesize cameraStatusViewConstraintSet=_cameraStatusViewConstraintSet;
@property (strong, nonatomic) NSLayoutConstraint *cameraStatusViewTopConstraint; // @synthesize cameraStatusViewTopConstraint=_cameraStatusViewTopConstraint;
@property (strong, nonatomic) HUClipScrubberViewController *clipScrubberViewController; // @synthesize clipScrubberViewController=_clipScrubberViewController;
@property (strong, nonatomic) NAFuture *clipsLoadedFuture; // @synthesize clipsLoadedFuture=_clipsLoadedFuture;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (strong, nonatomic) HULegibilityLabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property (strong, nonatomic) NSLayoutConstraint *dayLabelTopConstraint; // @synthesize dayLabelTopConstraint=_dayLabelTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AVQueuePlayer *demoModeQueuePlayer; // @synthesize demoModeQueuePlayer=_demoModeQueuePlayer;
@property (strong, nonatomic) HUCameraRecordingPlayerView *demoPlayerView; // @synthesize demoPlayerView=_demoPlayerView;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HUDiagnosticsCameraPlayerController *diagnosticsController; // @synthesize diagnosticsController=_diagnosticsController;
@property (nonatomic) BOOL displayingDetailsViewController; // @synthesize displayingDetailsViewController=_displayingDetailsViewController;
@property (nonatomic, getter=isEnteringFullScreen) BOOL enteringFullScreen; // @synthesize enteringFullScreen=_enteringFullScreen;
@property (nonatomic) BOOL finishedFetchingCameraEvents; // @synthesize finishedFetchingCameraEvents=_finishedFetchingCameraEvents;
@property (strong, nonatomic) HUCameraPlayerFooterViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home;
@property (nonatomic) BOOL hu_playbackControlsAreVisible; // @synthesize hu_playbackControlsAreVisible=_hu_playbackControlsAreVisible;
@property (readonly, nonatomic) HFItem *hu_presentedItem;
@property (strong, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property (strong, nonatomic) NAUILayoutConstraintSet *landscapeMicrophoneConstraintSet; // @synthesize landscapeMicrophoneConstraintSet=_landscapeMicrophoneConstraintSet;
@property (strong, nonatomic) HUCameraMicrophoneControl *landscapeMicrophoneControl; // @synthesize landscapeMicrophoneControl=_landscapeMicrophoneControl;
@property (strong, nonatomic) HUCameraPlayerLiveContentViewController *liveContentViewController; // @synthesize liveContentViewController=_liveContentViewController;
@property (strong, nonatomic) NSTimer *liveTimer; // @synthesize liveTimer=_liveTimer;
@property (strong, nonatomic) UIView *loadingOverlayView; // @synthesize loadingOverlayView=_loadingOverlayView;
@property (strong, nonatomic) AVPlayerLooper *looper; // @synthesize looper=_looper;
@property (nonatomic) BOOL needsToFetchClip; // @synthesize needsToFetchClip=_needsToFetchClip;
@property (strong, nonatomic) AVHomeLoadingButtonControlItem *nextControlItem; // @synthesize nextControlItem=_nextControlItem;
@property (nonatomic, getter=isObservingReadyForDisplay) BOOL observingReadyForDisplay; // @synthesize observingReadyForDisplay=_observingReadyForDisplay;
@property (strong, nonatomic) HUCameraPlayerPlaceholderContentViewController *placeholderContentViewController; // @synthesize placeholderContentViewController=_placeholderContentViewController;
@property (strong, nonatomic) HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (strong, nonatomic) HUCameraPlayerConfiguration *playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property (strong, nonatomic) NAUILayoutConstraintSet *portraitMicrophoneConstraintSet; // @synthesize portraitMicrophoneConstraintSet=_portraitMicrophoneConstraintSet;
@property (strong, nonatomic) HUCameraMicrophoneControl *portraitMicrophoneControl; // @synthesize portraitMicrophoneControl=_portraitMicrophoneControl;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate;
@property (nonatomic) BOOL recordedClipInterfaceAvailable; // @synthesize recordedClipInterfaceAvailable=_recordedClipInterfaceAvailable;
@property (strong, nonatomic) NSArray *savedControlItems; // @synthesize savedControlItems=_savedControlItems;
@property (strong, nonatomic) NAUILayoutConstraintSet *scrubberConstraintSet; // @synthesize scrubberConstraintSet=_scrubberConstraintSet;
@property (nonatomic) BOOL shouldResumePlaying; // @synthesize shouldResumePlaying=_shouldResumePlaying;
@property (strong, nonatomic) NAUILayoutConstraintSet *staticConstraintSet; // @synthesize staticConstraintSet=_staticConstraintSet;
@property (readonly) Class superclass;
@property (strong, nonatomic) HULegibilityLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (nonatomic, getter=isViewDisappearing) BOOL viewDisappearing; // @synthesize viewDisappearing=_viewDisappearing;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible; // @synthesize viewVisible=_viewVisible;
@property (readonly, nonatomic) UIView *volumeControlView;

+ (id)_legibilityLabelFactory;
- (void).cxx_destruct;
- (void)_addFooterConstraints;
- (double)_cameraStatusViewConstantForTraitCollection;
- (void)_cleanUpConstraintSets;
- (void)_cleanUpIdleTimerState;
- (void)_configureCalendarContainerViewControllerIfNeeded;
- (void)_configureClipScrubberViewController;
- (void)_configureClipScrubberViewControllerIfNeeded;
- (void)_configureFooterViewController;
- (void)_dismissEditInterface;
- (void)_displayAirplaneModeAlert;
- (void)_displayCurrentTimeAndDate;
- (void)_displayPlaybackUIWithUpdate:(BOOL)arg1;
- (void)_handleApplicationDidBecomeActive;
- (void)_handleApplicationWillResignActive;
- (void)_handleShouldDifferentiateWithoutColorDidChange;
- (BOOL)_homeHasMultipleCameraProfiles;
- (double)_portraitMicrophoneOverlapOffset;
- (id)_ppt_clipCollectionView;
- (void)_presentDetailsViewController;
- (void)_presentInternalViewController:(id)arg1;
- (void)_presentNearbyAccessoriesViewController;
- (void)_reloadClipsWithUpdate:(BOOL)arg1;
- (void)_removePlaybackHistoryUI;
- (void)_setupConstraintSets;
- (void)_setupPlaybackEngine;
- (BOOL)_shouldAutoPlayOnViewAppearance;
- (BOOL)_shouldDisableLiveStreamAfterCameraStatusChange;
- (BOOL)_shouldDisplayMicrophoneControl;
- (void)_toggleMicrophoneState;
- (void)_updateCalendarContainerVisibility:(BOOL)arg1;
- (void)_updateCameraStatus;
- (void)_updateCanShowOverlayState;
- (void)_updateDayLabelWithDate:(id)arg1;
- (void)_updateIdleTimer;
- (void)_updateIndicatorColor;
- (void)_updateLivePreviewAspectRatio;
- (void)_updateMicrophones;
- (void)_updatePlaceholderContent;
- (void)_updatePlayerVolumeSliderState;
- (void)_updateStateForPlaybackPosition:(id)arg1 animated:(BOOL)arg2;
- (void)_updateStateForScrubbingStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateTimeLabelWithDate:(id)arg1 showingSeconds:(BOOL)arg2;
- (void)_updatedRecordedClipInterfaceAvailabilityAnimated:(BOOL)arg1;
- (id)cameraPickerMenu;
- (void)cancelLiveTimer;
- (double)currentScrubberResolutionForBehavior:(id)arg1;
- (void)dealloc;
- (void)fetchRequestedClipUsingConfiguration;
- (id)finishPresentation:(id)arg1 animated:(BOOL)arg2;
- (BOOL)hasRecordedClips;
- (id)initWithCameraPlayerConfiguration:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pauseEngineIfNeeded;
- (void)pictureInPictureDidToggleMicrophone;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(BOOL)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1;
- (void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateMicrophoneEnabled:(BOOL)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(BOOL)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (BOOL)shouldDisplayLandscapeMicrophoneInLine;
- (void)showCamera:(id)arg1;
- (void)startLiveTimer;
- (void)toggleDemoModeLiveStreamVideo:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMicrophoneAndSpeakerStatus;
- (void)updatePIPBehaviorForDeviceAndConfiguration;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

