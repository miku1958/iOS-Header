//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPShareIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSString *_routingKey;
    CKDPShareIdentifier *_shareId;
    NSData *_shortTokenHash;
    BOOL _forceFetch;
    struct {
        unsigned int forceFetch:1;
    } _has;
}

@property (nonatomic) BOOL forceFetch; // @synthesize forceFetch=_forceFetch;
@property (nonatomic) BOOL hasForceFetch;
@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (readonly, nonatomic) BOOL hasShareId;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (strong, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property (strong, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property (strong, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;

+ (id)options;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

