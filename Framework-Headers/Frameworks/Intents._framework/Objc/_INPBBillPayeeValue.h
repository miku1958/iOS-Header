//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBillPayeeValue-Protocol.h>

@class NSString, _INPBDataString, _INPBValueMetadata;

@interface _INPBBillPayeeValue : PBCodable <_INPBBillPayeeValue, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_accountNumber;
    _INPBDataString *_nickname;
    _INPBDataString *_organizationName;
    _INPBValueMetadata *_valueMetadata;
}

@property (copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccountNumber;
@property (readonly, nonatomic) BOOL hasNickname;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBDataString *nickname; // @synthesize nickname=_nickname;
@property (strong, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

