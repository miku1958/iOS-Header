//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, _HKLocationShifter, _HKWorkoutRouteStore;

@interface HKLocationFetcher : NSObject
{
    _HKLocationShifter *_shifter;
    _HKWorkoutRouteStore *_routesStore;
    HKHealthStore *_healthStore;
    HKAnchoredObjectQuery *_routesQuery;
}

@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) HKAnchoredObjectQuery *routesQuery; // @synthesize routesQuery=_routesQuery;
@property (strong, nonatomic) _HKWorkoutRouteStore *routesStore; // @synthesize routesStore=_routesStore;
@property (strong, nonatomic) _HKLocationShifter *shifter; // @synthesize shifter=_shifter;

- (void).cxx_destruct;
- (void)_handleAndShiftLocations:(id)arg1 forWorkout:(id)arg2 withSamplesHandler:(CDUnknownBlockType)arg3;
- (BOOL)_routesAreSmoothed:(id)arg1;
- (id)_workoutRoutesQueryForWorkout:(id)arg1 withUpdateHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)fetchLocationsFromWorkout:(id)arg1 applyThreshold:(BOOL)arg2 withSamplesHandler:(CDUnknownBlockType)arg3;
- (void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(CDUnknownBlockType)arg2;
- (void)fetchRoutesFromWorkout:(id)arg1 withUpdateHandler:(CDUnknownBlockType)arg2;
- (id)initWithHealthStore:(id)arg1;

@end

