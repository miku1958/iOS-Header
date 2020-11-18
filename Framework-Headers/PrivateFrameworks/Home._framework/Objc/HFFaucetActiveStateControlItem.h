//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFPowerStateControlItem.h>

@interface HFFaucetActiveStateControlItem : HFPowerStateControlItem
{
    unsigned long long _valveControlMode;
}

@property (readonly, nonatomic) unsigned long long valveControlMode; // @synthesize valveControlMode=_valveControlMode;

+ (id)na_identity;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 valveControlMode:(unsigned long long)arg2 displayResults:(id)arg3;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;

@end

