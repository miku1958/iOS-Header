//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKTaskConfiguration.h>

@class NSDate;

@interface _HKDeepBreathingSessionConfiguration : HKTaskConfiguration
{
    NSDate *_startDate;
    double _sessionDuration;
    double _inhaleExhaleRatio;
    double _respirationsPerMinute;
}

@property (nonatomic) double inhaleExhaleRatio; // @synthesize inhaleExhaleRatio=_inhaleExhaleRatio;
@property (nonatomic) double respirationsPerMinute; // @synthesize respirationsPerMinute=_respirationsPerMinute;
@property (nonatomic) double sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

