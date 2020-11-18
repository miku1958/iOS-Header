//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataBloodSampleGenerator : HDDemoDataBaseSampleGenerator
{
    double _nextBloodAlcoholContentSampleTime;
}

@property (nonatomic) double nextBloodAlcoholContentSampleTime; // @synthesize nextBloodAlcoholContentSampleTime=_nextBloodAlcoholContentSampleTime;

- (double)_computeNumDrinksTodayForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bloodAlcoholContentForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end

