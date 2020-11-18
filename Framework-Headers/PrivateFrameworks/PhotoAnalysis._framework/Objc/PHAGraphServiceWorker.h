//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PGGraphDataModelEnrichmentManagerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>

@class NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSObject, NSProgress, NSString, PGManager, PHAPredicateValidator;
@protocol OS_dispatch_queue, OS_os_transaction, PGGraphHealthRecording;

@interface PHAGraphServiceWorker : PHAWorker <PHAGraphRegistration, PGGraphDataModelEnrichmentManagerDelegate, PLPhotoAnalysisGraphServiceProtocol>
{
    unsigned long long _inq_state;
    BOOL _serviceEnabled;
    NSDate *_lastTodayWidgetMemoryCreationDate;
    NSDictionary *_snapshotFilenameLookup;
    unsigned long long _pendingGraphRequests;
    id<PGGraphHealthRecording> _graphHealthRecorder;
    NSProgress *_currentGraphRebuildProgress;
    PGManager *_graphManager;
    NSMutableDictionary *_pendingGraphReadyCallbacks;
    PHAPredicateValidator *_relatedRequestPredicateValidator;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSDate *_lastLibraryChangeGraphUpdateJobCompletionDate;
    NSHashTable *_pendingRequestReferences;
    long long _pendingRequestReferenceCount;
    NSObject<OS_os_transaction> *_graphWorkerWarmedUpTransaction;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property (strong, nonatomic) NSProgress *currentGraphRebuildProgress; // @synthesize currentGraphRebuildProgress=_currentGraphRebuildProgress;
@property (readonly, nonatomic) NSDate *dateOfLastGraphRebuild;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property (strong, nonatomic) NSObject<OS_os_transaction> *graphWorkerWarmedUpTransaction; // @synthesize graphWorkerWarmedUpTransaction=_graphWorkerWarmedUpTransaction;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastLibraryChangeGraphUpdateJobCompletionDate; // @synthesize lastLibraryChangeGraphUpdateJobCompletionDate=_lastLibraryChangeGraphUpdateJobCompletionDate;
@property (strong, nonatomic) NSMutableDictionary *pendingGraphReadyCallbacks; // @synthesize pendingGraphReadyCallbacks=_pendingGraphReadyCallbacks;
@property (nonatomic) long long pendingRequestReferenceCount; // @synthesize pendingRequestReferenceCount=_pendingRequestReferenceCount;
@property (strong, nonatomic) NSHashTable *pendingRequestReferences; // @synthesize pendingRequestReferences=_pendingRequestReferences;
@property (strong, nonatomic) PHAPredicateValidator *relatedRequestPredicateValidator; // @synthesize relatedRequestPredicateValidator=_relatedRequestPredicateValidator;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (long long)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)arg1;
+ (id)facesAndScenesProcessingProgressPercentageDataForPhotoLibrary:(id)arg1;
+ (void)initialize;
+ (id)stringFromGraphServiceState:(unsigned long long)arg1;
+ (short)workerType;
- (void).cxx_destruct;
- (id)_assetCollectionForLocalIdentifier:(id)arg1;
- (id)_assetCollectionForRelatedIdentifier:(id)arg1;
- (id)_basicPropertiesFromMemory:(id)arg1;
- (id)_collectionListForLocalIdentifier:(id)arg1;
- (id)_diagnosticsLogsRootFolderPath;
- (id)_featureVectorWithMemory:(id)arg1;
- (BOOL)_graphShouldBeConnected;
- (id)_infoForGraphCollectionBasedMemory:(id)arg1;
- (id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2 isTransientMemory:(BOOL)arg3;
- (id)_infoForMomentsBackingMemory:(id)arg1;
- (id)_infoForNotificationQualityOfMemory:(id)arg1;
- (void)_markEnrichmentNeededFollowingBackgroundRebuild:(BOOL)arg1;
- (id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2;
- (id)_minimalLegacyFeatureVectorWithMemory:(id)arg1;
- (long long)_phTitleCategoryForPGTitleCategory:(long long)arg1;
- (void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2 moodGenerationContext:(id)arg3;
- (id)_propertiesFromMemory:(id)arg1;
- (long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1;
- (unsigned long long)_validatedMemoryNotificationState:(int)arg1;
- (id)aggregatedStatsForMiroMoodCountVector:(id)arg1;
- (id)aggregatedStatsForMoodKeywordCountedSet:(id)arg1;
- (id)aggregatedStatsForPossibleMoodCountVector:(id)arg1;
- (id)aggregatedStatsForSuggestedMoodCountVector:(id)arg1;
- (id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2;
- (id)backgroundMemoryGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callAndClearPendingReadyCallbacksWithResult:(BOOL)arg1 error:(id)arg2;
- (BOOL)canRunWhenGraphIsLoaded;
- (BOOL)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)checkForWritablePersistentStorageDirectoryURL;
- (BOOL)completedJobTodayForBackgroundJobUserDefaultsKey:(id)arg1;
- (void)cooldown;
- (id)currentlyUnavailableError;
- (id)dataAggregationKeyForCategory:(unsigned long long)arg1 subCategory:(unsigned long long)arg2 lookupTable:(id)arg3;
- (id)dataModelEnrichmentJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)didExceedTimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2;
- (void)enrichDataModelWithOptions:(id)arg1 isEnrichmentJob:(BOOL)arg2 context:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)enrichmentContextToUseForEnrichmentJob;
- (void)enrichmentManager:(id)arg1 didCancelProcessor:(id)arg2;
- (void)enrichmentManager:(id)arg1 didFinishEnrichmentSuccessfully:(BOOL)arg2;
- (void)enrichmentManager:(id)arg1 didRunProcessor:(id)arg2;
- (BOOL)enrichmentManager:(id)arg1 shouldRunProcessor:(id)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)graphProcessHistoricalChangeJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)graphRebuildJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)handleOperation:(id)arg1;
- (BOOL)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobForDataModelEnrichmentInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobForGraphConsistencyUpdateInScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (BOOL)hasAdditionalJobForGraphRebuildInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobForMetricsReportingInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobForQuestionGenerationInScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)informationDictionaryForAsset:(id)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)invalidateGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)isEnabled;
- (BOOL)isQuiescent;
- (void)markLastBackgroundGraphConsistencyUpdateJobDate;
- (void)markLastBackgroundGraphRebuildJobDate;
- (id)memoryBlacklistableFeatureTypeValueToDataAggregationKeyLookup;
- (id)memoryBlacklistedFeatureTypeValueToDataAggregationKeyLookup;
- (id)memoryCategoryValueToDataAggregationKeyLookup;
- (id)metricReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pendingRequestReferenceDidDeallocateForAddress:(void *)arg1;
- (id)pendingRequestReferenceForLabel:(id)arg1;
- (id)questionGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 isRequestedRebuild:(BOOL)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestHighlightEstimatesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestLastQuestionGenerationJobDateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestM5CompatibleMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 context:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)retryStartup;
- (void)setupGraphManagerWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)setupPredicateValidator;
- (BOOL)shouldAggregateDataForReporting:(unsigned long long)arg1;
- (BOOL)shouldAllowBackgroundActivityWithDescription:(id)arg1;
- (BOOL)shouldStopOperationInProgress;
- (void)shutdown;
- (void)shutdownAndWaitForGraphManager;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)startProcessingGraphUpdateJob:(id)arg1;
- (void)startup;
- (id)statusAsDictionary;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)stopProcessingGraphUpdateJob:(id)arg1;
- (unsigned long long)synchronousOffQueueState;
- (long long)unavailableErrorCodeForCurrentState;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;

@end
