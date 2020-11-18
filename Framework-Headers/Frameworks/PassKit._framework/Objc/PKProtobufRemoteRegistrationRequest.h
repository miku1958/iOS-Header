//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKProtobufRemoteRegistrationRequest : PBRequest <NSCopying>
{
    unsigned int _version;
    BOOL _registerBroker;
    BOOL _registerPeerPayment;
    struct {
        unsigned int registerBroker:1;
        unsigned int registerPeerPayment:1;
    } _has;
}

@property (nonatomic) BOOL hasRegisterBroker;
@property (nonatomic) BOOL hasRegisterPeerPayment;
@property (nonatomic) BOOL registerBroker; // @synthesize registerBroker=_registerBroker;
@property (nonatomic) BOOL registerPeerPayment; // @synthesize registerPeerPayment=_registerPeerPayment;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

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
