//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject
{
    NSMutableArray *_cachedSpans;
}

+ (id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)_generateCachedSpansFromSpans:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_validateCachedSpansIfDebugLoggingIsEnabled;
- (id)description;
- (id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (void)injectSpans:(id)arg1;
- (id)spans;

@end

