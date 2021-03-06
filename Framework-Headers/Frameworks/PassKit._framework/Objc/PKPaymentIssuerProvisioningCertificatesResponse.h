//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse
{
    NSArray *_certificates;
    NSData *_nonce;
    NSData *_publicKeyHash;
    NSData *_nonceSignature;
}

@property (readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property (readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property (copy, nonatomic) NSData *nonceSignature; // @synthesize nonceSignature=_nonceSignature;
@property (copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

