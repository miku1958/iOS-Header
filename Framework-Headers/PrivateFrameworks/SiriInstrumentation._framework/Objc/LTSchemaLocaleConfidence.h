//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface LTSchemaLocaleConfidence : PBCodable
{
    NSString *_locale;
    unsigned int _confidence;
    struct {
        unsigned int confidence:1;
    } _has;
    BOOL _hasLocale;
}

@property (nonatomic) unsigned int confidence; // @synthesize confidence=_confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasLocale; // @synthesize hasLocale=_hasLocale;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *locale; // @synthesize locale=_locale;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

