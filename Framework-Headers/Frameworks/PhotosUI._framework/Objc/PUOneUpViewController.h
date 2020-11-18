//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PHAirPlayControllerContentProvider-Protocol.h>
#import <PhotosUI/PUAccessoryTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUAccessoryVisibilityInteractionControllerDelegate-Protocol.h>
#import <PhotosUI/PUAssetDisplayDescriptorNavigator-Protocol.h>
#import <PhotosUI/PUBarsControllerDelegate-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUDoubleTapZoomControllerDelegate-Protocol.h>
#import <PhotosUI/PUInteractiveDismissalControllerDelegate-Protocol.h>
#import <PhotosUI/PUIrisImageTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PULongPressDragControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpAccessoryViewControllersManagerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PUOneUpBarsControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpDragControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpGestureRecognizerCoordinatorDelegate-Protocol.h>
#import <PhotosUI/PUOneUpSuggestionsControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpTilingLayoutDelegate-Protocol.h>
#import <PhotosUI/PUOverOneUpPresentationSessionDelegate-Protocol.h>
#import <PhotosUI/PUOverOneUpPresentationSessionViewController-Protocol.h>
#import <PhotosUI/PUPlayButtonTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewControllerTransitionEndPoint-Protocol.h>
#import <PhotosUI/PUTilingViewScrollDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewTileSource-Protocol.h>
#import <PhotosUI/PUTilingViewTileTransitionDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewTileUseDelegate-Protocol.h>
#import <PhotosUI/PUUserTransformTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/PXContextualNotificationDelegate-Protocol.h>
#import <PhotosUI/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUI/PXPurgeableController-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, NSTimer, PUAccessoryVisibilityInteractionController, PUAggregateDictionaryTracer, PUAssetDisplayDescriptorNavigationRequest, PUBrowsingBackgroundTileViewController, PUBrowsingSession, PUDoubleTapZoomController, PUInteractivePinchDismissalController, PUInteractiveSwipeDismissalController, PULoadingIndicatorController, PULongPressDragController, PUOneUpAccessoryViewControllersManager, PUOneUpBarsController, PUOneUpDragController, PUOneUpGestureRecognizerCoordinator, PUOneUpSuggestionsController, PUOneUpViewControllerSpec, PUOverOneUpPresentationSession, PUParallaxComputer, PUPreviewActionController, PUTilingView, PXUserEventTracker, UIScrollView;

@interface PUOneUpViewController : UIViewController <PUViewControllerSpecChangeObserver, PUBrowsingViewModelChangeObserver, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUOneUpTilingLayoutDelegate, PUInteractiveDismissalControllerDelegate, PUBarsControllerDelegate, PUOneUpBarsControllerDelegate, PUUserTransformTileViewControllerDelegate, PUPlayButtonTileViewControllerDelegate, PUDoubleTapZoomControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PHAirPlayControllerContentProvider, PUTilingViewTileUseDelegate, PUAccessoryTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpAssetTransitionViewController, PUAssetDisplayDescriptorNavigator, PXSettingsKeyObserver, PXDiagnosticsEnvironment, PUIrisImageTileViewControllerDelegate, PXPurgeableController, PULongPressDragControllerDelegate, PUOneUpDragControllerDelegate, PXContextualNotificationDelegate, PUOneUpSuggestionsControllerDelegate, PUTilingViewControllerTransitionEndPoint>
{
    struct {
        BOOL suggestionController;
    } _needsUpdateFlags;
    NSString *_scrubbingIdentifier;
    PUPreviewActionController *_previewActionController;
    BOOL __needsUpdateSpec;
    BOOL __needsUpdateBarsController;
    BOOL __needsUpdatePreloadInsets;
    BOOL __needsUpdateLayout;
    BOOL __needsUpdateEditMode;
    BOOL __needsUpdatePreferredContentSize;
    BOOL __needsUpdateAudioState;
    BOOL __needsUpdateVideoPlayer;
    BOOL __isPresentedForSecondScreen;
    BOOL __isIrisPlaying;
    BOOL __isPerformingPreviewCommitTransition;
    BOOL __suppressColorSettings;
    BOOL __shouldShowAccessoryAfterUnlock;
    BOOL __didPlayCurrentLivePhoto;
    BOOL __prefersHomeIndicatorHidden;
    BOOL _isPresentedForPreview;
    BOOL _isCommitingPreview;
    BOOL _allowsPreviewActions;
    int _appearState;
    PUBrowsingSession *_browsingSession;
    CDUnknownBlockType _unlockDeviceStatus;
    CDUnknownBlockType _unlockDeviceHandler;
    unsigned long long __options;
    PUOneUpViewControllerSpec *__spec;
    PUTilingView *__tilingView;
    PUOneUpBarsController *__barsController;
    PUInteractiveSwipeDismissalController *__interactiveSwipeDismissalController;
    PUInteractivePinchDismissalController *__interactivePinchDismissalController;
    PUDoubleTapZoomController *__doubleTapZoomController;
    PULongPressDragController *__longPressDragController;
    PUOneUpDragController *__oneUpDragController;
    PUOneUpGestureRecognizerCoordinator *__gestureRecognizerCoordinator;
    PUBrowsingBackgroundTileViewController *__backgroundTileViewController;
    PUOneUpViewController *__secondScreenBrowser;
    NSTimer *__chromeAutoHideTimer;
    NSArray *__hiddenTilesController;
    NSArray *__tileKindsToHide;
    PUOverOneUpPresentationSession *__overOneUpPresentationSession;
    PUAssetDisplayDescriptorNavigationRequest *__currentNavigationRequest;
    double __preloadInsetsBasedOffViewWidth;
    PUParallaxComputer *__parallaxComputer;
    PUOneUpAccessoryViewControllersManager *__accessoryViewControllersManager;
    PUAccessoryVisibilityInteractionController *__accessoryVisibilityInteractionController;
    PULoadingIndicatorController *_loadingIndicatorController;
    PUAggregateDictionaryTracer *_aggregateDictionaryTracer;
    PXUserEventTracker *_userEventTracker;
    PUOneUpSuggestionsController *_suggestionController;
    struct CGSize __layoutReferenceSize;
    struct CGSize __pendingViewTransitionSize;
    struct UIEdgeInsets __layoutSafeAreaInsets;
}

@property (readonly, nonatomic) PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager; // @synthesize _accessoryViewControllersManager=__accessoryViewControllersManager;
@property (readonly, nonatomic) PUAccessoryVisibilityInteractionController *_accessoryVisibilityInteractionController; // @synthesize _accessoryVisibilityInteractionController=__accessoryVisibilityInteractionController;
@property (strong, nonatomic, setter=_setBackgroundTileViewController:) PUBrowsingBackgroundTileViewController *_backgroundTileViewController; // @synthesize _backgroundTileViewController=__backgroundTileViewController;
@property (readonly, nonatomic) PUOneUpBarsController *_barsController; // @synthesize _barsController=__barsController;
@property (strong, nonatomic, setter=_setChromeAutoHideTimer:) NSTimer *_chromeAutoHideTimer; // @synthesize _chromeAutoHideTimer=__chromeAutoHideTimer;
@property (strong, nonatomic, setter=_setCurrentNavigationRequest:) PUAssetDisplayDescriptorNavigationRequest *_currentNavigationRequest; // @synthesize _currentNavigationRequest=__currentNavigationRequest;
@property (nonatomic, setter=_setDidPlayCurrentLivePhoto:) BOOL _didPlayCurrentLivePhoto; // @synthesize _didPlayCurrentLivePhoto=__didPlayCurrentLivePhoto;
@property (readonly, nonatomic) PUDoubleTapZoomController *_doubleTapZoomController; // @synthesize _doubleTapZoomController=__doubleTapZoomController;
@property (readonly, nonatomic) PUOneUpGestureRecognizerCoordinator *_gestureRecognizerCoordinator; // @synthesize _gestureRecognizerCoordinator=__gestureRecognizerCoordinator;
@property (strong, nonatomic, setter=_setHiddenTilesController:) NSArray *_hiddenTilesController; // @synthesize _hiddenTilesController=__hiddenTilesController;
@property (readonly, nonatomic) PUInteractivePinchDismissalController *_interactivePinchDismissalController; // @synthesize _interactivePinchDismissalController=__interactivePinchDismissalController;
@property (readonly, nonatomic) PUInteractiveSwipeDismissalController *_interactiveSwipeDismissalController; // @synthesize _interactiveSwipeDismissalController=__interactiveSwipeDismissalController;
@property (nonatomic, setter=_setIrisPlaying:) BOOL _isIrisPlaying; // @synthesize _isIrisPlaying=__isIrisPlaying;
@property (nonatomic, setter=_setPerformingPreviewCommitTransition:) BOOL _isPerformingPreviewCommitTransition; // @synthesize _isPerformingPreviewCommitTransition=__isPerformingPreviewCommitTransition;
@property (readonly, nonatomic) BOOL _isPresentedForSecondScreen; // @synthesize _isPresentedForSecondScreen=__isPresentedForSecondScreen;
@property (nonatomic, setter=_setLayoutReferenceSize:) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property (nonatomic, setter=_setLayoutSafeAreaInsets:) struct UIEdgeInsets _layoutSafeAreaInsets; // @synthesize _layoutSafeAreaInsets=__layoutSafeAreaInsets;
@property (readonly, nonatomic) PULongPressDragController *_longPressDragController; // @synthesize _longPressDragController=__longPressDragController;
@property (nonatomic, setter=_setNeedsUpdateAudioState:) BOOL _needsUpdateAudioState; // @synthesize _needsUpdateAudioState=__needsUpdateAudioState;
@property (nonatomic, setter=_setNeedsUpdateBarsController:) BOOL _needsUpdateBarsController; // @synthesize _needsUpdateBarsController=__needsUpdateBarsController;
@property (nonatomic, setter=_setNeedsUpdateEditMode:) BOOL _needsUpdateEditMode; // @synthesize _needsUpdateEditMode=__needsUpdateEditMode;
@property (nonatomic, setter=_setNeedsUpdateLayout:) BOOL _needsUpdateLayout; // @synthesize _needsUpdateLayout=__needsUpdateLayout;
@property (nonatomic, setter=_setNeedsUpdatePreferredContentSize:) BOOL _needsUpdatePreferredContentSize; // @synthesize _needsUpdatePreferredContentSize=__needsUpdatePreferredContentSize;
@property (nonatomic, setter=_setNeedsUpdatePreloadInsets:) BOOL _needsUpdatePreloadInsets; // @synthesize _needsUpdatePreloadInsets=__needsUpdatePreloadInsets;
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateVideoPlayer:) BOOL _needsUpdateVideoPlayer; // @synthesize _needsUpdateVideoPlayer=__needsUpdateVideoPlayer;
@property (readonly, nonatomic) PUOneUpDragController *_oneUpDragController; // @synthesize _oneUpDragController=__oneUpDragController;
@property (readonly, nonatomic) unsigned long long _options; // @synthesize _options=__options;
@property (strong, nonatomic, setter=_setOverOneUpPresentationSession:) PUOverOneUpPresentationSession *_overOneUpPresentationSession; // @synthesize _overOneUpPresentationSession=__overOneUpPresentationSession;
@property (readonly, nonatomic) PUParallaxComputer *_parallaxComputer; // @synthesize _parallaxComputer=__parallaxComputer;
@property (nonatomic, setter=_setPendingViewTransitionSize:) struct CGSize _pendingViewTransitionSize; // @synthesize _pendingViewTransitionSize=__pendingViewTransitionSize;
@property (nonatomic, setter=_setPrefersHomeIndicatorHidden:) BOOL _prefersHomeIndicatorHidden; // @synthesize _prefersHomeIndicatorHidden=__prefersHomeIndicatorHidden;
@property (nonatomic, setter=_setPreloadInsetsBasedOffViewWidth:) double _preloadInsetsBasedOffViewWidth; // @synthesize _preloadInsetsBasedOffViewWidth=__preloadInsetsBasedOffViewWidth;
@property (strong, nonatomic, setter=_setSecondScreenBrowser:) PUOneUpViewController *_secondScreenBrowser; // @synthesize _secondScreenBrowser=__secondScreenBrowser;
@property (nonatomic, setter=_setShouldShowAccessoryAfterUnlock:) BOOL _shouldShowAccessoryAfterUnlock; // @synthesize _shouldShowAccessoryAfterUnlock=__shouldShowAccessoryAfterUnlock;
@property (readonly, nonatomic) PUOneUpViewControllerSpec *_spec; // @synthesize _spec=__spec;
@property (nonatomic, setter=_setSuppressBackdropColorSettings:) BOOL _suppressColorSettings; // @synthesize _suppressColorSettings=__suppressColorSettings;
@property (strong, nonatomic, setter=_setTileKindsToHide:) NSArray *_tileKindsToHide; // @synthesize _tileKindsToHide=__tileKindsToHide;
@property (strong, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property (readonly, nonatomic) PUAggregateDictionaryTracer *aggregateDictionaryTracer; // @synthesize aggregateDictionaryTracer=_aggregateDictionaryTracer;
@property (nonatomic, setter=setAllowsPreviewActions:) BOOL allowsPreviewActions; // @synthesize allowsPreviewActions=_allowsPreviewActions;
@property (nonatomic) int appearState; // @synthesize appearState=_appearState;
@property (readonly, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, setter=setCommitingPreview:) BOOL isCommitingPreview; // @synthesize isCommitingPreview=_isCommitingPreview;
@property (nonatomic, setter=setPresentedForPreview:) BOOL isPresentedForPreview; // @synthesize isPresentedForPreview=_isPresentedForPreview;
@property (readonly, nonatomic) PULoadingIndicatorController *loadingIndicatorController; // @synthesize loadingIndicatorController=_loadingIndicatorController;
@property (readonly, nonatomic) PUOneUpBarsController *ppt_barsController;
@property (readonly, nonatomic) UIViewController *ppt_currentAccessoryViewController;
@property (readonly, nonatomic) UIScrollView *ppt_mainScrollView;
@property (readonly, nonatomic) PUOverOneUpPresentationSession *ppt_overOneUpPresentationSession;
@property (readonly, nonatomic) PUPreviewActionController *previewActionController;
@property (readonly, nonatomic) PUOneUpSuggestionsController *suggestionController; // @synthesize suggestionController=_suggestionController;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceHandler; // @synthesize unlockDeviceHandler=_unlockDeviceHandler;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceStatus; // @synthesize unlockDeviceStatus=_unlockDeviceStatus;
@property (readonly, nonatomic) PXUserEventTracker *userEventTracker; // @synthesize userEventTracker=_userEventTracker;

- (void).cxx_destruct;
- (void)_abandonTileController:(id)arg1;
- (long long)_accessoryContentKindForCurrentAsset;
- (id)_assetReferenceAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)_assetViewModelAtIndexPath:(id)arg1 layout:(id)arg2;
- (void)_browsingVideoPlayerDidPlayToEndTime:(id)arg1;
- (BOOL)_canAttemptNavigationToAssetDisplayDescriptor:(id)arg1;
- (void)_cancelTimedChromeAutoHide;
- (void)_chromeAutoHideTimerFired:(id)arg1;
- (void)_configureAdoptedTileController:(id)arg1;
- (id)_currentAccessoryViewController;
- (id)_currentAssetViewModel;
- (id)_currentContentTileController;
- (id)_currentPlaceholderSnapshotViewForTileController:(id)arg1;
- (void)_didEndTransition;
- (void)_fixAssetViewModelTileTransformIfNecessary:(id)arg1;
- (void)_handleTouchGesture:(id)arg1;
- (void)_hideChromeOnPlayButtonTapWithItemIsNowPlaying:(BOOL)arg1;
- (void)_hideOverlays;
- (void)_invalidateAudioState;
- (void)_invalidateBarsControllers;
- (void)_invalidateEditMode;
- (void)_invalidateLayout;
- (void)_invalidatePreferredContentSize;
- (void)_invalidatePreloadInsets;
- (void)_invalidateSpec;
- (void)_invalidateSuggestionController;
- (void)_invalidateVideoPlayer;
- (BOOL)_isAccessoryVisible;
- (BOOL)_isDrivingScrubbing;
- (BOOL)_isLayoutAffectedBySpecChange:(id)arg1;
- (BOOL)_isLocationFromProviderInAccessoryArea:(id)arg1;
- (BOOL)_isLocationFromProviderOverControl:(id)arg1;
- (BOOL)_isSecondScreenBrowserVisible;
- (BOOL)_needsUpdate;
- (id)_newOneUpLayout;
- (void)_notifyTileIsReadyWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performNavigationToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentAlertForError:(id)arg1;
- (void)_presentAlertForUnplayableAssetReference:(id)arg1;
- (void)_presentDetailsIndicator;
- (BOOL)_requireUnlockedDeviceForAccessoryView;
- (void)_scheduleTimedChromeAutoHide;
- (void)_setAccessoryVisible:(BOOL)arg1;
- (void)_setNeedsUpdate;
- (BOOL)_shouldMakeChromeVisibleWhenVideoPlayerPlaysToEndTime:(id)arg1;
- (BOOL)_shouldUseGlobalAccessoryViewVisibility;
- (void)_toggleAccessoryVisibility;
- (void)_toggleCommentsVisibility;
- (void)_toggleDetailsVisibility;
- (void)_unhideOverlays;
- (void)_updateAudioStateIfNeeded;
- (void)_updateBackgroundTileViewController;
- (void)_updateBarsControllerIfNeeded;
- (void)_updateEditModeIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayout:(id)arg1;
- (void)_updateLayoutIfNeeded;
- (void)_updateLayoutReferenceSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)_updatePrefersHomeIndicatorHidden;
- (void)_updatePreloadInsetsIfNeeded;
- (void)_updatePreviewActionController;
- (void)_updateSpecIfNeeded;
- (void)_updateSuggestionControllerIfNeeded;
- (void)_updateVideoPlayerIfNeeded;
- (void)_updateViewModelWithCurrentScrollPosition;
- (id)_videoPlayerAtIndexPath:(id)arg1 layout:(id)arg2;
- (void)_willBeginTransition;
- (id)accessoryTileViewControllerAccessoryViewController:(id)arg1;
- (id)accessoryTileViewControllerHostViewController:(id)arg1;
- (id)accessoryTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (BOOL)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(id)arg1;
- (BOOL)accessoryVisibilityInteractionController:(id)arg1 canBeginAtLocationFromProvider:(id)arg2;
- (BOOL)accessoryVisibilityInteractionController:(id)arg1 isLocationFromProviderInAccessoryContent:(id)arg2;
- (void)accessoryVisibilityInteractionController:(id)arg1 setAccessoryVisible:(BOOL)arg2 changeReason:(long long)arg3;
- (void)accessoryVisibilityInteractionControllerDidEnd:(id)arg1;
- (id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)barsController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (void)barsControllerContentGuideInsetsDidChange:(id)arg1;
- (id)barsControllerViewController:(id)arg1;
- (id)barsControllerViewHostingGestureRecognizers:(id)arg1;
- (id)contentScrollView;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (BOOL)contextualNotification:(id)arg1 shouldPassthroughPoint:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;
- (void)contextualNotificationWasTapped:(id)arg1;
- (void)dealloc;
- (BOOL)doubleTapZoomController:(id)arg1 canDoubleTapBeginAtLocationFromProvider:(id)arg2;
- (id)doubleTapZoomController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)doubleTapZoomControllerTilingView:(id)arg1;
- (id)doubleTapZoomControllerViewHostingGestureRecognizers:(id)arg1;
- (id)hitTestViewForOneUpDragController:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)interactiveDismissalController:(id)arg1 canBeginDismissalAtLocationFromProvider:(id)arg2;
- (id)interactiveDismissalControllerDesignatedTileController:(id)arg1;
- (id)interactiveDismissalControllerTilingView:(id)arg1;
- (id)interactiveDismissalControllerViewController:(id)arg1;
- (id)interactiveDismissalControllerViewHostingGestureRecognizers:(id)arg1;
- (id)irisImageTileViewController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (void)irisImageTileViewControllerDidBeginHinting:(id)arg1;
- (void)irisImageTileViewControllerDidBeginPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidEndPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidEndVitality:(id)arg1;
- (id)irisImageTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (struct CGPoint)layout:(id)arg1 accessoryOffsetForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (struct CGSize)layout:(id)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg2;
- (struct CGSize)layout:(id)arg1 badgeSizeForItemAtIndexPath:(id)arg2;
- (struct CGPoint)layout:(id)arg1 contentOffsetForItemAtIndexPath:(id)arg2;
- (BOOL)layout:(id)arg1 disableInitialZoomToFillForItemAtIndexPath:(id)arg2;
- (struct CGSize)layout:(id)arg1 loadingIndicatorSizeForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 minimumVisibleContentHeightForItemAtIndexPath:(id)arg2;
- (id)layout:(id)arg1 modelTileTransformForItemAtIndexPath:(id)arg2;
- (BOOL)layout:(id)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)arg2;
- (BOOL)layout:(id)arg1 shouldShowAccessoryForItemAtIndexPath:(id)arg2;
- (BOOL)layout:(id)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg2;
- (BOOL)layout:(id)arg1 shouldShowPlayButtonForItemAtIndexPath:(id)arg2;
- (BOOL)layout:(id)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg2;
- (void)loadView;
- (BOOL)longPressDragController:(id)arg1 canLongPressBeginAtLocationFromProvider:(id)arg2;
- (id)longPressDragController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)longPressDragControllerTilingView:(id)arg1;
- (id)longPressDragControllerViewHostingGestureRecognizers:(id)arg1;
- (void)navigateToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)oneUpAccessoryViewControllersManager:(id)arg1 preventRevealInMomentActionForAssetReference:(id)arg2;
- (BOOL)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (BOOL)oneUpBarsController:(id)arg1 canShowCommentsForAsset:(id)arg2;
- (void)oneUpBarsController:(id)arg1 didTapPlayPauseButton:(BOOL)arg2;
- (BOOL)oneUpBarsController:(id)arg1 isAccessoryAvailableForAssetReference:(id)arg2;
- (BOOL)oneUpBarsController:(id)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg2;
- (BOOL)oneUpBarsController:(id)arg1 shouldTapBeginAtLocationFromProvider:(id)arg2;
- (void)oneUpBarsController:(id)arg1 willExecuteActionPerformer:(id)arg2;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg1;
- (void)oneUpBarsControllerDidTapTitle:(id)arg1;
- (void)oneUpBarsControllerToggleCommentsVisibility:(id)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(id)arg1;
- (id)oneUpDragControllerForDoubleTapZoomController:(id)arg1;
- (id)oneUpDragControllerForLongPressDragController:(id)arg1;
- (BOOL)oneUpGestureRecgonizerCoordinator:(id)arg1 shouldAllowIrisGestureAtLocationFromProvider:(id)arg2;
- (id)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(id)arg1;
- (BOOL)oneUpSuggestionsController:(id)arg1 canShowSuggestion:(id)arg2 forAssetReference:(id)arg3;
- (void)oneUpSuggestionsController:(id)arg1 didSelectSuggestion:(id)arg2 forAssetReference:(id)arg3;
- (struct CGRect)oneUpSuggestionsController:(id)arg1 frameForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3;
- (void)overOneUpPresentationSession:(id)arg1 didPresent:(id)arg2;
- (id)overOneUpPresentationSessionBrowserViewModel:(id)arg1;
- (id)overOneUpPresentationSessionCreateIfNeeded:(BOOL)arg1;
- (id)overOneUpPresentationSessionCurrentTileController:(id)arg1;
- (void)overOneUpPresentationSessionDidFinish:(id)arg1;
- (id)overOneUpPresentationSessionForDragController:(id)arg1;
- (BOOL)overOneUpPresentationSessionPresentingViewControllerIsReady:(id)arg1;
- (id)overOneUpPresentationSessionTilingView:(id)arg1;
- (id)overOneUpPresentationSessionViewController:(id)arg1;
- (double)playButtonTileViewController:(id)arg1 delayForButtonAnimation:(BOOL)arg2;
- (void)playButtonTileViewController:(id)arg1 didTapButton:(BOOL)arg2;
- (void)ppt_playCurrentLivePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ppt_toggleAccessoryView;
- (long long)preferredAnimationForContextualNotification:(id)arg1;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (id)previewActionItems;
- (id)pu_debugCurrentAsset;
- (id)pu_debugCurrentViewModel;
- (long long)pu_preferredBarStyle;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)purgeIfPossible;
- (double)px_HDRFocus;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (double)px_imageModulationIntensity;
- (BOOL)px_isSnapBackDestination;
- (id)px_snapBackHistorySubtitle;
- (id)px_snapBackHistoryTitle;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)tileViewForOneUpDragController:(id)arg1;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (struct CGPoint)tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (id)tilingView:(id)arg1 scrollInfoWithLayout:(id)arg2;
- (struct CGPoint)tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint)arg2 withLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (BOOL)tilingViewCanBypass20069585Check:(id)arg1;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(BOOL)arg4 animationSetupCompletionHandler:(CDUnknownBlockType)arg5;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (id)tilingViewForOneUpDragController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)userTransformTileViewController:(id)arg1 didChangeIsUserInteracting:(BOOL)arg2;
- (void)userTransformTileViewController:(id)arg1 didChangeModelTileTransform:(id)arg2;
- (BOOL)userTransformTileViewController:(id)arg1 shouldReceiveTouchAtLocationFromProvider:(id)arg2;
- (id)viewControllerForOneUpSuggestionsController:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1;

@end

