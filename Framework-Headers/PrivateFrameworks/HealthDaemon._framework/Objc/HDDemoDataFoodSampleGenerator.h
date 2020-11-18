//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDDemoDataFoodDatabase, NSArray;

@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator
{
    HDDemoDataFoodDatabase *_foodDatabase;
    double _nextMealTime;
    double _nextBreakfastTime;
    double _nextLunchTime;
    double _nextSnackTime;
    double _nextDinnerTime;
    double _lastMealTime;
    NSArray *_lastMeal;
    double _nextBloodGlucoseSampleTime;
    double _nextBloodGlucoseFingerStickSampleTime;
    double _nextBloodGlucoseMealTime;
    double _lastBloodGlucose;
    double _carbohydratesLeftToDigest;
    double _bloodGlucoseCarbohydrateGlycemicRate;
    double _bloodGlucoseDecreaseRateDueToInsulin;
    double _nextWaterConsumedSampleTime;
}

@property (nonatomic) double bloodGlucoseCarbohydrateGlycemicRate; // @synthesize bloodGlucoseCarbohydrateGlycemicRate=_bloodGlucoseCarbohydrateGlycemicRate;
@property (nonatomic) double bloodGlucoseDecreaseRateDueToInsulin; // @synthesize bloodGlucoseDecreaseRateDueToInsulin=_bloodGlucoseDecreaseRateDueToInsulin;
@property (nonatomic) double carbohydratesLeftToDigest; // @synthesize carbohydratesLeftToDigest=_carbohydratesLeftToDigest;
@property (strong, nonatomic) HDDemoDataFoodDatabase *foodDatabase; // @synthesize foodDatabase=_foodDatabase;
@property (nonatomic) double lastBloodGlucose; // @synthesize lastBloodGlucose=_lastBloodGlucose;
@property (copy, nonatomic) NSArray *lastMeal; // @synthesize lastMeal=_lastMeal;
@property (nonatomic) double lastMealTime; // @synthesize lastMealTime=_lastMealTime;
@property (nonatomic) double nextBloodGlucoseFingerStickSampleTime; // @synthesize nextBloodGlucoseFingerStickSampleTime=_nextBloodGlucoseFingerStickSampleTime;
@property (nonatomic) double nextBloodGlucoseMealTime; // @synthesize nextBloodGlucoseMealTime=_nextBloodGlucoseMealTime;
@property (nonatomic) double nextBloodGlucoseSampleTime; // @synthesize nextBloodGlucoseSampleTime=_nextBloodGlucoseSampleTime;
@property (nonatomic) double nextBreakfastTime; // @synthesize nextBreakfastTime=_nextBreakfastTime;
@property (nonatomic) double nextDinnerTime; // @synthesize nextDinnerTime=_nextDinnerTime;
@property (nonatomic) double nextLunchTime; // @synthesize nextLunchTime=_nextLunchTime;
@property (nonatomic) double nextMealTime; // @synthesize nextMealTime=_nextMealTime;
@property (nonatomic) double nextSnackTime; // @synthesize nextSnackTime=_nextSnackTime;
@property (nonatomic) double nextWaterConsumedSampleTime; // @synthesize nextWaterConsumedSampleTime=_nextWaterConsumedSampleTime;

- (void).cxx_destruct;
- (double)_computeBloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3;
- (double)_computeMealTimeForDemoPerson:(id)arg1 fromTime:(double)arg2 mealTimeType:(long long)arg3 timeMean:(double)arg4 stdDev:(double)arg5;
- (double)_computeNutrientForDemoPerson:(id)arg1 atTime:(double)arg2 mealItem:(id)arg3 quantityType:(id)arg4;
- (BOOL)_isDemoPersonConsumingCaffeine:(id)arg1 atTime:(double)arg2;
- (BOOL)_isTypicalNutritionTrackingQuantityType:(id)arg1;
- (id)_mealForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_nextMealTimeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)waterConsumedForDemoPerson:(id)arg1 atTime:(double)arg2;

@end

