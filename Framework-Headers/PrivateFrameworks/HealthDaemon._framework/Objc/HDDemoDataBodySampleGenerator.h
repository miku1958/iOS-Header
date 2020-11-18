//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator
{
    NSArray *_boysHeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysHeight2To20YearsGrowthCurve;
    NSArray *_boysWeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysWeight2To20YearsGrowthCurve;
    NSArray *_girlsHeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsHeight2To20YearsGrowthCurve;
    NSArray *_girlsWeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsWeight2To20YearsGrowthCurve;
    double _nextHeightSampleTime;
    double _nextWeightSampleTime;
    double _lastHeightInCm;
    double _lastWeightInKg;
    double _weightAdultStartInKg;
}

@property (copy, nonatomic) NSArray *boysHeight2To20YearsGrowthCurve; // @synthesize boysHeight2To20YearsGrowthCurve=_boysHeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *boysHeightBirthTo36MonthsGrowthCurve; // @synthesize boysHeightBirthTo36MonthsGrowthCurve=_boysHeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *boysWeight2To20YearsGrowthCurve; // @synthesize boysWeight2To20YearsGrowthCurve=_boysWeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *boysWeightBirthTo36MonthsGrowthCurve; // @synthesize boysWeightBirthTo36MonthsGrowthCurve=_boysWeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsHeight2To20YearsGrowthCurve; // @synthesize girlsHeight2To20YearsGrowthCurve=_girlsHeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsHeightBirthTo36MonthsGrowthCurve; // @synthesize girlsHeightBirthTo36MonthsGrowthCurve=_girlsHeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsWeight2To20YearsGrowthCurve; // @synthesize girlsWeight2To20YearsGrowthCurve=_girlsWeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsWeightBirthTo36MonthsGrowthCurve; // @synthesize girlsWeightBirthTo36MonthsGrowthCurve=_girlsWeightBirthTo36MonthsGrowthCurve;
@property (nonatomic) double lastHeightInCm; // @synthesize lastHeightInCm=_lastHeightInCm;
@property (nonatomic) double lastWeightInKg; // @synthesize lastWeightInKg=_lastWeightInKg;
@property (nonatomic) double nextHeightSampleTime; // @synthesize nextHeightSampleTime=_nextHeightSampleTime;
@property (nonatomic) double nextWeightSampleTime; // @synthesize nextWeightSampleTime=_nextWeightSampleTime;
@property (nonatomic) double weightAdultStartInKg; // @synthesize weightAdultStartInKg=_weightAdultStartInKg;

- (void).cxx_destruct;
- (id)_heightCurveForAge:(double)arg1 sex:(long long)arg2;
- (id)_weightCurveForAge:(double)arg1 sex:(long long)arg2;
- (double)bodyFatPercentageForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3 leanBodyMass:(double)arg4;
- (double)bodyMassIndexForDemoPerson:(id)arg1 weight:(double)arg2 height:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)heightForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)leanBodyMassForDemoPerson:(id)arg1 weight:(double)arg2;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (double)weightChangeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)weightForDemoPerson:(id)arg1 atTime:(double)arg2;

@end

