//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIStatusBarBatteryItemViewAccessibility_super.h>

@interface UIStatusBarBatteryItemViewAccessibility : __UIStatusBarBatteryItemViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityIsBatteryPercentVisible;
- (long long)_accessibilityNonQuantizedBatteryLevel;
- (void)_accessibilitySetNonQuantizedBatteryLevel:(long long)arg1;
- (id)_axCachedAXLabel;
- (BOOL)_axIsCapacityDirty;
- (void)_axSetCachedAXLabel:(id)arg1;
- (void)_axSetCapacityDirty:(BOOL)arg1;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end

