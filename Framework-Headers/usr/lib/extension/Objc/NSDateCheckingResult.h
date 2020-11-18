//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSString, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    BOOL _timeIsSignificant;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
    NSString *_leadingText;
    NSString *_trailingText;
}

@property (readonly) double duration;
@property (readonly) NSDate *referenceDate;
@property (readonly) BOOL timeIsApproximate;
@property (readonly) BOOL timeIsPast;
@property (readonly) BOOL timeIsSignificant;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) void *underlyingResult;

+ (BOOL)supportsSecureCoding;
- (BOOL)_adjustRangesWithOffset:(long long)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 leadingText:(id)arg10 trailingText:(id)arg11;
- (id)leadingText;
- (struct _NSRange)range;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;
- (id)trailingText;

@end

