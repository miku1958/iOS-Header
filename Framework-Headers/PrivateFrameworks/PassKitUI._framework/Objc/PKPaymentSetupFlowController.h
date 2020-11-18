//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKSetupFlowControllerProtocol-Protocol.h>

@class NSString, PKPasscodeUpgradeFlowController, PKPaymentProvisioningController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowController : NSObject <PKSetupFlowControllerProtocol>
{
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property (readonly, nonatomic) long long setupContext; // @synthesize setupContext=_setupContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultPaymentSetupViewControllerAllowingManualEntry:(BOOL)arg1;
- (id)_educationViewControllerShouldShow;
- (id)_nextPaymentCredentialControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2;
- (id)_offerMakeDefaultViewController;
- (id)_paymentSetupViewControllerForAssociatedCredential:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (id)intialPaymentSetupViewControllerForMode:(long long)arg1 allowsManualEntry:(BOOL)arg2;
- (id)manualEntryPaymentSetupViewControllerForProduct:(id)arg1 allowsSelectingBank:(BOOL)arg2;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 state:(long long)arg2 allowsManualEntry:(BOOL)arg3;
- (void)nextViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)paymentSetupViewControllerForAssociatedCredentials:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3;
- (void)presentPasscodeUpgradeOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
