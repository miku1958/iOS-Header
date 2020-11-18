//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXGViewSource-Protocol.h>
#import <PhotosUICore/PXPhotosGridFooterPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGridFooterStatusControllerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosSectionHeaderLayoutViewProvider-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDirectionSelectionScrollableDelegate-Protocol.h>
#import <PhotosUICore/PXZoomablePhotosInteractionDelegate-Protocol.h>

@class NSString, PXAssetsDataSourceCountsController, PXExtendedTraitCollection, PXGView, PXMediaProvider, PXPhotosGridFooterPresentation, PXPhotosGridFooterStatusController, PXPhotosLayout, PXPhotosViewModel, PXUpdater, PXZoomablePhotosInteraction, UIView;
@protocol PXGAXResponder, PXPhotosContentControllerDelegate, PXPhotosViewDelegate, PXPhotosViewEventTracker;

@interface PXPhotosContentController : NSObject <PXGViewSource, PXPhotosSectionHeaderLayoutViewProvider, PXScrollViewControllerObserver, PXPhotosGridFooterStatusControllerDelegate, PXPhotosGridFooterPresentationDelegate, PXZoomablePhotosInteractionDelegate, PXPhotosLayoutDelegate, PXGAXResponder, PXSectionedDirectionSelectionScrollableDelegate>
{
    BOOL _needsCountsInitially;
    PXPhotosGridFooterStatusController *_footerStatusController;
    PXPhotosGridFooterPresentation *_footerPresentation;
    id<PXGAXResponder> _axNextResponder;
    PXGView *_gridView;
    PXPhotosViewModel *_viewModel;
    PXMediaProvider *_mediaProvider;
    id<PXPhotosViewEventTracker> _eventTracker;
    PXAssetsDataSourceCountsController *_countsController;
    id<PXPhotosContentControllerDelegate> _delegate;
    Class _customDecorationViewClass;
    UIView *_headerView;
    PXExtendedTraitCollection *_traitCollection;
    PXUpdater *_updater;
    id _dataSourceManagerPauseToken;
    unsigned long long _viewDelegateRespondsTo;
    id<PXPhotosViewDelegate> _viewDelegate;
    PXZoomablePhotosInteraction *_zoomablePhotosInteraction;
}

@property (weak, nonatomic) id<PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *countsController; // @synthesize countsController=_countsController;
@property (strong, nonatomic) Class customDecorationViewClass; // @synthesize customDecorationViewClass=_customDecorationViewClass;
@property (strong, nonatomic) id dataSourceManagerPauseToken; // @synthesize dataSourceManagerPauseToken=_dataSourceManagerPauseToken;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<PXPhotosViewEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property (readonly, nonatomic) PXPhotosGridFooterPresentation *footerPresentation; // @synthesize footerPresentation=_footerPresentation;
@property (readonly, nonatomic) PXPhotosGridFooterStatusController *footerStatusController; // @synthesize footerStatusController=_footerStatusController;
@property (readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (readonly, nonatomic) PXPhotosLayout *layout;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) BOOL needsCountsInitially; // @synthesize needsCountsInitially=_needsCountsInitially;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property (readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property (readonly, weak, nonatomic) id<PXPhotosViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property (readonly, nonatomic) unsigned long long viewDelegateRespondsTo; // @synthesize viewDelegateRespondsTo=_viewDelegateRespondsTo;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property (readonly, nonatomic) PXZoomablePhotosInteraction *zoomablePhotosInteraction; // @synthesize zoomablePhotosInteraction=_zoomablePhotosInteraction;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath)_indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;
- (void)_invalidateHasScrollableContent;
- (void)_invalidateHeaderView;
- (struct PXSimpleIndexPath)_selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;
- (void)_setNeedsUpdate;
- (void)_updateHasScrollableContent;
- (void)_updateHeaderView;
- (id)assetHitTestResultAtPoint:(struct CGPoint)arg1 coordinateSpace:(id)arg2;
- (id)axContainingViewForAXGroup:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (BOOL)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;
- (void)contentViewDidAppear:(BOOL)arg1;
- (void)contentViewDidScrollToInitialPosition;
- (void)contentViewWillAppear:(BOOL)arg1;
- (void)dismissPresentedViewControllerForFooterPresentation:(id)arg1;
- (void)enumerateAssetHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAssetHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)footerPresentation:(id)arg1 presentViewController:(id)arg2;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 coordinateSpace:(id)arg2;
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDataSource:(id)arg3;
- (id)init;
- (id)initWithConfiguration:(id)arg1 traitCollection:(id)arg2;
- (id)photosLayout:(id)arg1 animationForProposedAnimation:(id)arg2;
- (id)presentingViewControllerForFooterStatusController:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2;
- (void)resumeDataSourceChangesIfNeeded;
- (void)scrollToEdge:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scrollToInitialPositionAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)scrollToRevealAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scrollToRevealAssetReference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scrollToRevealAssetReference:(id)arg1 padding:(struct UIEdgeInsets)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (id)sectionHeaderLayout:(id)arg1 viewForSpriteReference:(id)arg2;
- (struct PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2;
- (long long)selectionBasisForSelectionManager:(id)arg1;
- (struct PXSimpleIndexPath)selectionManager:(id)arg1 indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3;
- (id)selectionManager:(id)arg1 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath)arg2 andIndexPath:(struct PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4;
- (void)selectionManager:(id)arg1 revealObjectAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)setViewDelegate:(id)arg1;
- (void)stopForceIncludingAllAssetsInDataSource;
- (void)suspendDataSourceChangesWithTimeout:(double)arg1;
- (void)updateIfNeeded;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (BOOL)viewDelegateRespondsTo:(unsigned long long)arg1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)zoomablePhotosInteraction:(id)arg1 assetReferenceAtLocation:(struct CGPoint)arg2;
- (BOOL)zoomablePhotosInteractionShouldBegin:(id)arg1;
- (void)zoomablePhotosInteractionWillBegin:(id)arg1;

@end
