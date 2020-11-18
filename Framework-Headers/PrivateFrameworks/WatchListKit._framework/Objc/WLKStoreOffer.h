//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, WLKStoreOfferPeriod;

@interface WLKStoreOffer : NSObject
{
    NSString *_buyParameters;
    NSString *_formattedPrice;
    NSNumber *_price;
    unsigned long long _offerType;
    unsigned long long _subscriptionType;
    NSString *_title;
    NSDictionary *_dictionary;
    WLKStoreOfferPeriod *_renewalPeriod;
    WLKStoreOfferPeriod *_freeTrialPeriod;
    WLKStoreOfferPeriod *_introOfferPeriod;
}

@property (readonly, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property (readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (readonly, nonatomic) NSString *formattedPrice; // @synthesize formattedPrice=_formattedPrice;
@property (readonly, nonatomic) WLKStoreOfferPeriod *freeTrialPeriod; // @synthesize freeTrialPeriod=_freeTrialPeriod;
@property (readonly, nonatomic) WLKStoreOfferPeriod *introOfferPeriod; // @synthesize introOfferPeriod=_introOfferPeriod;
@property (readonly, nonatomic) unsigned long long offerType; // @synthesize offerType=_offerType;
@property (readonly, nonatomic) NSNumber *price; // @synthesize price=_price;
@property (readonly, nonatomic) WLKStoreOfferPeriod *renewalPeriod; // @synthesize renewalPeriod=_renewalPeriod;
@property (readonly, nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)offersWithMAPIDictionaries:(id)arg1;
+ (id)offersWithSubscriptionDictionaries:(id)arg1;
- (void).cxx_destruct;
- (id)initWithMAPIDictionary:(id)arg1;
- (id)initWithSubscriptionDictionary:(id)arg1;
- (BOOL)specialOfferEligible;
- (id)sui_buttonSubtitleWithServiceName:(id)arg1;
- (id)sui_buttonTitle;

@end
