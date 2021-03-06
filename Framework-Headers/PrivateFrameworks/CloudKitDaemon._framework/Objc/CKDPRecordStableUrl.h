//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKDPRecordStableUrl : PBCodable <NSCopying>
{
    NSString *_displayedHostname;
    NSData *_encryptedPublicSharingKey;
    NSData *_protectedFullToken;
    NSString *_routingKey;
    NSData *_shortTokenHash;
}

@property (strong, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property (strong, nonatomic) NSData *encryptedPublicSharingKey; // @synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey;
@property (readonly, nonatomic) BOOL hasDisplayedHostname;
@property (readonly, nonatomic) BOOL hasEncryptedPublicSharingKey;
@property (readonly, nonatomic) BOOL hasProtectedFullToken;
@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (strong, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property (strong, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property (strong, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;

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

