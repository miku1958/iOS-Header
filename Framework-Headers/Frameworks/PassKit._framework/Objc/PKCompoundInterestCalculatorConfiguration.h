//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSDate, NSDecimalNumber, NSTimeZone;

@interface PKCompoundInterestCalculatorConfiguration : NSObject
{
    NSCalendar *_calendar;
    BOOL _inGrace;
    BOOL _isInDisasterRecovery;
    unsigned long long _calculationMethod;
    NSDecimalNumber *_apr;
    long long _compoundingPeriods;
    NSDate *_periodStartDate;
    NSDate *_periodEndDate;
    NSDecimalNumber *_periodStartingBalance;
    NSDecimalNumber *_remainingPeriodStartingBalance;
    NSDecimalNumber *_remainingPeriodMinimumPayment;
    NSDecimalNumber *_remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
    NSDecimalNumber *_currentBalance;
    NSDecimalNumber *_unpostedInterest;
    NSDate *_unpostedInterestTimestamp;
    NSArray *_periodTransactions;
    NSArray *_futurePayments;
    NSTimeZone *_productTimeZone;
}

@property (strong, nonatomic, setter=setAPR:) NSDecimalNumber *apr; // @synthesize apr=_apr;
@property (nonatomic) unsigned long long calculationMethod; // @synthesize calculationMethod=_calculationMethod;
@property (nonatomic) long long compoundingPeriods; // @synthesize compoundingPeriods=_compoundingPeriods;
@property (strong, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property (copy, nonatomic) NSArray *futurePayments; // @synthesize futurePayments=_futurePayments;
@property (nonatomic) BOOL inGrace; // @synthesize inGrace=_inGrace;
@property (nonatomic) BOOL isInDisasterRecovery; // @synthesize isInDisasterRecovery=_isInDisasterRecovery;
@property (strong, nonatomic) NSDate *periodEndDate; // @synthesize periodEndDate=_periodEndDate;
@property (strong, nonatomic) NSDate *periodStartDate; // @synthesize periodStartDate=_periodStartDate;
@property (strong, nonatomic) NSDecimalNumber *periodStartingBalance; // @synthesize periodStartingBalance=_periodStartingBalance;
@property (copy, nonatomic) NSArray *periodTransactions; // @synthesize periodTransactions=_periodTransactions;
@property (strong, nonatomic) NSTimeZone *productTimeZone; // @synthesize productTimeZone=_productTimeZone;
@property (strong, nonatomic) NSDecimalNumber *remainingPeriodMinimumPayment; // @synthesize remainingPeriodMinimumPayment=_remainingPeriodMinimumPayment;
@property (strong, nonatomic) NSDecimalNumber *remainingPeriodMinimumPaymentExcludedFromInterestCalculation; // @synthesize remainingPeriodMinimumPaymentExcludedFromInterestCalculation=_remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
@property (strong, nonatomic) NSDecimalNumber *remainingPeriodStartingBalance; // @synthesize remainingPeriodStartingBalance=_remainingPeriodStartingBalance;
@property (strong, nonatomic) NSDecimalNumber *unpostedInterest; // @synthesize unpostedInterest=_unpostedInterest;
@property (strong, nonatomic) NSDate *unpostedInterestTimestamp; // @synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp;

+ (id)configurationWithCreditAccount:(id)arg1;
- (void).cxx_destruct;
- (long long)_daysInYearForDate:(id)arg1 withTimeZone:(id)arg2;
- (id)description;
- (id)init;
- (void)updateWithCreditAccount:(id)arg1;

@end

