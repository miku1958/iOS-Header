//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKUnitPreferenceController, NSCalendar, NSPredicate;

@interface HKActivityStatisticsDataSource : HKHealthQueryChartCacheDataSource
{
    NSPredicate *_sourcesPredicate;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_gregorianNonUTCCalendar;
    HKUnitPreferenceController *_unitController;
}

- (void).cxx_destruct;
- (id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_calorieValueFromStatsCollection:(id)arg1 range:(id)arg2;
- (id)_dateComponentsForDate:(id)arg1;
- (void)_handleStatistics:(id)arg1 activityCaches:(id)arg2 workouts:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithUnitController:(id)arg1 healthStore:(id)arg2 sourcesPredicate:(id)arg3;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryDescription;

@end

