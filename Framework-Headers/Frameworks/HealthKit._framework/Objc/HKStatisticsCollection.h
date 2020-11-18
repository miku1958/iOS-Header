//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents, NSLock, NSMutableDictionary, NSSet;

@interface HKStatisticsCollection : NSObject
{
    CDUnknownBlockType _emptyStatisticsConstructor;
    double _approximateStatisticsInterval;
    NSMutableDictionary *_statisticsByIndex;
    NSSet *_cachedSources;
    NSLock *_statisticsLock;
    NSDate *_anchorDate;
    NSDateComponents *_statisticsInterval;
}

@property (readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property (readonly, nonatomic) NSDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;

- (void).cxx_destruct;
- (void)_clearSourcesCache;
- (void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(CDUnknownBlockType)arg3;
- (BOOL)_insertStatistics:(id)arg1;
- (id)_maxSumQuantityStatistics;
- (id)_minSumQuantityStatistics;
- (id)_mostRecentQuantityDateInterval;
- (id)_mostRecentQuantityStatistics;
- (void)_resetStatistics:(id)arg1;
- (id)_statisticsForIndex:(long long)arg1;
- (id)_statisticsForLastIndex;
- (id)_statisticsPeriodAndIndex:(long long *)arg1 forDate:(id)arg2;
- (id)_timePeriodForDate:(id)arg1;
- (void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id *)arg2 endDate:(id *)arg3;
- (void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)sources;
- (id)statistics;
- (id)statisticsForDate:(id)arg1;

@end
