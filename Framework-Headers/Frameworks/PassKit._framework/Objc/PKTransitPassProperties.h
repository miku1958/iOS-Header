//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSString, PKCurrencyAmount, PKFelicaPassProperties;

@interface PKTransitPassProperties : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _blacklisted;
    NSDate *_expirationDate;
    NSString *_appletFormat;
    PKCurrencyAmount *_balance;
    NSArray *_enrouteTransitTypes;
}

@property (copy, nonatomic) NSString *appletFormat; // @synthesize appletFormat=_appletFormat;
@property (copy, nonatomic) PKCurrencyAmount *balance; // @synthesize balance=_balance;
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted; // @synthesize blacklisted=_blacklisted;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSDecimalNumber *decimalTransitBalance;
@property (readonly, nonatomic) NSString *displayableTransitBalance;
@property (copy, nonatomic) NSArray *enrouteTransitTypes; // @synthesize enrouteTransitTypes=_enrouteTransitTypes;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;
@property (readonly, nonatomic) BOOL isEnRoute;
@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

