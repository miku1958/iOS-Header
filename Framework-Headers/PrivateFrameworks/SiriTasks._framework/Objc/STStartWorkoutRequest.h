//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest
{
    long long _activityType;
    long long _locationType;
    long long _goalType;
    HKQuantity *_goal;
    BOOL _isOpenGoal;
    BOOL _skipActivitySetup;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 isOpenGoal:(BOOL)arg5 skipActivitySetup:(BOOL)arg6;
- (long long)activityType;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (long long)goalType;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOpenGoal;
- (long long)locationType;
- (BOOL)skipActivitySetup;
- (id)workoutGoal;

@end

