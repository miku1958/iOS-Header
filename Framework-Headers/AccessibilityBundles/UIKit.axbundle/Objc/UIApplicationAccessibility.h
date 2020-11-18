//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIApplicationAccessibility_super.h>

@interface UIApplicationAccessibility : __UIApplicationAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityAVCaptureStarted:(id)arg1;
- (void)_accessibilityAVCaptureStopped:(id)arg1;
- (BOOL)_accessibilityActionIsPhysicalButton:(int)arg1 nativeUIKitTypeRef:(long long *)arg2;
- (BOOL)_accessibilityAllowsNotificationsDuringSuspension;
- (int)_accessibilityApplicationForPosition:(struct CGPoint)arg1;
- (id)_accessibilityApplicationSemanticContextWithViewController:(id)arg1;
- (BOOL)_accessibilityBeginMonitoringIdleRunLoop;
- (id)_accessibilityBundleIdentifier;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect)arg1;
- (id)_accessibilityCurrentHardwareKeyboardLayout;
- (id)_accessibilityCurrentSoftwareKeyboardLayout;
- (id)_accessibilityCurrentSoftwareLanguage;
- (BOOL)_accessibilityDictationIsListening;
- (BOOL)_accessibilityDispatchKeyboardAction:(id)arg1;
- (BOOL)_accessibilityElementBelongsToKeyboardWindow:(id)arg1;
- (id)_accessibilityElementCommunityIdentifier;
- (id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3;
- (id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3 allowScrolling:(BOOL)arg4;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (id)_accessibilityElementsWithSemanticContext;
- (id)_accessibilityExplorerElements;
- (id)_accessibilityFirstElement;
- (id)_accessibilityFirstElementForFocus;
- (void)_accessibilityFixPhysicalEvent:(id)arg1;
- (BOOL)_accessibilityHardwareKeyboardActive;
- (void)_accessibilityInitialize;
- (id)_accessibilityIsolatedWindows;
- (void)_accessibilityKeyboardDidHide:(id)arg1;
- (void)_accessibilityKeyboardDidShow:(id)arg1;
- (id)_accessibilityLastElement;
- (unsigned int)_accessibilityMachPort;
- (id)_accessibilityMainWindow;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_accessibilityNativeFocusableElements;
- (long long)_accessibilityOrientationForCompareGeometry;
- (BOOL)_accessibilityOverrideStartStopExtraExtras;
- (id)_accessibilityResponderElement;
- (id)_accessibilityResponderElement:(BOOL)arg1;
- (id)_accessibilityResponderElementForFocus;
- (id)_accessibilitySemanticContext;
- (void)_accessibilitySetAllowsNotificationsDuringSuspension:(BOOL)arg1;
- (void)_accessibilityShowKeyboardHints;
- (struct CGRect)_accessibilitySoftwareKeyboardAccessibilityFrame;
- (BOOL)_accessibilitySoftwareKeyboardActive;
- (BOOL)_accessibilitySoftwareKeyboardCoversElement:(id)arg1;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (id)_accessibilitySpeakThisViewController;
- (BOOL)_accessibilityStartStopDictation;
- (id)_accessibilitySummaryElement;
- (id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 andColumn:(long long)arg2;
- (id)_accessibilityTitleBarElement;
- (id)_accessibilityTypingCandidates;
- (id)_accessibilityUIWindowFindWithGlobalPoint:(struct CGPoint)arg1;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityValidateResponderForFocus:(id)arg1;
- (id)_accessibilityWindows;
- (id)_axAllSubviews;
- (id)_axSubviews;
- (id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2 focus:(BOOL)arg3 allowScrolling:(BOOL)arg4;
- (void)_finishButtonEvent:(id)arg1;
- (id)_firstStatusBarElement;
- (id)_lastStatusBarElement;
- (void)_loadAllAccessibilityInformation;
- (id)accessibilityAttributeValue:(int)arg1;
- (void)accessibilityDisable;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityStartStopToggle;
- (void)dealloc;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)openURL:(id)arg1;
- (void)sendEvent:(id)arg1;

@end
