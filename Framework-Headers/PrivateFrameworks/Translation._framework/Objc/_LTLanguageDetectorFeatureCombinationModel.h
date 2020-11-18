//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NSMutableArray, NSNumber, NSString;

@interface _LTLanguageDetectorFeatureCombinationModel : NSObject
{
    MLModel *_mlModel;
    NSString *_modelInput;
    NSString *_modelOutput;
    NSMutableArray *_features;
    NSNumber *_missingLanguageDetectorDefault;
}

- (void).cxx_destruct;
- (id)estimateLanguage:(id)arg1 languageDetectionResult:(id)arg2 finalSpeechResults:(id)arg3;
- (id)getModelFeatures:(id)arg1 canonicalPair:(id)arg2 sourceSpeechResult:(id)arg3 targetSpeechResult:(id)arg4;
- (id)initWithConfig:(id)arg1;

@end
