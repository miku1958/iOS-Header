//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSDecimalNumber, NSMutableDictionary, PKAccount;

@interface PKBillPaymentSuggestedAmountController : NSObject
{
    NSDateFormatter *_monthAndDayFormatter;
    NSDateFormatter *_monthFormatter;
    NSDecimalNumber *_currentStatementPaymentsSum;
    NSDecimalNumber *_previousStatementPaymentsSum;
    NSDecimalNumber *_statementPurchasesSum;
    NSMutableDictionary *_merchantCategoryTransactionSums;
    BOOL _currentStatementIsLastMonthsStatement;
    BOOL _isMonthZero;
    BOOL _isMonthOne;
    PKAccount *_account;
    NSArray *_currentStatementSelectedSuggestedAmountEvents;
    NSArray *_approvedTransactionsPurchasesSinceStatement;
    NSArray *_approvedTransactionsBillPaymentSinceStatement;
    NSArray *_approvedTransactionsPurchasesForPreviousStatement;
    NSArray *_approvedTransactionsBillPaymentForPreviousStatement;
}

@property (readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) NSArray *approvedTransactionsBillPaymentForPreviousStatement; // @synthesize approvedTransactionsBillPaymentForPreviousStatement=_approvedTransactionsBillPaymentForPreviousStatement;
@property (readonly, nonatomic) NSArray *approvedTransactionsBillPaymentSinceStatement; // @synthesize approvedTransactionsBillPaymentSinceStatement=_approvedTransactionsBillPaymentSinceStatement;
@property (readonly, nonatomic) NSArray *approvedTransactionsPurchasesForPreviousStatement; // @synthesize approvedTransactionsPurchasesForPreviousStatement=_approvedTransactionsPurchasesForPreviousStatement;
@property (readonly, nonatomic) NSArray *approvedTransactionsPurchasesSinceStatement; // @synthesize approvedTransactionsPurchasesSinceStatement=_approvedTransactionsPurchasesSinceStatement;
@property (readonly, nonatomic) NSArray *currentStatementSelectedSuggestedAmountEvents; // @synthesize currentStatementSelectedSuggestedAmountEvents=_currentStatementSelectedSuggestedAmountEvents;

+ (void)_approvedTransactionsForPreviousStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_approvedTransactionsSinceStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsPurchasesSinceStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)defaultControllerForAccount:(id)arg1 paymentPass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (BOOL)_allMandatoryValuesAreSameAmount;
- (BOOL)_calculateCurrentStatementIsLastMonthsStatement;
- (BOOL)_categoryIsCurrentBalanceType:(unsigned long long)arg1;
- (BOOL)_categoryIsPaymentPlan:(unsigned long long)arg1;
- (id)_createDefaultAmountSuggestionListFromAccount;
- (id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2;
- (void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg1;
- (id)_messageForSuggestion:(id)arg1;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long *)arg2 minMerchantCategory2:(long long *)arg3 minMerchantCategorySum1:(id *)arg4 minMerchantCategorySum2:(id *)arg5;
- (void)_populateStringValuesForList:(id)arg1;
- (id)_remainingStatementBalanceGapDescriptionText;
- (id)_remainingStatementBalanceGapTitleText;
- (id)_remainingStatementBalanceMessageString;
- (id)_remainingStatementBalanceTitleString;
- (BOOL)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg1;
- (id)_titleForSuggestion:(id)arg1;
- (void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg1;
- (id)generateAmountSuggestionList;
- (id)initWithAccount:(id)arg1 currentStatementSelectedSuggestedAmountEvents:(id)arg2 approvedTransactionsPurchasesSinceStatement:(id)arg3 approvedTransactionsPurchasesForPreviousStatement:(id)arg4 approvedTransactionsBillPaymentSinceStatement:(id)arg5 approvedTransactionsBillPaymentForPreviousStatement:(id)arg6;

@end

