//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSArray, NSData, NSNumber, NSString, PKDSPContext, PKPaymentDeviceProvisioningData, PKPaymentEligibilityResponse;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest
{
    NSNumber *_primaryJSBLSequenceCounter;
    NSArray *_certChain;
    BOOL _devSigned;
    PKPaymentDeviceProvisioningData *_deviceData;
    PKPaymentEligibilityResponse *_eligibilityResponse;
    NSString *_nonce;
    NSString *_cardholderName;
    NSString *_cardSecurityCode;
    NSData *_activationData;
    PKDSPContext *_context;
    NSString *_referrerIdentifier;
}

@property (copy, nonatomic) NSData *activationData; // @synthesize activationData=_activationData;
@property (copy, nonatomic) NSString *cardSecurityCode; // @synthesize cardSecurityCode=_cardSecurityCode;
@property (copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property (copy, nonatomic) PKDSPContext *context; // @synthesize context=_context;
@property (strong, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property (copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property (copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;

- (void).cxx_destruct;
- (void)_deviceScoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestBodyWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateContextUsingWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithEligibilityResponse:(id)arg1;

@end

