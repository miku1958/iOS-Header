//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AXSpringBoardServerInstance/AXSpringBoardServerInstanceDelegate-Protocol.h>

@class AXAssertion, AXSpringBoardServerSideAppManager, NSMutableArray, NSString, UIAlertController, UIWindow;

@interface AXSpringBoardServerHelper : NSObject <AXSpringBoardServerInstanceDelegate>
{
    CDUnknownBlockType _alertHandler;
    UIWindow *_presentationWindow;
    NSMutableArray *_visibleTripleClickItems;
    BOOL _shouldOverrideInterfaceOrientation;
    NSMutableArray *_notificationObservers;
    UIAlertController *_alertControllerToDismissAfterPresentation;
    AXAssertion *_disableSystemGesturesAssertionForAlert;
    AXSpringBoardServerSideAppManager *_sideAppManager;
    UIAlertController *_zoomConflictController;
    UIAlertController *_zoomTripleClickController;
    UIAlertController *_zoomBuddyUsageController;
    UIAlertController *_switchUsageConfirmedController;
    UIAlertController *_voiceOverUsageConfirmedController;
    UIAlertController *_touchAccommodationsUsageConfirmedController;
    UIAlertController *_tripleClickAlertController;
    UIAlertController *_brokenHomeButtonAlertController;
}

@property (strong, nonatomic) UIAlertController *alertControllerToDismissAfterPresentation; // @synthesize alertControllerToDismissAfterPresentation=_alertControllerToDismissAfterPresentation;
@property (strong, nonatomic) UIAlertController *brokenHomeButtonAlertController; // @synthesize brokenHomeButtonAlertController=_brokenHomeButtonAlertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) AXAssertion *disableSystemGesturesAssertionForAlert; // @synthesize disableSystemGesturesAssertionForAlert=_disableSystemGesturesAssertionForAlert;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AXSpringBoardServerSideAppManager *sideAppManager; // @synthesize sideAppManager=_sideAppManager;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIAlertController *switchUsageConfirmedController; // @synthesize switchUsageConfirmedController=_switchUsageConfirmedController;
@property (strong, nonatomic) UIAlertController *touchAccommodationsUsageConfirmedController; // @synthesize touchAccommodationsUsageConfirmedController=_touchAccommodationsUsageConfirmedController;
@property (strong, nonatomic) UIAlertController *tripleClickAlertController; // @synthesize tripleClickAlertController=_tripleClickAlertController;
@property (strong, nonatomic) UIAlertController *voiceOverUsageConfirmedController; // @synthesize voiceOverUsageConfirmedController=_voiceOverUsageConfirmedController;
@property (strong, nonatomic) UIAlertController *zoomBuddyUsageController; // @synthesize zoomBuddyUsageController=_zoomBuddyUsageController;
@property (strong, nonatomic) UIAlertController *zoomConflictController; // @synthesize zoomConflictController=_zoomConflictController;
@property (strong, nonatomic) UIAlertController *zoomTripleClickController; // @synthesize zoomTripleClickController=_zoomTripleClickController;

+ (id)_applicationController;
+ (id)_assistantController;
+ (id)_awayController;
+ (id)_backlightController;
+ (id)_iconController;
+ (id)_lockScreenManager;
+ (id)_notificationCenterController;
+ (id)_syncController;
+ (id)_uiController;
+ (id)_wallpaperController;
+ (void)initialize;
+ (id)sharedServerHelper;
- (BOOL)_accessibilityAllowShowNotificationGestureOverride;
- (BOOL)_accessibilityHandleHomeOrLockButtonPress;
- (BOOL)_accessibilityIsUILocked;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg1;
- (void)_cleanupAlertController:(id)arg1;
- (void)_dismissAlertController:(id)arg1;
- (void)_displayAlertController:(id)arg1;
- (void)_handleAlertActionPress:(id)arg1 controller:(id)arg2;
- (void)_handleBrokenHomeButton;
- (void)_handleDisableBrightnessFiltersAlert:(id)arg1;
- (void)_handleSwitchUsageConfirmed;
- (void)_handleTouchAccommodationsUsageConfirmed;
- (void)_handleTripleClickAskAlert;
- (void)_handleUsageConfirmationDialogWithMessage:(id)arg1 storedController:(id *)arg2;
- (void)_handleVoiceOverUsageConfirmation;
- (void)_handleZoomConflictAlert:(id)arg1;
- (void)_handleZoomInBuddyAlert;
- (void)_handleZoomTripleClickAfterConflict;
- (void)_performValidation;
- (BOOL)_shouldShowTCOption:(int)arg1;
- (void)_sortVisibleItems;
- (id)_titleForTripleClickOption:(int)arg1;
- (void)_toggleTripleClickDisplay;
- (void)_unlockWithIntent:(int)arg1;
- (BOOL)_valueForTripleClickOption:(int)arg1;
- (id)_visibleTripleClickItems;
- (BOOL)accessibilityIsStickyNotificationVisible;
- (BOOL)accessibilityShowControlCenter:(BOOL)arg1;
- (BOOL)accessibilityShowNotificationCenter:(BOOL)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)allowedMedusaGesturesWithServerInstance:(id)arg1;
- (BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1;
- (BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1;
- (BOOL)clearSideAppStateWithServerInstance:(id)arg1;
- (id)dashBoardViewController;
- (void)dealloc;
- (void)dismissAlertWithCancel;
- (void)dismissAppSwitcherWithServerInstance:(id)arg1;
- (BOOL)dismissSiriWithServerInstance:(id)arg1;
- (id)focusedAppPIDWithServerInstance:(id)arg1;
- (id)focusedAppProcessWithServerInstance:(id)arg1;
- (id)focusedAppsWithServerInstance:(id)arg1;
- (void)forceLoadGAXBundleWithServerInstance:(id)arg1;
- (id)frontmostAppProcessWithServerInstance:(id)arg1;
- (BOOL)handleToggleIncomingCallWithServerInstance:(id)arg1;
- (BOOL)hasActiveCallWithServerInstance:(id)arg1;
- (BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg1;
- (BOOL)hasActiveOrPendingCallWithServerInstance:(id)arg1;
- (void)hideAlertWithServerInstance:(id)arg1;
- (id)init;
- (id)installedAppsWithServerInstance:(id)arg1;
- (BOOL)isAppSwitcherVisibleWithServerInstance:(id)arg1;
- (BOOL)isBuddyRunning;
- (BOOL)isControlCenterVisibleWithServerInstance:(id)arg1;
- (BOOL)isMagnifierVisibleWithServerInstance:(id)arg1;
- (BOOL)isMakingEmergencyCallWithServerInstance:(id)arg1;
- (BOOL)isMediaPlayingWithServerInstance:(id)arg1 forBundleId:(id)arg2;
- (BOOL)isMultiTaskingActive;
- (BOOL)isNotificationCenterVisibleWithServerInstance:(id)arg1;
- (BOOL)isOrientationLockedWithServerInstance:(id)arg1;
- (BOOL)isPasscodeLockVisible;
- (BOOL)isPasscodeRequiredOnLockWithServerInstance:(id)arg1;
- (BOOL)isPreferencesFrontmost;
- (BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg1;
- (BOOL)isRingerMutedWithServerInstance:(id)arg1;
- (BOOL)isScreenLockedWithServerInstance:(id)arg1;
- (BOOL)isSettingsAppFrontmostWithServerInstance:(id)arg1;
- (BOOL)isSideSwitchUsedForOrientationWithServerInstance:(id)arg1;
- (BOOL)isSideSwitcherVisibleWithServerInstance:(id)arg1;
- (BOOL)isSiriVisibleWithServerInstance:(id)arg1;
- (BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg1;
- (BOOL)isStickyNotificationVisibleWithServerInstance:(id)arg1;
- (BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1;
- (BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg1 withServerInstance:(id)arg2;
- (BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)arg1;
- (BOOL)isSystemSleepingWithServerInstance:(id)arg1;
- (BOOL)isVoiceControlRunningWithServerInstance:(id)arg1;
- (void)launchMagnifierAppWithServerInstance:(id)arg1;
- (void)openAppSwitcherWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForASTWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1;
- (BOOL)openSiriWithServerInstance:(id)arg1;
- (void)openVoiceControlWithServerInstance:(id)arg1;
- (int)purpleBuddyPIDWithServerInstance:(id)arg1;
- (double)reachabilityOffsetWithServerInstance:(id)arg1;
- (void)resetDimTimerWithServerInstance:(id)arg1;
- (void)revealSpotlightWithServerInstance:(id)arg1;
- (id)runningAppPIDsWithServerInstance:(id)arg1;
- (id)runningAppProcessesWithServerInstance:(id)arg1;
- (id)serverInstance:(id)arg1 appWithIdentifier:(id)arg2;
- (void)serverInstance:(id)arg1 pauseMedia:(BOOL)arg2 forBundleId:(id)arg3;
- (BOOL)serverInstance:(id)arg1 performMedusaGesture:(unsigned long long)arg2;
- (void)serverInstance:(id)arg1 setOrientationLocked:(BOOL)arg2;
- (void)serverInstance:(id)arg1 showAlertType:(long long)arg2 withHandler:(CDUnknownBlockType)arg3 withData:(id)arg4;
- (void)serverInstance:(id)arg1 showControlCenter:(BOOL)arg2;
- (BOOL)serverInstance:(id)arg1 showNotificationCenter:(BOOL)arg2;
- (void)serverInstance:(id)arg1 showSpeechPlaybackControls:(BOOL)arg2;
- (id)serverInstance:(id)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2;
- (void)setDashBoardSystemGesturesEnabled:(BOOL)arg1 withServerInstance:(id)arg2;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1 withServerInstance:(id)arg2;
- (void)setReachabilityActive:(BOOL)arg1;
- (void)setSiriIsTalking:(BOOL)arg1 withServerInstance:(id)arg2;
- (BOOL)shouldOverrideInterfaceOrientation;
- (void)simulateEdgePressHaptics:(id)arg1;
- (void)toggleNotificationCenterWithServerInstance:(id)arg1;
- (void)unlockDeviceWithServerInstance:(id)arg1;
- (void)userEventOccurredWithServerInstance:(id)arg1;
- (double)volumeLevelWithServerInstance:(id)arg1;
- (void)wakeUpDeviceIfNecessaryWithServerInstance:(id)arg1;

@end

