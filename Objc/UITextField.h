//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIContentSizeCategoryAdjusting-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIKeyInputPrivate-Protocol.h>
#import <UIKitCore/UIKeyboardInput-Protocol.h>
#import <UIKitCore/UIPopoverControllerDelegate-Protocol.h>
#import <UIKitCore/UITextDragSupporting-Protocol.h>
#import <UIKitCore/UITextDraggable-Protocol.h>
#import <UIKitCore/UITextDropSupporting-Protocol.h>
#import <UIKitCore/UITextDroppable-Protocol.h>
#import <UIKitCore/UITextFieldContent-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting_Internal-Protocol.h>
#import <UIKitCore/UIViewGhostedRangeSupporting-Protocol.h>
#import <UIKitCore/_UIDrawsTextInRect-Protocol.h>
#import <UIKitCore/_UIFloatingContentViewDelegate-Protocol.h>
#import <UIKitCore/_UILayoutBaselineUpdating-Protocol.h>
#import <UIKitCore/_UITextFieldCanvasViewContext-Protocol.h>
#import <UIKitCore/_UITextFieldVisualStyleSubject-Protocol.h>
#import <UIKitCore/_UITextItemDiscoverable-Protocol.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSArray, NSAttributedString, NSDictionary, NSIndexSet, NSLayoutConstraint, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIButton, UIColor, UIDragInteraction, UIDropInteraction, UIFieldEditor, UIFont, UIImage, UIImageView, UIInputContextHistory, UILabel, UIPasteConfiguration, UISystemInputViewController, UITapGestureRecognizer, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextPasteController, UITextPosition, UITextRange, UIView, UIVisualEffectView, _UIBaselineLayoutStrut, _UICascadingTextStorage, _UIDetachedFieldEditorBackgroundView, _UIFieldEditorLayoutManager, _UIFloatingContentView, _UIFullFontSize, _UITextFieldCanvasView, _UITextFieldVisualStyle, _UITextItemDiscoverer;
@protocol UICoordinateSpace, UITextDragDelegate, UITextDragDropSupport, UITextDropDelegate, UITextFieldDelegate, UITextInputDelegate, UITextInputTokenizer, UITextPasteDelegate;

@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, _UITextFieldVisualStyleSubject, UIViewGhostedRangeSupporting, _UIDrawsTextInRect, UITextInputTraits_Private, UIPopoverControllerDelegate, _UITextFieldCanvasViewContext, UIKeyInputPrivate, UITextDragSupporting, UITextDropSupporting, UITextPasteConfigurationSupporting_Internal, UITextFieldContent, _UITextItemDiscoverable, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, NSCoding, UIContentSizeCategoryAdjusting>
{
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
    UIView *_contentCoverView;
    long long _contentCoverViewMode;
    UIView *_backgroundCoverView;
    long long _backgroundCoverViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    _UIFullFontSize *_fullFontSize;
    struct UIEdgeInsets _padding;
    float _progress;
    UIButton *_clearButton;
    struct CGSize _clearButtonOffset;
    struct CGSize _leftViewOffset;
    struct CGSize _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    _UITextFieldCanvasView *_textContentView;
    _UIFloatingContentView *_floatingContentView;
    UIVisualEffectView *_contentBackdropView;
    _UIDetachedFieldEditorBackgroundView *_fieldEditorBackgroundView;
    UIVisualEffectView *_fieldEditorEffectView;
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
    UIFieldEditor *_fieldEditor;
    NSTextContainer *__textContainer;
    _UIFieldEditorLayoutManager *__layoutManager;
    _UICascadingTextStorage *_textStorage;
    NSDictionary *_linkTextAttributes;
    UITextPasteController *_pasteController;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UIView *_recentsAccessoryView;
    UISystemInputViewController *_systemInputViewController;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    id<UITextDragDropSupport> _textDragDropSupport;
    _UITextItemDiscoverer *_textItemDiscoverer;
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
        unsigned int visualEffectViewEnabled:1;
        unsigned int disableFocus:1;
        unsigned int disableRemoteTextEditing:1;
        unsigned int allowsAttachments:1;
        unsigned int isReceivingDrop:1;
        unsigned int contentCoverUnsecuresText:1;
        unsigned int forcesClearButtonHighContrastAppearance:1;
        unsigned int contentInsetsFromFontsValid:1;
    } _textFieldFlags;
    BOOL _deferringBecomeFirstResponder;
    BOOL _animateNextHighlightChange;
    CUICatalog *_cuiCatalog;
    CUIStyleEffectConfiguration *_cuiStyleEffectConfiguration;
    double _roundedRectBackgroundCornerRadius;
    NSArray *_overriddenAttributesForEditing;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _tvUseVibrancy;
    BOOL _disableTextColorUpdateOnTraitCollectionChange;
    id<UITextPasteDelegate> _pasteDelegate;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
    UIColor *_tvCustomTextColor;
    UIColor *_tvCustomFocusedTextColor;
    long long _textDragOptions;
    id<UITextDragDelegate> _textDragDelegate;
    id<UITextDropDelegate> _textDropDelegate;
    _UITextFieldVisualStyle *_visualStyle;
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
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsAttachments;
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
@property (nonatomic) struct CGPoint contentOffsetForSameViewDrops;
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
@property (readonly, nonatomic) struct CGPoint drawingScale;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property (strong, nonatomic) UIFont *font;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidePrediction;
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
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) BOOL learnsCorrections;
@property (strong, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property (nonatomic) long long leftViewMode; // @synthesize leftViewMode=_leftViewMode;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property (nonatomic) long long nonEditingLinebreakMode;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules; // @dynamic passwordRules;
@property (copy, nonatomic) UIPasteConfiguration *pasteConfiguration; // @dynamic pasteConfiguration;
@property (weak, nonatomic) id<UITextPasteDelegate> pasteDelegate; // @synthesize pasteDelegate=_pasteDelegate;
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
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property (nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property (nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSTextContainer *textContainer;
@property (readonly, nonatomic) struct CGPoint textContainerOrigin;
@property (copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property (readonly, nonatomic, getter=isTextDragActive) BOOL textDragActive;
@property (weak, nonatomic) id<UITextDragDelegate> textDragDelegate; // @synthesize textDragDelegate=_textDragDelegate;
@property (readonly, nonatomic) UIDragInteraction *textDragInteraction;
@property (nonatomic) long long textDragOptions; // @synthesize textDragOptions=_textDragOptions;
@property (readonly, nonatomic, getter=isTextDropActive) BOOL textDropActive;
@property (weak, nonatomic) id<UITextDropDelegate> textDropDelegate; // @synthesize textDropDelegate=_textDropDelegate;
@property (readonly, nonatomic) UIDropInteraction *textDropInteraction;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) id<UICoordinateSpace> textItemCoordinateSpace;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (strong, nonatomic) UIColor *underlineColorForSpelling;
@property (strong, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange validTextRange;
@property (strong, nonatomic) _UITextFieldVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;

+ (Class)_fieldEditorClass;
+ (BOOL)_isCompatibilityTextField;
+ (Class)_textPasteItemClass;
+ (BOOL)_wantsFadedEdges;
- (void).cxx_destruct;
- (void)__resumeBecomeFirstResponder;
- (void)_activateSelectionView;
- (void)_addFieldEditorToView;
- (void)_addShortcut:(id)arg1;
- (void)_addTextContentView;
- (void)_adjustFontForAccessibilityTraits:(BOOL)arg1;
- (void)_applicationResuming:(id)arg1;
- (void)_applyHighlightedAnimated:(BOOL)arg1;
- (void)_applyRoundedRectBackgroundCornerRadiusToBackgroundViewWithWarning:(BOOL)arg1;
- (struct CGRect)_atomBackgroundViewFrame;
- (void)_attachFieldEditor;
- (id)_attributedStringForInsertionOfAttributedString:(id)arg1;
- (id)_attributedText;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(struct CGRect)arg1;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(BOOL)arg2;
- (void)_backgroundCoverStateDidChange;
- (id)_backgroundCoverView;
- (long long)_backgroundCoverViewMode;
- (id)_backgroundView;
- (double)_baselineLayoutConstraintConstantForBounds:(struct CGRect)arg1;
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;
- (void)_becomeFirstResponder;
- (long long)_blurEffectStyle;
- (long long)_blurEffectStyleForAppearance;
- (BOOL)_blurEnabled;
- (struct CGRect)_boundsForTextRectExcludingButtons:(struct CGRect)arg1;
- (BOOL)_canDrawContent;
- (id)_canvasView;
- (void)_clearBackgroundViews;
- (id)_clearButton;
- (void)_clearButtonClicked:(id)arg1;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (struct CGSize)_clearButtonSize;
- (void)_clearSelectionUI;
- (struct CGRect)_clipRectForFadedEdges;
- (id)_contentBackdropView;
- (void)_contentCoverStateDidChange;
- (BOOL)_contentCoverUnsecuresText;
- (id)_contentCoverView;
- (long long)_contentCoverViewMode;
- (id)_contentSnapshot;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)_createBaselineLayoutLabelIfNecessary;
- (void)_createInteractionAssistant;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (long long)_currentTextAlignment;
- (id)_currentTextColor;
- (id)_defaultPromptString;
- (void)_define:(id)arg1;
- (BOOL)_delegateShouldBeginEditing;
- (BOOL)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange)arg1 replacementString:(id)arg2 delegateCares:(BOOL *)arg3;
- (BOOL)_delegateShouldClear;
- (BOOL)_delegateShouldEndEditing;
- (BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_detachFieldEditor;
- (void)_detachFieldEditorDiscardingEdits:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_dictationInterpretations;
- (void)_didAttachFieldEditor;
- (void)_didChangeSecureTextEntry;
- (void)_didSetFont:(id)arg1;
- (void)_didUpdateAfterDetachingFieldEditor;
- (void)_disableClipToBoundsForBorderStyleNone;
- (void)_drawTextInRect:(struct CGRect)arg1 forLabel:(id)arg2;
- (id)_effectiveContentView;
- (id)_effectivePasteConfiguration;
- (id)_encodableSubviews;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_ensureClearButtonImageForControlState:(unsigned long long)arg1;
- (id)_fieldEditor;
- (BOOL)_fieldEditorAttached;
- (double)_fieldEditorHeight;
- (BOOL)_finishResignFirstResponder;
- (id)_floatingContentView;
- (void)_forceObscureAllText;
- (BOOL)_forcesClearButtonHighContrastAppearance;
- (double)_fullFontSize;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)_hasContent;
- (BOOL)_hasFloatingFieldEditor;
- (BOOL)_hasSuffixField;
- (BOOL)_heightShouldBeMini;
- (BOOL)_implementsCustomDrawing;
- (id)_implicitPasteConfigurationClasses;
- (BOOL)_inPopover;
- (BOOL)_inVibrantContentView;
- (void)_increaseContrastSettingChanged:(id)arg1;
- (void)_initContentView;
- (void)_initIncreasedContrastNotifications;
- (void)_initTextStorage;
- (void)_initialScrollDidFinish:(id)arg1;
- (id)_inputController;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_installSelectGestureRecognizer;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_invalidateAfterUpdatingEditingAttributes;
- (void)_invalidateAllGlyphsAndTextLayout;
- (void)_invalidateBaselineLayoutConstraints;
- (void)_invalidateDefaultFullFontSize;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShareViewController;
- (BOOL)_isDisplayingShortcutViewController;
- (BOOL)_isFocused;
- (BOOL)_isPasscodeStyle;
- (BOOL)_isShowingPlaceholder;
- (BOOL)_isShowingPrefix;
- (long long)_keyboardAppearance;
- (void)_layoutContent;
- (void)_layoutLabels;
- (id)_layoutManager;
- (struct CGSize)_leftViewOffset;
- (float)_marginTop;
- (float)_marginTopForBounds:(struct CGRect)arg1;
- (float)_newFontSize:(float)arg1 maxSize:(float)arg2;
- (void)_nonDestructivelyResignFirstResponder;
- (void)_notifyDidBeginEditing;
- (void)_notifyDidEndEditing;
- (struct CGPoint)_originForTextFieldLabel:(id)arg1;
- (BOOL)_overridePasscodeStyle;
- (BOOL)_ownsInputAccessoryView;
- (BOOL)_partsShouldBeMini;
- (double)_passcodeStyleAlpha;
- (void)_pasteSessionDidFinish:(id)arg1;
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
- (struct _NSRange)_rangeForSetText;
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
- (void)_setAttributedTextOnFieldEditor:(id)arg1;
- (void)_setBackgroundCoverView:(id)arg1;
- (void)_setBackgroundCoverViewMode:(long long)arg1;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (void)_setBackgroundStrokeWidth:(double)arg1;
- (void)_setBlurEnabled:(BOOL)arg1;
- (void)_setContentCoverUnsecuresText:(BOOL)arg1;
- (void)_setContentCoverView:(id)arg1;
- (void)_setContentCoverViewMode:(long long)arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDisableFocus:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setForcesClearButtonHighContrastAppearance:(BOOL)arg1;
- (void)_setForegroundViewsAlpha:(double)arg1;
- (void)_setFullFontSize:(id)arg1;
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
- (void)_setTextColor:(id)arg1;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect)arg1;
- (void)_setVisualEffectViewEnabled:(BOOL)arg1 backgroundColor:(id)arg2;
- (void)_setupDefaultStyleEffectConfiguration;
- (void)_share:(id)arg1;
- (BOOL)_shouldDetermineInterfaceStyleTextColor;
- (BOOL)_shouldEndEditing;
- (BOOL)_shouldObscureInput;
- (BOOL)_shouldResignOnEditingDidEndOnExit;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (BOOL)_shouldUnobscureTextWithContentCover;
- (void)_showTextStyleOptions:(id)arg1;
- (BOOL)_showsAtomBackground;
- (BOOL)_showsBackgroundCoverView;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1;
- (BOOL)_showsContentCoverView;
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
- (id)_targetForDrawTextInRect;
- (id)_text;
- (id)_textContainer;
- (id)_textInputViewForAddingGestureRecognizers;
- (id)_textItemDiscoverer;
- (BOOL)_textNeedsSanitizing:(id)arg1;
- (struct _NSRange)_textRangeForTextStorageRange:(struct _NSRange)arg1;
- (BOOL)_textShouldFillFieldEditorHeight;
- (BOOL)_textShouldUseVibrancy;
- (struct CGSize)_textSize;
- (struct CGSize)_textSizeUsingFullFontSize:(BOOL)arg1;
- (id)_textStorage;
- (id)_textStorageTextColor;
- (void)_transliterateChinese:(id)arg1;
- (BOOL)_tvHasFloatingFieldEditor;
- (id)_tvTypingAttributes;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)_tvUpdateContentBackdropView;
- (void)_tvUpdateTextColor;
- (id)_uiktest_placeholderLabelColor;
- (BOOL)_uiktest_shouldDisableTextColorUpdateOnTraitCollectionChange;
- (id)_uiktest_tvCustomTextColor;
- (BOOL)_uiktest_tvUseVibrancy;
- (void)_uninstallSelectGestureRecognizer;
- (struct _NSRange)_unobscuredSecureRange;
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
- (void)_updateSelectionGestures;
- (void)_updateSuffix:(id)arg1;
- (void)_updateTextEffectsConfigurationIfNeeded;
- (BOOL)_useGesturesForEditableContent;
- (long long)_userInterfaceStyle;
- (struct _NSRange)_visibleRangeWithLayout:(BOOL)arg1;
- (BOOL)_visualEffectViewEnabled;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_willAttachFieldEditor;
- (void)_willUpdateAfterDetachingFieldEditor;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (id)accessibilityPath;
- (id)actualFont;
- (double)actualMinimumFontSize;
- (void)addGhostedRange:(id)arg1;
- (void)addInvisibleRange:(id)arg1;
- (struct CGRect)adjustedCaretRectForCaretRect:(struct CGRect)arg1;
- (BOOL)allowsDraggingAttachments;
- (int)atomStyle;
- (id)attributedTextInRange:(id)arg1;
- (id)automaticallySelectedOverlay;
- (id)backgroundColor;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)becomeDropResponder;
- (BOOL)becomeFirstResponder;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginSelectionChange;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (BOOL)canBecomeDropResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelTrackingWithEvent:(id)arg1;
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
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
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
- (void)didGenerateCancelPreview:(id)arg1;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)disableClearsOnInsertion;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (void)draggingFinished:(id)arg1;
- (void)draggingStarted;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)drawPrefixInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSuffixInRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (BOOL)drawsAsAtom;
- (void)droppingFinished;
- (void)droppingStarted;
- (struct CGRect)editRect;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endFloatingCursor;
- (void)endSelectionChange;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
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
- (BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)iconRect;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertAttributedText:(id)arg1;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct _NSRange)insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
- (void)insertText:(id)arg1 style:(long long)arg2 alternatives:(id)arg3;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (id)interactionAssistant;
- (void)interactionTintColorDidChange;
- (void)invalidateDropCaret;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isUndoEnabled;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (id)linkTextAttributes;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
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
- (void)pasteAndMatchStyle:(id)arg1;
- (void)pasteItemProviders:(id)arg1;
- (void)performCancelAnimations;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeAllGhostedRanges;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeFromSuperview;
- (void)removeInvisibleRange:(id)arg1;
- (void)removeTextPlaceholder:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)resignDropResponderWithDropPerformed:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (void)sanitizeAttributedText:(id)arg1;
- (void)scrollTextFieldToVisibleIfNecessary;
- (id)searchText;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (struct _NSRange)selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAnimating:(BOOL)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
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
- (void)setClipsToBounds:(BOOL)arg1;
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
- (void)setLinkTextAttributes:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setNeedsLayout;
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
- (id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;
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
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)validateCommand:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)visibleTextRange;
- (id)webView;
- (id)willGenerateCancelPreview;
- (void)willMoveToWindow:(id)arg1;

@end

