//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationHostProtocol-Protocol.h>

@class NSString, PKPaymentAuthorizationCoordinator;
@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<PKPaymentAuthorizationCoordinatorDelegate> _delegate;
    id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
    PKPaymentAuthorizationCoordinator *_controller;
    id<PKPaymentAuthorizationServiceProtocol> _serviceProxy;
}

@property (nonatomic) PKPaymentAuthorizationCoordinator *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property (strong, nonatomic) id<PKPaymentAuthorizationServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
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
- (void)connectionDidOpen;
- (void)dealloc;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (id)init;
- (id)initWithController:(id)arg1;

@end

