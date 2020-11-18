//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, PKPaymentPass, PKSecureElementCertificateSet, PKServiceProviderOrder;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest
{
    PKSecureElementCertificateSet *_certificates;
    PKPaymentPass *_pass;
    PKServiceProviderOrder *_serviceProviderOrder;
    NSData *_nonce;
}

@property (copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // @synthesize serviceProviderOrder=_serviceProviderOrder;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
