//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PHALibraryChangeResponder-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>

@class NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSObject, NSProgress, NSString, PGManager, PHACoalescer, PHALibraryChangeBuffer, PHAPredicateValidator;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PHAGraphServiceWorker : PHAWorker <PHALibraryChangeResponder, PLPhotoAnalysisGraphServiceProtocol>
{
    unsigned long long _inq_state;
    BOOL _serviceEnabled;
    NSDate *_lastTodayWidgetMemoryCreationDate;
    NSDictionary *_snapshotFilenameLookup;
    unsigned long long _flags;
    NSProgress *_currentGraphRebuildProgress;
    PGManager *_graphManager;
    PGManager *_lastGraphManager;
    NSMutableDictionary *_pendingGraphReadyCallbacks;
    PHALibraryChangeBuffer *_pendingLibraryChanges;
    PHAPredicateValidator *_relatedRequestPredicateValidator;
    PHACoalescer *_libraryChangeForegroundUpdateCoalescer;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSDate *_lastLibraryChangeGraphUpdateJobCompletionDate;
    NSHashTable *_pendingRequestReferences;
    long long _pendingRequestReferenceCount;
    NSObject<OS_os_transaction> *_graphWorkerWarmedUpTransaction;
}

@property (strong) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property (strong) NSProgress *currentGraphRebuildProgress; // @synthesize currentGraphRebuildProgress=_currentGraphRebuildProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long flags; // @synthesize flags=_flags;
@property (strong) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property (strong) NSObject<OS_os_transaction> *graphWorkerWarmedUpTransaction; // @synthesize graphWorkerWarmedUpTransaction=_graphWorkerWarmedUpTransaction;
@property (readonly) unsigned long long hash;
@property (weak) PGManager *lastGraphManager; // @synthesize lastGraphManager=_lastGraphManager;
@property (strong) NSDate *lastLibraryChangeGraphUpdateJobCompletionDate; // @synthesize lastLibraryChangeGraphUpdateJobCompletionDate=_lastLibraryChangeGraphUpdateJobCompletionDate;
@property (strong) PHACoalescer *libraryChangeForegroundUpdateCoalescer; // @synthesize libraryChangeForegroundUpdateCoalescer=_libraryChangeForegroundUpdateCoalescer;
@property (strong) NSMutableDictionary *pendingGraphReadyCallbacks; // @synthesize pendingGraphReadyCallbacks=_pendingGraphReadyCallbacks;
@property (strong) PHALibraryChangeBuffer *pendingLibraryChanges; // @synthesize pendingLibraryChanges=_pendingLibraryChanges;
@property long long pendingRequestReferenceCount; // @synthesize pendingRequestReferenceCount=_pendingRequestReferenceCount;
@property (strong) NSHashTable *pendingRequestReferences; // @synthesize pendingRequestReferences=_pendingRequestReferences;
@property (strong) PHAPredicateValidator *relatedRequestPredicateValidator; // @synthesize relatedRequestPredicateValidator=_relatedRequestPredicateValidator;
@property unsigned long long state;
@property (readonly) Class superclass;

+ (long long)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)arg1;
+ (void)initialize;
+ (id)stringFromGraphServiceState:(unsigned long long)arg1;
+ (BOOL)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+ (short)workerType;
- (void).cxx_destruct;
- (id)_PHMemoryCategoryValueToDataAggregationKeyLookup;
- (id)_assetCollectionForLocalIdentifier:(id)arg1;
- (id)_collectionListForLocalIdentifier:(id)arg1;
- (id)_dataAggregationKeyForCategory:(long long)arg1 subCategory:(long long)arg2 lookupTable:(id)arg3;
- (id)_diagnosticsLogsRootFolderPath;
- (id)_featureVectorInfoWithMemory:(id)arg1;
- (id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2;
- (id)_infoForMomentsBackingMemory:(id)arg1;
- (BOOL)_isLibraryBeingSynchronized;
- (void)_logAggregatedStatistics:(id)arg1;
- (long long)_phCategoryWithPGCategory:(unsigned long long)arg1;
- (long long)_phSubcategoryWithPGSubcategory:(long long)arg1;
- (long long)_phTitleCategoryForPGTitleCategory:(long long)arg1;
- (BOOL)_shouldAggregateDataForReporting:(unsigned long long)arg1;
- (long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1;
- (BOOL)allowCooldownForWorkerChange:(id)arg1;
- (id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2;
- (id)backgroundMemoryGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callAndClearPendingReadyCallbacksWithResult:(BOOL)arg1 error:(id)arg2;
- (BOOL)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)checkForWritablePersistentStorageDirectoryURL;
- (void)computeDiffWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cooldown;
- (id)currentlyUnavailableError;
- (void)didCompleteRebuildOrDiffSuccessfully;
- (BOOL)didExceedtimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2;
- (void)didFinishLastPendingRequest;
- (id)diffComputationJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchOptionsWithCurrentPhotoLibraryFromFetchOptions:(id)arg1;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)graphRebuildJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)graphUpdateDetailsForLibraryChangeSnapshot:(id)arg1;
- (BOOL)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobForDiffComputationInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobForGraphRebuildInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobForPendingLibraryChangesInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1;
- (id)informationDictionaryForAsset:(id)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (BOOL)isEnabled;
- (BOOL)isQuiescent;
- (id)libraryChangeGraphUpdateJobForPendingChangesWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)libraryChangeListener:(id)arg1 gotRawChange:(id)arg2;
- (id)libraryTemporarilyUnavailableError;
- (void)markAssetsInChangeDetails:(id)arg1 withState:(int)arg2;
- (void)markLastBackgroundGraphRebuildJobDate;
- (id)memoryDebugInformationWithMoments:(id)arg1 precision:(unsigned long long)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pendingRequestReferenceDidDeallocateForAddress:(void *)arg1;
- (id)pendingRequestReferenceForLabel:(id)arg1;
- (void)performGraphUpdates:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)rebuildGraphWithContext:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)rebuildGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestAllSocialGroupsForFaceCollectionIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetCollectionsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToFaceCollectionIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestCurationDebugInformationForAsset:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphServiceStatisticWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestRelatedDebugInformationBetweenMomentForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestRelatedMomentsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSnapshotServiceForCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSocialGroupsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSortedArrayOfFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)retryStartup;
- (void)setupGraphManager;
- (void)setupLibraryChangeListener;
- (void)setupPredicateValidator;
- (BOOL)shouldAllowBackgroundActivityWithDescription:(id)arg1;
- (BOOL)shouldCooldownForConstraintChange:(id)arg1;
- (BOOL)shouldStopOperationInProgress;
- (BOOL)shouldUnloadGraphOnCooldown;
- (BOOL)shouldWarmupForConstraintChange:(id)arg1;
- (void)shutdown;
- (void)shutdownAndWaitForGraphManager;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)startProcessingGraphUpdateJob:(id)arg1;
- (void)startup;
- (id)statusAsDictionary;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (long long)unavailableErrorCodeForCurrentState;
- (void)warmup;
- (BOOL)warmupBasedOnConstraintChanges;
- (BOOL)workerJobCausesCooldown:(id)arg1;

@end

