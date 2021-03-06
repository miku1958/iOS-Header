//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/UIKeyInput-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, UITextPlaceholder, UITextPosition, UITextRange, UIView;
@protocol UITextInputDelegate, UITextInputTokenizer;

@protocol UITextInput <UIKeyInput>

@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;

- (long long)baseWritingDirectionForPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (struct CGRect)caretRectForPosition:(UITextPosition *)arg1;
- (UITextRange *)characterRangeAtPoint:(struct CGPoint)arg1;
- (UITextRange *)characterRangeByExtendingPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(UITextRange *)arg2;
- (long long)comparePosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (struct CGRect)firstRectForRange:(UITextRange *)arg1;
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(long long)arg2;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 farthestInDirection:(long long)arg2;
- (void)replaceRange:(UITextRange *)arg1 withText:(NSString *)arg2;
- (NSArray *)selectionRectsForRange:(UITextRange *)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(UITextRange *)arg2;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (NSString *)textInRange:(UITextRange *)arg1;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (void)unmarkText;

@optional
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (long long)characterOffsetOfPosition:(UITextPosition *)arg1 withinRange:(UITextRange *)arg2;
- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (void)endFloatingCursor;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (void)insertDictationResult:(NSArray *)arg1;
- (void)insertText:(NSString *)arg1 alternatives:(NSArray *)arg2 style:(long long)arg3;
- (UITextPlaceholder *)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 atCharacterOffset:(long long)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeTextPlaceholder:(UITextPlaceholder *)arg1;
- (void)setAttributedMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)shouldChangeTextInRange:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (NSDictionary *)textStylingAtPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
@end

