//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary, PKCompoundInterestCalculatorConfiguration;

@interface PKCompoundInterestCalculator : NSObject
{
    NSCalendar *_calendar;
    NSMutableDictionary *_toDateCache;
    PKCompoundInterestCalculatorConfiguration *_configuration;
}

@property (readonly, nonatomic) PKCompoundInterestCalculatorConfiguration *configuration; // @synthesize configuration=_configuration;

- (void).cxx_destruct;
- (id)_additionalBalanceForProcessingDate:(id)arg1;
- (id)_creditsForProcessingDate:(id)arg1;
- (BOOL)_date:(id)arg1 isApplicableForProcessingDate:(id)arg2;
- (BOOL)_interestCanBeCalculated;
- (id)_rawCompoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewBalance:(BOOL)arg3;
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewPurchases:(BOOL)arg3;
- (id)compoundInterest;
- (id)compoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2;
- (id)compoundInterestWithPaymentOfAmount:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

