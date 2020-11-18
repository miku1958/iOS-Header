//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBListRideOptionsIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBTimestamp;

@interface _INPBListRideOptionsIntentResponse : PBCodable <_INPBListRideOptionsIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int supportsApplePayForPayment:1;
    } _has;
    BOOL _supportsApplePayForPayment;
    _INPBTimestamp *_expirationDate;
    NSArray *_paymentMethods;
    NSArray *_rideOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasSupportsApplePayForPayment;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property (readonly, nonatomic) unsigned long long paymentMethodsCount;
@property (copy, nonatomic) NSArray *rideOptions; // @synthesize rideOptions=_rideOptions;
@property (readonly, nonatomic) unsigned long long rideOptionsCount;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsApplePayForPayment; // @synthesize supportsApplePayForPayment=_supportsApplePayForPayment;

+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;
- (void).cxx_destruct;
- (void)addPaymentMethods:(id)arg1;
- (void)addRideOptions:(id)arg1;
- (void)clearPaymentMethods;
- (void)clearRideOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)rideOptionsAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

