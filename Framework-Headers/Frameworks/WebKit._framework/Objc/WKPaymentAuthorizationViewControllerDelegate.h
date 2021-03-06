//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKPaymentAuthorizationDelegate.h>

#import <WebKit/PKPaymentAuthorizationViewControllerDelegate-Protocol.h>
#import <WebKit/PKPaymentAuthorizationViewControllerPrivateDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPaymentAuthorizationViewControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_getPaymentServicesMerchantURL:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 presenter:(struct PaymentAuthorizationPresenter *)arg2;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didRequestMerchantSession:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;

@end

