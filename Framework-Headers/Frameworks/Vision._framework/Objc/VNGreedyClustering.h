//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/VNClustering-Protocol.h>

@class VNClusteringLogger, VNSuggestionsLogger;

__attribute__((visibility("hidden")))
@interface VNGreedyClustering : NSObject <VNClustering>
{
    struct shared_ptr<vision::mod::GreedyClustererFaces> m_ClusteringImpl;
    VNClusteringLogger *_clusteringLogger;
    VNSuggestionsLogger *_suggestionsLogger;
}

+ (void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 *)arg2;
+ (BOOL)isLogEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferFloat32 *)arg1 facesToMove:(vector_22dfb71c *)arg2;
- (BOOL)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id *)arg3;
- (BOOL)cancelClustering:(id *)arg1;
- (id)convertUpdatePairsToClusters:(vector_22dfb71c *)arg1;
- (id)getClusterState:(id *)arg1;
- (id)getClusteredIds;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2;
- (id)getDistanceBetweenLevel0ClustersWithFaceIds:(id)arg1;
- (id)getDistanceBetweenLevel1Clusters:(id)arg1;
- (id)getDistances:(id)arg1 to:(id)arg2;
- (id)getLevel0ClusteredIdsForFaceId:(id)arg1;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1;
- (id)getRepresentativenessForFaces:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)refinedSuggestionsForClusterIds:(id)arg1 fromClusters:(id)arg2 affinityThreshold:(float)arg3 error:(id *)arg4;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;

@end
