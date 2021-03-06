//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ETLossDefinition, ETOptimizerDefinition, NSArray, NSString, NSURL;
@protocol ETDataProvider;

@interface PHAPrivateFederatedLearningModelTrainer : NSObject
{
    id<ETDataProvider> _trainingData;
    NSURL *_espressoFileURL;
    NSArray *_layersToTrain;
    NSString *_inputName;
    NSString *_modelOutputName;
    NSString *_modelInferenceOutputName;
    NSString *_labelName;
    NSString *_lossName;
    NSString *_optimizerName;
    ETLossDefinition *_lossDefinition;
    ETOptimizerDefinition *_optimizerDefinition;
}

@property (readonly, nonatomic) NSURL *espressoFileURL; // @synthesize espressoFileURL=_espressoFileURL;
@property (strong, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property (strong, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property (readonly, nonatomic) NSArray *layersToTrain; // @synthesize layersToTrain=_layersToTrain;
@property (strong, nonatomic) ETLossDefinition *lossDefinition; // @synthesize lossDefinition=_lossDefinition;
@property (strong, nonatomic) NSString *lossName; // @synthesize lossName=_lossName;
@property (strong, nonatomic) NSString *modelInferenceOutputName; // @synthesize modelInferenceOutputName=_modelInferenceOutputName;
@property (strong, nonatomic) NSString *modelOutputName; // @synthesize modelOutputName=_modelOutputName;
@property (strong, nonatomic) ETOptimizerDefinition *optimizerDefinition; // @synthesize optimizerDefinition=_optimizerDefinition;
@property (strong, nonatomic) NSString *optimizerName; // @synthesize optimizerName=_optimizerName;
@property (readonly, nonatomic) id<ETDataProvider> trainingData; // @synthesize trainingData=_trainingData;

+ (BOOL)_generateError:(id *)arg1 errorCode:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
- (void).cxx_destruct;
- (int)_argmax:(float *)arg1 size:(int)arg2;
- (id)_averageLossAndAccuracyForBatchResults:(id)arg1 error:(id *)arg2;
- (id)_getParamsFromTask:(id)arg1 forLayers:(id)arg2 error:(id *)arg3;
- (BOOL)_trueLabelTensor:(id)arg1 isEqualToPredictionTensor:(id)arg2;
- (id)initWithTrainingData:(id)arg1 espressoFileURL:(id)arg2 learningRate:(id)arg3 modelInputName:(id)arg4 modelOutputName:(id)arg5 lossName:(id)arg6 optimizerName:(id)arg7 error:(id *)arg8;
- (id)trainForNumberOfEpochs:(unsigned long long)arg1 layersToTrain:(id)arg2 verbose:(BOOL)arg3 error:(id *)arg4;

@end

