//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class PKContact, PKPayment, PKPaymentAuthorizationViewController, PKPaymentMethod, PKShippingMethod;

@protocol PKPaymentAuthorizationViewControllerDelegate <NSObject>
- (void)paymentAuthorizationViewControllerDidFinish:(PKPaymentAuthorizationViewController *)arg1;

@optional
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didAuthorizePayment:(PKPayment *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingAddress:(const void *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingContact:(PKContact *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingContact:(PKContact *)arg2 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))arg3;
- (void)paymentAuthorizationViewControllerWillAuthorizePayment:(PKPaymentAuthorizationViewController *)arg1;
@end

