//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

@class NSArray, NSIndexPath, PKAccount, PKAccountAutomaticPaymentsController, PKTableHeaderView;

@interface PKAccountAutomaticPaymentsPresetViewController : PKSectionTableViewController
{
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    unsigned long long _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    NSArray *_paymentPresets;
}

- (void).cxx_destruct;
- (void)_handleNext:(id)arg1;
- (id)initWithController:(id)arg1;
- (BOOL)shouldMapSection:(unsigned long long)arg1;
- (id)tableHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end

