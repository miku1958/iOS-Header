//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBGenericIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBIntentMetadata *_metadata;
    NSMutableArray *_properties;
}

@property (readonly, nonatomic) BOOL hasMetadata;
@property (strong, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)propertiesType;
- (void).cxx_destruct;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

