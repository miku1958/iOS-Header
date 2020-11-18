//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

#import <PassKitUI/PKPaymentSetupViewControllerCanHideSetupLaterButton-Protocol.h>
#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>
#import <PassKitUI/RemoteUIControllerDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class CLInUseAssertion, NSString, NSTimer, PKPaymentProvisioningController, PKPaymentSetupFooterView, PKPaymentVerificationController, RemoteUIController, UINotificationFeedbackGenerator;

@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <UITextFieldDelegate, RemoteUIControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupViewControllerCanHideSetupLaterButton>
{
    PKPaymentSetupFooterView *_cardDetailsFooterView;
    RemoteUIController *_termsUIController;
    CLInUseAssertion *_CLInUse;
    BOOL _termsPresented;
    UINotificationFeedbackGenerator *_cardAddedFeedbackGenerator;
    PKPaymentVerificationController *_verificationController;
    BOOL _waitForActivation;
    CDUnknownBlockType _waitForActivationCompletionHandler;
    NSTimer *_waitForActivationTimer;
    NSString *_activatingPaymentPassUniqueID;
    BOOL _hideSetupLaterButton;
    PKPaymentProvisioningController *_paymentProvisioningController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property (strong, nonatomic) PKPaymentProvisioningController *paymentProvisioningController; // @synthesize paymentProvisioningController=_paymentProvisioningController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cardDetailsFooterView;
- (void)_cleanupWaitForActivation;
- (void)_didActivatePaymentPass:(id)arg1;
- (void)_handleNextCredentialWithPresentationDelay:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePassSuccessfullyAdded:(id)arg1;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTermsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_provisioningStateDidChange:(id)arg1;
- (void)_requestWaitForActivation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldShowAutomaticSelectionForPass:(id)arg1;
- (BOOL)_shouldShowVerificationMethodsForPass:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_showAutomaticSelectionForPass:(id)arg1;
- (void)_showVerificationMethodsForPass:(id)arg1;
- (void)_showVerifiedUI;
- (void)_waitForActivation:(id)arg1;
- (void)_waitForActivationDidTimeout:(id)arg1;
- (void)acceptTerms;
- (void)addDifferentCard:(id)arg1;
- (void)dealloc;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)displayTermsForEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)displayTermsForTermsURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)footerView;
- (void)handleNextActionError:(id)arg1 shouldContinue:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)handleNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleNextButtonTapped:(id)arg1;
- (void)handlePassSuccessfullyAdded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentRequirementsRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetAllFieldsAndProvisioningState;
- (void)resetProvisioningState;
- (void)setupLater:(id)arg1;
- (void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showPrivacy:(id)arg1;
- (void)showProvisioningError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suppressFooterViewManualEntryButton;
- (void)suppressFooterViewSetupLaterButton;
- (void)updateFieldsModelWithPaymentCredential:(id)arg1;
- (void)updateFieldsModelWithRequirementsResponse:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

