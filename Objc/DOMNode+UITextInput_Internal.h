//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMNode.h>

#import <UIKitCore/UITextInput_Internal-Protocol.h>

@class UIResponder, UIView;
@protocol UITextInput, UITextInputPrivate;

@interface DOMNode (UITextInput_Internal) <UITextInput_Internal>

@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;

- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (BOOL)_hasMarkedText;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
- (BOOL)_isEmptySelection;
- (id)_keyInput;
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
- (id)_newPhraseBoundaryGestureRecognizer;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (BOOL)_range:(id)arg1 containsRange:(id)arg2;
- (BOOL)_range:(id)arg1 intersectsRange:(id)arg2;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_replaceDocumentWithText:(id)arg1;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange)_selectedNSRange;
- (struct _NSRange)_selectedRangeWithinMarkedText;
- (long long)_selectionAffinity;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (struct CGRect)_selectionClipRect;
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_setSelectionToPosition:(id)arg1;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
- (id)_textColorForCaretSelection;
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;
- (void)_unmarkText;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (BOOL)_usesAsynchronousProtocol;
- (id)_wordContainingCaretSelection;
- (id)textInputSuggestionDelegate;
@end

