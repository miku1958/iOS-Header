//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class CNContact, NSError, PKAuthorizedPeerPaymentQuote, PKPayment, PKPaymentMethod, PKServiceProviderPurchase, PKShippingMethod;

@protocol PKPaymentAuthorizationHostProtocol <NSObject>
- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg1;
- (void)authorizationDidAuthorizePurchase:(PKServiceProviderPurchase *)arg1;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(CNContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationWillStart;

@optional
- (void)authorizationDidPresent;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
@end
