//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__ProximityStatusViewControllerAccessibility_super.h"

@interface ProximityStatusViewControllerAccessibility : __ProximityStatusViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityUpdateAccessibilityElements;
- (double)_axCaseBatteryLevel;
- (id)_axCaseDevice;
- (id)_axCombinedDevice;
- (id)_axCreateAggregateStatusView:(id)arg1 primaryTitle:(id)arg2 batteryLevelLabel:(id)arg3 chargingImage:(id)arg4 warningImage:(id)arg5;
- (double)_axLeftBatteryLevel;
- (id)_axLeftDevice;
- (double)_axRightBatteryLevel;
- (id)_axRightDevice;
- (void)_axSetCaseBatteryLevel:(double)arg1;
- (void)_axSetCaseDevice:(id)arg1;
- (void)_axSetCombinedDevice:(id)arg1;
- (void)_axSetLeftBatteryLevel:(double)arg1;
- (void)_axSetLeftDevice:(id)arg1;
- (void)_axSetRightBatteryLevel:(double)arg1;
- (void)_axSetRightDevice:(id)arg1;
- (void)_updateBatteryLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3;
- (BOOL)accessibilityPerformEscape;
- (void)viewWillAppear:(BOOL)arg1;

@end

