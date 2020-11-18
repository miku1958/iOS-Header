//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBButtonEventsHandler-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerCoordinating-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>
#import <SpringBoard/SBTransientOverlayViewControllerDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSNumber, NSString, SBAlertItemsController, SBAppStatusBarSettingsAssertion, SBBannerController, SBHomeGestureArbiter, SBHomeGestureParticipant, SBIdleTimerCoordinatorHelper, SBInAppStatusBarHiddenAssertion, SBLockStateAggregator, SBReachabilityManager, SBTransientOverlayViewController, UIScreen, UIStatusBarStyleRequest, UIWindow;
@protocol BSInvalidatable, CSExternalBehaviorProviding, SBIdleTimerCoordinating, SBTransientOverlayPresentationManagerDelegate;

@interface SBTransientOverlayPresentationManager : NSObject <SBHomeGestureParticipantDelegate, SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate, SBIdleTimerProviding, SBButtonEventsHandler>
{
    SBAlertItemsController *_alertItemsController;
    SBBannerController *_bannerController;
    id<BSInvalidatable> _bannerSuppressionAssertion;
    NSMutableArray *_contentStatusBarHiddenAssertions;
    id<CSExternalBehaviorProviding> _coverSheetExternalBehaviorProvider;
    id<BSInvalidatable> _deviceOrientationUpdateDeferralAssertion;
    NSMutableArray *_entities;
    NSMapTable *_entityToSceneDeactivationAssertion;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UIWindow *_initialPresentationKeyWindow;
    id<BSInvalidatable> _interactiveScreenshotGestureDisabledAssertion;
    BOOL _isInitiatingEntityPresentation;
    BOOL _isPendingAlertItems;
    BOOL _isReachabilityTemporarilyDisabled;
    SBLockStateAggregator *_lockStateAggregator;
    SBReachabilityManager *_reachabilityManager;
    UIScreen *_screen;
    SBAppStatusBarSettingsAssertion *_globalStatusBarAssertion;
    SBInAppStatusBarHiddenAssertion *_appStatusBarAssertion;
    BOOL _prefersStatusBarActivityItemVisible;
    NSNumber *_preferredWhitePointAdaptivityStyleValue;
    long long _topmostViewControllerInterfaceOrientation;
    id<SBTransientOverlayPresentationManagerDelegate> _delegate;
}

@property (strong, nonatomic) SBBannerController *bannerController; // @synthesize bannerController=_bannerController;
@property (readonly, nonatomic) BOOL canHandleButtonEvents;
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *currentStatusBarStyleRequest;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBTransientOverlayPresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActivePresentation;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly, nonatomic) BOOL hasVisibleStatusBar;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly, nonatomic) BOOL ownsHomeGesture;
@property (readonly, nonatomic) long long preferredGestureDismissalStyle;
@property (readonly, nonatomic) NSNumber *preferredWhitePointAdaptivityStyleValue; // @synthesize preferredWhitePointAdaptivityStyleValue=_preferredWhitePointAdaptivityStyleValue;
@property (readonly, nonatomic) BOOL prefersStatusBarActivityItemVisible; // @synthesize prefersStatusBarActivityItemVisible=_prefersStatusBarActivityItemVisible;
@property (readonly, nonatomic) long long presentedViewControllerCount;
@property (readonly, nonatomic) BOOL shouldDisableControlCenter;
@property (readonly, nonatomic) BOOL shouldDisableCoverSheet;
@property (readonly, nonatomic) BOOL shouldDisableSiri;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBTransientOverlayViewController *topmostPresentedViewController;
@property (readonly, nonatomic) long long topmostViewControllerInterfaceOrientation; // @synthesize topmostViewControllerInterfaceOrientation=_topmostViewControllerInterfaceOrientation;
@property (readonly, nonatomic) double topmostWindowLevel;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewControllerForGestureDismissal;

- (void).cxx_destruct;
- (void)_applyProximityDetectionModeForEntity:(id)arg1;
- (void)_applyWallpaperAnimationSuspensionAssertionForEntity:(id)arg1;
- (double)_backgroundWindowLevelForEntity:(id)arg1;
- (id)_buttonEventHandlingViewController;
- (id)_currentExternalStatusBarSettings;
- (void)_dismissEntity:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getContentScale:(double *)arg1 translation:(struct CGPoint *)arg2 forEntity:(id)arg3;
- (void)_invalidateAssertionsForEntity:(id)arg1;
- (BOOL)_isPresentationStatusBarHiddenForVisibility:(int)arg1 currentExternalStatusBarSettings:(id)arg2;
- (id)_newSceneDeactivationAssertionWithReason:(long long)arg1;
- (int)_preferredStatusBarVisibilityForEntity:(id)arg1;
- (id)_statusBarEntity;
- (id)_topmostPresentedEntity;
- (void)_updateBackgroundWindowForEntity:(id)arg1;
- (void)_updateContentStatusBarPresentation;
- (void)_updateDeactivationAssertions;
- (void)_updateFeaturePolicies;
- (void)_updateHomeGestureStateAnimated:(BOOL)arg1;
- (void)_updatePreferredWhitePointAdaptivityStyle;
- (void)_updateStatusBarWithCurrentExternalStatusBarSettings:(id)arg1 animated:(BOOL)arg2;
- (double)_windowLevelForEntity:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)dealloc;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
- (BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
- (BOOL)handleDoubleHeightStatusBarTap;
- (BOOL)handleHeadsetButtonPress:(BOOL)arg1;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleLockButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)hasPresentationAboveWindowLevel:(double)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)initWithScreen:(id)arg1 alertItemsController:(id)arg2 lockStateAggregator:(id)arg3 homeGestureArbiter:(id)arg4 reachabilityManager:(id)arg5;
- (BOOL)isPresentingViewController:(id)arg1;
- (BOOL)isTopmostPresentedViewController:(id)arg1;
- (id)newContentStatusBarHiddenAssertionWithReason:(id)arg1;
- (void)performDismissalRequest:(id)arg1;
- (void)performPresentationRequest:(id)arg1;
- (void)setFluidDismissalState:(id)arg1 forViewController:(id)arg2;
- (void)transientOverlayViewControllerDidEndRotation:(id)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2;

@end
