//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPlayerViewControllerContentViewDelegate-Protocol.h>
#import <AVKit/AVRoutePickerViewDelegate-Protocol.h>
#import <AVKit/AVScrollViewObserverDelegate-Protocol.h>
#import <AVKit/AVTransportControlsViewDelegate-Protocol.h>

@class AVNowPlayingInfoController, AVObservationController, AVPictureInPictureController, AVPlaybackControlsView, AVPlaybackControlsVisibilityControllerItem, AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerViewController, AVRouteDetectorCoordinator, AVScrollViewObserver, AVSecondScreenContentViewConnection, AVTimeFormatter, AVTurboModePlaybackControlsPlaceholderView, AVVolumeController, NSArray, NSString, NSTimer, UIAlertController, UIViewPropertyAnimator;

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewDelegate, AVScrollViewObserverDelegate, AVPlayerViewControllerContentViewDelegate>
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
    BOOL _showsPlaybackControlsWhenInline;
    BOOL _requiresLinearPlayback;
    BOOL _updatesNowPlayingInfoCenter;
    BOOL _showsDoneButtonWhenFullScreen;
    BOOL _playbackControlsIncludeTransportControls;
    BOOL _playbackControlsIncludeDisplayModeControls;
    BOOL _playbackControlsIncludeVolumeControls;
    BOOL _playbackControlsIncludeStartContentTransitionButtons;
    BOOL _startLeftwardContentTransitionButtonEnabled;
    BOOL _startRightwardContentTransitionButtonEnabled;
    BOOL _showsLoadingIndicator;
    BOOL _prefersVolumeSliderExpanded;
    BOOL _includesVideoGravityButton;
    BOOL _hasStartedUpdates;
    BOOL _coveringWindow;
    BOOL _contentViewBeingScrolledOrOffScreen;
    BOOL _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
    BOOL _multipleRoutesDetected;
    BOOL _resumingUpdates;
    BOOL _playbackSuspendedForScrubbing;
    BOOL _hasSeekableLiveStreamingContent;
    BOOL _scrubbingOrSeeking;
    BOOL _shouldIgnoreTimeResolverUpdates;
    AVPlayerController *_playerController;
    long long _preferredUnobscuredArea;
    CDUnknownBlockType _playButtonHandlerForLazyPlayerLoading;
    AVPictureInPictureController *_pictureInPictureController;
    AVVolumeController *_volumeController;
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
    AVScrollViewObserver *_scrollViewObserver;
    AVPlaybackControlsVisibilityControllerItem *_playbackControlsContainerVisibilityItem;
    AVPlaybackControlsVisibilityControllerItem *_volumeControlsContainerVisibilityItem;
    AVPlaybackControlsVisibilityControllerItem *_turboModePlaybackControlsVisibilityItem;
    NSArray *_allVisibilityControllerItems;
    long long _preferredPlaybackControlsLoadedStatus;
    double _loadingIndicatorTimerDelay;
    long long _timeControlStatus;
    long long _videoGravityButtonType;
    NSString *_videoGravity;
    NSString *_uniqueIdentifer;
    struct CGRect _playbackViewFrame;
}

@property (strong, nonatomic) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver; // @synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
@property (readonly, nonatomic) NSArray *allVisibilityControllerItems; // @synthesize allVisibilityControllerItems=_allVisibilityControllerItems;
@property (nonatomic) BOOL allowsEnteringFullScreen; // @synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen;
@property (readonly, nonatomic) BOOL canShowLoadingIndicator;
@property (weak, nonatomic) UIViewPropertyAnimator *collapseExpandSliderAnimator; // @synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator;
@property (nonatomic, getter=isContentViewBeingScrolledOrOffScreen) BOOL contentViewBeingScrolledOrOffScreen; // @synthesize contentViewBeingScrolledOrOffScreen=_contentViewBeingScrolledOrOffScreen;
@property (nonatomic, getter=isCoveringWindow) BOOL coveringWindow; // @synthesize coveringWindow=_coveringWindow;
@property (readonly, nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // @synthesize elapsedTimeFormatter=_elapsedTimeFormatter;
@property (nonatomic) BOOL entersFullScreenWhenPlaybackBegins; // @synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins;
@property (readonly, nonatomic) BOOL entersFullScreenWhenTapped;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay; // @synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
@property (nonatomic) BOOL hasSeekableLiveStreamingContent; // @synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent;
@property (nonatomic) BOOL hasStartedUpdates; // @synthesize hasStartedUpdates=_hasStartedUpdates;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL includesDoneButton;
@property (readonly, nonatomic) BOOL includesFullScreenButton;
@property (nonatomic) BOOL includesVideoGravityButton; // @synthesize includesVideoGravityButton=_includesVideoGravityButton;
@property (nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused; // @synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (weak, nonatomic) NSTimer *loadingIndicatorTimer; // @synthesize loadingIndicatorTimer=_loadingIndicatorTimer;
@property (nonatomic) double loadingIndicatorTimerDelay; // @synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, nonatomic) double minimumTime;
@property (nonatomic) BOOL multipleRoutesDetected; // @synthesize multipleRoutesDetected=_multipleRoutesDetected;
@property (readonly, nonatomic) BOOL needsTimeResolver;
@property (strong, nonatomic) AVNowPlayingInfoController *nowPlayingInfoControllerIfLoaded; // @synthesize nowPlayingInfoControllerIfLoaded=_nowPlayingInfoControllerIfLoaded;
@property (readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property (strong, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property (copy, nonatomic) CDUnknownBlockType playButtonHandlerForLazyPlayerLoading; // @synthesize playButtonHandlerForLazyPlayerLoading=_playButtonHandlerForLazyPlayerLoading;
@property (readonly, nonatomic) BOOL playButtonsShowPauseGlyph;
@property (readonly, nonatomic) AVPlaybackControlsVisibilityControllerItem *playbackControlsContainerVisibilityItem; // @synthesize playbackControlsContainerVisibilityItem=_playbackControlsContainerVisibilityItem;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls; // @synthesize playbackControlsIncludeDisplayModeControls=_playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeStartContentTransitionButtons; // @synthesize playbackControlsIncludeStartContentTransitionButtons=_playbackControlsIncludeStartContentTransitionButtons;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls; // @synthesize playbackControlsIncludeTransportControls=_playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls; // @synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls;
@property (strong, nonatomic) AVObservationController *playbackControlsObservationController; // @synthesize playbackControlsObservationController=_playbackControlsObservationController;
@property (strong, nonatomic) AVPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property (nonatomic, getter=isPlaybackSuspendedForScrubbing) BOOL playbackSuspendedForScrubbing; // @synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing;
@property (nonatomic) struct CGRect playbackViewFrame; // @synthesize playbackViewFrame=_playbackViewFrame;
@property (weak, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property (nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy; // @synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy;
@property (nonatomic) BOOL playerViewControllerIsBeingTransitionedWithResizing; // @synthesize playerViewControllerIsBeingTransitionedWithResizing=_playerViewControllerIsBeingTransitionedWithResizing;
@property (nonatomic) BOOL playerViewControllerIsPresentedFullScreen; // @synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen;
@property (nonatomic) BOOL playerViewControllerIsPresentingFullScreen; // @synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen;
@property (nonatomic) long long preferredPlaybackControlsLoadedStatus; // @synthesize preferredPlaybackControlsLoadedStatus=_preferredPlaybackControlsLoadedStatus;
@property (nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property (nonatomic) BOOL prefersVolumeSliderExpanded; // @synthesize prefersVolumeSliderExpanded=_prefersVolumeSliderExpanded;
@property (readonly, nonatomic) BOOL prominentPlayButtonCanShowPauseGlyph;
@property (readonly, nonatomic) AVTimeFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property (nonatomic) BOOL requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property (nonatomic, getter=isResumingUpdates) BOOL resumingUpdates; // @synthesize resumingUpdates=_resumingUpdates;
@property (strong, nonatomic) AVRouteDetectorCoordinator *routeDetectorCoordinator; // @synthesize routeDetectorCoordinator=_routeDetectorCoordinator;
@property (weak, nonatomic) UIAlertController *routePickerAlertController; // @synthesize routePickerAlertController=_routePickerAlertController;
@property (strong, nonatomic) AVScrollViewObserver *scrollViewObserver; // @synthesize scrollViewObserver=_scrollViewObserver;
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking; // @synthesize scrubbingOrSeeking=_scrubbingOrSeeking;
@property (strong, nonatomic) AVSecondScreenContentViewConnection *secondScreenConnection; // @synthesize secondScreenConnection=_secondScreenConnection;
@property (readonly, nonatomic, getter=isSeekingEnabled) BOOL seekingEnabled;
@property (readonly, nonatomic) BOOL shouldEnterFullScreenWhenPlaybackBegins;
@property (nonatomic) BOOL shouldIgnoreTimeResolverUpdates; // @synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates;
@property (nonatomic) BOOL showsDoneButtonWhenFullScreen; // @synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen;
@property (nonatomic) BOOL showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property (readonly, nonatomic) BOOL showsMediaSelectionButton;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline; // @synthesize showsMinimalPlaybackControlsWhenEmbeddedInline=_showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) BOOL showsPictureInPictureButton; // @synthesize showsPictureInPictureButton=_showsPictureInPictureButton;
@property (nonatomic) BOOL showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property (nonatomic) BOOL showsPlaybackControlsWhenInline; // @synthesize showsPlaybackControlsWhenInline=_showsPlaybackControlsWhenInline;
@property (readonly, nonatomic) BOOL showsProminentPlayButton;
@property (readonly, nonatomic) BOOL showsRoutePickerView;
@property (readonly, nonatomic) BOOL showsSkipButtons;
@property (readonly, nonatomic) BOOL showsStartContentTransitionButtons;
@property (readonly, nonatomic) BOOL showsTransportControls;
@property (nonatomic, getter=isStartLeftwardContentTransitionButtonEnabled) BOOL startLeftwardContentTransitionButtonEnabled; // @synthesize startLeftwardContentTransitionButtonEnabled=_startLeftwardContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartRightwardContentTransitionButtonEnabled) BOOL startRightwardContentTransitionButtonEnabled; // @synthesize startRightwardContentTransitionButtonEnabled=_startRightwardContentTransitionButtonEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tapGestureRecognizersCanReceiveTouches;
@property (readonly, nonatomic) double targetTime;
@property (nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property (strong, nonatomic) AVPlayerControllerTimeResolver *timeResolver; // @synthesize timeResolver=_timeResolver;
@property (weak, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView; // @synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView;
@property (readonly, nonatomic) AVPlaybackControlsVisibilityControllerItem *turboModePlaybackControlsVisibilityItem; // @synthesize turboModePlaybackControlsVisibilityItem=_turboModePlaybackControlsVisibilityItem;
@property (readonly, nonatomic) NSString *uniqueIdentifer; // @synthesize uniqueIdentifer=_uniqueIdentifer;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter; // @synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter;
@property (copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property (nonatomic) long long videoGravityButtonType; // @synthesize videoGravityButtonType=_videoGravityButtonType;
@property (readonly, nonatomic) AVVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property (nonatomic) BOOL volumeControlsCanShowSlider; // @synthesize volumeControlsCanShowSlider=_volumeControlsCanShowSlider;
@property (readonly, nonatomic) AVPlaybackControlsVisibilityControllerItem *volumeControlsContainerVisibilityItem; // @synthesize volumeControlsContainerVisibilityItem=_volumeControlsContainerVisibilityItem;

+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingFullScreen;
+ (id)keyPathsForValuesAffectingIncludesDoneButton;
+ (id)keyPathsForValuesAffectingIncludesFullScreenButton;
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
+ (id)keyPathsForValuesAffectingShowsStartContentTransitionsButtons;
+ (id)keyPathsForValuesAffectingShowsTransportControls;
- (void).cxx_destruct;
- (void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2;
- (void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2;
- (BOOL)_hasVisibilityControllerItemThatPrefersVisible;
- (void)_observeBoolForKeyPath:(id)arg1 usingKeyValueObservationController:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;
- (BOOL)_prefersVolumeSliderExpandedAutomatically;
- (void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)_showOrHideVolumeSlider;
- (void)_startObservingForPlaybackViewUpdates;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (void)_updateContainerInclusion;
- (void)_updateEdgeInsetsForLetterboxedContentInContentView:(id)arg1;
- (void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 playing:(BOOL)arg2 userDidEndTappingProminentPlayButton:(BOOL)arg3;
- (void)_updateIsBeingScrolledOrOffScreen;
- (void)_updateNowPlayingInfoCenter;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_updatePlaybackControlsVisibleAndObservingUpdates;
- (void)_updatePreferredPlaybackControlsLoadedStatusNotifyingContentViewOfChanges:(BOOL)arg1;
- (void)_updatePrefersInspectionSuspended;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateSecondScreenConnectionReadyToConnect;
- (void)_updateVideoGravityButtonType;
- (void)_updateVolumeButtonGlyph;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(BOOL)arg2;
- (id)_volumeButtonMicaPackageState;
- (void)dealloc;
- (void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1;
- (void)handleVolumeChange:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (void)playbackControlsViewDidLoad:(id)arg1;
- (void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2;
- (void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1;
- (struct UIEdgeInsets)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1;
- (BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg1;
- (BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1;
- (BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
- (long long)playerViewControllerContentViewPreferredPlaybackControlsLoadedStatus:(id)arg1;
- (BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
- (void)prominentPlayButtonTouchUpInside:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)scrollViewObserverValuesDidChange:(id)arg1;
- (void)secondScreenConnectionDidBecomeActive:(id)arg1;
- (void)secondScreenConnectionDidResignActive:(id)arg1;
- (void)skipButtonForcePressChanged:(id)arg1;
- (void)skipButtonLongPressEnded:(id)arg1;
- (void)skipButtonLongPressTriggered:(id)arg1;
- (void)skipButtonTouchUpInside:(id)arg1;
- (void)startContentTransitionButtonTouchUpInside:(id)arg1;
- (void)startUpdatesIfNeeded;
- (void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)arg1;
- (void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)arg1;
- (void)volumeButtonLongPressTriggered:(id)arg1;
- (void)volumeButtonPanChanged:(id)arg1;
- (void)volumeButtonTapTriggered:(id)arg1;
- (void)volumeSliderValueDidChange:(id)arg1;

@end

