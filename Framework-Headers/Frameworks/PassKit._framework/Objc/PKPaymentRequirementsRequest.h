//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentCredential;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest
{
    PKPaymentCredential *_paymentCredential;
    NSString *_cardholderName;
    NSString *_primaryAccountNumber;
    NSString *_referrerIdentifier;
    NSString *_passOwnershipToken;
}

@property (copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property (copy, nonatomic) NSString *passOwnershipToken; // @synthesize passOwnershipToken=_passOwnershipToken;
@property (strong, nonatomic) PKPaymentCredential *paymentCredential; // @synthesize paymentCredential=_paymentCredential;
@property (copy, nonatomic) NSString *primaryAccountNumber; // @synthesize primaryAccountNumber=_primaryAccountNumber;
@property (copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;

- (void).cxx_destruct;
- (id)_cardDictionary;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2;
- (id)initWithPaymentCredential:(id)arg1;

@end

