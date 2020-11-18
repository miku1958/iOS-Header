//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotVocabularyValue-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyValue : PBCodable <_INPBIntentSlotVocabularyValue, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_examples;
    NSString *_phrase;
    NSString *_pronunciation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *examples; // @synthesize examples=_examples;
@property (readonly, nonatomic) unsigned long long examplesCount;
@property (readonly, nonatomic) BOOL hasPhrase;
@property (readonly, nonatomic) BOOL hasPronunciation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
@property (copy, nonatomic) NSString *pronunciation; // @synthesize pronunciation=_pronunciation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addExamples:(id)arg1;
- (void)clearExamples;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)examplesAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

