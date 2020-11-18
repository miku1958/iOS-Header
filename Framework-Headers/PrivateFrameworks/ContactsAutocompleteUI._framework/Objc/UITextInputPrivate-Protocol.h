//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/UITextInput-Protocol.h>
#import <ContactsAutocompleteUI/UITextInputTokenizer-Protocol.h>
#import <ContactsAutocompleteUI/UITextInputTraits_Private-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, RTIInputSystemSourceSession, UIColor, UIDictationSerializableResults, UIFont, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSuggestion, UIView, WebEvent;
@protocol UISelectionInteractionAssistant, UITextInputSuggestionDelegate;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>

@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic) long long _textInputSource;
@property (readonly, nonatomic) long long cursorBehavior;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) long long selectionGranularity;
@property (readonly, nonatomic) BOOL supportsImagePaste;
@property (readonly, nonatomic) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate;

- (BOOL)hasContent;
- (BOOL)hasSelection;
- (void)selectAll;
- (struct _NSRange)selectionRange;
- (UITextInputTraits *)textInputTraits;

@optional
- (NSDictionary *)_autofillContext;
- (double)_delayUntilRepeatInsertText:(NSString *)arg1;
- (void)_didHideCorrections;
- (void)_insertAttributedTextWithoutClosingTyping:(NSAttributedString *)arg1;
- (BOOL)_isInteractiveDespiteResponderStatus;
- (struct CGRect)_selectionClipRect;
- (SEL)_sendCurrentLocationAction;
- (BOOL)_shouldRepeatInsertText:(NSString *)arg1;
- (BOOL)_shouldSuppressSelectionCommands;
- (void)_willShowCorrections;
- (void)acceptedAutoFillWord:(NSString *)arg1;
- (NSAttributedString *)annotatedSubstringForRange:(UITextRange *)arg1;
- (NSAttributedString *)attributedTextInRange:(UITextRange *)arg1;
- (UIView *)automaticallySelectedOverlay;
- (UIFont *)fontForCaretSelection;
- (void)handleKeyWebEvent:(WebEvent *)arg1;
- (void)handleKeyWebEvent:(WebEvent *)arg1 withCompletionHandler:(void (^)(WebEvent *, BOOL))arg2;
- (void)insertAttributedText:(NSAttributedString *)arg1;
- (void)insertDictationResult:(UIDictationSerializableResults *)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(NSString *)arg1 style:(long long)arg2 alternatives:(NSArray *)arg3;
- (void)insertTextSuggestion:(UITextSuggestion *)arg1;
- (BOOL)isAutoFillMode;
- (NSArray *)metadataDictionariesForDictationResults;
- (void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (UITextRange *)rangeWithTextAlternatives:(id *)arg1 atPosition:(UITextPosition *)arg2;
- (void)removeAnnotation:(NSString *)arg1 forRange:(UITextRange *)arg2;
- (void)replaceRange:(UITextRange *)arg1 withAnnotatedString:(NSAttributedString *)arg2 relativeReplacementRange:(struct _NSRange)arg3;
- (void)replaceRange:(UITextRange *)arg1 withAttributedText:(NSAttributedString *)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (BOOL)requiresKeyEvents;
- (UIView *)selectionContainerView;
- (id<UISelectionInteractionAssistant>)selectionInteractionAssistant;
- (void)setBottomBufferHeight:(double)arg1;
- (void)streamingDictationDidBegin;
- (void)streamingDictationDidEnd;
- (UIColor *)textColorForCaretSelection;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGRect)visibleRect;
@end
