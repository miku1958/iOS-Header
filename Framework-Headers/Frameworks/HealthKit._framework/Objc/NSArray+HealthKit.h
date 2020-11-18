//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (HealthKit)
+ (BOOL)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(CDUnknownBlockType)arg3;
- (BOOL)hk_allElementsUnique;
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (BOOL)hk_containsObjectsInArray:(id)arg1;
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;
- (id)hk_filter:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)hk_map:(CDUnknownBlockType)arg1;
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;
- (double)hk_sumUsingEvaulationBlock:(CDUnknownBlockType)arg1;
@end

