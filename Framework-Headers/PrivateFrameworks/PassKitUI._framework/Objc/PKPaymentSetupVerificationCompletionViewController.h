//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentVerificationObserverDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, PKActivityTableCell, PKPaymentProvisioningController, PKPaymentSetupFooterView, PKPaymentVerificationController, PKPaymentVerificationObserver, PKTableHeaderView, UIColor;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentVerificationObserverDelegate>
{
    PKActivityTableCell *_verificationCodeCell;
    BOOL _verificationCodeAccepted;
    BOOL _resignedResponder;
    PKPaymentVerificationObserver *_verificationObserver;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    UIColor *_editableTextFieldColor;
    long long _mode;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentVerificationController *verificationController; // @synthesize verificationController=_verificationController;

- (void).cxx_destruct;
- (void)_disableUI;
- (void)_enableUI;
- (void)_handleNextStep;
- (void)_handlePassVerifiedNotification:(id)arg1;
- (void)_performAddToWatchFlow;
- (void)_showActivationError:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_showCompletedUIForPass:(id)arg1;
- (void)_showCompletedUIWithNextHandler:(CDUnknownBlockType)arg1;
- (void)_submitVerificationCode;
- (void)_terminateFlow;
- (void)dealloc;
- (id)initWithVerificationController:(id)arg1 mode:(long long)arg2;
- (void)loadView;
- (void)next:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2;
- (void)verificationObserverDidTimeout:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

