//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AXIPCClient, AXIPCServer, NSMutableArray, _AXAssertionServer;
@protocol AXSpringBoardServerInstanceDelegate;

@interface _AXSpringBoardServerInstance : NSObject
{
    AXIPCServer *_server;
    AXIPCClient *_client;
    id<AXSpringBoardServerInstanceDelegate> _delegate;
    NSMutableArray *_actionHandlers;
    NSMutableArray *_reachabilityHandlers;
    AXIPCClient *_currentSpeakerClient;
    BOOL _disableNotificationCenterAssertionHeld;
    BOOL _disableControlCenterAssertionHeld;
    _AXAssertionServer *_assertionServer;
}

@property (strong, nonatomic) _AXAssertionServer *assertionServer; // @synthesize assertionServer=_assertionServer;
@property (nonatomic) id<AXSpringBoardServerInstanceDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL disableControlCenterAssertionHeld; // @synthesize disableControlCenterAssertionHeld=_disableControlCenterAssertionHeld;
@property (nonatomic) BOOL disableNotificationCenterAssertionHeld; // @synthesize disableNotificationCenterAssertionHeld=_disableNotificationCenterAssertionHeld;

+ (id)springBoardServerInstance;
+ (id)springBoardServerInstanceIfExists;
- (id)_actionHandling:(id)arg1;
- (id)_allowedMedusaGestures:(id)arg1;
- (id)_areSystemGesturesDisabledByAccessibility:(id)arg1;
- (id)_areSystemGesturesDisabledNatively:(id)arg1;
- (id)_cancelGestureActivation:(id)arg1;
- (id)_copyStringToPasteboard:(id)arg1;
- (id)_dismissAppSwitcher:(id)arg1;
- (id)_dismissSiri:(id)arg1;
- (id)_getActiveInterfaceOrientation:(id)arg1;
- (id)_getApplicationOrientation:(id)arg1;
- (id)_getPid:(id)arg1;
- (id)_handleAcquireAssertion:(id)arg1;
- (id)_handleBackboardSnarfedMenuDown:(id)arg1;
- (id)_handleCancelReachabilityTimer:(id)arg1;
- (id)_handleGetFocusedAppPID:(id)arg1;
- (id)_handleGetFocusedApps:(id)arg1;
- (id)_handleGetPurpleBuddyPID:(id)arg1;
- (id)_handleGetRunningAppPIDs:(id)arg1;
- (id)_handleInstalledApps:(id)arg1;
- (id)_handleIsInspectorMinimized:(id)arg1;
- (id)_handleIsMultitaskingActive:(id)arg1;
- (id)_handleIsPurpleBuddyAppFrontmost:(id)arg1;
- (id)_handleIsSettingsAppFrontmost:(id)arg1;
- (id)_handleIsSystemAppFrontmost:(id)arg1;
- (id)_handleIsSystemAppShowingAnAlert:(id)arg1;
- (id)_handleRelinquishAssertion:(id)arg1;
- (id)_handleRevealSpotlight:(id)arg1;
- (id)_handleSpringBoardInfoQuery:(id)arg1;
- (id)_handleToggleIncomingCall:(id)arg1;
- (id)_hasActiveCall:(id)arg1;
- (id)_hasActiveOrPendingCall:(id)arg1;
- (id)_hasActiveOrPendingCallOrFaceTime:(id)arg1;
- (id)_hideAlert:(id)arg1;
- (id)_initServer;
- (void)_initializeHandlers;
- (id)_isAppSwitcherVisible:(id)arg1;
- (id)_isControlCenterVisible:(id)arg1;
- (id)_isMakingEmergencyCall:(id)arg1;
- (id)_isMediaPlaying:(id)arg1;
- (id)_isNotificationCenterVisible:(id)arg1;
- (id)_isOrientationLocked:(id)arg1;
- (id)_isPointInAXInspector:(id)arg1;
- (id)_isRingerMuted:(id)arg1;
- (id)_isSideSwitchUsedForOrientation:(id)arg1;
- (id)_isSideSwitcherVisible:(id)arg1;
- (id)_isSiriTalkingOrListening:(id)arg1;
- (id)_isSiriVisible:(id)arg1;
- (id)_isSpeakThisTemporarilyDisabled:(id)arg1;
- (id)_isSyncingRestoringResettingOrUpdating:(id)arg1;
- (id)_isSystemSleeping:(id)arg1;
- (id)_isVoiceControlRunning:(id)arg1;
- (id)_openAppSwitcher:(id)arg1;
- (id)_openCustomGestureCreationForAST:(id)arg1;
- (id)_openCustomGestureCreationForSCAT:(id)arg1;
- (id)_openSiri:(id)arg1;
- (id)_openVoiceControl:(id)arg1;
- (id)_pauseMedia:(id)arg1;
- (id)_performMedusaGesture:(id)arg1;
- (void)_performValidation;
- (void)_proximityDidChange:(id)arg1;
- (id)_reachabilityActive:(id)arg1;
- (id)_reachabilityHandling:(id)arg1;
- (id)_reachabilityOffset:(id)arg1;
- (void)_registerServerAndNotifyClients;
- (void)_removeActionHandler:(unsigned int)arg1;
- (void)_removeReachabilityHandler:(unsigned int)arg1;
- (id)_resetDimTimer:(id)arg1;
- (id)_resumeMedia:(id)arg1;
- (id)_screenLocked:(id)arg1;
- (void)_setAVCallRoute:(id)arg1;
- (BOOL)_setCallRoute:(int)arg1 ifCurrentlyRoutedTo:(id)arg2;
- (id)_setOrientationLocked:(id)arg1;
- (id)_setSiriIsTalking:(id)arg1;
- (id)_setSpeechPlaybackControls:(id)arg1;
- (void)_setSystemGesturesEnabled:(BOOL)arg1;
- (void)_setupAssertionServerIfNeeded;
- (id)_showAlert:(id)arg1;
- (id)_showControlCenter:(id)arg1;
- (id)_showNotificationCenter:(id)arg1;
- (void)_springBoardFinishedLaunching:(id)arg1;
- (id)_startHearingAidServer:(id)arg1;
- (id)_takeScreenshot:(id)arg1;
- (id)_toggleHearingControl:(id)arg1;
- (id)_toggleNotificationCenter:(id)arg1;
- (id)_topEventPidOverride:(id)arg1;
- (id)_unlockDevice:(id)arg1;
- (id)_volumeLevel:(id)arg1;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)dealloc;
- (BOOL)hasActiveCall;
- (BOOL)hasActiveOrPendingCall;
- (BOOL)hasActiveOrPendingCallOrFaceTime;
- (id)init;
- (void)reachabilityToggledWithPayload:(id)arg1 synchronizationPort:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerHandlerForMessageKey:(int)arg1 target:(id)arg2 selector:(SEL)arg3 entitlements:(id)arg4;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)setSiriIsTalking:(BOOL)arg1;
- (BOOL)shouldBlockGestureActivation:(unsigned long long)arg1;
- (BOOL)shouldCancelSiriTouchActivationBlock;
- (BOOL)shouldSendReachabilityToggled;
- (void)springBoardActionOccurred:(long long)arg1;
- (void)springBoardActionOccurred:(long long)arg1 withPayload:(id)arg2;
- (void)userChangedRouteNotification:(id)arg1;

@end

