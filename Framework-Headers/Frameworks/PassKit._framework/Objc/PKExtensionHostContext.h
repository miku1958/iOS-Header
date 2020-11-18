//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKExtensionBaseContext.h>

#import <PassKit/PKExtensionHostContextProtocol-Protocol.h>

@class NSString;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol>
{
    id<PKPaymentAuthorizationHostProtocol> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationWillStart;
- (id)vendorContext;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;

@end
