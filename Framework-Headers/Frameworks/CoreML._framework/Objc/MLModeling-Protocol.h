//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MLLayerPath, MLModelDescription, MLModelExecutionSchedule, MLModelInterface, MLModelMetadata, MLPredictionOptions, NSString;
@protocol MLBatchProvider, MLFeatureProvider;

@protocol MLModeling

@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;
@property (strong, nonatomic) MLModelDescription *modelDescription;

- (MLModelExecutionSchedule *)executionSchedule;
- (MLLayerPath *)modelPath;
- (id<MLFeatureProvider>)predictionFromFeatures:(id<MLFeatureProvider>)arg1 error:(id *)arg2;
- (id<MLFeatureProvider>)predictionFromFeatures:(id<MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id<MLBatchProvider>)predictionsFromBatch:(id<MLBatchProvider>)arg1 error:(id *)arg2;
- (id<MLBatchProvider>)predictionsFromBatch:(id<MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (void)setModelPath:(MLLayerPath *)arg1 modelName:(NSString *)arg2;
@end

