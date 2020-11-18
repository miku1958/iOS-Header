//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HKQuantity;

@interface HDDemoDataGeneratorWorkoutConfiguration : NSObject <NSSecureCoding>
{
    BOOL _createdFromNSKeyedUnarchiver;
    BOOL _indoor;
    unsigned long long _activityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    double _startTime;
    double _endTime;
    double _kcalRate;
    double _distanceWalkingRateInMiles;
    double _distanceCyclingRateInMiles;
    double _distanceSwimmingRateInYards;
    double _distanceSwimmingSegmentInYards;
    long long _numSwimmingSegments;
    long long _swimmingNumLapsPerSegment;
    double _swimmingSwimSegmentTime;
    double _swimmingRestSegmentTime;
    long long _swimmingStrokeStyle;
}

@property (nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property (nonatomic) double distanceCyclingRateInMiles; // @synthesize distanceCyclingRateInMiles=_distanceCyclingRateInMiles;
@property (nonatomic) double distanceSwimmingRateInYards; // @synthesize distanceSwimmingRateInYards=_distanceSwimmingRateInYards;
@property (nonatomic) double distanceSwimmingSegmentInYards; // @synthesize distanceSwimmingSegmentInYards=_distanceSwimmingSegmentInYards;
@property (nonatomic) double distanceWalkingRateInMiles; // @synthesize distanceWalkingRateInMiles=_distanceWalkingRateInMiles;
@property (nonatomic) double endTime; // @synthesize endTime=_endTime;
@property (strong, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property (nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property (nonatomic) BOOL indoor; // @synthesize indoor=_indoor;
@property (nonatomic) double kcalRate; // @synthesize kcalRate=_kcalRate;
@property (nonatomic) long long numSwimmingSegments; // @synthesize numSwimmingSegments=_numSwimmingSegments;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (nonatomic) long long swimmingNumLapsPerSegment; // @synthesize swimmingNumLapsPerSegment=_swimmingNumLapsPerSegment;
@property (nonatomic) double swimmingRestSegmentTime; // @synthesize swimmingRestSegmentTime=_swimmingRestSegmentTime;
@property (nonatomic) long long swimmingStrokeStyle; // @synthesize swimmingStrokeStyle=_swimmingStrokeStyle;
@property (nonatomic) double swimmingSwimSegmentTime; // @synthesize swimmingSwimSegmentTime=_swimmingSwimSegmentTime;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)createdFromNSKeyedUnarchiver;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrototype:(id)arg1 currentDemoDataTime:(double)arg2;

@end

