//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoSecureElementGetPairingInfoResponse : PBCodable <NSCopying>
{
    NSData *_challengeResponse;
    NSData *_cryptogram;
    BOOL _authRandomSet;
    BOOL _pending;
    BOOL _success;
    struct {
        unsigned int authRandomSet:1;
        unsigned int pending:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) BOOL authRandomSet; // @synthesize authRandomSet=_authRandomSet;
@property (strong, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property (strong, nonatomic) NSData *cryptogram; // @synthesize cryptogram=_cryptogram;
@property (nonatomic) BOOL hasAuthRandomSet;
@property (readonly, nonatomic) BOOL hasChallengeResponse;
@property (readonly, nonatomic) BOOL hasCryptogram;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;
@property (nonatomic) BOOL success; // @synthesize success=_success;

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

