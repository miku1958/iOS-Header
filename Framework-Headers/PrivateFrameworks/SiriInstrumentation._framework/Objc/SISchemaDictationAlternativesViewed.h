//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesViewed : PBCodable
{
    int _countOfWordsUnderlined;
    int _countOfAlternativesAvailable;
    SISchemaLocaleIdentifier *_alternativesLocale;
    struct {
        unsigned int countOfWordsUnderlined:1;
        unsigned int countOfAlternativesAvailable:1;
    } _has;
    BOOL _hasAlternativesLocale;
}

@property (strong, nonatomic) SISchemaLocaleIdentifier *alternativesLocale; // @synthesize alternativesLocale=_alternativesLocale;
@property (nonatomic) int countOfAlternativesAvailable; // @synthesize countOfAlternativesAvailable=_countOfAlternativesAvailable;
@property (nonatomic) int countOfWordsUnderlined; // @synthesize countOfWordsUnderlined=_countOfWordsUnderlined;
@property (nonatomic) BOOL hasAlternativesLocale; // @synthesize hasAlternativesLocale=_hasAlternativesLocale;
@property (nonatomic) BOOL hasCountOfAlternativesAvailable;
@property (nonatomic) BOOL hasCountOfWordsUnderlined;
@property (readonly, nonatomic) NSData *jsonData;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
