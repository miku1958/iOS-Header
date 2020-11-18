//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAbstractRangeStatusItem.h>

@interface HFTemperatureStatusItem : HFAbstractRangeStatusItem
{
}

+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (id)controllableServiceTypes;
+ (id)currentModeCharacteristicTypes;
+ (id)currentValueCharacteristicType;
+ (id)customValueFormatter;
+ (CDUnknownBlockType)displayValueComparator;
+ (BOOL)isPercentRange;
+ (id)localizationKeyPrefix;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)sensorServiceTypes;
+ (BOOL)shouldShowAverageForRange:(id)arg1;
+ (unsigned long long)statusItemCategory;
+ (id)targetModeCharacteristicTypes;
+ (id)targetValueCharacteristicType;
- (id)title;

@end
