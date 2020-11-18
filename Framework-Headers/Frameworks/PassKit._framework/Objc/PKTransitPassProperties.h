//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString, PKCurrencyAmount, PKFelicaPassProperties;

@interface PKTransitPassProperties : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _inStation;
    BOOL _blacklisted;
    NSDate *_expirationDate;
    NSString *_appletFormat;
    PKCurrencyAmount *_balance;
}

@property (copy, nonatomic) NSString *appletFormat; // @synthesize appletFormat=_appletFormat;
@property (copy, nonatomic) PKCurrencyAmount *balance; // @synthesize balance=_balance;
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted; // @synthesize blacklisted=_blacklisted;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSDecimalNumber *decimalTransitBalance;
@property (readonly, nonatomic) NSString *displayableTransitBalance;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (nonatomic, getter=isInStation) BOOL inStation; // @synthesize inStation=_inStation;
@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;

+ (id)passPropertiesForPass:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2;

@end

