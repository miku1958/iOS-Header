//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCharacteristicMetadata.h>

@class NSNumber;

@interface HMCharacteristicMetadata (HFAdditions)

@property (readonly, nonatomic) NSNumber *hf_effectiveStepValue;
@property (readonly, nonatomic) BOOL hf_isNumeric;

- (id)hf_characteristicValueForPercentage:(double)arg1;
- (BOOL)hf_isEqualToMetadata:(id)arg1;
- (BOOL)hf_isInteger;
- (BOOL)hf_isValidValue:(id)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;
@end
