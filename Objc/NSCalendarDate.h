//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate
{
    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)calendarDate;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
+ (id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
+ (id)distantFuture;
+ (id)distantPast;
- (id)addTimeInterval:(double)arg1;
- (id)calendarFormat;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (long long)dayOfCommonEra;
- (long long)dayOfMonth;
- (long long)dayOfWeek;
- (long long)dayOfYear;
- (void)dealloc;
- (id)description;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)hourOfDay;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (long long)microsecondOfSecond;
- (long long)minuteOfHour;
- (long long)monthOfYear;
- (oneway void)release;
- (id)replacementObjectForPortCoder:(id)arg1;
- (long long)secondOfMinute;
- (void)setCalendarFormat:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)timeZone;
- (id)timeZoneDetail;
- (long long)yearOfCommonEra;
- (void)years:(long long *)arg1 months:(long long *)arg2 days:(long long *)arg3 hours:(long long *)arg4 minutes:(long long *)arg5 seconds:(long long *)arg6 sinceDate:(id)arg7;

@end
