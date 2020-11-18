//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMemoriesFeedViewControllerHelperDelegate-Protocol.h>
#import <PhotosUICore/PXMemoriesOnboardingViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXMemoriesUITileSourceDelegate-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>
#import <PhotosUICore/UIContextMenuInteractionDelegate-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PXBasicUIViewTileAnimator, PXMemoriesFeedDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesOnboardingUIViewController, PXMemoriesUITileSource, PXPhotoAnalysisStatusController, PXPhotosDetailsContext, PXSectionedDataSource, PXTouchingUIGestureRecognizer, PXUIScrollViewController, PXUITapGestureRecognizer, UIBarButtonItem, UIScrollView, _UIContentUnavailableView;

@interface PXMemoriesFeedUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXReusableObjectPoolDelegate, PXChangeObserver, UIGestureRecognizerDelegate, PXAssetCollectionActionPerformerDelegate, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXSectionedDataSourceManagerObserver, UIPopoverPresentationControllerDelegate, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController, PXSettingsKeyObserver>
{
    BOOL _isInitialized;
    struct {
        BOOL navigationItem;
        BOOL contentUnavailablePlaceholder;
    } _needsUpdateFlags;
    BOOL _hasAppeared;
    PXUIScrollViewController *__scrollViewController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    UIBarButtonItem *__refreshBarButtonItem;
    PXMemoriesFeedViewControllerHelper *__helper;
    unsigned long long __memoriesStyle;
    PXPhotoAnalysisStatusController *__graphStatusController;
    PXMemoriesOnboardingUIViewController *__onboardingViewController;
    _UIContentUnavailableView *__contentUnavailableView;
    PXPhotosDetailsContext *__selectedItemDetailsContext;
    PXMemoriesUITileSource *__tileSource;
    PXUITapGestureRecognizer *__tapRecognizer;
    PXTouchingUIGestureRecognizer *__touchRecognizer;
    NSString *_scrollTargetMemoryUUID;
}

@property (strong, nonatomic, setter=_setContentUnavailableView:) _UIContentUnavailableView *_contentUnavailableView; // @synthesize _contentUnavailableView=__contentUnavailableView;
@property (readonly, nonatomic) PXPhotoAnalysisStatusController *_graphStatusController; // @synthesize _graphStatusController=__graphStatusController;
@property (readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // @synthesize _helper=__helper;
@property (readonly, nonatomic) unsigned long long _memoriesStyle; // @synthesize _memoriesStyle=__memoriesStyle;
@property (strong, nonatomic, setter=_setOnboardingViewController:) PXMemoriesOnboardingUIViewController *_onboardingViewController; // @synthesize _onboardingViewController=__onboardingViewController;
@property (readonly, nonatomic) UIBarButtonItem *_refreshBarButtonItem; // @synthesize _refreshBarButtonItem=__refreshBarButtonItem;
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property (strong, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext; // @synthesize _selectedItemDetailsContext=__selectedItemDetailsContext;
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // @synthesize _tapRecognizer=__tapRecognizer;
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property (readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // @synthesize _tileSource=__tileSource;
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer; // @synthesize _touchRecognizer=__touchRecognizer;
@property (readonly, nonatomic) PXMemoriesFeedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) PXSectionedDataSource *ppt_memoriesDataSource;
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (strong, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID; // @synthesize scrollTargetMemoryUUID=_scrollTargetMemoryUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long userInterfaceFeature;

+ (void)_setCurrentFeedViewController:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleSpecChange;
- (void)_handleTouch:(id)arg1;
- (void)_invalidateContentUnavailablePlaceholder;
- (void)_invalidateNavigationItem;
- (struct PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (id)_memoryTileViewForLocation:(struct CGPoint)arg1;
- (void)_navigateToMemoryAtSectionObjectReference:(id)arg1;
- (BOOL)_needsUpdate;
- (id)_photosDetailsContextForMemoryObjectReference:(id)arg1;
- (void)_preloadFontSpecs;
- (id)_previewActionMenusForInteraction:(id)arg1;
- (void)_refreshBarButtonItemAction:(id)arg1;
- (void)_setNeedsUpdate;
- (id)_showMemoryDetailsForContext:(id)arg1 animated:(BOOL)arg2;
- (id)_sourceViewForMemoryActionsController;
- (void)_startRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)_suppressionContexts;
- (void)_updateBarAppearance;
- (void)_updateContentUnavailablePlaceholderIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateNavigationItemIfNeeded;
- (void)_updateScrollViewControllerContentInset;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithMemoriesStyle:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (void)memoriesOnboardingViewControllerDidTapContinueButton:(id)arg1;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)playMiroMovieWithMemoryUUID:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)ppt_navigateToLatestMemoryAnimated:(BOOL)arg1;
- (void)ppt_navigateToMemoryWithReference:(id)arg1 animated:(BOOL)arg2;
- (void)ppt_revealMemoryWithReference:(id)arg1 animated:(BOOL)arg2;
- (id)preferredFocusEnvironments;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)revealMostRecentMemoryAnimated:(BOOL)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)showDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

@end
