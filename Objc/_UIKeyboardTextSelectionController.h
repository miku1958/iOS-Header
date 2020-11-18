//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIResponder, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;
@protocol UISelectionInteractionAssistant, UITextInput;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionController : NSObject
{
    BOOL _hasInteractionAssistant;
    BOOL _hasSelectionInteractionAssistant;
    BOOL _hasTextInputView;
    UITextPosition *_cursorPosition;
    long long _selectionGranularity;
    UITextRange *_initialSelection;
    UITextRange *_selectionBase;
    UIResponder<UITextInput> *_inputDelegate;
    struct CGRect _caretRectForCursorPosition;
}

@property (nonatomic) struct CGRect caretRectForCursorPosition; // @synthesize caretRectForCursorPosition=_caretRectForCursorPosition;
@property (readonly, nonatomic) struct CGRect caretRectForFirstSelectedPosition;
@property (readonly, nonatomic) struct CGRect caretRectForLastSelectedPosition;
@property (readonly, nonatomic) struct CGRect caretRectForLeftmostSelectedPosition;
@property (readonly, nonatomic) struct CGRect caretRectForRightmostSelectedPosition;
@property (strong, nonatomic) UITextPosition *cursorPosition;
@property (readonly, nonatomic) BOOL hasCaretSelection;
@property (readonly, nonatomic) BOOL hasRangedSelection;
@property (strong, nonatomic) UITextRange *initialSelection; // @synthesize initialSelection=_initialSelection;
@property (readonly, nonatomic) UIResponder<UITextInput> *inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (strong, nonatomic) UITextRange *selectionBase; // @synthesize selectionBase=_selectionBase;
@property (nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property (readonly, nonatomic) id<UISelectionInteractionAssistant> selectionInteractionAssistant;
@property (readonly, nonatomic) UIView *textInputView;

- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (BOOL)beginLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)beginLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)beginRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)beginSelection;
- (void)beginSelectionChange;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(struct CGPoint)arg3 executionContext:(id)arg4;
- (struct CGPoint)boundedDeltaForTranslation:(struct CGPoint)arg1 cursorLocationBase:(struct CGPoint)arg2;
- (BOOL)cursorPositionIsContainedByRange:(id)arg1;
- (void)dealloc;
- (void)endFloatingCursor;
- (void)endLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)endLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endSelection;
- (void)endSelectionChange;
- (id)initWithInputDelegate:(id)arg1;
- (void)resetCursorPosition;
- (void)restartSelection;
- (void)scrollSelectionToVisible;
- (void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (struct CGRect)selectedRectInLineWithPoint:(struct CGPoint)arg1;
- (void)selectionDidChange;
- (void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)showSelectionCommands;
- (void)switchToRangedSelection;
- (void)textDidChange;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateGestureRecognizers;
- (void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)updateLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateSelectionRects;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2;
- (void)willBeginFloatingCursor:(BOOL)arg1;
- (void)willBeginHighlighterGesture;
- (void)willHandoffLoupeMagnifier;

@end

