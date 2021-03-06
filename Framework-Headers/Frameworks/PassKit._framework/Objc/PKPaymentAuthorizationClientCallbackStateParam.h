//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class CNContact, PKAccountServicePaymentMethod, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPayment, PKPaymentMethod, PKServiceProviderPurchase, PKShippingMethod;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam
{
    long long _kind;
    id _object;
}

@property (readonly, nonatomic) PKAccountServicePaymentMethod *accountServicePaymentMethod;
@property (readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature;
@property (readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (readonly, nonatomic) PKDisbursementVoucher *disbursementVoucher;
@property (nonatomic) long long kind; // @synthesize kind=_kind;
@property (strong, nonatomic) id object; // @synthesize object=_object;
@property (readonly, nonatomic) PKPayment *payment;
@property (readonly, nonatomic) PKPaymentMethod *paymentMethod;
@property (readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property (readonly, nonatomic) CNContact *shippingContact;
@property (readonly, nonatomic) PKShippingMethod *shippingMethod;

+ (id)paramWithCallbackKind:(long long)arg1 object:(id)arg2;
- (void).cxx_destruct;
- (id)description;

@end

