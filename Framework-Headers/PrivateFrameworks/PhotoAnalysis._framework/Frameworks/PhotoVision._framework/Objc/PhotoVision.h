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

- (void).cxx_destruct;
- (unsigned int)activeFaceprintVersion;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)cancelAllSuggestionRequests;
- (void)cancelFaceClustering;
- (BOOL)cancelSuggestionRequest:(id)arg1;
- (void)configurePhotoVisionContextWithParams:(id)arg1;
- (id)context;
- (void)drawFaceboxes:(id)arg1 inImage:(id)arg2 outputFilename:(id)arg3;
- (BOOL)faceClusteringIsNeeded;
- (BOOL)getFaceClusters:(id *)arg1 clusteringThreshold:(double *)arg2 utilizingGPU:(BOOL *)arg3 error:(id *)arg4;
- (id)initWithPersistenceDelegate:(id)arg1 notificationListener:(id)arg2 options:(id)arg3;
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;
- (void)performFaceClusteringAndWait;
- (void)performFaceClusteringIfNecessaryAndWait;
- (void)performFaceClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (void)processFaceUpdates:(id)arg1;
- (BOOL)reclusterFacesWithThreshold:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)requestFaceClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)resetFaceClusteringStateWithContext:(id)arg1 error:(id *)arg2;
- (void)start:(CDUnknownBlockType)arg1;
- (void)stop;
- (id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)suggestionsForFaceClusterSequenceNumbers:(id)arg1 error:(id *)arg2;

@end

