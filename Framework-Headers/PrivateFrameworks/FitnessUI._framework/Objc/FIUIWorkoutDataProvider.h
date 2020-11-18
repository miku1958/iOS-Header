//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, NSCalendar, NSDate, NSMutableArray, NSMutableDictionary;

@interface FIUIWorkoutDataProvider : NSObject
{
    HKHealthStore *_healthStore;
    NSMutableDictionary *_workoutsByDay;
    NSMutableArray *_updateHandlers;
    HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_currentCalendar;
    NSDate *_retryDate;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_fetchAllWorkoutsFromDate:(id)arg1;
- (void)_handleAddedSamples:(id)arg1;
- (void)_handleRemovedObjects:(id)arg1;
- (void)_retryQuery:(id)arg1;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)arg1;
- (void)_runUpdateHandlers;
- (void)_timeZoneDidChange:(id)arg1;
- (void)addUpdateHandler:(CDUnknownBlockType)arg1;
- (id)allWorkouts;
- (void)dealloc;
- (BOOL)hasWorkouts;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)startFetchingFromDate:(id)arg1;
- (void)stopFetching;
- (id)workoutsForDay:(id)arg1;

@end
