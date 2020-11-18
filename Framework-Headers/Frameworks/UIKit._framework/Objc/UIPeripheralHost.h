//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIKeyboardKeyplaneTransitionDelegate-Protocol.h>
#import <UIKit/UIScrollViewIntersectionDelegate-Protocol.h>

@class CADisplayLink, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIInputViewPostPinningReloadState, UIInputViewSet, UIInputViewTransition, UIKeyboard, UIKeyboardAutomatic, UIKeyboardRotationState, UIPanGestureRecognizer, UIPeripheralHostState, UIPeripheralHostView, UIResponder, UIScrollView, UITextEffectsWindow, UITextInputMode, UIView;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate>
{
    UIPeripheralHostView *_hostView;
    UIKeyboardAutomatic *_automaticKeyboard;
    BOOL _automaticAppearanceEnabled;
    BOOL _automaticAppearanceEnabledInternal;
    BOOL _automaticKeyboardAnimatingIn;
    BOOL _automaticKeyboardAnimatingOut;
    int _automaticKeyboardState;
    int _ignoringReloadInputViews;
    BOOL _suppresingNotifications;
    BOOL _useHideNotificationsWhenNotVisible;
    BOOL _reloadInputViewsForcedIsAllowed;
    int _nextAutomaticOrderInDirection;
    long long _targetRotatedOrientation;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _isUndocked;
    BOOL _splitLockState;
    UIPanGestureRecognizer *_translateRecognizer;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    struct CGAffineTransform _targetTransform;
    struct CGAffineTransform _initialTransform;
    struct CGPoint _velocity;
    NSMutableArray *_dropShadowViews;
    double __transitionStartTime;
    int _shadowStyle;
    BOOL _wasBackgroundSplit;
    struct CGRect _previousShadowFrameLeft;
    struct CGRect _previousShadowFrameRight;
    CDUnknownBlockType _bounceCompletionBlock;
    double m_keyboardAttachedViewHeight;
    struct CGRect _lastKnownIVFrame;
    struct CGRect _lastKnownIAVFrame;
    NSMutableArray *_animationStyleStack;
    BOOL _hasCustomAnimationProperties;
    double _nextAutomaticOrderInDuration;
    double _lastAutomaticKeyboardDuration;
    long long _disableAnimationsCount;
    NSMutableArray *_targetStateStack;
    UIInputViewSet *_inputViewSet;
    UIResponder *_responder;
    NSMutableSet *_pinningResponders;
    BOOL _ignoresPinning;
    UIInputViewPostPinningReloadState *_postPinningReloadState;
    BOOL _animationFencingEnabled;
    BOOL _interfaceAutorotationDisabled;
    UIKeyboardRotationState *_rotationState;
    UIInputViewTransition *_currentTransition;
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    UIInputViewTransition *_scrollViewTransition;
    BOOL _scrollViewTransitionFinishing;
    struct CGPoint _scrollViewTransitionPreviousPoint;
    struct CGPoint _scrollViewTransitionVelocity;
    UIResponder *_selfHostingTrigger;
    NSMutableDictionary *_preservedViewSets;
    NSMutableDictionary *_persistentInputAccessoryResponders;
    NSMutableArray *_persistentInputAccessoryResponderOrder;
    BOOL _didFadeInputViews;
    BOOL _blockedReloadInputViewsForDictation;
    BOOL _allowNilResponderReload;
    BOOL _animateCornerRefresh;
    BOOL _showCorners;
    NSMutableArray *_extraViews;
    int _clippingKeyboardMode;
    struct CGRect _clippingKeyboardAdjustmentStart;
    struct CGRect _clippingKeyboardAdjustmentEnd;
    double _ambiguousControlCenterActivationMargin;
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;
    UITextEffectsWindow *_containerWindow;
    int _hostedAnimationToggleCount;
    int _deactivationCount;
    BOOL _dontNeedAssistantBar;
    CDUnknownBlockType _deferredTransitionTask;
    UIInputViewSet *_transientInputViewSet;
    UITextInputMode *_documentInputMode;
}

@property (strong, nonatomic) UIInputViewSet *_inputViews; // @synthesize _inputViews=_inputViewSet;
@property (strong, nonatomic) UIInputViewSet *_transientInputViews; // @synthesize _transientInputViews=_transientInputViewSet;
@property (nonatomic) double _transitionStartTime;
@property (nonatomic) double ambiguousControlCenterActivationMargin;
@property (nonatomic) BOOL animationFencingEnabled; // @dynamic animationFencingEnabled;
@property (nonatomic) BOOL animationFencingEnabled; // @synthesize animationFencingEnabled=_animationFencingEnabled;
@property (readonly, nonatomic) BOOL animationsEnabled;
@property (nonatomic) BOOL automaticAppearanceEnabled; // @synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled;
@property (nonatomic) BOOL automaticAppearanceInternalEnabled;
@property (readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;
@property (readonly, nonatomic) UIKeyboard *automaticKeyboard;
@property (readonly, nonatomic) UIKeyboardAutomatic *automaticKeyboard;
@property (nonatomic) int currentState; // @synthesize currentState=_automaticKeyboardState;
@property (strong, nonatomic) UIInputViewTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property (readonly, nonatomic) NSMutableArray *dropShadowViews;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoresPinning;
@property (readonly, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;
@property (strong, nonatomic) UIInputViewSet *inputViews;
@property (readonly, nonatomic) BOOL keyClicksEnabled;
@property (readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
@property (strong, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState; // @synthesize postPinningReloadState=_postPinningReloadState;
@property (readonly, strong, nonatomic) UIResponder *responder; // @dynamic responder;
@property (strong, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property (strong, nonatomic) UIKeyboardRotationState *rotationState; // @synthesize rotationState=_rotationState;
@property (strong, nonatomic) UIResponder *selfHostingTrigger; // @synthesize selfHostingTrigger=_selfHostingTrigger;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIPeripheralHostState *targetState;
@property (readonly, nonatomic) UIView *view;

+ (void)_releaseSharedInstance;
+ (id)activeInstance;
+ (struct CGPoint)defaultUndockedOffset;
+ (id)endPlacementForInputViewSet:(id)arg1;
+ (double)gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double *)arg4;
+ (Class)hostViewClass;
+ (BOOL)inputViewSetContainsView:(id)arg1;
+ (id)passthroughViews;
+ (struct CGRect)screenBoundsInAppOrientation;
+ (void)setFloating:(BOOL)arg1 onCompletion:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
+ (struct CGRect)visibleInputViewFrame;
+ (struct CGRect)visiblePeripheralFrame;
- (void)_beginDisablingAnimations;
- (void)_beginIgnoringReloadInputViews;
- (void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2;
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (struct CGRect)_centerStretchRectForWidth:(double)arg1;
- (void)_clearPinningResponders;
- (void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2;
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (id)_currentInputView;
- (void)_dismissOverlayedUI;
- (void)_endDisablingAnimations;
- (void)_endIgnoringReloadInputViews;
- (void)_endPersistingInputAccessoryViewWithId:(id)arg1;
- (BOOL)_hasPostPinningReloadState;
- (BOOL)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2;
- (id)_inheritedRenderConfig;
- (void)_inputModeChangedWhileContextTracked;
- (struct CGRect)_inputViewRectToAvoid;
- (id)_inputViewsForResponder:(id)arg1;
- (id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2;
- (BOOL)_isAccessoryViewChangedOnly;
- (BOOL)_isCoordinatingWithSystemGestures;
- (BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (BOOL)_isSelfHosting;
- (BOOL)_isSuppressedByManualKeyboard;
- (BOOL)_isTrackingResponder:(id)arg1;
- (BOOL)_isTransitioning;
- (void)_performRefreshCorners;
- (void)_preserveInputViewsWithId:(id)arg1;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 reset:(BOOL)arg3;
- (void)_reloadInputViewsForResponder:(id)arg1;
- (id)_renderConfigForCurrentResponder;
- (id)_renderConfigForResponder:(id)arg1;
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1;
- (void)_restoreInputAccessoryViewOverrideWithId:(id)arg1;
- (BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
- (id)_screenForFirstResponder:(id)arg1;
- (void)_setHosted:(BOOL)arg1;
- (void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2;
- (void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1;
- (BOOL)_shouldDelayRotationForWindow:(id)arg1;
- (BOOL)_somePartOfKeyboardIsOnScreen:(id)arg1;
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_trackInputModeIfNecessary:(id)arg1;
- (void)_updateBounceAnimation:(id)arg1;
- (void)_updateContainerWindowLevel;
- (double)accessoryViewFadeDuration:(id)arg1;
- (void)adjustAccessoryViewForSubsumedTransition:(id)arg1;
- (void)adjustHostViewForTransitionCompletion:(id)arg1;
- (void)adjustHostViewForTransitionEndFrame:(id)arg1;
- (void)adjustHostViewForTransitionStartFrame:(id)arg1;
- (struct CGRect)adjustRect:(struct CGRect)arg1 forStart:(BOOL)arg2;
- (struct CGPoint)adjustedPersistentOffset;
- (void)animateKeyboardOutWithDuration:(double)arg1 delta:(double)arg2;
- (void)bounceAnimationDidFinish;
- (struct UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(long long)arg1 outDirection:(int)arg2 forTransition:(int)arg3;
- (struct CGRect)calculateRectForTransition:(id)arg1 forStart:(BOOL)arg2;
- (struct CGRect)calculateSnapshotRectForTransition:(id)arg1 forStart:(BOOL)arg2;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (void)completeCurrentTransitionIfNeeded;
- (id)computeTransitionForInputViews:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (id)computeTransitionFromInputViews:(id)arg1 toInputViews:(id)arg2 animationStyle:(id)arg3;
- (id)containerForClippingMode:(int)arg1 onTransition:(id)arg2;
- (id)containerRootController;
- (id)containerTextEffectsWindow;
- (id)containerTextEffectsWindowAboveStatusBar;
- (id)containerWindow;
- (id)contentView;
- (void)createAutomaticKeyboardIfNeeded;
- (void)createHostViewIfNeeded;
- (void)dealloc;
- (void)disableInterfaceAutorotation:(BOOL)arg1;
- (struct CGRect)displayRectForViewSet:(id)arg1 orientation:(long long)arg2 position:(int)arg3 fromRotation:(BOOL)arg4;
- (void)dock;
- (void)enableKeyboardTyping;
- (void)endClippingForTransition:(id)arg1;
- (void)executeTransition:(id)arg1;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)fadeInInputViews:(BOOL)arg1;
- (void)fadeInputViewsIfNeeded;
- (void)finishRotation;
- (void)finishRotationOfKeyboard:(id)arg1;
- (void)finishScrollViewTransition;
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)flushDelayedTasks;
- (void)forceOrderInAutomatic;
- (void)forceOrderInAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderOutAutomatic;
- (void)forceOrderOutAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceReloadInputViews;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (double)getLastAutomaticDuration;
- (double)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;
- (BOOL)hasCustomInputView;
- (BOOL)hasDictationKeyboard;
- (void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg1;
- (void)implBoundsHeightChangeDoneForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (id)init;
- (void)initializeTranslateGestureRecognizer;
- (void)inputModeChangedForRenderConfig:(id)arg1;
- (void)invalidateDisplayLink;
- (BOOL)isHostingActiveImpl;
- (BOOL)isOffScreen;
- (BOOL)isOnScreen;
- (BOOL)isRotating;
- (BOOL)isSplitting;
- (BOOL)isTranslating;
- (BOOL)isUndocked;
- (double)keyboardAttachedViewHeight;
- (id)lastUsedInputModeForCurrentContext;
- (id)lastUsedInputModeForTextInputMode:(id)arg1;
- (void)layoutIfNeeded;
- (void)layoutInputViews;
- (void)layoutInputViewsForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (struct CGRect)localDisplayRectForViewSet:(id)arg1;
- (struct CGRect)localDisplayRectForViewSet:(id)arg1 position:(int)arg2;
- (void)logGeometryDescriptionFromUserInfo:(id)arg1;
- (void)manualKeyboardWasOrderedIn:(id)arg1;
- (void)manualKeyboardWasOrderedOut:(id)arg1;
- (void)manualKeyboardWillBeOrderedIn:(id)arg1;
- (void)manualKeyboardWillBeOrderedOut:(id)arg1;
- (BOOL)maximize;
- (BOOL)maximizeWithAnimation:(BOOL)arg1;
- (BOOL)minimize;
- (double)minimumOffsetForBuffer:(double)arg1;
- (void)moveToPersistentOffset;
- (id)nextAnimationStyle;
- (id)nextAnimationStyle:(BOOL)arg1;
- (struct CGPoint)offHostPointForPoint:(struct CGPoint)arg1;
- (void)orderInAutomatic;
- (void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderInAutomaticSkippingAnimation;
- (void)orderInWithAnimationStyle:(id)arg1;
- (void)orderOutAutomatic;
- (void)orderOutAutomaticExceptAccessoryView;
- (void)orderOutAutomaticSkippingAnimation;
- (void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderOutWithAnimation:(BOOL)arg1 toDirection:(int)arg2 duration:(double)arg3;
- (void)orderOutWithAnimationStyle:(id)arg1;
- (void)performMultipleOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (void)performWithAllowingNilResponderReload:(CDUnknownBlockType)arg1;
- (void)peripheralHostDidEnterBackground:(id)arg1;
- (void)peripheralHostWillResume:(id)arg1;
- (void)peripheralViewMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)pinningPreventsInputViews:(id)arg1;
- (void)popAnimationStyle;
- (void)postDidHideNotification;
- (void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)postDidShowNotification;
- (void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)postDockingNotification;
- (void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2;
- (void)postUndockingNotification;
- (void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;
- (void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;
- (void)prepareForAlongsideTransitionWithContext:(id)arg1;
- (void)prepareForPinning;
- (void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(long long)arg2;
- (void)prepareForRotationToOrientation:(long long)arg1;
- (void)prepareForTransition;
- (void)prepareToAnimateClippedKeyboardWithOffsets:(struct CGRect)arg1 orderingIn:(BOOL)arg2 onSnapshot:(BOOL)arg3;
- (void)pushAnimationStyle:(id)arg1;
- (void)queueDelayedTask:(CDUnknownBlockType)arg1;
- (void)refreshCorners;
- (void)resetCurrentOrderOutAnimationDuration:(double)arg1;
- (void)resetNextAutomaticOrderInDirectionAndDuration;
- (id)retain;
- (void)rotateKeyboard:(id)arg1 toOrientation:(long long)arg2;
- (void)rotateToOrientation:(long long)arg1;
- (struct CGRect)screenRectFromBounds:(struct CGRect)arg1 atCenter:(struct CGPoint)arg2 applyingSourceHeightDelta:(double)arg3;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2;
- (void)setDeactivatedKeyboard:(BOOL)arg1;
- (void)setInputViews:(id)arg1 animated:(BOOL)arg2;
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;
- (void)setInputViewsHidden:(BOOL)arg1;
- (void)setKeyboardOnScreenNotifyKey:(BOOL)arg1;
- (void)setListeningToSpringBoardKeyboardNotifications:(BOOL)arg1;
- (void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2;
- (void)setPeripheralFrameForHostBounds:(struct CGRect)arg1;
- (void)setPeripheralToolbarFrameForHostWidth:(double)arg1;
- (void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2;
- (void)setUndockedWithOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setkeyboardAttachedViewHeight:(double)arg1;
- (BOOL)shouldApplySettingsForBackdropView:(id)arg1;
- (BOOL)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)showCorners:(BOOL)arg1 withDuration:(double)arg2;
- (void)showDropShadows:(BOOL)arg1;
- (void)showInputViewsIfNeeded;
- (struct CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (BOOL)skipTransitionForInputViews:(id)arg1;
- (void)syncToExistingAnimations;
- (void)textEffectsWindowDidRotate:(id)arg1;
- (id)topAnimationStyle;
- (struct CGSize)totalPeripheralSizeForOrientation:(long long)arg1;
- (id)transformedContainerView;
- (void)transitionDidFinish:(BOOL)arg1;
- (struct CGRect)transitioningFrame;
- (id)transitioningView;
- (void)translateDetected:(id)arg1;
- (void)undock;
- (id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2;
- (void)updateBackdrop;
- (void)updateDropShadow;
- (void)updateInputAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)updateRenderConfigForCurrentResponder;
- (void)updateRenderConfigForResponder:(id)arg1;
- (void)updateScrollViewContentInsetBottom:(double)arg1;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2;
- (BOOL)userInfoContainsActualGeometryChange:(id)arg1;
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(BOOL)arg3 forShow:(BOOL)arg4;
- (id)viewForTransitionScreenSnapshot;
- (struct CGRect)visiblePeripheralFrame:(BOOL)arg1;

@end
