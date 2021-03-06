//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OctagonTrust/NSCopying-Protocol.h>

@class OTCDPRecoveryInformation, OTEscrowAuthenticationInformation;

@interface OTICDPRecordContext : PBCodable <NSCopying>
{
    OTEscrowAuthenticationInformation *_authInfo;
    OTCDPRecoveryInformation *_cdpInfo;
}

@property (strong, nonatomic) OTEscrowAuthenticationInformation *authInfo; // @synthesize authInfo=_authInfo;
@property (strong, nonatomic) OTCDPRecoveryInformation *cdpInfo; // @synthesize cdpInfo=_cdpInfo;
@property (readonly, nonatomic) BOOL hasAuthInfo;
@property (readonly, nonatomic) BOOL hasCdpInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

