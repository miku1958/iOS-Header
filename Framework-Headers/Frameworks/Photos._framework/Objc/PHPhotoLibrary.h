//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHBatchFetchingArrayDataSource-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSString, PHVariationCacheManager, PLPhotoLibrary;
@protocol OS_dispatch_queue, PLPhotoAnalysisServiceTaxonomyResolver;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource>
{
    BOOL _unknownMergeEvent;
    BOOL _isChangeProcessingPending;
    BOOL _clearsOIDCacheAfterFetchResultDealloc;
    PHVariationCacheManager *_variationCacheManager;
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_changeHandlingPhotoLibrary;
    PLPhotoLibrary *_mainQueuePhotoLibrary;
    PLPhotoLibrary *_backgroundQueuePhotoLibrary;
    PLPhotoLibrary *_backgroundQueueObjectFetchingPhotoLibrary;
    PLPhotoLibrary *_transactionPhotoLibrary;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSMutableOrderedSet *_insertRequests;
    NSMutableOrderedSet *_updateRequests;
    NSMutableOrderedSet *_deleteRequests;
    NSMutableDictionary *_saveTokensToKnownUUIDs;
    NSMutableDictionary *_changeRequests;
    NSHashTable *_fetchResults;
    NSHashTable *_internalObservers;
    NSHashTable *_externalObservers;
    NSMutableDictionary *_changeNotificationInfo;
    double _lastChangeProcessingStarted;
}

@property (strong, nonatomic) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary; // @synthesize backgroundQueueObjectFetchingPhotoLibrary=_backgroundQueueObjectFetchingPhotoLibrary;
@property (strong, nonatomic) PLPhotoLibrary *backgroundQueuePhotoLibrary; // @synthesize backgroundQueuePhotoLibrary=_backgroundQueuePhotoLibrary;
@property (strong, nonatomic) PLPhotoLibrary *changeHandlingPhotoLibrary; // @synthesize changeHandlingPhotoLibrary=_changeHandlingPhotoLibrary;
@property (strong, nonatomic) NSMutableDictionary *changeNotificationInfo; // @synthesize changeNotificationInfo=_changeNotificationInfo;
@property (strong, nonatomic) NSMutableDictionary *changeRequests; // @synthesize changeRequests=_changeRequests;
@property (nonatomic) BOOL clearsOIDCacheAfterFetchResultDealloc; // @synthesize clearsOIDCacheAfterFetchResultDealloc=_clearsOIDCacheAfterFetchResultDealloc;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSMutableOrderedSet *deleteRequests; // @synthesize deleteRequests=_deleteRequests;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSHashTable *externalObservers; // @synthesize externalObservers=_externalObservers;
@property (strong, nonatomic) NSHashTable *fetchResults; // @synthesize fetchResults=_fetchResults;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableOrderedSet *insertRequests; // @synthesize insertRequests=_insertRequests;
@property (strong, nonatomic) NSHashTable *internalObservers; // @synthesize internalObservers=_internalObservers;
@property (nonatomic) BOOL isChangeProcessingPending; // @synthesize isChangeProcessingPending=_isChangeProcessingPending;
@property (nonatomic) double lastChangeProcessingStarted; // @synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted;
@property (strong, nonatomic) PLPhotoLibrary *mainQueuePhotoLibrary; // @synthesize mainQueuePhotoLibrary=_mainQueuePhotoLibrary;
@property (strong, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableDictionary *saveTokensToKnownUUIDs; // @synthesize saveTokensToKnownUUIDs=_saveTokensToKnownUUIDs;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver;
@property (strong, nonatomic) PLPhotoLibrary *transactionPhotoLibrary; // @synthesize transactionPhotoLibrary=_transactionPhotoLibrary;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property (nonatomic) BOOL unknownMergeEvent; // @synthesize unknownMergeEvent=_unknownMergeEvent;
@property (strong, nonatomic) NSMutableOrderedSet *updateRequests; // @synthesize updateRequests=_updateRequests;
@property (readonly, nonatomic) PHVariationCacheManager *variationCacheManager; // @synthesize variationCacheManager=_variationCacheManager;

+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (id)_descriptionOfEntitiesInChangeRequests:(id)arg1;
+ (id)_effectiveRootEntity:(id)arg1;
+ (void)_forceUserInterfaceReload;
+ (BOOL)_isInternalObserver:(id)arg1;
+ (long long)authorizationStatus;
+ (Class)classForFetchType:(id)arg1;
+ (long long)collectionListTypeForIdentifierCode:(id)arg1;
+ (id)fetchTypeForLocalIdentifierCode:(id)arg1;
+ (void)removeAllUniquedOIDs;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1;
+ (id)sharedPhotoLibrary;
+ (BOOL)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2;
+ (id)uniquedOID:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOIDsFromObjects:(id)arg1;
- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_beginTransaction;
- (void)_cancelTransaction:(CDUnknownBlockType)arg1;
- (void)_checkForPeopleUIFeatureWithFetchRequest:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (void)_commitTransaction:(CDUnknownBlockType)arg1;
- (id)_descriptionOfChanges;
- (BOOL)_preflightRequestedPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 error:(id *)arg4;
- (void)_processPendingChanges;
- (void)_removeObserver:(id)arg1;
- (void)_requestAnalysisProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)_unauthorized:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id *)arg2;
- (id)analysisProgressCountsForWorkerType:(short)arg1;
- (void)assertTransaction;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2;
- (id)bfa_photoLibrary;
- (id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)changeRequestForUUID:(id)arg1;
- (BOOL)cleanupInvalidIgnoreUntilDatesWithError:(id *)arg1;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 error:(id *)arg3;
- (void)enableNamingFlow;
- (id)exportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id *)arg2;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (BOOL)featureEnabledForWorkerType:(short)arg1;
- (BOOL)featureEnabledForWorkerType:(short)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchUpdatedObject:(id)arg1;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (id)graphStatisticsDescription:(id *)arg1;
- (id)graphStatusDescription:(id *)arg1;
- (void)handleMergeNotification:(id)arg1;
- (id)init;
- (id)initSharedLibrary;
- (BOOL)invalidatePersistentGraphCachesAndReturnError:(id *)arg1;
- (BOOL)invalidateTransientGraphCachesAndReturnError:(id *)arg1;
- (BOOL)isApplyingRequestedChanges;
- (BOOL)isFaceProcessingFinished;
- (BOOL)isNamingFlowEnabled:(CDUnknownBlockType)arg1;
- (id)mainQueueManagedObjectContext;
- (id)managedObjectContext;
- (id)managedObjectContextForCurrentQueueQoS;
- (BOOL)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)objectFetchingContextForCurrentQueueQoS;
- (id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2;
- (void)performCancellableChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)performCancellableChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)personPromotionProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)photoLibraryForCurrentQueueQoS;
- (id)pl_syncProgressAlbums;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(BOOL)arg3;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerFetchResult:(id)arg1;
- (void)registerUUID:(id)arg1 forSaveToken:(id)arg2;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
- (id)removeUuidForSaveToken:(id)arg1;
- (void)requestAnalysisProgressCountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestHighlightEstimatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestTotalProgressCountsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)resetPendingAnalysisStatesWithError:(id *)arg1;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)suggestedMePersonIdentifierWithError:(id *)arg1;
- (id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4;
- (id)transactionPLPhotoLibrary;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterFetchResult:(id)arg1;
- (void)updateClusterUsabilityCriteria;
- (id)urlForApplicationDataFolderIdentifier:(long long)arg1;
- (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 error:(id *)arg4;

@end

