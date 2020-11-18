//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class PKAccount, PKAccountService, PKBusinessChatController, PKPaymentPass, PKPhysicalCard, PKTableHeaderView, UIBarButtonItem;

@interface PKPhysicalCardSupportViewController : UITableViewController
{
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
    PKPhysicalCard *_physicalCard;
    PKTableHeaderView *_tableHeaderView;
    UIBarButtonItem *_nextButton;
    PKBusinessChatController *_businessChatController;
    BOOL _hasSelectedReason;
    long long _selectedReason;
}

- (void).cxx_destruct;
- (void)_nextButtonTapped:(id)arg1;
- (void)_presentBusinessChatWithContext:(id)arg1;
- (void)_presentManualActivation;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4;
- (id)pkui_navigationBarTintColor;
- (BOOL)pkui_prefersNavigationBarShadowHidden;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

