//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXServer.h>

#import <AccessibilityUtilities/AXSystemAppServer-Protocol.h>

@class AXAccessQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface AXSpringBoardServer : AXServer <AXSystemAppServer>
{
    AXAccessQueue *_accessQueue;
    CDUnknownBlockType _currentAlertHandler;
    NSMutableArray *_actionHandlers;
    NSMutableDictionary *_reachabilityHandlers;
}

@property (strong, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) NSMutableArray *actionHandlers; // @synthesize actionHandlers=_actionHandlers;
@property (copy, nonatomic) CDUnknownBlockType currentAlertHandler; // @synthesize currentAlertHandler=_currentAlertHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *reachabilityHandlers; // @synthesize reachabilityHandlers=_reachabilityHandlers;
@property (readonly) Class superclass;

+ (id)server;
- (void).cxx_destruct;
- (id)_axSpringBoardServerInstance;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)_axSpringBoardServerInstanceIfExists;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (void)_getPasscodeStatusImmediate:(CDUnknownBlockType)arg1;
- (id)_handleActionResult:(id)arg1;
- (id)_handleReachabilityResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1;
- (void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_messageForMediaPlayingQueryForBundleID:(id)arg1;
- (id)_serviceName;
- (BOOL)_shouldDispatchLocally;
- (BOOL)_shouldValidateEntitlements;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)activateSOSMode;
- (int)activeApplicationOrientation;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientation:(CDUnknownBlockType)arg1;
- (id)allowedMedusaGestures;
- (id)applicationWithIdentifier:(id)arg1;
- (BOOL)areSystemGesturesDisabledByAccessibility;
- (BOOL)areSystemGesturesDisabledNatively;
- (void)armApplePay;
- (void)cancelReachabilityDetection;
- (void)cleanupAlertHandler;
- (void)copyStringToPasteboard:(id)arg1;
- (void)dismissAppSwitcher;
- (BOOL)dismissSiri;
- (id)focusedAppPID;
- (id)focusedAppProcess;
- (id)focusedApps;
- (BOOL)hasActiveCall;
- (BOOL)hasActiveEndpointCall;
- (BOOL)hasActiveOrPendingCall;
- (BOOL)hasActiveOrPendingCallOrFaceTime;
- (void)hideAlert;
- (void)hideNotificationCenter;
- (id)init;
- (id)installedApps;
- (BOOL)isAppSwitcherVisible;
- (BOOL)isControlCenterVisible;
- (BOOL)isDockVisible;
- (BOOL)isInspectorMinimized;
- (BOOL)isMagnifierVisible;
- (void)isMagnifierVisibleWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isMediaPlaying;
- (BOOL)isMediaPlayingForApp:(id)arg1;
- (void)isMediaPlayingForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isMultiTaskingActive;
- (BOOL)isNotificationCenterVisible;
- (BOOL)isNotificationVisible;
- (BOOL)isNowPlayingUIVisible;
- (BOOL)isOrientationLocked;
- (BOOL)isPasscodeLockVisible;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (BOOL)isPurpleBuddyAppFrontmost;
- (BOOL)isReceivingAirPlay;
- (BOOL)isRingerMuted;
- (BOOL)isScreenLockedWithPasscode:(BOOL *)arg1;
- (BOOL)isScreenSaverVisible;
- (BOOL)isSettingsAppFrontmost;
- (BOOL)isShowingHomescreen;
- (BOOL)isSideSwitchUsedForOrientation;
- (BOOL)isSiriTalkingOrListening;
- (BOOL)isSiriVisible;
- (BOOL)isSoftwareUpdateUIVisible;
- (BOOL)isSpeakThisTemporarilyDisabled;
- (BOOL)isSyncingRestoringResettingOrUpdating;
- (BOOL)isSystemAppFrontmost;
- (void)isSystemAppFrontmost:(CDUnknownBlockType)arg1;
- (BOOL)isSystemAppFrontmostExludingSiri;
- (BOOL)isSystemAppShowingAnAlert;
- (BOOL)isSystemSleeping;
- (void)isSystemSleeping:(CDUnknownBlockType)arg1;
- (BOOL)isVoiceControlRunning;
- (void)launchMagnifierApp;
- (BOOL)loadGAXBundleForUnmanagedASAM;
- (id)medusaApps;
- (void)openAppSwitcher;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openSCATCustomGestureCreation;
- (BOOL)openSiri;
- (void)openVoiceControl;
- (void)pauseMedia;
- (void)pauseMediaForApp:(id)arg1;
- (BOOL)performMedusaGesture:(unsigned long long)arg1;
- (int)pid;
- (void)pid:(CDUnknownBlockType)arg1;
- (int)purpleBuddyPID;
- (void)purpleBuddyPID:(CDUnknownBlockType)arg1;
- (double)reachabilityOffset;
- (void)rebootDevice;
- (void)registerReachabilityHandler:(CDUnknownBlockType)arg1 withIdentifierCallback:(CDUnknownBlockType)arg2;
- (void)registerSpringBoardActionHandler:(CDUnknownBlockType)arg1 withIdentifierCallback:(CDUnknownBlockType)arg2;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)removeReachabilityHandler:(id)arg1;
- (void)resetDimTimer;
- (void)resumeMedia;
- (void)resumeMediaForApp:(id)arg1;
- (void)revealSpotlight;
- (id)runningAppPIDs;
- (id)runningAppProcesses;
- (void)screenLockStatus:(CDUnknownBlockType)arg1;
- (void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(BOOL)arg2;
- (void)setHearingAidControlVisible:(BOOL)arg1;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1;
- (void)setOrientationLocked:(BOOL)arg1;
- (void)setReachabilityActive:(BOOL)arg1;
- (void)setReachabilityEnabled:(BOOL)arg1;
- (void)setShowSpeechPlaybackControls:(BOOL)arg1;
- (void)setSiriIsTalking:(BOOL)arg1;
- (void)setVolume:(double)arg1;
- (void)showAlert:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)showAlert:(long long)arg1 withHandler:(CDUnknownBlockType)arg2 withData:(id)arg3;
- (void)showControlCenter:(BOOL)arg1;
- (void)showNotificationCenter;
- (BOOL)showNotificationCenter:(BOOL)arg1;
- (void)simulateEdgePressHaptics;
- (void)startHearingAidServer;
- (void)systemAppInfoWithQuery:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)takeScreenshot;
- (void)toggleDock;
- (BOOL)toggleIncomingCall;
- (void)toggleNotificationCenter;
- (void)toggleReachability;
- (int)topEventPidOverride;
- (void)unlockDevice;
- (void)userEventOccurred;
- (double)volumeLevel;
- (void)wakeUpDeviceIfNecessary;

@end

