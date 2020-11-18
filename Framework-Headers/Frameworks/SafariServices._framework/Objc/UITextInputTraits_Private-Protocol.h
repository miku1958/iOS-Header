//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>
#import <SafariServices/UITextInputTraits-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory;
@protocol UITextInputTraits;

@protocol UITextInputTraits_Private <NSObject, UITextInputTraits>

@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) BOOL deferBecomingResponder;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (nonatomic) BOOL hidePrediction;
@property (strong, nonatomic) UIInputContextHistory *inputContextHistory;
@property (strong, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (strong, nonatomic) UIColor *selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage;
@property (strong, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (strong, nonatomic) UIColor *underlineColorForSpelling;
@property (strong, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange validTextRange;

- (void)takeTraitsFrom:(id<UITextInputTraits>)arg1;

@optional
@end

