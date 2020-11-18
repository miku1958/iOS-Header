//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INCurrencyAmount, INPaymentMethod, INPerson, NSString;

@protocol INPaymentRecordExport <NSObject, JSExport>

@property (copy, nonatomic) INCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) INPerson *payee;
@property (copy, nonatomic) INPerson *payer;
@property (copy, nonatomic) INPaymentMethod *paymentMethod;
@property (nonatomic) long long status;

- (id)init;
@end

