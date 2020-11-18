//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GEOPlaceDailyHours : NSObject
{
    struct _NSRange _dayOfWeekRange;
    NSArray *_openIntervals;
    double _closingSoonThresholdSeconds;
    double _openingSoonThresholdSeconds;
}

@property (nonatomic) double closingSoonThresholdSeconds; // @synthesize closingSoonThresholdSeconds=_closingSoonThresholdSeconds;
@property (readonly) struct _NSRange dayOfWeekRange; // @synthesize dayOfWeekRange=_dayOfWeekRange;
@property (readonly) NSArray *openIntervals; // @synthesize openIntervals=_openIntervals;
@property (nonatomic) double openingSoonThresholdSeconds; // @synthesize openingSoonThresholdSeconds=_openingSoonThresholdSeconds;

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange)arg2 withClosingThreshold:(double)arg3 withOpeningThreshold:(double)arg4;
- (void).cxx_destruct;
- (id)_intervalContainingDate:(id)arg1 intervals:(id)arg2;
- (BOOL)containsWeekday:(unsigned long long)arg1;
- (id)dateIntervalInOpenIntervalsContainingDate:(id)arg1 withOpeningThreshold:(double)arg2;
- (id)description;

@end
