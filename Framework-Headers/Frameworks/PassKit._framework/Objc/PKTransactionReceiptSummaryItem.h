//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString, PKCurrencyAmount;

@interface PKTransactionReceiptSummaryItem : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSString *_label;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
}

@property (strong, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTransactionReceiptSummaryItem:(id)arg1;

@end
