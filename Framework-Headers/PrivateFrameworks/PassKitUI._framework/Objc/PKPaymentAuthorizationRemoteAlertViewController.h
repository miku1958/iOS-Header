//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKitUI/PKCompactNavigationContainerControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationHostProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/SBSHardwareButtonEventConsuming-Protocol.h>

@class LAUIHorizontalArrowView, LAUIPhysicalButtonView, NSString, NSXPCConnection, PKAssertion, PKCompactNavigationContainerController, PKInAppPaymentService, PKPaymentAuthorizationRemoteAlertViewControllerExportedObject, PKPaymentAuthorizationServiceNavigationController, PKPaymentProvisioningController, PKPaymentRequest, PKPaymentSetupNavigationController;
@protocol BSInvalidatable;

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentSetupDelegate, SBSHardwareButtonEventConsuming>
{
    BOOL _didDismiss;
    BOOL _didSendAuthorizationDidPresent;
    long long _hostAppInterfaceOrientation;
    NSString *_hostApplicationIdentifier;
    int _statusBarVisibility;
    PKAssertion *_notificationSuppressionAssertion;
    NSString *_hostLocalizedAppName;
    PKPaymentRequest *_paymentRequest;
    BOOL _paymentAuthorizationPresented;
    PKCompactNavigationContainerController *_navigationContainer;
    PKPaymentAuthorizationServiceNavigationController *_navigationController;
    BOOL _pearlViewsInserted;
    LAUIPhysicalButtonView *_physicalButtonView;
    LAUIHorizontalArrowView *_cameraArrowView;
    long long _coachingState;
    PKPaymentProvisioningController *_paymentProvisioningController;
    PKPaymentSetupNavigationController *_paymentSetupNavigationController;
    BOOL _paymentSetupWasRequired;
    BOOL _shouldAcquireLockButtonObserver;
    id<BSInvalidatable> _lockButtonObserver;
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
- (void)_canPresentPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_configuredPaymentSetupNavigationController;
- (void)_dismiss;
- (void)_handlePaymentRequestPresentationResultType:(long long)arg1 relevantUniqueID:(id)arg2 firstAttempt:(BOOL)arg3;
- (void)_invalidateLockButtonObserver;
- (int)_preferredStatusBarVisibility;
- (void)_presentActivatingPassAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentAddCardAlert;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 actionTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;
- (void)_presentInvalidAlert;
- (void)_presentLostModeAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentPaymentAuthorization;
- (void)_presentPaymentSetup;
- (void)_presentVerifyPassAlertWithRelevantUniqueID:(id)arg1;
- (id)_provisioningController;
- (id)_remoteObjectProxy;
- (void)_setStatusBarHidden:(BOOL)arg1;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_updatePearlViews;
- (void)_willAppearInRemoteViewController;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationViewController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)authorizationViewControllerDidChangeCoachingState:(id)arg1;
- (void)authorizationViewControllerDidChangeUserIntentRequirement:(id)arg1;
- (void)authorizationWillStart;
- (void)compactNavigationContainerControllerReceivedExternalTap:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (void)dismissWithRemoteOrigination:(BOOL)arg1;
- (void)handleHomeButtonPressed;
- (id)init;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)sendAuthorizationDidPresentIfNecessary;
- (void)setUserInfo:(id)arg1;
- (BOOL)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

