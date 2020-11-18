//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTLearnedPlace, RTLearnedPlaceTypeInferenceStats;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject
{
    RTLearnedPlaceTypeInferenceStats *_stats;
    RTLearnedPlace *_place;
    unsigned long long _visitsCount;
}

@property (strong, nonatomic) RTLearnedPlace *place; // @synthesize place=_place;
@property (readonly, nonatomic) RTLearnedPlaceTypeInferenceStats *stats; // @synthesize stats=_stats;
@property (nonatomic) unsigned long long visitsCount; // @synthesize visitsCount=_visitsCount;

+ (id)extractDailyStatsFromVisits:(id)arg1;
+ (double)extractTopMedianDwellTimeFromVisits:(id)arg1;
+ (id)extractWeeklyStatsFromDailyStats:(id)arg1;
+ (id)visitsWithDwellTimeBetweenDateRange:(id)arg1 start:(id)arg2 end:(id)arg3;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPlace:(id)arg1 visits:(id)arg2;
- (void)log;

@end

