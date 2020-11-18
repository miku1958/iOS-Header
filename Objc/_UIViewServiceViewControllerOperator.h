//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/_UIFocusMovementActionForwarding-Protocol.h>
#import <UIKit/_UIHostedTextServiceSessionDelegate-Protocol.h>
#import <UIKit/_UIViewServiceDeputy-Protocol.h>
#import <UIKit/_UIViewServiceDeputyRotationSource-Protocol.h>
#import <UIKit/_UIViewServiceDummyPopoverControllerDelegate-Protocol.h>
#import <UIKit/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSUndoManager, UIPopoverController, _UIAsyncInvocation, _UIHostedTextServiceSession, _UIHostedWindow, _UIViewControllerOneToOneTransitionContext, _UIViewServiceDummyPopoverController;
@protocol _UIViewServiceViewControllerOperatorDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIFocusMovementActionForwarding, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource>
{
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    NSMutableArray *_deferredToViewDidAppear;
    int _hostPID;
    NSString *_hostBundleID;
    CDStruct_4c969caf _hostAuditToken;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    NSArray *_pluginDisplayConfigurations;
    UIViewController *_localViewController;
    NSString *_presentationControllerClassName;
    _UIHostedWindow *_hostedWindow;
    BOOL _disableAutomaticKeyboardBehavior;
    BOOL _serviceInPopover;
    long long _hostStatusBarOrientation;
    double _hostStatusBarHeight;
    NSMutableArray *_deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned long long _supportedOrientations;
    BOOL _canShowTextServices;
    struct UIEdgeInsets _localViewControllerRequestedInsets;
    double _localViewControllerRequestedLeftMargin;
    double _localViewControllerRequestedRightMargin;
    _UIViewControllerOneToOneTransitionContext *_viewControllerTransitioningContext;
    long long _editAlertToken;
    NSUndoManager *_editAlertUndoManager;
    id<_UIViewServiceViewControllerOperatorDelegate> _delegate;
    CDUnknownBlockType __traitsWillChangeHandler;
    CDUnknownBlockType __traitsDidChangeHandler;
}

@property (copy, nonatomic, setter=_setTraitsDidChangeHandler:) CDUnknownBlockType _traitsDidChangeHandler; // @synthesize _traitsDidChangeHandler=__traitsDidChangeHandler;
@property (copy, nonatomic, setter=_setTraitsWillChangeHandler:) CDUnknownBlockType _traitsWillChangeHandler; // @synthesize _traitsWillChangeHandler=__traitsWillChangeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIViewServiceViewControllerOperatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(CDStruct_4c969caf)arg4;
- (void).cxx_destruct;
- (int)__automatic_invalidation_logic;
- (void)__cancelAlertActionWithToken:(long long)arg1;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(BOOL)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(BOOL)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (void)__dimmingViewWasTapped;
- (void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)__hostDidAttachDisplay:(id)arg1;
- (void)__hostDidBecomeActive;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostDidDetachDisplay:(id)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)__hostDidSetPresentationControllerClassName:(id)arg1;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3;
- (void)__hostDidUpdateDisplay:(id)arg1;
- (void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostViewDidAppear:(BOOL)arg1;
- (void)__hostViewDidDisappear:(BOOL)arg1;
- (void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(CDUnknownBlockType)arg2;
- (void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostViewWillTransitionToSize:(struct CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(double)arg3 underlapsStatusBar:(BOOL)arg4 whenDone:(CDUnknownBlockType)arg5;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillResignActive;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3;
- (BOOL)__knownPresentationWithoutPresentationControllerInstance;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__redoActionWithToken:(long long)arg1;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)__setContentSize:(struct CGSize)arg1;
- (void)__setContentSize:(struct CGSize)arg1 withFence:(id)arg2;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2;
- (void)__setHostViewUnderlapsStatusBar:(BOOL)arg1;
- (void)__setServiceInPopover:(BOOL)arg1;
- (void)__showEditAlertView;
- (void)__textServiceDidDismiss;
- (void)__undoActionWithToken:(long long)arg1;
- (id)_appearanceSource;
- (BOOL)_canShowTextServices;
- (struct UIEdgeInsets)_customBasePresentationInsetsForView:(id)arg1;
- (id)_dataFromPressesEvent:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (void)_firstResponderDidChange:(id)arg1;
- (void)_forwardFocusMovementAction:(id)arg1;
- (BOOL)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(BOOL)arg3;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (id)_inputViewsKey;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_isHostedRootViewController;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_presentationControllerClassName;
- (BOOL)_providesCustomBasePresentationInsets;
- (id)_queue;
- (id)_sessionForStateRestoration:(id)arg1;
- (void)_setNeedsUserInterfaceAppearanceUpdate;
- (BOOL)_shouldForwardLegacyRotationOnly;
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (BOOL)_tryRetain;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_viewControllersForRotationCallbacks;
- (struct UIEdgeInsets)_viewSafeAreaInsetsFromScene;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (id)_window;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)addDeputyRotationDelegate:(id)arg1;
- (id)autorelease;
- (BOOL)becomeFirstResponder;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (struct CGSize)contentSizeForViewInPopover;
- (void)dealloc;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize)arg2 animated:(BOOL)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)invalidate;
- (void)loadView;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)setNeedsWhitePointAdaptivityStyleUpdate;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;

@end
