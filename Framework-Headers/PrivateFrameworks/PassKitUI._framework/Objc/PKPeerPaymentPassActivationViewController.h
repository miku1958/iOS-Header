//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/AAUIDeviceToDeviceEncryptionHelperDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSString, PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentSetupFlowHeroView, PKPeerPaymentTermsController, PKPeerPaymentWebService, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, AAUIDeviceToDeviceEncryptionHelperDelegate, PKExplanationViewControllerDelegate>
{
    PKPaymentProvisioningController *_provisioningController;
    PKPeerPaymentCredential *_credential;
    id<PKPaymentSetupViewControllerDelegate> _delegate;
    unsigned long long _state;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentTermsController *_termsController;
    UIImage *_passSnapShot;
    BOOL _shouldShowAddDebitCardViewController;
    PKPeerPaymentSetupFlowHeroView *_heroView;
    BOOL _presentedDeviceToDeviceEncryptionFlow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL presentedDeviceToDeviceEncryptionFlow; // @synthesize presentedDeviceToDeviceEncryptionFlow=_presentedDeviceToDeviceEncryptionFlow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginSetup;
- (id)_bodyStringForState;
- (void)_checkCloudStoreState;
- (void)_handleActivatedState;
- (void)_handleError:(id)arg1;
- (void)_handleNextStep;
- (void)_initalizeCloudStoreWithTargetDevice:(id)arg1 ifNecessaryWithCompletion:(CDUnknownBlockType)arg2;
- (void)_presentActivationFailedErrorAlert;
- (void)_presentAddDebitCardViewController;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_presentDeviceToDeviceEncryptionFlow;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_presentMissingTLKsAlert;
- (void)_presentSetupWillCompleteLaterAlertController;
- (void)_presentTermsAndConditionsWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processCloudStorePCSError;
- (void)_provisionPeerPaymentPass;
- (void)_resetApplyPayManateeView;
- (void)_setShowSpinner:(BOOL)arg1;
- (void)_setState:(unsigned long long)arg1;
- (BOOL)_shouldShowAddDebitCardViewController;
- (struct CGSize)_snapshotSize;
- (void)_terminateSetupFlow;
- (id)_titleStringForState;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;

@end

