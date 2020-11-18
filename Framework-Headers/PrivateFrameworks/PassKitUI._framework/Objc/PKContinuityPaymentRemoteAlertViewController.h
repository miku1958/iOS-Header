//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKitUI/PKContinuityPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationHostProtocol-Protocol.h>

@class NSString, PKContinuityPaymentService, PKContinuityPaymentViewController, PKRemotePaymentRequest, UINavigationController;

@interface PKContinuityPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol, PKContinuityPaymentServiceDelegate>
{
    PKContinuityPaymentViewController *_continuityViewController;
    UINavigationController *_navigationController;
    PKRemotePaymentRequest *_remoteRequest;
    PKContinuityPaymentService *_continuityService;
    BOOL _hasAuthorizedPayment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_isSecureForRemoteViewService;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_willAppearInRemoteViewController;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationWillStart;
- (void)dealloc;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2;
- (void)handleHomeButtonPressed;
- (void)handleLockButtonPressed;
- (id)init;
- (void)setUserInfo:(id)arg1;
- (BOOL)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

