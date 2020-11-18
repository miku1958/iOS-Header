//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBIntentMetadata, _INPBString;

@interface _INPBUncompressFileIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBString *_entityName;
    int _entityType;
    _INPBIntentMetadata *_intentMetadata;
    CDStruct_032f6352 _has;
}

@property (strong, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)options;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

