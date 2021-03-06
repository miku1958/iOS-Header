//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <KeychainCircle/NSCopying-Protocol.h>

@class OTApplicantToSponsorRound2M1, OTSponsorToApplicantRound1M2, OTSponsorToApplicantRound2M2, OTSupportOctagonMessage, OTSupportSOSMessage;

__attribute__((visibility("hidden")))
@interface OTPairingMessage : PBCodable <NSCopying>
{
    OTSponsorToApplicantRound1M2 *_epoch;
    OTApplicantToSponsorRound2M1 *_prepare;
    OTSupportOctagonMessage *_supportsOctagon;
    OTSupportSOSMessage *_supportsSOS;
    OTSponsorToApplicantRound2M2 *_voucher;
}

@property (strong, nonatomic) OTSponsorToApplicantRound1M2 *epoch; // @synthesize epoch=_epoch;
@property (readonly, nonatomic) BOOL hasEpoch;
@property (readonly, nonatomic) BOOL hasPrepare;
@property (readonly, nonatomic) BOOL hasSupportsOctagon;
@property (readonly, nonatomic) BOOL hasSupportsSOS;
@property (readonly, nonatomic) BOOL hasVoucher;
@property (strong, nonatomic) OTApplicantToSponsorRound2M1 *prepare; // @synthesize prepare=_prepare;
@property (strong, nonatomic) OTSupportOctagonMessage *supportsOctagon; // @synthesize supportsOctagon=_supportsOctagon;
@property (strong, nonatomic) OTSupportSOSMessage *supportsSOS; // @synthesize supportsSOS=_supportsSOS;
@property (strong, nonatomic) OTSponsorToApplicantRound2M2 *voucher; // @synthesize voucher=_voucher;

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

