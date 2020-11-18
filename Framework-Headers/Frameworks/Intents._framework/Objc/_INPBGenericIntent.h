//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_domain;
    _INPBIntentMetadata *_metadata;
    NSMutableArray *_parameters;
    NSString *_verb;
}

@property (strong, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasVerb;
@property (strong, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *verb; // @synthesize verb=_verb;

+ (id)options;
+ (Class)parametersType;
- (void).cxx_destruct;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
