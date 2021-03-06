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
- (void)_accessibilityExpandControls;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityLoadFullScreenVideoView;
- (void)_accessibilityLoadInfoOnPipVideoViews;
- (void)_accessibilityMakeSureWindowIsVisibleToElementFetcher;
- (id)_axCurrentVideoCallDisplayName;
- (long long)_axDevicePosition;
- (void)_ensureVideoLayersExist;
- (void)_refreshStatusBarAndPIPAnimated:(BOOL)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)autoFadeOutBottomBar;
- (void)loadView;
- (void)setControlsState:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)toggleLocalCameraType;
- (void)updateTopBar:(BOOL)arg1 bottomBar:(BOOL)arg2 controlsBar:(BOOL)arg3 animated:(BOOL)arg4;
- (void)videoOverlayViewController:(id)arg1 isShowingOverlay:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end

