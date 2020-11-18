//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPurgeableController-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionDelegate-Protocol.h>
#import <PhotosUICore/UIViewControllerPreviewingDelegate-Protocol.h>
#import <PhotosUICore/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, PXAssetCollectionActionController, PXBarsController, PXPhotosDetailsContext, PXPhotosDetailsHeaderTileWidget, PXPhotosDetailsSpecManager, PXPhotosDetailsViewModel, PXScrollViewController, PXSwipeSelectionManager, PXTilingController, PXUIScrollViewController, PXWidgetComposition, PXWidgetSpec, UIScrollView, UIView, _PXPhotosDetailsPreviewOrbContext;
@protocol PXActionPerformerDelegate, PXUIWidget, UIViewControllerPreviewing;

@interface PXPhotosDetailsUIViewController : UIViewController <PXWidgetCompositionDelegate, PXChangeObserver, PXUIViewControllerZoomTransitionEndPoint, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, PXActionPerformerDelegate, PXScrollViewControllerObserver, PXPurgeableController>
{
    BOOL __hasAppeared;
    BOOL __shouldFocusHeader;
    BOOL _empty;
    PXPhotosDetailsContext *_context;
    unsigned long long _options;
    PXPhotosDetailsViewModel *__viewModel;
    PXUIScrollViewController *__scrollViewController;
    NSArray *__widgets;
    NSMapTable *__widgetOptions;
    PXPhotosDetailsHeaderTileWidget *__headerWidget;
    PXTilingController *__headerAssetWidgetTilingController;
    PXWidgetComposition *__composition;
    PXPhotosDetailsSpecManager *__specManager;
    NSMutableArray *__widgetDisablingDimmingViews;
    PXWidgetSpec *__widgetSpec;
    PXSwipeSelectionManager *__swipeSelectionManager;
    PXAssetCollectionActionController *__previewActionController;
    _PXPhotosDetailsPreviewOrbContext *__previewOrbContext;
    Class __barsControllerClass;
    id<PXUIWidget> __previewWidget;
    UIView *__headerTileView;
    CDUnknownBlockType __ppt_allWidgetLoadingCompleteHandler;
    id<UIViewControllerPreviewing> __previewingContext;
    PXBarsController *_barsController;
    id<PXActionPerformerDelegate> _actionPerformerDelegate;
    unsigned long long _occludedContentEdges;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property (readonly, nonatomic) Class _barsControllerClass; // @synthesize _barsControllerClass=__barsControllerClass;
@property (readonly, nonatomic) PXWidgetComposition *_composition; // @synthesize _composition=__composition;
@property (nonatomic, setter=_setHasAppeared:) BOOL _hasAppeared; // @synthesize _hasAppeared=__hasAppeared;
@property (readonly, nonatomic) PXTilingController *_headerAssetWidgetTilingController; // @synthesize _headerAssetWidgetTilingController=__headerAssetWidgetTilingController;
@property (strong, nonatomic, setter=_setHeaderTileView:) UIView *_headerTileView; // @synthesize _headerTileView=__headerTileView;
@property (readonly, nonatomic) PXPhotosDetailsHeaderTileWidget *_headerWidget; // @synthesize _headerWidget=__headerWidget;
@property (copy, nonatomic, setter=_ppt_setAllWidgetLoadingCompleteHandler:) CDUnknownBlockType _ppt_allWidgetLoadingCompleteHandler; // @synthesize _ppt_allWidgetLoadingCompleteHandler=__ppt_allWidgetLoadingCompleteHandler;
@property (strong, nonatomic, setter=_setPreviewActionController:) PXAssetCollectionActionController *_previewActionController; // @synthesize _previewActionController=__previewActionController;
@property (strong, nonatomic, setter=_setPreviewOrbContext:) _PXPhotosDetailsPreviewOrbContext *_previewOrbContext; // @synthesize _previewOrbContext=__previewOrbContext;
@property (readonly, nonatomic) id<PXUIWidget> _previewWidget; // @synthesize _previewWidget=__previewWidget;
@property (strong, nonatomic, setter=_setPreviewingContext:) id<UIViewControllerPreviewing> _previewingContext; // @synthesize _previewingContext=__previewingContext;
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property (nonatomic, setter=_setShouldFocusHeader:) BOOL _shouldFocusHeader; // @synthesize _shouldFocusHeader=__shouldFocusHeader;
@property (readonly, nonatomic) PXPhotosDetailsSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property (strong, nonatomic, setter=_setSwipeSelectionManager:) PXSwipeSelectionManager *_swipeSelectionManager; // @synthesize _swipeSelectionManager=__swipeSelectionManager;
@property (readonly, nonatomic) PXPhotosDetailsViewModel *_viewModel; // @synthesize _viewModel=__viewModel;
@property (readonly, nonatomic) NSMutableArray *_widgetDisablingDimmingViews; // @synthesize _widgetDisablingDimmingViews=__widgetDisablingDimmingViews;
@property (readonly, nonatomic) NSMapTable *_widgetOptions; // @synthesize _widgetOptions=__widgetOptions;
@property (strong, nonatomic, setter=_setWidgetSpec:) PXWidgetSpec *_widgetSpec; // @synthesize _widgetSpec=__widgetSpec;
@property (readonly, nonatomic) NSArray *_widgets; // @synthesize _widgets=__widgets;
@property (weak, nonatomic) id<PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property (readonly, nonatomic) PXBarsController *barsController; // @synthesize barsController=_barsController;
@property (nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property (readonly, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (nonatomic) unsigned long long occludedContentEdges; // @synthesize occludedContentEdges=_occludedContentEdges;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly, nonatomic) BOOL shouldUpdateStatusBarTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_dismissSelfIfSafeAnimated:(BOOL)arg1;
- (void)_ensureComposition;
- (void)_ensureScrollViewController;
- (void)_handleWidgetsLoadingDelay;
- (void)_invalidateBarSpec;
- (void)_invalidateCompositionSpec;
- (void)_invalidateWidgetSpec;
- (void)_loadComposition;
- (void)_loadWidgets;
- (unsigned long long)_optionsForWidget:(id)arg1;
- (void)_performAddToMemoriesAnimation;
- (id)_photosDetailsContextForTransition:(id)arg1;
- (id)_photosDetailsContextForTransitionWithViewController:(id)arg1;
- (void)_ppt_informAllWidgetsLoadedHandlerIfNeeded;
- (id)_regionOfInterestForContext:(id)arg1;
- (BOOL)_shouldShowMovieHeader;
- (void)_updateAllWidgetsFaceModeState;
- (void)_updateAllWidgetsSelectionState;
- (void)_updateAllWidgetsSpec;
- (void)_updateBarSpec;
- (void)_updateCompositionSpec;
- (void)_updatePreviewActionController;
- (void)_updateScrollViewControllerContentInset;
- (void)_updateStatusBarTitle;
- (void)_updateTitleAndSubtitle;
- (void)_updateWidgetDisablingWithAnimationOptions:(id)arg1;
- (void)_updateWidgetSpec;
- (id)_widgetAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)ppt_performBlockAfterAllWidgetLoadingCompletes:(CDUnknownBlockType)arg1;
- (void)ppt_toggleDiscloseWidgets;
- (struct CGSize)preferredContentSize;
- (id)preferredFocusEnvironments;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
- (id)previewActionItems;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)purgeIfPossible;
- (BOOL)px_canPerformPinchTransitionWithMasterViewController:(id)arg1;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (BOOL)px_canPerformZoomTransitionWithMasterViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (BOOL)px_isSnapBackDestination;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)removeBackgroundColorForTransition:(id)arg1;
- (void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;
- (void)scrollRegionOfInterestToVisible:(id)arg1 forTransition:(id)arg2;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (id)standaloneMapViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)widgetComposition:(id)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id)arg2;
- (long long)widgetComposition:(id)arg1 loadingPriorityForWidget:(id)arg2;
- (BOOL)widgetComposition:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
- (BOOL)widgetComposition:(id)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id)arg2;
- (struct NSObject *)widgetComposition:(id)arg1 viewControllerHostingWidget:(id)arg2;
- (BOOL)widgetComposition:(id)arg1 widget:(id)arg2 transitionToViewController:(id)arg3 withTransitionType:(long long)arg4;
- (void)widgetComposition:(id)arg1 widgetHasLoadedContentDataDidChange:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

@end

