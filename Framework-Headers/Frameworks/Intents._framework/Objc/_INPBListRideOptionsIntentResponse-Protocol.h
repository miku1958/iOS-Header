//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBPaymentMethodValue, _INPBRideOption, _INPBTimestamp;

@protocol _INPBListRideOptionsIntentResponse <NSObject>

@property (strong, nonatomic) _INPBTimestamp *expirationDate;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasSupportsApplePayForPayment;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (readonly, nonatomic) unsigned long long paymentMethodsCount;
@property (copy, nonatomic) NSArray *rideOptions;
@property (readonly, nonatomic) unsigned long long rideOptionsCount;
@property (nonatomic) BOOL supportsApplePayForPayment;

+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;
- (void)addPaymentMethods:(_INPBPaymentMethodValue *)arg1;
- (void)addRideOptions:(_INPBRideOption *)arg1;
- (void)clearPaymentMethods;
- (void)clearRideOptions;
- (_INPBPaymentMethodValue *)paymentMethodsAtIndex:(unsigned long long)arg1;
- (_INPBRideOption *)rideOptionsAtIndex:(unsigned long long)arg1;
@end

