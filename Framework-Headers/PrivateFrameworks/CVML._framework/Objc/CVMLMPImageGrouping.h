//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CVMLMPImageGrouping : NSObject
{
}

+ (vector_e14a6833)computeClusteringIntoKGroups:(int)arg1 forHierarchicalTree:(struct MPClusteringTreeNode *)arg2 context:(id)arg3;
+ (vector_e14a6833)computeClusteringIntoKGroups:(int)arg1 orUsingDistanceThreshold:(float)arg2 forHierarchicalTree:(struct MPClusteringTreeNode *)arg3 context:(id)arg4;
+ (vector_e14a6833)computeClusteringUsingDistanceThreshold:(float)arg1 forHierarchicalTree:(struct MPClusteringTreeNode *)arg2 context:(id)arg3;
+ (long long)computeHierarchicalClusteringOfImageDescriptors:(id)arg1 results:(struct MPClusteringTreeNode **)arg2 context:(id)arg3;
+ (vector_e14a6833)computeNaturalClusteringForHierarchicalTree:(struct MPClusteringTreeNode *)arg1 context:(id)arg2;
+ (float)computeTimestampAdjustedDistanceForBaseDistance:(float)arg1 andTimestampDiff:(long long)arg2;
+ (float)computeTotalDistanceForDescriptorDistance:(float)arg1 timestampDiff:(long long)arg2 useTimestampAdjustment:(BOOL)arg3;
+ (float)getDistanceForClusterNode:(struct MPClusteringTreeNode *)arg1 splitDistanceType:(int)arg2;

@end

