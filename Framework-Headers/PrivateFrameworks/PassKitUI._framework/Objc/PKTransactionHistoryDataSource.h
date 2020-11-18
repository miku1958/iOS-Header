//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardDataSource-Protocol.h>
#import <PassKitUI/PKDashboardTransactionFetcherDelegate-Protocol.h>

@class CNContact, NSArray, NSCalendar, NSDateFormatter, NSString, PKAccount, PKCurrencyAmount, PKDashboardTransactionFetcher, PKMerchant, PKPaymentPass, PKPaymentTransaction, PKPaymentTransactionGroup, PKPeerPaymentContactResolver;
@protocol PKDashboardDataSourceDelegate;

@interface PKTransactionHistoryDataSource : NSObject <PKDashboardTransactionFetcherDelegate, PKDashboardDataSource>
{
    PKPaymentPass *_paymentPass;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPeerPaymentContactResolver *_contactResolver;
    id<PKDashboardDataSourceDelegate> _delegate;
    PKPaymentTransaction *_featuredTransaction;
    PKPaymentTransactionGroup *_selectedTransactions;
    BOOL _contentIsLoaded;
    BOOL _contactLoaded;
    BOOL _transactionHistoryLoaded;
    NSArray *_transactionHistory;
    NSDateFormatter *_formatterTitle;
    NSDateFormatter *_formatterMonth;
    NSCalendar *_currentCalendar;
    PKAccount *_account;
    unsigned long long _type;
    CNContact *_contact;
    PKMerchant *_merchant;
    PKPaymentTransactionGroup *_group;
    PKCurrencyAmount *_footerTotal;
    PKCurrencyAmount *_footerSecondaryTotal;
}

@property (readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *footerSecondaryTitle;
@property (readonly, nonatomic) PKCurrencyAmount *footerSecondaryTotal; // @synthesize footerSecondaryTotal=_footerSecondaryTotal;
@property (readonly, nonatomic) NSString *footerTitle;
@property (readonly, nonatomic) PKCurrencyAmount *footerTotal; // @synthesize footerTotal=_footerTotal;
@property (readonly, nonatomic) PKPaymentTransactionGroup *group; // @synthesize group=_group;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (void)_handleTransactionHistoryUpdated:(id)arg1;
- (id)_headerItem;
- (void)_loadContact;
- (void)_notifyContentLoadedIfNecessary;
- (void)_reloadTransactions;
- (id)_totalPaymentsFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_totalRewardsFromTransactions:(id)arg1;
- (id)_totalSpendingFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_transactionItemForTransaction:(id)arg1;
- (id)footerTextForSection:(unsigned long long)arg1;
- (id)initWithFetcher:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6 type:(unsigned long long)arg7;
- (id)initWithTransactionGroup:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 transactionHistory:(id)arg4;
- (id)itemAtIndexPath:(id)arg1;
- (id)navigationBarTitle;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)setDataSourceDelegate:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (void)transactionsChanged:(id)arg1;

@end

