//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryFooterViewModelPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXMutableCuratedLibraryFooterController-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSString, NSTimer, PXAssetsDataSourceCountsController, PXCuratedLibraryFooterViewModel, PXCuratedLibraryLayout, PXCuratedLibraryStyleGuide, PXCuratedLibraryViewModel, PXGView, PXPhotosGlobalFooterView, PXUpdater, UIView;
@protocol PXCuratedLibraryFooterControllerDelegate;

@interface PXCuratedLibraryFooterController : PXObservable <PXMutableCuratedLibraryFooterController, PXChangeObserver, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCuratedLibraryFooterViewModelPresentationDelegate>
{
    double _lastUserScrollTime;
    BOOL _footerDidAutoScroll;
    NSTimer *_footerAutoScrollMinimumIdleTimer;
    PXCuratedLibraryFooterViewModel *_footerViewModel;
    long long _presentedZoomLevel;
    PXPhotosGlobalFooterView *_reusableFooterView;
    BOOL _isUpdatingFooter;
    BOOL _wantsFooterMask;
    BOOL _hasAppeared;
    BOOL _wantsFooter;
    BOOL _isFooterVisible;
    BOOL _hasAppearedOnce;
    BOOL _footerNeedsReveal;
    BOOL _footerFullyMasked;
    id<PXCuratedLibraryFooterControllerDelegate> _delegate;
    double _footerMaskVerticalOffset;
    PXGView *_gridView;
    PXCuratedLibraryLayout *_layout;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryStyleGuide *_styleGuide;
    PXAssetsDataSourceCountsController *_itemCountsController;
    PXUpdater *_updater;
    PXCuratedLibraryFooterViewModel *_footerViewModelIfLoaded;
    PXPhotosGlobalFooterView *_footerView;
    UIView *_footerMaskView;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXCuratedLibraryFooterControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFooterFullyMasked) BOOL footerFullyMasked; // @synthesize footerFullyMasked=_footerFullyMasked;
@property (readonly, nonatomic) double footerMaskVerticalOffset; // @synthesize footerMaskVerticalOffset=_footerMaskVerticalOffset;
@property (strong, nonatomic) UIView *footerMaskView; // @synthesize footerMaskView=_footerMaskView;
@property (nonatomic) BOOL footerNeedsReveal; // @synthesize footerNeedsReveal=_footerNeedsReveal;
@property (strong, nonatomic) PXPhotosGlobalFooterView *footerView; // @synthesize footerView=_footerView;
@property (strong, nonatomic) PXCuratedLibraryFooterViewModel *footerViewModelIfLoaded; // @synthesize footerViewModelIfLoaded=_footerViewModelIfLoaded;
@property (readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
@property (readonly, nonatomic) BOOL hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property (nonatomic) BOOL hasAppearedOnce; // @synthesize hasAppearedOnce=_hasAppearedOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isFooterVisible; // @synthesize isFooterVisible=_isFooterVisible;
@property (readonly, nonatomic) BOOL isGridViewVisible;
@property (readonly, nonatomic) BOOL isPullingFooter;
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController; // @synthesize itemCountsController=_itemCountsController;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // @synthesize styleGuide=_styleGuide;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property (nonatomic) BOOL wantsFooter; // @synthesize wantsFooter=_wantsFooter;
@property (readonly, nonatomic) BOOL wantsFooterMask; // @synthesize wantsFooterMask=_wantsFooterMask;

+ (long long)_modeForZoomLevel:(long long)arg1;
- (void).cxx_destruct;
- (void)_conditionallyRevealPhotosFooterView;
- (void)_conditionallyRevealPhotosFooterViewWithLastUserScrollTime:(double)arg1;
- (void)_footerHasImportantInformationDidChange;
- (void)_invalidateFooter;
- (void)_invalidateFooterAlpha;
- (void)_invalidateFooterAndMaskVisibility;
- (void)_invalidateFooterMaskViewFrame;
- (void)_invalidateFooterMode;
- (void)_invalidateIsFooterVisible;
- (void)_invalidateWantsFooter;
- (void)_resetFooterViewModel;
- (void)_setNeedsUpdate;
- (BOOL)_shouldRevealPhotosFooterView;
- (BOOL)_shouldShowFooterForGridViewState;
- (BOOL)_shouldShowFooterForPresentedZoomLevel;
- (void)_updateFooter;
- (void)_updateFooterAlpha;
- (void)_updateFooterAndMaskVisibility;
- (void)_updateFooterMaskViewFrame;
- (void)_updateFooterMode;
- (void)_updateIsFooterVisible;
- (void)_updateWantsFooter;
- (void)_viewDidStartScrolling;
- (void)didPerformChanges;
- (id)footerViewModel;
- (double)footerVisibleAmountIncludingSafeAreaInsets:(BOOL)arg1;
- (id)init;
- (id)initWithGridView:(id)arg1 layout:(id)arg2 viewModel:(id)arg3 itemsCountsController:(id)arg4;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (id)presentingViewControllerForFooterViewModel:(id)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)setFooterMaskVerticalOffset:(double)arg1;
- (void)setWantsFooterMask:(BOOL)arg1;
- (void)viewDidAppear;

@end

