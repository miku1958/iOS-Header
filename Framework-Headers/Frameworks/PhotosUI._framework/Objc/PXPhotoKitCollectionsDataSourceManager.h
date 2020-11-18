//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCollectionsDataSourceManager.h>

#import <PhotosUICore/PXCollectionFetchOperationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, PHCollectionList, PHFetchResult, PHPhotoLibrary, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol OS_os_log;

@interface PXPhotoKitCollectionsDataSourceManager : PXCollectionsDataSourceManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver>
{
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_subCollectionFetchResultsCache;
    NSMutableDictionary *_subCollectionKeyAssetFetchResultsCache;
    NSMutableDictionary *_collectionIndexPathByCollection;
    NSOperationQueue *_subCollectionFetchOperationQueue;
    NSOperationQueue *_subCollectionKeyAssetsFetchOperationQueue;
    BOOL _performedBackgroundFetching;
    BOOL _needsBackgroundFetching;
    BOOL _initiatedBackgroundFetching;
    BOOL _resumedBackgroundFetching;
    BOOL _publishChangesScheduledOnRunLoop;
    NSMutableDictionary *_fetchResultsByPendingChangedCollections;
    NSMutableSet *_changedSubCollections;
    BOOL _isPhotoLibraryEmpty;
    NSMutableDictionary *__subCollectionActiveCountFetchOperations;
    NSMutableDictionary *__subCollectionActiveKeyAssetsFetchOperations;
    NSArray *__collectionListBySection;
    NSArray *__collectionsFetchResultBySection;
    NSArray *__virtualCollections;
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_configuration;
}

@property (strong, nonatomic, setter=_setCollectionListBySection:) NSArray *_collectionListBySection; // @synthesize _collectionListBySection=__collectionListBySection;
@property (strong, nonatomic, setter=_setCollectionsFetchResultBySection:) NSArray *_collectionsFetchResultBySection; // @synthesize _collectionsFetchResultBySection=__collectionsFetchResultBySection;
@property (readonly, nonatomic) NSMutableDictionary *_subCollectionActiveCountFetchOperations; // @synthesize _subCollectionActiveCountFetchOperations=__subCollectionActiveCountFetchOperations;
@property (readonly, nonatomic) NSMutableDictionary *_subCollectionActiveKeyAssetsFetchOperations; // @synthesize _subCollectionActiveKeyAssetsFetchOperations=__subCollectionActiveKeyAssetsFetchOperations;
@property (strong, nonatomic) NSArray *_virtualCollections; // @synthesize _virtualCollections=__virtualCollections;
@property (readonly, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property (readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @dynamic dataSource;
@property (readonly) NSObject<OS_os_log> *dataSourceManagerLog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long numberOfPendingKeyAssetFetches;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (id)_changedSubCollectionIndexesBySections;
- (BOOL)_containsAnyAlbumsWithAssets:(id)arg1;
- (BOOL)_containsAnyAssets:(id)arg1;
- (void)_endSignpostForFetchOperation:(id)arg1;
- (void)_enumerateAllPhotoKitCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_fetchAndUpdateCountsForCollection:(id)arg1;
- (void)_fetchKeyAssetsForCollection:(id)arg1;
- (struct PXTwoTuple *)_filterFetchResult:(id)arg1;
- (unsigned long long)_fixedOrderPriorityForVirtualCollection:(id)arg1;
- (struct PXTwoTuple *)_getSectionedCollectionListAndFetchResultsFromFetchResult:(id)arg1;
- (void)_initiateBackgroundFetchingIfNeededForCollection:(id)arg1;
- (BOOL)_isEmpty;
- (BOOL)_isImportsAssetCollection:(id)arg1;
- (BOOL)_isPlacesAlbumAssetCollection:(id)arg1;
- (BOOL)_needsFetchResultForCollection:(id)arg1;
- (BOOL)_needsKeyAssetsFetchResultForCollection:(id)arg1;
- (id)_newDataSource;
- (void)_publishPendingCollectionChanges;
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;
- (void)_recursivelyEnumerateAssetCollectionsInFetchResult:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_resumeFetchOperations;
- (void)_resumeKeyAssetsFetchOperations;
- (BOOL)_shouldIncludeCollection:(id)arg1;
- (id)_subitemChangeDetailsByItemBySection;
- (BOOL)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 fetchResultChangeDetails:(id)arg2;
- (void)_updateCollectionIndexMappingForFilteredFetchResults;
- (void)_updateDataSourceForChangeOnCollection:(id)arg1 withFetchResult:(id)arg2;
- (void)_updateFilteredCollectionsFetchResults;
- (void)_updateKeyAssetsCacheForCollection:(id)arg1 withFetchResult:(id)arg2 otherFetchResultsByAssetCollection:(id)arg3;
- (void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2;
- (id)assetsFetchResultForCollection:(id)arg1;
- (BOOL)canDeleteCollection:(id)arg1;
- (BOOL)canEditAlbums;
- (BOOL)canRenameCollection:(id)arg1;
- (BOOL)canReorderCollection:(id)arg1;
- (void)collectionFetchOperationDidBegin:(id)arg1;
- (void)collectionFetchOperationDidCancel:(id)arg1;
- (void)collectionFetchOperationDidComplete:(id)arg1;
- (BOOL)containsAnyAssets:(id)arg1;
- (id)createInitialDataSource;
- (void)dealloc;
- (long long)estimatedCountForAssetCollection:(id)arg1;
- (id)fetchResultForSubCollection:(id)arg1;
- (BOOL)hasAssetsFetchResultForCollection:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)initiateBackgroundFetchingIfNeeded;
- (BOOL)isCachedFetchResultOutdatedForCollection:(id)arg1;
- (id)keyAssetsFetchResultForCollection:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)resumeBackgroundFetchingIfNeeded;
- (void)startCoalescingFetchResultChanges;
- (void)stopCoalescingAndPublishFetchResultChanges;
- (id)uncachedFetchResultForSubCollection:(id)arg1;
- (id)uncachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (void)waitUntilBackgroundFetchingFinishedWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

