//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepHealth/NSCopying-Protocol.h>
#import <SleepHealth/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

@interface HKSHSleepPeriodSegment : NSObject <NSSecureCoding, NSCopying>
{
    NSDateInterval *_dateInterval;
    NSArray *_sampleIntervals;
    long long _category;
}

@property (readonly, nonatomic) long long category; // @synthesize category=_category;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property (readonly, copy, nonatomic) NSArray *sampleIntervals; // @synthesize sampleIntervals=_sampleIntervals;

+ (id)sleepPeriodSegmentWithDateInterval:(id)arg1 category:(long long)arg2;
+ (id)sleepPeriodSegmentWithDateInterval:(id)arg1 sampleIntervals:(id)arg2 category:(long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;

@end
