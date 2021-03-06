//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotVocabularyPolicy-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <_INPBIntentSlotVocabularyPolicy, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_intentSlotNames;
    NSArray *_intentSlotVocabularyConcepts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *intentSlotNames; // @synthesize intentSlotNames=_intentSlotNames;
@property (readonly, nonatomic) unsigned long long intentSlotNamesCount;
@property (copy, nonatomic) NSArray *intentSlotVocabularyConcepts; // @synthesize intentSlotVocabularyConcepts=_intentSlotVocabularyConcepts;
@property (readonly, nonatomic) unsigned long long intentSlotVocabularyConceptsCount;
@property (readonly) Class superclass;

+ (Class)intentSlotVocabularyConceptsType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addIntentSlotNames:(id)arg1;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;
- (void)clearIntentSlotNames;
- (void)clearIntentSlotVocabularyConcepts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

