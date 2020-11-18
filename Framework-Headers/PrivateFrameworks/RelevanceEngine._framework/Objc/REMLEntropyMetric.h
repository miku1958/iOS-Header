//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REMLMetricsProvider-Protocol.h>

@class NSMutableArray, NSString;

@interface REMLEntropyMetric : NSObject <REMLMetricsProvider>
{
    NSString *_metricName;
    NSString *_predictionFeatureName;
    NSString *_truthFeatureName;
    long long _arrayFeatureIndex;
    long long _numExamples;
    double _sumTruth;
    double _sumPrediction;
    double _logScore;
    double _normalizedLogScore;
    unsigned long long _calibrationCurveNumBuckets;
    NSMutableArray *_calibrationCurveTotal;
    NSMutableArray *_calibrationCurveTrue;
}

- (void).cxx_destruct;
- (unsigned long long)calibrationCurveNumBuckets;
- (id)calibrationCurveTotal;
- (id)calibrationCurveTrue;
- (void)createCheckpoint;
- (double)getDoubleFromFeatureValue:(id)arg1;
- (id)initWithName:(id)arg1 featureName:(id)arg2;
- (id)meanEntropy;
- (id)meanNormalizedEntropy;
- (id)meanPrediction;
- (id)meanTruth;
- (id)name;
- (long long)numberOfExamples;
- (void)reset;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;

@end
