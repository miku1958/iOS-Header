//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSPredicate, NSSet, NSString, PHAsset, PHFetchResult, PHPhotoLibrary, PXLIFOQueue, PXPhotosDataSourceSectionCache;
@protocol OS_dispatch_queue;

@interface PXPhotosDataSource : NSObject <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSHashTable *_observersQueue_observers;
    PXPhotosDataSourceSectionCache *__sectionCache;
    PXPhotosDataSourceSectionCache *__preparedSectionCache;
    NSDictionary *_hintIndexPathByAssetReferenceCache;
    NSDictionary *_preparedIndexPathByAssetReferenceCache;
    NSDictionary *_preparedResultRecordChangeDetailsByAssetCollection;
    NSMutableDictionary *_resultRecordByAssetCollection;
    NSMutableSet *__inaccurateAssetCollections;
    BOOL _inaccurateAssetCollectionsNeedsUpdate;
    NSMutableDictionary *_infoForAssetCollection;
    BOOL _backgroundFetchOriginSectionChanged;
    BOOL _needToStartBackgroundFetch;
    BOOL _isBackgroundFetching;
    BOOL _interruptBackgroundFetch;
    NSMutableDictionary *_pendingResultsByAssetCollection;
    NSObject<OS_dispatch_queue> *_pendingResultsIsolationQueue;
    BOOL _processAndPublishScheduledOnRunloop;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXLIFOQueue *_backgroundLIFOQueue;
    NSMutableOrderedSet *_queuedAssetCollectionsToFetch;
    NSMutableDictionary *_facesByAssetCache;
    NSMutableDictionary *_weightByAssetCache;
    NSArray *_filterPersons;
    BOOL _hideHiddenAssets;
    BOOL _reverseSortOrder;
    BOOL _curate;
    unsigned long long _options;
    unsigned long long _versionIdentifier;
    PHFetchResult *_collectionListFetchResult;
    PHAsset *_referenceAsset;
    long long _backgroundFetchOriginSection;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    unsigned long long _fetchLimit;
    unsigned long long __previousCollectionsCount;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, setter=_setPreviousCollectionsCount:) unsigned long long _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property (copy, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property (nonatomic) long long backgroundFetchOriginSection; // @synthesize backgroundFetchOriginSection=_backgroundFetchOriginSection;
@property (strong, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
@property (readonly, nonatomic) BOOL containsMultipleAssets;
@property (nonatomic) BOOL curate; // @synthesize curate=_curate;
@property (readonly, nonatomic) BOOL curatedFutilely;
@property (readonly, nonatomic) BOOL curatedIsEmpty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long estimatedAllCount;
@property (readonly, nonatomic) long long estimatedOtherCount;
@property (readonly, nonatomic) long long estimatedPhotosCount;
@property (readonly, nonatomic) long long estimatedVideosCount;
@property (nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property (strong, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isImmutable;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (readonly, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property (nonatomic) BOOL reverseSortOrder; // @synthesize reverseSortOrder=_reverseSortOrder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;

+ (id)_curationSharedBackgroundQueue;
+ (id)_emptyAssetsFetchResult;
- (void).cxx_destruct;
- (BOOL)_allSectionsConsideredAccurate;
- (id)_allowedUUIDsForAssetCollection:(id)arg1;
- (BOOL)_areFiltersDisabledForAssetCollection:(id)arg1;
- (id)_assetOidsByAssetCollectionForAssetsAtIndexPaths:(id)arg1;
- (unsigned long long)_cachedSectionForAssetCollection:(id)arg1;
- (void)_cancelBackgroundFetchIfNeeded;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_commonInit;
- (void)_createFilteredFetchResult:(out id *)arg1 curatedFetchResult:(out id *)arg2 keyAssetsFetchResult:(out id *)arg3 forAssetCollection:(id)arg4 calledOnMainQueue:(BOOL)arg5;
- (id)_createResultRecordForAssetCollection:(id)arg1;
- (void)_didFinishBackgroundFetching;
- (void)_enumerateChangeObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_fetchAssetsStartingAtIndexPath:(id)arg1;
- (void)_fetchRemainingCollectionsBackgroundLoop;
- (id)_fetcher;
- (id)_filterPredicateForAssetCollection:(id)arg1;
- (id)_finalFilterPredicateForAssetCollection:(id)arg1;
- (id)_inaccurateAssetCollections;
- (id)_inclusionPredicateForAssetCollection:(id)arg1;
- (void)_incrementVersionIdentifier;
- (void)_interruptBackgroundFetch;
- (BOOL)_isAssetCollectionAccurate:(id)arg1;
- (BOOL)_isCurationEnabled;
- (id)_mutableResultRecordForAssetCollection:(id)arg1;
- (id)_observerInterestingAssetReferences;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_performManualChangesForAssetCollections:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)_performManualReloadWithChangeBlock:(CDUnknownBlockType)arg1;
- (void)_processAndPublishPendingCollectionFetchResults;
- (void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
- (void)_publishChange:(id)arg1;
- (void)_publishDidReceivePhotoLibraryChange:(id)arg1;
- (void)_publishReloadChange;
- (void)_publishWillChange;
- (id)_resultRecordForAssetCollection:(id)arg1;
- (BOOL)_reverseSortOrderForAssetCollection:(id)arg1;
- (id)_sectionCache;
- (void)_updateInaccurateAssetCollectionsIfNeeded;
- (id)approximateAssetsAtIndexPaths:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionForSection:(long long)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetsAtIndexPaths:(id)arg1;
- (id)assetsInSection:(long long)arg1;
- (id)assetsStartingAtIndexPath:(id)arg1;
- (void)clearResultsForAssetCollection:(id)arg1;
- (id)curatedAssetsInSection:(long long)arg1;
- (void)dealloc;
- (void)enumerateStartingAtIndexPath:(id)arg1 reverseDirection:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)facesAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)fetchResultWithAssetsAtIndexPaths:(id)arg1;
- (id)fetchResultWithAssetsInSections:(id)arg1;
- (id)fetchResultsByAssetCollection;
- (id)firstAssetCollection;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateIndexPath:(id)arg1 andAssetsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
- (void)forceExcludeAssetsAtIndexPaths:(id)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (long long)indexForAsset:(id)arg1 inCollection:(id)arg2 hintIndex:(long long)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (id)indexPathForAssetReference:(id)arg1;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollection:(id)arg4;
- (id)indexPathForFirstAsset;
- (id)indexPathForLastAsset;
- (id)infoForAssetCollection:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPhotosDataSourceConfiguration:(id)arg1;
- (BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsInSection:(long long)arg1;
- (id)lastAssetCollection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)pauseChangeDeliveryFor:(double)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(BOOL)arg2;
- (void)prefetchAssetsAtIndexPaths:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)refetchResultsForAssetCollection:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (unsigned long long)sectionForAssetCollection:(id)arg1;
- (void)setDisableFilters:(BOOL)arg1 forAssetCollection:(id)arg2;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (id)uncuratedAssetsInSection:(long long)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (double)weightForAsset:(id)arg1;

@end

