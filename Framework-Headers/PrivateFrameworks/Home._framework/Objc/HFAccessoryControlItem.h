//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HMAccessory;

@interface HFAccessoryControlItem : HFControlItem
{
    HMAccessory *_accessory;
}

@property (readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;

+ (Class)valueClass;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 parentAccessory:(id)arg2 displayResults:(id)arg3;
- (id)normalizedValueForValue:(id)arg1;
- (BOOL)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;

@end
