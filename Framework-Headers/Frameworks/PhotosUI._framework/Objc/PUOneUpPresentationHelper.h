//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPhotosPreviewPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/PUPinchedTileTrackerDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewControllerTransitionEndPoint-Protocol.h>
#import <PhotosUI/PUTilingViewTileSource-Protocol.h>
#import <PhotosUI/PUTilingViewTileTransitionDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewTileUseDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSSet, NSString, PUBrowsingSession, PUCameraPreviewTransitionDelegate, PUChangeDirectionValueFilter, PUOneUpViewController, PUPinchedTileTracker, PUTilingView, PXPhotosDataSource, UITapGestureRecognizer, UIViewController;
@protocol PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate;

@interface PUOneUpPresentationHelper : NSObject <PUPhotosPreviewPresentationControllerDelegate, UIGestureRecognizerDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, PUPinchedTileTrackerDelegate, PUTilingViewControllerTransitionEndPoint>
{
    struct {
        BOOL respondsToTransitionTypeWithProposedTransitionType;
        BOOL respondsToWillPresentOneUpViewController;
        BOOL respondsToDidDismissOneUpViewController;
        BOOL respondsToViewHostingGestureRecognizers;
        BOOL respondsToScrollView;
        BOOL respondsToPreferredBarStyle;
        BOOL respondsToShouldLeaveContentOnSecondScreen;
        BOOL respondsToDisableFinalFadeoutAnimation;
        BOOL respondsToPreviewScrubberDidBecomeAvailable;
        BOOL respondsToShouldAutoPlay;
        BOOL respondsToPreventRevealInMomentAction;
    } _delegateFlags;
    struct {
        BOOL respondsToCurrentImageForAssetReference;
        BOOL respondsToShouldHideAssetReferences;
        BOOL respondsToScrollAssetReferenceToVisible;
        BOOL respondsToShouldDisableScroll;
    } _assetDisplayDelegateFlags;
    BOOL _cachesScrubberView;
    BOOL __isEndingPresentation;
    BOOL __shouldPauseLibraryChanges;
    BOOL __needsUpdateAssetReferencesDisplayedInTilingView;
    BOOL __isPerformingNonAnimatedPush;
    PUBrowsingSession *_browsingSession;
    PXPhotosDataSource *_photosDataSource;
    id<PUOneUpPresentationHelperDelegate> _delegate;
    id<PUOneUpPresentationHelperAssetDisplayDelegate> _assetDisplayDelegate;
    CDUnknownBlockType _unlockDeviceStatus;
    CDUnknownBlockType _unlockDeviceHandler;
    long long __state;
    long long __presentationEndTimeoutIdentifier;
    id __libraryChangePauseToken;
    CDUnknownBlockType __browsingSessionCreationBlock;
    UIViewController *__presentingViewController;
    PUTilingView *__tilingView;
    PUTilingView *__disappearingTilingView;
    PUTilingView *__transitioningTilingView;
    NSSet *__assetReferencesDisplayedInTilingView;
    PUOneUpViewController *__oneUpViewController;
    UITapGestureRecognizer *__tapGestureRecognizer;
    PUPinchedTileTracker *__pinchedTileTracker;
    PUChangeDirectionValueFilter *__panDirectionValueFilter;
    PUCameraPreviewTransitionDelegate *__cameraPreviewTransitionDelegate;
}

@property (strong, nonatomic, setter=_setAssetReferencesDisplayedInTilingView:) NSSet *_assetReferencesDisplayedInTilingView; // @synthesize _assetReferencesDisplayedInTilingView=__assetReferencesDisplayedInTilingView;
@property (readonly, copy, nonatomic) CDUnknownBlockType _browsingSessionCreationBlock; // @synthesize _browsingSessionCreationBlock=__browsingSessionCreationBlock;
@property (strong, nonatomic, setter=_setCameraPreviewTransitionDelegate:) PUCameraPreviewTransitionDelegate *_cameraPreviewTransitionDelegate; // @synthesize _cameraPreviewTransitionDelegate=__cameraPreviewTransitionDelegate;
@property (weak, nonatomic, setter=_setDisappearingTilingView:) PUTilingView *_disappearingTilingView; // @synthesize _disappearingTilingView=__disappearingTilingView;
@property (nonatomic, setter=_setEndingPresentation:) BOOL _isEndingPresentation; // @synthesize _isEndingPresentation=__isEndingPresentation;
@property (nonatomic, setter=_setIsPerformingNonAnimatedPush:) BOOL _isPerformingNonAnimatedPush; // @synthesize _isPerformingNonAnimatedPush=__isPerformingNonAnimatedPush;
@property (strong, nonatomic, setter=_setLibraryChangePauseToken:) id _libraryChangePauseToken; // @synthesize _libraryChangePauseToken=__libraryChangePauseToken;
@property (nonatomic, setter=_setNeedsUpdateAssetReferencesDisplayedInTilingView:) BOOL _needsUpdateAssetReferencesDisplayedInTilingView; // @synthesize _needsUpdateAssetReferencesDisplayedInTilingView=__needsUpdateAssetReferencesDisplayedInTilingView;
@property (strong, nonatomic, setter=_setOneUpViewController:) PUOneUpViewController *_oneUpViewController; // @synthesize _oneUpViewController=__oneUpViewController;
@property (strong, nonatomic, setter=_setPanDirectionValueFilter:) PUChangeDirectionValueFilter *_panDirectionValueFilter; // @synthesize _panDirectionValueFilter=__panDirectionValueFilter;
@property (strong, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker; // @synthesize _pinchedTileTracker=__pinchedTileTracker;
@property (nonatomic, setter=_setPresentationEndTimeoutIdentifier:) long long _presentationEndTimeoutIdentifier; // @synthesize _presentationEndTimeoutIdentifier=__presentationEndTimeoutIdentifier;
@property (weak, nonatomic, setter=_setPresentingViewController:) UIViewController *_presentingViewController; // @synthesize _presentingViewController=__presentingViewController;
@property (nonatomic, setter=_setShouldPauseLibraryChanges:) BOOL _shouldPauseLibraryChanges; // @synthesize _shouldPauseLibraryChanges=__shouldPauseLibraryChanges;
@property (nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property (strong, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property (strong, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property (strong, nonatomic, setter=_setTransitioningTilingView:) PUTilingView *_transitioningTilingView; // @synthesize _transitioningTilingView=__transitioningTilingView;
@property (weak, nonatomic) id<PUOneUpPresentationHelperAssetDisplayDelegate> assetDisplayDelegate; // @synthesize assetDisplayDelegate=_assetDisplayDelegate;
@property (strong, nonatomic, setter=_setBrowsingSession:) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
@property (nonatomic) BOOL cachesScrubberView; // @synthesize cachesScrubberView=_cachesScrubberView;
@property (readonly, nonatomic) BOOL canPresentOneUpViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUOneUpPresentationHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isOneUpPresented;
@property (strong, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceHandler; // @synthesize unlockDeviceHandler=_unlockDeviceHandler;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceStatus; // @synthesize unlockDeviceStatus=_unlockDeviceStatus;

- (void).cxx_destruct;
- (void)_cleanUpAfterTilingViewTransitionAnimated:(BOOL)arg1;
- (void)_cleanupOneUpViewControllerForDismissalIfNeeded;
- (id)_createOneUpViewControllerWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (long long)_currentNavigationControllerOperation;
- (id)_currentTilingViewControllerTransition;
- (void)_didFinishTransitioningToOneUp;
- (void)_disappearingTilingView:(id)arg1 animationCompleted:(BOOL)arg2;
- (void)_ensureRegistrationWithPresentingViewController;
- (BOOL)_handleInteractivePresentationWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handleTileControllerAnimationEnd;
- (void)_invalidateAssetReferencesDisplayedInTilingView;
- (id)_newCollapsedLayout;
- (BOOL)_prepareDismissalForced:(BOOL)arg1;
- (void)_presentOneUpViewController:(id)arg1 animated:(BOOL)arg2 interactiveMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentationEndDidTimeOut:(long long)arg1;
- (id)_scrollViewForPreviewing;
- (BOOL)_shouldAutoplayOnNavigation;
- (void)_updateAssetReferencesDisplayedInTilingView;
- (void)_updateLayout;
- (void)_updateLayout:(id)arg1;
- (void)_updatePreviewingScrubber;
- (void)_updateTapGestureRecognizer;
- (void)beginUsingBlackTheme;
- (id)cameraPreviewTransitionDelegateWithSourceRect:(struct CGRect)arg1 sourceImage:(id)arg2;
- (BOOL)canDismissOneUpViewController;
- (void)cancelCommitTransitionForPreviewViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (void)dealloc;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (BOOL)dismissOneUpViewControllerForced:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)handlePresentingPanGestureRecognizer:(id)arg1;
- (BOOL)handlePresentingPinchGestureRecognizer:(id)arg1;
- (id)init;
- (id)initWithBrowsingSessionCreationBlock:(CDUnknownBlockType)arg1;
- (id)initWithPhotosDataSource:(id)arg1;
- (void)interactiveTileTracker:(id)arg1 didStopTrackingTileController:(id)arg2;
- (void)interactiveTileTracker:(id)arg1 willStartTrackingTileController:(id)arg2;
- (void)navigateToAssetAtIndexPath:(id)arg1;
- (void)photosPreviewPresentationController:(id)arg1 willPresentPreviewViewController:(id)arg2;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForTileWithLayoutInfo:(id)arg2;
- (double)pinchedTiledTracker:(id)arg1 initialAspectRatioForTileWithLayoutInfo:(id)arg2;
- (void)presentOneUpViewControllerAnimated:(BOOL)arg1 interactiveMode:(long long)arg2;
- (void)presentOneUpViewControllerFromAssetAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactiveMode:(long long)arg3;
- (void)presentingViewControllerScrollViewDidScroll:(id)arg1;
- (void)presentingViewControllerViewDidAppear:(BOOL)arg1;
- (void)presentingViewControllerViewDidDisappear:(BOOL)arg1;
- (void)presentingViewControllerViewWillAppear:(BOOL)arg1;
- (void)presentingViewControllerViewWillDisappear:(BOOL)arg1;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1 allowingActions:(BOOL)arg2;
- (BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (void)tilingView:(id)arg1 didStopUsingTileController:(id)arg2;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForUpdateWithItems:(id)arg2;
- (void)tilingView:(id)arg1 willStartUsingTileController:(id)arg2;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(BOOL)arg4 animationSetupCompletionHandler:(CDUnknownBlockType)arg5;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (long long)tilingViewControllerTransitionPreferredBarStyle:(id)arg1;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (BOOL)tilingViewControllerTransitionUsesTransientTilingView:(id)arg1;
- (void)tilingViewDidEndAnimatingTileControllers:(id)arg1;
- (void)tilingViewDidUpdateTileControllers:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;

@end

