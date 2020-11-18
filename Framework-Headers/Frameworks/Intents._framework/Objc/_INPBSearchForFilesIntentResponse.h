//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBInteger, _INPBString;

@interface _INPBSearchForFilesIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entities;
    _INPBInteger *_numResults;
    _INPBString *_query;
    BOOL _success;
    CDStruct_f2ecb737 _has;
}

@property (strong, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
@property (readonly, nonatomic) BOOL hasNumResults;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) BOOL hasSuccess;
@property (strong, nonatomic) _INPBInteger *numResults; // @synthesize numResults=_numResults;
@property (strong, nonatomic) _INPBString *query; // @synthesize query=_query;
@property (nonatomic) BOOL success; // @synthesize success=_success;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)entitiesType;
+ (id)options;
- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
