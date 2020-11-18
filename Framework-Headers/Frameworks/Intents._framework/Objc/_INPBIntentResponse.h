//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess, _INPBUserActivity;

@interface _INPBIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBIntentResponsePayloadFailure *_PayloadFailure;
    _INPBIntentResponsePayloadSuccess *_PayloadSuccess;
    int _type;
    _INPBUserActivity *_userActivity;
    CDStruct_f953fb60 _has;
}

@property (strong, nonatomic) _INPBIntentResponsePayloadFailure *PayloadFailure; // @synthesize PayloadFailure=_PayloadFailure;
@property (strong, nonatomic) _INPBIntentResponsePayloadSuccess *PayloadSuccess; // @synthesize PayloadSuccess=_PayloadSuccess;
@property (readonly, nonatomic) BOOL hasPayloadFailure;
@property (readonly, nonatomic) BOOL hasPayloadSuccess;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUserActivity;
@property (nonatomic) int type; // @synthesize type=_type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) _INPBUserActivity *userActivity; // @synthesize userActivity=_userActivity;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
