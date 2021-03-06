//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCreateFileIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBCreateFileIntent : PBCodable <_INPBCreateFileIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int destinationType:1;
        unsigned int entityType:1;
    } _has;
    int _destinationType;
    int _entityType;
    _INPBString *_destinationName;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
@property (nonatomic) int destinationType; // @synthesize destinationType=_destinationType;
@property (strong, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) BOOL hasDestinationType;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

