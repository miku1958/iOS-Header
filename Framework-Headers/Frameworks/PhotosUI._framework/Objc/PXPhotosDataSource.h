//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, PHAsset, PHAssetCollection, PHCollection, PHFetchResult, PHPhotoLibrary, PXBackgroundFetchToken, PXLIFOQueue, PXPhotosDataSourceSectionCache;
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
    NSMutableDictionary *_preparedChangeDetailsByAssetCollection;
    NSMutableDictionary *_infoForAssetCollection;
    BOOL _backgroundFetchOriginSectionChanged;
    BOOL _needToStartBackgroundFetch;
    PXBackgroundFetchToken *_backgroundFetchToken;
    BOOL _interruptBackgroundFetch;
    BOOL _pauseBackgroundFetchResultsDelivery;
    NSMutableSet *_pauseLibraryChangeDeliveryTokens;
    _Atomic int _backgroundFetchId;
    NSMutableDictionary *_pendingResultsByAssetCollection;
    NSObject<OS_dispatch_queue> *_pendingResultsIsolationQueue;
    BOOL _processAndPublishScheduledOnRunloop;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXLIFOQueue *_backgroundLIFOQueue;
    NSMutableOrderedSet *_queuedAssetCollectionsToFetch;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSMutableDictionary *_facesByAssetCache;
    NSMutableDictionary *_weightByAssetCache;
    NSArray *_filterPersons;
    BOOL _hideHiddenAssets;
    NSArray *_fetchPropertySets;
    long long _curationType;
    PHFetchResult *_emptyAssetsFetchResult;
    NSNumber *_cachedIsEmpty;
    long long _nestedChanges;
    PXPhotosDataSource *_parentDataSource;
    BOOL _reverseSortOrder;
    BOOL _wantsCurationByDefault;
    BOOL _isBackgroundFetching;
    BOOL _allowNextChangeDeliveryOnAllRunLoopModes;
    PHCollection *_containerCollection;
    unsigned long long _options;
    unsigned long long _versionIdentifier;
    PHFetchResult *_collectionListFetchResult;
    PHAsset *_referenceAsset;
    long long _backgroundFetchOriginSection;
    NSPredicate *_basePredicate;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    NSSet *_allowedOIDs;
    unsigned long long _fetchLimit;
    NSArray *_sortDescriptors;
    unsigned long long __previousCollectionsCount;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, setter=_setPreviousCollectionsCount:) unsigned long long _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property (nonatomic) BOOL allowNextChangeDeliveryOnAllRunLoopModes; // @synthesize allowNextChangeDeliveryOnAllRunLoopModes=_allowNextChangeDeliveryOnAllRunLoopModes;
@property (copy, nonatomic) NSSet *allowedOIDs; // @synthesize allowedOIDs=_allowedOIDs;
@property (copy, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property (readonly, nonatomic) BOOL areAllSectionsConsideredAccurate;
@property (nonatomic) long long backgroundFetchOriginSection; // @synthesize backgroundFetchOriginSection=_backgroundFetchOriginSection;
@property (readonly, nonatomic) NSPredicate *basePredicate; // @synthesize basePredicate=_basePredicate;
@property (strong, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
@property (readonly, nonatomic) PHAssetCollection *containerAssetCollection;
@property (readonly, nonatomic) PHCollection *containerCollection; // @synthesize containerCollection=_containerCollection;
@property (readonly, nonatomic) BOOL containsMultipleAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long estimatedOtherCount;
@property (readonly, nonatomic) long long estimatedPhotosCount;
@property (readonly, nonatomic) long long estimatedVideosCount;
@property (nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property (strong, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isBackgroundFetching; // @synthesize isBackgroundFetching=_isBackgroundFetching;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isImmutable;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (readonly, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property (nonatomic) BOOL reverseSortOrder; // @synthesize reverseSortOrder=_reverseSortOrder;
@property (copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property (nonatomic) BOOL wantsCurationByDefault; // @synthesize wantsCurationByDefault=_wantsCurationByDefault;
@property (readonly, nonatomic) BOOL wantsCurationForFirstAssetCollection;

+ (id)_curationSharedBackgroundQueue;
+ (id)_sharedPrefetchQueue;
+ (id)backgroundFetchingGroup;
+ (void)waitForAllBackgroundFetchingToFinish;
- (void).cxx_destruct;
- (BOOL)_addResultTuple:(id)arg1 forAssetCollection:(id)arg2 toMutableResultRecord:(id)arg3;
- (BOOL)_allSectionsConsideredAccurate;
- (id)_allowedOIDsForAssetCollection:(id)arg1;
- (id)_allowedUUIDsForAssetCollection:(id)arg1;
- (BOOL)_areFiltersDisabledForAssetCollection:(id)arg1;
- (BOOL)_areSecondaryFetchesEnabled;
- (unsigned long long)_assetCollectionFetchStatus:(id)arg1;
- (id)_assetOidsByAssetCollectionForAssetsAtIndexPathsInSet:(id)arg1;
- (id)_assetsForAssetCollection:(id)arg1;
- (void)_bringFetchResultsUpToDateWithFetcherCacheForAssetCollection:(id)arg1;
- (unsigned long long)_cachedSectionForAssetCollection:(id)arg1;
- (void)_cancelBackgroundFetchIfNeeded;
- (void)_childDataSourceDidUpdateFetchesForAssetCollection:(id)arg1;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_commonInit;
- (id)_createResultRecordForAssetCollection:(id)arg1;
- (void)_didFinishBackgroundFetchingForId:(long long)arg1;
- (void)_enumerateChangeObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_fetchAssetsStartingAtIndexPath:(id)arg1;
- (void)_fetchRemainingCollectionsBackgroundLoopWithId:(long long)arg1;
- (id)_fetchTupleForAssetCollection:(id)arg1 calledOnMainQueue:(BOOL)arg2 isLimitedInitialFetch:(BOOL)arg3;
- (id)_fetcher;
- (id)_filterPredicateForAssetCollection:(id)arg1;
- (id)_finalFilterPredicateForAssetCollection:(id)arg1;
- (BOOL)_forceAccurateSection:(long long)arg1 andNumberOfSurroundingSectionsWithContent:(long long)arg2;
- (void)_getFetchLimit:(unsigned long long *)arg1 fetchWithReverseSortOrder:(BOOL *)arg2 forAssetCollection:(id)arg3 isLimitedInitialFetch:(BOOL)arg4;
- (id)_inaccurateAssetCollections;
- (id)_inclusionPredicateForAssetCollection:(id)arg1;
- (void)_incrementVersionIdentifier;
- (void)_initResultRecordsWithOldOptions:(unsigned long long)arg1 newOptions:(unsigned long long)arg2;
- (void)_interruptBackgroundFetch;
- (BOOL)_isResulTupleApplicable:(id)arg1 forAssetCollection:(id)arg2;
- (id)_keyAssetsForAssetCollection:(id)arg1;
- (id)_mutableResultRecordForAssetCollection:(id)arg1;
- (long long)_nextBackgroundFetchId;
- (id)_observerInterestingAssetReferences;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_performManualChangesForAssetCollections:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)_performManualChangesForAssetCollections:(id)arg1 collectionsToDiff:(id)arg2 changeBlock:(CDUnknownBlockType)arg3;
- (void)_performManualChangesForAssetCollections:(id)arg1 collectionsToDiff:(id)arg2 collectionsToChange:(id)arg3 changeBlock:(CDUnknownBlockType)arg4;
- (void)_performManualReloadWithChangeBlock:(CDUnknownBlockType)arg1;
- (void)_performProcessAndPublishSelectorInDefaultRunLoopMode;
- (void)_prefetchIndexesByFetchResult:(id)arg1 onlyThumbnails:(BOOL)arg2;
- (void)_prepareDiffsForPendingResultsWithCompletion:(CDUnknownBlockType)arg1;
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
- (id)assetReferenceForAsset:(id)arg1 containedInAssetCollectionWithType:(long long)arg2;
- (id)assetsAtIndexPaths:(id)arg1;
- (id)assetsInSection:(long long)arg1;
- (id)assetsStartingAtIndexPath:(id)arg1;
- (void)clearResultsForAssetCollection:(id)arg1;
- (void)clearResultsForAssetCollections:(id)arg1;
- (id)createDataSourceWithAssetsAtIndexPaths:(id)arg1;
- (id)curatedAssetsForAssetCollection:(id)arg1;
- (id)curatedAssetsInSection:(long long)arg1;
- (void)dealloc;
- (void)enumerateStartingAtIndexPath:(id)arg1 reverseDirection:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1;
- (id)facesAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)fetchResultWithAssetsAtIndexPaths:(id)arg1;
- (id)fetchResultWithAssetsInSections:(id)arg1;
- (id)fetchResultsByAssetCollection;
- (id)firstAssetCollection;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateAssetCollectionsIfNeeded:(id)arg1 reloadChanges:(BOOL)arg2;
- (BOOL)forceAccurateIndexPath:(id)arg1 andAssetsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
- (BOOL)forceAccurateSectionsIfNeeded:(id)arg1 reloadChanges:(BOOL)arg2;
- (void)forceExcludeAssetsAtIndexPaths:(id)arg1;
- (void)forceExcludeAssetsAtIndexes:(id)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (void)forceIncludeAssetsAtIndexes:(id)arg1;
- (BOOL)hasCurationForAssetCollection:(id)arg1;
- (long long)indexForAsset:(id)arg1 inCollection:(id)arg2 hintIndex:(long long)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollections:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (id)indexPathForAssetReference:(id)arg1;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollection:(id)arg4;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollections:(id)arg4;
- (id)indexPathForFirstAsset;
- (id)indexPathForLastAsset;
- (id)infoForAssetCollection:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPhotosDataSourceConfiguration:(id)arg1;
- (BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;
- (BOOL)isCuratedAssetsEmptyForAssetCollection:(id)arg1;
- (BOOL)isCuratedAssetsFutilelyForAssetCollection:(id)arg1;
- (long long)keyAssetIndexInSection:(long long)arg1;
- (id)keyAssetsInSection:(long long)arg1;
- (id)lastAssetCollection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1;
- (id)pauseChangeDeliveryAndBackgroundLoadingWithTimeout:(double)arg1;
- (void)pauseChangeDeliveryFor:(double)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(BOOL)arg2;
- (void)prefetchAssetsAtIndexPaths:(id)arg1 onlyThumbnailAssets:(BOOL)arg2;
- (void)prefetchAssetsInSections:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)refetchResultsForAssetCollection:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (unsigned long long)sectionForAssetCollection:(id)arg1;
- (id)sectionsForAssetCollections:(id)arg1;
- (void)setDisableFilters:(BOOL)arg1 forAssetCollection:(id)arg2;
- (void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2;
- (void)setKeyAsset:(id)arg1 forAssetCollection:(id)arg2;
- (void)setWantsCuration:(BOOL)arg1 forAssetCollection:(id)arg2;
- (void)setWantsCurationForAllCollections:(BOOL)arg1 collectionsToDiff:(id)arg2;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (BOOL)supportsDynamicBackgroundFetching;
- (id)uncuratedAssetsForAssetCollection:(id)arg1;
- (id)uncuratedAssetsInSection:(long long)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (BOOL)wantsCurationForAssetCollection:(id)arg1;
- (double)weightForAsset:(id)arg1;

@end

