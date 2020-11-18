//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLTransformerProtocol-Protocol.h>

@class NSCharacterSet, NSString, PMLLexicon;

@interface PMLFastTextVectorizer : NSObject <PMLTransformerProtocol>
{
    PMLLexicon *_lexicon;
    unsigned long long _featureVectorLength;
    unsigned long long _vocabSize;
    unsigned long long _bucketSize;
    struct _NSRange _characterNGramRange;
    unsigned long long _maxTokenNGramLength;
    NSCharacterSet *_splitCharacterSet;
    unsigned long long _maxTokenLength;
    NSString *_bow;
    NSString *_eow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCharacterNGramHashesToCounter:(id)arg1 tokenIndices:(id)arg2;
- (void)_addTokenNGramHashesToCounter:(id)arg1 tokenIndices:(id)arg2;
- (unsigned long long)_getVocabSize;
- (unsigned long long)_hashUniCharToBucket:(const unsigned short *)arg1 len:(int)arg2;
- (id)_splitTextToTokens:(id)arg1;
- (id)initWithLexicon:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(struct _NSRange)arg3 maxTokenNGramLength:(unsigned long long)arg4 featureVectorLength:(unsigned long long)arg5 maxTokenLength:(unsigned long long)arg6 bow:(id)arg7 eow:(id)arg8;
- (id)initWithLexiconPath:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(struct _NSRange)arg3 maxTokenNGramLength:(unsigned long long)arg4 featureVectorLength:(unsigned long long)arg5 maxTokenLength:(unsigned long long)arg6 bow:(id)arg7 eow:(id)arg8;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
