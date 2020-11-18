//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INBalanceAmount : NSObject <NSCopying, NSSecureCoding>
{
    NSDecimalNumber *_amount;
    long long _balanceType;
    NSString *_currencyCode;
}

@property (readonly, copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property (readonly, nonatomic) long long balanceType; // @synthesize balanceType=_balanceType;
@property (readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2 currencyCode:(id)arg3;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

