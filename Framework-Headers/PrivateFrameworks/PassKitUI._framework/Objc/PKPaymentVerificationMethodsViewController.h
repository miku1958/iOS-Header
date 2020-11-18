//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

@class NSString, PKPaymentProvisioningController, PKPaymentSetupVerificationMethodTableController, PKPaymentVerificationController;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController
{
    PKPaymentSetupVerificationMethodTableController *_methodTableController;
    long long _verificationStatus;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
    NSString *_stepIdentifier;
}

@property (strong, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property (copy, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
@property (readonly, nonatomic) PKPaymentVerificationController *verificationController; // @synthesize verificationController=_verificationController;

- (void).cxx_destruct;
- (void)_configure;
- (void)_handleVerificationFinished;
- (void)_loadVerificationOptions;
- (id)_newVerificationRequest;
- (id)_requestErrorAlertController:(id)arg1;
- (id)_setupAssistantVerificationAlert;
- (void)_terminateSetupFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithVerificationController:(id)arg1;
- (id)initWithVerificationController:(id)arg1 fieldsModel:(id)arg2;
- (id)initWithVerificationController:(id)arg1 verificationChannels:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleFieldIdentifiers;

@end
