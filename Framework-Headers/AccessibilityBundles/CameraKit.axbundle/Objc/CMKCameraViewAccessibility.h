//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/__CMKCameraViewAccessibility_super.h>

@interface CMKCameraViewAccessibility : __CMKCameraViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityDecreaseExposure;
- (BOOL)_accessibilityIncreaseExposure;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityLockFocus;
- (void)_axPostAnnoucement:(id)arg1;
- (void)_axSetAccessibilityCustomActions;
- (BOOL)_axSetExposureValue:(float)arg1;
- (void)_axSetNoCustomActions;
- (void)_axShowFocusInCenterIfNotShowing;
- (void)_filterButtonTapped:(id)arg1;
- (void)_reallyToggleCamera;
- (void)_resetZoom;
- (void)_setReviewingImagePickerCapture:(BOOL)arg1 updateUI:(BOOL)arg2;
- (BOOL)_shouldHideZoomSliderForMode:(long long)arg1;
- (void)_stopCapturingPanorama;
- (void)_toggleCameraButtonWasPressed:(id)arg1;
- (void)_updateOverlayControlsAccessibility;
- (BOOL)_zoomIsAllowed;
- (BOOL)accessibilityPerformMagicTap;
- (void)dealloc;
- (void)hideZoomSlider;
- (void)showZoomSlider;

@end
