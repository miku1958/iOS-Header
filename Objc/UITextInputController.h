//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIResponderStandardEditActions-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputAdditions-Protocol.h>
#import <UIKitCore/UITextInputPrivate-Protocol.h>
#import <UIKitCore/UITextInput_Internal-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSHashTable, NSIndexSet, NSLayoutManager, NSSet, NSString, RTIInputSystemSourceSession, UIColor, UIImage, UIInputContextHistory, UIResponder, UITextChecker, UITextCheckingController, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextPlaceholder, UITextPosition, UITextRange, UIView, _UITextInputControllerTokenizer, _UITextKitTextRange, _UITextServiceSession, _UITextUndoManager, _UITextUndoOperationTyping;
@protocol UITextInput, UITextInputControllerDelegate, UITextInputDelegate, UITextInputPrivate, UITextInputSuggestionDelegate, UITextInputTokenizer;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions, UITextInputPrivate>
{
    id<UITextInputDelegate> _inputDelegate;
    _UITextKitTextRange *_selectedTextRange;
    _UITextInputControllerTokenizer *_tokenizer;
    NSLayoutManager *_layoutManager;
    NSHashTable *_observedScrollViews;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    UITextInputTraits *_textInputTraits;
    struct _NSRange _markedTextRange;
    struct _NSRange _markedTextSelection;
    NSDictionary *_markedTextStyle;
    NSAttributedString *_markedText;
    struct {
        unsigned int delegateRespondsToTextInputShouldBeginEditing:1;
        unsigned int delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText:1;
        unsigned int delegateRespondsToTextInputDidChange:1;
        unsigned int delegateRespondsToTextInputDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange:1;
        unsigned int delegateRespondsToTextInputEditorDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputPrepareAttributedTextForInsertion:1;
        unsigned int delegateRespondsToTextInputShouldExtendCaretHeight:1;
        unsigned int delegateRespondsToIsSingleLine:1;
        unsigned int textOrSelectionChangeOriginatesWithKeyboard:1;
        unsigned int showingTextStyleOptions:1;
        unsigned int undoRedoInProgress:1;
        unsigned int textOrSelectionChangeOriginatesWithMarkedText:1;
        unsigned int nextSelectionChangeMustUpdate:1;
        unsigned int hasTextAlternatives:1;
        unsigned int hasDictationResultMetadata:1;
        unsigned int suppressDelegateChangeNotifications:1;
    } _tiFlags;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
    UITextChecker *_textChecker;
    UITextCheckingController *_textCheckingController;
    NSSet *_whitelistedTypingAttributes;
    UITextPlaceholder *_textPlaceholder;
    BOOL _allowsEditingTextAttributes;
    BOOL _continuousSpellCheckingEnabled;
    BOOL _shouldStartUndoGroup;
    int _currentUndoGroupType;
    NSDictionary *_emptyStringAttributes;
    NSDictionary *_typingAttributes;
    id<UITextInputControllerDelegate> _delegate;
    struct _NSRange _previousSelectedRange;
}

@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic) long long _textInputSource;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (copy, nonatomic, getter=_whitelistedTypingAttributes, setter=_setWhitelistedTypingAttributes:) NSSet *_whitelistedTypingAttributes;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes;
@property (nonatomic) long long autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) BOOL continuousSpellCheckingEnabled; // @synthesize continuousSpellCheckingEnabled=_continuousSpellCheckingEnabled;
@property (nonatomic) int currentUndoGroupType; // @synthesize currentUndoGroupType=_currentUndoGroupType;
@property (readonly, nonatomic) long long cursorBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) id<UITextInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) int emptyContentReturnKeyType;
@property (copy, nonatomic, getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:) NSDictionary *emptyStringAttributes; // @synthesize emptyStringAttributes=_emptyStringAttributes;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidePrediction;
@property (strong, nonatomic) UIInputContextHistory *inputContextHistory;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (strong, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (weak, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) struct _NSRange previousSelectedRange; // @synthesize previousSelectedRange=_previousSelectedRange;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) struct _NSRange selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (strong, nonatomic) UIColor *selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) long long selectionGranularity;
@property (strong, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL shouldStartUndoGroup; // @synthesize shouldStartUndoGroup=_shouldStartUndoGroup;
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsImagePaste;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (copy, nonatomic) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property (strong, nonatomic) UIColor *underlineColorForSpelling;
@property (strong, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange validTextRange;

+ (BOOL)_shouldUseStandardTextScaling:(id)arg1;
- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_addToTypingAttributes:(id)arg1 value:(id)arg2;
- (id)_attributedStringForInsertionOfAttributedString:(id)arg1;
- (id)_attributesForInsertionOfText:(struct _NSRange)arg1;
- (id)_attributesForReplacementInRange:(struct _NSRange)arg1;
- (BOOL)_canHandleResponderAction:(SEL)arg1;
- (struct CGRect)_caretRectForOffset:(unsigned long long)arg1;
- (void)_changeTextAlignment:(long long)arg1 undoString:(id)arg2;
- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_characterPositionForPoint:(struct CGPoint)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_clearMarkedText;
- (void)_clearSelectionUI;
- (void)_coordinateSelectionChange:(CDUnknownBlockType)arg1;
- (void)_copySelectionToClipboard;
- (void)_copySelectionToClipboard:(id)arg1;
- (void)_define:(id)arg1;
- (BOOL)_delegateShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteForwardByWord;
- (void)_deleteToEndOfLine;
- (void)_deleteToEndOfParagraph;
- (void)_deleteToStartOfLine;
- (void)_detachFromLayoutManager;
- (void)_ensureSelectionValid;
- (void)_ensureSelectionVisible;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_filteredAttributedTextInRange:(struct _NSRange)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_firstTextView;
- (id)_fixupTypingAttributeForAttributes:(id)arg1;
- (id)_fontForCaretSelection;
- (void)_forceUnmarkTextDueToEditing;
- (id)_fullRange;
- (id)_fullText;
- (BOOL)_hasDictationPlaceholder;
- (BOOL)_hasMarkedText;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (id)_initWithLayoutManager:(id)arg1;
- (void)_insertAttributedText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(struct _NSRange)arg3 resultLength:(unsigned long long *)arg4;
- (void)_insertText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
- (void)_invalidateEmptyStringAttributes;
- (void)_invalidateTypingAttributes;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShareViewController;
- (BOOL)_isDisplayingShortcutViewController;
- (BOOL)_isEmptySelection;
- (BOOL)_isSecureTextEntry;
- (BOOL)_isSystemAttachment:(id)arg1;
- (id)_itemProviderForCopyingRange:(struct _NSRange)arg1;
- (id)_keyInput;
- (id)_layoutManager;
- (void)_layoutManagerDidCompleteLayout;
- (BOOL)_mightHaveSelection;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_newAttributedStringForInsertionOfAttributedText:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)_normalizedStringForRangeComparison:(id)arg1;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (id)_parentScrollView;
- (void)_pasteAndMatchStyle:(BOOL)arg1;
- (void)_pasteAttributedString:(id)arg1 pasteAsRichText:(BOOL)arg2;
- (void)_pasteAttributedString:(id)arg1 toRange:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_pasteController;
- (BOOL)_pasteFromPasteboard:(id)arg1 andMatchStyle:(BOOL)arg2;
- (void)_pasteRawAttributedString:(id)arg1 asRichText:(BOOL)arg2;
- (void)_performWhileSuppressingDelegateNotifications:(CDUnknownBlockType)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)_promptForReplace:(id)arg1;
- (BOOL)_range:(id)arg1 containsRange:(id)arg2;
- (BOOL)_range:(id)arg1 intersectsRange:(id)arg2;
- (struct _NSRange)_rangeAfterCancelDictationIfNecessaryForChangeInRange:(struct _NSRange)arg1;
- (struct _NSRange)_rangeForBackwardsDelete;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfSmartSelectionIncludingRange:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (struct _NSRange)_rangeToReplaceWhenInsertingText;
- (id)_rectsForRange:(struct _NSRange)arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_removeShareController;
- (void)_removeShortcutController;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_replaceDocumentWithText:(id)arg1;
- (void)_replaceRange:(id)arg1 withAttributedTextFromKeyboard:(id)arg2 addingUnderlinesForAlternatives:(BOOL)arg3;
- (void)_resetShowingTextStyle:(id)arg1;
- (long long)_resolveNaturalDirection:(long long)arg1;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (id)_selectedAttributedText;
- (struct _NSRange)_selectedNSRange;
- (struct _NSRange)_selectedRange;
- (struct _NSRange)_selectedRangeWithinMarkedText;
- (id)_selectedText;
- (long long)_selectionAffinity;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (struct CGRect)_selectionClipRect;
- (void)_selectionDidScroll:(id)arg1;
- (void)_selectionGeometryChanged;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (void)_sendDelegateWillChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (id)_senderForDelegateNotifications;
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 fromKeyboard:(BOOL)arg3 useTextStyle:(BOOL)arg4;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_setInternalGestureRecognizers;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setSelectedRange:(struct _NSRange)arg1;
- (void)_setSelectedRangeToEndIfNecessary;
- (void)_setSelectedTextRange:(id)arg1;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_setSelectionToPosition:(id)arg1;
- (void)_setUndoRedoInProgress:(BOOL)arg1;
- (void)_setupTextContainerView:(id)arg1;
- (void)_share:(id)arg1;
- (BOOL)_shouldConsiderTextViewForGeometry:(id)arg1;
- (BOOL)_shouldHandleResponderAction:(SEL)arg1;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_teardownTextContainerView:(id)arg1;
- (id)_textColorForCaretSelection;
- (void)_textContainerDidChangeView:(id)arg1;
- (id)_textInputTraits;
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;
- (id)_textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_toggleFontTrait:(unsigned int)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_transpose;
- (void)_undoManagerWillUndo:(id)arg1;
- (BOOL)_undoRedoInProgress;
- (void)_unmarkText;
- (void)_updateEmptyStringAttributes;
- (void)_updateFirstTextView;
- (void)_updateRangeForSmartDelete;
- (void)_updateRectsForPlaceholder;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (BOOL)_usesAsynchronousProtocol;
- (unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)arg1 downstream:(BOOL)arg2;
- (void)_validateCommand:(id)arg1 forFont:(id)arg2 traits:(int)arg3;
- (id)_wordContainingCaretSelection;
- (void)addTextAlternativesDisplayStyle:(long long)arg1 toRange:(struct _NSRange)arg2;
- (void)alignCenter:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignRight:(id)arg1;
- (id)annotatedSubstringForRange:(id)arg1;
- (void)appendUndoOperation:(id)arg1 newGroup:(BOOL)arg2;
- (id)attributedSubstringForMarkedRange;
- (id)attributedTextInRange:(id)arg1;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)beginSelectionChange;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)changeWillBeUndone:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)checkSmartPunctuationForWordInRange:(id)arg1;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)checkSpellingForWordInRange:(id)arg1;
- (void)clearText;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (void)coalesceInTextView:(id)arg1 affectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3 replacementText:(id)arg4;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (void)deleteBackward;
- (void)didEndEditing;
- (void)endSelectionChange;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (struct CGRect)frameForTextPlaceholder:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)insertAttributedText:(id)arg1;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(id)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1 embeddingType:(long long)arg2;
- (BOOL)isCoalescing;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (struct _NSRange)markedRange;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)notifyTextCheckingControllerForSelectionChange;
- (struct _NSRange)nsRangeForTextRange:(id)arg1;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)pasteItemProviders:(id)arg1;
- (void)pasteItemProviders:(id)arg1 matchesStyle:(BOOL)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)preheatTextChecker;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange)arg3 replacementText:(id)arg4;
- (void)removeAlternativesForCurrentWord;
- (void)removeAnnotation:(id)arg1 forRange:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeSpellingMarkersForCurrentWord;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (void)removeTextPlaceholder:(id)arg1;
- (void)removeTextPlaceholder:(id)arg1 notifyInputDelegate:(BOOL)arg2;
- (void)removeTextStylingFromString:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withAnnotatedString:(id)arg2 relativeReplacementRange:(struct _NSRange)arg3;
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scheduleUndoOperationForType:(int)arg1 actionName:(id)arg2 previousSelectedRange:(struct _NSRange)arg3 replacementText:(id)arg4;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)shouldStartNewUndoGroup:(id)arg1 textGranularity:(long long)arg2 operationType:(int)arg3;
- (void)stopCoalescing;
- (BOOL)supportLetterByLetterUndo;
- (id)textChecker;
- (id)textInRange:(id)arg1;
- (id)textRangeForNSRange:(struct _NSRange)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)undoDidChangeText;
- (id)undoManager;
- (void)undoWillChangeText;
- (void)unmarkText;
- (void)updateSelection;
- (void)updateTextAttributesWithConversionHandler:(CDUnknownBlockType)arg1;
- (id)validAnnotations;
- (void)validateCommand:(id)arg1;

@end

