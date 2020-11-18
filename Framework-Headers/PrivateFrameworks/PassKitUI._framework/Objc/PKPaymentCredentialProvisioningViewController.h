//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@class PKPaymentCredential, PKPaymentCredentialMetadataTableController, PKPaymentPass, PKPaymentSetupProduct, UIImage;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController
{
    UIImage *_passSnapshot;
    unsigned long long _credentialProvisioningType;
    PKPaymentCredentialMetadataTableController *_metadataController;
    PKPaymentCredential *_paymentCredential;
    PKPaymentPass *_localPaymentPass;
    PKPaymentSetupProduct *_setupProduct;
}

- (void).cxx_destruct;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTermsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteIDMSCredentialDefaultHeaderViewSubTitle;
- (void)addDifferentCard:(id)arg1;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)downloadPassWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5;
- (BOOL)isComplete;
- (void)loadView;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentRequirementsRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)preflightCredentialWithCompletion:(CDUnknownBlockType)arg1;
- (id)readonlyFieldIdentifiers;
- (BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleFieldIdentifiers;

@end

