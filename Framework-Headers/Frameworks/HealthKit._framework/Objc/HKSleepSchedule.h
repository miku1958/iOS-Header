//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSNumber;

@interface HKSleepSchedule : HKSample <NSSecureCoding, NSCopying>
{
    unsigned long long _weekdays;
    NSDateComponents *_wakeTimeComponents;
    NSDateComponents *_bedTimeComponents;
    NSNumber *_overrideDayIndex;
}

@property (copy, nonatomic, setter=_setBedTimeComponents:) NSDateComponents *bedTimeComponents; // @synthesize bedTimeComponents=_bedTimeComponents;
@property (copy, nonatomic, setter=_setOverrideDayIndex:) NSNumber *overrideDayIndex; // @synthesize overrideDayIndex=_overrideDayIndex;
@property (copy, nonatomic, setter=_setWakeTimeComponents:) NSDateComponents *wakeTimeComponents; // @synthesize wakeTimeComponents=_wakeTimeComponents;
@property (nonatomic, setter=_setWeekdays:) unsigned long long weekdays; // @synthesize weekdays=_weekdays;

+ (BOOL)_isConcreteObjectClass;
+ (id)_sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7 config:(CDUnknownBlockType)arg8;
+ (id)sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;

@end
