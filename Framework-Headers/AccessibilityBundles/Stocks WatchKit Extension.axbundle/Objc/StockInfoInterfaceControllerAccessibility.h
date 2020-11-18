//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__StockInfoInterfaceControllerAccessibility_super.h"

@interface StockInfoInterfaceControllerAccessibility : __StockInfoInterfaceControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityChartValue;
- (id)_accessibilityGetPotentialBlankDictionaryFromStockNamesToLabelNames;
- (id)_accessibilityLabelForChange:(id)arg1 stock:(id)arg2;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilitySetLabelsForUnloadedData;
- (void)_accessibilityUpdateBlankLabelsOnStockKey:(id)arg1 labelKeys:(id)arg2 stock:(id)arg3;
- (void)_accessibilityUpdateChangeLabels;
- (void)_accessibilityUpdateChartButtonForKey:(id)arg1 labelLocKey:(id)arg2 chartInterval:(long long)arg3;
- (void)_accessibilityUpdateChartButtonInfo;
- (void)_accessibilityUpdateChartImageRegions;
- (void)_doButtonAction:(long long)arg1;
- (void)_setStockInformation;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;

@end
