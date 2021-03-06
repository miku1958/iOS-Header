//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding>
{
    unsigned long long _reason;
    PKCurrencyAmount *_amount;
}

@property (strong, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property (nonatomic) unsigned long long reason; // @synthesize reason=_reason;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;

@end

