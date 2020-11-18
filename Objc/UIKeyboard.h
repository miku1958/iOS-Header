//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIKBFocusGuideDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardImplGeometryDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UITextInputTraits;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate>
{
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    BOOL m_typingDisabled;
    BOOL m_minimized;
    BOOL m_respondingToImplGeometryChange;
    long long m_orientation;
    long long m_idiom;
    BOOL m_hasExplicitOrientation;
    BOOL m_disableTouchInput;
    BOOL m_useRecentsAlert;
    NSMutableDictionary *m_focusGuides;
    struct UIEdgeInsets m_unfocusedFocusGuideOutsets;
    BOOL _hasImpendingCursorLocation;
    unsigned long long _impendingCursorLocation;
    unsigned long long _requestedInteractionModel;
}

@property (nonatomic) BOOL caretBlinks;
@property (nonatomic) BOOL caretVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasImpendingCursorLocation; // @synthesize hasImpendingCursorLocation=_hasImpendingCursorLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long impendingCursorLocation; // @synthesize impendingCursorLocation=_impendingCursorLocation;
@property (nonatomic) long long keyboardIdiom; // @synthesize keyboardIdiom=m_idiom;
@property (nonatomic, getter=isMinimized) BOOL minimized;
@property (nonatomic) unsigned long long requestedInteractionModel; // @synthesize requestedInteractionModel=_requestedInteractionModel;
@property (nonatomic) BOOL showsCandidatesInline;
@property (readonly) Class superclass;
@property (nonatomic) BOOL typingEnabled;

+ (void)_clearActiveKeyboard;
+ (id)activeKeyboard;
+ (id)activeKeyboardForScreen:(id)arg1;
+ (BOOL)candidateDisplayIsExtended;
+ (void)clearActiveForScreen:(id)arg1;
+ (struct CGRect)defaultFrameForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultSizeForInterfaceOrientation:(long long)arg1;
+ (id)homeGestureExclusionZones;
+ (void)initImplementationNow;
+ (BOOL)isInHardwareKeyboardMode;
+ (BOOL)isOnScreen;
+ (struct CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1;
+ (struct UIEdgeInsets)keyplanePadding;
+ (void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2;
+ (double)predictionViewHeightForCurrentInputMode;
+ (BOOL)predictionViewPrewarmsPredictiveCandidates;
+ (void)removeAllDynamicDictionaries;
+ (BOOL)respondsToProxGesture;
+ (void)setPredictionViewPrewarmsPredictiveCandidates:(BOOL)arg1;
+ (BOOL)shouldMinimizeForHardwareKeyboard;
+ (struct CGSize)sizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)sizeForInterfaceOrientation:(long long)arg1 ignoreInputView:(BOOL)arg2;
+ (id)snapshotViewForPredictionViewTransition;
+ (BOOL)splitKeyboardEnabled;
- (void)_acceptCurrentCandidate;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (void)_deactivateForBackgrounding;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (BOOL)_disableTouchInput;
- (long long)_focusTouchSensitivityStyle;
- (long long)_focusedSound;
- (id)_getAutocorrection;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (BOOL)_hasCandidates;
- (id)_initWithFrame:(struct CGRect)arg1 lazily:(BOOL)arg2;
- (BOOL)_isAutomaticKeyboard;
- (id)_keyplaneForKey:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (BOOL)_mayRemainFocused;
- (long long)_positionInCandidateList:(id)arg1;
- (void)_setAutocorrects:(BOOL)arg1;
- (void)_setDisableTouchInput:(BOOL)arg1;
- (void)_setInputMode:(id)arg1;
- (void)_setPasscodeOutlineAlpha:(double)arg1;
- (void)_setPreferredHeight:(double)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSplit:(BOOL)arg1;
- (void)_setUndocked:(BOOL)arg1;
- (void)_setUseRecentsAlert:(BOOL)arg1;
- (void)_showAutofillExtras;
- (id)_touchPoint:(struct CGPoint)arg1;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (BOOL)_useRecentsAlert;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)acceptAutocorrection;
- (void)activate;
- (void)activateIfNeeded;
- (BOOL)allowExternalChangeForFocusHeading:(unsigned long long)arg1 cursorLocation:(unsigned long long)arg2;
- (void)autoAdjustOrientation;
- (BOOL)canBecomeFocused;
- (BOOL)canDismiss;
- (BOOL)canHandleEvent:(id)arg1;
- (void)clearActivePerScreenIfNeeded;
- (void)clearSnapshot;
- (unsigned long long)cursorLocation;
- (void)deactivate;
- (void)dealloc;
- (id)defaultTextInputTraits;
- (id)delegate;
- (void)didFocusGuideWithHeading:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)disableInteraction;
- (void)displayLayer:(id)arg1;
- (void)geometryChangeDone:(BOOL)arg1;
- (struct UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(double)arg1;
- (struct UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)arg1;
- (BOOL)hasAutocorrectPrompt;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;
- (id)initLazily;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRequestedInteractionModel:(unsigned long long)arg1;
- (long long)interfaceOrientation;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isActive;
- (BOOL)isActivePerScreen;
- (BOOL)isAutomatic;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedIn;
- (void)manualKeyboardWillBeOrderedOut;
- (void)maximize;
- (void)minimize;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForGeometryChange;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeAutocorrectPrompt;
- (void)responseContextDidChange;
- (BOOL)returnKeyEnabled;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)setCursorLocation:(unsigned long long)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDisableInteraction:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setOrientation:(long long)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets)arg1 fromView:(id)arg2;
- (void)setupKeyFocusGuides;
- (BOOL)shouldSaveMinimizationState;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (BOOL)showPredictionBar;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)takeSnapshot;
- (id)targetWindow;
- (int)textEffectsVisibilityLevel;
- (void)textInputTraitsDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)unfocusedFocusGuideOutsets;
- (void)updateFocusMarginsUpToView:(id)arg1;
- (void)updateKeyFocusGuides;
- (void)updateLayout;
- (void)willMoveToWindow:(id)arg1;

@end

