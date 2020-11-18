//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateObserver-Protocol.h>
#import <SpringBoard/SBIdleTimerCoordinating-Protocol.h>

@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBIdleTimerCoordinatorHelper, SBInCallSettings, SBSUIInCallSceneClientSettingsDiffInspector, UIView, _SBInCallProxySceneBackgroundView;
@protocol SBApplicationSceneBackgroundView, SBInCallTransientOverlayViewControllerDelegate;

@interface SBInCallTransientOverlayViewController : SBTransientOverlayViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable>
{
    UIView<SBApplicationSceneBackgroundView> *_existingSceneBackgroundView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    _SBInCallProxySceneBackgroundView *_proxySceneBackgroundView;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBInCallSettings *_settings;
    BOOL _shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    id<SBInCallTransientOverlayViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBInCallTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property (nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings; // @synthesize shouldIgnoreHomeIndicatorAutoHiddenClientSettings=_shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_inCallSceneClientSettingsDiffInspector;
- (BOOL)allowsStackingOverlayContentAbove;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)dealloc;
- (void)handleGestureDismissal;
- (BOOL)handleHeadsetButtonPress:(BOOL)arg1;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleLockButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)initWithSceneHandle:(id)arg1;
- (void)invalidate;
- (BOOL)isContentOpaque;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredStatusBarStyle;
- (int)preferredStatusBarStyleOverridesToCancel;
- (long long)preferredUnlockedGestureDismissalStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (CDUnknownBlockType)sceneDeactivationPredicate;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (int)serviceProcessIdentifier;
- (void)setContainerOrientation:(long long)arg1;
- (void)setIdleTimerCoordinator:(id)arg1;
- (BOOL)shouldUseSceneBasedKeyboardFocus;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
