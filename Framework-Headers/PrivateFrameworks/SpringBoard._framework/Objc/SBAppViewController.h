//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBApplicationHosting-Protocol.h>
#import <SpringBoard/SBApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>

@class NSMutableSet, NSSet, NSString, SBActivationSettings, SBApplicationSceneView, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBSceneHandle, UIView;
@protocol SBAppViewControllerDelegate, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBAppViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBApplicationHosting, SBApplicationSceneViewControlling, BSInvalidatable>
{
    NSString *_identifier;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBDeviceApplicationSceneViewController *_deviceAppViewController;
    SBActivationSettings *_activationSettings;
    id<SBScenePlaceholderContentContext> _placeholderContentContext;
    NSMutableSet *_activeTransitions;
    NSSet *_actionsToDeliver;
    long long _requestedMode;
    long long _currentMode;
    BOOL _sceneContentIsReady;
    BOOL _ignoresOcclusions;
    BOOL _invalidated;
    BOOL _automatesLifecycle;
    BOOL _placeholderContentEnabled;
    BOOL _wantsSecureRendering;
    id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
    id<SBAppViewControllerDelegate> _delegate;
    SBActivationSettings *_supplementalActivationSettings;
}

@property (strong, nonatomic) NSSet *actionsToDeliver; // @synthesize actionsToDeliver=_actionsToDeliver;
@property (readonly, nonatomic) SBApplicationSceneView *appView;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; // @synthesize applicationSceneStatusBarDelegate;
@property (nonatomic) BOOL automatesLifecycle; // @synthesize automatesLifecycle=_automatesLifecycle;
@property (readonly, nonatomic) long long contentInterfaceOrientation;
@property (readonly, nonatomic) struct CGSize contentReferenceSize;
@property (readonly, nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
@property (strong, nonatomic) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoresOcclusions; // @synthesize ignoresOcclusions=_ignoresOcclusions;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (strong, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext; // @synthesize placeholderContentContext=_placeholderContentContext;
@property (nonatomic) BOOL placeholderContentEnabled; // @synthesize placeholderContentEnabled=_placeholderContentEnabled;
@property (nonatomic) long long requestedMode; // @synthesize requestedMode=_requestedMode;
@property (readonly, nonatomic) SBSceneHandle *sceneHandle;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly) Class superclass;
@property (strong, nonatomic) SBActivationSettings *supplementalActivationSettings; // @synthesize supplementalActivationSettings=_supplementalActivationSettings;
@property (nonatomic) BOOL wantsSecureRendering; // @synthesize wantsSecureRendering=_wantsSecureRendering;

- (void).cxx_destruct;
- (void)_activateApp;
- (BOOL)_canShowWhileLocked;
- (id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2;
- (id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2;
- (void)_createSceneViewController;
- (void)_deactivateHostedApp;
- (void)_destroySceneViewController;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_sendActions:(id)arg1;
- (void)_setCurrentMode:(long long)arg1;
- (void)_transformHostedAppViewForRotationToOrientation:(long long)arg1;
- (void)_updateForAppearanceState:(int)arg1;
- (BOOL)canHostAnApp;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)dealloc;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2;
- (void)invalidate;
- (BOOL)isHostingAnApp;
- (id)newSnapshot;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
