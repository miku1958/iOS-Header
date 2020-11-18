//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableDateComponents : PBCodable <NSCopying>
{
    long long _day;
    long long _era;
    long long _hour;
    long long _minute;
    long long _month;
    long long _nanosecond;
    long long _quarter;
    long long _second;
    long long _weekOfMonth;
    long long _weekOfYear;
    long long _weekday;
    long long _weekdayOrdinal;
    long long _year;
    long long _yearForWeekOfYear;
    NSString *_calendar;
    NSString *_timeZone;
    struct {
        unsigned int day:1;
        unsigned int era:1;
        unsigned int hour:1;
        unsigned int minute:1;
        unsigned int month:1;
        unsigned int nanosecond:1;
        unsigned int quarter:1;
        unsigned int second:1;
        unsigned int weekOfMonth:1;
        unsigned int weekOfYear:1;
        unsigned int weekday:1;
        unsigned int weekdayOrdinal:1;
        unsigned int year:1;
        unsigned int yearForWeekOfYear:1;
    } _has;
}

@property (strong, nonatomic) NSString *calendar; // @synthesize calendar=_calendar;
@property (nonatomic) long long day; // @synthesize day=_day;
@property (nonatomic) long long era; // @synthesize era=_era;
@property (readonly, nonatomic) BOOL hasCalendar;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) BOOL hasEra;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) BOOL hasNanosecond;
@property (nonatomic) BOOL hasQuarter;
@property (nonatomic) BOOL hasSecond;
@property (readonly, nonatomic) BOOL hasTimeZone;
@property (nonatomic) BOOL hasWeekOfMonth;
@property (nonatomic) BOOL hasWeekOfYear;
@property (nonatomic) BOOL hasWeekday;
@property (nonatomic) BOOL hasWeekdayOrdinal;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) BOOL hasYearForWeekOfYear;
@property (nonatomic) long long hour; // @synthesize hour=_hour;
@property (nonatomic) long long minute; // @synthesize minute=_minute;
@property (nonatomic) long long month; // @synthesize month=_month;
@property (nonatomic) long long nanosecond; // @synthesize nanosecond=_nanosecond;
@property (nonatomic) long long quarter; // @synthesize quarter=_quarter;
@property (nonatomic) long long second; // @synthesize second=_second;
@property (strong, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property (nonatomic) long long weekOfMonth; // @synthesize weekOfMonth=_weekOfMonth;
@property (nonatomic) long long weekOfYear; // @synthesize weekOfYear=_weekOfYear;
@property (nonatomic) long long weekday; // @synthesize weekday=_weekday;
@property (nonatomic) long long weekdayOrdinal; // @synthesize weekdayOrdinal=_weekdayOrdinal;
@property (nonatomic) long long year; // @synthesize year=_year;
@property (nonatomic) long long yearForWeekOfYear; // @synthesize yearForWeekOfYear=_yearForWeekOfYear;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

