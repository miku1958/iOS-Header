//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIScrollView.h>

#import <UIKitCore/UIContentSizeCategoryAdjusting-Protocol.h>
#import <UIKitCore/UIKeyboardInput-Protocol.h>
#import <UIKitCore/UITextAutoscrolling-Protocol.h>
#import <UIKitCore/UITextDragSupporting-Protocol.h>
#import <UIKitCore/UITextDraggable-Protocol.h>
#import <UIKitCore/UITextDropSupporting-Protocol.h>
#import <UIKitCore/UITextDroppable-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputControllerDelegate-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting_Internal-Protocol.h>
#import <UIKitCore/UIViewGhostedRangeSupporting-Protocol.h>
#import <UIKitCore/_UILayoutBaselineUpdating-Protocol.h>
#import <UIKitCore/_UIMultilineTextContentSizing-Protocol.h>
#import <UIKitCore/_UITextContainerViewDelegate-Protocol.h>
#import <UIKitCore/_UITextContent-Protocol.h>
#import <UIKitCore/_UITextItemDiscoverable-Protocol.h>
#import <UIKitCore/_UITextItemInteracting-Protocol.h>
#import <UIKitCore/_UITextViewContentPaddingDelegate-Protocol.h>
#import <UIKitCore/_UIViewBaselineSpacing-Protocol.h>

@class CUICatalog, NSAttributedString, NSDictionary, NSIndexSet, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIAutoscroll, UIColor, UIDragInteraction, UIDropInteraction, UIFont, UIImage, UIInputContextHistory, UILabel, UILayoutManagerBasedDraggableGeometry, UIPasteConfiguration, UITextInputController, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UICharacterStreamingManager, _UITextContainerView, _UITextItemDiscoverer, _UITextLayoutView, _UITextSizeCache, _UITextViewContentPadding, _UITextViewRestorableScrollPosition, _UITextViewVisualStyle;
@protocol UICoordinateSpace, UITextDragDelegate, UITextDragDropSupport, UITextDropDelegate, UITextInputDelegate, UITextInputTokenizer, UITextPasteDelegate, UITextViewDelegate;

@interface UITextView : UIScrollView <_UIViewBaselineSpacing, _UITextContainerViewDelegate, _UITextViewContentPaddingDelegate, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UIViewGhostedRangeSupporting, _UITextItemInteracting, UITextPasteConfigurationSupporting_Internal, UITextDragSupporting, UITextDropSupporting, _UITextContent, _UITextItemDiscoverable, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, UIContentSizeCategoryAdjusting>
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    _UITextContainerView *_containerView;
    _UITextLayoutView *_layoutView;
    id _inputDelegate;
    id<UITextInputTokenizer> _tokenizer;
    UITextInputController *_inputController;
    UITextInteractionAssistant *_interactionAssistant;
    UITextInputTraits *_textInputTraits;
    UIAutoscroll *_autoscroll;
    struct {
        unsigned int needsScrollToSelectionAfterLayout:1;
        unsigned int editable:1;
        unsigned int reentrancyGuard:1;
        unsigned int usesExplicitPreferredMaxLayoutWidth:1;
        unsigned int interactiveSelectionDisabled:1;
        unsigned int selectable:1;
        unsigned int shouldPresentSheetsInAWindowLayeredAboveTheKeyboard:1;
        unsigned int shouldAutoscrollAboveBottom:1;
        unsigned int containerViewSizeInvalid:1;
        unsigned int isAnimatingPaste:1;
        unsigned int textSizeCacheEnabled:1;
    } _tvFlags;
    long long _contentSizeUpdateSeqNo;
    _UITextViewRestorableScrollPosition *_scrollTarget;
    unsigned long long _scrollPositionDontRecordCount;
    _UITextViewRestorableScrollPosition *_scrollPosition;
    double _offsetFromScrollPosition;
    unsigned long long _dataDetectorTypes;
    double _preferredMaxLayoutWidth;
    UILabel *_placeholderLabel;
    UIView *_inputAccessoryView;
    NSDictionary *_linkTextAttributes;
    _UICharacterStreamingManager *_characterStreamingManager;
    NSDictionary *_siriParameters;
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
    _UITextSizeCache *_intrinsicSizeCache;
    CUICatalog *_cuiCatalog;
    struct UIEdgeInsets _beforeFreezingTextContainerInset;
    struct UIEdgeInsets _duringFreezingTextContainerInset;
    struct CGSize _beforeFreezingFrameSize;
    BOOL _unfreezingTextContainerSize;
    struct CGRect _frameOfTrailingWhitespace;
    id<UITextDragDropSupport> _textDragDropSupport;
    UILayoutManagerBasedDraggableGeometry *_geometry;
    long long _defaultTextPreviewOptions;
    _UITextItemDiscoverer *_textItemDiscoverer;
    _UITextViewContentPadding *_topContentPadding;
    _UITextViewContentPadding *_bottomContentPadding;
    struct CGPoint _scrollEndDraggingVelocity;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _clearsOnInsertion;
    id<UITextPasteDelegate> _pasteDelegate;
    double _multilineContextWidth;
    long long _textDragOptions;
    id<UITextDragDelegate> _textDragDelegate;
    id<UITextDropDelegate> _textDropDelegate;
    UIView *_inputView;
    _UITextViewVisualStyle *_visualStyle;
}

@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL clearsOnInsertion; // @synthesize clearsOnInsertion=_clearsOnInsertion;
@property (nonatomic) struct CGPoint contentOffsetForSameViewDrops;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) id<UITextViewDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic, getter=isEditable) BOOL editable;
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
@property (readonly, nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property (nonatomic) long long keyboardType; // @dynamic keyboardType;
@property (readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property (nonatomic) BOOL learnsCorrections;
@property (copy, nonatomic) NSDictionary *linkTextAttributes;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) UIPasteConfiguration *pasteConfiguration; // @dynamic pasteConfiguration;
@property (weak, nonatomic) id<UITextPasteDelegate> pasteDelegate; // @synthesize pasteDelegate=_pasteDelegate;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic) struct _NSRange selectedRange;
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
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property (nonatomic) struct UIEdgeInsets textContainerInset;
@property (copy, nonatomic) NSString *textContentType;
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
@property (readonly, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (strong, nonatomic) UIView *uiss_snapshotView;
@property (strong, nonatomic) UIColor *underlineColorForSpelling;
@property (strong, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) BOOL usesStandardTextScaling;
@property (nonatomic) struct _NSRange validTextRange;
@property (strong, nonatomic) _UITextViewVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;

+ (id)_defaultTextColor;
+ (BOOL)_isCompatibilityTextView;
- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_adjustFontForAccessibilityTraits:(BOOL)arg1;
- (BOOL)_allowAnimatedUpdateSelectionRectViews;
- (BOOL)_allowHighlightForTextInteractableItem:(id)arg1;
- (BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(id)arg2;
- (void)_applyOptionsToGeometry;
- (id)_attributedStringForInsertionOfAttributedString:(id)arg1;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (double)_baselineOffsetFromBottom;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (void)_cancelDataDetectors;
- (id)_canvasView;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(BOOL)arg2 isEditable:(BOOL)arg3 isSelectable:(BOOL)arg4 isDraggable:(BOOL)arg5;
- (void)_constrainTiledRenderingToRect:(struct CGRect)arg1;
- (struct CGSize)_containerSizeForBoundsSize:(struct CGSize)arg1 allowingOverflow:(BOOL)arg2;
- (id)_containerView;
- (struct CGPoint)_contentOffsetForScrollToVisible:(struct _NSRange)arg1;
- (struct CGPoint)_contentOffsetForScrollingToRect:(struct CGRect)arg1;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (id)_currentDefaultAttributes;
- (double)_currentPreferredMaxLayoutWidth;
- (long long)_defaultTextPreviewOptions;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (void)_didFinishSpeechRecognition;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (void)_disableTiledViews;
- (unsigned long long)_effectiveDataDetectorTypes;
- (id)_effectivePasteConfiguration;
- (void)_enableSiriAnimationDictationStyle;
- (void)_ensureCleanedUp;
- (double)_firstBaselineOffsetFromTop;
- (struct CGPoint)_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_firstGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (id)_fontInfoForBaselineSpacing;
- (struct CGRect)_frameOfTrailingWhitespace;
- (BOOL)_freezeTextContainerSize;
- (id)_getDelegateZoomView;
- (BOOL)_hasBaseline;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;
- (BOOL)_hasFontInfoForVerticalBaselineSpacing;
- (id)_implicitPasteConfigurationClasses;
- (id)_inputController;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (BOOL)_interactionPossibleWithAttachment:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_invalidateContainerViewSize;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShareViewController;
- (BOOL)_isDisplayingShortcutViewController;
- (BOOL)_isInteractiveTextSelectionDisabled;
- (BOOL)_isTextSizeCacheEnabled;
- (void)_keyboardDidShow:(id)arg1;
- (struct CGPoint)_lastGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (id)_layoutDebuggingTitle;
- (void)_layoutPlaceholder;
- (void)_layoutText;
- (id)_linkTextAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (BOOL)_mightHaveInteractableItems;
- (BOOL)_mightHaveSelection;
- (double)_multilineContextWidth;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_notifyDidBeginEditing;
- (void)_notifyDidEndEditing;
- (void)_observedTextViewDidChange:(id)arg1;
- (BOOL)_ownsInputAccessoryView;
- (void)_pasteAttributedString:(id)arg1 pasteAsRichText:(BOOL)arg2;
- (void)_performLayoutCalculation:(CDUnknownBlockType)arg1 inSize:(struct CGSize)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (Class)_printFormatterClass;
- (void)_promptForReplace:(id)arg1;
- (struct CGRect)_rectForScrollToVisible:(struct _NSRange)arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_resetDataDetectorsResults;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (id)_restorableScrollPosition;
- (id)_restorableScrollPositionForStateRestoration;
- (BOOL)_restoreFirstResponder;
- (void)_restoreScrollPosition:(id)arg1 animated:(BOOL)arg2;
- (void)_resyncContainerFrameForNonAutolayout;
- (void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(BOOL)arg1;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(BOOL)arg2;
- (void)_scrollRect:(struct CGRect)arg1 toVisibleInContainingScrollView:(BOOL)arg2;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (void)_scrollSelectionToVisibleInContainingScrollView:(BOOL)arg1;
- (void)_scrollToCaretIfNeeded;
- (void)_scrollToSelectionIfNeeded;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)_selectionMayChange:(id)arg1;
- (void)_setContentOffsetWithoutRecordingScrollPosition:(struct CGPoint)arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDefaultTextPreviewOptions:(long long)arg1;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_setFrameOrBounds:(struct CGRect)arg1 fromOldRect:(struct CGRect)arg2 settingAction:(CDUnknownBlockType)arg3;
- (void)_setFreezeTextContainerSize:(BOOL)arg1;
- (void)_setInteractiveTextSelectionDisabled:(BOOL)arg1;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)_setNeedsTextLayout;
- (void)_setPreferredMaxLayoutWidth:(double)arg1;
- (void)_setSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_setTextColor:(id)arg1;
- (void)_setTextSizeCacheEnabled:(BOOL)arg1;
- (void)_setTypingAttributesTextColor:(id)arg1;
- (void)_setWhitelistedTypingAttributes:(id)arg1;
- (void)_setupDefaultStyleEffectConfiguration;
- (void)_share:(id)arg1;
- (BOOL)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (BOOL)_shouldObscureInput;
- (BOOL)_shouldScrollEnclosingScrollView;
- (BOOL)_shouldStartDataDetectors;
- (BOOL)_shouldSuppressSelectionCommands;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_startDataDetectors;
- (void)_startDataDetectorsIfNeeded;
- (void)_syncTypingAttributesToTextContainerAttributesForExtraLineFragment;
- (id)_targetedPreviewForTextInteractableItem:(id)arg1 dismissing:(BOOL)arg2;
- (void)_textContainerSizeDidChange:(id)arg1;
- (id)_textGeometry;
- (id)_textInputTraits;
- (id)_textInputViewForAddingGestureRecognizers;
- (id)_textInteractableItemAtPoint:(struct CGPoint)arg1;
- (id)_textItemDiscoverer;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_textViewContentPaddingDidChange:(id)arg1;
- (unsigned long long)_totalNumberOfTextViewsInLayoutManager;
- (void)_transliterateChinese:(id)arg1;
- (void)_unconstrainTiledRendering;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateContainerTileAndSizingFlags;
- (void)_updateContentSize;
- (void)_updatePlaceholderVisibility;
- (void)_updateSelectableInteractions;
- (void)_updateSelectionGestures;
- (void)_updateTextContainerSizeAndSizeToFit;
- (void)_updateTextEffectsConfigurationIfNeeded;
- (struct _NSRange)_visibleRangeWithLayout:(BOOL)arg1;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (id)_whitelistedTypingAttributes;
- (void)addGhostedRange:(id)arg1;
- (void)addInvisibleRange:(id)arg1;
- (void)addSnapshotSeparation:(double)arg1 withAffinity:(long long)arg2;
- (void)addTextAlternativesDisplayStyle:(long long)arg1 toRange:(struct _NSRange)arg2;
- (void)adjustedContentInsetDidChange;
- (void)alignCenter:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignRight:(id)arg1;
- (BOOL)allowsAttachments;
- (BOOL)allowsDraggingAttachments;
- (id)attributedPlaceholder;
- (id)attributedTextInRange:(id)arg1;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)becomeDropResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)becomesEditableWithGestures;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginSelectionChange;
- (double)beginSnapshotSeparationOfHeight:(double)arg1 atYOffset:(double)arg2;
- (id)bottomContentPadding;
- (BOOL)canBecomeDropResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (void)draggingFinished:(id)arg1;
- (void)draggingStarted;
- (void)drawRect:(struct CGRect)arg1 forViewPrintFormatter:(id)arg2;
- (void)droppingFinished;
- (void)droppingStarted;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endFloatingCursor;
- (void)endSelectionChange;
- (void)endSnapshotSeparation;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)increaseSize:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)insertAttributedText:(id)arg1;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(id)arg1;
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
- (void)insertText:(id)arg1 style:(long long)arg2 alternatives:(id)arg3;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (id)interactionAssistant;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateDropCaret;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isEditableForTextContainerView:(id)arg1;
- (BOOL)isEditing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (double)lineHeight;
- (id)linkTextAttributesForTextContainerView:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (unsigned long long)marginTop;
- (double)maxTileHeight;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)pasteItemProviders:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (struct CGRect)rectInTextContainerForRect:(struct CGRect)arg1;
- (void)removeAllGhostedRanges;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeInvisibleRange:(id)arg1;
- (void)removeTextPlaceholder:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)resignDropResponderWithDropPerformed:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (struct _NSRange)selectedRangeForTextContainerView:(id)arg1;
- (id)selectedText;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setMarginTop:(unsigned long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMaxTileHeight:(double)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setShouldAutoscrollAboveBottom:(BOOL)arg1;
- (void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(BOOL)arg1;
- (void)setShouldPreserveVisualFontSizeFidelity:(BOOL)arg1;
- (void)setTiledViewsDrawAsynchronously:(BOOL)arg1;
- (void)setUsesTiledViews:(BOOL)arg1;
- (BOOL)shouldAutoscrollAboveBottom;
- (BOOL)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
- (BOOL)shouldPreserveVisualFontSizeFidelity;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textContainerView:(id)arg1 cuiCatalogForTextEffectName:(id)arg2;
- (id)textContainerView:(id)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (id)textInRange:(id)arg1;
- (BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textInputDidAnimatePaste:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (void)textInputDidChangeSelection:(id)arg1;
- (void)textInputWillAnimatePaste:(id)arg1;
- (id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (BOOL)tiledViewsDrawAsynchronously;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)topContentPadding;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoManager;
- (void)unmarkText;
- (void)updateAutoscrollAboveBottom;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateSelection;
- (void)updateSelectionForTextContainerView:(id)arg1;
- (void)updateSelectionImmediately;
- (void)updateTextAttributesWithConversionHandler:(CDUnknownBlockType)arg1;
- (BOOL)usesTiledViews;
- (void)validateCommand:(id)arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (struct CGRect)visibleRect;
- (struct CGRect)visibleRectIgnoringKeyboard;
- (id)visibleTextRange;
- (struct CGRect)visibleTextRect;
- (id)webView;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint)arg1;

@end

