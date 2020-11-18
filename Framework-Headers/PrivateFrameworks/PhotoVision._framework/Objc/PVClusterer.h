//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoVision/PVFaceClusteringProtocol-Protocol.h>

@class NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, PVCanceler, PVContext, PVEventManager, PVQueue, PVSuggestionRequest, VNCanceller, VNClustererBuilder;
@protocol PVPersistenceDelegate, PVVisionIntegrating;

@interface PVClusterer : NSObject <PVFaceClusteringProtocol>
{
    id<PVVisionIntegrating> _visionIntegration;
    id<PVPersistenceDelegate> _persistenceDelegate;
    PVQueue *_processingQueue;
    PVContext *_context;
    NSURL *_cacheDirUrl;
    NSURL *_cacheFileUrl;
    NSString *_clusteringType;
    NSNumber *_threshold;
    NSSet *_faceCSNsInClusterCache;
    unsigned long long _nextSeqNum;
    NSMutableSet *_faceIdStrsToAdd;
    NSMutableSet *_faceCSNsToRemove;
    unsigned long long _accumulatedChangesCount;
    unsigned long long _nextClusterTriggeringAccumulatedChangesCount;
    PVCanceler *_clusteringCanceler;
    VNCanceller *_visionCanceler;
    VNClustererBuilder *_clusterBuilder;
    BOOL _rebuildClusterer;
    NSMutableArray *_outstandingSuggestionRequests;
    PVSuggestionRequest *_currentSuggestionRequest;
    NSLock *_suggestionLock;
    NSLock *_currentStatusSnapshotLock;
    CDStruct_6069b02b _currentStatusSnapshot;
    BOOL _currentStatusSnapshotIsValid;
    NSLock *_propertyDictionaryLock;
    NSMutableDictionary *_propertyDictionary;
    long long _clustererBringUpState;
    NSDate *_timestampOfLastClusterComparison;
    PVEventManager *_eventManager;
}

@property (nonatomic) long long clustererBringUpState; // @synthesize clustererBringUpState=_clustererBringUpState;
@property (readonly, nonatomic) long long clustererState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) PVEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL needsFullSync;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly) Class superclass;

+ (void)initialize;
+ (BOOL)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_cancelClusteringAndRestoreClusterCache:(BOOL)arg1;
- (id)_faceObservationsFromFaceCSNs:(id)arg1;
- (id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3 groupingIdentifiers:(id)arg4;
- (id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3;
- (BOOL)_performAndPersistClustersByAddingFaceObs:(id)arg1 groupingIdentifiers:(id)arg2 removingFaceObs:(id)arg3 updateFaces:(id)arg4 canceler:(id)arg5 error:(id *)arg6;
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
- (BOOL)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id *)arg1 lastClusterSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_processingQueuePerformForcedFaceClustering:(BOOL)arg1 withCanceler:(id)arg2;
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id *)arg2 withCanceler:(id)arg3;
- (BOOL)_processingQueueResetClusterCache:(id *)arg1;
- (BOOL)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id *)arg4;
- (BOOL)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)_processingQueueSaveClusterCache:(id *)arg1;
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2;
- (id)_propertyDictionaryFileURL;
- (void)_readPropertyDictionary;
- (void)_recordClusterRebuildRequired:(BOOL)arg1;
- (void)_recordClusteringState:(BOOL)arg1;
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordCurrentStatus:(CDStruct_6069b02b)arg1;
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_removeEmptyGroups;
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;
- (id)_stringForPVClustererBringUpState:(long long)arg1;
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id *)arg3;
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;
- (void)cancelAllSuggestionRequests;
- (void)cancelClustering;
- (void)cancelSuggestionRequest:(id)arg1;
- (void)clusterAndWait;
- (void)clusterIfNecessaryAndWait;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id *)arg3;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id *)arg3;
- (BOOL)getClusters:(id *)arg1 threshold:(double *)arg2 utilizingGPU:(BOOL *)arg3 error:(id *)arg4;
- (id)initWithContext:(id)arg1 persistenceDelegate:(id)arg2 cacheDirectoryURL:(id)arg3 visionIntegration:(id)arg4;
- (BOOL)isReadyToReturnSuggestions;
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)numberOfAccumulatedClusterChanges;
- (void)performClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (long long)restoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 error:(id *)arg2;
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;
- (id)status;
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id *)arg2;
- (void)terminate;

@end
