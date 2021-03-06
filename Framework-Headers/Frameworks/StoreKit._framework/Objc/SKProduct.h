//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString, SKProductDiscount, SKProductSubscriptionPeriod;

@interface SKProduct : NSObject
{
    id _internal;
}

@property (copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString *_localeIdentifier;
@property (readonly, nonatomic) NSArray *contentLengths;
@property (readonly, nonatomic) NSString *contentVersion;
@property (readonly, nonatomic) NSArray *discounts;
@property (readonly, nonatomic) NSArray *downloadContentLengths;
@property (readonly, nonatomic) NSString *downloadContentVersion;
@property (readonly, nonatomic) BOOL downloadable;
@property (readonly, nonatomic) SKProductDiscount *introductoryPrice;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isFamilyShareable;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSDecimalNumber *price;
@property (readonly, nonatomic) NSLocale *priceLocale;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) NSString *subscriptionGroupIdentifier;
@property (readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;

+ (id)productsFromDictionaries:(id)arg1;
+ (id)productsFromXPCEncodingsArray:(id)arg1;
- (void).cxx_destruct;
- (void)_setContentVersion:(id)arg1;
- (void)_setDiscounts:(id)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setDownloadable:(BOOL)arg1;
- (void)_setFamilyShareable:(BOOL)arg1;
- (void)_setIntroductoryPrice:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setProductIdentifier:(id)arg1;
- (void)_setSubscriptionGroupIdentifier:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;
- (id)copyXPCEncoding;
- (id)init;
- (id)initMinusLocaleWithDictionary:(id)arg1;
- (id)initMinusLocaleWithXPCEncoding:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;

@end

