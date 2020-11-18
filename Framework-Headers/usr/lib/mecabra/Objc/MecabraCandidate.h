//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <mecabra/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface MecabraCandidate : NSObject <NSCopying>
{
    void *_rawCandidate;
}

@property (readonly, nonatomic) NSString *analysisString;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *convertedAnalysisString;
@property (readonly, nonatomic) NSString *dictionaryReading;
@property (readonly, nonatomic) BOOL isAutocorrectedCandidate;
@property (readonly, nonatomic) BOOL isConversionCandidate;
@property (readonly, nonatomic) BOOL isEmojiCandidate;
@property (readonly, nonatomic) BOOL isExtensionCandidate;
@property (readonly, nonatomic) BOOL isFuzzyMatchCandidate;
@property (readonly, nonatomic) BOOL isLearningDictionaryCandidate;
@property (readonly, nonatomic) BOOL isOTAWordlistCandidate;
@property (readonly, nonatomic) BOOL isPersonName;
@property (readonly, nonatomic) BOOL isPredictionCandidate;
@property (readonly, nonatomic) BOOL isSyntheticCandidate;
@property (readonly, nonatomic) BOOL isUserWordCandidate;
@property (readonly, nonatomic) struct MecabraCandidateBase *rawCandidate;
@property (readonly, nonatomic) struct ConversionCandidate *rawConversionCandidate;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *surface;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long wordCount;

+ (id)syntheticCandidateFromWords:(id)arg1 withLexicon:(struct Lexicon *)arg2 language:(int)arg3;
- (id)convertedAnalysisStringForFirstSyllable;
- (struct __CFArray *)copySyllableLengthArrayForWordAtIndex:(unsigned long long)arg1;
- (struct __CFArray *)copySyllableLengthArrayInAnalysisString;
- (struct __CFArray *)copySyllableLengthArrayInConvertedAnalysisString;
- (struct __CFArray *)copySyllableLengthArrayInDictionaryReading;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCandidate:(struct MecabraCandidateBase *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned short)kind;
- (unsigned short)lastPrefixValue;
- (unsigned short)lcAttrAtIndex:(unsigned long long)arg1;
- (unsigned short)matchType;
- (unsigned short)matchedLengthType;
- (long long)phraseBoundaryAfterWordAtIndex:(long long)arg1;
- (unsigned short)rcAttrAtIndex:(unsigned long long)arg1;
- (BOOL)setDisplayString:(struct __CFString *)arg1;
- (void)setWeight:(unsigned long long)arg1;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)arg1 syllableLengths:(id)arg2;
- (unsigned long long)trieValueAtIndex:(unsigned long long)arg1;
- (long long)weight;
- (unsigned short)wordDictionaryReadingLengthAtIndex:(unsigned long long)arg1;
- (id)wordIDs;
- (BOOL)wordIsFromSystemDictionaryAtIndex:(unsigned long long)arg1;
- (unsigned short)wordLengthAtIndex:(unsigned long long)arg1;
- (CDStruct_912cb5d2)wordRangeAtIndex:(long long)arg1;
- (unsigned short)wordReadingLengthAtIndex:(unsigned long long)arg1;
- (id)wordReadings;
- (id)words;

@end

