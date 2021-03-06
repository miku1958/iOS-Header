//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKCalendarCache, NSMutableArray, NSMutableDictionary;

@interface HDMCDaySummaryBuilder : NSObject
{
    HKCalendarCache *_calendarCache;
    NSMutableArray *_menstrualFlowSamples;
    NSMutableArray *_intermenstrualBleedingSamples;
    NSMutableArray *_symptomsSamples;
    NSMutableArray *_sexualActivitySamples;
    NSMutableArray *_ovulationTestResultSamples;
    NSMutableArray *_cervicalMucusQualitySamples;
    NSMutableArray *_basalBodyTemperatureSamples;
    NSMutableArray *_startedCycleFactors;
    NSMutableArray *_endedCycleFactors;
    NSMutableDictionary *_sampleCountByType;
    long long _dayIndex;
}

@property (readonly, nonatomic) long long dayIndex; // @synthesize dayIndex=_dayIndex;

- (void).cxx_destruct;
- (id)_basalBodyTemperature;
- (long long)_cervicalMucusQuality;
- (id)_endedCycleFactors;
- (BOOL)_intermenstrualBleeding;
- (long long)_menstrualFlowWithModificationDay:(long long *)arg1 startOfCycleFromCycleTracking:(id *)arg2;
- (long long)_ovulationTestResult;
- (long long)_sexualActivity;
- (id)_startedCycleFactors;
- (unsigned long long)_symptoms;
- (void)addCycleTrackingSample:(id)arg1;
- (id)createDaySummaryWithDevice:(id)arg1;
- (id)initWithDayIndex:(long long)arg1 calendarCache:(id)arg2;

@end

