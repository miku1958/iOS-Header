//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateInterval;

@interface HKSleepDay : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sleepPeriods;
    NSDateInterval *_dateInterval;
    double _inBedDuration;
    double _asleepDuration;
}

@property (readonly, nonatomic) double asleepDuration; // @synthesize asleepDuration=_asleepDuration;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property (readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) double inBedDuration; // @synthesize inBedDuration=_inBedDuration;
@property (readonly, copy, nonatomic) NSArray *sleepPeriods; // @synthesize sleepPeriods=_sleepPeriods;
@property (readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3;
- (id)primarySleepPeriod;

@end

