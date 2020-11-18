//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentDocumentSubmissionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentDocumentSubmissionViewControllerResponder-Protocol.h>

@class NSString, NSTimer, PKPeerPaymentDocumentSubmissionController;

@interface PKPeerPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKPeerPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentDocumentSubmissionViewControllerResponder>
{
    PKPeerPaymentDocumentSubmissionController *_controller;
    long long _context;
    long long _currentState;
    long long _currentSide;
    NSTimer *_timerDismissAfterSuccess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)captureController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)captureController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)didSelectSetupLater;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithController:(id)arg1 context:(long long)arg2;
- (id)secondaryButton;
- (void)updateUIWithState:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

