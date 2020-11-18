//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>

@class NSMutableSet, NSString, PKPaymentAuthorizationRemoteAlertViewController;
@protocol PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol>
{
    BOOL _dismissed;
    NSMutableSet *_completionHandlers;
    id<PKPaymentAuthorizationServiceProtocol> _delegate;
    PKPaymentAuthorizationRemoteAlertViewController *_controller;
}

@property (strong, nonatomic) NSMutableSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (nonatomic) PKPaymentAuthorizationRemoteAlertViewController *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPaymentAuthorizationServiceProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)dealloc;
- (void)dismissed;
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;
- (id)initWithController:(id)arg1;

@end

