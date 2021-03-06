//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLRegressor.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLModelSpecificationSaver-Protocol.h>
#import <CoreML/MLSupervisedOnlineUpdatable-Protocol.h>

@class NSString;

@interface MLBayesianProbitRegression : MLRegressor <MLSupervisedOnlineUpdatable, MLModelSpecificationLoader, MLModelSpecificationSaver>
{
    shared_ptr_7e6b0415 _model;
    NSString *_regressionInputFeatureName;
    NSString *_optimismInputFeatureName;
    NSString *_meanOutputFeatureName;
    NSString *_varianceOutputFeatureName;
    NSString *_pessimisticProbabilityOutputFeatureName;
    NSString *_sampledProbabilityOutputFeatureName;
    NSString *_samplingScaleInputFeatureName;
    NSString *_samplingTruncationInputFeatureName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (BOOL)setFeatureName:(id *)arg1 to:(id)arg2 descriptions:(id)arg3;
+ (BOOL)validateModelDescription:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)FeatureCount;
- (BOOL)convertOutputFeatureToPredictionValues:(id)arg1 event:(BOOL *)arg2 importance:(double *)arg3 error:(id *)arg4;
- (void)createCheckpoint;
- (id)createRegressorResult:(struct Prediction *)arg1;
- (id)getArrayFeatureValue:(id)arg1;
- (double)getFeatureValue:(id)arg1 forName:(id)arg2 withType:(long long)arg3;
- (shared_ptr_dc1b6fff)getOneHotFeatureValues:(id)arg1 error:(id *)arg2;
- (double)getOptimism:(id)arg1;
- (double)getSamplingScale:(id)arg1;
- (double)getSamplingTruncation:(id)arg1;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3 regressionInputName:(id)arg4 optimismInputName:(id)arg5 samplingScaleInputName:(id)arg6 samplingTruncationInputName:(id)arg7 meanOutputName:(id)arg8 varianceOutputName:(id)arg9 pessimisticProbabilityOutputName:(id)arg10 sampledProbabilityOutputName:(id)arg11;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBopr:(id)arg1;
- (shared_ptr_7e6b0415)model;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)reset;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (struct _MLModelSpecification *)saveModelToSpecification:(id *)arg1;
- (BOOL)setFeatureCount:(unsigned long long)arg1;
- (BOOL)setInputFeatureName:(id *)arg1 to:(id)arg2;
- (BOOL)setOutputFeatureName:(id *)arg1 to:(id)arg2;
- (BOOL)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 error:(id *)arg3;
- (BOOL)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end

