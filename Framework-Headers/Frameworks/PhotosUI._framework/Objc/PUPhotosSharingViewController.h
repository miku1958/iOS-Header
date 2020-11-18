//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PHAssetCollectionDataSource-Protocol.h>
#import <PhotosUI/PUActivityViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PUOneUpPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUPhotoViewContentHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingCollectionViewLayoutDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate-Protocol.h>
#import <PhotosUI/PUTransitionViewAnimatorDelegate-Protocol.h>
#import <PhotosUI/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUI/UIActivityViewControllerDelegate-Protocol.h>
#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSPredicate, NSString, PHAsset, PHCachingImageManager, PHFetchResult, PHPerson, PUActivityViewController, PUOneUpAssetTransitionInfo, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosSharingCollectionViewLayout, PUPhotosSharingTransitionContext, PUPhotosSharingViewControllerSpec, PUPhotosZoomingSharingGridCell, PUScrollViewSpeedometer, PUTransitionViewAnimator, PXAssetBadgeManager, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer, UIView;
@protocol OS_os_log, PUPhotosSharingPresentationCoordinator, PUPhotosSharingViewControllerDelegate;

@interface PUPhotosSharingViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, UIActivityViewControllerDelegate, PUTransitionViewAnimatorDelegate, PUScrollViewSpeedometerDelegate, PUActivityViewControllerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController>
{
    PUScrollViewSpeedometer *_speedometer;
    NSMutableDictionary *_resultsForAssetCollection;
    NSMutableDictionary *_assetItemsByAssetIdentifier;
    NSMapTable *_indexPathsByOptionView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSIndexPath *_inFlightReferenceIndexPath;
    CDUnknownBlockType _postRotationHandler;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    BOOL _shouldScrollToSelection;
    BOOL _didAttemptShareViaAirDrop;
    BOOL _inFlightRotation;
    BOOL _defaultIrisEnabled;
    BOOL _shouldPlayVitalityHintAfterViewDidAppear;
    BOOL _willLayoutSubviewsWasCalled;
    double _cachedEmbeddedActivityViewHeight;
    BOOL _allowAirPlayActivity;
    BOOL __viewInSyncWithModel;
    BOOL _lockScreenCamera;
    BOOL __loopingPlaybackAllowed;
    PHFetchResult *_photoCollectionsFetchResult;
    NSPredicate *_filterPredicate;
    PUPhotoSelectionManager *_photoSelectionManager;
    NSArray *_excludedActivityTypes;
    struct __CFString *_aggregateKey;
    PHPerson *_person;
    id<PUPhotosSharingViewControllerDelegate> _delegate;
    CDUnknownBlockType _readyToInteractHandler;
    CDUnknownBlockType _ppt_readyToInteractHandler;
    id<PUPhotosSharingPresentationCoordinator> _presentationCoordinator;
    PUPhotosSharingViewControllerSpec *_spec;
    UICollectionView *_mainCollectionView;
    UIView *_embeddedActivityView;
    PUPhotosSharingCollectionViewLayout *_mainCollectionViewLayout;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    PHCachingImageManager *__cachingImageManager;
    NSMutableSet *__preheatedAssets;
    PUActivityViewController *__embeddedActivityViewController;
    PUActivityViewController *__unembeddedActivityViewController;
    PUActivityViewController *__preheatedActivityViewController;
    UICollectionViewLayout *__transitionLayout;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    PUOneUpAssetTransitionInfo *_assetTransitionInfo;
    PHAsset *__lastKnownReferenceAsset;
    NSIndexPath *__lastKnownReferenceIndexPath;
    PXAssetBadgeManager *__badgeManager;
    CDUnknownBlockType __pptOnDidEndScrollingBlock;
    NSMutableArray *__photoViewLoaderBlocks;
    NSMutableArray *__livePhotoViewLoaderBlocks;
    struct CGRect __previousPreheatRect;
}

@property (readonly, nonatomic) PUActivityViewController *_activityViewController;
@property (readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // @synthesize _badgeManager=__badgeManager;
@property (readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property (strong, nonatomic, setter=_setEmbeddedActivityViewController:) PUActivityViewController *_embeddedActivityViewController; // @synthesize _embeddedActivityViewController=__embeddedActivityViewController;
@property (strong, nonatomic, setter=_setLastKnownReferenceAsset:) PHAsset *_lastKnownReferenceAsset; // @synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset;
@property (strong, nonatomic, setter=_setLastKnownReferenceIndexPath:) NSIndexPath *_lastKnownReferenceIndexPath; // @synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath;
@property (readonly, nonatomic) NSMutableArray *_livePhotoViewLoaderBlocks; // @synthesize _livePhotoViewLoaderBlocks=__livePhotoViewLoaderBlocks;
@property (nonatomic, getter=_isLoopingPlaybackAllowed, setter=_setLoopingPlaybackAllowed:) BOOL _loopingPlaybackAllowed; // @synthesize _loopingPlaybackAllowed=__loopingPlaybackAllowed;
@property (readonly, nonatomic) NSMutableArray *_photoViewLoaderBlocks; // @synthesize _photoViewLoaderBlocks=__photoViewLoaderBlocks;
@property (strong, nonatomic, setter=_setPhotoZoomAnimator:) PUTransitionViewAnimator *_photoZoomAnimator; // @synthesize _photoZoomAnimator=__photoZoomAnimator;
@property (strong, nonatomic, setter=_setPhotoZoomCell:) PUPhotosZoomingSharingGridCell *_photoZoomCell; // @synthesize _photoZoomCell=__photoZoomCell;
@property (strong, nonatomic, setter=_setPhotoZoomPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer; // @synthesize _photoZoomPinchGestureRecognizer=__photoZoomPinchGestureRecognizer;
@property (copy, nonatomic, setter=_pptSetOnDidEndScrollingBlock:) CDUnknownBlockType _pptOnDidEndScrollingBlock; // @synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock;
@property (strong, nonatomic, setter=_setPreheatedActivityViewController:) PUActivityViewController *_preheatedActivityViewController; // @synthesize _preheatedActivityViewController=__preheatedActivityViewController;
@property (strong, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // @synthesize _preheatedAssets=__preheatedAssets;
@property (nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property (strong, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property (strong, nonatomic, setter=_setUnembeddedActivityViewController:) PUActivityViewController *_unembeddedActivityViewController; // @synthesize _unembeddedActivityViewController=__unembeddedActivityViewController;
@property (nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) BOOL _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
@property (nonatomic) struct __CFString *aggregateKey; // @synthesize aggregateKey=_aggregateKey;
@property (nonatomic) BOOL allowAirPlayActivity; // @synthesize allowAirPlayActivity=_allowAirPlayActivity;
@property (readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property (strong, nonatomic) PUOneUpAssetTransitionInfo *assetTransitionInfo; // @synthesize assetTransitionInfo=_assetTransitionInfo;
@property (readonly, nonatomic) PHAsset *currentAsset;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotosSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, setter=_setEmbeddedActivityView:) UIView *embeddedActivityView; // @synthesize embeddedActivityView=_embeddedActivityView;
@property (copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property (readonly, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isLockScreenCamera) BOOL lockScreenCamera; // @synthesize lockScreenCamera=_lockScreenCamera;
@property (strong, nonatomic, setter=_setMainCollectionView:) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property (strong, nonatomic, setter=_setMainCollectionViewLayout:) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout; // @synthesize mainCollectionViewLayout=_mainCollectionViewLayout;
@property (strong, nonatomic) PHPerson *person; // @synthesize person=_person;
@property (readonly, nonatomic) PHFetchResult *photoCollectionsFetchResult; // @synthesize photoCollectionsFetchResult=_photoCollectionsFetchResult;
@property (strong, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property (strong, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
@property (copy, nonatomic) CDUnknownBlockType ppt_readyToInteractHandler; // @synthesize ppt_readyToInteractHandler=_ppt_readyToInteractHandler;
@property (weak, nonatomic) id<PUPhotosSharingPresentationCoordinator> presentationCoordinator; // @synthesize presentationCoordinator=_presentationCoordinator;
@property (copy, nonatomic) CDUnknownBlockType readyToInteractHandler; // @synthesize readyToInteractHandler=_readyToInteractHandler;
@property (readonly, nonatomic) NSObject<OS_os_log> *sharingLog;
@property (strong, nonatomic) PUPhotosSharingViewControllerSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityAssetItemForAsset:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)_activityViewControllerDidDismissWithActivityType:(id)arg1 didComplete:(BOOL)arg2;
- (void)_addActivityAssetItem:(id)arg1;
- (id)_assetAtIndexPath:(id)arg1;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (void)_cancel:(id)arg1;
- (struct CGRect)_collectionViewContentFrame;
- (id)_createActivityViewControllerForCurrentSelection;
- (void)_createActivityViewControllerIfNeeded;
- (id)_currentSelectedAssets;
- (double)_embeddedActivityViewHeight;
- (BOOL)_embedsActivityView;
- (void)_endZoomingForCell;
- (id)_firstSelectedIndexPath;
- (struct CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2;
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2 embeddedActivityViewFrame:(struct CGRect *)arg3;
- (void)_handleActivityViewControllerReadyToInteractCompletion;
- (void)_handleAnimatedImageResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4;
- (void)_handleLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_handleLoopingVideoRequestResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleSchedulingLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_handleSchedulingStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_handleSelectionOption:(id)arg1;
- (void)_handleStillImageRequestResult:(id)arg1 info:(id)arg2 forCell:(id)arg3 indexPath:(id)arg4;
- (void)_handleStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(double)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2;
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(long long)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (void)_invalidateEmbeddedActivityViewHeight;
- (BOOL)_isAnyAssetSelected;
- (id)_localizedSelectionTitle;
- (void)_next:(id)arg1;
- (long long)_numberOfItemsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (id)_optionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_performBlockWhenNotRotating:(CDUnknownBlockType)arg1;
- (void)_performPreheatingOfActivityViewController;
- (id)_photoCollectionAtIndex:(long long)arg1;
- (void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg1;
- (void)_prepareActivityViewControllerForUse;
- (void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2 needsReloadData:(BOOL)arg3;
- (void)_removeActivityAssetItem:(id)arg1;
- (id)_requiredActivityViewController;
- (void)_resetPreheating;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;
- (void)_setSelected:(BOOL)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_shouldShowAsset:(id)arg1;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_updateAdditionalContentForAsset:(id)arg1 cell:(id)arg2;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updateLastKnownReferenceIndexPath;
- (void)_updateMainViewAnimated:(BOOL)arg1;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
- (void)_updateOptionView:(id)arg1 atIndexPath:(id)arg2;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_updatePreheatedAssets;
- (void)_updateVisibleCells;
- (id)_updatedActivityAssetItemsForAssets:(id)arg1;
- (id)_validIndexPathFromIndexPath:(id)arg1;
- (BOOL)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(BOOL)arg1;
- (struct CGRect)frameForBadgeOfKind:(id)arg1 forItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResults:(id)arg2 filterPredicate:(id)arg3 selection:(id)arg4;
- (double)layout:(id)arg1 collectionView:(id)arg2 bottomBadgeInsetforItemAtIndexPath:(id)arg3;
- (void)layout:(id)arg1 collectionView:(id)arg2 itemAtIndexPath:(id)arg3 didChangeToVisibleFrame:(struct CGRect)arg4;
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(double *)arg3;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForBadgeViewOfKind:(id)arg3 forItemAtIndexPath:(id)arg4;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (struct CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)photoViewContentHelper:(id)arg1 livePhotoWillBeginPlaybackWithStyle:(long long)arg2;
- (void)ppt_faultInScollViewContentSize;
- (BOOL)ppt_scrollToAssetAtRelativeIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)ppt_scrollView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;
- (void)setOneUpPhotosSharingTransitionInfo:(id)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (id)transitionCollectionView;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

