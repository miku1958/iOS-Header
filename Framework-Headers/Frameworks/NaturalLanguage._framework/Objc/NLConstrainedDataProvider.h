//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NaturalLanguage/NLDataProvider.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLConstrainedDataProvider : NLDataProvider
{
    NLDataProvider *_dataProvider;
    struct _NLConstraintParameters _parameters;
    NSArray *_locators;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
}

- (void).cxx_destruct;
- (void)_generateMaps;
- (id)configuration;
- (id)documentFrequencyMap;
- (id)initWithDataProvider:(id)arg1 parameters:(struct _NLConstraintParameters)arg2 modelTrainer:(id)arg3;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)inverseLabelMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (struct __CFStringTokenizer *)tokenizer;
- (id)vocabularyMap;

@end

