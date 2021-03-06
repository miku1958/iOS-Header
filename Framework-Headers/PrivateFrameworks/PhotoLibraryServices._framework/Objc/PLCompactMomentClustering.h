//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLCompactMomentClustering : NSObject
{
    NSArray *_locationsOfInterest;
    BOOL _routineIsAvailable;
}

- (id)_assetClustersFromDataClusters:(id)arg1;
- (id)_clusterAssetsWithUnusableLocation:(id)arg1;
- (id)_clusterAssetsWithUsableLocation:(id)arg1;
- (id)_mergeAssetClustersWithLocation:(id)arg1 withAssetClustersWithoutLocation:(id)arg2;
- (id)_processedLocationTypeByAssetUUIDFromAssets:(id)arg1;
- (id)_runDBSCANClusteringWithAssets:(id)arg1;
- (id)assetsByLocationTypeFromAssets:(id)arg1 locationsOfInterest:(id)arg2;
- (id)createAssetClustersForAssetsInDay:(id)arg1;
- (void)dealloc;
- (id)initWithDataManager:(id)arg1;
- (id)newAssetClusterFromAssetsSortedByDate:(id)arg1;

@end

