//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentSetupFieldPicker, PKPeerPaymentIdentityVerificationController, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentIdentityVerificationPickerViewController : PKPaymentSetupTableViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;
    PKPaymentSetupFieldPicker *_pickerField;
    NSString *_footerText;
    PKTableHeaderView *_headerView;
    unsigned long long _identityVerificaionError;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    BOOL _navigationEnabled;
    BOOL _rightBarButtonItemsEnabled;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
    id<PKPaymentSetupViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property (strong, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancelButtonTapped:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleNextButtonTapped:(id)arg1;
- (void)_processNextViewController;
- (void)_setIdleTimerDisabled:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)_setRightBarButtonItemsEnabled:(BOOL)arg1;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_showNavigationBarSpinner:(BOOL)arg1;
- (void)_terminateFlow;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_updateRightBarButtonState;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)headerView;
- (void)hideActivitySpinner;
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithController:(id)arg1 pickerField:(id)arg2 footerText:(id)arg3;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 pickerField:(id)arg3 footerText:(id)arg4;
- (BOOL)isComplete;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

