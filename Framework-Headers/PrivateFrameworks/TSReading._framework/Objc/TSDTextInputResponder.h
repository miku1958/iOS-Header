//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <TSReading/UIResponderStandardEditActions-Protocol.h>
#import <TSReading/UITextInput-Protocol.h>

@class NSDictionary, NSObject, NSString, TSDTextInputTokenizer, TSDTextPosition, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol TSDTextInput, UITextInputDelegate, UITextInputTokenizer;

@interface TSDTextInputResponder : UIResponder <UITextInput, UIResponderStandardEditActions>
{
    NSObject<TSDTextInput> *_editor;
    TSDTextInputTokenizer *_tokenizer;
    BOOL _isResigning;
    int _respondingToUITextInput;
    BOOL _isSettingSelectedTextRange;
    float _preferredStartPosition;
    float _preferredEndPosition;
    TSDTextPosition *_referencePosition;
    long long _referenceOffset;
    TSDTextPosition *_cachedPosition;
    BOOL _pendingEditorChange;
    NSObject<TSDTextInput> *_pendingEditor;
    BOOL _pendingFirstResponderChange;
    id<TSDTextInput> _pendingFirstResponderObject;
    BOOL _inDynamicOperation;
    UIResponder *_nextResponder;
    id<UITextInputDelegate> _inputDelegate;
    BOOL _editorRespondsToRawArrowKeySelectors;
    int _ignoreKeyboardInputCount;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<TSDTextInput> editor; // @synthesize editor=_editor;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) float preferredEndPosition; // @synthesize preferredEndPosition=_preferredEndPosition;
@property (nonatomic) float preferredStartPosition; // @synthesize preferredStartPosition=_preferredStartPosition;
@property (readonly, nonatomic, getter=isResigning) BOOL resigning;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;

- (BOOL)_disableAutomaticKeyboardUI;
- (void)acceptAutocorrection;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (BOOL)becomeFirstResponder;
- (void)beginIgnoringKeyboardInput;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelDelayedResponderChange;
- (void)canvasWillRotate;
- (void)canvasWillScroll;
- (void)canvasWillZoom;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)changeFirstResponderIfNecessary;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)clearEditorAndResignFirstResponder;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)customAction6:(id)arg1;
- (void)customAction7:(id)arg1;
- (void)customAction8:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteBackward;
- (void)deleteForward;
- (id)editingTextRep;
- (id)editingTextReps;
- (void)editorDidChangeSelection:(id)arg1;
- (void)editorDidChangeSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)endIgnoringKeyboardInput;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)forceDelayedResponderChange;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNextResponder:(id)arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (void)insertDictationResult:(id)arg1;
- (void)insertText:(id)arg1;
- (id)keyCommands;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nextResponder;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)p_ICC;
- (BOOL)p_currentEditorIsNotOnMyCanvas;
- (BOOL)p_didEnterUITextInput;
- (void)p_didUndoRedoChangeNotification:(id)arg1;
- (void)p_editorDidInsertTextNotification:(id)arg1;
- (void)p_editorSelectionWasForciblyChangedNotification:(id)arg1;
- (void)p_editorWillClearSelectionNotification:(id)arg1;
- (void)p_editorWillHandleTapNotification:(id)arg1;
- (void)p_editorWillStyleTextNotification:(id)arg1;
- (void)p_finishDynamicOperation:(id)arg1;
- (BOOL)p_isExecutingUITextInput;
- (BOOL)p_requiresFirstResponderChangeForEditor:(id)arg1;
- (BOOL)p_resignFirstResponder;
- (void)p_setEditor:(id)arg1;
- (void)p_setFirstResponder:(id)arg1;
- (void)p_setFirstResponderAfterDelay;
- (void)p_setFirstResponderAndEditor:(id)arg1;
- (void)p_setFirstResponderAndEditorAfterDelay;
- (void)p_setSelectedTextRange:(id)arg1;
- (void)p_startDynamicOperation:(id)arg1;
- (void)p_textChanged;
- (void)p_unmarkText;
- (BOOL)p_wantRawArrowKeys;
- (void)p_willExitUITextInput;
- (void)p_willShowPopoverNotification:(id)arg1;
- (void)p_willUndoChangeNotification:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rectsForRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (BOOL)resignFirstResponder;
- (void)resumeEditing;
- (void)selectAll:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)superview;
- (void)teardown;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)unmarkText;

@end

