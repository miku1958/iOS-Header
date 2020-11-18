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
    UIAlertController *_zoomConflictController;
    UIAlertController *_zoomTripleClickController;
    UIAlertController *_zoomBuddyUsageController;
    UIAlertController *_switchUsageConfirmedController;
    UIAlertController *_voiceOverUsageConfirmedController;
    UIAlertController *_touchAccommodationsUsageConfirmedController;
    UIAlertController *_tripleClickAlertController;
    double _lastVoiceAssetUpdateTime;
    UIAlertController *_alertControllerToDismissAfterPresentation;
    AXAssertion *_disableSystemGesturesAssertionForAlert;
    AXSpringBoardServerSideAppManager *_sideAppManager;
}

@property (strong, nonatomic) UIAlertController *alertControllerToDismissAfterPresentation; // @synthesize alertControllerToDismissAfterPresentation=_alertControllerToDismissAfterPresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) AXAssertion *disableSystemGesturesAssertionForAlert; // @synthesize disableSystemGesturesAssertionForAlert=_disableSystemGesturesAssertionForAlert;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AXSpringBoardServerSideAppManager *sideAppManager; // @synthesize sideAppManager=_sideAppManager;
@property (readonly) Class superclass;

+ (id)_applicationController;
+ (id)_assistantController;
+ (id)_awayController;
+ (id)_backlightController;
+ (id)_iconController;
+ (id)_lockController;
+ (id)_lockScreenManager;
+ (id)_notificationCenterController;
+ (id)_syncController;
+ (id)_uiController;
+ (void)_updateAvailableSpeechAssets;
+ (id)_wallpaperController;
+ (void)initialize;
- (BOOL)_accessibilityAllowShowNotificationGestureOverride;
- (BOOL)_accessibilityIsUILocked;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg1;
- (void)_axOptionChanged:(id)arg1;
- (void)_checkClientForUpdates:(BOOL)arg1;
- (void)_checkForAssetUpdatesNowAndNextWeek;
- (void)_cleanupAlertController:(id)arg1;
- (void)_clientUpdateAvailableSpeechAssets;
- (void)_dismissAndReleaseAlertController:(id)arg1;
- (void)_displayAlertController:(id)arg1;
- (void)_handleAlertActionPress:(id)arg1 controller:(id)arg2;
- (void)_handleHomeOrLockButtonPress;
- (void)_handleSwitchUsageConfirmed;
- (void)_handleTouchAccommodationsUsageConfirmed;
- (void)_handleTripleClickAskAlert;
- (void)_handleUsageConfirmationDialogWithMessage:(id)arg1 storedController:(id *)arg2;
- (void)_handleVoiceOverUsageConfirmation;
- (void)_handleZoomConflictAlert:(id)arg1;
- (void)_handleZoomInBuddyAlert;
- (void)_handleZoomTripleClickAfterConflict;
- (void)_initializePassKitPrearmAccessibility;
- (void)_monitorSpeechAssetChanges;
- (void)_performValidation;
- (BOOL)_shouldShowTCOption:(int)arg1;
- (void)_sortVisibleItems;
- (id)_speechAssetUpdaterClient;
- (id)_titleForTripleClickOption:(int)arg1;
- (void)_toggleTripleClickDisplay;
- (BOOL)_valueForTripleClickOption:(int)arg1;
- (id)_visibleTripleClickItems;
- (BOOL)accessibilityShowControlCenter:(BOOL)arg1;
- (BOOL)accessibilityShowNotificationCenter:(BOOL)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)allowedMedusaGesturesWithServerInstance:(id)arg1;
- (BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1;
- (BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1;
- (void)backboardSnarfedMenuDownWithServerInstance:(id)arg1;
- (BOOL)clearSideAppStateWithServerInstance:(id)arg1;
- (void)dealloc;
- (void)dismissAlertWithCancel;
- (void)dismissAppSwitcherWithServerInstance:(id)arg1;
- (void)dismissSiriWithServerInstance:(id)arg1;
- (id)focusedAppPIDWithServerInstance:(id)arg1;
- (id)focusedAppProcessWithServerInstance:(id)arg1;
- (id)focusedAppsWithServerInstance:(id)arg1;
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
- (BOOL)isMakingEmergencyCallWithServerInstance:(id)arg1;
- (BOOL)isMediaPlayingWithServerInstance:(id)arg1 forBundleId:(id)arg2;
- (BOOL)isMultiTaskingActive;
- (BOOL)isNotificationCenterVisibleWithServerInstance:(id)arg1;
- (BOOL)isOrientationLockedWithServerInstance:(id)arg1;
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
- (BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1;
- (BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg1 withServerInstance:(id)arg2;
- (BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)arg1;
- (BOOL)isSystemSleepingWithServerInstance:(id)arg1;
- (BOOL)isVoiceControlRunningWithServerInstance:(id)arg1;
- (void)openAppSwitcherWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForASTWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1;
- (void)openSiriWithServerInstance:(id)arg1;
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
- (void)setReachabilityActive:(BOOL)arg1;
- (void)setSiriIsTalking:(BOOL)arg1 withServerInstance:(id)arg2;
- (BOOL)shouldOverrideInterfaceOrientation;
- (void)toggleNotificationCenterWithServerInstance:(id)arg1;
- (void)unlockDeviceWithServerInstance:(id)arg1;
- (double)volumeLevelWithServerInstance:(id)arg1;

@end

