//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class HKQuantity, HKQuantityType;

@interface _HKQuantityFilter : _HKFilter
{
    HKQuantity *_comparisonQuantity;
    HKQuantityType *_dataType;
    unsigned long long _operatorType;
}

@property (readonly, nonatomic) HKQuantity *comparisonQuantity; // @synthesize comparisonQuantity=_comparisonQuantity;
@property (readonly, nonatomic) HKQuantityType *dataType; // @synthesize dataType=_dataType;
@property (readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonQuantity:(id)arg2 dataType:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
