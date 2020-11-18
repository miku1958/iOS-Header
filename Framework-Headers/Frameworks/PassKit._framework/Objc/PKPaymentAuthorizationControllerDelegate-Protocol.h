//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKContact, PKPayment, PKPaymentAuthorizationController, PKPaymentMethod, PKShippingMethod;

@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationControllerDidFinish:(PKPaymentAuthorizationController *)arg1;

@optional
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingAddress:(PKContact *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationControllerWillAuthorizePayment:(PKPaymentAuthorizationController *)arg1;
@end

