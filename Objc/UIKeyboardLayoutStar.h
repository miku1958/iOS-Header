//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKeyboardLayout.h>

#import <UIKit/UIKBEmojiHitTestResponder-Protocol.h>

@class CADisplayLink, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIDelayedAction, UIKBBackgroundView, UIKBKeyViewAnimator, UIKBKeyplaneView, UIKBRenderConfig, UIKBTree, UIKeyboardKeyplaneTransition, UIKeyboardSplitTransitionView, UISwipeGestureRecognizer, UIView, _UIKeyboardTypingSpeedLogger;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder>
{
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    NSString *_keyboardName;
    NSString *_keyplaneName;
    long long _appearance;
    UIKBTree *_activeKey;
    UIKBTree *_inactiveLanguageIndicator;
    UIKBKeyplaneView *_keyplaneView;
    UIKBBackgroundView *_backgroundView;
    UIKBKeyViewAnimator *_keyViewAnimator;
    double _prevTouchUpTime;
    double _prevTouchUpFinishedTime;
    double _prevTouchDownTime;
    unsigned long long _prevUpActions;
    NSMutableDictionary *_keyboards;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableSet *_validInputStrings;
    NSString *_localizedInputKey;
    struct __CFDictionary *_extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet *_accentInfo;
    NSMutableSet *_hasAccents;
    id _spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id _deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    BOOL _shift;
    BOOL _autoshift;
    BOOL _settingShift;
    BOOL _didLongPress;
    NSString *_preTouchKeyplaneName;
    BOOL _revertKeyplaneAfterTouch;
    BOOL _wasShifted;
    BOOL _swipeDetected;
    BOOL _showIntlKey;
    BOOL _showDictationKey;
    BOOL _suppressDeactivateKeys;
    BOOL _suppressKeyplaneAnimation;
    BOOL _isTrackpadMode;
    BOOL _shiftLockReady;
    double _shiftLockFirstTapTime;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UIKeyboardKeyplaneTransition *_keyplaneTransition;
    UIKeyboardSplitTransitionView *_transitionView;
    double _initialSplitProgress;
    double _finalSplitProgress;
    double _initialPinchSeparation;
    double _pinchSeparationValues[4];
    BOOL _pinchDetected;
    double _autoSplitLastUpdate;
    double _autoSplitElapsedTime;
    CADisplayLink *_displayLink;
    BOOL _ghostKeysEnabled;
    UIDelayedAction *_delayedCentroidUpdate;
    BOOL _isRebuilding;
    long long _initialBias;
    long long _transitionTargetBias;
    BOOL _edgeSwipeDetected;
    double _initialEdgeTranslation;
    double _edgeSwipeProgress;
    double _edgeSwipeVelocity;
    NSString *_layoutTag;
    BOOL _preRotateShift;
    NSString *_preRotateKeyplaneName;
    BOOL _preRotateTrackpadMode;
    UIDelayedAction *_multitapAction;
    BOOL _unshiftAfterMultitap;
    int _multitapCount;
    UIKBTree *_multitapKey;
    UIView *_flickPopupView;
    NSMutableDictionary *_compositeImages;
    NSTimer *_flickPopuptimer;
    id _touchInfo;
    UIView *_dimKeyboardImageView;
    BOOL _keyboardImageViewIsDim;
    BOOL _isOutOfBounds;
    NSMutableSet *_keysUnderIndicator;
    _UIKeyboardTypingSpeedLogger *_typingSpeedLogger;
    UIKBRenderConfig *_passcodeRenderConfig;
    long long _setKeyplaneViewCount;
    int playKeyClickSoundOn;
    UIKBRenderConfig *_renderConfig;
    UIView *_modalDisplayView;
    double _lastTwoFingerTapTimestamp;
}

@property (strong, nonatomic) UIKBTree *activeKey; // @synthesize activeKey=_activeKey;
@property (nonatomic) BOOL autoShift; // @synthesize autoShift=_autoshift;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLongPress; // @synthesize didLongPress=_didLongPress;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIKBTree *keyboard; // @synthesize keyboard=_keyboard;
@property (copy, nonatomic) NSString *keyboardName; // @synthesize keyboardName=_keyboardName;
@property (readonly, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property (copy, nonatomic) NSString *keyplaneName; // @synthesize keyplaneName=_keyplaneName;
@property (nonatomic) double lastTwoFingerTapTimestamp; // @synthesize lastTwoFingerTapTimestamp=_lastTwoFingerTapTimestamp;
@property (strong, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;
@property (copy, nonatomic) NSString *localizedInputKey; // @synthesize localizedInputKey=_localizedInputKey;
@property (readonly, nonatomic) NSString *localizedInputMode;
@property (strong, nonatomic) UIView *modalDisplayView; // @synthesize modalDisplayView=_modalDisplayView;
@property (nonatomic) int playKeyClickSoundOn; // @synthesize playKeyClickSoundOn;
@property (copy, nonatomic) NSString *preTouchKeyplaneName; // @synthesize preTouchKeyplaneName=_preTouchKeyplaneName;
@property (strong, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property (readonly, nonatomic, getter=isRotating) BOOL rotating;
@property (nonatomic) BOOL shift; // @synthesize shift=_shift;
@property (readonly, nonatomic) BOOL showsDictationKey; // @synthesize showsDictationKey=_showDictationKey;
@property (readonly, nonatomic) BOOL showsInternationalKey; // @synthesize showsInternationalKey=_showIntlKey;
@property (readonly) Class superclass;

+ (Class)_subclassForScreenTraits:(id)arg1;
+ (void)accessibilitySensitivityChanged;
+ (id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2;
+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
+ (id)keyboardWithName:(id)arg1 screenTraits:(id)arg2;
+ (id)sharedRivenKeyplaneGenerator;
- (id)_appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3;
- (void)_autoSplit:(id)arg1;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (id)_keyplaneVariantsKeyForString:(id)arg1;
- (BOOL)_stringContainsCurrencyCharacters:(id)arg1;
- (id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2;
- (void)accessibilitySensitivityChanged;
- (id)activationIndicatorView;
- (id)activeMultitapCompleteKey;
- (id)activeTouchInfoForShift;
- (void)annotateKeysWithDeveloperPunctuation;
- (struct CGPoint)applyError:(struct CGPoint)arg1 toKey:(id)arg2;
- (id)baseKeyForString:(id)arg1;
- (long long)biasForKeyboard:(id)arg1;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1;
- (id)cacheTokenForKeyplane:(id)arg1 caseAlternates:(BOOL)arg2;
- (struct CGImage *)cachedCompositeImageWithCacheKey:(id)arg1;
- (BOOL)canForceTouchCommit:(id)arg1;
- (BOOL)canMultitap;
- (BOOL)canProduceString:(id)arg1;
- (BOOL)canReuseKeyplaneView;
- (void)cancelDelayedCentroidUpdate;
- (void)cancelMultitapTimer;
- (void)cancelTouchIfNecessaryForInfo:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg1;
- (void)clearAllTouchInfo;
- (void)clearHandwritingStrokesIfNeededAndNotify:(BOOL)arg1;
- (void)clearInfoForTouch:(id)arg1;
- (void)clearKeyAnnotationsIfNecessary;
- (void)clearTransientState;
- (void)clearUnusedObjects:(BOOL)arg1;
- (void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2;
- (void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2;
- (void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2;
- (void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4;
- (void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)completeSendStringActionForTouchUp:(id)arg1 withActions:(long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(long long)arg6 executionContext:(id)arg7;
- (void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(long long)arg6 executionContext:(id)arg7;
- (id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(BOOL)arg3 isMultitap:(BOOL)arg4 isFlick:(BOOL)arg5;
- (long long)currentKeyboardBias;
- (id)currentKeyplane;
- (id)currentKeyplaneView;
- (void)deactivateActiveKey;
- (void)deactivateActiveKeys;
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2;
- (void)dealloc;
- (id)defaultKeyplaneForKeyplane:(id)arg1;
- (id)defaultNameForKeyplaneName:(id)arg1;
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (BOOL)diacriticForwardCompose;
- (void)didClearInput;
- (void)didEndIndirectSelectionGesture;
- (void)didEndIndirectSelectionGesture:(BOOL)arg1;
- (void)didFinishScreenGestureRecognition;
- (void)didRecognizeGestureOnEdge:(unsigned long long)arg1 withDistance:(double)arg2;
- (void)didRotate;
- (int)displayTypeHintForMoreKey;
- (int)displayTypeHintForShiftKey;
- (unsigned long long)downActionFlagsForKey:(id)arg1;
- (void)downActionShiftWithKey:(id)arg1;
- (struct CGSize)dragGestureSize;
- (BOOL)edgeSwipeGestureEnabled;
- (void)endMultitapForKey:(id)arg1;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(double)arg3;
- (void)fadeWithInvocation:(id)arg1;
- (void)finishHandBiasTransition;
- (void)finishSplit;
- (void)finishSplitTransition;
- (void)finishSplitTransitionWithProgress:(double)arg1;
- (id)flickPopupStringForKey:(id)arg1 withString:(id)arg2;
- (id)flickStringForInputKey:(id)arg1 direction:(int)arg2;
- (void)flushKeyCache:(id)arg1;
- (struct CGRect)frameForKeyWithRepresentedString:(id)arg1;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (struct CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2;
- (struct CGRect)frameForLastKeyWithRepresentedString:(id)arg1;
- (id)generateInfoForTouch:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)globeKeyDisplaysAsEmojiKey;
- (void)handleDelayedCentroidUpdate;
- (void)handleDismissFlickView;
- (void)handleDismissFlickView:(id)arg1;
- (void)handleFlick:(id)arg1;
- (void)handleKeyboardMenusForTouch:(id)arg1;
- (void)handleMultitapTimerFired;
- (void)handlePopupView;
- (void)handlePopupView:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (BOOL)handwritingPlane;
- (BOOL)hasAccentKey;
- (BOOL)hasCandidateKeys;
- (void)hideMenu:(id)arg1 forKey:(id)arg2;
- (id)highlightedVariantListForStylingKey:(id)arg1;
- (double)hitBuffer;
- (BOOL)ignoresShiftState;
- (void)incrementPunctuationIfNeeded:(id)arg1;
- (id)infoForTouch:(id)arg1;
- (id)infoForTouchUUID:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initialKeyplaneNameWithKBStarName:(id)arg1;
- (id)inputModeToMergeCapsLockKey;
- (void)installGestureRecognizers;
- (double)interpretPinchSeparationValues;
- (void)interpretTouchesForSplit;
- (BOOL)isAlphabeticPlane;
- (BOOL)isDeadkeyInput:(id)arg1;
- (BOOL)isEmojiKeyplane;
- (BOOL)isLongPressedKey:(id)arg1;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)keyHasAccentedVariants:(id)arg1;
- (id)keyHitTest:(struct CGPoint)arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint)arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint)arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint)arg1;
- (id)keyViewAnimator;
- (id)keyViewHitTestForPoint:(struct CGPoint)arg1;
- (id)keyWithRepresentedString:(id)arg1;
- (id)keyboardLayoutWithBias:(long long)arg1;
- (int)keycodeForKey:(id)arg1;
- (id)keylistContainingKey:(id)arg1;
- (BOOL)keyplaneContainsEmojiKey;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneNameForRevertAfterTouch;
- (id)keyplaneNamed:(id)arg1;
- (double)lastTouchUpTimestamp;
- (void)logHandwritingData;
- (void)longPressAction;
- (void)mergeKeysIfNeeded;
- (id)multitapCompleteKeys;
- (void)multitapExpired;
- (void)multitapInterrupted;
- (void)nextToUseInputModeDidChange:(id)arg1;
- (void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3;
- (BOOL)performReturnAction;
- (BOOL)performSpaceAction;
- (BOOL)pinchDetected;
- (BOOL)pinchSplitGestureEnabled;
- (void)playKeyClickSound;
- (void)playKeyClickSoundOnDown;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)populateFlickPopupsForKey:(id)arg1;
- (id)popupKeyViews;
- (BOOL)predictionGestureDetectedForTouchInfo:(id)arg1;
- (void)prepareForSplitTransition;
- (void)rebuildKeyplaneTransitionWithTargetBias:(long long)arg1;
- (void)rebuildSplitTransitionView;
- (void)refreshForDictationAvailablityDidChange;
- (void)refreshForRivenPreferences;
- (void)refreshGhostKeyState;
- (void)removeFromSuperview;
- (struct CGImage *)renderedImageWithStateFallbacksForToken:(id)arg1;
- (struct CGImage *)renderedImageWithToken:(id)arg1;
- (struct CGImage *)renderedKeyplaneWithToken:(id)arg1 split:(BOOL)arg2;
- (void)resetPanAlternativesForEndedTouch:(id)arg1;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (id)scriptingInfoWithChildren;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setAutoshift:(BOOL)arg1;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setDisableInteraction:(BOOL)arg1;
- (void)setHideKeysUnderIndicator:(BOOL)arg1;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setKeyboardDim:(BOOL)arg1;
- (void)setKeyboardDim:(BOOL)arg1 amount:(double)arg2 withDuration:(double)arg3;
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setMultitapReverseKeyState;
- (void)setPasscodeOutlineAlpha:(double)arg1;
- (void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSplitProgress:(double)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setTextEditingTraits:(id)arg1;
- (void)setToInitialKeyplane;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (BOOL)shouldAddHandRestRecognizer;
- (BOOL)shouldAllowCurrentKeyplaneReload;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;
- (BOOL)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1;
- (BOOL)shouldHitTestKey:(id)arg1;
- (BOOL)shouldMatchCaseForDomainKeys;
- (BOOL)shouldMergeKey:(id)arg1;
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (BOOL)shouldRetestTouchDraggedFromKey:(id)arg1;
- (BOOL)shouldSendStringForFlick:(id)arg1;
- (BOOL)shouldSendTouchUpToInputManager:(id)arg1;
- (BOOL)shouldSendTouchUpToRecorder:(id)arg1;
- (BOOL)shouldShowDictationKey;
- (BOOL)shouldShowIndicator;
- (BOOL)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)shouldYieldToControlCenterForFlickWithInitialPoint:(struct CGPoint)arg1 finalPoint:(struct CGPoint)arg2;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (void)showMenu:(id)arg1 forKey:(id)arg2;
- (void)showPopupVariantsForKey:(id)arg1;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4;
- (void)showSplitTransitionView:(BOOL)arg1;
- (id)simulateTouch:(struct CGPoint)arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)splitNameForKeyplane:(id)arg1;
- (id)splitNameForKeyplaneName:(id)arg1;
- (int)stateForCandidateListKey:(id)arg1;
- (int)stateForDictationKey:(id)arg1;
- (int)stateForKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (int)stateForManipulationKey:(id)arg1;
- (int)stateForMultitapReverseKey:(id)arg1;
- (int)stateForShiftKey:(id)arg1;
- (int)stateForStylingKey:(id)arg1;
- (BOOL)supportStylingWithKey:(id)arg1;
- (BOOL)supportsEmoji;
- (void)swipeDetected:(id)arg1;
- (id)synthesizeTouchUpEventForKey:(id)arg1;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (unsigned long long)textEditingKeyMask;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (id)touchInfoForKey:(id)arg1;
- (void)touchMultitapTimer;
- (BOOL)touchPassesDragThreshold:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (void)uninstallGestureRecognizers;
- (unsigned long long)upActionFlagsForKey:(id)arg1;
- (void)upActionShift;
- (void)updateBackgroundCorners;
- (void)updateBackgroundIfNeeded;
- (void)updateCachedKeyplaneKeycaps;
- (void)updateCurrencySymbolForKey:(id)arg1 withCurrencyString:(id)arg2;
- (void)updateGlobeKeyDisplayString;
- (void)updateKeyCentroids;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (void)updateLayoutTags;
- (void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2;
- (void)updateLocalizedKeys:(BOOL)arg1;
- (void)updateLocalizedKeysOnKeyplane:(id)arg1;
- (void)updateMoreAndInternationalKeys;
- (void)updatePanAlternativesForTouchInfo:(id)arg1;
- (void)updatePhysicalKeyboardEvent:(id)arg1 withMarkedInput:(id)arg2;
- (void)updateReturnKeysIfNeeded;
- (void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(struct CGPoint)arg3;
- (void)updateShiftKeyState;
- (void)updateTransitionWithFlags:(unsigned long long)arg1;
- (BOOL)useScaledGeometrySet;
- (BOOL)usesAutoShift;
- (int)visualStyleForKeyboardIfSplit:(BOOL)arg1;
- (void)willBeginIndirectSelectionGesture;
- (void)willBeginIndirectSelectionGesture:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willRotate;

@end

