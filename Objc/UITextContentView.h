//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIDragInteractionDelegate_Private-Protocol.h>
#import <UIKitCore/UIDropInteractionDelegate_Private-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputTraits-Protocol.h>
#import <UIKitCore/UITextLinkInteraction-Protocol.h>
#import <UIKitCore/UIWebDraggingDelegate-Protocol.h>
#import <UIKitCore/WebEditingDelegate-Protocol.h>
#import <UIKitCore/WebPolicyDelegate-Protocol.h>

@class DOMHTMLElement, NSAttributedString, NSDictionary, NSString, UIColor, UIDragInteraction, UIDropInteraction, UIFont, UITextInputPasswordRules, UITextInteractionAssistant, UITextPosition, UITextRange, UIWebDocumentView, WebFrame;
@protocol UITextContentViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextContentView : UIView <WebPolicyDelegate, WebEditingDelegate, UIWebDraggingDelegate, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UITextInput, UITextLinkInteraction, UITextInputTraits>
{
    id m_delegate;
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    struct UIEdgeInsets m_selectionInset;
    double m_bottomBufferHeight;
    BOOL m_editable;
    BOOL m_editing;
    BOOL m_becomesEditableWithGestures;
    BOOL m_becomingFirstResponder;
    BOOL m_reentrancyGuard;
    BOOL m_scrollsSelectionOnWebDocumentChanges;
    BOOL m_hasExplicitTextAlignment;
    BOOL m_allowsEditingTextAttributes;
    BOOL m_usesAttributedText;
    UITextInteractionAssistant *m_interactionAssistant;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    long long m_textAlignment;
    UIDragInteraction *m_dragInteraction;
    UIDropInteraction *m_dropInteraction;
    BOOL _dragInteractionEnabled;
}

@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property (nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UITextContentViewDelegate> delegate; // @synthesize delegate=m_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDragInteractionEnabled) BOOL dragInteractionEnabled; // @synthesize dragInteractionEnabled=_dragInteractionEnabled;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=m_editing;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (strong, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property (nonatomic) long long keyboardType; // @dynamic keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property (nonatomic) BOOL scrollsSelectionOnWebDocumentChanges; // @synthesize scrollsSelectionOnWebDocumentChanges=m_scrollsSelectionOnWebDocumentChanges;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property (nonatomic) struct _NSRange selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) struct UIEdgeInsets selectionInset; // @synthesize selectionInset=m_selectionInset;
@property (nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property (nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property (nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;

+ (id)excludedElementsForHTML;
- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (unsigned long long)_allowedLinkTypes;
- (void)_define:(id)arg1;
- (void)_didScroll;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_hideSelectionCommands;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (id)_keyboardResponder;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (void)_removeTextViewPropertiesFromText:(id)arg1;
- (BOOL)_restoreFirstResponder;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillBeginDragging;
- (struct CGRect)_selectionClipRect;
- (void)_share:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_sizeChanged;
- (void)_transliterateChinese:(id)arg1;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (double)bottomBufferHeight;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelDataDetectorsWithWebLock;
- (void)cancelInteractionWithLink;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)caretRectForVisiblePosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (id)contentAsAttributedString;
- (id)contentAsHTMLString;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (void)deleteBackward;
- (void)didMoveToSuperview;
- (void)displayScrollerIndicators;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (BOOL)dragInteractionEnabled;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endSelectionChange;
- (void)ensureSelection;
- (struct CGRect)firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasSelection;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 webView:(id)arg2;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(id)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (id)interactionAssistant;
- (BOOL)isFirstResponder;
- (BOOL)isInteractingWithLink;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (int)marginTop;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)mightHaveLinks;
- (struct CGPoint)offset;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)performBecomeEditableTasks;
- (void)performScrollSelectionToVisible:(BOOL)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)recalculateStyle;
- (struct CGRect)rectForScrollToVisible;
- (struct CGRect)rectForSelection:(struct _NSRange)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeFromSuperview;
- (void)removeTextPlaceholder:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)resetDataDetectorsResultsWithWebLock;
- (BOOL)resignFirstResponder;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (id)selectedText;
- (long long)selectionGranularity;
- (struct _NSRange)selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentToAttributedString:(id)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMarginTop:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setOffset:(struct CGPoint)arg1;
- (void)setSelectionChangeCallbacksDisabled:(BOOL)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (BOOL)shouldStartDataDetectors;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (void)startDataDetectorsWithWebLock;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (id)styleString;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)unmarkText;
- (void)updateContentEditableAttribute:(BOOL)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateSelection;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (struct CGRect)visibleRect;
- (struct CGRect)visibleTextRect;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webViewDidChange:(id)arg1;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint)arg1;

@end

