//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMetric.h>

#import <coreroutine/RTMetricProtocol-Protocol.h>

@class NSString;

@interface RTVisitSettledStateMetrics : RTMetric <RTMetricProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)binsForDuration;
+ (unsigned long long)boundedIntegerMetricForCountOfSettledStateTransitions:(unsigned long long)arg1;
+ (unsigned long long)boundedIntegerMetricForPercentageOfTimeSettled:(unsigned long long)arg1;
+ (unsigned long long)boundedIntegerMetricPercentageOfTimeSettledForTimeSettled:(double)arg1 overDuration:(double)arg2;
+ (unsigned long long)bucketForDuration:(double)arg1;
+ (id)createVisitSettledStateMetricsForSettledStateTransitionStore:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 isVisit:(BOOL)arg4;
+ (CDStruct_b8464340)event;
+ (void)submitVisitSettledStateMetricsForStartDate:(id)arg1 endDate:(id)arg2 isVisit:(BOOL)arg3 settledStateTransitionStore:(id)arg4;
+ (id)supportedMetricKeys;
- (id)init;
- (id)initWithCountOfSettledStateTransitions:(unsigned long long)arg1 duration:(double)arg2 isVisit:(BOOL)arg3 timeSettled:(double)arg4;

@end

