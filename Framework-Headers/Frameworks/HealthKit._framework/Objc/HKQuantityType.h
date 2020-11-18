//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSampleType.h>

@class HKUnit, NSString, _HKDimension;

@interface HKQuantityType : HKSampleType
{
    long long _aggregationStyle;
    NSString *_unitString;
    HKUnit *_canonicalUnit;
    long long _canonicalUnitToken;
}

@property (readonly) long long aggregationStyle;
@property (readonly, nonatomic) HKUnit *canonicalUnit;
@property (readonly, nonatomic) _HKDimension *dimension;

+ (id)_quantityTypeWithCode:(long long)arg1;
- (void).cxx_destruct;
- (id)_initWithDefinition:(CDStruct_6b208136 *)arg1;
- (BOOL)isCompatibleWithUnit:(id)arg1;
- (void)validateUnit:(id)arg1;
- (void)validateUnitFromString:(id)arg1;

@end

