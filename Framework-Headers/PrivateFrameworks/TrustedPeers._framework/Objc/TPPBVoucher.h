//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBVoucher : PBCodable <NSCopying>
{
    NSString *_beneficiary;
    int _reason;
    NSString *_sponsor;
    struct {
        unsigned int reason:1;
    } _has;
}

@property (strong, nonatomic) NSString *beneficiary; // @synthesize beneficiary=_beneficiary;
@property (readonly, nonatomic) BOOL hasBeneficiary;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) BOOL hasSponsor;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (strong, nonatomic) NSString *sponsor; // @synthesize sponsor=_sponsor;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
