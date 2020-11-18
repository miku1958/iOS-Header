//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWorkspace.h>

#import <SpringBoard/BSPowerMonitorObserver-Protocol.h>
#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/BSWatchdogDelegate-Protocol.h>
#import <SpringBoard/CCSModulePresentationEndpoint-Protocol.h>
#import <SpringBoard/FBApplicationProcessObserver-Protocol.h>
#import <SpringBoard/FBProcessManagerObserver-Protocol.h>
#import <SpringBoard/FBSceneManagerObserver-Protocol.h>
#import <SpringBoard/FBSystemServiceDelegate-Protocol.h>
#import <SpringBoard/MCProfileConnectionObserver-Protocol.h>
#import <SpringBoard/SBBacklightControllerObserver-Protocol.h>
#import <SpringBoard/SBControlCenterModuleTransientOverlayViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBPowerDownViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBTransientOverlayPresentationManagerDelegate-Protocol.h>

@class BSEventQueueLock, BSWatchdog, FBDisplayLayoutTransition, FBSceneManager, NSMutableDictionary, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBControlCenterModuleTransientOverlayViewController, SBHUDController, SBHomeGestureArbiter, SBHomeHardwareButtonLongPressDurationAssertion, SBIdleTimerCoordinatorHelper, SBInCallTransientOverlayManager, SBOrientationAggdLogger, SBPowerDownViewController, SBRingerControl, SBTransientOverlayPresentationManager, SBVolumeControl, SBWorkspaceKeyboardFocusController, SBWorkspaceTransaction;
@protocol SBIdleTimerCoordinating, SBIdleTimerProviding;

@interface SBMainWorkspace : SBWorkspace <BSTransactionObserver, SBBacklightControllerObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, MCProfileConnectionObserver, BSPowerMonitorObserver, SBPowerDownViewControllerDelegate, SBTransientOverlayPresentationManagerDelegate, CCSModulePresentationEndpoint, SBControlCenterModuleTransientOverlayViewControllerDelegate>
{
    BOOL _initialized;
    BSEventQueueLock *_suspensionLock;
    BOOL _medusaEnabled;
    SBOrientationAggdLogger *_orientationAggdLogger;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    SBWorkspaceTransaction *_currentTransaction;
    BSEventQueueLock *_currentTransactionLock;
    BSWatchdog *_transactionWatchdog;
    NSMutableDictionary *_extensionHandlersByType;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_activeSuspendedWorkspaceTransitions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBPowerDownViewController *_powerDownViewController;
    SBHomeHardwareButtonLongPressDurationAssertion *_powerDownLongPressDurationAssertion;
    SBControlCenterModuleTransientOverlayViewController *_presentedControlCenterModuleTransientOverlayViewController;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<SBIdleTimerProviding> _activeIdleTimerProvider;
    SBHUDController *_HUDController;
    SBVolumeControl *_volumeControl;
    SBRingerControl *_ringerControl;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBInCallTransientOverlayManager *_inCallTransientOverlayManager;
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    FBSceneManager *_sceneManager;
}

@property (readonly, nonatomic) SBHUDController *HUDController; // @synthesize HUDController=_HUDController;
@property (strong, nonatomic, getter=_activeIdleTimerProvider, setter=_setActiveIdleTimerProvider:) id<SBIdleTimerProviding> activeIdleTimerProvider; // @synthesize activeIdleTimerProvider=_activeIdleTimerProvider;
@property (strong, nonatomic) SBWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBHomeGestureArbiter *homeGestureArbiter; // @synthesize homeGestureArbiter=_homeGestureArbiter;
@property (strong, nonatomic) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly, nonatomic) SBInCallTransientOverlayManager *inCallTransientOverlayManager; // @synthesize inCallTransientOverlayManager=_inCallTransientOverlayManager;
@property (readonly, nonatomic) SBWorkspaceKeyboardFocusController *keyboardFocusController;
@property (readonly, nonatomic, getter=isMedusaEnabled) BOOL medusaEnabled; // @synthesize medusaEnabled=_medusaEnabled;
@property (readonly, nonatomic, getter=isPowerDownTransientOverlayTopmost) BOOL powerDownTransientOverlayFrontmost;
@property (readonly, nonatomic) SBRingerControl *ringerControl; // @synthesize ringerControl=_ringerControl;
@property (readonly, nonatomic) FBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property (readonly, nonatomic, getter=isSpringBoardActive) BOOL springBoardActive;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBTransientOverlayPresentationManager *transientOverlayPresentationManager; // @synthesize transientOverlayPresentationManager=_transientOverlayPresentationManager;
@property (readonly, nonatomic) SBVolumeControl *volumeControl; // @synthesize volumeControl=_volumeControl;

+ (id)_instanceIfExists;
+ (id)_sharedInstanceWithNilCheckPolicy:(long long)arg1;
+ (id)debugDescription;
+ (id)sharedInstance;
+ (id)start;
- (void).cxx_destruct;
- (void)_addRequestCompletionBlock:(CDUnknownBlockType)arg1 toTransaction:(id)arg2;
- (void)_addStateCaptureHandlers;
- (void)_applicationEntityWasRemovedFromAppSwitcher:(id)arg1;
- (id)_applicationForIdentifier:(id)arg1;
- (BOOL)_applicationProcessExited:(id)arg1 withContext:(id)arg2;
- (void)_applyCommonActivationSettings:(id)arg1 forRequestWithOptions:(id)arg2 clientProcess:(id)arg3;
- (void)_attemptUnlockToApplication:(id)arg1 showPasscode:(BOOL)arg2 origin:(id)arg3 givenOrigin:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_broadcastCurrentTransaction;
- (BOOL)_canImplicitlyUnlockAtLockScreenWhileAuthenticatedFromOrigin:(id)arg1 givenOrigin:(id)arg2 trustedRequest:(BOOL)arg3 outReason:(id *)arg4;
- (void)_coversheetDidDismiss;
- (void)_coversheetDidPresent;
- (void)_destroyApplicationSceneEntity:(id)arg1;
- (void)_determineSourceForTransitionRequest:(id)arg1;
- (void)_dismissPresentedControlCenterModule:(CDUnknownBlockType)arg1;
- (BOOL)_executeApplicationTransitionRequest:(id)arg1;
- (void)_executeSuspendedTransactionForRequest:(id)arg1;
- (BOOL)_executeTransientOverlayTransitionRequest:(id)arg1;
- (BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(CDUnknownBlockType)arg3;
- (void)_finishInitialization;
- (id)_generateIdleTimerBehaviorForReason:(id)arg1;
- (void)_handleBuddyLaunchFinished;
- (void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (BOOL)_handleSetupExited:(id)arg1;
- (void)_handleTrustedOpenRequestForApplication:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)_handleUntrustedOpenRequestForApplication:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)_handleUserActionRequest:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (id)_handlerForExtensionPoint:(id)arg1;
- (void)_initializeAndObserveDefaults;
- (BOOL)_isApplicationRunningAsViewService:(id)arg1;
- (void)_noteDidWakeFromSleep;
- (BOOL)_preflightTransitionRequest:(id)arg1;
- (void)_proposeIdleTimerBehaviorForReason:(id)arg1;
- (void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)_removeApplicationEntities:(id)arg1 withDestroyalIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resume;
- (id)_selectTransactionForAppActivationRequest:(id)arg1;
- (id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg1;
- (id)_selectTransactionForAppEntityRemoved:(id)arg1;
- (id)_selectTransactionForAppRelaunch:(id)arg1;
- (id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 animated:(BOOL)arg2 forceToBuddy:(BOOL)arg3 withResult:(CDUnknownBlockType)arg4;
- (id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg1 fromApp:(id)arg2;
- (id)_selectTransactionForTransientOverlayPresentationRequest:(id)arg1;
- (BOOL)_setCurrentTransactionForRequest:(id)arg1 fallbackProvider:(CDUnknownBlockType)arg2;
- (void)_suspend;
- (id)_transactionForTransitionRequest:(id)arg1;
- (void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)_updateFrontMostApplicationEventPort;
- (void)_updateMedusaEnablementAndNotify:(BOOL)arg1;
- (id)_validateRequestToOpenApplication:(id)arg1 options:(id)arg2 origin:(id)arg3 error:(out id *)arg4;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
- (void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (id)bannerLongLookPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
- (BOOL)canExecuteTransitionRequest:(id)arg1;
- (void)controlCenterModuleTransientOverlayViewControllerNeedsDismissal:(id)arg1;
- (id)controlCenterPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2;
- (id)createRequestWithOptions:(unsigned long long)arg1;
- (id)currentStatusBarSettingsForTransientOverlayPresentationManager:(id)arg1;
- (void)dealloc;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayPresentationManager:(id)arg1;
- (BOOL)defaultShouldAutorotateForTransientOverlayPresentationManager:(id)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayPresentationManager:(id)arg1;
- (BOOL)dismissAllTransientOverlayPresentationsAnimated:(BOOL)arg1;
- (void)dismissPowerDownTransientOverlayWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)dismissTransientOverlayViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)executeTransitionRequest:(id)arg1;
- (BOOL)executeTransitionRequest:(id)arg1 withValidator:(CDUnknownBlockType)arg2;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)init;
- (id)initWithEventQueue:(id)arg1;
- (void)powerDownViewControllerDidDisappear:(id)arg1;
- (void)powerDownViewControllerRequestsDismissal:(id)arg1;
- (void)powerDownViewControllerRequestsPowerDown:(id)arg1;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)powerMonitorSystemSleepRequestAborted:(id)arg1;
- (void)powerMonitorSystemWillSleep:(id)arg1;
- (void)powerMonitorSystemWillWakeFromSleep:(id)arg1;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPowerDownTransientOverlay;
- (BOOL)presentTransientOverlayViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processDidExit:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (BOOL)requestTransitionWithBuilder:(CDUnknownBlockType)arg1;
- (BOOL)requestTransitionWithOptions:(unsigned long long)arg1 builder:(CDUnknownBlockType)arg2 validator:(CDUnknownBlockType)arg3;
- (id)siriPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg2;
- (id)systemServiceApplicationInfoProvider:(id)arg1;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2;
- (void)systemServicePrepareForShutdown:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)transactionDidComplete:(id)arg1;
- (id)transactionForTransitionRequest:(id)arg1;
- (id)transientOverlayPresentationManager:(id)arg1 acquireBannerLongLookWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
- (id)transientOverlayPresentationManager:(id)arg1 acquireControlCenterWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
- (id)transientOverlayPresentationManager:(id)arg1 acquireDeviceOrientationUpdateDeferralAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireDisableAutoUnlockAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireHideAppStatusBarAssertionWithReason:(id)arg2 animated:(BOOL)arg3;
- (id)transientOverlayPresentationManager:(id)arg1 acquireInteractiveScreenshotGestureDisabledAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireProximitySensorEnabledAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireSiriWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
- (id)transientOverlayPresentationManager:(id)arg1 acquireWallpaperAnimationSuspensionAssertionWithReason:(id)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 didDismissViewController:(id)arg2 wasTopmostPresentation:(BOOL)arg3;
- (id)transientOverlayPresentationManager:(id)arg1 newSceneDeactivationAssertionWithReason:(long long)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 preferredWhitePointAdaptivityStyleDidChangeWithAnimationSettings:(id)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 registerCoverSheetExternalBehaviorProvider:(id)arg2;
- (BOOL)transientOverlayPresentationManager:(id)arg1 shouldResignFirstResponderForKeyWindow:(id)arg2;
- (BOOL)transientOverlayPresentationManager:(id)arg1 shouldRestoreFirstResponderForKeyWindow:(id)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 unregisterCoverSheetExternalBehaviorProvider:(id)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 willChangeTopmostViewControllerInterfaceOrientationToOrientation:(long long)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 willPresentViewController:(id)arg2;
- (void)transientOverlayPresentationManagerRequestsAppIconForceTouchDismissal:(id)arg1 animated:(BOOL)arg2;
- (void)transientOverlayPresentationManagerRequestsBannerLongLookDismissal:(id)arg1 animated:(BOOL)arg2;
- (void)transientOverlayPresentationManagerRequestsControlCenterDismissal:(id)arg1 animated:(BOOL)arg2;
- (void)transientOverlayPresentationManagerRequestsSiriDismissal:(id)arg1 animated:(BOOL)arg2;
- (void)updateFrontMostApplicationEventPort;
- (void)watchdogFired:(id)arg1;
- (void)watchdogStarted:(id)arg1;

@end
