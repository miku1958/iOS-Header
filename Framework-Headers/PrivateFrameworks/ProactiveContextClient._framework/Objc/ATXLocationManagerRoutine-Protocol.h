//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CLLocation, NSDate, NSDateInterval;

@protocol ATXLocationManagerRoutine
- (void)fetchClosestLOIWithinDistance:(double)arg1 ofLocation:(CLLocation *)arg2 reply:(void (^)(ATXLocationOfInterest *, NSError *))arg3;
- (void)fetchLOILocationOfType:(long long)arg1 reply:(void (^)(CLLocation *, NSError *))arg2;
- (void)fetchLOIVisitedDuring:(NSDateInterval *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchNextPredictedLOIFromLocation:(CLLocation *)arg1 startDate:(NSDate *)arg2 timeInterval:(double)arg3 requireHighConfidence:(BOOL)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)fetchPredictedExitDatesFromLocation:(CLLocation *)arg1 onDate:(NSDate *)arg2 requireHighConfidence:(BOOL)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (unsigned long long)fetchRoutineModeFromLocation:(CLLocation *)arg1;
@end

