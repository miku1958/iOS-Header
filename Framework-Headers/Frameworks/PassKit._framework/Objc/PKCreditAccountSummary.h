//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _requiresDebtCollectionNotices;
    BOOL _inGrace;
    BOOL _autoPayEnabled;
    NSDecimalNumber *_creditLimit;
    NSDecimalNumber *_availableCredit;
    NSDecimalNumber *_currentBalance;
    NSDecimalNumber *_rewardsBalance;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_remainingMinimumPayment;
    NSDecimalNumber *_remainingMinimumPaymentExcludedFromInterestCalculation;
    NSDecimalNumber *_installmentBalance;
    NSDate *_lastPaymentDate;
    long long _cyclesPastDue;
    unsigned long long _balanceStatus;
    PKCreditAccountBalanceSummary *_balanceSummary;
    NSDecimalNumber *_unpostedInterest;
    NSDate *_unpostedInterestTimestamp;
    NSDecimalNumber *_chargeOffPreventionAmount;
    NSDecimalNumber *_pastDueAmount;
    PKCreditAccountStatement *_currentStatement;
    NSDecimalNumber *_adjustedBalance;
    NSDate *_paymentDueDate;
}

@property (copy, nonatomic) NSDecimalNumber *adjustedBalance; // @synthesize adjustedBalance=_adjustedBalance;
@property (nonatomic) BOOL autoPayEnabled; // @synthesize autoPayEnabled=_autoPayEnabled;
@property (copy, nonatomic) NSDecimalNumber *availableCredit; // @synthesize availableCredit=_availableCredit;
@property (nonatomic) unsigned long long balanceStatus; // @synthesize balanceStatus=_balanceStatus;
@property (strong, nonatomic) PKCreditAccountBalanceSummary *balanceSummary; // @synthesize balanceSummary=_balanceSummary;
@property (copy, nonatomic) NSDecimalNumber *chargeOffPreventionAmount; // @synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount;
@property (copy, nonatomic) NSDecimalNumber *creditLimit; // @synthesize creditLimit=_creditLimit;
@property (copy, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property (strong, nonatomic) PKCreditAccountStatement *currentStatement; // @synthesize currentStatement=_currentStatement;
@property (nonatomic) long long cyclesPastDue; // @synthesize cyclesPastDue=_cyclesPastDue;
@property (nonatomic) BOOL inGrace; // @synthesize inGrace=_inGrace;
@property (copy, nonatomic) NSDecimalNumber *installmentBalance; // @synthesize installmentBalance=_installmentBalance;
@property (copy, nonatomic) NSDate *lastPaymentDate; // @synthesize lastPaymentDate=_lastPaymentDate;
@property (copy, nonatomic) NSDecimalNumber *pastDueAmount; // @synthesize pastDueAmount=_pastDueAmount;
@property (copy, nonatomic) NSDate *paymentDueDate; // @synthesize paymentDueDate=_paymentDueDate;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPayment; // @synthesize remainingMinimumPayment=_remainingMinimumPayment;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPaymentExcludedFromInterestCalculation; // @synthesize remainingMinimumPaymentExcludedFromInterestCalculation=_remainingMinimumPaymentExcludedFromInterestCalculation;
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalance; // @synthesize remainingStatementBalance=_remainingStatementBalance;
@property (nonatomic) BOOL requiresDebtCollectionNotices; // @synthesize requiresDebtCollectionNotices=_requiresDebtCollectionNotices;
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance; // @synthesize rewardsBalance=_rewardsBalance;
@property (copy, nonatomic) NSDecimalNumber *unpostedInterest; // @synthesize unpostedInterest=_unpostedInterest;
@property (copy, nonatomic) NSDate *unpostedInterestTimestamp; // @synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)ingestExtendedAccountDetails:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

