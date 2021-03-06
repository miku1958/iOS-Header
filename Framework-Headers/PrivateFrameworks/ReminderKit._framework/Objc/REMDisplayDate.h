//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDate, NSTimeZone;

@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allDay;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property (readonly, nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property (readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3;
- (id)initWithDueDateComponents:(id)arg1 alarms:(id)arg2;
- (id)initWithFloatingDateComponents:(id)arg1 nonFloatingDateComponents:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

