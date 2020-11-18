//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@interface _INPBIntentSlotResolutionResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBPayloadConfirmation *_PayloadConfirmation;
    _INPBPayloadNeedsDisambiguation *_PayloadNeedsDisambiguation;
    _INPBPayloadNeedsValue *_PayloadNeedsValue;
    _INPBPayloadSuccess *_PayloadSuccess;
    _INPBPayloadUnsupported *_PayloadUnsupported;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (strong, nonatomic) _INPBPayloadConfirmation *PayloadConfirmation; // @synthesize PayloadConfirmation=_PayloadConfirmation;
@property (strong, nonatomic) _INPBPayloadNeedsDisambiguation *PayloadNeedsDisambiguation; // @synthesize PayloadNeedsDisambiguation=_PayloadNeedsDisambiguation;
@property (strong, nonatomic) _INPBPayloadNeedsValue *PayloadNeedsValue; // @synthesize PayloadNeedsValue=_PayloadNeedsValue;
@property (strong, nonatomic) _INPBPayloadSuccess *PayloadSuccess; // @synthesize PayloadSuccess=_PayloadSuccess;
@property (strong, nonatomic) _INPBPayloadUnsupported *PayloadUnsupported; // @synthesize PayloadUnsupported=_PayloadUnsupported;
@property (readonly, nonatomic) BOOL hasPayloadConfirmation;
@property (readonly, nonatomic) BOOL hasPayloadNeedsDisambiguation;
@property (readonly, nonatomic) BOOL hasPayloadNeedsValue;
@property (readonly, nonatomic) BOOL hasPayloadSuccess;
@property (readonly, nonatomic) BOOL hasPayloadUnsupported;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type; // @synthesize type=_type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

