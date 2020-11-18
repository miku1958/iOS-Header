//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPlayerViewControllerContentViewDelegate-Protocol.h>
#import <AVKit/AVRoutePickerViewDelegate-Protocol.h>
#import <AVKit/AVTransportControlsViewDelegate-Protocol.h>
#import <AVKit/_UIScrollViewScrollObserver-Protocol.h>

@class AVKeyValueObservationController, AVPictureInPictureController, AVPlaybackControlsView, AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerViewController, AVRouteDetectorCoordinator, AVTimeFormatter, AVVolumeController, NSString, NSTimer, UIAlertController, UIScrollView, UIViewPropertyAnimator;

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewDelegate, _UIScrollViewScrollObserver, AVPlayerViewControllerContentViewDelegate>
{
    BOOL _playerViewControllerIsBeingTransitioned;
    BOOL _playerViewControllerIsPresentingFullScreen;
    BOOL _playerViewControllerIsPresentedFullScreen;
    BOOL _playerViewControllerHasInvalidViewControllerHierarchy;
    BOOL _entersFullScreenWhenPlaybackBegins;
    BOOL _canHideInteractiveContentOverlayView;
    BOOL _allowsEnteringFullScreen;
    BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
    BOOL _showsPictureInPictureButton;
    BOOL _showsPlaybackControls;
    BOOL _requiresLinearPlayback;
    BOOL _showsDoneButtonWhenFullScreen;
    BOOL _prefersAssetInspectionSuspended;
    BOOL _playingOnSecondScreen;
    BOOL _showsLoadingIndicator;
    BOOL _prefersVolumeSliderExpanded;
    BOOL _includesVideoGravityButton;
    BOOL _suspended;
    BOOL _needsTimeResolver;
    BOOL _coveringWindow;
    BOOL _descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen;
    BOOL _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
    BOOL _multipleRoutesDetected;
    BOOL _resumingUpdates;
    BOOL _playbackSuspendedForScrubbing;
    BOOL _hasSeekableLiveStreamingContent;
    BOOL _scrubbingOrSeeking;
    BOOL _shouldIgnoreTimeResolverUpdates;
    AVKeyValueObservationController *_keyValueObservationController;
    AVPlayerController *_playerController;
    long long _preferredUnobscuredArea;
    AVPictureInPictureController *_pictureInPictureController;
    AVVolumeController *_volumeController;
    AVPlayerViewController *_playerViewController;
    AVPlaybackControlsView *_playbackControlsView;
    AVPlayerControllerTimeResolver *_timeResolver;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    UIAlertController *_routePickerAlertController;
    AVRouteDetectorCoordinator *_routeDetectorCoordinator;
    id _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
    NSTimer *_loadingIndicatorTimer;
    UIViewPropertyAnimator *_collapseExpandSliderAnimator;
    UIScrollView *_containingScrollView;
    double _timeStampOfPreviousObservedScrollViewDidScroll;
    double _loadingIndicatorTimerDelay;
    long long _timeControlStatus;
    long long _videoGravityButtonType;
    NSString *_videoGravity;
    struct CGRect _playbackViewFrame;
}

@property (strong, nonatomic) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver; // @synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
@property (nonatomic) BOOL allowsEnteringFullScreen; // @synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen;
@property (nonatomic) BOOL canHideInteractiveContentOverlayView; // @synthesize canHideInteractiveContentOverlayView=_canHideInteractiveContentOverlayView;
@property (readonly, nonatomic) BOOL canShowLoadingIndicator;
@property (weak, nonatomic) UIViewPropertyAnimator *collapseExpandSliderAnimator; // @synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator;
@property (weak, nonatomic) UIScrollView *containingScrollView; // @synthesize containingScrollView=_containingScrollView;
@property (nonatomic, getter=isCoveringWindow) BOOL coveringWindow; // @synthesize coveringWindow=_coveringWindow;
@property (readonly, nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDescendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen) BOOL descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen; // @synthesize descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen=_descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // @synthesize elapsedTimeFormatter=_elapsedTimeFormatter;
@property (nonatomic) BOOL entersFullScreenWhenPlaybackBegins; // @synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay; // @synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
@property (nonatomic) BOOL hasSeekableLiveStreamingContent; // @synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL includesDoneButton;
@property (readonly, nonatomic) BOOL includesFullScreenButton;
@property (nonatomic) BOOL includesVideoGravityButton; // @synthesize includesVideoGravityButton=_includesVideoGravityButton;
@property (nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused; // @synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (readonly, nonatomic) AVKeyValueObservationController *keyValueObservationController; // @synthesize keyValueObservationController=_keyValueObservationController;
@property (weak, nonatomic) NSTimer *loadingIndicatorTimer; // @synthesize loadingIndicatorTimer=_loadingIndicatorTimer;
@property (nonatomic) double loadingIndicatorTimerDelay; // @synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, nonatomic) double minimumTime;
@property (nonatomic) BOOL multipleRoutesDetected; // @synthesize multipleRoutesDetected=_multipleRoutesDetected;
@property (nonatomic) BOOL needsTimeResolver; // @synthesize needsTimeResolver=_needsTimeResolver;
@property (strong, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property (readonly, nonatomic) BOOL playButtonsShowPauseGlyph;
@property (strong, nonatomic) AVPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property (nonatomic, getter=isPlaybackSuspendedForScrubbing) BOOL playbackSuspendedForScrubbing; // @synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing;
@property (nonatomic) struct CGRect playbackViewFrame; // @synthesize playbackViewFrame=_playbackViewFrame;
@property (weak, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property (nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy; // @synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy;
@property (nonatomic) BOOL playerViewControllerIsBeingTransitioned; // @synthesize playerViewControllerIsBeingTransitioned=_playerViewControllerIsBeingTransitioned;
@property (nonatomic) BOOL playerViewControllerIsPresentedFullScreen; // @synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen;
@property (nonatomic) BOOL playerViewControllerIsPresentingFullScreen; // @synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property (nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property (nonatomic) BOOL prefersAssetInspectionSuspended; // @synthesize prefersAssetInspectionSuspended=_prefersAssetInspectionSuspended;
@property (nonatomic) BOOL prefersVolumeSliderExpanded; // @synthesize prefersVolumeSliderExpanded=_prefersVolumeSliderExpanded;
@property (readonly, nonatomic) BOOL prominentPlayButtonCanShowPauseGlyph;
@property (readonly, nonatomic) AVTimeFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property (nonatomic) BOOL requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property (nonatomic, getter=isResumingUpdates) BOOL resumingUpdates; // @synthesize resumingUpdates=_resumingUpdates;
@property (strong, nonatomic) AVRouteDetectorCoordinator *routeDetectorCoordinator; // @synthesize routeDetectorCoordinator=_routeDetectorCoordinator;
@property (weak, nonatomic) UIAlertController *routePickerAlertController; // @synthesize routePickerAlertController=_routePickerAlertController;
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking; // @synthesize scrubbingOrSeeking=_scrubbingOrSeeking;
@property (readonly, nonatomic, getter=isSeekingEnabled) BOOL seekingEnabled;
@property (readonly, nonatomic) BOOL shouldEnterFullScreenWhenPlaybackBegins;
@property (nonatomic) BOOL shouldIgnoreTimeResolverUpdates; // @synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates;
@property (nonatomic) BOOL showsDoneButtonWhenFullScreen; // @synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen;
@property (nonatomic) BOOL showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property (readonly, nonatomic) BOOL showsMediaSelectionButton;
@property (nonatomic) BOOL showsPictureInPictureButton; // @synthesize showsPictureInPictureButton=_showsPictureInPictureButton;
@property (nonatomic) BOOL showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property (readonly, nonatomic) BOOL showsProminentPlayButton;
@property (readonly, nonatomic) BOOL showsRoutePickerView;
@property (readonly, nonatomic) BOOL showsSkipButtons;
@property (readonly, nonatomic) BOOL showsTransportControls;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property (readonly, nonatomic) double targetTime;
@property (nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property (strong, nonatomic) AVPlayerControllerTimeResolver *timeResolver; // @synthesize timeResolver=_timeResolver;
@property (nonatomic) double timeStampOfPreviousObservedScrollViewDidScroll; // @synthesize timeStampOfPreviousObservedScrollViewDidScroll=_timeStampOfPreviousObservedScrollViewDidScroll;
@property (copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property (nonatomic) long long videoGravityButtonType; // @synthesize videoGravityButtonType=_videoGravityButtonType;
@property (readonly, nonatomic) AVVolumeController *volumeController; // @synthesize volumeController=_volumeController;

+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingFullScreen;
+ (id)keyPathsForValuesAffectingIncludesDoneButton;
+ (id)keyPathsForValuesAffectingIncludesFullScreenButton;
+ (id)keyPathsForValuesAffectingMaximumTime;
+ (id)keyPathsForValuesAffectingMinimumTime;
+ (id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+ (id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+ (id)keyPathsForValuesAffectingSeekingEnabled;
+ (id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+ (id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+ (id)keyPathsForValuesAffectingShowsProminentPlayButton;
+ (id)keyPathsForValuesAffectingShowsRoutePickerView;
+ (id)keyPathsForValuesAffectingShowsSkipButtons;
+ (id)keyPathsForValuesAffectingShowsTransportControls;
- (void).cxx_destruct;
- (void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2;
- (void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2;
- (void)_observeBoolForKeyPath:(id)arg1 observationHandler:(CDUnknownBlockType)arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (BOOL)_prefersVolumeSliderExpandedAutomatically;
- (void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)_showOrHideVolumeSlider;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (void)_startOrUpdateVisibilityControllerManagementOfViewVisibility;
- (void)_stopVisibilityControllerManagementOfViewVisibilityIfNeeded;
- (void)_updateContainedInTrackingOrAnimatingScrollView;
- (void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 playing:(BOOL)arg2 userDidEndTappingProminentPlayButton:(BOOL)arg3;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateSuspended;
- (void)_updateVideoGravityButtonType;
- (void)_updateVolumeButtonGlyph;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(BOOL)arg2;
- (id)_volumeButtonMicaPackageState;
- (void)dealloc;
- (void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1;
- (void)handleVolumeChange:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (void)playbackControlsViewDidLoad:(id)arg1;
- (void)playbackControlsVisibilityDidChange;
- (void)playerViewControllerContentView:(id)arg1 didLoadPlaybackControlsView:(id)arg2;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
- (void)playerViewControllerContentViewDidMoveToWindow:(id)arg1;
- (BOOL)playerViewControllerContentViewIsBeingTransitionedToOrFromFullScreen:(id)arg1;
- (BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
- (BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
- (void)prominentPlayButtonTouchUpInside:(id)arg1;
- (void)resumeUpdates;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)skipButtonForcePressChanged:(id)arg1;
- (void)skipButtonLongPressEnded:(id)arg1;
- (void)skipButtonLongPressTriggered:(id)arg1;
- (void)skipButtonTouchUpInside:(id)arg1;
- (void)stopUpdates;
- (void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)arg1;
- (void)visibilityControllerWillShowView:(id)arg1;
- (void)volumeButtonLongPressTriggered:(id)arg1;
- (void)volumeButtonPanChanged:(id)arg1;
- (void)volumeButtonTapTriggered:(id)arg1;
- (void)volumeSliderValueDidChange:(id)arg1;

@end
