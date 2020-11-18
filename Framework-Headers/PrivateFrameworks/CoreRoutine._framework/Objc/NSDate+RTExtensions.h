//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (RTExtensions)
+ (id)dateBisectingDate1:(id)arg1 date2:(id)arg2;
+ (id)dateFormatter;
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
+ (id)dateWithResolution:(unsigned long long)arg1;
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;
+ (id)endOfDay;
+ (id)startOfDay;
+ (id)stringFromTimestamp:(double)arg1;
- (BOOL)betweenDate:(id)arg1 andDate:(id)arg2;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;
- (id)dateOfTimestampForCalendar:(id)arg1;
- (id)dateOfTimestampForCurrentCalendar;
- (id)dateReducedToResolution:(unsigned long long)arg1;
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;
- (id)endOfDay;
- (unsigned long long)hour;
- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isBeforeDate:(id)arg1;
- (BOOL)isOnOrAfter:(id)arg1;
- (BOOL)isOnOrBefore:(id)arg1;
- (unsigned long long)minute;
- (id)startOfDay;
- (id)stringFromDate;
- (unsigned long long)weekday;
- (id)weekdayStringFromDate;
@end
