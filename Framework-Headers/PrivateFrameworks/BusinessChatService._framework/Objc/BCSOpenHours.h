//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/NSCopying-Protocol.h>
#import <BusinessChatService/NSSecureCoding-Protocol.h>

@class NSDictionary, NSTimeZone;

@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_timeRanges;
    NSTimeZone *_localTimeZone;
}

@property (readonly, nonatomic) NSTimeZone *localTimeZone; // @synthesize localTimeZone=_localTimeZone;
@property (readonly, nonatomic) NSDictionary *timeRanges; // @synthesize timeRanges=_timeRanges;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1 timeZone:(id)arg2;
- (id)_dateWhenOpenNextAfterDate:(id)arg1 timeZone:(id)arg2;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1 timeZone:(id)arg2;
- (BOOL)_validTimeRange:(id)arg1;
- (long long)_weekdayIndexFromWeekdayString:(id)arg1;
- (long long)_weekdayOrdinalFromDate:(id)arg1;
- (long long)_weekdayOrdinalFromDate:(id)arg1 timeZone:(id)arg2;
- (id)_weekdayStringFromWeekdayIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateWhenOpenNextAfterDate:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHoursMessages:(id)arg1 timeZone:(id)arg2;
- (id)initWithHoursPeriodMessage:(id)arg1 timeZone:(id)arg2;
- (id)initWithJSONObj:(id)arg1 timeZone:(id)arg2;
- (id)initWithOpenHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithTimeRanges:(id)arg1 timeZone:(id)arg2;
- (BOOL)isOpenAtDate:(id)arg1;
- (BOOL)isOpenAtDate:(id)arg1 timeZone:(id)arg2;

@end

