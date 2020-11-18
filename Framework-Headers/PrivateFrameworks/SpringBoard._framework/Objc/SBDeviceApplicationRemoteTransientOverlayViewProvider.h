//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

#import <SpringBoard/SBTransientOverlayViewControllerDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, SBDeviceApplicationRemoteTransientOverlayContainerViewController;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBTransientOverlayViewControllerDelegate>
{
    NSMutableArray *_activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController *_containerVC;
    NSMapTable *_keyboardFocusRedirectionsByRemoteVC;
    BOOL _needsDeactivationWithNoActiveTransientOverlays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (void)_dismissRemoteOverlayVC:(id)arg1;
- (void)_handleAppSwitcherWillPresent:(id)arg1;
- (void)_handleCoverSheetDidPresent:(id)arg1;
- (id)_realOverlayViewController;
- (void)dealloc;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
- (BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
- (void)dismissRemoteTransientOverlayViewController:(id)arg1;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (BOOL)isPresentingTransientOverlay:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (void)presentRemoteTransientOverlayViewController:(id)arg1 presentationTarget:(id)arg2;
- (BOOL)shouldFollowSceneOrientation;
- (unsigned long long)supportedInterfaceOrientations;
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
