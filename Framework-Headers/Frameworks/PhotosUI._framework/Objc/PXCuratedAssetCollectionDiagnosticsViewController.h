//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXDiagnosticsHighlightCurationSettingsViewControllerDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSObject, NSString, NSURL, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, PXDiagnosticsHighlightCurationSettingsViewController, UIActivityIndicatorView, UICollectionView, UISegmentedControl, UITableView, UIView;
@protocol OS_dispatch_queue;

@interface PXCuratedAssetCollectionDiagnosticsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PXDiagnosticsHighlightCurationSettingsViewControllerDelegate>
{
    UIView *_contentView;
    UISegmentedControl *_segmentedControl;
    UICollectionView *_collectionView;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    PHCachingImageManager *_imageManager;
    struct CGSize _thumbnailSize;
    long long _thumbnailContentMode;
    PHImageRequestOptions *_thumbnailOptions;
    struct CGRect _previousPreheatRect;
    NSMutableArray *_addedAssets;
    NSMutableArray *_removedAssets;
    NSArray *_visibleAssets;
    PHFetchResult *_allAssets;
    NSString *_keyAssetUUID;
    NSDictionary *_assetByUUID;
    NSArray *_sortedVisibleAssetUUIDs;
    NSDictionary *_curationDebugInformation;
    BOOL _curationComparisonEnabled;
    NSObject<OS_dispatch_queue> *_curationDebugFetchQueue;
    BOOL _isReady;
    UIView *_curationSettingsView;
    UIView *_curationTypeView;
    UIView *_itemDetailsView;
    NSDictionary *_dedupedSymbolIndexByItemIdentifier;
    NSURL *_screenshotURL;
    PXDiagnosticsHighlightCurationSettingsViewController *_editSettingsViewController;
    UIActivityIndicatorView *_progressView;
    BOOL _initiallyShowCuration;
    BOOL _shouldPresentTapToRadar;
    long long _currentCurationType;
    NSString *_hostLayoutDiagnosticDescription;
    NSString *_hostViewDiagnosticDescription;
}

@property (nonatomic) long long currentCurationType; // @synthesize currentCurationType=_currentCurationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *hostLayoutDiagnosticDescription; // @synthesize hostLayoutDiagnosticDescription=_hostLayoutDiagnosticDescription;
@property (copy, nonatomic) NSString *hostViewDiagnosticDescription; // @synthesize hostViewDiagnosticDescription=_hostViewDiagnosticDescription;
@property (nonatomic) BOOL initiallyShowCuration; // @synthesize initiallyShowCuration=_initiallyShowCuration;
@property (nonatomic) BOOL shouldPresentTapToRadar; // @synthesize shouldPresentTapToRadar=_shouldPresentTapToRadar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (id)_curationTypeKeys;
- (void)_editSettings:(id)arg1;
- (void)_enumerateDifferencesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_switchLogsAction:(id)arg1;
- (void)_tapToRadar:(id)arg1;
- (id)_tapToRadarViewControllerWithScreenshot:(BOOL)arg1;
- (void)_updateCachedAssets;
- (void)_updateUIElementsVisibility;
- (void)addAssetUUIDsTo:(id)arg1 from:(id)arg2;
- (void)applySettings:(id)arg1 globally:(BOOL)arg2;
- (id)assetsForCurationType:(long long)arg1;
- (void)changeCurationType:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)curationDebugInformationForCurationType:(long long)arg1;
- (id)curationDebugInformationWithOptions:(id)arg1;
- (void)displayCurrentCurationType;
- (id)fullCurationDebugInformation;
- (BOOL)generateSectionTitles:(out id *)arg1 andTableContent:(out id *)arg2 forIndex:(long long)arg3;
- (void)hideCurationSettings:(id)arg1;
- (void)hideItemDetails:(id)arg1;
- (void)hideToolbarItems;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentTapToRadarIfNeeded;
- (id)radarAttachmentURLs;
- (id)radarComponentInfoForRoute:(id)arg1;
- (id)radarDescriptionTemplate;
- (id)radarRoutes;
- (id)radarTitleTemplate;
- (void)reloadCuration;
- (void)requestCurationDebugInfoWithOptions:(id)arg1 setGlobally:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showCurationSettings:(id)arg1;
- (void)showInfo:(id)arg1;
- (void)showItemDetailsWithDebugInfo:(id)arg1;
- (void)showToolbarItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)toggleCurationComparison:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

