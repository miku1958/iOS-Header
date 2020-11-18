//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMemoriesUITileSourceDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUICore/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSString, PXBasicUIViewTileAnimator, PXMemoriesDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesSpec, PXMemoriesSpecManager, PXMemoriesUITileSource, PXSectionedLayoutEngine, PXSectionedObjectReference, PXTilingController, PXTouchingUIGestureRecognizer, PXUIScrollViewController, PXUITapGestureRecognizer, UILongPressGestureRecognizer;
@protocol UIViewControllerPreviewing;

@interface PXMemoriesUIViewController : UIViewController <PXChangeObserver, PXActionPerformerDelegate, PXSectionedDataSourceManagerObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, UIViewControllerPreviewingDelegate, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController>
{
    struct {
        BOOL layoutEngine;
        BOOL layout;
    } _updateFlags;
    BOOL __performNextTransitionWithoutAnimation;
    BOOL _embedded;
    PXMemoriesDataSourceManager *_dataSourceManager;
    PXMemoriesFeedViewControllerHelper *__helper;
    PXMemoriesSpecManager *__specManager;
    PXMemoriesUITileSource *__tileSource;
    PXSectionedLayoutEngine *__layoutEngine;
    PXSectionedObjectReference *_anchorMemoryReference;
    PXSectionedObjectReference *__highlightedMemoryReference;
    PXSectionedObjectReference *__actionPresentationMemoryReference;
    PXSectionedObjectReference *__activatedMemoryReference;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXMemoriesSpec *__spec;
    unsigned long long __memoriesStyle;
    PXUITapGestureRecognizer *__tapRecognizer;
    UILongPressGestureRecognizer *__longPressRecognizer;
    PXTouchingUIGestureRecognizer *__touchRecognizer;
    id<UIViewControllerPreviewing> __previewingItem;
    unsigned long long _pageIndex;
    PXTilingController *_tilingController;
    PXUIScrollViewController *_scrollViewController;
    struct CGPoint _anchorMemoryOrigin;
}

@property (strong, nonatomic, setter=_setActionPresentationMemoryReference:) PXSectionedObjectReference *_actionPresentationMemoryReference; // @synthesize _actionPresentationMemoryReference=__actionPresentationMemoryReference;
@property (strong, nonatomic, setter=_setActivatedMemoryReference:) PXSectionedObjectReference *_activatedMemoryReference; // @synthesize _activatedMemoryReference=__activatedMemoryReference;
@property (readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // @synthesize _helper=__helper;
@property (strong, nonatomic, setter=_setHighlightedMemoryReference:) PXSectionedObjectReference *_highlightedMemoryReference; // @synthesize _highlightedMemoryReference=__highlightedMemoryReference;
@property (readonly, nonatomic) PXSectionedLayoutEngine *_layoutEngine; // @synthesize _layoutEngine=__layoutEngine;
@property (strong, nonatomic, setter=_setLongPressRecognizer:) UILongPressGestureRecognizer *_longPressRecognizer; // @synthesize _longPressRecognizer=__longPressRecognizer;
@property (readonly, nonatomic) unsigned long long _memoriesStyle; // @synthesize _memoriesStyle=__memoriesStyle;
@property (nonatomic, setter=_setPerformNextTransitionWithoutAnimation:) BOOL _performNextTransitionWithoutAnimation; // @synthesize _performNextTransitionWithoutAnimation=__performNextTransitionWithoutAnimation;
@property (strong, nonatomic, setter=_setPreviewingItem:) id<UIViewControllerPreviewing> _previewingItem; // @synthesize _previewingItem=__previewingItem;
@property (strong, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec; // @synthesize _spec=__spec;
@property (readonly, nonatomic) PXMemoriesSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // @synthesize _tapRecognizer=__tapRecognizer;
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property (readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // @synthesize _tileSource=__tileSource;
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer; // @synthesize _touchRecognizer=__touchRecognizer;
@property (nonatomic, setter=_setAnchorMemoryOrigin:) struct CGPoint anchorMemoryOrigin; // @synthesize anchorMemoryOrigin=_anchorMemoryOrigin;
@property (strong, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference; // @synthesize anchorMemoryReference=_anchorMemoryReference;
@property (readonly, nonatomic) PXMemoriesDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmbedded) BOOL embedded; // @synthesize embedded=_embedded;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
@property (readonly, nonatomic) long long userInterfaceFeature;

- (void).cxx_destruct;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (void)_handleScrollViewLongPress:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleTouch:(id)arg1;
- (struct PXSimpleIndexPath)_indexPathForMemoryAtPoint:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)_indexPathForMemoryInScrollViewAtPoint:(struct CGPoint)arg1;
- (void)_invalidateLayout;
- (struct PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (BOOL)_needsUpdate;
- (id)_photosDetailsContextForIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_presentActionsForMemoryReference:(id)arg1;
- (void)_reconfigureTargetLayout;
- (void)_saveAnchor;
- (void)_setNeedsUpdate;
- (id)_sourceViewForMemoryActionsController;
- (void)_updateIfNeeded;
- (void)_updateLayoutEngineIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateLongPressGestureRecognizer;
- (void)_updatePreviewing;
- (void)_updateScrollViewControllerContentInset;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (id)createNewLayoutGenerator;
- (void)datasourceManagerDidChange;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1 style:(unsigned long long)arg2;
- (void)invalidateLayoutEngine;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

@end

