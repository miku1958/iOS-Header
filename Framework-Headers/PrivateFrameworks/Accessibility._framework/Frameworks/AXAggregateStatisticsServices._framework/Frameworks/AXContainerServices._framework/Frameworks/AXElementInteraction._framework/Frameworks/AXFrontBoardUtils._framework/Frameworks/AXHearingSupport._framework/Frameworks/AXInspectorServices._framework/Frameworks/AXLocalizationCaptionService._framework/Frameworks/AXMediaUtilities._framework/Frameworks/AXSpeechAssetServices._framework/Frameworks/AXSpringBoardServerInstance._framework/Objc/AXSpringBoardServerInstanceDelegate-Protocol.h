//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXSpringBoardServerInstance/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, _AXSpringBoardServerInstance;

@protocol AXSpringBoardServerInstanceDelegate <NSObject>
- (void)activateSOSModeWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSArray *)allowedMedusaGesturesWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)clearSideAppStateWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)dismissAppSwitcherWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)dismissSiriWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSNumber *)focusedAppPIDWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (id)focusedAppProcessWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSArray *)focusedAppsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)forceLoadGAXBundleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)handleToggleIncomingCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)hasActiveCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)hasActiveOrPendingCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)hideAlertWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSDictionary *)installedAppsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isAppSwitcherVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isControlCenterVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isMagnifierVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isMakingEmergencyCallWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isMediaPlayingWithServerInstance:(_AXSpringBoardServerInstance *)arg1 forBundleId:(NSString *)arg2;
- (BOOL)isMultiTaskingActive;
- (BOOL)isNotificationCenterVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isNotificationVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isOrientationLockedWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isPasscodeRequiredOnLockWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isRingerMutedWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isScreenLockedWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSettingsAppFrontmostWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSideSwitchUsedForOrientationWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSideSwitcherVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSiriVisibleWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg1 withServerInstance:(_AXSpringBoardServerInstance *)arg2;
- (BOOL)isSystemAppShowingAnAlertWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isSystemSleepingWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)isVoiceControlRunningWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)launchMagnifierAppWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openAppSwitcherWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openCustomGestureCreationForASTWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openCustomGestureCreationForSCATWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (BOOL)openSiriWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)openVoiceControlWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (int)purpleBuddyPIDWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (double)reachabilityOffsetWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)resetDimTimerWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)revealSpotlightWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSArray *)runningAppPIDsWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (NSArray *)runningAppProcessesWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (id)serverInstance:(_AXSpringBoardServerInstance *)arg1 appWithIdentifier:(NSString *)arg2;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 pauseMedia:(BOOL)arg2 forBundleId:(NSString *)arg3;
- (BOOL)serverInstance:(_AXSpringBoardServerInstance *)arg1 performMedusaGesture:(unsigned long long)arg2;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 setOrientationLocked:(BOOL)arg2;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 showAlertType:(long long)arg2 withHandler:(void (^)(long long))arg3 withData:(id)arg4;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 showControlCenter:(BOOL)arg2;
- (BOOL)serverInstance:(_AXSpringBoardServerInstance *)arg1 showNotificationCenter:(BOOL)arg2;
- (void)serverInstance:(_AXSpringBoardServerInstance *)arg1 showSpeechPlaybackControls:(BOOL)arg2;
- (NSDictionary *)serverInstance:(_AXSpringBoardServerInstance *)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2;
- (void)setDashBoardSystemGesturesEnabled:(BOOL)arg1 withServerInstance:(_AXSpringBoardServerInstance *)arg2;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1 withServerInstance:(_AXSpringBoardServerInstance *)arg2;
- (void)setReachabilityActive:(BOOL)arg1;
- (void)setSiriIsTalking:(BOOL)arg1 withServerInstance:(_AXSpringBoardServerInstance *)arg2;
- (void)simulateEdgePressHaptics:(_AXSpringBoardServerInstance *)arg1;
- (void)toggleNotificationCenterWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)unlockDeviceWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)userEventOccurredWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (double)volumeLevelWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
- (void)wakeUpDeviceIfNecessaryWithServerInstance:(_AXSpringBoardServerInstance *)arg1;
@end

