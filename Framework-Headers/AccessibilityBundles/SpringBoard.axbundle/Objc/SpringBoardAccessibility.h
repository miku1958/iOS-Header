//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SpringBoardAccessibility_super.h"

@interface SpringBoardAccessibility : __SpringBoardAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)__accessibilityUpdateSpeakScreenGestureRecognizer;
- (id)_accessibilityAppSwitcherApps;
- (int)_accessibilityApplicationOrientation;
- (BOOL)_accessibilityAssistantIsListening;
- (id)_accessibilityCenterPointOfScreen;
- (int)_accessibilityCurrentCallState;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (void)_accessibilityHandleOrientationChange;
- (void)_accessibilityHandleSpeakScreenGesture:(id)arg1;
- (BOOL)_accessibilityHitTestsStatusBar;
- (BOOL)_accessibilityIsAppReadyToBeProbed;
- (BOOL)_accessibilityIsAppSwitcherVisible;
- (BOOL)_accessibilityIsBatteryLow;
- (BOOL)_accessibilityIsBuddyRunning;
- (BOOL)_accessibilityIsQuietModeEnabled;
- (BOOL)_accessibilityIsSystemAppServer;
- (BOOL)_accessibilityIsSystemLocked;
- (BOOL)_accessibilityIsSystemSleeping;
- (BOOL)_accessibilityIsVoiceControlRunning;
- (id)_accessibilityLaunchableApps;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityLoadPIPInfo;
- (id)_accessibilityPictureInPictureWindow;
- (void)_accessibilitySetShouldCallAXStatusChangedOnAppLaunchFinish:(BOOL)arg1;
- (void)_accessibilitySetShouldLoadAXInfoOnAppLaunchFinish:(BOOL)arg1;
- (void)_accessibilitySetSpeakScreenGestureRecognizer:(id)arg1;
- (BOOL)_accessibilityShouldCallAXStatusChangedOnAppLaunchFinish;
- (BOOL)_accessibilityShouldLoadAXInfoOnAppLaunchFinish;
- (id)_accessibilitySideAppDividerElement;
- (id)_accessibilitySoftwareMimicKeyboard;
- (id)_accessibilitySpeakScreenGestureRecognizer;
- (id)_accessibilityStatusBar;
- (void)_accessibilityStatusChanged:(id)arg1;
- (BOOL)_accessibilitySystemAppServerIsReady;
- (BOOL)_accessibilitySystemWideGestureInProgress;
- (void)_accessibilityUpdateSpeakScreenGestureRecognizer;
- (BOOL)_isDim;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;
- (void)_proximityChanged:(id)arg1;
- (void)_updateRingerState:(int)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3;
- (id)accessibilityAttributeValue:(int)arg1;
- (void)accessibilityDisable;
- (void)accessibilityInitialize;
- (BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (BOOL)accessibilityStartStopToggle;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)handleDoubleHeightStatusBarTap:(long long)arg1;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4 logMessage:(id)arg5;
- (void)powerDownRequested:(id)arg1;
- (void)restartManagerWillReboot:(id)arg1;

@end

