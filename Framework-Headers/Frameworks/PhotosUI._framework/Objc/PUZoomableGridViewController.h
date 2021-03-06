//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PUMagnfiedViewControllerDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXCloudQuotaControllerDelegate-Protocol.h>
#import <PhotosUI/PXPhotosLibraryFooterViewModelPresentationDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, NSTimer, PUGridMagnifiedImageViewController, PUGridPinchGestureRecognizer, PUGridZoomLevelInfo, PUMomentsZoomLevelManager, PUZoomableGridTransition, PUZoomableGridViewControllerSpec, PXCPLUIStatusProvider, PXCloudQuotaController, UITapGestureRecognizer;

@interface PUZoomableGridViewController : PUPhotosGridViewController <PXChangeObserver, PXCloudQuotaControllerDelegate, PUMagnfiedViewControllerDelegate, PXPhotosLibraryFooterViewModelPresentationDelegate>
{
    BOOL _isDisplayingGlobalFooterView;
    BOOL _isDisplayingEmptyPlaceholderView;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaController *_cloudQuotaController;
    BOOL _iCPLEnabled;
    BOOL _globalFooterDidAutoScroll;
    NSTimer *_globalFooterAutoScrollMinimumIdleTimer;
    BOOL _simulateGlobalFooterImportantInformationUpdates;
    NSTimer *_globalFooterImportantInformationUpdatesTimer;
    BOOL __hasAppearedOnce;
    NSArray *__syncProgressAlbums;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    unsigned long long _zoomLevel;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
    PUGridZoomLevelInfo *__zoomLevelInfo;
    PUZoomableGridTransition *_currentGridZoomTransitionInfo;
    NSIndexPath *__transitionExplicitAnchorIndexPath;
    NSIndexPath *__lastZoomInTransitionAnchorIndexPath;
    UITapGestureRecognizer *__tapGestureRecognizer;
    PUGridPinchGestureRecognizer *__gridPinchGestureRecognizer;
    PUGridMagnifiedImageViewController *_magnifiedImageViewController;
    double __lastUpdateWidth;
    unsigned long long __magnifierState;
    NSIndexPath *__dynamicLayoutTransitionAnchorIndexPath;
    struct CGPoint __frozeMagnifierAtPosition;
}

@property (strong, nonatomic, setter=_setDynamicLayoutTransitionAnchorIndexPath:) NSIndexPath *_dynamicLayoutTransitionAnchorIndexPath; // @synthesize _dynamicLayoutTransitionAnchorIndexPath=__dynamicLayoutTransitionAnchorIndexPath;
@property (nonatomic, setter=_setFrozeMagnifierAtPosition:) struct CGPoint _frozeMagnifierAtPosition; // @synthesize _frozeMagnifierAtPosition=__frozeMagnifierAtPosition;
@property (strong, nonatomic, setter=_setGridPinchGestureRecognizer:) PUGridPinchGestureRecognizer *_gridPinchGestureRecognizer; // @synthesize _gridPinchGestureRecognizer=__gridPinchGestureRecognizer;
@property (nonatomic, setter=_setHasAppearedOnce:) BOOL _hasAppearedOnce; // @synthesize _hasAppearedOnce=__hasAppearedOnce;
@property (nonatomic, setter=_setLastUpdateWidth:) double _lastUpdateWidth; // @synthesize _lastUpdateWidth=__lastUpdateWidth;
@property (strong, nonatomic, setter=_setLastZoomInTransitionAnchorIndexPath:) NSIndexPath *_lastZoomInTransitionAnchorIndexPath; // @synthesize _lastZoomInTransitionAnchorIndexPath=__lastZoomInTransitionAnchorIndexPath;
@property (nonatomic, setter=_setMagnifierState:) unsigned long long _magnifierState; // @synthesize _magnifierState=__magnifierState;
@property (readonly, nonatomic) NSArray *_syncProgressAlbums; // @synthesize _syncProgressAlbums=__syncProgressAlbums;
@property (strong, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property (strong, nonatomic, setter=_setTransitionExplicitAnchorIndexPath:) NSIndexPath *_transitionExplicitAnchorIndexPath; // @synthesize _transitionExplicitAnchorIndexPath=__transitionExplicitAnchorIndexPath;
@property (readonly, nonatomic) PUGridZoomLevelInfo *_zoomLevelInfo; // @synthesize _zoomLevelInfo=__zoomLevelInfo;
@property (readonly, nonatomic) PUZoomableGridTransition *currentGridZoomTransitionInfo;
@property (strong, nonatomic, setter=_setCurrentGridZoomTransitionInfo:) PUZoomableGridTransition *currentGridZoomTransitionInfo; // @synthesize currentGridZoomTransitionInfo=_currentGridZoomTransitionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, setter=_setMagnifiedImageViewController:) PUGridMagnifiedImageViewController *magnifiedImageViewController; // @synthesize magnifiedImageViewController=_magnifiedImageViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property (readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // @synthesize zoomLevelManager=_zoomLevelManager;
@property (strong, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridSpec; // @synthesize zoomableGridSpec=_zoomableGridSpec;

+ (id)_createCPLUIStatusProvider;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_beginInteractiveTransitionWithReferenceItemPath:(id)arg1 zoomingOut:(BOOL)arg2;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (void)_conditionallyRevealPhotosGlobalFooterView;
- (void)_conditionallyRevealPhotosGlobalFooterViewWithLastUserScrollTime:(double)arg1;
- (void)_configureGlobalFooterImportantInformationUpdatesTimer;
- (void)_configureMagnifiedImageViewController:(id)arg1 forIndexPath:(id)arg2 gestureLocationInWindow:(struct CGPoint)arg3;
- (void)_didEndDisplayingGlobalFooterView;
- (BOOL)_disallowNavigationToHigherZoomLevel;
- (unsigned long long)_eventSourceFromZoomLevel:(unsigned long long)arg1;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1;
- (void)_globalFooterDidChange;
- (BOOL)_globalFooterHasImportantInformation;
- (void)_globalFooterHasImportantInformationDidChange;
- (void)_handleGridPinchGestureRecognizer:(id)arg1;
- (void)_handlePreviewGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;
- (void)_invalidateSyncProgressAlbums;
- (id)_itemPathForLocationInGesture:(id)arg1;
- (void)_needsCPLInformationDidChange;
- (void)_reclaimCollectionView;
- (void)_setCplUIStatusProvider:(id)arg1;
- (BOOL)_shouldRevealPhotosGlobalFooterView;
- (BOOL)_shouldShowCPLInformationInGlobalFooter;
- (void)_updateMagnifierWithGesture:(id)arg1;
- (void)_updateTransitionsIfNecessary;
- (BOOL)allowSlideshowButton;
- (id)bestTransitionReferenceItemIndexPathOutIsFromLastTransition:(BOOL *)arg1 outIsExplicit:(BOOL *)arg2;
- (BOOL)canBeginStackCollapseTransition;
- (BOOL)canDisplayEditButton;
- (BOOL)canDragIn;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)arg1;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (BOOL)collectionViewPointInSectionHeader:(struct CGPoint)arg1;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (struct CGPoint)contentOffsetForPreheating;
- (struct CGSize)contentSizeForPreheating;
- (long long)dateRangeFormatterPreset;
- (void)dealloc;
- (void)didEndDisplayingEmptyPlaceholderView;
- (void)didReceiveMemoryWarning;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 buttonAction:(CDUnknownBlockType *)arg4;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out BOOL *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)gridSettings:(id)arg1 changedValueForKey:(id)arg2;
- (void)gridZoomTransitionDidFinish:(BOOL)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (long long)imageDeliveryMode;
- (struct CGSize)imageRequestItemSize;
- (id)imageWithSize:(struct CGSize)arg1 forIndexPath:(id)arg2;
- (id)initWithSpec:(id)arg1 zoomLevelManager:(id)arg2 zoomLevel:(unsigned long long)arg3;
- (void)installGestureRecognizers;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (BOOL)isCurrentCollectionViewDataSource;
- (BOOL)isTransitionAutoAdjustContentOffsetEnabled;
- (id)magnifiedImageViewControllerCreatingIfNecessary:(BOOL)arg1;
- (void)navigateToLowerZoomLevelWithReferenceItemPath:(id)arg1;
- (id)newGridLayout;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)oneUpPresentationOrigin;
- (void)ppt_navigateToPhotosDetailsAnimated:(BOOL)arg1;
- (void)preheatAssets;
- (void)prepareForTransitionToZoomableViewController:(id)arg1 anchorItemIndexPath:(id)arg2 anchorShiftsColumns:(BOOL)arg3 animated:(BOOL)arg4 interactive:(BOOL)arg5;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;
- (id)presentingViewControllerForViewModel:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (BOOL)pu_shouldActAsTabRootViewController;
- (void)reclaimCollectionView;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(BOOL)arg4;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (BOOL)shouldPreventRevealInMomentAction;
- (void)tearDownMagnifiedImageViewController;
- (void)uninstallGestureRecognizers;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateLayoutMetrics;
- (BOOL)updateSpec;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsGlobalFooter;
- (BOOL)wantsPlaceholderView;
- (void)willDisplayEmptyPlaceholderView;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;

@end

