//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUStorageManagementBaseController.h>

#import <PhotosUI/PUDeletePhotosActionControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperAssetDisplayDelegate-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperDelegate-Protocol.h>
#import <PhotosUI/PUVideoListAssetExpungeActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSIndexPath, NSMutableArray, NSString, PHImageRequestOptions, PUOneUpPresentationHelper, PUOneUpViewController, PUVideoListContentUnavailableView, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource, PXPhotosDataSourceConfiguration, UIBarButtonItem, UITableView, UITableViewCell, UIViewController;

@interface PUVideoListViewController : PUStorageManagementBaseController <UITableViewDataSource, UITableViewDelegate, PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PUDeletePhotosActionControllerDelegate, PUVideoListAssetExpungeActionPerformerDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_selectedIndexPathForDelete;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UITableViewCell *_videoCell;
    BOOL _needsUpdateCellConfiguration;
    BOOL __viewInSyncWithModel;
    BOOL __assetsFetchResultIsValid;
    PHImageRequestOptions *__imageRequestOptions;
    PUOneUpPresentationHelper *__oneUpPresentationHelper;
    PUOneUpViewController *__pushedOneUpViewController;
    PXPhotosDataSource *__dataSource;
    PXPhotosDataSourceConfiguration *__dataSourceManagerConfiguration;
    PXPhotoKitAssetsDataSourceManager *__photoKitDataSourceManager;
    UIViewController *__expungeActionSheet;
    UITableView *__mainTableView;
    NSIndexPath *__lastNavigatedAssetIndexPath;
    PUVideoListContentUnavailableView *__contentUnavailableView;
}

@property (nonatomic, setter=_setAssetsFetchResultIsValid:) BOOL _assetsFetchResultIsValid; // @synthesize _assetsFetchResultIsValid=__assetsFetchResultIsValid;
@property (strong, nonatomic, setter=_setContentUnavailableView:) PUVideoListContentUnavailableView *_contentUnavailableView; // @synthesize _contentUnavailableView=__contentUnavailableView;
@property (strong, nonatomic, setter=_setDataSource:) PXPhotosDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property (strong, nonatomic, setter=_setDataSourceManagerConfiguration:) PXPhotosDataSourceConfiguration *_dataSourceManagerConfiguration; // @synthesize _dataSourceManagerConfiguration=__dataSourceManagerConfiguration;
@property (weak, nonatomic, setter=_setExpungeActionSheet:) UIViewController *_expungeActionSheet; // @synthesize _expungeActionSheet=__expungeActionSheet;
@property (readonly, nonatomic) PHImageRequestOptions *_imageRequestOptions; // @synthesize _imageRequestOptions=__imageRequestOptions;
@property (strong, nonatomic, setter=_setLastNavigatedAssetIndexPath:) NSIndexPath *_lastNavigatedAssetIndexPath; // @synthesize _lastNavigatedAssetIndexPath=__lastNavigatedAssetIndexPath;
@property (strong, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView; // @synthesize _mainTableView=__mainTableView;
@property (strong, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper; // @synthesize _oneUpPresentationHelper=__oneUpPresentationHelper;
@property (strong, nonatomic) PXPhotoKitAssetsDataSourceManager *_photoKitDataSourceManager; // @synthesize _photoKitDataSourceManager=__photoKitDataSourceManager;
@property (strong, nonatomic, setter=_setPushedOneUpViewController:) PUOneUpViewController *_pushedOneUpViewController; // @synthesize _pushedOneUpViewController=__pushedOneUpViewController;
@property (nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) BOOL _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addIndexPathToDeleteSelection:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_clearAllIndexPathsForDeleteSelection;
- (void)_configureTableView:(id)arg1;
- (id)_defaultBackgroundColor;
- (id)_deleteBarButtonItem;
- (void)_deleteItemsAtSelectedIndexes:(id)arg1;
- (id)_editBarButtonItem;
- (void)_ensureOneUpPresentationHelper;
- (id)_headerViewForTableView:(id)arg1;
- (void)_installContentUnavailableView;
- (void)_installVideoListView;
- (void)_invalidatePreparedCellsConfiguration;
- (BOOL)_needsUpdate;
- (unsigned long long)_numberOfSelectedCellsForDelete;
- (void)_presentOneUpViewControllerForAssetAtInderxPath:(id)arg1;
- (void)_reloadContentView;
- (void)_removeIndexPathFromDeleteSelection:(id)arg1;
- (void)_setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldUpdateTableViewForDataSource:(id)arg1;
- (id)_tableViewCellContentViewAtIndexPath:(id)arg1;
- (void)_updateAssetsFetchResultIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateMainView;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
- (void)_updatePreparedCellsConfiguration;
- (void)_updateSubviewsOrderingAndVisibilityWithVideoCounts:(unsigned long long)arg1;
- (id)_videoCell;
- (id)_videoThumbnailViewForAssetAtIndexPath:(id)arg1;
- (void)actionPerformer:(id)arg1 excludeAssetsFromDataSource:(id)arg2;
- (void)actionPerformer:(id)arg1 stopExcludingAssetsFromDataSource:(id)arg2;
- (id)assetCollectionsFetchResult;
- (id)assetsInAssetCollection:(id)arg1;
- (void)cancelEditingMode:(id)arg1;
- (void)dealloc;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)deleteSelectedItems:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (long long)oneUpPresentationHelper:(id)arg1 transitionTypeWithProposedTransitionType:(long long)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (long long)preferredAlertControllerStyleForDeletePhotosActionController:(id)arg1;
- (id)presentingViewControllerForActionPerformer:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (void)selectVideoItems:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateInterfaceLayoutIfNecessary;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)updateVideoListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
