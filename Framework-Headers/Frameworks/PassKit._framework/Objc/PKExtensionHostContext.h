//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKExtensionBaseContext.h>

#import <PassKitCore/PKExtensionHostContextProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol>
{
    id<PKPaymentAuthorizationHostProtocol> _delegate;
    NSObject<OS_dispatch_group> *_delayCallbacksGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup; // @synthesize delayCallbacksGroup=_delayCallbacksGroup;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
- (void)authorizationWillStart;
- (void)beginDelayingCallbacks;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)endDelayingCallbacks;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)vendorContext;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;

@end

