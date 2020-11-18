//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, UIColor, UIFont, UIPhraseBoundaryGestureRecognizer, UIResponder, UITextInputArrowKeyHistory, UITextPosition, UITextRange, UIView;
@protocol UITextInput, UITextInputPrivate;

@protocol UITextInput_Internal

@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;

- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (UITextPosition *)_clampedpositionFromPosition:(UITextPosition *)arg1 offset:(int)arg2;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (UITextPosition *)_findPleasingWordBoundaryFromPosition:(UITextPosition *)arg1;
- (UIFont *)_fontForCaretSelection;
- (UITextRange *)_fullRange;
- (NSString *)_fullText;
- (BOOL)_hasMarkedText;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(UITextPosition *)arg1;
- (BOOL)_isEmptySelection;
- (void)_moveCurrentSelection:(int)arg1;
- (UITextInputArrowKeyHistory *)_moveDown:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveLeft:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveRight:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfDocument:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfLine:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfWord:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfDocument:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfLine:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfWord:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveUp:(BOOL)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UIPhraseBoundaryGestureRecognizer *)_newPhraseBoundaryGestureRecognizer;
- (struct _NSRange)_nsrangeForTextRange:(UITextRange *)arg1;
- (void)_phraseBoundaryGesture:(UIPhraseBoundaryGestureRecognizer *)arg1;
- (UITextPosition *)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(UITextPosition *)arg2;
- (UITextPosition *)_positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
- (UITextPosition *)_positionFromPosition:(UITextPosition *)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (UITextPosition *)_positionWithinRange:(UITextRange *)arg1 farthestInDirection:(long long)arg2;
- (UITextRange *)_rangeOfEnclosingWord:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfLineEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfParagraphEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfSentenceEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)_rangeOfText:(NSString *)arg1 endingAtPosition:(UITextPosition *)arg2;
- (UITextRange *)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(UITextPosition *)arg2;
- (UITextRange *)_rangeSpanningTextUnit:(long long)arg1 andPosition:(UITextPosition *)arg2;
- (void)_replaceCurrentWordWithText:(NSString *)arg1;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)_selectAll;
- (struct _NSRange)_selectedNSRange;
- (long long)_selectionAffinity;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (struct CGRect)_selectionClipRect;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (void)_setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setSelectedTextRange:(UITextRange *)arg1 withAffinityDownstream:(BOOL)arg2;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(NSString *)arg2 checkAutocorrection:(BOOL)arg3;
- (UIColor *)_textColorForCaretSelection;
- (void)_unmarkText;
- (BOOL)_usesAsynchronousProtocol;
- (NSString *)_wordContainingCaretSelection;

@optional
- (BOOL)_isInteractiveTextSelectionDisabled;
- (struct CGRect)_lastRectForRange:(UITextRange *)arg1;
- (void)_setInternalGestureRecognizers;
@end
