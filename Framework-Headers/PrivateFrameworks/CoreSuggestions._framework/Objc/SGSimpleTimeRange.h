//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSDate, NSTimeZone;

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding>
{
    double _start;
    double _end;
    BOOL _floating;
    long long _startUTCOffsetSeconds;
    long long _endUTCOffsetSeconds;
}

@property (readonly, nonatomic) double end; // @synthesize end=_end;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *endTimeZone;
@property (readonly, nonatomic) long long endUTCOffsetSeconds; // @synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds;
@property (readonly, nonatomic, getter=isFloating) BOOL floating; // @synthesize floating=_floating;
@property (readonly, nonatomic) double start; // @synthesize start=_start;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSTimeZone *startTimeZone;
@property (readonly, nonatomic) long long startUTCOffsetSeconds; // @synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds;

+ (id)dateFromGregorianComponents:(id)arg1;
+ (id)floatingRangeWithLocalStart:(double)arg1 end:(double)arg2;
+ (id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2;
+ (id)floatingRangeWithUTCStart:(double)arg1 end:(double)arg2;
+ (id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2;
+ (double)fromFloatingTime:(double)arg1;
+ (BOOL)hasYearMonthDayComponents:(id)arg1;
+ (BOOL)isAllDayComponents:(id)arg1;
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;
+ (id)rangeWithStart:(double)arg1 duration:(double)arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(double)arg1 end:(double)arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(double)arg1 startTimeZone:(id)arg2 end:(double)arg3 endTimeZone:(id)arg4;
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (double)toFloatingTime:(double)arg1;
+ (id)utcRangeWithStart:(double)arg1 duration:(double)arg2;
+ (id)utcRangeWithStart:(double)arg1 end:(double)arg2;
- (id)absoluteRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initUTCFloatingWithStart:(double)arg1 end:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStart:(double)arg1 startUTCOffsetSeconds:(long long)arg2 end:(double)arg3 endUTCOffsetSeconds:(long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSimpleTimeRange:(id)arg1;
- (BOOL)isValidAllDayRange;
- (id)stableStringRepresentation;

@end

