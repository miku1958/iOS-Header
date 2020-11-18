//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PVCVMLAnalyzer, PVClusterer, PVContext, PVDataAccessor, PVEventManager, PVFaceMerger;
@protocol PVCVMLIntegrating, PVNotificationListener, PVPersistenceDelegate;

@interface PhotoVision : NSObject
{
    id<PVCVMLIntegrating> _cvmlIntegration;
    id<PVNotificationListener> _notificationListener;
    id<PVPersistenceDelegate> _persistenceDelegate;
    PVContext *_context;
    PVCVMLAnalyzer *_analyzer;
    PVFaceMerger *_faceMerger;
    PVDataAccessor *_dataAccessor;
    PVEventManager *_eventManager;
    PVClusterer *_clusterer;
    NSURL *_cacheDirUrl;
}

+ (unsigned int)activeFaceAlgorithmVersion;
- (void).cxx_destruct;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)buildPersonsWithCanceler:(id)arg1 keyFaceUpdateBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)cancelAllSuggestionRequests;
- (void)cancelFaceClustering;
- (BOOL)cancelSuggestionRequest:(id)arg1;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (long long)clustererState;
- (id)clusteringStatus;
- (id)context;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;
- (BOOL)getFaceClusters:(id *)arg1 clusteringThreshold:(double *)arg2 utilizingGPU:(BOOL *)arg3 error:(id *)arg4;
- (id)initWithPersistenceDelegate:(id)arg1 notificationListener:(id)arg2 options:(id)arg3;
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;
- (unsigned long long)numberOfFacesPendingClustering;
- (void)performFaceClusteringAndWait;
- (void)performFaceClusteringIfNecessaryAndWait;
- (void)performFaceClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(BOOL)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)resetFaceClusteringStateWithContext:(id)arg1 error:(id *)arg2;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)stop;
- (id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)suggestionsForFaceClusterSequenceNumbers:(id)arg1 error:(id *)arg2;

@end

