//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKEnterCurrencyAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAddBankAcountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentPerformActionView-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSDecimalNumber, NSNumberFormatter, NSString, PKContinuousButton, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKPeerPaymentAccount, PKPeerPaymentBankAccountInformation, PKPeerPaymentService, UILabel, UITableView, UITextField;
@protocol PKPerformActionViewDelegate;

@interface PKPerformPeerPaymentTransferToBankActionView : UIView <PKEnterCurrencyAmountViewDelegate, PKPeerPaymentAddBankAcountInformationViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKPeerPaymentPerformActionView>
{
    PKPeerPaymentBankAccountInformation *_bankInformation;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    id<PKPerformActionViewDelegate> _delegate;
    NSDecimalNumber *_currentAmount;
    NSNumberFormatter *_currentAmountFormatter;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_newBalanceView;
    PKContinuousButton *_addAccountButton;
    UILabel *_addAccountDetailLabel;
    UITableView *_tableView;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_minAmount;
    NSDecimalNumber *_maxAmount;
}

@property (strong, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) UITextField *amountTextField;
@property (copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPerformActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDecimalNumber *maxAmount; // @synthesize maxAmount=_maxAmount;
@property (copy, nonatomic) NSDecimalNumber *minAmount; // @synthesize minAmount=_minAmount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addAccountButton;
- (id)_addAccountDetailLabel;
- (void)_addAccountInformation:(id)arg1;
- (double)_amountTopPadding;
- (void)_createSubviews;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2;
- (void)_handleEditAccountInformationButtonPressed;
- (BOOL)_isCurrentAmountValid;
- (void)_presentAddBankAccountViewController;
- (void)_presentViewController:(id)arg1;
- (void)_setRightBarButtonEnabledState;
- (BOOL)_shouldShakeCard:(id)arg1;
- (id)_tableView;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2;
- (void)amountTextFieldShouldAcceptTouches:(BOOL)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)initWithAccount:(id)arg1 bankInformation:(id)arg2;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)transactionAmount;
- (id)transactionCurrency;
- (void)willDismissViewController;
- (void)willMoveToWindow:(id)arg1;

@end

