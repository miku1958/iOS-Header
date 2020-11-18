//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PUPhotosSectionHeaderViewDelegate-Protocol.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate-Protocol.h>
#import <PhotosUI/PXEditableNavigationTitleViewDelegate-Protocol.h>

@class NSObject, NSString, PHAssetCollection, PHFetchResult, PUPhotosAlbumViewControllerSpec, PUPhotosPickerViewController, PXEditableNavigationTitleView;
@protocol PLAlbumProtocol;

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate, PXEditableNavigationTitleViewDelegate>
{
    struct {
        BOOL sectionHeadersEnabled;
    } _needsUpdateFlags;
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    BOOL __isCountingAssetTypes;
    BOOL __hasAccurateCounts;
    PHAssetCollection *_assetCollection;
    struct NSObject *_album;
    PUPhotosAlbumViewControllerSpec *__albumSpec;
    PXEditableNavigationTitleView *_editableTitleView;
}

@property (strong, nonatomic, setter=_setAlbumSpec:) PUPhotosAlbumViewControllerSpec *_albumSpec; // @synthesize _albumSpec=__albumSpec;
@property (nonatomic, setter=_setHasAccurateCounts:) BOOL _hasAccurateCounts; // @synthesize _hasAccurateCounts=__hasAccurateCounts;
@property (nonatomic, setter=_setCountingAssetTypes:) BOOL _isCountingAssetTypes; // @synthesize _isCountingAssetTypes=__isCountingAssetTypes;
@property (strong, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (readonly, nonatomic) PHFetchResult *assetCollectionAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXEditableNavigationTitleView *editableTitleView; // @synthesize editableTitleView=_editableTitleView;
@property (readonly, nonatomic) NSString *globalFooterSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldShowSectionHeaders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)_countAssetTypesIfNeeded;
- (void)_ensureEditableTitleView;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(BOOL *)arg2 locations:(id *)arg3 title:(id *)arg4 startDate:(id *)arg5 endDate:(id *)arg6;
- (id)_globalHeaderTitle;
- (void)_invalideSectionHeaders;
- (void)_performAddDropWithSession:(id)arg1;
- (void)_performMoveDropWithCoordinator:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateSectionHeadersIfNeeded;
- (unsigned long long)additionalOneUpViewControllerOptions;
- (BOOL)allowSelectAllButton;
- (BOOL)canBeginStackCollapseTransition;
- (BOOL)canDragIn;
- (BOOL)canDragOut;
- (BOOL)canHandleDropSession:(id)arg1;
- (long long)cellFillMode;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (struct CGPoint)contentOffsetForPreheating;
- (void)didTapHeaderView:(id)arg1;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)editableNavigationTitleView:(id)arg1 validateNewText:(id)arg2;
- (void)editableNavigationTitleViewDidEndEditing:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject *)arg1;
- (double)globalHeaderHeight;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)initWithAlbumSpec:(id)arg1;
- (id)initWithSpec:(id)arg1;
- (BOOL)isCameraRoll;
- (BOOL)isTrashBinViewController;
- (id)localizedTitleForAssets:(id)arg1;
- (id)newGridLayout;
- (long long)oneUpPresentationOrigin;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)setAlbum:(struct NSObject *)arg1 existingFetchResult:(id)arg2;
- (void)setAssetCollection:(id)arg1;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSessionInfo:(id)arg1;
- (void)setupScrubber;
- (void)updateLayoutMetrics;
- (BOOL)updateSpec;
- (void)updateTitle;
- (unsigned long long)userEventSourceType;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsGlobalFooter;

@end

