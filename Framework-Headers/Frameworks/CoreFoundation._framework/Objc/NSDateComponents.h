//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@class NSCalendar, NSDate, NSTimeZone;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>
{
}

@property (copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *date;
@property long long day;
@property long long era;
@property long long hour;
@property (getter=isLeapMonth) BOOL leapMonth;
@property long long minute;
@property long long month;
@property long long nanosecond;
@property long long quarter;
@property long long second;
@property (copy) NSTimeZone *timeZone;
@property (readonly, getter=isValidDate) BOOL validDate;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long weekday;
@property long long weekdayOrdinal;
@property long long year;
@property long long yearForWeekOfYear;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLeapMonthSet;
- (BOOL)isValidDateInCalendar:(id)arg1;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (void)setWeek:(long long)arg1;
- (long long)valueForComponent:(unsigned long long)arg1;
- (long long)week;

@end

