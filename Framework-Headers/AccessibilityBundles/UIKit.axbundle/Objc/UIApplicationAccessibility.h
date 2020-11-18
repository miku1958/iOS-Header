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
- (id)_accessibilityActiveDictationUIKeyboard;
- (BOOL)_accessibilityAllowsNotificationsDuringSuspension;
- (int)_accessibilityApplicationForPosition:(struct CGPoint)arg1;
- (int)_accessibilityApplicationInterfaceOrientation;
- (id)_accessibilityApplicationSemanticContextWithViewController:(id)arg1;
- (id)_accessibilityAuditIssuesWithOptions:(id)arg1;
- (BOOL)_accessibilityBeginMonitoringIdleRunLoop;
- (id)_accessibilityBundleIdentifier;
- (BOOL)_accessibilityCancelRewindOrFastForward;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect)arg1;
- (id)_accessibilityCurrentHardwareKeyboardLayout;
- (id)_accessibilityCurrentSoftwareKeyboardLayout;
- (id)_accessibilityCurrentSoftwareLanguage;
- (BOOL)_accessibilityDictationIsAvailable;
- (BOOL)_accessibilityDictationIsListening;
- (BOOL)_accessibilityDispatchKeyboardAction:(id)arg1;
- (BOOL)_accessibilityElementBelongsToKeyboardWindow:(id)arg1;
- (id)_accessibilityElementCommunityIdentifier;
- (id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3;
- (id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3 allowScrolling:(BOOL)arg4;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (id)_accessibilityElementsWithSemanticContext:(id)arg1;
- (id)_accessibilityExplorerElements;
- (id)_accessibilityFirstElement;
- (id)_accessibilityFirstElementForFocus;
- (unsigned int)_accessibilityGetLastMediaRemoteCommand;
- (BOOL)_accessibilityHardwareKeyboardActive;
- (void)_accessibilityInitialize;
- (BOOL)_accessibilityIsTappingMediaLegibilityEvents;
- (id)_accessibilityIsolatedWindows;
- (void)_accessibilityKeyboardDidHide:(id)arg1;
- (void)_accessibilityKeyboardDidShow:(id)arg1;
- (double)_accessibilityLastDictationMagicTapTime;
- (id)_accessibilityLastElement;
- (unsigned int)_accessibilityMachPort;
- (id)_accessibilityMainWindow;
- (BOOL)_accessibilityMediaFastForward;
- (BOOL)_accessibilityMediaNextTrack;
- (BOOL)_accessibilityMediaPause;
- (BOOL)_accessibilityMediaPlay;
- (BOOL)_accessibilityMediaPlayPause;
- (BOOL)_accessibilityMediaPreviousTrack;
- (BOOL)_accessibilityMediaRewind;
- (BOOL)_accessibilityMediaSkipDuration:(id)arg1;
- (BOOL)_accessibilityMediaStop;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_accessibilityNativeFocusableElements:(id)arg1;
- (long long)_accessibilityOrientationForCompareGeometry;
- (BOOL)_accessibilityOverrideStartStopExtraExtras;
- (id)_accessibilityPreviewWindow;
- (id)_accessibilityRealtimeElements;
- (void)_accessibilityRegisterForDictationLifecycleNotifications;
- (id)_accessibilityResponderElement;
- (id)_accessibilityResponderElement:(BOOL)arg1;
- (id)_accessibilityResponderElementForFocus;
- (id)_accessibilitySemanticContext;
- (void)_accessibilitySetAllowsNotificationsDuringSuspension:(BOOL)arg1;
- (void)_accessibilitySetLastMediaRemoteCommand:(unsigned int)arg1;
- (void)_accessibilityShowKeyboardHints;
- (struct CGRect)_accessibilitySoftwareKeyboardAccessibilityFrame;
- (BOOL)_accessibilitySoftwareKeyboardActive;
- (BOOL)_accessibilitySoftwareKeyboardCoversElement:(id)arg1;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (id)_accessibilitySpeakThisViewController;
- (BOOL)_accessibilityStartStopDictation;
- (id)_accessibilitySummaryElement;
- (id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (id)_accessibilityTitleBarElement;
- (id)_accessibilityTypingCandidates;
- (id)_accessibilityUIWindowFindWithGlobalPoint:(struct CGPoint)arg1;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityValidateResponderForFocus:(id)arg1;
- (id)_accessibilityValidatedResponderForExistingGoodResponder:(id)arg1 forFocus:(BOOL)arg2;
- (id)_accessibilityWindows;
- (id)_axAllSubviews;
- (id)_axAuditCheckDynamicTextSupport:(BOOL)arg1 andClippingIssues:(BOOL)arg2 spinRunloop:(BOOL)arg3;
- (id)_axSubviews;
- (id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2 focus:(BOOL)arg3 allowScrolling:(BOOL)arg4;
- (void)_finishButtonEvent:(id)arg1;
- (id)_firstStatusBarElement;
- (id)_lastStatusBarElement;
- (void)_loadAllAccessibilityInformation;
- (id)accessibilityAttributeValue:(long long)arg1;
- (void)accessibilityDisable;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (BOOL)accessibilityStartStopToggle;
- (BOOL)contextKitSearchEnabled;
- (void)dealloc;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)openURL:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)setContextKitSearchEnabled:(BOOL)arg1;

@end
