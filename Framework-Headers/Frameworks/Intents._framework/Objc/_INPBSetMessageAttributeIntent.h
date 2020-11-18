//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetMessageAttributeIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <_INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int attribute:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _attribute;
    NSArray *_identifiers;
    _INPBIntentMetadata *_intentMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (nonatomic) int attribute; // @synthesize attribute=_attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAttribute;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property (readonly, nonatomic) unsigned long long identifiersCount;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsAttribute:(id)arg1;
- (void)addIdentifier:(id)arg1;
- (id)attributeAsString:(int)arg1;
- (void)clearIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
