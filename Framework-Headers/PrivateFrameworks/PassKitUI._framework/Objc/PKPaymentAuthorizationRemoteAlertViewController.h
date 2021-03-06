//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKitUI/PKCompactNavigationContainerControllerDelegate-Protocol.h>
#import <PassKitUI/PKLoadingViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationHostProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/SBSHardwareButtonEventConsuming-Protocol.h>

@class NSString, NSXPCConnection, PKAssertion, PKInAppPaymentService, PKPaymentAuthorizationRemoteAlertViewControllerExportedObject, PKPaymentAuthorizationServiceCompactNavigationContainerController, PKPaymentAuthorizationServiceNavigationController, PKPaymentProvisioningController, PKPaymentRequest, PKPaymentSetupNavigationController, PKPeerPaymentAccount;
@protocol BSInvalidatable;

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentSetupDelegate, SBSHardwareButtonEventConsuming, PKPaymentSetupViewControllerDelegate, PKLoadingViewControllerDelegate>
{
    BOOL _didDismiss;
    BOOL _didSendAuthorizationDidPresent;
    BOOL _didSendAuthorizationDidFinish;
    long long _hostAppInterfaceOrientation;
    NSString *_hostApplicationIdentifier;
    int _statusBarVisibility;
    PKAssertion *_notificationSuppressionAssertion;
    NSString *_hostBundleIdentifier;
    NSString *_hostTeamID;
    NSString *_hostLocalizedAppName;
    PKPaymentRequest *_paymentRequest;
    BOOL _paymentAuthorizationPresented;
    PKPaymentAuthorizationServiceCompactNavigationContainerController *_navigationContainer;
    PKPaymentAuthorizationServiceNavigationController *_navigationController;
    long long _coachingState;
    PKPaymentProvisioningController *_paymentProvisioningController;
    PKPaymentSetupNavigationController *_paymentSetupNavigationController;
    BOOL _paymentSetupWasRequired;
    NSString *_applicationBindToken;
    PKPeerPaymentAccount *_peerPaymentAccount;
    BOOL _shouldAcquireLockButtonObserver;
    id<BSInvalidatable> _lockButtonObserver;
    BOOL _invalidated;
    BOOL _dismissAfterPaymentSetup;
    BOOL _isPerformingPaymentSetup;
    PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *_exportedObject;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCConnection *_hostConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissAfterPaymentSetup; // @synthesize dismissAfterPaymentSetup=_dismissAfterPaymentSetup;
@property (strong, nonatomic) PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSXPCConnection *hostConnection; // @synthesize hostConnection=_hostConnection;
@property (strong, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
@property (readonly, nonatomic) BOOL isPerformingPaymentSetup; // @synthesize isPerformingPaymentSetup=_isPerformingPaymentSetup;
@property (strong, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (void)_bindFeatureApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_canPresentPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_configuredPaymentSetupNavigationController;
- (void)_dismiss;
- (void)_handlePaymentRequestPresentationResultType:(long long)arg1 relevantUniqueID:(id)arg2 firstAttempt:(BOOL)arg3;
- (void)_invalidate;
- (void)_invalidateLockButtonObserver;
- (BOOL)_peerPaymentIdentityVerificationRequired;
- (int)_preferredStatusBarVisibility;
- (void)_presentActivatingPassAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentAddCardAlert;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 actionTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 actionTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5 finalError:(id)arg6;
- (void)_presentApplyForFeature:(unsigned long long)arg1;
- (void)_presentEnrollAccessibilityIntentAlert;
- (void)_presentInvalidAlert;
- (void)_presentLostModeAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentPaymentAuthorizationWithRelevantUniqueID:(id)arg1;
- (void)_presentPaymentSetup;
- (void)_presentPeerPaymentIdentityVerification;
- (void)_presentPeerPaymentIdentityVerificationAlert;
- (void)_presentVerifyPassAlertWithRelevantUniqueID:(id)arg1;
- (id)_provisioningController;
- (id)_remoteObjectProxy;
- (void)_setStatusBarHidden:(BOOL)arg1;
- (BOOL)_shouldBlockHardwareCancels;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_updatePearlViews;
- (void)_updatePhysicalButtonViews;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
- (void)authorizationViewController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)authorizationViewControllerDidChangeCoachingState:(id)arg1;
- (void)authorizationViewControllerDidChangePhysicalButtonState:(id)arg1;
- (void)authorizationWillStart;
- (void)compactNavigationContainerControllerReceivedExternalTap:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (void)didInvalidateForRemoteAlert;
- (void)dismissWithRemoteOrigination:(BOOL)arg1;
- (void)handleButtonActions:(id)arg1;
- (id)init;
- (void)loadingViewControllerDidCancel:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)sendAuthorizationDidPresentIfNecessary;
- (BOOL)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewController:(id)arg1 canProceedWithInstallment:(BOOL)arg2 featureApplication:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

