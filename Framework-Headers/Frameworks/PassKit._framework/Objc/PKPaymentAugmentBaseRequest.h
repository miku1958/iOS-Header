//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentApplication, PKPaymentPass, PKSecureElementApplet;

@interface PKPaymentAugmentBaseRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKSecureElementApplet *_applet;
    NSString *_merchantCountryCode;
    NSString *_currencyCode;
}

@property (strong, nonatomic) PKSecureElementApplet *applet; // @synthesize applet=_applet;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (copy, nonatomic) NSString *merchantCountryCode; // @synthesize merchantCountryCode=_merchantCountryCode;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)bodyDictionary;
- (id)endpointName;
- (id)initWithPaymentPass:(id)arg1;

@end
