//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate, NSMutableArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding>
{
    NSMutableData *_associatedObjectUUIDs;
    NSMutableArray *_workoutEvents;
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSDate *_startDate;
    double _totalEnergyBurnedInKilocalories;
    double _totalDistanceWalkingInMeters;
    double _totalDistanceCyclingInMeters;
    double _totalDistanceSwimmingInYards;
    double _totalSwimmingStrokes;
    long long _swimmingStrokeStyle;
}

@property (strong, nonatomic) NSMutableData *associatedObjectUUIDs; // @synthesize associatedObjectUUIDs=_associatedObjectUUIDs;
@property (strong, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property (nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) long long swimmingStrokeStyle; // @synthesize swimmingStrokeStyle=_swimmingStrokeStyle;
@property (nonatomic) double totalDistanceCyclingInMeters; // @synthesize totalDistanceCyclingInMeters=_totalDistanceCyclingInMeters;
@property (nonatomic) double totalDistanceSwimmingInYards; // @synthesize totalDistanceSwimmingInYards=_totalDistanceSwimmingInYards;
@property (nonatomic) double totalDistanceWalkingInMeters; // @synthesize totalDistanceWalkingInMeters=_totalDistanceWalkingInMeters;
@property (nonatomic) double totalEnergyBurnedInKilocalories; // @synthesize totalEnergyBurnedInKilocalories=_totalEnergyBurnedInKilocalories;
@property (nonatomic) double totalSwimmingStrokes; // @synthesize totalSwimmingStrokes=_totalSwimmingStrokes;
@property (nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property (strong, nonatomic) NSMutableArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addAssociatedObjectUUID:(id)arg1;
- (void)addWorkoutEvent:(id)arg1;
- (void)addWorkoutRouteFromFilePath:(id)arg1 profile:(id)arg2 provenance:(id)arg3 workout:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)generateWorkoutWithEndDate:(id)arg1 profile:(id)arg2 provenance:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)lapCount;

@end
