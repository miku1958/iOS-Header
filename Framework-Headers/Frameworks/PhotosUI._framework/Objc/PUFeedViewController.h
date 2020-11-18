//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PLCloudFeedNavigating-Protocol.h>
#import <PhotosUI/PLNavigableCloudFeedViewController-Protocol.h>
#import <PhotosUI/PUAlbumStreamActivityDelegate-Protocol.h>
#import <PhotosUI/PUFeedCollectionViewLayoutDelegate-Protocol.h>
#import <PhotosUI/PUFeedImageCellDelegate-Protocol.h>
#import <PhotosUI/PUFeedInvitationCellDelegate-Protocol.h>
#import <PhotosUI/PUFeedPlayerCellDelegate-Protocol.h>
#import <PhotosUI/PUFeedSectionInfosManagerDelegate-Protocol.h>
#import <PhotosUI/PUFeedTextCellDelegate-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotoBrowserZoomTransitionDelegate-Protocol.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>
#import <PhotosUI/UICollectionViewDragSource-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/UIViewControllerPreviewingDelegate-Protocol.h>
#import <PhotosUI/UIViewControllerPreviewingDelegate_Private-Protocol.h>
#import <PhotosUI/_UISettingsKeyObserver-Protocol.h>

@class NSDictionary, NSIndexPath, NSMutableArray, NSMutableSet, NSString, PHCachingImageManager, PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAlbumList, PLManagedAsset, PUAlbumStreamActivity, PUFeedAssetContainerList, PUFeedSectionInfosManager, PUFeedViewControllerRestorableState, PUFeedViewControllerSpec, PUOneUpPresentationHelper, PUPhotoBrowserOneUpPresentationAdaptor, PUPhotoPinchGestureRecognizer, PUPhotosPickerViewController, PUScrollViewSpeedometer, PXFeedDateFormatter, UIBarButtonItem, UICollectionView, UITapGestureRecognizer, _UIContentUnavailableView;
@protocol UIViewControllerPreviewing;

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedPlayerCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, _UISettingsKeyObserver, PUScrollViewSpeedometerDelegate, PUOneUpPresentationHelperDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, PXSettingsKeyObserver, UICollectionViewDragSource, PLCloudFeedNavigating, PLNavigableCloudFeedViewController>
{
    BOOL __flowDirectionReversed;
    BOOL __collectionViewScrolledToNewest;
    BOOL __shouldSuspendQualityImageFormats;
    BOOL __viewDidAppear;
    BOOL __viewsInSyncWithModel;
    BOOL __appJustEnteredForeground;
    BOOL __userDidDismissPlaceholder;
    BOOL __interfaceBatchUpdateScheduled;
    BOOL __invitationsPopoverShowPending;
    BOOL __libraryUpdatingPreviouslyExpired;
    BOOL __oneUpDataSourceUpdateScheduled;
    BOOL __needsUpdateLayout;
    BOOL __hasAppeared;
    PUFeedViewControllerSpec *_spec;
    long long _contentType;
    PUFeedSectionInfosManager *__feedSectionInfosManager;
    PHCachingImageManager *__cachingImageManager;
    NSMutableArray *__lastPreheatIndexPathList;
    NSMutableArray *__lastPreheatIndexPathInfoList;
    PXFeedDateFormatter *__dateFormatter;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    long long __sizeTransitionState;
    PUFeedViewControllerRestorableState *__rotationLastRestorableState;
    long long __barsState;
    long long __currentCollectionViewType;
    long long __targetCollectionViewType;
    UICollectionView *__currentCollectionView;
    UICollectionView *__targetCollectionView;
    long long __loadedSectionInfosWindowSize;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UIBarButtonItem *__invitationsBarButtonItem;
    PUFeedViewController *__invitationsPopoverRootController;
    NSIndexPath *__indexPathForImageHiddenDuringZoomTransition;
    PUPhotoPinchGestureRecognizer *__pinchGestureRecognizer;
    UICollectionView *__pinchedCollectionView;
    PLManagedAlbumList *__sharedAlbumList;
    PLCloudSharedAlbum *__pushedAlbum;
    UIViewController *__pushedViewController;
    PUPhotosPickerViewController *__presentedPhotosPickerViewController;
    _UIContentUnavailableView *__emptyPlaceholderView;
    PUAlbumStreamActivity *__albumStreamActivity;
    PLManagedAsset *__browsingSelectedAsset;
    PLCloudSharedComment *__browsingSelectedComment;
    PUFeedAssetContainerList *__browsingAssetContainerList;
    NSDictionary *__justLikedSections;
    NSMutableSet *__sectionInfosWithCommentChanges;
    NSMutableSet *__updatedAssets;
    double __preheatingWindowSize;
    PUOneUpPresentationHelper *__oneUpPresentationHelper;
    PUPhotoBrowserOneUpPresentationAdaptor *__photoBrowserOneUpPresentationAdaptor;
    PUFeedAssetContainerList *__oneUpPresentationAssetContainerList;
    id<UIViewControllerPreviewing> __previewingItem;
    struct CGSize __targetSize;
    struct CGPoint __lastPreheatedContentOffset;
    struct CGSize __assetsAddedCachedSectionHeaderSize;
    struct UIEdgeInsets __previousSafeAreaInsets;
}

@property (strong, nonatomic, setter=_setAlbumStreamActivity:) PUAlbumStreamActivity *_albumStreamActivity; // @synthesize _albumStreamActivity=__albumStreamActivity;
@property (nonatomic, setter=_setAppJustEnteredForeground:) BOOL _appJustEnteredForeground; // @synthesize _appJustEnteredForeground=__appJustEnteredForeground;
@property (nonatomic, setter=_setAssetsAddedCachedSectionHeaderSize:) struct CGSize _assetsAddedCachedSectionHeaderSize; // @synthesize _assetsAddedCachedSectionHeaderSize=__assetsAddedCachedSectionHeaderSize;
@property (nonatomic, setter=_setBarsState:) long long _barsState; // @synthesize _barsState=__barsState;
@property (strong, nonatomic, setter=_setBrowsingAssetContainerList:) PUFeedAssetContainerList *_browsingAssetContainerList; // @synthesize _browsingAssetContainerList=__browsingAssetContainerList;
@property (strong, nonatomic, setter=_setBrowsingSelectedAsset:) PLManagedAsset *_browsingSelectedAsset; // @synthesize _browsingSelectedAsset=__browsingSelectedAsset;
@property (strong, nonatomic, setter=_setBrowsingSelectedComment:) PLCloudSharedComment *_browsingSelectedComment; // @synthesize _browsingSelectedComment=__browsingSelectedComment;
@property (readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property (nonatomic, getter=_isCollectionViewScrolledToNewest, setter=_setCollectionViewScrolledToNewest:) BOOL _collectionViewScrolledToNewest; // @synthesize _collectionViewScrolledToNewest=__collectionViewScrolledToNewest;
@property (strong, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // @synthesize _collectionViewSpeedometer=__collectionViewSpeedometer;
@property (strong, nonatomic, setter=_setCurrentCollectionView:) UICollectionView *_currentCollectionView; // @synthesize _currentCollectionView=__currentCollectionView;
@property (nonatomic, setter=_setCurrentCollectionViewType:) long long _currentCollectionViewType; // @synthesize _currentCollectionViewType=__currentCollectionViewType;
@property (readonly, nonatomic) PXFeedDateFormatter *_dateFormatter; // @synthesize _dateFormatter=__dateFormatter;
@property (strong, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property (readonly, nonatomic) PUFeedSectionInfosManager *_feedSectionInfosManager; // @synthesize _feedSectionInfosManager=__feedSectionInfosManager;
@property (nonatomic, getter=_isFlowDirectionReversed, setter=_setFlowDirectionReversed:) BOOL _flowDirectionReversed; // @synthesize _flowDirectionReversed=__flowDirectionReversed;
@property (nonatomic, setter=_setHasAppeared:) BOOL _hasAppeared; // @synthesize _hasAppeared=__hasAppeared;
@property (copy, nonatomic, setter=_setIndexPathForImageHiddenDuringZoomTransition:) NSIndexPath *_indexPathForImageHiddenDuringZoomTransition; // @synthesize _indexPathForImageHiddenDuringZoomTransition=__indexPathForImageHiddenDuringZoomTransition;
@property (nonatomic, getter=_isInterfaceBatchUpdateScheduled, setter=_setInterfaceBatchUpdateScheduled:) BOOL _interfaceBatchUpdateScheduled; // @synthesize _interfaceBatchUpdateScheduled=__interfaceBatchUpdateScheduled;
@property (strong, nonatomic, setter=_setInvitationsBarButtonItem:) UIBarButtonItem *_invitationsBarButtonItem; // @synthesize _invitationsBarButtonItem=__invitationsBarButtonItem;
@property (strong, nonatomic, setter=_setInvitationsPopoverRootController:) PUFeedViewController *_invitationsPopoverRootController; // @synthesize _invitationsPopoverRootController=__invitationsPopoverRootController;
@property (nonatomic, getter=_isInvitationsPopoverShowPending, setter=_setInvitationsPopoverShowPending:) BOOL _invitationsPopoverShowPending; // @synthesize _invitationsPopoverShowPending=__invitationsPopoverShowPending;
@property (strong, nonatomic, setter=_setJustLikedSections:) NSDictionary *_justLikedSections; // @synthesize _justLikedSections=__justLikedSections;
@property (strong, nonatomic) NSMutableArray *_lastPreheatIndexPathInfoList; // @synthesize _lastPreheatIndexPathInfoList=__lastPreheatIndexPathInfoList;
@property (strong, nonatomic) NSMutableArray *_lastPreheatIndexPathList; // @synthesize _lastPreheatIndexPathList=__lastPreheatIndexPathList;
@property (nonatomic, setter=_setLastPreheatedContentOffset:) struct CGPoint _lastPreheatedContentOffset; // @synthesize _lastPreheatedContentOffset=__lastPreheatedContentOffset;
@property (nonatomic, getter=_isLibraryUpdatingPreviouslyExpired, setter=_setLibraryUpdatingPreviouslyExpired:) BOOL _libraryUpdatingPreviouslyExpired; // @synthesize _libraryUpdatingPreviouslyExpired=__libraryUpdatingPreviouslyExpired;
@property (nonatomic, setter=_setLoadedSectionInfosWindowSize:) long long _loadedSectionInfosWindowSize; // @synthesize _loadedSectionInfosWindowSize=__loadedSectionInfosWindowSize;
@property (nonatomic, setter=_setNeedsUpdateLayout:) BOOL _needsUpdateLayout; // @synthesize _needsUpdateLayout=__needsUpdateLayout;
@property (nonatomic, getter=_isOneUpDataSourceUpdateScheduled, setter=_setOneUpDataSourceUpdateScheduled:) BOOL _oneUpDataSourceUpdateScheduled; // @synthesize _oneUpDataSourceUpdateScheduled=__oneUpDataSourceUpdateScheduled;
@property (strong, nonatomic, setter=_setOneUpPresentationAssetContainerList:) PUFeedAssetContainerList *_oneUpPresentationAssetContainerList; // @synthesize _oneUpPresentationAssetContainerList=__oneUpPresentationAssetContainerList;
@property (strong, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper; // @synthesize _oneUpPresentationHelper=__oneUpPresentationHelper;
@property (strong, nonatomic, setter=_setPhotoBrowserOneUpPresentationAdaptor:) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor; // @synthesize _photoBrowserOneUpPresentationAdaptor=__photoBrowserOneUpPresentationAdaptor;
@property (strong, nonatomic, setter=_setPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer; // @synthesize _pinchGestureRecognizer=__pinchGestureRecognizer;
@property (strong, nonatomic, setter=_setPinchedCollectionView:) UICollectionView *_pinchedCollectionView; // @synthesize _pinchedCollectionView=__pinchedCollectionView;
@property (nonatomic, setter=_setPreheatingWindowSize:) double _preheatingWindowSize; // @synthesize _preheatingWindowSize=__preheatingWindowSize;
@property (strong, nonatomic, setter=_setPresentedPhotosPickerViewController:) PUPhotosPickerViewController *_presentedPhotosPickerViewController; // @synthesize _presentedPhotosPickerViewController=__presentedPhotosPickerViewController;
@property (strong, nonatomic, setter=_setPreviewingItem:) id<UIViewControllerPreviewing> _previewingItem; // @synthesize _previewingItem=__previewingItem;
@property (nonatomic, setter=_setPreviousSafeAreaInsets:) struct UIEdgeInsets _previousSafeAreaInsets; // @synthesize _previousSafeAreaInsets=__previousSafeAreaInsets;
@property (strong, nonatomic, setter=_setPushedAlbum:) PLCloudSharedAlbum *_pushedAlbum; // @synthesize _pushedAlbum=__pushedAlbum;
@property (strong, nonatomic, setter=_setPushedViewController:) UIViewController *_pushedViewController; // @synthesize _pushedViewController=__pushedViewController;
@property (strong, nonatomic, setter=_setRotationLastRestorableState:) PUFeedViewControllerRestorableState *_rotationLastRestorableState; // @synthesize _rotationLastRestorableState=__rotationLastRestorableState;
@property (strong, nonatomic, setter=_setSectionInfosWithCommentChanges:) NSMutableSet *_sectionInfosWithCommentChanges; // @synthesize _sectionInfosWithCommentChanges=__sectionInfosWithCommentChanges;
@property (readonly, nonatomic) PLManagedAlbumList *_sharedAlbumList; // @synthesize _sharedAlbumList=__sharedAlbumList;
@property (nonatomic, setter=_setShouldSuspendQualityImageFormats:) BOOL _shouldSuspendQualityImageFormats; // @synthesize _shouldSuspendQualityImageFormats=__shouldSuspendQualityImageFormats;
@property (nonatomic, setter=_setSizeTransitionState:) long long _sizeTransitionState; // @synthesize _sizeTransitionState=__sizeTransitionState;
@property (strong, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property (strong, nonatomic, setter=_setTargetCollectionView:) UICollectionView *_targetCollectionView; // @synthesize _targetCollectionView=__targetCollectionView;
@property (nonatomic, setter=_setTargetCollectionViewType:) long long _targetCollectionViewType; // @synthesize _targetCollectionViewType=__targetCollectionViewType;
@property (nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property (strong, nonatomic, setter=_setUpdatedAssets:) NSMutableSet *_updatedAssets; // @synthesize _updatedAssets=__updatedAssets;
@property (nonatomic, setter=_setUserDidDismissPlaceholder:) BOOL _userDidDismissPlaceholder; // @synthesize _userDidDismissPlaceholder=__userDidDismissPlaceholder;
@property (nonatomic, setter=_setViewDidAppear:) BOOL _viewDidAppear; // @synthesize _viewDidAppear=__viewDidAppear;
@property (nonatomic, getter=_areViewsInSyncWithModel, setter=_setViewsInSyncWithModel:) BOOL _viewsInSyncWithModel; // @synthesize _viewsInSyncWithModel=__viewsInSyncWithModel;
@property (readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PUFeedViewControllerSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_appDidFinishEnteringForeground;
- (void)_appWillEnterForeground:(id)arg1;
- (BOOL)_areSharedStreamsEnabled;
- (id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_autoHideBarsNow;
- (BOOL)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_browsingSelectedIndexPath;
- (long long)_browsingSelectedSection;
- (void)_cancelBarsAutoHide;
- (void)_clearOneUpPresentationHelper;
- (id)_collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)_collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)_collectionViewContainingView:(id)arg1;
- (long long)_collectionViewTypeForSize:(struct CGSize)arg1;
- (id)_collectionViews;
- (BOOL)_confidentialityWarningRequiredForAsset:(id)arg1;
- (void)_configureCollectionView:(id)arg1 isVertical:(BOOL)arg2;
- (void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configurePlayerCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureSpeedometer:(id)arg1;
- (void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (BOOL)_configureTextCell:(id)arg1 forFooterOfSection:(long long)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(BOOL)arg4;
- (void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_contextDidFinishRemoteMerge:(id)arg1;
- (void)_createNewStream;
- (id)_createOneUpPhotosDataSource;
- (id)_currentRestorableState;
- (id)_dateForSectionWithInfo:(id)arg1;
- (void)_dateFormatterChanged:(id)arg1;
- (long long)_defaultMaximumScrollRegimeForQualityImageFormats;
- (struct UIEdgeInsets)_desiredSafeAreaInsetsForCollectionViewType:(long long)arg1;
- (void)_didTapCommentButtonInFeedCell:(id)arg1;
- (void)_didTapSectionFooterFeedCell:(id)arg1;
- (void)_didTapSectionHeaderFeedCell:(id)arg1;
- (void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1;
- (void)_dismissInvitationsPopoverIfNeeded;
- (id)_dragItemsForIndexPath:(id)arg1;
- (void)_ensureOneUpPresentationHelper;
- (void)_ensureWindowOfLoadedSectionInfosIncludesSection:(long long)arg1;
- (void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_expandWindowOfLoadedSectionInfos;
- (void)_getDescriptionPhrase:(out id *)arg1 streamDisclosureLabel:(out id *)arg2 actionText:(out id *)arg3 buttonType:(long long *)arg4 forSections:(id)arg5 inCollectionView:(id)arg6;
- (id)_groupIDForSectionWithInfo:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePlaceholderAction;
- (void)_handleTap:(id)arg1;
- (id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2;
- (id)_indexPathForPosition:(struct CGPoint)arg1 inCollectionView:(id)arg2 outHitCell:(id *)arg3;
- (void)_invalidateCachedMetrics;
- (void)_invalidateLastPreheatedContentOffset;
- (void)_invalidatePreheatedAssets;
- (void)_invitationsButtonAction:(id)arg1;
- (BOOL)_isAnySharedAlbumAvailable;
- (BOOL)_isCollectionViewEmpty:(id)arg1;
- (BOOL)_isLibraryUpdatingTimeoutExpired;
- (void)_libraryUpdatingDidExpire:(id)arg1;
- (id)_loadedSectionInfoForCloudFeedEntry:(id)arg1;
- (void)_navigateToOneUpBrowserAnimated:(BOOL)arg1;
- (void)_navigateToOneUpBrowserWithOptions:(long long)arg1 animated:(BOOL)arg2;
- (void)_navigateToOneUpBrowserWithOptions:(long long)arg1 animated:(BOOL)arg2 pinchGestureRecognizer:(id)arg3;
- (void)_navigateToRevealAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_navigateToRevealComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_navigateToRevealPhoto:(id)arg1 inAlbum:(struct NSObject *)arg2 animated:(BOOL)arg3;
- (void)_navigateToSectionInfo:(id)arg1 atItemIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)_numberOfSectionInfosForCollectionView:(id)arg1;
- (void)_openiCloudSettings;
- (void)_performInterfaceBatchUpdateNow;
- (void)_performOneUpDataSourceUpdateNow;
- (long long)_placeholderTypeForSizeTransitionState:(long long)arg1;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_preheatSectionInfosAtIndexes:(id)arg1;
- (void)_presentConfidentialityWarning;
- (void)_reduceMotionStatusChanged:(id)arg1;
- (void)_requestImageForAsset:(id)arg1 tileSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestPlayerItemForAsset:(id)arg1 preparation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_restoreScrollPositionInCollectionView:(id)arg1 fromRestorableState:(id)arg2;
- (void)_scheduleBarsAutoHide;
- (void)_scheduleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2;
- (void)_scheduleOneUpDataSourceUpdate;
- (id)_sectionInfoForSection:(long long)arg1 collectionView:(id)arg2;
- (id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1;
- (id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2;
- (void)_setUserCloudSharedLiked:(BOOL)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3;
- (void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2;
- (BOOL)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (BOOL)_shouldHideHeaderForSectionWithType:(long long)arg1;
- (BOOL)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2;
- (BOOL)_shouldHideSectionWithType:(long long)arg1 inCollectionViewType:(long long)arg2;
- (BOOL)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(long long)arg3;
- (BOOL)_shouldShowBarsForCollectionViewType:(long long)arg1;
- (BOOL)_shouldShowTransitionUI;
- (void)_showInvitationsPopoverAnimated:(BOOL)arg1;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_suppressionContexts;
- (void)_tearDownBrowsing;
- (id)_textForDate:(id)arg1;
- (long long)_typeForCollectionView:(id)arg1;
- (long long)_typeForSectionInfo:(id)arg1;
- (void)_updateBrowsingAssetContainerList;
- (void)_updateCollectionViews;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_updateOneUpBrowsingCurrentAssetReference;
- (void)_updateOneUpDataSource;
- (void)_updateParallaxForCollectionView:(id)arg1;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_updatePreheatedAssetsForCollectionView:(id)arg1;
- (void)_updateSectionsWithCaptionChangesFromUpdatedAssets:(id)arg1;
- (BOOL)_updateSpec;
- (void)_updateSubviewsOrdering;
- (void)_updateWindowOfLoadedSectionInfos;
- (void)_userDidScrollFeed;
- (void)_userDidViewFeed;
- (void)_viewWillLayoutBeforeAppearing;
- (void)assetContainerListDidChange:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canDragOut;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (long long)collectionView:(id)arg1 layout:(id)arg2 configurationForSectionHeaderType:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics)arg5;
- (struct PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double *)arg3 minimumNumberOfTilesToOmit:(long long *)arg4 forSection:(long long)arg5;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)contentSizeForViewInPopover;
- (void)dealloc;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)didTapButtonInFeedTextCell:(id)arg1;
- (void)didTapCommentButtonInFeedImageCell:(id)arg1;
- (void)didTapCommentButtonInFeedPlayerCell:(id)arg1;
- (void)didTapFeedCell:(id)arg1;
- (void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1;
- (void)feedInvitationCell:(id)arg1 didAccept:(BOOL)arg2;
- (void)feedInvitationCell:(id)arg1 presentViewController:(id)arg2;
- (void)feedInvitationCellReportAsJunk:(id)arg1;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSpec:(id)arg1 contentType:(long long)arg2;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToNewestContentAnimated:(BOOL)arg1;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)ppt_currentCollectionView;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)pu_shouldActAsTabRootViewController;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAutorotate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end

