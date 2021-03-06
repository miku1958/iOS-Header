//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSSocialService.h>

@class NPNameParser, NSCharacterSet, NSDictionary, NSMutableDictionary;

@interface CLSSocialServiceCoreNameParser : CLSSocialService
{
    NPNameParser *_nameParser;
    NSMutableDictionary *_sexHintByCNIdentifier;
    NSDictionary *_vocabularyByRelationshipByLocale;
    NSMutableDictionary *_regularExpressionByRelationshipByLocale;
    NSCharacterSet *_nonLetterCharacterSet;
}

@property (strong) NPNameParser *nameParser; // @synthesize nameParser=_nameParser;
@property (strong, nonatomic) NSCharacterSet *nonLetterCharacterSet; // @synthesize nonLetterCharacterSet=_nonLetterCharacterSet;
@property (strong, nonatomic) NSMutableDictionary *regularExpressionByRelationshipByLocale; // @synthesize regularExpressionByRelationshipByLocale=_regularExpressionByRelationshipByLocale;
@property (strong, nonatomic) NSMutableDictionary *sexHintByCNIdentifier; // @synthesize sexHintByCNIdentifier=_sexHintByCNIdentifier;
@property (strong, nonatomic) NSDictionary *vocabularyByRelationshipByLocale; // @synthesize vocabularyByRelationshipByLocale=_vocabularyByRelationshipByLocale;

+ (id)_dictionaryKeyForPersonRelationship:(unsigned long long)arg1;
+ (unsigned long long)_personRelationshipFromString:(id)arg1;
- (void).cxx_destruct;
- (id)_normalizeName:(id)arg1;
- (id)_parentRelationships;
- (id)_regularExpressionForRelationship:(unsigned long long)arg1 languageCode:(id)arg2;
- (unsigned long long)_sexHintForRelationship:(unsigned long long)arg1;
- (id)init;
- (void)invalidateMemoryCaches;
- (unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (unsigned long long)sexHintForPerson:(id)arg1 usingLocales:(id)arg2;

@end

