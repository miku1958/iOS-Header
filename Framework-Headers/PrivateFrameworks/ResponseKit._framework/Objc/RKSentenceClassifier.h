//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSValue;

@interface RKSentenceClassifier : NSObject
{
    BOOL _sentenceIsTerminated;
    BOOL _sentenceIsAllSymbols;
    BOOL _sentenceHasQuestionTerminator;
    BOOL _sentenceHasAlternativeConjunction;
    NSArray *_sentenceEntities;
    NSArray *_matchedRanges;
    NSString *_languageIdentifier;
    NSMutableDictionary *_partofSpeechAvailabilityByLanguage;
    NSMutableDictionary *_lemmaAvailabilityByLanguage;
    NSString *_sentenceStringOriginal;
    NSString *_sentenceString;
    NSValue *_sentenceTag;
    NSArray *_inversions;
    NSArray *_interrogatives;
    NSArray *_choiceDelimiters;
    NSArray *_alternatives;
    NSArray *_appreciations;
    NSArray *_dataDetected;
    NSString *_RKLinguisticTagDataDetected;
}

@property (strong) NSString *RKLinguisticTagDataDetected; // @synthesize RKLinguisticTagDataDetected=_RKLinguisticTagDataDetected;
@property (readonly) NSArray *alternativeConjunctions;
@property (strong) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property (strong) NSArray *appreciations; // @synthesize appreciations=_appreciations;
@property (strong) NSArray *choiceDelimiters; // @synthesize choiceDelimiters=_choiceDelimiters;
@property (strong) NSArray *dataDetected; // @synthesize dataDetected=_dataDetected;
@property (strong) NSArray *interrogatives; // @synthesize interrogatives=_interrogatives;
@property (strong) NSArray *inversions; // @synthesize inversions=_inversions;
@property (readonly) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
@property (strong) NSMutableDictionary *lemmaAvailabilityByLanguage; // @synthesize lemmaAvailabilityByLanguage=_lemmaAvailabilityByLanguage;
@property (strong) NSArray *matchedRanges; // @synthesize matchedRanges=_matchedRanges;
@property (strong) NSMutableDictionary *partofSpeechAvailabilityByLanguage; // @synthesize partofSpeechAvailabilityByLanguage=_partofSpeechAvailabilityByLanguage;
@property (strong) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property BOOL sentenceHasAlternativeConjunction; // @synthesize sentenceHasAlternativeConjunction=_sentenceHasAlternativeConjunction;
@property BOOL sentenceHasQuestionTerminator; // @synthesize sentenceHasQuestionTerminator=_sentenceHasQuestionTerminator;
@property BOOL sentenceIsAllSymbols; // @synthesize sentenceIsAllSymbols=_sentenceIsAllSymbols;
@property BOOL sentenceIsTerminated; // @synthesize sentenceIsTerminated=_sentenceIsTerminated;
@property (strong) NSString *sentenceString; // @synthesize sentenceString=_sentenceString;
@property (strong) NSString *sentenceStringOriginal; // @synthesize sentenceStringOriginal=_sentenceStringOriginal;
@property (strong) NSValue *sentenceTag; // @synthesize sentenceTag=_sentenceTag;

+ (id)alternativeInversionsForLanguage:(id)arg1;
+ (id)appreciationKeywordsForLanguage:(id)arg1;
+ (BOOL)canClassifyLanguageIdentifier:(id)arg1;
+ (id)categoryKeywordMapForLanguage:(id)arg1;
+ (id)languageIdentifierFromClassName;
+ (id)polarTagRegularExpressionForLanguage:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (id)sensitiveSubjectRegularExpressionForLanguage:(id)arg1;
+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned long long)arg3;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (Class)subclassForLocale:(id)arg1;
- (void).cxx_destruct;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (void)analyzeSentence;
- (id)classifySentence;
- (id)init;
- (id)lexicalEntitiesFromString:(id)arg1;
- (id)sentenceClassification:(id)arg1 options:(unsigned long long)arg2;

@end
