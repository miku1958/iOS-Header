//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKWorkoutRoute;

__attribute__((visibility("hidden")))
@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration
{
    HKWorkoutRoute *_workoutRoute;
}

@property (strong, nonatomic) HKWorkoutRoute *workoutRoute; // @synthesize workoutRoute=_workoutRoute;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

