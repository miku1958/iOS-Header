//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIDimmingViewDelegate-Protocol.h>
#import <UIKitCore/_UIRemoteViewController_ViewControllerOperatorInterface-Protocol.h>

@class BKSTouchDeliveryPolicyAssertion, FBSDisplayIdentity, NSArray, NSError, NSString, UIAlertController, UIDimmingView, UIView, _UIAsyncInvocation, _UIRemoteView, _UIRemoteViewService, _UISheetPresentationControllerConfiguration, _UISizeTrackingView, _UITextEffectsRemoteView, _UITextServiceSession, _UIViewServiceInterface;
@protocol BSInvalidatable;

@interface _UIRemoteViewController : UIViewController <UIDimmingViewDelegate, _UIRemoteViewController_ViewControllerOperatorInterface>
{
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    _UIRemoteViewService *_remoteViewService;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    unsigned long long _serviceRegisteredScrollToTopViewCount;
    int _applicationDeactivationReason;
    BOOL _systemAppIsLocked;
    BOOL _observesLockNotifications;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UITextEffectsRemoteView *_remoteKeyboardRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    BOOL _snapshotTextEffectsAfterRotation;
    FBSDisplayIdentity *_serviceScreenDisplayIdentity;
    _UIAsyncInvocation *_terminationInvocation;
    struct os_unfair_lock_s _terminationErrorLock;
    NSError *_terminationError;
    _UITextServiceSession *_textServiceSession;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    long long _preferredStatusBarStyle;
    int _preferredStatusBarVisibility;
    long long _preferredStatusBarUpdateAnimation;
    id<BSInvalidatable> _eventFocusDeferralToken;
    BOOL _isFocusDeferred;
    NSString *_deferredDisplayUUID;
    unsigned int _deferredContextID;
    BOOL _focusWasDeferredBeforeDeactivation;
    BOOL _focusWasDeferredBeforeResignKey;
    CDUnknownBlockType _contextDidAttachFocusDeferralAction;
    CDUnknownBlockType _contextDidDetachFocusDeferralAction;
    NSArray *_allowedNotifications;
    NSArray *_sizeTrackingConstraints;
    BOOL _sizeTrackingViewShouldTranslateAutoResizeMaskIntoConstraints;
    int _sizeTrackingViewAutoResizeMask;
    struct CGSize _serviceScreenSize;
    UIView *_viewServiceTouchInterdictionView;
    UIAlertController *_proxiedEditAlertController;
    long long _proxiedEditAlertToken;
    long long _preferredAdaptivityStyle;
    unsigned long long _preferredScreenEdgesDeferringSystemGestures;
    BOOL _prefersHomeIndicatorAutoHidden;
    BOOL _prefersPointerLocked;
    NSArray *_multitaskingDragExclusionRects;
    BOOL _isUnderlappingStatusBar;
    BOOL __shouldUpdateRemoteTextEffectsWindow;
    long long _preferredUserInterfaceStyle;
    BOOL _isUpdatingSize;
    BOOL _isUpdatingSizeInHost;
    BOOL _serviceViewShouldShareTouchesWithHost;
    BOOL __viewClipsToBounds;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
    _UISheetPresentationControllerConfiguration *__sheetConfiguration;
}

@property (nonatomic, setter=_setIsUpdatingSize:) BOOL _isUpdatingSize; // @synthesize _isUpdatingSize;
@property (nonatomic, setter=_setIsUpdatingSizeInHost:) BOOL _isUpdatingSizeInHost; // @synthesize _isUpdatingSizeInHost;
@property (strong, nonatomic, setter=_setSheetConfiguration:) _UISheetPresentationControllerConfiguration *_sheetConfiguration; // @synthesize _sheetConfiguration=__sheetConfiguration;
@property (nonatomic, setter=_setShouldUpdateRemoteTextEffectsWindow:) BOOL _shouldUpdateRemoteTextEffectsWindow;
@property (strong, nonatomic, setter=_setTouchDeliveryPolicyAssertion:) BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion; // @synthesize _touchDeliveryPolicyAssertion;
@property (nonatomic, setter=_setViewClipsToBounds:) BOOL _viewClipsToBounds; // @synthesize _viewClipsToBounds=__viewClipsToBounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property (readonly, nonatomic) NSString *serviceBundleIdentifier;
@property (readonly, nonatomic) int serviceProcessIdentifier;
@property (nonatomic) BOOL serviceViewShouldShareTouchesWithHost; // @synthesize serviceViewShouldShareTouchesWithHost=_serviceViewShouldShareTouchesWithHost;
@property (readonly) Class superclass;

+ (BOOL)__shouldAllowHostProcessToTakeFocus;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+ (id)_requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 service:(id)arg4 connectionHandler:(CDUnknownBlockType)arg5;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (id)exportedInterface;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 connectionHandler:(CDUnknownBlockType)arg4;
+ (id)requestViewControllerWithService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
+ (id)requestViewControllerWithService:(id)arg1 traitCollection:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
- (void).cxx_destruct;
- (int)__automatic_invalidation_logic;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (long long)__getPreferredInterfaceOrientation;
- (void)__handleFocusMovementAction:(id)arg1;
- (BOOL)__interdictServiceViewTouches;
- (void)__setInterdictServiceViewTouches:(BOOL)arg1;
- (void)__setMediaOverridePID:(int)arg1;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(BOOL)arg2 canRedo:(BOOL)arg3;
- (void)__showServiceForText:(id)arg1 selectedTextRangeValue:(id)arg2 type:(long long)arg3 fromRectValue:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)__showServiceForType:(long long)arg1 withContext:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)__trampolineButtonPressData:(id)arg1 canceled:(BOOL)arg2;
- (void)__updateDeferralPropertiesForScreen:(id)arg1;
- (void)__viewServiceDidChangeKeyWindow:(BOOL)arg1;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidUpdateMultitaskingDragExclusionRects:(id)arg1;
- (void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(unsigned long long)arg1;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(id)arg4;
- (void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)arg1;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(id)arg2;
- (void)__viewServiceDidUpdatePrefersHomeIndicatorAutoHidden:(BOOL)arg1;
- (void)__viewServiceDidUpdatePrefersPointerLocked:(BOOL)arg1;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize)arg1 fence:(id)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize)arg1 animated:(BOOL)arg2 fence:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize)arg1 fence:(id)arg2;
- (void)__viewServiceSheetInteractionDidChangeOffset:(struct CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6;
- (void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)_addAutoAllowedNotifications:(id)arg1;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (id)_appearanceSource;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (void)_cancelProxiedEditAlertViewAnimated:(BOOL)arg1;
- (id)_cancelTouchesForCurrentEventInHostedContent;
- (id)_clientDeferralTarget;
- (void)_configureFocusDeferralForEnteringBackground;
- (void)_configureFocusDeferralForEnteringForeground;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)_endNoPresentingViewControllerAlertController:(id)arg1;
- (id)_fenceForSynchronizedDrawing;
- (void)_firstResponderDidChange:(id)arg1;
- (id)_hostDeferralPredicate;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostSceneDidEnterBackground:(id)arg1;
- (void)_hostSceneWillEnterForeground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (BOOL)_ignoreAppSupportedOrientations;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (void)_initializeAccessibilityPortInformation;
- (BOOL)_isDeallocating;
- (id)_multitaskingDragExclusionRects;
- (BOOL)_needsUnderflowPropertyUpdate;
- (void)_noteWindowState:(BOOL)arg1;
- (int)_preferredStatusBarVisibility;
- (void)_prepareTouchDeliveryPolicy;
- (void)_removeTextEffectsRemoteViews;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_restoreTextEffectsRemoteView;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidUpdate:(id)arg1;
- (void)_screenIDChanged:(id)arg1;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)_serviceHasScrollToTopView;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)_setDeferred:(BOOL)arg1 forDisplayUUID:(id)arg2;
- (void)_setSecurityModeForViewsLayer;
- (id)_sheetPresentationController;
- (BOOL)_shouldDeferEventsForFocusOnScreen:(id)arg1;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_systemApplicationDidUnlock:(id)arg1;
- (void)_systemApplicationWillLock:(id)arg1;
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_terminateWithError:(id)arg1;
- (void)_traitCollectionDidChange:(id)arg1;
- (BOOL)_tryRetain;
- (void)_uirvc_windowBecameKey:(id)arg1;
- (void)_uirvc_windowResignedKey:(id)arg1;
- (void)_updateLockStatusHostingVisibility;
- (void)_updateTintColor;
- (void)_updateTouchGrabbingView;
- (void)_updateUnderflowProperties;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_windowDidAttachContext:(id)arg1;
- (void)_windowDidDetachContext:(id)arg1;
- (id)allowedNotifications;
- (id)autorelease;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)disconnect;
- (id)forbiddenNotifications;
- (BOOL)inheritsSecurity;
- (struct CGSize)intrinsicContentSizeForServiceSize:(struct CGSize)arg1;
- (void)loadView;
- (BOOL)observesLockNotifications;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredUserInterfaceStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersPointerLocked;
- (oneway void)release;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setAllowedNotifications:(id)arg1;
- (void)setInheritsSecurity:(BOOL)arg1;
- (void)setObservesLockNotifications:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldPropagateAppearanceCustomizations;
- (unsigned long long)supportedInterfaceOrientations;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (id)textEffectsWindowForServiceScreen;
- (void)updateTouchInterdictionViewLayout;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidInvalidateIntrinsicContentSize;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

