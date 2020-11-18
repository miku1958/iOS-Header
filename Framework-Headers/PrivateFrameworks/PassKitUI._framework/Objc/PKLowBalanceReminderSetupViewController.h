//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDecimalNumber, NSNumberFormatter, NSString, PKEnteredValueActionItem, PKPassPreferencesManager, PKPaymentPass, PKPaymentPassAction;
@protocol PKLowBalanceReminderSetupViewControllerDelegate;

@interface PKLowBalanceReminderSetupViewController : UITableViewController
{
    PKPaymentPass *_paymentPass;
    PKPaymentPassAction *_action;
    id<PKLowBalanceReminderSetupViewControllerDelegate> _delegate;
    PKEnteredValueActionItem *_topUpActionItem;
    PKPassPreferencesManager *_passPreferencesManager;
    NSString *_currencyCode;
    NSArray *_currencyAmountOptions;
    NSDecimalNumber *_selectedCurrencyAmount;
    NSNumberFormatter *_currencyAmountFormatter;
}

@property (strong, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property (strong, nonatomic) NSNumberFormatter *currencyAmountFormatter; // @synthesize currencyAmountFormatter=_currencyAmountFormatter;
@property (strong, nonatomic) NSArray *currencyAmountOptions; // @synthesize currencyAmountOptions=_currencyAmountOptions;
@property (strong, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (weak, nonatomic) id<PKLowBalanceReminderSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) PKPassPreferencesManager *passPreferencesManager; // @synthesize passPreferencesManager=_passPreferencesManager;
@property (strong, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property (strong, nonatomic) NSDecimalNumber *selectedCurrencyAmount; // @synthesize selectedCurrencyAmount=_selectedCurrencyAmount;
@property (strong, nonatomic) PKEnteredValueActionItem *topUpActionItem; // @synthesize topUpActionItem=_topUpActionItem;

- (void).cxx_destruct;
- (id)_currencyAmountAtIndexPath:(id)arg1;
- (id)_indexPathOfCurrencyAmount:(id)arg1;
- (id)initWithAction:(id)arg1 forPass:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCheckmarkForSelectedCellAtIndexPath:(id)arg1;
- (void)viewDidLoad;

@end
