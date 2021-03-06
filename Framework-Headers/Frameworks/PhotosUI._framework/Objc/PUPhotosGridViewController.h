//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUI/PHAssetCollectionDataSource-Protocol.h>
#import <PhotosUI/PUCollectionViewSelectionDelegate-Protocol.h>
#import <PhotosUI/PUDeletePhotosActionControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotosGridBarsHelperDelegate-Protocol.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate-Protocol.h>
#import <PhotosUI/PUSessionInfoObserver-Protocol.h>
#import <PhotosUI/PUSlideshowViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUStackedAlbumControllerTransition-Protocol.h>
#import <PhotosUI/PUSwipeSelectionManagerDataSource-Protocol.h>
#import <PhotosUI/PUSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUI/PXActivitySharingControllerDelegate-Protocol.h>
#import <PhotosUI/PXAutoScrollerDelegate-Protocol.h>
#import <PhotosUI/PXCMMActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PXForcedDismissableViewController-Protocol.h>
#import <PhotosUI/PXNavigableAssetContainerViewController-Protocol.h>
#import <PhotosUI/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUI/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUI/PXPhotosGlobalFooterViewLayoutDelegate-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUI/UICollectionViewDragDestination-Protocol.h>
#import <PhotosUI/UICollectionViewDragSource-Protocol.h>
#import <PhotosUI/UIDropInteractionDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIMultiSelectInteractionDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSIndexPath, NSIndexSet, NSMutableDictionary, NSString, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLDateRangeFormatter, PUActivitySharingController, PUAlbumListTransitionContext, PUAlbumPickerViewController, PUDeletePhotosActionController, PUDuplicateActionController, PUOneUpPresentationHelper, PUPhotoBrowserOneUpPresentationAdaptor, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosGridBarsHelper, PUPhotosGridViewControllerSpec, PUScrollViewSpeedometer, PUSessionInfo, PUSlideshowViewController, PUSwipeSelectionManager, PXAssetBadgeManager, PXPhotosDataSource, UIActivityViewController, UIBarButtonItem, UICollectionViewLayout, UIContextMenuInteraction, UILongPressGestureRecognizer, UIMultiSelectInteraction, UINavigationButton, UIPopoverPresentationController, UIView, UIViewController;
@protocol PUGridLayoutProtocol, PUPhotosGridViewSupplementalToolbarProvider;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverPresentationControllerDelegate, PUCollectionViewSelectionDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, PXSettingsKeyObserver, PXPhotosDataSourceChangeObserver, PUDeletePhotosActionControllerDelegate, PXActivitySharingControllerDelegate, PUSlideshowViewControllerDelegate, PXCMMActionPerformerDelegate, PUOneUpPresentationHelperDelegate, PUSwipeSelectionManagerDelegate, PUSwipeSelectionManagerDataSource, PXAutoScrollerDelegate, PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate, PUPhotosGridBarsHelperDelegate, UICollectionViewDragSource, UICollectionViewDragDestination, UIDropInteractionDelegate, UIMultiSelectInteractionDelegate, UIGestureRecognizerDelegate, PXNavigableAssetContainerViewController, PXForcedDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate>
{
    BOOL _isMenuIndexPathExact;
    BOOL _showingMenu;
    BOOL _contentViewInSyncWithModel;
    BOOL _didScrollToInitialPosition;
    UIView *_alternateContentView;
    double _lastTransitionWidth;
    PHFetchResult *_collectionListFetchResultBeforeChange;
    PHAsset *_visibleReferenceAssetBeforeChange;
    PHAssetCollection *_visibleReferenceAssetContainerBeforeChange;
    NSIndexPath *_visibleReferenceAssetIndexPathBeforeChange;
    double _visibleReferenceAssetRelativeYBeforeChange;
    NSIndexSet *_visibleSectionsBeforeChange;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UIBarButtonItem *_selectSessionCancelBarButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UINavigationButton *_selectionButton;
    UIBarButtonItem *_selectAllBarButtonItem;
    UIBarButtonItem *_deselectAllBarButtonItem;
    UIBarButtonItem *_shareToolbarButton;
    UIBarButtonItem *_addToolbarButton;
    UIBarButtonItem *_removeToolbarButton;
    UIBarButtonItem *_restoreToolbarButton;
    UIBarButtonItem *_slideshowButtonSpacer;
    UIBarButtonItem *_slideshowButton;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSMutableDictionary *_progressInfosByIdentifier;
    NSMutableDictionary *_progressInfosByCachedIndexPath;
    CDUnknownBlockType _pendingNavigationBlock;
    unsigned long long _suppressesColorSettingsCount;
    unsigned long long _coalescedSelectionEntranceCount;
    double _lastUserScrollTime;
    BOOL _initiallyScrolledToBottom;
    BOOL _alwaysHideTabBar;
    BOOL __needsNewEmptyPlaceholderView;
    BOOL _showsCustomDoneButtonItemOnLeft;
    BOOL _showsSelectionSessionCancelButtonItemOnLeft;
    BOOL __didForceDataSource;
    BOOL __previewCommitting;
    BOOL _hasKnownNonEmptyContent_toWorkAround31995766;
    PLDateRangeFormatter *__dateRangeFormatter;
    id<PUPhotosGridViewSupplementalToolbarProvider> _supplementalToolbarProvider;
    PXPhotosDataSource *_photosDataSource;
    PUSessionInfo *_sessionInfo;
    unsigned long long _allowedActions;
    UICollectionViewLayout<PUGridLayoutProtocol> *_mainGridLayout;
    PUPhotosGridViewControllerSpec *_gridSpec;
    PUPhotoSelectionManager *_photoSelectionManager;
    CDUnknownBlockType _onViewDidAppearCompletion;
    PUPhotosGridBarsHelper *__barsHelper;
    PUPhotoPinchGestureRecognizer *_photoOrStackPinchGestureRecognizer;
    UIView *__emptyPlaceholderView;
    unsigned long long __previousCollectionsCount;
    UIViewController *__removeActionSheet;
    UIViewController *__actionConfirmationAlert;
    UIView *__shareAssetsSender;
    PUDeletePhotosActionController *__deleteActionController;
    PUDuplicateActionController *__duplicateActionController;
    PUAlbumPickerViewController *__albumPickerViewController;
    PUSlideshowViewController *__slideshowViewController;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    UICollectionViewLayout *__albumListTransitionLayout;
    UIBarButtonItem *_customDoneButtonItem;
    double _collectionViewLayoutReferenceWidth;
    UIViewController *__pushedPhotoBrowserController;
    PUOneUpPresentationHelper *_oneUpPresentationHelper;
    PUPhotoBrowserOneUpPresentationAdaptor *__photoBrowserOneUpPresentationAdaptor;
    UIPopoverPresentationController *__shareAssetsPopoverController;
    PUActivitySharingController *_activitySharingController;
    PHCachingImageManager *__cachingImageManager;
    long long __maximumNumberOfRowsToPreheat;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    UIMultiSelectInteraction *__multiSelectInteraction;
    PUSwipeSelectionManager *__swipeSelectionManager;
    long long __batchPreheatingCount;
    CDUnknownBlockType _ppt_nextDeleteFinishedBlock;
    CDUnknownBlockType _ppt_dataSourceChangeHandler;
    id __pendingViewSizeTransitionContext;
    id __cachedViewSizeTransitionContext;
    UIContextMenuInteraction *__contextMenuInteraction;
    NSIndexPath *__previewingIndexPath;
    UIViewController *__previewViewController;
    PXAssetBadgeManager *__badgeManager;
    NSIndexPath *__menuIndexPath;
    CDUnknownBlockType _pendingProcessDataSourceUpdateBlock;
    UIActivityViewController *_primingActivityViewController;
    struct CGPoint __previousPreheatContentOffset;
    struct CGPoint __previousPrefetchContentOffset;
    struct CGSize _maximumThumbnailRequestSize;
    struct CGSize __cachedViewSizeTransitionContextSize;
    struct UIEdgeInsets _collectionViewLayoutReferenceSafeAreaInsets;
    struct CGRect __previousPreheatRect;
    struct CGRect __previousPrefetchRect;
}

@property (weak, nonatomic, setter=_setActionConfirmationAlert:) UIViewController *_actionConfirmationAlert; // @synthesize _actionConfirmationAlert=__actionConfirmationAlert;
@property (strong, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // @synthesize _albumListTransitionLayout=__albumListTransitionLayout;
@property (strong, nonatomic, setter=_setAlbumPickerViewController:) PUAlbumPickerViewController *_albumPickerViewController; // @synthesize _albumPickerViewController=__albumPickerViewController;
@property (readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // @synthesize _badgeManager=__badgeManager;
@property (readonly, nonatomic) PUPhotosGridBarsHelper *_barsHelper; // @synthesize _barsHelper=__barsHelper;
@property (nonatomic, setter=_setBatchPreheatingCount:) long long _batchPreheatingCount; // @synthesize _batchPreheatingCount=__batchPreheatingCount;
@property (strong, nonatomic, setter=_setCachedViewSizeTransitionContext:) id _cachedViewSizeTransitionContext; // @synthesize _cachedViewSizeTransitionContext=__cachedViewSizeTransitionContext;
@property (nonatomic, setter=_setCachedViewSizeTransitionContextSize:) struct CGSize _cachedViewSizeTransitionContextSize; // @synthesize _cachedViewSizeTransitionContextSize=__cachedViewSizeTransitionContextSize;
@property (readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property (strong, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // @synthesize _collectionViewSpeedometer=__collectionViewSpeedometer;
@property (strong, nonatomic, setter=_setContextMenuInteraction:) UIContextMenuInteraction *_contextMenuInteraction; // @synthesize _contextMenuInteraction=__contextMenuInteraction;
@property (readonly, nonatomic) PLDateRangeFormatter *_dateRangeFormatter; // @synthesize _dateRangeFormatter=__dateRangeFormatter;
@property (strong, nonatomic, setter=_setDeleteActionController:) PUDeletePhotosActionController *_deleteActionController; // @synthesize _deleteActionController=__deleteActionController;
@property (nonatomic, setter=_setDidForceDataSource:) BOOL _didForceDataSource; // @synthesize _didForceDataSource=__didForceDataSource;
@property (strong, nonatomic, setter=_setDuplicateActionController:) PUDuplicateActionController *_duplicateActionController; // @synthesize _duplicateActionController=__duplicateActionController;
@property (strong, nonatomic, setter=_setEmptyPlaceholderView:) UIView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property (nonatomic, setter=_setMaximumNumberOfRowsToPreheat:) long long _maximumNumberOfRowsToPreheat; // @synthesize _maximumNumberOfRowsToPreheat=__maximumNumberOfRowsToPreheat;
@property (strong, nonatomic, setter=_setMenuIndexPath:) NSIndexPath *_menuIndexPath; // @synthesize _menuIndexPath=__menuIndexPath;
@property (strong, nonatomic) UIMultiSelectInteraction *_multiSelectInteraction; // @synthesize _multiSelectInteraction=__multiSelectInteraction;
@property (nonatomic, setter=_setNeedsNewEmptyPlaceholderView:) BOOL _needsNewEmptyPlaceholderView; // @synthesize _needsNewEmptyPlaceholderView=__needsNewEmptyPlaceholderView;
@property (strong, nonatomic, setter=_setPendingViewSizeTransitionContext:) id _pendingViewSizeTransitionContext; // @synthesize _pendingViewSizeTransitionContext=__pendingViewSizeTransitionContext;
@property (strong, nonatomic, setter=_setPhotoBrowserOneUpPresentationAdaptor:) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor; // @synthesize _photoBrowserOneUpPresentationAdaptor=__photoBrowserOneUpPresentationAdaptor;
@property (nonatomic, setter=_setPreviewCommitting:) BOOL _previewCommitting; // @synthesize _previewCommitting=__previewCommitting;
@property (strong, nonatomic, setter=_setPreviewViewController:) UIViewController *_previewViewController; // @synthesize _previewViewController=__previewViewController;
@property (strong, nonatomic, setter=_setPreviewingIndexPath:) NSIndexPath *_previewingIndexPath; // @synthesize _previewingIndexPath=__previewingIndexPath;
@property (nonatomic, setter=_setPreviousCollectionsCount:) unsigned long long _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property (nonatomic, setter=_setPreviousPrefetchContentOffset:) struct CGPoint _previousPrefetchContentOffset; // @synthesize _previousPrefetchContentOffset=__previousPrefetchContentOffset;
@property (nonatomic, setter=_setPreviousPrefetchRect:) struct CGRect _previousPrefetchRect; // @synthesize _previousPrefetchRect=__previousPrefetchRect;
@property (nonatomic, setter=_setPreviousPreheatContentOffset:) struct CGPoint _previousPreheatContentOffset; // @synthesize _previousPreheatContentOffset=__previousPreheatContentOffset;
@property (nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property (strong, nonatomic, setter=_setPushedPhotoBrowserController:) UIViewController *_pushedPhotoBrowserController; // @synthesize _pushedPhotoBrowserController=__pushedPhotoBrowserController;
@property (weak, nonatomic, setter=_setRemoveActionSheet:) UIViewController *_removeActionSheet; // @synthesize _removeActionSheet=__removeActionSheet;
@property (weak, nonatomic, setter=_setShareAssetsPopoverController:) UIPopoverPresentationController *_shareAssetsPopoverController; // @synthesize _shareAssetsPopoverController=__shareAssetsPopoverController;
@property (weak, nonatomic, setter=_setShareAssetsSender:) UIView *_shareAssetsSender; // @synthesize _shareAssetsSender=__shareAssetsSender;
@property (strong, nonatomic, setter=_setSlideshowViewController:) PUSlideshowViewController *_slideshowViewController; // @synthesize _slideshowViewController=__slideshowViewController;
@property (strong, nonatomic, setter=_setSwipeSelectionManager:) PUSwipeSelectionManager *_swipeSelectionManager; // @synthesize _swipeSelectionManager=__swipeSelectionManager;
@property (strong, nonatomic) PUActivitySharingController *activitySharingController; // @synthesize activitySharingController=_activitySharingController;
@property (strong, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;
@property (nonatomic) unsigned long long allowedActions; // @synthesize allowedActions=_allowedActions;
@property (nonatomic) BOOL alwaysHideTabBar; // @synthesize alwaysHideTabBar=_alwaysHideTabBar;
@property (readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult;
@property (nonatomic) struct UIEdgeInsets collectionViewLayoutReferenceSafeAreaInsets; // @synthesize collectionViewLayoutReferenceSafeAreaInsets=_collectionViewLayoutReferenceSafeAreaInsets;
@property (nonatomic) double collectionViewLayoutReferenceWidth; // @synthesize collectionViewLayoutReferenceWidth=_collectionViewLayoutReferenceWidth;
@property (strong, nonatomic) UIBarButtonItem *customDoneButtonItem; // @synthesize customDoneButtonItem=_customDoneButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
@property (nonatomic) BOOL hasKnownNonEmptyContent_toWorkAround31995766; // @synthesize hasKnownNonEmptyContent_toWorkAround31995766=_hasKnownNonEmptyContent_toWorkAround31995766;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL initiallyScrolledToBottom; // @synthesize initiallyScrolledToBottom=_initiallyScrolledToBottom;
@property (strong, nonatomic) UICollectionViewLayout<PUGridLayoutProtocol> *mainGridLayout; // @synthesize mainGridLayout=_mainGridLayout;
@property (nonatomic, setter=_setMaximumThumbnailRequestSize:) struct CGSize maximumThumbnailRequestSize; // @synthesize maximumThumbnailRequestSize=_maximumThumbnailRequestSize;
@property (copy, nonatomic) CDUnknownBlockType onViewDidAppearCompletion; // @synthesize onViewDidAppearCompletion=_onViewDidAppearCompletion;
@property (strong, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *oneUpPresentationHelper; // @synthesize oneUpPresentationHelper=_oneUpPresentationHelper;
@property (copy, nonatomic) CDUnknownBlockType pendingProcessDataSourceUpdateBlock; // @synthesize pendingProcessDataSourceUpdateBlock=_pendingProcessDataSourceUpdateBlock;
@property (strong, nonatomic, setter=_setPhotoOrStackPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *photoOrStackPinchGestureRecognizer; // @synthesize photoOrStackPinchGestureRecognizer=_photoOrStackPinchGestureRecognizer;
@property (strong, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property (strong, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property (copy, nonatomic, setter=ppt_setDataSourceChangeHandler:) CDUnknownBlockType ppt_dataSourceChangeHandler; // @synthesize ppt_dataSourceChangeHandler=_ppt_dataSourceChangeHandler;
@property (copy, nonatomic, setter=ppt_setNextDeleteFinishedBlock:) CDUnknownBlockType ppt_nextDeleteFinishedBlock; // @synthesize ppt_nextDeleteFinishedBlock=_ppt_nextDeleteFinishedBlock;
@property (strong, nonatomic) UIActivityViewController *primingActivityViewController; // @synthesize primingActivityViewController=_primingActivityViewController;
@property (strong, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property (nonatomic) BOOL showsCustomDoneButtonItemOnLeft; // @synthesize showsCustomDoneButtonItemOnLeft=_showsCustomDoneButtonItemOnLeft;
@property (nonatomic) BOOL showsSelectionSessionCancelButtonItemOnLeft; // @synthesize showsSelectionSessionCancelButtonItemOnLeft=_showsSelectionSessionCancelButtonItemOnLeft;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<PUPhotosGridViewSupplementalToolbarProvider> supplementalToolbarProvider; // @synthesize supplementalToolbarProvider=_supplementalToolbarProvider;

+ (id)_localizedSelectionTitleWithPhotoSelectionManager:(id)arg1;
+ (void)transferPhotoBrowserFromGridViewController:(id)arg1 toGridViewController:(id)arg2;
- (void).cxx_destruct;
- (void)_activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3;
- (void)_activitySharingControllerDidCancel:(id)arg1;
- (id)_activitySharingControllerWithSelectionManager:(id)arg1;
- (void)_addButtonPressed:(id)arg1;
- (double)_adjustedTransitionWidth;
- (id)_allAssetsInCollections;
- (BOOL)_allowsActions:(unsigned long long)arg1;
- (BOOL)_areAllAssetsSelected;
- (id)_assetsAllowingEditOperation:(long long)arg1 fromAssets:(id)arg2;
- (id)_assetsAllowingRemove:(BOOL)arg1 orDelete:(BOOL)arg2 fromAssets:(id)arg3;
- (id)_barButtonSpacerWithWidth:(double)arg1;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (id)_bestReferenceItemIndexPathWithTopBias:(BOOL)arg1;
- (BOOL)_canAddContent;
- (BOOL)_canAllContainersPerformEditOperation:(long long)arg1;
- (BOOL)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (BOOL)_canRemoveContent;
- (BOOL)_canShareAsset:(id)arg1;
- (BOOL)_canShareContent;
- (id)_cancelButtonItem;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_clearAutomaticContentOffsetSnapshot;
- (BOOL)_collectionView:(id)arg1 canHandleDropSesson:(id)arg2;
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)_collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 liftingPreviewParametersForItemAtIndexPath:(id)arg2;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (BOOL)_confidentialityWarningRequiredForAsset:(id)arg1;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(BOOL)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (long long)_deleteActionForBarButtonItem:(id)arg1;
- (id)_deselectAllBarButtonItem;
- (id)_dragItemsForIndexPath:(id)arg1;
- (void)_ensureOneUpPresentationHelper;
- (void)_getFirstAsset:(id *)arg1 collection:(id *)arg2;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDuplicateActionCompletionWithSuccess:(BOOL)arg1;
- (void)_handleSelectSessionCancelButton:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (void)_handleSelectionButton:(id)arg1;
- (BOOL)_hasAccessibilityLargeText;
- (BOOL)_hasAtLeastOneContainer;
- (void)_hideMenuIfNeeded;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (id)_indexPathForAsset:(id)arg1 inAssetCollection:(id)arg2 refetchIfNeeded:(BOOL)arg3;
- (id)_indexesWithoutPlaceholdersFromIndexes:(id)arg1 inSection:(long long)arg2;
- (void)_invalidateAllAssetIndexes;
- (void)_invalidateAllProgressInfoIndexPaths;
- (void)_invalidateCachedViewSizeTransitionContext;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(BOOL *)arg2;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (BOOL)_navigateToBottomIfNeededAnimated:(BOOL)arg1;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)arg1;
- (void)_performAutomaticContentOffsetAdjustment;
- (id)_performDuplicateActivityWithAssets:(id)arg1;
- (id)_performHideActivityWithSelectionManager:(id)arg1;
- (id)_pickerBannerView;
- (void)_presentActivitySharingController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentConfidentialityWarning;
- (void)_presentShareSheetWithCompletion:(CDUnknownBlockType)arg1;
- (id)_previewParametersForItemAtIndexPath:(id)arg1;
- (id)_referenceBarButtonItemForDeleteAction:(long long)arg1;
- (void)_removeButtonPressed:(id)arg1;
- (void)_removeSelectedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveAnchorForAutomaticContentOffsetAdjustment;
- (id)_selectAllBarButtonItem;
- (id)_selectSessionCancelBarButtonItem;
- (id)_selectSessionDoneBarButtonItem;
- (id)_selectionButton;
- (id)_selectionManagerWithSelectedSharableAssets;
- (id)_selectionManagerWithSharableAssetsInFetchResult:(id)arg1 forAssetCollection:(id)arg2;
- (unsigned long long)_sharableAssetsTypeInFetchResult:(id)arg1;
- (void)_shareButtonPressed:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (BOOL)_shouldBeginMultiSelectAtLocation:(struct CGPoint)arg1;
- (BOOL)_shouldUpdateCollectionView;
- (void)_slideshowButtonPressed:(id)arg1;
- (id)_slideshowNavigationControllerForFetchResult:(id)arg1 assetCollection:(id)arg2;
- (BOOL)_transitionWidthHasChanged;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_updateBackButtonTitle;
- (void)_updateCollectionViewMultipleSelection;
- (void)_updateContentOffsetForPendingViewSizeTransition;
- (void)_updateGlobalHeaderVisibility;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)_updateLayoutReferenceValues;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (void)_updatePhotoSelectionManager;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (id)_updateSelectionFromSelectionManager:(id)arg1;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_updateToolbarContentsAnimated:(BOOL)arg1;
- (BOOL)_updateTransitionWidthOnAppearance;
- (void)_userDidStartScrolling;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3;
- (void)activitySharingControllerDidCancel:(id)arg1;
- (unsigned long long)additionalOneUpViewControllerOptions;
- (BOOL)allowSelectAllButton;
- (BOOL)allowSlideshowButton;
- (id)alternateContentView;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (id)assetCollectionForSectionHeaderAtIndex:(unsigned long long)arg1;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1;
- (void)beginBatchPreheating;
- (void)beginCoalescedSelectionUpdates;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)beginSuppressingColorSettingsUpdate;
- (id)bestReferenceItemIndexPath;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBeginStackCollapseTransition;
- (BOOL)canDeleteContent;
- (BOOL)canDisplayEditButton;
- (BOOL)canDragIn;
- (BOOL)canDragOut;
- (BOOL)canHandleDropSession:(id)arg1;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 assetCollection:(id)arg3 thumbnailIsPlaceholder:(BOOL)arg4 assetMayHaveChanged:(BOOL)arg5;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(BOOL)arg3;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (struct CGPoint)contentOffsetForPreheating;
- (id)contentScrollView;
- (struct CGSize)contentSizeForPreheating;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)copy:(id)arg1;
- (long long)dateRangeFormatterPreset;
- (void)dealloc;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)deselectAllItemsAnimated:(BOOL)arg1;
- (void)didEndDisplayingEmptyPlaceholderView;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)didSelectAddPlaceholderInSection:(long long)arg1;
- (id)displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 preferredAttributesPromise:(CDUnknownBlockType)arg3;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)endBatchPreheating;
- (void)endCoalescedSelectionUpdates;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (void)forceDataSourceIfNeeded;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 buttonAction:(CDUnknownBlockType *)arg4;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out BOOL *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (double)globalHeaderHeight;
- (id)gridLayout;
- (void)gridSettings:(id)arg1 changedValueForKey:(id)arg2;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)handleDrop:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)hasScrollableContent;
- (long long)imageDeliveryMode;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(BOOL *)arg2;
- (struct CGSize)imageRequestItemPixelSize;
- (struct CGSize)imageRequestItemSize;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect)arg1;
- (id)indexPathsForSelectedItemsInCollectionView:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (void)installGestureRecognizers;
- (BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;
- (BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)invalidateEmptyPlaceholderView;
- (void)invalidateGridLayoutIfNecessary;
- (BOOL)isAddPlaceholderAtIndexPath:(id)arg1;
- (BOOL)isAnyAssetSelected;
- (BOOL)isCameraRoll;
- (BOOL)isContentViewInSyncWithModel;
- (BOOL)isCurrentCollectionViewDataSource;
- (BOOL)isEmpty;
- (BOOL)isInMultiSelectMode;
- (BOOL)isPerformingCoalescedSelectionUpdates;
- (BOOL)isPreheatingEnabled;
- (BOOL)isTrashBinViewController;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1 outClosestMatch:(id *)arg2;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1 outClosestMatch:(id *)arg2 outLeftClosestMatch:(id *)arg3 outAboveClosestMatch:(id *)arg4;
- (double)lastUserScrollTime;
- (void)loadView;
- (id)localizedSelectionTitle;
- (id)localizedTitleForAssetCollection:(id)arg1;
- (id)localizedTitleForAssetCollection:(id)arg1 titleCategory:(long long *)arg2;
- (id)localizedTitleForAssets:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (void)navigateToBottomAnimated:(BOOL)arg1;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 refetchIfNeeded:(BOOL)arg3 animated:(BOOL)arg4;
- (void)navigateToPhotosDetailsForAssetCollection:(id)arg1;
- (void)navigateToPhotosDetailsForAssetCollection:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (id)newToolbarItems;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1;
- (BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (long long)oneUpPresentationOrigin;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)paste:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceWillChange:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)photosGridBarsHelper:(id)arg1 didChange:(unsigned long long)arg2;
- (void)photosGridBarsHelper:(id)arg1 getTitle:(out id *)arg2 prompt:(out id *)arg3 shouldHideBackButton:(out BOOL *)arg4 leftBarButtonItems:(out id *)arg5 rightBarButtonItems:(out id *)arg6 forPhotoSelectionManager:(id)arg7;
- (id)photosGridBarsHelper:(id)arg1 titleForPhotoSelectionManager:(id)arg2;
- (id)photosGridBarsHelperPhotoSelectionManager:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)preheatAssets;
- (void)preheatAssetsWithPrefetchingDisabled:(BOOL)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentAlertController:(id)arg1;
- (void)previewActionController:(id)arg1 didDismissWithActionIdentifier:(id)arg2;
- (BOOL)previewActionControllerPreventRevealInMomentAction:(id)arg1;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (id)pu_debugRows;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)resetPreheating;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (void)selectAssets:(id)arg1 fromAssetCollection:(id)arg2;
- (id)selectedAssets;
- (id)selectedIndexPaths;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 forAssetCollection:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sender:(id)arg1 shareSelectedAssetsWithCompletion:(CDUnknownBlockType)arg2;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setAlternateContentView:(id)arg1;
- (void)setContentViewInSyncWithModel:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(BOOL)arg4;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (BOOL)shouldPreventRevealInMomentAction;
- (BOOL)shouldShowMenu;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (struct CGPoint)stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)supportsMultiSelectInteraction:(id)arg1;
- (long long)swipeSelectionManager:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)swipeSelectionManager:(id)arg1 photoCollectionAtIndex:(unsigned long long)arg2;
- (void)swipeSelectionManager:(id)arg1 updatePhotoSelectionWithIndexes:(id)arg2 inSection:(long long)arg3 selectionMode:(long long)arg4;
- (double)topMarginForPhotosGlobalFooterView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)updateEmptyPlaceholderViewAnimated:(BOOL)arg1;
- (void)updateGlobalFooter;
- (void)updateGlobalFooterUsingFooterView:(id)arg1;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)updateLayoutMetrics;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2;
- (BOOL)updateSpec;
- (void)updateTitle;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1;
- (unsigned long long)userEventSourceType;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsAddContentInToolbar;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(long long)arg1;
- (BOOL)wantsGlobalFooter;
- (BOOL)wantsPlaceholderView;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)willDisplayEmptyPlaceholderView;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 shouldHidePhotoTokens:(id)arg2;
- (BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end

