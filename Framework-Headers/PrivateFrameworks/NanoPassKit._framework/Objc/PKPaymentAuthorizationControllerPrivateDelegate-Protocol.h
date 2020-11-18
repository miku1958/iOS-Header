//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPaymentAuthorizationController, PKServiceProviderPurchase;

@protocol PKPaymentAuthorizationControllerPrivateDelegate <NSObject>

@optional
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizeContextWithHandler:(void (^)(PKPaymentAuthorizationResult *))arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizeDisbursementVoucher:(PKDisbursementVoucher *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePurchase:(PKServiceProviderPurchase *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 willFinishWithError:(NSError *)arg2;
@end
