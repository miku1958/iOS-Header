//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPCharacteristicValueLinearDerivedTransitionPoint.h>

@interface HAPCharacteristicValueLinearDerivedTransitionPoint (NaturalLighting)
+ (id)transitionPointWithMinimumBrightness:(long long)arg1 minimumBrightnessColorTemperature:(long long)arg2 maximumBrightness:(long long)arg3 maximumBrightnessColorTemperature:(long long)arg4 targetCompletionDuration:(unsigned long long)arg5;
+ (id)transitionPointWithPreviousTransitionPoint:(id)arg1 nextTransitionPoint:(id)arg2 timeElapsedSincePreviousTransitionPoint:(unsigned long long)arg3 minimumBrightness:(long long)arg4 maximumBrightness:(long long)arg5;
- (long long)colorTemperatureForBrightness:(long long)arg1;
@end

