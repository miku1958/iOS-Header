//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFTargetRangeUtilities : NSObject
{
}

+ (unsigned long long)rangeModeForCurrentHeaterCoolerState:(long long)arg1;
+ (unsigned long long)rangeModeForCurrentHumidifierDehumidifierState:(long long)arg1;
+ (unsigned long long)rangeModeForHeatingCoolingMode:(long long)arg1;
+ (unsigned long long)rangeModeForTargetHeaterCoolerState:(long long)arg1;
+ (unsigned long long)rangeModeForTargetHumidifierDehumidifierState:(long long)arg1;
+ (id)targetRelativePercentValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetRelativePercentValue:(id)arg3 minimumThresholdRelativePercentValue:(id)arg4 maximumThresholdRelativePercentValue:(id)arg5;
+ (id)targetRelativePercentValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5;
+ (id)targetValueForService:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
+ (id)targetValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5;

@end
