//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIKeyboardInput-Protocol.h>
#import <UIKit/UITextInputPrivate-Protocol.h>

@class NSDictionary, NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange;
@protocol UITextInputDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate>
{
    UITextInputTraits *m_traits;
}

@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) long long _textInputSource;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji; // @dynamic acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL contentsIsSingleValue; // @dynamic contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIInputContextHistory *inputContextHistory;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (strong, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth; // @dynamic insertionPointWidth;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property (nonatomic) long long keyboardType; // @dynamic keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (strong, nonatomic) UIColor *selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) long long selectionGranularity;
@property (strong, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;
@property (nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property (nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property (nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property (readonly, nonatomic) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (strong, nonatomic) UIColor *underlineColorForSpelling;
@property (strong, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange validTextRange;

- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (BOOL)becomesEditableWithGestures;
- (struct CGRect)caretRect;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (void)extendCurrentSelection:(int)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasSelection;
- (void)insertText:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isSecure;
- (BOOL)isShowingPlaceholder;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)selectAll;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtWordStart;
- (struct _NSRange)selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (int)selectionState;
- (id)selectionView;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setSecure:(BOOL)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setText:(id)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (void)takeTraitsFrom:(id)arg1;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)updateSelection;
- (struct CGRect)visibleBounds;
- (int)wordOffsetInRange:(id)arg1;

@end
