//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NaturalLanguage/NLModelImpl.h>

@class NLGazetteer;

__attribute__((visibility("hidden")))
@interface NLModelImplG : NLModelImpl
{
    NLGazetteer *_gazetteer;
}

- (void).cxx_destruct;
- (id)gazetteer;
- (id)initWithGazetteer:(id)arg1;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;
- (id)initWithModelTrainer:(id)arg1;
- (id)modelData;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (unsigned long long)systemVersion;

@end
