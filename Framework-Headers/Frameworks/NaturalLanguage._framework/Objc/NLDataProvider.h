//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NLModelConfiguration, NSArray, NSDictionary, NSString;

@interface NLDataProvider : NSObject
{
    NLModelConfiguration *_configuration;
    struct __CFStringTokenizer *_tokenizer;
    NSArray *_instances;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
    unsigned long long _numberOfTokens;
    NSString *_recognizedLanguage;
    BOOL _generatedMaps;
    BOOL _performedLanguageRecognition;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) unsigned long long numberOfInstances;
@property (readonly) NSString *recognizedLanguage;

- (void).cxx_destruct;
- (void)_generateMaps;
- (void)_generateMapsWithModelTrainer:(id)arg1;
- (void)_performLanguageRecognition;
- (void)dealloc;
- (id)documentFrequencyMap;
- (void)generateMapsWithModelTrainer:(id)arg1;
- (id)initWithConfiguration:(id)arg1 dataURL:(id)arg2;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)inverseLabelMap;
- (id)labelMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfTokens;
- (unsigned long long)numberOfVocabularyEntries;
- (struct __CFStringTokenizer *)tokenizer;
- (id)vocabularyMap;

@end
