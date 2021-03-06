//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

@class CLInUseAssertion, NSString, PKApplyController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController
{
    PKApplyController *_applyController;
    NSString *_termsIdentifier;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    BOOL _isProcessingTerms;
    unsigned long long _featureIdentifier;
    CLInUseAssertion *_inUseAssertion;
}

- (void).cxx_destruct;
- (void)_processTerms;
- (void)_showActivationSpinner:(BOOL)arg1;
- (void)_terminateSetupFlow;
- (void)dealloc;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

