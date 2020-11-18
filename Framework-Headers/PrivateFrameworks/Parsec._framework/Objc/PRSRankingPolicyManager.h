//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRSRankingPolicyManager : NSObject
{
}

+ (id)getSharedRankingPolicyManager;
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double *)arg3 qr_prop_query_norm_min_unordered_span:(double *)arg4 qr_query_min_pair_dist_in_title:(double *)arg5 prefix_match_norm_count:(double *)arg6;
- (id)cookSQFOnClientWithServerProbabilities:(id)arg1 qiCEPValues:(id)arg2 localResultOrder:(id)arg3 poorTextMatchCategories:(id)arg4 minimumBagCEP:(double)arg5 cook_sqf_topdown:(BOOL)arg6 cook_sqf_fallback_qi_cep:(BOOL)arg7;
- (BOOL)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long *)arg5;
- (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long *)arg6 minimumDistancePair:(long long *)arg7 isReversed:(BOOL)arg8;

@end

