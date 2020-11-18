//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar;

__attribute__((visibility("hidden")))
@interface SCLScheduleFormatterItem : NSObject
{
    long long _days;
    NSCalendar *_calendar;
    NSArray *_timeIntervals;
}

@property (readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, copy, nonatomic) NSArray *timeIntervals; // @synthesize timeIntervals=_timeIntervals;

- (void).cxx_destruct;
- (void)addDay:(long long)arg1;
- (id)dayRanges;
- (long long)days;
- (long long)earliestWeekdayInCalendar;
- (id)initWithCalendar:(id)arg1 timeIntervals:(id)arg2;

@end
