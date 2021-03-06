//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, _DKHistogram;

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    NSArray *_transitionDates;
    _DKHistogram *_startHistogram;
    _DKHistogram *_endHistogram;
    NSArray *_values;
}

@property (readonly, nonatomic) NSDate *endDate;
@property (strong, nonatomic) _DKHistogram *endHistogram; // @synthesize endHistogram=_endHistogram;
@property (readonly, nonatomic) NSDate *startDate;
@property (strong, nonatomic) _DKHistogram *startHistogram; // @synthesize startHistogram=_startHistogram;
@property (readonly, nonatomic) NSArray *transitionDates;

+ (id)predictionUnavailable;
+ (BOOL)supportsSecureCoding;
+ (id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
+ (id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUnavailable;
- (id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (id)nextDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (id)valueAtDate:(id)arg1;

@end

