//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController
{
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (void).cxx_destruct;
- (id)_doneButton;
- (void)_donePressed;
- (id)_paymentDateString;
- (long long)_paymentDay;
- (id)_paymentDayNameString;
- (id)_paymentDayString;
- (id)bodyString;
- (id)initWithController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
