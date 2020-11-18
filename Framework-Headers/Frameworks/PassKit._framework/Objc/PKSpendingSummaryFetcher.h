//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKAccountServiceObserver-Protocol.h>
#import <PassKitCore/PKPaymentDataProviderDelegate-Protocol.h>

@class NSArray, NSCache, NSCalendar, NSDate, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSString, PKAccount, PKPaymentDefaultDataProvider, PKPaymentPass;
@protocol OS_dispatch_queue;

@interface PKSpendingSummaryFetcher : NSObject <PKPaymentDataProviderDelegate, PKAccountServiceObserver>
{
    PKPaymentPass *_paymentPass;
    NSString *_passUniqueID;
    PKAccount *_account;
    NSCache *_weeklySummaryItemsPerStartDate;
    NSCache *_monthlySummaryItemsPerStartDate;
    NSDate *_oldestTransactionDate;
    NSDate *_newestTransactionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    NSCalendar *_currentCalendar;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
    struct os_unfair_lock_s _requestsLock;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableDictionary *_blockPendingRequests;
    BOOL _processingRequest;
    NSArray *_statements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sortedTransactions:(id)arg1 ascending:(BOOL)arg2;
+ (id)_spendingCategoriesFromTransactions:(id)arg1 currencyCode:(id)arg2;
+ (id)_spendingMerchantsFromTransaction:(id)arg1 currencyCode:(id)arg2;
+ (id)nextStartOfWeekFromDate:(id)arg1;
+ (id)previousStartOfMonthFromDate:(id)arg1;
+ (id)previousStartOfWeekFromDate:(id)arg1;
+ (id)summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6;
- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (id)_cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 withLastPeriodChange:(BOOL)arg3;
- (void)_processNextRequest;
- (void)_spendingSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 withLastPeriodChange:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)availableSummaries:(CDUnknownBlockType)arg1;
- (id)cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)spendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

