//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__PHVideoCallViewControllerAccessibility_super.h"

@interface PHVideoCallViewControllerAccessibility : __PHVideoCallViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityMakeSureWindowIsVisibleToElementFetcher;
- (void)_accessibilityPIPVideoInfoWithDisplayName:(id)arg1;
- (void)_accessibilityRemoteVideoInfoWithDisplayName:(id)arg1;
- (void)_accessibilityUpdateInfoOnLocalVideoView:(id)arg1 devicePosition:(long long)arg2;
- (void)_accessibilityUpdateInfoOnLocalVideoViewsForDevicePosition:(long long)arg1;
- (id)_accessibilityValueStringForLocalVideoAndDevicePosition:(long long)arg1;
- (void)_refreshStatusBarAndPIPAnimated:(BOOL)arg1;
- (void)_setUpCameraFlipButtonIfNecessary;
- (void)toggleLocalCameraType;
- (void)updateTopBar:(BOOL)arg1 bottomBar:(BOOL)arg2 animated:(BOOL)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

