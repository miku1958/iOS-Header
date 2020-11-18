//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/UITextInput-Protocol.h>
#import <MessageUI/UITextInputTokenizer-Protocol.h>
#import <MessageUI/UITextInputTraits_Private-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, UIColor, UIDictationSerializableResults, UIFont, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSuggestion, UIView, WebEvent;
@protocol UISelectionInteractionAssistant, UITextInputSuggestionDelegate;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>

@property (nonatomic) long long _textInputSource;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) long long selectionGranularity;
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
- (SEL)_sendCurrentLocationAction;
- (BOOL)_shouldRepeatInsertText:(NSString *)arg1;
- (BOOL)_shouldSuppressSelectionCommands;
- (void)_willShowCorrections;
- (void)acceptedAutoFillWord:(NSString *)arg1;
- (UIView *)automaticallySelectedOverlay;
- (UIFont *)fontForCaretSelection;
- (void)handleKeyWebEvent:(WebEvent *)arg1;
- (void)handleKeyWebEvent:(WebEvent *)arg1 withCompletionHandler:(void (^)(WebEvent *, BOOL))arg2;
- (void)insertDictationResult:(UIDictationSerializableResults *)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertTextSuggestion:(UITextSuggestion *)arg1;
- (BOOL)isAutoFillMode;
- (NSArray *)metadataDictionariesForDictationResults;
- (UITextRange *)rangeWithTextAlternatives:(id *)arg1 atPosition:(UITextPosition *)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (BOOL)requiresKeyEvents;
- (id<UISelectionInteractionAssistant>)selectionInteractionAssistant;
- (void)setBottomBufferHeight:(double)arg1;
- (void)streamingDictationDidBegin;
- (void)streamingDictationDidEnd;
- (UIColor *)textColorForCaretSelection;
- (struct CGRect)visibleRect;
@end

