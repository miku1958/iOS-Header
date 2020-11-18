//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CVMLSimilarityMatrix, NSArray, NSData, NSDictionary, NSNumber, NSSet, NSString;

@protocol CVMLClustering
+ (NSArray *)clustererModelFileNamesFromState:(NSData *)arg1 storedInPath:(NSString *)arg2 error:(id *)arg3;
- (BOOL)addDescriptorIds:(NSArray *)arg1 withSimilarityMatrix:(CVMLSimilarityMatrix *)arg2 error:(id *)arg3;
- (NSArray *)getClustersWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (NSArray *)suggestionsForClusterIds:(NSArray *)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (NSArray *)suggestionsForClusterIdsWithFlags:(NSDictionary *)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;

@optional
- (BOOL)cancelClustering:(id *)arg1;
- (NSData *)getClusterState:(id *)arg1;
- (NSSet *)getClusteredIds;
- (NSArray *)getClustersForClusterIds:(NSArray *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (NSNumber *)getDistanceBetweenLevel0ClustersWithFaceIds:(NSArray *)arg1;
- (NSDictionary *)getDistanceBetweenLevel1Clusters:(NSArray *)arg1;
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2;
- (NSArray *)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(NSNumber *)arg1;
- (NSDictionary *)getRepresentativenessForFaces:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)refinedSuggestionsForClusterIds:(NSArray *)arg1 fromClusters:(NSArray *)arg2 affinityThreshold:(float)arg3 error:(id *)arg4;
@end

