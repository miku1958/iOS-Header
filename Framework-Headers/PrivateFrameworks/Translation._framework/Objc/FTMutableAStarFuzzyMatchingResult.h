//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTAStarFuzzyMatchingResult.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableAStarFuzzyMatchingResult : FTAStarFuzzyMatchingResult
{
}

@property (copy, nonatomic) NSString *debug_information;
@property (copy, nonatomic) NSArray *match_ids;
@property (copy, nonatomic) NSString *matched_result;
@property (nonatomic) int tm_score;
@property (nonatomic) long long total_score;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

