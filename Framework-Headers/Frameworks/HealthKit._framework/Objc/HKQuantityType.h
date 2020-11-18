//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSampleType.h>

@class HKUnit, _HKDimension;

@interface HKQuantityType : HKSampleType
{
    HKUnit *_canonicalUnit;
    struct os_unfair_lock_s _canonicalUnitLock;
}

@property (readonly) long long aggregationStyle;
@property (readonly, nonatomic) HKUnit *canonicalUnit;
@property (readonly, nonatomic) _HKDimension *dimension;

+ (id)_quantityTypeWithCode:(long long)arg1;
- (void).cxx_destruct;
- (id)_initWithCode:(long long)arg1;
- (BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id *)arg3;
- (BOOL)isCompatibleWithUnit:(id)arg1;
- (void)validateUnit:(id)arg1;
- (void)validateUnitFromString:(id)arg1;

@end
