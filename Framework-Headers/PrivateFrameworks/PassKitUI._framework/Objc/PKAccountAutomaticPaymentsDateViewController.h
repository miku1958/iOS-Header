//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKMonthDayCollectionViewControllerDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSIndexPath, NSNumberFormatter, NSString, NSTimeZone, PKAccount, PKAccountAutomaticPaymentsController, PKAccountAutomaticPaymentsDateFooterView, PKMonthDayCollectionViewController, PKTableHeaderView;

@interface PKAccountAutomaticPaymentsDateViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate>
{
    NSDate *_date;
    long long _scheduledDay;
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    unsigned long long _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    PKMonthDayCollectionViewController *_monthDayCollectionViewController;
    NSNumberFormatter *_ordinalDayNumberFormatter;
    NSDateFormatter *_cardinalDayDateFormatter;
    BOOL _useOrdinalDay;
    PKAccountAutomaticPaymentsDateFooterView *_collectionFooterView;
    NSTimeZone *_productTimeZone;
    NSCalendar *_productCalendar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addBankAccountInformationViewController;
- (id)_footerText;
- (long long)_frequency;
- (void)_handleNext:(id)arg1;
- (void)_handlePresentPayment;
- (void)_performPresentPayment;
- (BOOL)_shouldShowCollectionView;
- (void)_updateNextButtonEnabledIfNecessary;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)monthDaySelectionViewController:(id)arg1 didSelectDate:(id)arg2 day:(long long)arg3;
- (BOOL)shouldMapSection:(unsigned long long)arg1;
- (id)tableHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
