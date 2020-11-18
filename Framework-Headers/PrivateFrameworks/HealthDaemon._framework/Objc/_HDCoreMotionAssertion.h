//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@class CMWorkout, HKWorkoutConfiguration, NSUUID;

__attribute__((visibility("hidden")))
@interface _HDCoreMotionAssertion : HDAssertion
{
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
    CMWorkout *_cmWorkout;
}

@property (strong, nonatomic) CMWorkout *cmWorkout; // @synthesize cmWorkout=_cmWorkout;
@property (readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (readonly, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;

@end
