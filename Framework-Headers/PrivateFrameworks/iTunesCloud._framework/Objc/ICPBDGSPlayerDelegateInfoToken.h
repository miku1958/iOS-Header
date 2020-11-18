//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying>
{
    double _expirationTimeInterval;
    unsigned long long _sessionID;
    NSString *_storefrontIdentifier;
    NSData *_token;
    struct {
        unsigned int expirationTimeInterval:1;
        unsigned int sessionID:1;
    } _has;
}

@property (nonatomic) double expirationTimeInterval; // @synthesize expirationTimeInterval=_expirationTimeInterval;
@property (nonatomic) BOOL hasExpirationTimeInterval;
@property (nonatomic) BOOL hasSessionID;
@property (readonly, nonatomic) BOOL hasStorefrontIdentifier;
@property (readonly, nonatomic) BOOL hasToken;
@property (nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property (strong, nonatomic) NSData *token; // @synthesize token=_token;

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

