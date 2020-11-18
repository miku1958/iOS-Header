//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Additions)
+ (id)hf_dateByAddingComponents:(id)arg1 toDate:(id)arg2 times:(long long)arg3;
+ (id)hf_dateByAddingDays:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingHours:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMinutes:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingNanoseconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingSeconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingYears:(long long)arg1 months:(long long)arg2 weeks:(long long)arg3 days:(long long)arg4 hours:(long long)arg5 minutes:(long long)arg6 seconds:(long long)arg7 nanoseconds:(long long)arg8 toDate:(id)arg9;
+ (id)hf_dateByAddingYears:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 times:(long long)arg3;
+ (id)ho_sharedCalendar;
+ (id)ho_sharedTimeZone;
- (BOOL)hf_isFirstHourOfDay;
- (BOOL)hf_isWithinInterval:(double)arg1 ofDate:(id)arg2;
- (BOOL)hf_isWithinOneHourOfDate:(id)arg1;
- (BOOL)hf_isWithinOneMinuteOfDate:(id)arg1;
- (BOOL)hf_isWithinOneSecondOfDate:(id)arg1;
- (id)hf_startOfDay;
- (id)hf_startOfHour;
- (id)hf_startOfMinute;
- (id)hf_startOfSecond;
@end

