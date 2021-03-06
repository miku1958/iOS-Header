//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPCluster : NSObject <CPDisposable>
{
    const CDStruct_1ec70fb1 *profile;
    unsigned int xCount;
    double *x;
    double *dx;
    unsigned int *dxOrderIndex;
    unsigned int interClusterMinIndex;
    double *ddx;
    unsigned int *ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    CDStruct_2a61e2ef *xStats;
    unsigned int levels;
    CDStruct_2a61e2ef *dxStats;
    BOOL ownData;
    BOOL ownDifferences;
}

+ (void)clusterTextLine:(id)arg1;
+ (void)clusterTextLine:(id)arg1 withCluster:(id)arg2 atLevel:(unsigned int)arg3 withMaximumWordGap:(double *)arg4 andMaximumLetterGap:(double *)arg5;
+ (unsigned int *)createOrderIndexFor:(double *)arg1 ofSize:(unsigned int)arg2;
+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int *)arg3;
- (void)analyzeDensities;
- (void)analyzeDifferences;
- (BOOL)applyDifferenceHints:(CDStruct_2a61e2ef *)arg1 count:(unsigned int)arg2;
- (void)assembleDataStats;
- (void)assembleDensityDifferenceStats;
- (void)assembleDifferenceStats;
- (unsigned int)clusterCount;
- (CDStruct_2a61e2ef)clusterStatisticsAtIndex:(unsigned int)arg1;
- (BOOL)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)computeDataFromDifferences;
- (void)computeDifferencesFromData;
- (void)dealloc;
- (CDStruct_2a61e2ef)differenceClusterStatisticsAtIndex:(unsigned int)arg1;
- (void)dispose;
- (void)finalize;
- (void)findClusters:(double *)arg1 count:(unsigned int)arg2;
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(BOOL)arg2;
- (void)findClustersFromDifferences:(double *)arg1 count:(unsigned int)arg2;
- (void)findDensityClusters:(double *)arg1 count:(unsigned int)arg2;
- (id)init;
- (id)initWithProfile:(const CDStruct_1ec70fb1 *)arg1;
- (BOOL)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (BOOL)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (CDStruct_2a61e2ef)largestClusterStatistics;
- (unsigned int)levels;
- (void)makeWords:(CDStruct_2e2afed4 *)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;
- (void)resetAnalysis;
- (void)setMaximumClusterSpread:(double)arg1;
- (void)setMinimumClusterSize:(unsigned int)arg1;
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;
- (BOOL)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (void)splitSecondDifferences;
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(CDStruct_2a61e2ef *)arg3;

@end

