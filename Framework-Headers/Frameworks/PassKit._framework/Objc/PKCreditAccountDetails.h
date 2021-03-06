//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountDetails.h>

@class NSDate, NSSet, NSString, NSTimeZone, NSURL, PKCreditAccountRates, PKCreditAccountSummary, PKCurrencyAmount;

@interface PKCreditAccountDetails : PKAccountDetails
{
    BOOL _termsAcceptanceRequired;
    NSDate *_lastUpdatedDate;
    NSDate *_createdDate;
    NSString *_countryCode;
    NSString *_currencyCode;
    NSTimeZone *_productTimeZone;
    NSSet *_physicalCards;
    NSSet *_virtualCards;
    NSString *_termsIdentifier;
    NSURL *_termsURL;
    NSURL *_associatedPassURL;
    NSString *_associatedPassTypeIdentifier;
    NSString *_associatedPassSerialNumber;
    long long _cardType;
    PKCreditAccountSummary *_accountSummary;
    PKCreditAccountRates *_rates;
    NSSet *_installmentPlans;
}

@property (strong, nonatomic) PKCreditAccountSummary *accountSummary; // @synthesize accountSummary=_accountSummary;
@property (copy, nonatomic) NSString *associatedPassSerialNumber; // @synthesize associatedPassSerialNumber=_associatedPassSerialNumber;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier; // @synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier;
@property (copy, nonatomic) NSURL *associatedPassURL; // @synthesize associatedPassURL=_associatedPassURL;
@property (readonly, copy, nonatomic) PKCurrencyAmount *cardBalance;
@property (nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property (copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (copy, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (copy, nonatomic) NSSet *installmentPlans; // @synthesize installmentPlans=_installmentPlans;
@property (copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property (copy, nonatomic) NSSet *physicalCards; // @synthesize physicalCards=_physicalCards;
@property (strong, nonatomic) NSTimeZone *productTimeZone; // @synthesize productTimeZone=_productTimeZone;
@property (strong, nonatomic) PKCreditAccountRates *rates; // @synthesize rates=_rates;
@property (nonatomic) BOOL termsAcceptanceRequired; // @synthesize termsAcceptanceRequired=_termsAcceptanceRequired;
@property (copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property (copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property (readonly, copy, nonatomic) PKCurrencyAmount *totalBalance;
@property (copy, nonatomic) NSSet *virtualCards; // @synthesize virtualCards=_virtualCards;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addOrUpdatePhysicalCard:(id)arg1;
- (void)addOrUpdateVirtualCard:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)ingestExtendedAccountDetails:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)installmentPlanWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)numberOfActiveInstallments;
- (long long)numberOfActiveStatementedInstallments;
- (void)removeVirtualCard:(id)arg1;
- (id)virtualCardWithIdentifier:(id)arg1;

@end

