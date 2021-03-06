//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__PLBatteryUIGraphViewAccessibility_super.h"

@interface PLBatteryUIGraphViewAccessibility : __PLBatteryUIGraphViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (BOOL)_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (BOOL)_accessibilityDataSeriesSupportsSonification;
- (BOOL)_accessibilityDataSeriesSupportsSummarization;
- (long long)_accessibilityDataSeriesType;
- (id)_accessibilityDataSeriesValuesForAxis:(long long)arg1;
- (id)_accessibilityGraphElementsWithData:(id)arg1 endDate:(id)arg2 numIntervals:(int)arg3 intervalWidth:(double)arg4 intervalHeight:(double)arg5 yOrigin:(double)arg6 tapIndex:(int)arg7;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axBatteryLevelElements;
- (long long)accessibilityContainerType;
- (id)accessibilityElements;
- (void)setupGraphElements;

@end

