//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface HKWorkoutEvent : NSObject <NSSecureCoding>
{
    long long _type;
    NSDate *_date;
}

@property (readonly, copy) NSDate *date;
@property (readonly) long long type;

+ (id)_newWorkoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
- (void).cxx_destruct;
- (void)_assertPropertiesValid;
- (id)_init;
- (void)_setDate:(id)arg1;
- (void)_setType:(long long)arg1;
- (id)_validateConfiguration;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
