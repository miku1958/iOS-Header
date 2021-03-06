//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NaturalLanguage/NLDataInstance.h>

@class NSArray;

@interface NLSequenceModelDataInstance : NLDataInstance
{
    NSArray *_tokens;
    NSArray *_labels;
}

+ (id)readInstancesFromString:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (void).cxx_destruct;
- (id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2;
- (id)initWithLine:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)initWithTokens:(id)arg1 labels:(id)arg2;
- (struct __CFDictionary *)instanceDictionary;
- (id)label;
- (id)labels;
- (id)locatorsWithIndex:(unsigned long long)arg1 parameters:(struct _NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(struct __CFStringTokenizer *)arg4;
- (id)string;
- (id)subInstanceWithLocator:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)tokens;

@end

