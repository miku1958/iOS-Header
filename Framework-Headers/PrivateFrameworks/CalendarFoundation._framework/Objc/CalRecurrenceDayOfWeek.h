//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSCopying-Protocol.h>

@interface CalRecurrenceDayOfWeek : NSObject <NSCopying>
{
    long long _dayOfTheWeek;
    long long _weekNumber;
}

@property (readonly, nonatomic) long long dayOfTheWeek; // @synthesize dayOfTheWeek=_dayOfTheWeek;
@property (readonly, nonatomic) long long weekNumber; // @synthesize weekNumber=_weekNumber;

+ (id)dayOfWeek:(long long)arg1;
+ (id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iCalendarDescription;
- (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

