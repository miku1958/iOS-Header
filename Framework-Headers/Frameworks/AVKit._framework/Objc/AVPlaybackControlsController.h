//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPlayerViewControllerContentViewDelegate-Protocol.h>
#import <AVKit/AVRoutePickerViewInternalDelegate-Protocol.h>
#import <AVKit/AVScrubbing-Protocol.h>
#import <AVKit/AVTransportControlsViewDelegate-Protocol.h>

@class AVNowPlayingInfoController, AVObservationController, AVPictureInPictureController, AVPlaybackControlsView, AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerControllerVolumeAnimator, AVPlayerViewController, AVRouteDetectorCoordinator, AVSecondScreenContentViewConnection, AVTimeFormatter, AVTurboModePlaybackControlsPlaceholderView, NSArray, NSNumber, NSString, NSTimer, NSUUID, UIAlertController, UIViewPropertyAnimator;
@protocol AVVolumeController;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewInternalDelegate, AVPlayerViewControllerContentViewDelegate, AVScrubbing>
{
    BOOL _playerViewControllerIsBeingTransitionedWithResizing;
    BOOL _playerViewControllerIsPresentingFullScreen;
    BOOL _playerViewControllerIsPresentedFullScreen;
    BOOL _playerViewControllerHasInvalidViewControllerHierarchy;
    BOOL _entersFullScreenWhenPlaybackBegins;
    BOOL _allowsEnteringFullScreen;
    BOOL _showsMinimalPlaybackControlsWhenEmbeddedInline;
    BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
    BOOL _volumeControlsCanShowSlider;
    BOOL _showsPictureInPictureButton;
    BOOL _showsPlaybackControls;
    BOOL _hasCustomPlaybackControls;
    BOOL _canIncludePlaybackControlsWhenInline;
    BOOL _showsVideoGravityButton;
    BOOL _requiresLinearPlayback;
    BOOL _updatesNowPlayingInfoCenter;
    BOOL _showsDoneButtonWhenFullScreen;
    BOOL _playbackControlsIncludeTransportControls;
    BOOL _playbackControlsIncludeDisplayModeControls;
    BOOL _playbackControlsIncludeVolumeControls;
    BOOL _playbackControlsIncludeStartContentTransitionButtons;
    BOOL _playbackControlsShouldControlSystemVolume;
    BOOL _forcePlaybackControlsHidden;
    BOOL _showsTimecodes;
    BOOL _startLeftwardContentTransitionButtonEnabled;
    BOOL _startRightwardContentTransitionButtonEnabled;
    BOOL _canHidePlaybackControls;
    BOOL _pictureInPictureActive;
    BOOL _popoverIsBeingPresented;
    BOOL _showsLoadingIndicator;
    BOOL _canIncludeVideoGravityButton;
    BOOL _hasStartedUpdates;
    BOOL _coveringWindow;
    BOOL _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
    BOOL _hasBecomeReadyToPlay;
    BOOL _multipleRoutesDetected;
    BOOL _resumingUpdates;
    BOOL _prefersMuted;
    BOOL _playbackSuspendedForScrubbing;
    BOOL _hasSeekableLiveStreamingContent;
    BOOL _scrubbingOrSeeking;
    BOOL _shouldIgnoreTimeResolverUpdates;
    BOOL _hasBegunObservingPotentiallyUnimplementedPlayerControllerProperties;
    BOOL _videoScaled;
    BOOL _hidingItemsForTransition;
    BOOL _showingPlaybackControls;
    AVPlayerController *_playerController;
    long long _preferredUnobscuredArea;
    NSArray *_customControlItems;
    CDUnknownBlockType _playButtonHandlerForLazyPlayerLoading;
    CDUnknownBlockType _contentTransitionAction;
    AVPictureInPictureController *_pictureInPictureController;
    id<AVVolumeController> _volumeController;
    AVNowPlayingInfoController *_nowPlayingInfoControllerIfLoaded;
    AVSecondScreenContentViewConnection *_secondScreenConnection;
    AVPlayerViewController *_playerViewController;
    AVPlaybackControlsView *_playbackControlsView;
    AVTurboModePlaybackControlsPlaceholderView *_turboModePlaybackControlsPlaceholderView;
    AVObservationController *_observationController;
    AVObservationController *_playbackControlsObservationController;
    AVPlayerControllerTimeResolver *_timeResolver;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    UIAlertController *_routePickerAlertController;
    AVRouteDetectorCoordinator *_routeDetectorCoordinator;
    id _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
    NSTimer *_loadingIndicatorTimer;
    UIViewPropertyAnimator *_collapseExpandSliderAnimator;
    AVPlayerControllerVolumeAnimator *_volumeAnimator;
    NSUUID *_playerMuteFadeAnimationID;
    NSNumber *_pendingOrientationChange;
    double _loadingIndicatorTimerDelay;
    long long _timeControlStatus;
    long long _videoGravityButtonType;
    NSString *_uniqueIdentifer;
    NSString *_windowSceneSessionIdentifier;
    NSTimer *_playbackControlsVisibilityTimer;
    unsigned long long _userInteractingCount;
    struct CGRect _playbackViewFrame;
}

@property (strong, nonatomic) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver; // @synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
@property (nonatomic) BOOL allowsEnteringFullScreen; // @synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen;
@property (nonatomic) BOOL canHidePlaybackControls; // @synthesize canHidePlaybackControls=_canHidePlaybackControls;
@property (nonatomic) BOOL canIncludePlaybackControlsWhenInline; // @synthesize canIncludePlaybackControlsWhenInline=_canIncludePlaybackControlsWhenInline;
@property (nonatomic) BOOL canIncludeVideoGravityButton; // @synthesize canIncludeVideoGravityButton=_canIncludeVideoGravityButton;
@property (readonly, nonatomic) BOOL canShowLoadingIndicator;
@property (weak, nonatomic) UIViewPropertyAnimator *collapseExpandSliderAnimator; // @synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator;
@property (copy, nonatomic) CDUnknownBlockType contentTransitionAction; // @synthesize contentTransitionAction=_contentTransitionAction;
@property (nonatomic, getter=isCoveringWindow) BOOL coveringWindow; // @synthesize coveringWindow=_coveringWindow;
@property (readonly, nonatomic) double currentTime;
@property (copy, nonatomic) NSArray *customControlItems; // @synthesize customControlItems=_customControlItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // @synthesize elapsedTimeFormatter=_elapsedTimeFormatter;
@property (nonatomic) BOOL entersFullScreenWhenPlaybackBegins; // @synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins;
@property (readonly, nonatomic) BOOL entersFullScreenWhenTapped;
@property (nonatomic) BOOL forcePlaybackControlsHidden; // @synthesize forcePlaybackControlsHidden=_forcePlaybackControlsHidden;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL hasBecomeReadyToPlay; // @synthesize hasBecomeReadyToPlay=_hasBecomeReadyToPlay;
@property (nonatomic) BOOL hasBegunObservingPotentiallyUnimplementedPlayerControllerProperties; // @synthesize hasBegunObservingPotentiallyUnimplementedPlayerControllerProperties=_hasBegunObservingPotentiallyUnimplementedPlayerControllerProperties;
@property (nonatomic) BOOL hasCustomPlaybackControls; // @synthesize hasCustomPlaybackControls=_hasCustomPlaybackControls;
@property (nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay; // @synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
@property (nonatomic) BOOL hasSeekableLiveStreamingContent; // @synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent;
@property (nonatomic) BOOL hasStartedUpdates; // @synthesize hasStartedUpdates=_hasStartedUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHidingItemsForTransition) BOOL hidingItemsForTransition; // @synthesize hidingItemsForTransition=_hidingItemsForTransition;
@property (nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused; // @synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (weak, nonatomic) NSTimer *loadingIndicatorTimer; // @synthesize loadingIndicatorTimer=_loadingIndicatorTimer;
@property (nonatomic) double loadingIndicatorTimerDelay; // @synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, nonatomic) double minimumTime;
@property (nonatomic) BOOL multipleRoutesDetected; // @synthesize multipleRoutesDetected=_multipleRoutesDetected;
@property (readonly, nonatomic) BOOL needsTimeResolver;
@property (strong, nonatomic) AVNowPlayingInfoController *nowPlayingInfoControllerIfLoaded; // @synthesize nowPlayingInfoControllerIfLoaded=_nowPlayingInfoControllerIfLoaded;
@property (readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property (strong, nonatomic) NSNumber *pendingOrientationChange; // @synthesize pendingOrientationChange=_pendingOrientationChange;
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property (strong, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property (copy, nonatomic) CDUnknownBlockType playButtonHandlerForLazyPlayerLoading; // @synthesize playButtonHandlerForLazyPlayerLoading=_playButtonHandlerForLazyPlayerLoading;
@property (readonly, nonatomic) BOOL playButtonsShowPauseGlyph;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls; // @synthesize playbackControlsIncludeDisplayModeControls=_playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeStartContentTransitionButtons; // @synthesize playbackControlsIncludeStartContentTransitionButtons=_playbackControlsIncludeStartContentTransitionButtons;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls; // @synthesize playbackControlsIncludeTransportControls=_playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls; // @synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls;
@property (strong, nonatomic) AVObservationController *playbackControlsObservationController; // @synthesize playbackControlsObservationController=_playbackControlsObservationController;
@property (nonatomic) BOOL playbackControlsShouldControlSystemVolume; // @synthesize playbackControlsShouldControlSystemVolume=_playbackControlsShouldControlSystemVolume;
@property (strong, nonatomic) AVPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property (strong, nonatomic) NSTimer *playbackControlsVisibilityTimer; // @synthesize playbackControlsVisibilityTimer=_playbackControlsVisibilityTimer;
@property (nonatomic, getter=isPlaybackSuspendedForScrubbing) BOOL playbackSuspendedForScrubbing; // @synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing;
@property (nonatomic) struct CGRect playbackViewFrame; // @synthesize playbackViewFrame=_playbackViewFrame;
@property (weak, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property (strong, nonatomic) NSUUID *playerMuteFadeAnimationID; // @synthesize playerMuteFadeAnimationID=_playerMuteFadeAnimationID;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property (nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy; // @synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy;
@property (nonatomic) BOOL playerViewControllerIsBeingTransitionedWithResizing; // @synthesize playerViewControllerIsBeingTransitionedWithResizing=_playerViewControllerIsBeingTransitionedWithResizing;
@property (nonatomic) BOOL playerViewControllerIsPresentedFullScreen; // @synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen;
@property (nonatomic) BOOL playerViewControllerIsPresentingFullScreen; // @synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen;
@property (nonatomic, getter=isPopoverBeingPresented) BOOL popoverIsBeingPresented; // @synthesize popoverIsBeingPresented=_popoverIsBeingPresented;
@property (nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property (nonatomic) BOOL prefersMuted; // @synthesize prefersMuted=_prefersMuted;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) BOOL prominentPlayButtonCanShowPauseGlyph;
@property (readonly, nonatomic) AVTimeFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property (nonatomic) BOOL requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property (nonatomic, getter=isResumingUpdates) BOOL resumingUpdates; // @synthesize resumingUpdates=_resumingUpdates;
@property (strong, nonatomic) AVRouteDetectorCoordinator *routeDetectorCoordinator; // @synthesize routeDetectorCoordinator=_routeDetectorCoordinator;
@property (weak, nonatomic) UIAlertController *routePickerAlertController; // @synthesize routePickerAlertController=_routePickerAlertController;
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking; // @synthesize scrubbingOrSeeking=_scrubbingOrSeeking;
@property (strong, nonatomic) AVSecondScreenContentViewConnection *secondScreenConnection; // @synthesize secondScreenConnection=_secondScreenConnection;
@property (readonly, nonatomic, getter=isSeekingEnabled) BOOL seekingEnabled;
@property (readonly, nonatomic) BOOL shouldEnterFullScreenWhenPlaybackBegins;
@property (nonatomic) BOOL shouldIgnoreTimeResolverUpdates; // @synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates;
@property (nonatomic, getter=isShowingPlaybackControls) BOOL showingPlaybackControls; // @synthesize showingPlaybackControls=_showingPlaybackControls;
@property (nonatomic) BOOL showsDoneButtonWhenFullScreen; // @synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen;
@property (nonatomic) BOOL showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property (readonly, nonatomic) BOOL showsMediaSelectionButton;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline; // @synthesize showsMinimalPlaybackControlsWhenEmbeddedInline=_showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) BOOL showsPictureInPictureButton; // @synthesize showsPictureInPictureButton=_showsPictureInPictureButton;
@property (nonatomic) BOOL showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property (readonly, nonatomic) BOOL showsProminentPlayButton;
@property (readonly, nonatomic) BOOL showsRoutePickerView;
@property (readonly, nonatomic) BOOL showsSkipButtons;
@property (readonly, nonatomic) BOOL showsStartContentTransitionButtons;
@property (nonatomic) BOOL showsTimecodes; // @synthesize showsTimecodes=_showsTimecodes;
@property (readonly, nonatomic) BOOL showsTransportControls;
@property (nonatomic) BOOL showsVideoGravityButton; // @synthesize showsVideoGravityButton=_showsVideoGravityButton;
@property (nonatomic, getter=isStartLeftwardContentTransitionButtonEnabled) BOOL startLeftwardContentTransitionButtonEnabled; // @synthesize startLeftwardContentTransitionButtonEnabled=_startLeftwardContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartRightwardContentTransitionButtonEnabled) BOOL startRightwardContentTransitionButtonEnabled; // @synthesize startRightwardContentTransitionButtonEnabled=_startRightwardContentTransitionButtonEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tapGestureRecognizersCanReceiveTouches;
@property (readonly, nonatomic) double targetTime;
@property (nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property (strong, nonatomic) AVPlayerControllerTimeResolver *timeResolver; // @synthesize timeResolver=_timeResolver;
@property (weak, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView; // @synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView;
@property (readonly, nonatomic) NSString *uniqueIdentifer; // @synthesize uniqueIdentifer=_uniqueIdentifer;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter; // @synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter;
@property (readonly, nonatomic, getter=isUserInteracting) BOOL userInteracting;
@property (nonatomic) unsigned long long userInteractingCount; // @synthesize userInteractingCount=_userInteractingCount;
@property (nonatomic) long long videoGravityButtonType; // @synthesize videoGravityButtonType=_videoGravityButtonType;
@property (nonatomic, getter=isVideoScaled) BOOL videoScaled; // @synthesize videoScaled=_videoScaled;
@property (strong, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator; // @synthesize volumeAnimator=_volumeAnimator;
@property (strong, nonatomic) id<AVVolumeController> volumeController; // @synthesize volumeController=_volumeController;
@property (nonatomic) BOOL volumeControlsCanShowSlider; // @synthesize volumeControlsCanShowSlider=_volumeControlsCanShowSlider;
@property (strong, nonatomic) NSString *windowSceneSessionIdentifier; // @synthesize windowSceneSessionIdentifier=_windowSceneSessionIdentifier;

+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingFullScreen;
+ (id)keyPathsForValuesAffectingMaximumTime;
+ (id)keyPathsForValuesAffectingMinimumTime;
+ (id)keyPathsForValuesAffectingNeedsTimeResolver;
+ (id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+ (id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+ (id)keyPathsForValuesAffectingSeekingEnabled;
+ (id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+ (id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+ (id)keyPathsForValuesAffectingShowsProminentPlayButton;
+ (id)keyPathsForValuesAffectingShowsRoutePickerView;
+ (id)keyPathsForValuesAffectingShowsSkipButtons;
+ (id)keyPathsForValuesAffectingShowsStartContentTransitionButtons;
+ (id)keyPathsForValuesAffectingShowsTransportControls;
- (void).cxx_destruct;
- (void)_autoHideControlsAfterDelay:(double)arg1;
- (void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2;
- (void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2;
- (void)_observeBoolForKeyPath:(id)arg1 usingKeyValueObservationController:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;
- (BOOL)_prefersVolumeSliderExpandedAutomatically;
- (void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)_showOrHideDisplayModeControls;
- (void)_startObservingForPlaybackViewUpdates;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (void)_updateContainerInclusion;
- (void)_updateControlInclusion;
- (void)_updateEdgeInsetsForLetterboxedContentInContentView:(id)arg1;
- (void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 playing:(BOOL)arg2 userDidEndTappingProminentPlayButton:(BOOL)arg3;
- (void)_updateNowPlayingInfoCenter;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_updatePlaybackControlsVisibilityWantsPlaybackControlsVisible:(BOOL)arg1;
- (void)_updatePlaybackControlsVisibleAndObservingUpdates;
- (void)_updatePrefersInspectionSuspended;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateSecondScreenConnectionReadyToConnect;
- (void)_updateSkipButtonsEnableLongPress;
- (void)_updateVideoGravityButtonType;
- (void)_updateVolumeButtonGlyph;
- (void)_updateVolumeButtonInclusionAndPrefersVolumeSliderExpandedWithPreferredExpansion:(BOOL)arg1;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(BOOL)arg2;
- (id)_volumeButtonMicaPackageState;
- (BOOL)_wantsRouteDetectionEnabled;
- (void)beginChangingVolume;
- (void)beginHidingItemsForTransition;
- (void)beginScrubbing;
- (void)beginShowingItemsDueToIndirectUserInteraction;
- (void)beginUserInteraction;
- (void)dealloc;
- (void)endChangingVolume;
- (void)endHidingItemsForTransitionAndShowImmediately:(BOOL)arg1;
- (void)endScrubbing;
- (void)endShowingItemsDueToIndirectUserInteraction;
- (void)endUserInteraction;
- (void)flashPlaybackControlsWithDuration:(double)arg1;
- (void)flashVolumeControlsWithDuration:(double)arg1;
- (void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1;
- (void)handleVolumeChange:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (unsigned long long)overrideRouteSharingPolicyForRoutePickerView:(id)arg1;
- (id)overrideRoutingContextUIDForRoutePickerView:(id)arg1;
- (void)playbackControlsViewDidLoad:(id)arg1;
- (void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2;
- (void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1;
- (void)playerViewControllerContentViewDidUpdateScrollingStatus:(id)arg1;
- (struct UIEdgeInsets)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1;
- (BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg1;
- (BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1;
- (BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
- (id)playerViewControllerContentViewOverrideLayoutClass:(id)arg1;
- (void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(id)arg1;
- (BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
- (void)prominentPlayButtonTouchUpInside:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)scrubToTime:(double)arg1 resolution:(double)arg2;
- (void)secondScreenConnectionDidBecomeActive:(id)arg1;
- (void)secondScreenConnectionDidResignActive:(id)arg1;
- (void)showPlaybackControls:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)skipButtonForcePressChanged:(id)arg1;
- (void)skipButtonLongPressEnded:(id)arg1;
- (void)skipButtonLongPressTriggered:(id)arg1;
- (void)skipButtonTouchUpInside:(id)arg1;
- (void)startContentTransitionButtonTouchUpInside:(id)arg1;
- (void)startUpdatesIfNeeded;
- (void)toggleMuted;
- (void)togglePlaybackControlsVisibility;
- (void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)arg1;
- (void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)arg1;
- (void)updateControlsInclusion;
- (void)volumeButtonLongPressTriggered:(id)arg1;
- (void)volumeButtonPanChanged:(id)arg1;
- (void)volumeButtonTapTriggered:(id)arg1;
- (void)volumeSliderValueDidChange:(id)arg1;

@end
