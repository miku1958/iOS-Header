//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetFileInformationIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBGetFileInformationIntent : PBCodable <_INPBGetFileInformationIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int entityType:1;
        unsigned int propertyName:1;
        unsigned int qualifier:1;
    } _has;
    int _entityType;
    int _propertyName;
    int _qualifier;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasPropertyName;
@property (nonatomic) BOOL hasQualifier;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) int propertyName; // @synthesize propertyName=_propertyName;
@property (nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsPropertyName:(id)arg1;
- (int)StringAsQualifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)entityTypeAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)propertyNameAsString:(int)arg1;
- (id)qualifierAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

