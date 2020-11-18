//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKAccountServicePerformActionViewController.h>

#import <PassKitUI/PKAccountBillPaymentControllerDelegate-Protocol.h>
#import <PassKitUI/PKAccountBillPaymentPayInterestDescriptionViewDelegate-Protocol.h>
#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>

@class CLInUseAssertion, NSCalendar, NSDate, NSDateFormatter, NSDecimalNumber, NSString, PKAccountBillPaymentController, PKAccountBillPaymentPayInterestDescriptionView, PKAddBankAccountInformationViewController, PKBillPaymentSuggestedAmountList, PKCompoundInterestCalculator, PKContinuousButton, UILabel, UIPickerView;

@interface PKAccountBillPaymentPayLaterViewController : PKAccountServicePerformActionViewController <UIPickerViewDelegate, UIPickerViewDataSource, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate>
{
    CLInUseAssertion *_CLInUse;
    PKAccountBillPaymentController *_billPaymentCoordinator;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    unsigned long long _screenType;
    NSDate *_minDate;
    NSDate *_maxDate;
    long long _numDays;
    NSDateFormatter *_dateFormatterDayOfWeek;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_localDateFormatter;
    NSCalendar *_productCalendar;
    NSCalendar *_localCalendar;
    NSDecimalNumber *_selectedAmount;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_apr;
    BOOL _performingAction;
    long long _currentPickerViewRow[1];
    UIPickerView *_datePicker;
    PKContinuousButton *_payOnButton;
    UILabel *_payLaterTitleLabel;
    UILabel *_whenToPayQuestionLabel;
    PKCompoundInterestCalculator *_interestCalculator;
    PKAccountBillPaymentPayInterestDescriptionView *_interestDescriptionView;
    PKAddBankAccountInformationViewController *_addBankAccountViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addBankAccountInformationViewController;
- (id)_dateForRow:(long long)arg1;
- (id)_dateStringForRow:(long long)arg1 formatter:(id)arg2;
- (void)_dismissViewControllerWithSuccess:(BOOL)arg1;
- (id)_interestForSelectedDate:(id)arg1;
- (double)_payButtonTopPadding;
- (void)_payOnButtonTapped:(id)arg1;
- (void)_performBillPaymentWithAmount:(id)arg1 scheduledDate:(id)arg2 billPaymentSuggestedAmountDataEvent:(id)arg3;
- (void)_presentAddBankAccount;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (double)_sideMargin;
- (id)_stripTimeFromDate:(id)arg1;
- (void)_updateLabelText;
- (void)accountBillPaymentController:(id)arg1 hasChangedState:(unsigned long long)arg2 error:(id)arg3 updatedAccount:(id)arg4;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (void)billPaymentPayInterestDescriptionViewHasTappedLearnMore:(id)arg1;
- (id)initWithAccount:(id)arg1 billPaymentController:(id)arg2 paymentPass:(id)arg3 suggestionList:(id)arg4 selectedAmount:(id)arg5;
- (void)loadView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

