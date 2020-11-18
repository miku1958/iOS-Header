//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKCodedQuantity;

@interface HKRatioValue : NSObject <NSSecureCoding, NSCopying>
{
    HKCodedQuantity *_numerator;
    HKCodedQuantity *_denominator;
}

@property (readonly, copy, nonatomic) HKCodedQuantity *denominator; // @synthesize denominator=_denominator;
@property (readonly, copy, nonatomic) HKCodedQuantity *numerator; // @synthesize numerator=_numerator;

+ (id)ratioValueWithNumerator:(id)arg1 andDenominator:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithNumerator:(id)arg1 denominator:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
