//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/CNAvatarViewDelegate-Protocol.h>
#import <PassKitUI/PKDashboardTransactionFetcherDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSString, PKDashboardTransactionFetcher, PKPaymentPass, PKPaymentTransactionCellController, PKPaymentTransactionDetailsFactory, PKPeerPaymentContactResolver, PKPeerPaymentController;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, UIViewControllerPreviewingDelegate, PKDashboardTransactionFetcherDelegate>
{
    NSDate *_dateFromYear;
    NSCalendar *_calendar;
    NSArray *_transactionsByMonth;
    PKPaymentPass *_paymentPass;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentController *_peerPaymentController;
    NSDateFormatter *_transactionMonthFormatter;
    long long _detailViewStyle;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (id)_transactionMonthFormatter;
- (id)_transactionsInYearTitleString;
- (void)_updateWithTransactions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDateFromYear:(id)arg1 calendar:(id)arg2 paymentPass:(id)arg3 detailViewStyle:(long long)arg4 paymentServiceDataProvider:(id)arg5 contactResolver:(id)arg6 peerPaymentController:(id)arg7;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)transactionsChanged:(id)arg1;
- (void)viewDidLoad;

@end

