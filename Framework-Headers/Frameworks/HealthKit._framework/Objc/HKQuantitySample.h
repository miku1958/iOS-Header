//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

@class HDCodableQuantitySample, HKQuantity, HKQuantityType;

@interface HKQuantitySample : HKSample
{
    HKQuantity *_quantity;
    long long _freezeState;
    long long _count;
    HDCodableQuantitySample *_codableQuantitySample;
}

@property (strong, nonatomic, setter=_setCodableQuantitySample:) HDCodableQuantitySample *codableQuantitySample; // @synthesize codableQuantitySample=_codableQuantitySample;
@property (readonly) long long count; // @synthesize count=_count;
@property (nonatomic, getter=_frozen, setter=_setFrozen:) BOOL frozen;
@property (readonly, copy) HKQuantity *quantity;
@property (readonly, copy) HKQuantityType *quantityType;

+ (BOOL)_isConcreteObjectClass;
+ (id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)_compareFreezeStateWithSample:(id)arg1;
- (id)_init;
- (void)_setCount:(long long)arg1;
- (void)_setFreezing;
- (void)_setQuantity:(id)arg1;
- (BOOL)_shouldNotifyOnInsert;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (id)_valueDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

