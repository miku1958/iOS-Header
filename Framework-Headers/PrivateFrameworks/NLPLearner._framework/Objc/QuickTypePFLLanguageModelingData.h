//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NLPLearner/QuickTypePFLTrainingData.h>

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface QuickTypePFLLanguageModelingData : QuickTypePFLTrainingData
{
    NSLocale *_locale;
    struct CFScopedPtr<const _LXLexicon *> _lexicon;
    NSString *_tokenIDMapPath;
}

@property (copy, nonatomic) NSString *tokenIDMapPath; // @synthesize tokenIDMapPath=_tokenIDMapPath;

+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addExamples:(id)arg1;
- (void)addResource:(id)arg1;
- (id)getEvaluationDataPoint;
- (id)getTrainingDataBatch:(unsigned long long)arg1;
- (id)initWithLocale:(id)arg1;
- (BOOL)loadFromCoreDuet:(id)arg1;

@end

