//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIContentSizeCategoryAdjusting-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIKeyInputPrivate-Protocol.h>
#import <UIKit/UIKeyboardInput-Protocol.h>
#import <UIKit/UIPopoverControllerDelegate-Protocol.h>
#import <UIKit/UITextInput-Protocol.h>
#import <UIKit/UITextInputTraits_Private-Protocol.h>
#import <UIKit/_UIFloatingContentViewDelegate-Protocol.h>
#import <UIKit/_UILayoutBaselineUpdating-Protocol.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSAttributedString, NSDictionary, NSIndexSet, NSLayoutConstraint, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UIInputContextHistory, UILabel, UISystemInputViewController, UITapGestureRecognizer, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, UIVisualEffectView, _UIBaselineLayoutStrut, _UICascadingTextStorage, _UIDetachedFieldEditorBackgroundView, _UIFloatingContentView, _UIFullFontSize;
@protocol UITextFieldDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, UIKeyInputPrivate, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding, UIContentSizeCategoryAdjusting>
{
    _UICascadingTextStorage *_textStorage;
    long long _borderStyle;
    double _minimumFontSize;
    id _delegate;
    UIImage *_background;
    UIImage *_disabledBackground;
    long long _clearButtonMode;
    UIView *_leftView;
    long long _leftViewMode;
    UIView *_rightView;
    long long _rightViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    _UIFullFontSize *_fullFontSize;
    struct UIEdgeInsets _padding;
    struct _NSRange _selectionRangeWhenNotEditing;
    int _scrollXOffset;
    int _scrollYOffset;
    float _progress;
    UIButton *_clearButton;
    struct CGSize _clearButtonOffset;
    struct CGSize _leftViewOffset;
    struct CGSize _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    _UIFloatingContentView *_floatingContentView;
    UIVisualEffectView *_contentBackdropView;
    _UIDetachedFieldEditorBackgroundView *_fieldEditorBackgroundView;
    UIVisualEffectView *_fieldEditorEffectView;
    UITextFieldLabel *_displayLabel;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    double _labelOffset;
    NSAttributedString *_overriddenPlaceholder;
    long long _overriddenPlaceholderAlignment;
    UITextInteractionAssistant *_interactionAssistant;
    UITapGestureRecognizer *_selectGestureRecognizer;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UIView *_recentsAccessoryView;
    UISystemInputViewController *_systemInputViewController;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    struct {
        unsigned int verticallyCenterText:1;
        unsigned int isAnimating:4;
        unsigned int inactiveHasDimAppearance:1;
        unsigned int becomesFirstResponderOnClearButtonTap:1;
        unsigned int clearsPlaceholderOnBeginEditing:1;
        unsigned int adjustsFontSizeToFitWidth:1;
        unsigned int fieldEditorAttached:1;
        unsigned int canBecomeFirstResponder:1;
        unsigned int shouldSuppressShouldBeginEditing:1;
        unsigned int inResignFirstResponder:1;
        unsigned int undoDisabled:1;
        unsigned int explicitAlignment:1;
        unsigned int implementsCustomDrawing:1;
        unsigned int needsClearing:1;
        unsigned int suppressContentChangedNotification:1;
        unsigned int allowsEditingTextAttributes:1;
        unsigned int usesAttributedText:1;
        unsigned int backgroundViewState:2;
        unsigned int clearingBehavior:2;
        unsigned int overridePasscodeStyle:1;
        unsigned int shouldResignWithoutUpdate:1;
        unsigned int blurEnabled:1;
        unsigned int disableFocus:1;
        unsigned int disableRemoteTextEditing:1;
    } _textFieldFlags;
    BOOL _deferringBecomeFirstResponder;
    BOOL _avoidBecomeFirstResponder;
    BOOL _setSelectionRangeAfterFieldEditorIsAttached;
    BOOL _animateNextHighlightChange;
    CUICatalog *_cuiCatalog;
    CUIStyleEffectConfiguration *_cuiStyleEffectConfiguration;
    double _roundedRectBackgroundCornerRadius;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _tvUseVibrancy;
    BOOL _disableTextColorUpdateOnTraitCollectionChange;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
    UIColor *_tvCustomTextColor;
    UIColor *_tvCustomFocusedTextColor;
}

@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (strong, nonatomic, setter=_setBaselineLayoutConstraint:) NSLayoutConstraint *_baselineLayoutConstraint; // @synthesize _baselineLayoutConstraint;
@property (strong, nonatomic, setter=_setBaselineLayoutLabel:) _UIBaselineLayoutStrut *_baselineLayoutLabel; // @synthesize _baselineLayoutLabel;
@property (nonatomic) BOOL _disableTextColorUpdateOnTraitCollectionChange; // @synthesize _disableTextColorUpdateOnTraitCollectionChange;
@property (strong, nonatomic) UIColor *_tvCustomFocusedTextColor; // @synthesize _tvCustomFocusedTextColor;
@property (strong, nonatomic) UIColor *_tvCustomTextColor; // @synthesize _tvCustomTextColor;
@property (nonatomic) BOOL _tvUseVibrancy; // @synthesize _tvUseVibrancy;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property (strong, nonatomic) UIImage *background; // @synthesize background=_background;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) long long borderStyle; // @synthesize borderStyle=_borderStyle;
@property (nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property (nonatomic) BOOL clearsOnBeginEditing;
@property (nonatomic) BOOL clearsOnInsertion;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;
@property (nonatomic) BOOL deferBecomingResponder; // @dynamic deferBecomingResponder;
@property (weak, nonatomic) id<UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (strong, nonatomic) UIImage *disabledBackground; // @synthesize disabledBackground=_disabledBackground;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText; // @dynamic displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText; // @dynamic displaySecureTextUsingPlainText;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (strong, nonatomic) UIFont *font;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (strong) UIView *inputAccessoryView;
@property (strong, nonatomic) UIInputContextHistory *inputContextHistory;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (strong) UIView *inputView; // @synthesize inputView=_inputView;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (strong, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property (nonatomic) long long keyboardType; // @dynamic keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (strong, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property (nonatomic) long long leftViewMode; // @synthesize leftViewMode=_leftViewMode;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (strong) UIView *recentsAccessoryView;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property (strong, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property (nonatomic) long long rightViewMode; // @synthesize rightViewMode=_rightViewMode;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (strong, nonatomic) UIColor *selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage;
@property (strong, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange validTextRange;

+ (BOOL)_isCompatibilityTextField;
+ (BOOL)_isDisplayingShortcutViewController;
+ (id)_tvDefaultTextColorDarkKeyboard;
+ (id)_tvDefaultTextColorLightKeyboard;
+ (id)_tvPlaceholderTextColorDarkKeyboard;
+ (id)_tvPlaceholderTextColorFocused;
+ (id)_tvPlaceholderTextColorLightKeyboard;
- (void).cxx_destruct;
- (void)__resumeBecomeFirstResponder;
- (void)_activateSelectionView;
- (void)_addShortcut:(id)arg1;
- (void)_adjustPreferredFontForCurrentContentSizeCategory;
- (void)_applicationResuming:(id)arg1;
- (void)_applyRoundedRectBackgroundCornerRadiusToBackgroundViewWithWarning:(BOOL)arg1;
- (struct CGRect)_atomBackgroundViewFrame;
- (id)_attributedText;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(struct CGRect)arg1;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(BOOL)arg2;
- (id)_backgroundView;
- (double)_baselineLayoutConstraintConstantForBounds:(struct CGRect)arg1;
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;
- (void)_becomeFirstResponder;
- (long long)_blurEffectStyle;
- (long long)_blurEffectStyleForAppearance;
- (BOOL)_blurEnabled;
- (BOOL)_canDrawContent;
- (void)_clearBackgroundViews;
- (id)_clearButton;
- (void)_clearButtonClicked:(id)arg1;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (struct CGSize)_clearButtonSize;
- (void)_clearSelectionUI;
- (id)_contentBackdropView;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)_createBaselineLayoutLabelIfNecessary;
- (void)_createInteractionAssistant;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (long long)_currentTextAlignment;
- (id)_defaultPromptString;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (id)_dictationInterpretations;
- (void)_disableClipToBoundsForBorderStyleNone;
- (id)_displayLabel;
- (void)_drawTextInRect:(struct CGRect)arg1 forLabel:(id)arg2;
- (id)_effectiveContentView;
- (id)_encodableSubviews;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_endedEditing;
- (id)_fieldEditor;
- (BOOL)_fieldEditorAttached;
- (BOOL)_finishResignFirstResponder;
- (id)_floatingContentView;
- (void)_forceObscureAllText;
- (struct CGRect)_frameForLabel:(id)arg1 inTextRect:(struct CGRect)arg2;
- (double)_fullFontSize;
- (BOOL)_hasContent;
- (BOOL)_hasSuffixField;
- (BOOL)_heightShouldBeMini;
- (BOOL)_implementsCustomDrawing;
- (BOOL)_inPopover;
- (void)_initialScrollDidFinish:(id)arg1;
- (id)_inputController;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_installSelectGestureRecognizer;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (void)_invalidateDefaultFullFontSize;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShareViewController;
- (BOOL)_isPasscodeStyle;
- (BOOL)_isShowingPlaceholder;
- (BOOL)_isShowingPrefix;
- (BOOL)_labelShouldUseVibrancy;
- (void)_layoutContent;
- (void)_layoutLabels;
- (struct CGSize)_leftViewOffset;
- (float)_marginTop;
- (float)_marginTopForBounds:(struct CGRect)arg1;
- (float)_newFontSize:(float)arg1 maxSize:(float)arg2;
- (void)_nonDestructivelyResignFirstResponder;
- (struct CGPoint)_originForTextFieldLabel:(id)arg1;
- (BOOL)_overridePasscodeStyle;
- (BOOL)_ownsInputAccessoryView;
- (BOOL)_partsShouldBeMini;
- (double)_passcodeStyleAlpha;
- (id)_placeholderColor;
- (id)_placeholderLabel;
- (Class)_placeholderLabelClass;
- (id)_placeholderView;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (struct CGRect)_prefixFrame;
- (void)_promptForReplace:(id)arg1;
- (void)_propagateCuiProperties;
- (id)_proxyTextInput;
- (BOOL)_requiresKeyboardResetOnReload;
- (void)_resetSelectionUI;
- (void)_resignFirstResponder;
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (BOOL)_restoreFirstResponder;
- (struct CGSize)_rightViewOffset;
- (double)_roundedRectBackgroundCornerRadius;
- (void)_sanitizeText:(id)arg1;
- (struct CGPoint)_scrollOffset;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(BOOL)arg2;
- (id)_secureString:(id)arg1;
- (void)_selectGestureChanged:(id)arg1;
- (struct CGRect)_selectionClipRect;
- (void)_selectionMayChange:(id)arg1;
- (void)_setActualLeftView:(id)arg1;
- (void)_setActualLeftViewMode:(long long)arg1;
- (void)_setActualRightView:(id)arg1;
- (void)_setActualRightViewMode:(long long)arg1;
- (void)_setAttributedPlaceholder:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(BOOL)arg2;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (void)_setBackgroundStrokeWidth:(double)arg1;
- (void)_setBlurEnabled:(BOOL)arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDisableFocus:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setFullFontSize:(id)arg1;
- (void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLeftViewOffset:(struct CGSize)arg1;
- (void)_setNeedsStyleRecalc;
- (void)_setOverridePasscodeStyle:(BOOL)arg1;
- (void)_setOverridePlaceholder:(id)arg1 alignment:(long long)arg2;
- (void)_setPasscodeStyleAlpha:(double)arg1;
- (void)_setPlaceholder:(id)arg1;
- (void)_setPrefix:(id)arg1;
- (void)_setRightViewOffset:(struct CGSize)arg1;
- (void)_setRoundedRectBackgroundCornerRadius:(double)arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (void)_setSystemBackgroundViewActive:(BOOL)arg1;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect)arg1;
- (void)_share:(id)arg1;
- (BOOL)_shouldDetermineInterfaceStyleTextColor;
- (BOOL)_shouldEndEditing;
- (BOOL)_shouldObscureInput;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_showTextStyleOptions:(id)arg1;
- (BOOL)_showsAtomBackground;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1;
- (BOOL)_showsLeftView;
- (BOOL)_showsRightView;
- (void)_sizeChanged:(BOOL)arg1;
- (void)_stopObservingFieldEditorScroll;
- (struct CGRect)_suffixFrame;
- (long long)_suffixLabelTextAlignment;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (id)_systemBackgroundView;
- (Class)_systemBackgroundViewClass;
- (id)_systemInputViewController;
- (id)_text;
- (id)_textInputViewForAddingGestureRecognizers;
- (id)_textLabelView;
- (BOOL)_textNeedsSanitizing:(id)arg1;
- (struct CGSize)_textSize;
- (struct CGSize)_textSizeUsingFullFontSize:(BOOL)arg1;
- (id)_textStorageTextColor;
- (void)_transliterateChinese:(id)arg1;
- (id)_tvDefaultFocusedTextColor;
- (id)_tvDefaultInterfaceTextColor;
- (id)_tvDefaultKeyboardTextColor;
- (id)_tvDefaultTextColor;
- (id)_tvTypingAttributes;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)_tvUpdateContentBackdropView;
- (void)_tvUpdateTextColor;
- (id)_uiktest_placeholderLabelColor;
- (BOOL)_uiktest_shouldDisableTextColorUpdateOnTraitCollectionChange;
- (id)_uiktest_tvCustomTextColor;
- (BOOL)_uiktest_tvUseVibrancy;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateAtomBackground;
- (void)_updateAtomTextColor;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateBackgroundViewsAnimated:(BOOL)arg1;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateButtons;
- (void)_updateFieldEditorBackgroundViewLayout:(BOOL)arg1;
- (void)_updateForPasscodeAppearance;
- (void)_updateForTintColor;
- (void)_updateLabel;
- (void)_updateLabelAppearance;
- (void)_updatePlaceholderPosition;
- (void)_updateSuffix:(id)arg1;
- (void)_updateTextLabel;
- (BOOL)_useGesturesForEditableContent;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (id)actualFont;
- (double)actualMinimumFontSize;
- (struct CGRect)adjustedCaretRectForCaretRect:(struct CGRect)arg1;
- (int)atomStyle;
- (void)attachFieldEditor:(id)arg1;
- (id)automaticallySelectedOverlay;
- (id)backgroundColor;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (BOOL)becomeFirstResponder;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginSelectionChange;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)clearButton;
- (struct CGSize)clearButtonOffset;
- (struct CGRect)clearButtonRect;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (void)clearText;
- (int)clearingBehavior;
- (BOOL)clearsPlaceholderOnBeginEditing;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)copy:(id)arg1;
- (void)createPlaceholderIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(long long)arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (id)customOverlayContainer;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)deleteBackward;
- (BOOL)detachFieldEditor:(id)arg1;
- (void)didAttachFieldEditor:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)disableClearsOnInsertion;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)drawPrefixInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSuffixInRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (BOOL)drawsAsAtom;
- (struct CGRect)editRect;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endFloatingCursor;
- (void)endSelectionChange;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (struct _NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)finishedSettingPlaceholder;
- (void)finishedSettingTextOrAttributedText;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasSelection;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)iconRect;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct _NSRange)insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (void)interactionTintColorDidChange;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isEditable;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isUndoEnabled;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (float)paddingBottom;
- (float)paddingLeft;
- (float)paddingRight;
- (float)paddingTop;
- (void)paste:(id)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (void)scrollTextFieldToVisible;
- (id)searchText;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (void)selectAllFromFieldEditor:(id)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (struct _NSRange)selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAnimating:(BOOL)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAutoresizesTextToFit:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setClearButtonOffset:(struct CGSize)arg1;
- (void)setClearButtonStyle:(int)arg1;
- (void)setClearingBehavior:(int)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setDrawsAsAtom:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1 fullFontSize:(id)arg2;
- (void)setFont:(id)arg1 fullFontSize:(id)arg2 ambientOnly:(BOOL)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setInactiveHasDimAppearance:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelOffset:(float)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingTop:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setProgress:(float)arg1;
- (void)setSelectionRange:(struct _NSRange)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setTextAutorresizesToFit:(BOOL)arg1;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setTextCentersVertically:(BOOL)arg1;
- (void)setUndoEnabled:(BOOL)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize)shadowOffset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textLabel;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct CGRect)textRect;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoManager;
- (void)unmarkText;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (id)viewForLastBaselineLayout;
- (id)webView;
- (void)willAttachFieldEditor:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

