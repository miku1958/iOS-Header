//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface INFGrammarCollection : NSObject
{
    NSMutableDictionary *_tokensDictionary;
    NSMutableDictionary *_sentencesDictionary;
}

@property (readonly, nonatomic) NSArray *sentences;
@property (strong, nonatomic) NSMutableDictionary *sentencesDictionary; // @synthesize sentencesDictionary=_sentencesDictionary;
@property (readonly, nonatomic) NSArray *tokens;
@property (strong, nonatomic) NSMutableDictionary *tokensDictionary; // @synthesize tokensDictionary=_tokensDictionary;

+ (id)grammarCollection;
+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2;
+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;
- (void).cxx_destruct;
- (void)addSentence:(id)arg1;
- (void)addToken:(id)arg1;
- (id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2;
- (id)createNounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
- (id)createNounWithIdentifier:(id)arg1 language:(id)arg2;
- (id)createSentenceWithIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;
- (id)sentenceWithIdentifier:(id)arg1;
- (id)tokenWithIdentifier:(id)arg1;
- (void)writeToFileAtPath:(id)arg1;

@end

