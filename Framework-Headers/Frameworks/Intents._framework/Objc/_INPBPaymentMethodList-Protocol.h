//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBPaymentMethod;

@protocol _INPBPaymentMethodList <NSObject>

@property (strong, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (readonly, nonatomic) unsigned long long paymentMethodsCount;

+ (Class)paymentMethodsType;
- (void)addPaymentMethods:(_INPBPaymentMethod *)arg1;
- (void)clearPaymentMethods;
- (_INPBPaymentMethod *)paymentMethodsAtIndex:(unsigned long long)arg1;
@end

