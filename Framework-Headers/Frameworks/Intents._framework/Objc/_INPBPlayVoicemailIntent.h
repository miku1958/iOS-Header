//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBPlayVoicemailIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_callRecordIdentifier;
    _INPBIntentMetadata *_intentMetadata;
}

@property (strong, nonatomic) NSString *callRecordIdentifier; // @synthesize callRecordIdentifier=_callRecordIdentifier;
@property (readonly, nonatomic) BOOL hasCallRecordIdentifier;
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

