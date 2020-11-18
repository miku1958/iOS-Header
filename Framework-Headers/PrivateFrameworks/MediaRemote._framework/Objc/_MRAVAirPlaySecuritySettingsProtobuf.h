//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying>
{
    NSString *_password;
    int _securityType;
    struct {
        unsigned int securityType:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasPassword;
@property (nonatomic) BOOL hasSecurityType;
@property (strong, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) int securityType; // @synthesize securityType=_securityType;

- (void).cxx_destruct;
- (int)StringAsSecurityType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)securityTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

