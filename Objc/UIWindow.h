//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSISEngineDelegate-Protocol.h>
#import <UIKit/_UIContextBindable-Protocol.h>
#import <UIKit/_UIFocusEventRecognizerDelegate-Protocol.h>
#import <UIKit/_UIFocusMovementActionForwarding-Protocol.h>

@class CAContext, CALayer, NSArray, NSMutableArray, NSMutableSet, NSString, NSUndoManager, UIAccessibilityHUDView, UIResponder, UIScreen, UITraitCollection, UIViewController, _UICanvas, _UIContextBinder, _UIFocusEventRecognizer, _UISystemGestureGateGestureRecognizer, _UIViewControllerNullAnimationTransitionCoordinator, _UIWindowAnimationController;
@protocol UIFocusItem;

@interface UIWindow : UIView <NSISEngineDelegate, _UIFocusEventRecognizerDelegate, _UIFocusMovementActionForwarding, _UIContextBindable>
{
    NSString *_debugName;
    long long _sceneOrientation;
    BOOL _notedOverlayInsetChange;
    id _delegate;
    double _windowLevel;
    double _windowSublevel;
    CAContext *_layerContext;
    _UICanvas *_canvas;
    _UIContextBinder *_contextBinder;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    id _fingerInfo;
    id _touchData;
    long long _viewOrientation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    CALayer *_transformLayer;
    CALayer *_rootLayer;
    NSMutableArray *_rotationViewControllers;
    UIViewController *_rootViewController;
    NSMutableSet *_subtreeMonitoringViews;
    NSMutableSet *_tintViews;
    id _currentTintView;
    struct {
        unsigned int delegateWillRotate:1;
        unsigned int delegateDidRotate:1;
        unsigned int delegateWillAnimateFirstHalf:1;
        unsigned int delegateDidAnimationFirstHalf:1;
        unsigned int delegateWillAnimateSecondHalf:1;
        unsigned int autorotatesToPortrait:1;
        unsigned int autorotatesToPortraitUpsideDown:1;
        unsigned int autorotatesToLandscapeLeft:1;
        unsigned int autorotatesToLandscapeRight:1;
        unsigned int dontBecomeKeyOnOrderFront:1;
        unsigned int output:1;
        unsigned int inGesture:1;
        unsigned int bitsPerComponent:4;
        unsigned int autorotates:1;
        unsigned int isRotating:1;
        unsigned int isUsingOnePartRotationAnimation:1;
        unsigned int disableAutorotationCount:4;
        unsigned int needsAutorotationWhenReenabled:1;
        unsigned int forceTwoPartRotationAnimation:1;
        unsigned int orderKeyboardInAfterRotating:1;
        unsigned int roundedCorners:4;
        unsigned int resizesToFullScreen:1;
        unsigned int keepContextInBackground:1;
        unsigned int ignoreSetHidden:1;
        unsigned int forceVisibleOnInit:1;
        unsigned int settingFirstResponder:1;
        unsigned int legacyOrientationChecks:1;
        unsigned int windowResizedToFullScreen:1;
        unsigned int statusBarFollowsOrientation:1;
        unsigned int secure:1;
        unsigned int isMainSceneSized:1;
        unsigned int didSetRestorationIdentifier:1;
        unsigned int resigningFirstResponderFromHost:1;
    } _windowFlags;
    id _windowController;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    UITraitCollection *_traitCollection;
    UITraitCollection *_destinationTraitCollection;
    struct __CFDictionary *_touchMap;
    long long _containedGestureRecognizerMaximumState;
    double _lastTouchTimestamp;
    unsigned int _systemGesturesArePossible:1;
    long long _verticalSizeClassStateRestorationOverride;
    long long _horizontalSizeClassStateRestorationOverride;
    UIAccessibilityHUDView *_accessibilityHUD;
    BOOL _shouldDisableTransformLayerScalingForSnapshotting;
    BOOL __shouldHitTestEntireScreen;
    BOOL __usesLegacySupportedOrientationChecks;
    BOOL ___hostViewUnderlapsStatusBar;
    BOOL __containedGestureRecognizersShouldRespectGestureServerInstructions;
    _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
    NSArray *_windowInternalConstraints;
    NSArray *_rootViewConstraints;
    CDUnknownBlockType _deferredLaunchBlock;
    long long __deferredLaunchOrientation;
    id<UIFocusItem> _rememberedFocusedItem;
    long long _toWindowOrientation;
    long long _fromWindowOrientation;
    _UIWindowAnimationController *__animationController;
    CDUnknownBlockType __shouldPreventRotationHook;
    _UIFocusEventRecognizer *_focusEventRecognizer;
}

@property (nonatomic, setter=__setHostViewUnderlapsStatusBar:) BOOL __hostViewUnderlapsStatusBar; // @synthesize __hostViewUnderlapsStatusBar=___hostViewUnderlapsStatusBar;
@property (readonly, nonatomic) CDStruct_d58201db __sizeClassPair;
@property (strong, nonatomic, getter=_animationController, setter=_setAnimationController:) _UIWindowAnimationController *_animationController; // @synthesize _animationController=__animationController;
@property (readonly, nonatomic) CDStruct_3cbf53c3 _bindingDescription;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext; // @synthesize _boundContext=_layerContext;
@property (nonatomic, setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) BOOL _containedGestureRecognizersShouldRespectGestureServerInstructions; // @synthesize _containedGestureRecognizersShouldRespectGestureServerInstructions=__containedGestureRecognizersShouldRespectGestureServerInstructions;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder; // @synthesize _contextBinder;
@property (copy, nonatomic, setter=_setDeferredLaunchBlock:) CDUnknownBlockType _deferredLaunchBlock; // @synthesize _deferredLaunchBlock;
@property (nonatomic, setter=_setDeferredLaunchOrientation:) long long _deferredLaunchOrientation; // @synthesize _deferredLaunchOrientation=__deferredLaunchOrientation;
@property (nonatomic, setter=_setLegacyOrientationChecks:) BOOL _legacyOrientationChecks;
@property (copy, nonatomic, setter=_setRootViewConstraints:) NSArray *_rootViewConstraints; // @synthesize _rootViewConstraints;
@property (nonatomic, setter=_setShouldDisableTransformLayerScalingForSnapshotting:) BOOL _shouldDisableTransformLayerScalingForSnapshotting; // @synthesize _shouldDisableTransformLayerScalingForSnapshotting;
@property (nonatomic, setter=_setShouldHitTestEntireScreen:) BOOL _shouldHitTestEntireScreen; // @synthesize _shouldHitTestEntireScreen=__shouldHitTestEntireScreen;
@property (copy, nonatomic, setter=_setShouldPreventRotationHook:) CDUnknownBlockType _shouldPreventRotationHook; // @synthesize _shouldPreventRotationHook=__shouldPreventRotationHook;
@property (strong, nonatomic, setter=_setTraitCollectionChangeTransitionCoordinator:) _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator; // @synthesize _traitCollectionChangeTransitionCoordinator;
@property (readonly, nonatomic) BOOL _usesLegacySupportedOrientationChecks; // @synthesize _usesLegacySupportedOrientationChecks=__usesLegacySupportedOrientationChecks;
@property (copy, nonatomic, setter=_setWindowInternalConstraints:) NSArray *_windowInternalConstraints; // @synthesize _windowInternalConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_focusEventRecognizer) _UIFocusEventRecognizer *focusEventRecognizer; // @synthesize focusEventRecognizer=_focusEventRecognizer;
@property (readonly, weak, nonatomic, getter=_focusResponder) UIResponder *focusResponder;
@property (nonatomic, getter=_fromWindowOrientation, setter=_setFromWindowOrientation:) long long fromWindowOrientation; // @synthesize fromWindowOrientation=_fromWindowOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isKeyWindow) BOOL keyWindow;
@property (weak, nonatomic, getter=_rememberedFocusedItem, setter=_setRememberedFocusedItem:) id<UIFocusItem> rememberedFocusedItem; // @synthesize rememberedFocusedItem=_rememberedFocusedItem;
@property (strong, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property (strong, nonatomic) UIScreen *screen;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_supportsFocus) BOOL supportsFocus;
@property (nonatomic, getter=_toWindowOrientation, setter=_setToWindowOrientation:) long long toWindowOrientation; // @synthesize toWindowOrientation=_toWindowOrientation;
@property (nonatomic) double windowLevel;

+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(BOOL)arg2;
+ (BOOL)_allWindowsKeepContextInBackground;
+ (void)_clearKeyWindowStack;
+ (void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 allowMutation:(BOOL)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (void)_executeDeferredLaunchBlocks;
+ (id)_externalKeyWindow;
+ (id)_findWindowForControllingOverallAppearance;
+ (id)_findWithDisplayPoint:(struct CGPoint)arg1;
+ (id)_globalHitTestForLocation:(struct CGPoint)arg1 inWindowServerHitTestWindow:(id)arg2 withEvent:(id)arg3;
+ (id)_hitTestToPoint:(struct CGPoint)arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (id)_homeIndicatorAutoHiddenControllingWindow;
+ (BOOL)_isSecure;
+ (BOOL)_isSystemWindow;
+ (unsigned long long)_keyWindowStackSize;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(BOOL)arg3;
+ (void)_popKeyWindow;
+ (void)_popKeyWindow:(id)arg1;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_removeWindowFromStack:(id)arg1;
+ (id)_screenEdgesDeferringSystemGesturesControllingWindow;
+ (void)_setAllWindowsKeepContextInBackground:(BOOL)arg1;
+ (void)_setKeyWindowStackEnabled:(BOOL)arg1;
+ (void)_setTransformLayerRotationsAreEnabled:(BOOL)arg1;
+ (void)_synchronizeDrawing;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(CDUnknownBlockType)arg2;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(CDUnknownBlockType)arg2;
+ (void)_synchronizeDrawingWithPreCommitHandler:(CDUnknownBlockType)arg1;
+ (id)_synchronizedDrawingFence;
+ (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
+ (BOOL)_transformLayerRotationsAreEnabled;
+ (void)_unregisterChargedView:(id)arg1;
+ (id)_whitePointAdaptivityStyleControllingWindow;
+ (id)_windowWithContextId:(unsigned int)arg1;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 forScreen:(id)arg3;
+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
+ (void *)createIOSurfaceFromDisplayConfiguration:(id)arg1;
+ (void *)createIOSurfaceFromScreen:(id)arg1;
+ (void *)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int *)arg2 count:(unsigned long long)arg3 frame:(struct CGRect)arg4 baseTransform:(struct CGAffineTransform)arg5;
+ (void *)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int *)arg2 count:(unsigned long long)arg3 frame:(struct CGRect)arg4 usePurpleGfx:(BOOL)arg5 outTransform:(struct CGAffineTransform *)arg6;
+ (void *)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect)arg2;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3 outTransform:(struct CGAffineTransform *)arg4;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3 usePurpleGfx:(BOOL)arg4 outTransform:(struct CGAffineTransform *)arg5;
+ (void *)createScreenIOSurface;
+ (void)initialize;
+ (id)keyWindow;
+ (Class)layerClass;
- (void).cxx_destruct;
- (id)__clientsForRotationCallbacks;
- (id)_aboveWindowScrollView;
- (void)_addRotationViewController:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect)arg1;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (BOOL)_allowsLinkPreviewInteractionInViewServices;
- (BOOL)_alwaysGetsContexts;
- (id)_appearanceContainer;
- (BOOL)_appearsInLoupe;
- (BOOL)_areOverlayInsetsValid:(struct UIEdgeInsets)arg1;
- (id)_associatingSceneLayer;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect)arg1;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint)arg1;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_beginKeyWindowDeferral;
- (void)_beginModalSession;
- (double)_bindableLevel;
- (id)_bindingLayer;
- (BOOL)_cachedTraitCollectionIsValid;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (BOOL)_canAffectDisplayAdaptation;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canBecomeLayoutEngineDelegate;
- (BOOL)_canPromoteFromKeyWindowStack;
- (id)_canvas;
- (id)_canvasFromScene:(id)arg1;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(BOOL)arg2 contentInsetScale:(double)arg3;
- (double)_chargeMultiplicationFactor;
- (struct CGPoint)_clampPointToScreenJail:(struct CGPoint)arg1;
- (double)_classicOffset;
- (BOOL)_clearMouseView;
- (void)_clearPendingKeyboardChanges;
- (void)_clearSizeClassesForStateRestoration;
- (id)_clientsForRotation;
- (void)_commonInit;
- (void)_commonInitAttachedWindow:(BOOL)arg1 debugName:(id)arg2 scene:(id)arg3;
- (void)_commonInitDebugName:(id)arg1 canvas:(id)arg2;
- (void)_configureContextOptions:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (BOOL)_containedInAbsoluteResponderChain;
- (unsigned int)_contextId;
- (id)_contextOptionsWithInitialOptions:(id)arg1;
- (struct CGPoint)_convertDoublePointFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertDoublePointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGPoint)_convertOffsetFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertOffsetToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGRect)_convertRectFromSceneReferenceSpace:(struct CGRect)arg1;
- (struct CGRect)_convertRectToSceneReferenceSpace:(struct CGRect)arg1;
- (double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)_currentTintView;
- (id)_debugName;
- (id)_deepestUnambiguousResponder;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (id)_descendantWithAmbiguousLayout;
- (void)_didSnapshot;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (BOOL)_disableAutomaticKeyboardUI;
- (BOOL)_disableGroupOpacity;
- (void)_dismissAccessibilityHUD;
- (unsigned long long)_edgeForTouch:(id)arg1;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;
- (void)_endKeyWindowDeferral;
- (void)_endModalSession;
- (id)_exclusiveTouchView;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (void)_fadeCalloutBarIfNeededForTouchInView:(id)arg1;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(BOOL)arg4;
- (id)_firstResponder;
- (void)_focusEventRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2;
- (BOOL)_focusEventRecognizer:(id)arg1 didRecognizeFocusMovementRequest:(id)arg2;
- (id)_focusMovementSystemForFocusEventRecognizer:(id)arg1;
- (id)_focusedView;
- (void)_forceTwoPartRotationAnimation:(BOOL)arg1;
- (void)_forwardFocusMovementAction:(id)arg1;
- (BOOL)_guardSizeTransitionFromAnimations;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_handleSBActiveInterfaceOrientationChange:(id)arg1;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (BOOL)_hasAmbiguousLayout;
- (BOOL)_hasContext;
- (id)_hitTestLocation:(struct CGPoint)arg1 inScene:(id)arg2 withWindowServerHitTestWindow:(id)arg3 event:(id)arg4;
- (id)_hostingHandle;
- (id)_hostingWindow;
- (BOOL)_ignoresHitTest;
- (BOOL)_includeInDefaultImageSnapshot;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(BOOL)arg2;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 attached:(BOOL)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 canvas:(id)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 displayConfiguration:(id)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 scene:(id)arg3 attached:(BOOL)arg4;
- (id)_initWithOrientation:(long long)arg1;
- (void)_initializeLayoutEngine;
- (void)_installFocusEventRecognizer;
- (void)_invalidateWindowInternalConstraints;
- (BOOL)_isAnyWindowRotating;
- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isHostingPortalViews;
- (BOOL)_isInAWindow;
- (BOOL)_isKeyWindowForDeferral;
- (BOOL)_isLoweringAnchoringConstraints;
- (BOOL)_isScrollingEnabledForView:(id)arg1;
- (BOOL)_isSecure;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_isStatusBarWindow;
- (BOOL)_isTextEffectsWindow;
- (BOOL)_isTextEffectsWindowHosting;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_isVisible;
- (BOOL)_isWindowServerHostingManaged;
- (id)_keyboardSceneSettings;
- (id)_layoutEngineCreateIfNecessary;
- (id)_layoutEngineIfAvailable;
- (BOOL)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_makeExternalKeyWindow;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)arg1;
- (void)_matchDeviceOrientation;
- (void)_moveWithEvent:(id)arg1;
- (BOOL)_needsShakesWhenInactive;
- (id)_normalInheritedTintColor;
- (void)_noteOverlayInsetsDidChange;
- (void)_notifyRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)_orderFrontWithoutMakingKey;
- (long long)_orientationForClassicPresentation;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (struct UIEdgeInsets)_overlayInsets;
- (long long)_overriddenInterfaceOrientation;
- (id)_overridingPreferredFocusEnvironment;
- (id)_parentFocusEnvironment;
- (void)_performTouchContinuationWithOverrideHitTestedView:(id)arg1;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_propagateTraitCollectionChangedForStateRestoration;
- (id)_redundantConstraints;
- (void)_registerChargedView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (id)_registeredScrollToTopViews;
- (void)_removeAllViewControllersFromWindowHierarchy;
- (void)_removeFocusEventRecognizer;
- (void)_removeRotationViewController:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (void)_resignKeyWindowStatus;
- (BOOL)_resizeWindowFrameToSceneBoundsIfNecessary;
- (void)_resizeWindowToFullScreenIfNecessary;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderWindow;
- (id)_rootForKeyResponderCycle;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_rotateToBounds:(struct CGRect)arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 skipCallbacks:(BOOL)arg4;
- (id)_rotationViewControllers;
- (struct UIEdgeInsets)_safeAreaInsetsInSuperview:(id)arg1;
- (id)_scene;
- (struct CGRect)_sceneBounds;
- (void)_sceneBoundsDidChange;
- (long long)_sceneOrientation;
- (struct CGRect)_sceneReferenceBounds;
- (id)_screen;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_setCanvas:(id)arg1;
- (void)_setExclusiveTouchView:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2;
- (void)_setIsLoweringAnchoringConstraints:(BOOL)arg1;
- (void)_setIsResigningFirstResponderFromHost:(BOOL)arg1;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent *)arg2;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_setScene:(id)arg1;
- (void)_setSecure:(BOOL)arg1;
- (void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2;
- (void)_setSystemGestureRecognitionIsPossible:(BOOL)arg1 andTouchesAreCancelled:(BOOL)arg2;
- (void)_setTouchMap:(struct __CFDictionary *)arg1;
- (void)_setWindowControlsStatusBarOrientation:(BOOL)arg1;
- (void)_setWindowInterfaceOrientation:(long long)arg1;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(BOOL)arg2 isRotationDisabled:(BOOL *)arg3;
- (BOOL)_shouldControlAutorotation;
- (BOOL)_shouldCreateContextAsSecure;
- (BOOL)_shouldDelayTouchForSystemGestures:(id)arg1;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)_shouldPropagateTraitCollectionChanges;
- (BOOL)_shouldRecognizeEventsInFocusEventRecognizer:(id)arg1;
- (BOOL)_shouldResizeWithScene;
- (BOOL)_shouldScaleByPixelDoubling;
- (BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1;
- (BOOL)_shouldUseRemoteContext;
- (BOOL)_shouldZoom;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)_subtreeMonitorsForView:(id)arg1;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (BOOL)_supportsBecomeFirstResponderWhenPossible;
- (void)_switchToLayoutEngine:(id)arg1;
- (BOOL)_systemGestureRecognitionIsPossible;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (id)_targetWindowForPathIndex:(long long)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (id)_touchData;
- (struct __CFDictionary *)_touchMap;
- (double)_touchSloppinessFactor;
- (BOOL)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg1;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screen:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screenCollection:(id)arg2;
- (id)_traitCollectionWhenRotated;
- (struct CGPoint)_transformDisplayToWindowCoordinates:(struct CGPoint)arg1;
- (BOOL)_transformLayerIncludesScreenRotation;
- (void)_transformLayerShouldMaskToBounds:(BOOL)arg1;
- (id)_uiib_candidateRedundantConstraints;
- (void)_uiib_invalidateWindowInternalConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)_unregisterChargedView:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_updateAppTintView;
- (void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)arg1;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientationIfRotationEnabled:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1;
- (void)_updateIsSceneSizedFlag;
- (void)_updateLayerOrderingAndSetLayerHidden:(BOOL)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 animation:(int)arg3;
- (void)_updateSystemConstraints;
- (void)_updateToInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_updateToNotificationProvidedInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateTransformLayer;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_updateTransformLayerSizeForClassicPresentation;
- (void)_updateWindowTraits;
- (void)_updateWindowTraitsAndNotify:(BOOL)arg1;
- (BOOL)_usesWindowServerHitTesting;
- (struct CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1;
- (BOOL)_wantsFocusEngine;
- (BOOL)_wantsSceneAssociation;
- (void)_willChangeToSize:(struct CGSize)arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)_willSnapshot;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_window;
- (BOOL)_windowControlsStatusBarOrientation;
- (long long)_windowInterfaceOrientation;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (BOOL)_windowOwnsInterfaceOrientation;
- (void)_writeLayerTreeToPath:(id)arg1;
- (void)addRootViewControllerViewIfPossible;
- (BOOL)autorotates;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (void)becomeKeyWindow;
- (void)beginDisablingInterfaceAutorotation;
- (int)bitsPerComponent;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentView;
- (struct CGPoint)convertDeviceToWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertWindowToDevice:(struct CGPoint)arg1;
- (void *)createIOSurface;
- (void *)createIOSurfaceWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1;
- (void)exerciseAmbiguityInLayout;
- (id)firstResponder;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (BOOL)hasAmbiguousLayout;
- (BOOL)inhibitManualTransform;
- (BOOL)inhibitSetupOrientation;
- (BOOL)inhibitTextEffectsRotation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)interfaceOrientation;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isInterfaceAutorotationDisabled;
- (BOOL)isInternalWindow;
- (BOOL)isRotating;
- (BOOL)isUsingOnePartRotationAnimation;
- (BOOL)keepContextInBackground;
- (void)keyboardDidHide;
- (double)level;
- (void)makeKey:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyAndVisible;
- (void)makeKeyWindow;
- (void)matchDeviceOrientation:(id)arg1;
- (id)nextResponder;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (void)redo:(id)arg1;
- (void)removeFromSuperview;
- (id)representation;
- (void)resignKeyWindow;
- (BOOL)resizesToFullScreen;
- (id)restorationIdentifier;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)sendEvent:(id)arg1;
- (void)setAutorotates:(BOOL)arg1;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;
- (void)setBecomeKeyOnOrderFront:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (void)setLevel:(double)arg1;
- (void)setNeedsFocusUpdate;
- (void)setResizesToFullScreen:(BOOL)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setupForOrientation:(long long)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)updateFocusIfNeeded;
- (struct CGPoint)warpPoint:(struct CGPoint)arg1;
- (int)windowOutput;

@end

