//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PKPaymentTransactionGroup;

@interface PKBalanceSummary : NSObject
{
    BOOL _isLoading;
    unsigned long long _summaryType;
    NSDate *_startDate;
    NSDate *_endDate;
    PKPaymentTransactionGroup *_orderedSpendingTransactions;
    PKPaymentTransactionGroup *_orderedInterestCharges;
    PKPaymentTransactionGroup *_orderedCredits;
    PKPaymentTransactionGroup *_rewards;
}

@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property (strong, nonatomic) PKPaymentTransactionGroup *orderedCredits; // @synthesize orderedCredits=_orderedCredits;
@property (strong, nonatomic) PKPaymentTransactionGroup *orderedInterestCharges; // @synthesize orderedInterestCharges=_orderedInterestCharges;
@property (strong, nonatomic) PKPaymentTransactionGroup *orderedSpendingTransactions; // @synthesize orderedSpendingTransactions=_orderedSpendingTransactions;
@property (strong, nonatomic) PKPaymentTransactionGroup *rewards; // @synthesize rewards=_rewards;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) unsigned long long summaryType; // @synthesize summaryType=_summaryType;

- (void).cxx_destruct;

@end
