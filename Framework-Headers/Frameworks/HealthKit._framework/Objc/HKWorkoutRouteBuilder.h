//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSeriesBuilder.h>

@class HKWorkoutRoute;

@interface HKWorkoutRouteBuilder : HKSeriesBuilder
{
    HKWorkoutRoute *_route;
}

- (void).cxx_destruct;
- (void)_associateRoute:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resourceQueue_discardWithHandler:(CDUnknownBlockType)arg1;
- (void)_resourceQueue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resourceQueue_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_validateRouteData:(id)arg1 error:(out id *)arg2;
- (void)dealloc;
- (void)finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithHealthStore:(id)arg1 device:(id)arg2;
- (void)insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)route;
- (void)setRoute:(id)arg1;

@end
