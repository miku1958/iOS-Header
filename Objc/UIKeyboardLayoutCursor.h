//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardLayoutStar.h>

#import <UIKitCore/UIKBAlertControllerDelegate-Protocol.h>

@class NSArray, NSString, UIAlertController, UIKBTree, UILabel, UILexicon, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar <UIKBAlertControllerDelegate>
{
    UIKBTree *_indirectKeyboard;
    UIView *_selectionView;
    NSArray *_keyplaneKeys;
    long long _selectedKeyIndex;
    BOOL _ignoreEventsUntilPressEnds;
    UILexicon *_recentInputs;
    BOOL _disableTouchInput;
    BOOL _suppressOperations;
    UIKBTree *_cachedMultitapKeyplane;
    BOOL _cachedCanMultitap;
    UILabel *_dictationHelpLabel;
    BOOL _didVariantDelete;
    BOOL _isForwardingEvent;
    BOOL _overrideInitialKey;
    int _overridenSelectedKeyType;
    BOOL _shouldConfigureFloatingContentView;
    BOOL _shouldToggleLetterCaseNext;
    struct CGPoint _keyplaneSwitchSelectedKeyFrameCenter;
    BOOL _selectInitialKey;
    UIAlertController *_recentInputsAlert;
    NSString *_keyplaneBeforeDictation;
    long long _selectedKeyBeforeDictation;
    UIWindow *_focusWindow;
}

@property (readonly, nonatomic) UIKBTree *currentKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIWindow *focusWindow; // @synthesize focusWindow=_focusWindow;
@property (readonly, nonatomic) struct CGRect globalFrameForCurrentKey;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *keyplaneBeforeDictation; // @synthesize keyplaneBeforeDictation=_keyplaneBeforeDictation;
@property (strong, nonatomic) UIAlertController *recentInputsAlert; // @synthesize recentInputsAlert=_recentInputsAlert;
@property (nonatomic) long long selectedKeyBeforeDictation; // @synthesize selectedKeyBeforeDictation=_selectedKeyBeforeDictation;
@property (readonly, nonatomic, getter=isSlimLinearKeyboardTV) BOOL slimLinearKeyboardTV;
@property (readonly) Class superclass;

+ (id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2;
+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
- (void)_accessibilityBoldTextChanged:(id)arg1;
- (void)_configureFloatingContentViewsForTV;
- (BOOL)_handleMoveWithEvent:(id)arg1;
- (BOOL)_handlePhysicalButtonEvent:(id)arg1;
- (BOOL)_handleRemoteControlReceivedWithEvent:(id)arg1;
- (BOOL)_handleWheelChangedWithEvent:(id)arg1;
- (unsigned long long)_indexOfFirstKeyOfInteractionType:(int)arg1;
- (BOOL)_isDirectionalHeading:(unsigned long long)arg1;
- (BOOL)_isKeyboardReverseOfSystemLanguageCharacterDirection;
- (id)_keyplaneForKeyplaneProperties;
- (BOOL)_menuTapShouldExitVariants;
- (void)_moveWithEvent:(id)arg1;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)acceptRecentInputIfNecessary;
- (int)activeStateForKey:(id)arg1;
- (void)alertDidDismiss;
- (id)cacheTokenForKeyplane:(id)arg1;
- (BOOL)canHandleEvent:(id)arg1;
- (BOOL)canMultitap;
- (void)clearVariantStateForKey:(id)arg1;
- (void)configureFloatingContentViewsIfNeeded;
- (unsigned long long)cursorLocation;
- (void)deactivateKey:(id)arg1;
- (void)dealloc;
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;
- (BOOL)diacriticForwardCompose;
- (void)didSelectRecentInputString:(id)arg1;
- (unsigned long long)downActionFlagsForKey:(id)arg1;
- (int)enabledStateForKey:(id)arg1;
- (void)endMultitapForKey:(id)arg1;
- (void)flushKeyCache:(id)arg1;
- (unsigned char)getHandRestRecognizerState;
- (unsigned long long)getNextKeyplaneIndex:(unsigned long long)arg1;
- (BOOL)handleLinearDirectionalInput:(int)arg1;
- (void)handleVariantDeleteIfNecessaryForKey:(id)arg1;
- (BOOL)handleVisualDirectionalInput:(int)arg1;
- (BOOL)ignoresShiftState;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAlphabeticPlane;
- (BOOL)isKanaPlane;
- (BOOL)isKeyplaneDisabledWithName:(id)arg1;
- (BOOL)isPossibleToTypeFast;
- (id)keyHitTestInSameRowAsCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (id)keyViewAnimator;
- (void)longPressAction;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)refreshSelectedCellIfNecessaryForKey:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)restoreFocusFromEntryPoint:(struct CGPoint)arg1;
- (void)returnToKeyplaneAfterDictation;
- (void)runWithSuppressedActions:(CDUnknownBlockType)arg1;
- (void)selectInitialKeyIfNecessary;
- (struct CGRect)selectionFrameForKeyIndex:(long long)arg1;
- (void)setCursorLocation:(unsigned long long)arg1;
- (void)setDisableTouchInput:(BOOL)arg1;
- (void)setHighlightedVariantIndex:(long long)arg1 key:(id)arg2;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;
- (void)setKeyplaneName:(id)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setSelectedKeyIndex:(long long)arg1;
- (void)setShift:(BOOL)arg1;
- (BOOL)shouldAllowCurrentKeyplaneReload;
- (BOOL)shouldDeactivateWithoutWindow;
- (BOOL)shouldMatchCaseForDomainKeys;
- (BOOL)shouldMergeKey:(id)arg1;
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (BOOL)shouldRetestKey:(id)arg1 slidOffKey:(id)arg2 withKeyplane:(id)arg3;
- (BOOL)shouldToggleKeyplaneWithName:(id)arg1;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (void)showPopupKeyplaneSwitcher;
- (void)showRecentInputsAlert;
- (int)stateForCandidateListKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (BOOL)supportsContinuousPath;
- (BOOL)supportsEmoji;
- (void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1;
- (void)takeKeyAction:(id)arg1;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (long long)targetKeyIndexAtOffset:(struct CGPoint)arg1 fromKey:(id)arg2;
- (long long)targetKeyIndexFromPoint:(struct CGPoint)arg1;
- (long long)targetKeyIndexFromPoint:(struct CGPoint)arg1 inKeys:(id)arg2;
- (void)updateDictationHelpString;
- (void)updateKeyplaneSwitchEdgeBiases;
- (void)updateRecentInputsKeyIfNecessary;
- (void)updateStatesForGridSelection;
- (BOOL)usesAutoShift;
- (unsigned long long)variantCountForKey:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

