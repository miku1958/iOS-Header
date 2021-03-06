//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModelConfiguration, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSURL;
@protocol _DKKnowledgeQuerying;

@interface _PSPersonalizationEvaluation : NSObject
{
    NSDictionary *_recipe;
    id<_DKKnowledgeQuerying> _knowledgeStore;
    NSMutableArray *_featureDictArrayForAllShareEvents;
    NSMutableArray *_sampledFeatureVectors;
    NSMutableDictionary *_sampledFeatureVectorsForSplits;
    NSMutableDictionary *_MLFeatureProvidersForMLModels;
    NSDictionary *_selectedFeaturesConfig;
    NSMutableArray *_results;
    MLModelConfiguration *_adaptableModelConfiguration;
    NSURL *_intermediateCompiledModelURL;
    NSNumber *_trainDataCount;
    NSNumber *_testDataCount;
    NSNumber *_batchSize;
    NSNumber *_topN;
    NSNumber *_epoc;
    NSNumber *_evaluationIterationCount;
    NSNumber *_testSplitPercent;
    NSNumber *_swapOK;
    NSNumber *_accuracyGainThresholdForSwap;
    NSNumber *_engagementRateGainThresholdForSwap;
    NSNumber *_minimumTestDataSizeForSwap;
    NSNumber *_numClasses;
    NSNumber *_numTrees;
    NSNumber *_maxDepth;
    NSNumber *_learningRate;
    NSNumber *_minChildWeight;
    NSNumber *_recipeID;
    NSNumber *_minSampleCountForAdaptation;
}

@property (strong, nonatomic) NSMutableDictionary *MLFeatureProvidersForMLModels; // @synthesize MLFeatureProvidersForMLModels=_MLFeatureProvidersForMLModels;
@property (strong, nonatomic) NSNumber *accuracyGainThresholdForSwap; // @synthesize accuracyGainThresholdForSwap=_accuracyGainThresholdForSwap;
@property (strong, nonatomic) MLModelConfiguration *adaptableModelConfiguration; // @synthesize adaptableModelConfiguration=_adaptableModelConfiguration;
@property (strong, nonatomic) NSNumber *batchSize; // @synthesize batchSize=_batchSize;
@property (strong, nonatomic) NSNumber *engagementRateGainThresholdForSwap; // @synthesize engagementRateGainThresholdForSwap=_engagementRateGainThresholdForSwap;
@property (strong, nonatomic) NSNumber *epoc; // @synthesize epoc=_epoc;
@property (strong, nonatomic) NSNumber *evaluationIterationCount; // @synthesize evaluationIterationCount=_evaluationIterationCount;
@property (strong, nonatomic) NSMutableArray *featureDictArrayForAllShareEvents; // @synthesize featureDictArrayForAllShareEvents=_featureDictArrayForAllShareEvents;
@property (strong, nonatomic) NSURL *intermediateCompiledModelURL; // @synthesize intermediateCompiledModelURL=_intermediateCompiledModelURL;
@property (strong, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property (strong, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property (strong, nonatomic) NSNumber *maxDepth; // @synthesize maxDepth=_maxDepth;
@property (strong, nonatomic) NSNumber *minChildWeight; // @synthesize minChildWeight=_minChildWeight;
@property (strong, nonatomic) NSNumber *minSampleCountForAdaptation; // @synthesize minSampleCountForAdaptation=_minSampleCountForAdaptation;
@property (strong, nonatomic) NSNumber *minimumTestDataSizeForSwap; // @synthesize minimumTestDataSizeForSwap=_minimumTestDataSizeForSwap;
@property (strong, nonatomic) NSNumber *numClasses; // @synthesize numClasses=_numClasses;
@property (strong, nonatomic) NSNumber *numTrees; // @synthesize numTrees=_numTrees;
@property (readonly, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
@property (strong, nonatomic) NSNumber *recipeID; // @synthesize recipeID=_recipeID;
@property (strong, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property (strong, nonatomic) NSMutableArray *sampledFeatureVectors; // @synthesize sampledFeatureVectors=_sampledFeatureVectors;
@property (strong, nonatomic) NSMutableDictionary *sampledFeatureVectorsForSplits; // @synthesize sampledFeatureVectorsForSplits=_sampledFeatureVectorsForSplits;
@property (strong, nonatomic) NSDictionary *selectedFeaturesConfig; // @synthesize selectedFeaturesConfig=_selectedFeaturesConfig;
@property (strong, nonatomic) NSNumber *swapOK; // @synthesize swapOK=_swapOK;
@property (strong, nonatomic) NSNumber *testDataCount; // @synthesize testDataCount=_testDataCount;
@property (strong, nonatomic) NSNumber *testSplitPercent; // @synthesize testSplitPercent=_testSplitPercent;
@property (strong, nonatomic) NSNumber *topN; // @synthesize topN=_topN;
@property (strong, nonatomic) NSNumber *trainDataCount; // @synthesize trainDataCount=_trainDataCount;

- (void).cxx_destruct;
- (void)adaptMLModel:(id)arg1 overDataSplit:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4;
- (void)adaptMLModel:(id)arg1 withTrainingData:(id)arg2;
- (unsigned long long)bucketedValue:(unsigned long long)arg1;
- (BOOL)cloneAdaptableModel:(id)arg1 toFilePath:(id)arg2 originalXgboostModelName:(id)arg3 clonedXgboostModelName:(id)arg4;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1 forMLModel:(id)arg2;
- (id)engagementSimulationWithMLModel:(id)arg1 mlModelType:(id)arg2 labelName:(id)arg3;
- (id)evaluateClassicMLModel:(id)arg1;
- (void)getSamplesWithTestSplitPercent;
- (id)initWithRecipe:(id)arg1 knowledgeStore:(id)arg2;
- (id)loadAdaptableModelUnderDirectory:(id)arg1;
- (id)loadDefaultModel;
- (id)measureTestAccuracyOf:(id)arg1 againstTrueValuesOf:(id)arg2 labelName:(id)arg3;
- (void)processData;
- (id)runAdaptationAndEvaluation;
- (id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)arg1 adaptableModelDeployPath:(id)arg2;
- (void)sampleFromData;
- (void)setParametersFromRecipe;
- (void)setupAdaptableModelConfig;
- (id)updateMLModelWithURL:(id)arg1 overDataSplit:(id)arg2;

@end

