//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContact;

@interface _INPBShareDestination : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBContact *_contact;
    int _deviceType;
    struct {
        unsigned int deviceType:1;
    } _has;
}

@property (strong, nonatomic) _INPBContact *contact; // @synthesize contact=_contact;
@property (nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property (readonly, nonatomic) BOOL hasContact;
@property (nonatomic) BOOL hasDeviceType;
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

