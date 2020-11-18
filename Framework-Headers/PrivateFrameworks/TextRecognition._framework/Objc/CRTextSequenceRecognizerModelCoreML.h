//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextRecognition/CRTextSequenceRecognizerModel.h>

@class CRRecognizerConfiguration, MLModel;

__attribute__((visibility("hidden")))
@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel
{
    CRRecognizerConfiguration *_configuration;
    MLModel *_model;
}

@property (readonly, nonatomic) MLModel *model; // @synthesize model=_model;

- (void).cxx_destruct;
- (id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithMLConfiguration:(id)arg1 error:(id *)arg2;
- (id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4;
- (id)predictFromInputs:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromImg_input:(id)arg1 error:(id *)arg2;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)shouldSaturateInputBatchesForConfiguration:(id)arg1;

@end
