//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UITextInputTraits-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying>
{
    long long autocapitalizationType;
    long long autocorrectionType;
    long long spellCheckingType;
    unsigned int keyboardType:8;
    unsigned int keyboardAppearance:8;
    long long returnKeyType;
    BOOL enablesReturnKeyAutomatically;
    BOOL secureTextEntry;
    BOOL devicePasscodeEntry;
    NSString *textContentType;
    UITextInputPasswordRules *passwordRules;
    long long smartInsertDeleteType;
    long long smartQuotesType;
    long long smartDashesType;
    struct __CFCharacterSet *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    UIColor *underlineColorForTextAlternatives;
    UIColor *underlineColorForSpelling;
    unsigned long long insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    BOOL isSingleLineDocument;
    BOOL contentsIsSingleValue;
    BOOL acceptsEmoji;
    BOOL acceptsDictationSearchResults;
    BOOL useAutomaticEndpointing;
    BOOL showDictationButton;
    BOOL forceEnableDictation;
    BOOL forceDisableDictation;
    BOOL forceDefaultDictationInfo;
    BOOL preferOnlineDictation;
    BOOL returnKeyGoesToNextResponder;
    BOOL acceptsFloatingKeyboard;
    BOOL forceFloatingKeyboard;
    struct UIEdgeInsets floatingKeyboardEdgeInsets;
    BOOL acceptsSplitKeyboard;
    BOOL displaySecureTextUsingPlainText;
    BOOL learnsCorrections;
    int emptyContentReturnKeyType;
    int shortcutConversionType;
    BOOL suppressReturnKeyStyling;
    BOOL useInterfaceLanguageForLocalization;
    BOOL deferBecomingResponder;
    BOOL enablesReturnKeyOnNonWhiteSpaceContent;
    NSString *autocorrectionContext;
    NSString *responseContext;
    BOOL disablePrediction;
    BOOL disableInputBars;
    BOOL isCarPlayIdiom;
    NSString *recentInputIdentifier;
    struct _NSRange validTextRange;
    long long textScriptType;
    UIInputContextHistory *inputContextHistory;
    BOOL manageRecentInputs;
    BOOL hasDefaultContents;
    BOOL acceptsPayloads;
    BOOL acceptsInitialEmojiKeyboard;
    BOOL displaySecureEditsUsingPlainText;
    BOOL hidePrediction;
    BOOL loadKeyboardsForSiriLanguage;
    NSIndexSet *PINEntrySeparatorIndexes;
    long long forceDictationKeyboardType;
}

@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // @synthesize PINEntrySeparatorIndexes;
@property (nonatomic) BOOL acceptsDictationSearchResults; // @synthesize acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji; // @synthesize acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard; // @synthesize acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard; // @synthesize acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads; // @synthesize acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard; // @synthesize acceptsSplitKeyboard;
@property (nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext; // @synthesize autocorrectionContext;
@property (nonatomic) long long autocorrectionType; // @synthesize autocorrectionType;
@property (nonatomic) BOOL contentsIsSingleValue; // @synthesize contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder; // @synthesize deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry; // @synthesize devicePasscodeEntry;
@property (readonly, nonatomic) long long dictationInfoKeyboardType;
@property (readonly, nonatomic) long long dictationKeyboardType;
@property (nonatomic) BOOL disableInputBars; // @synthesize disableInputBars;
@property (nonatomic) BOOL disablePrediction; // @synthesize disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText; // @synthesize displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText; // @synthesize displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType; // @synthesize emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; // @synthesize enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets; // @synthesize floatingKeyboardEdgeInsets;
@property (nonatomic) BOOL forceDefaultDictationInfo; // @synthesize forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType; // @synthesize forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation; // @synthesize forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation; // @synthesize forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard; // @synthesize forceFloatingKeyboard;
@property (nonatomic) BOOL hasDefaultContents; // @synthesize hasDefaultContents;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidePrediction; // @synthesize hidePrediction;
@property (strong, nonatomic) UIInputContextHistory *inputContextHistory; // @synthesize inputContextHistory;
@property (strong, nonatomic) UIColor *insertionPointColor; // @synthesize insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth; // @synthesize insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom; // @synthesize isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument; // @synthesize isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance;
@property (nonatomic) long long keyboardType; // @synthesize keyboardType;
@property (nonatomic) BOOL learnsCorrections; // @synthesize learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage; // @synthesize loadKeyboardsForSiriLanguage;
@property (nonatomic) BOOL manageRecentInputs; // @synthesize manageRecentInputs;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules; // @synthesize passwordRules;
@property (nonatomic) BOOL preferOnlineDictation; // @synthesize preferOnlineDictation;
@property (copy, nonatomic) NSString *recentInputIdentifier; // @synthesize recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext; // @synthesize responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder; // @synthesize returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType; // @synthesize returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @synthesize secureTextEntry;
@property (strong, nonatomic) UIColor *selectionBarColor; // @synthesize selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage; // @synthesize selectionDragDotImage;
@property (strong, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor;
@property (nonatomic) int shortcutConversionType; // @synthesize shortcutConversionType;
@property (nonatomic) BOOL showDictationButton; // @synthesize showDictationButton;
@property (nonatomic) long long smartDashesType; // @synthesize smartDashesType;
@property (nonatomic) long long smartInsertDeleteType; // @synthesize smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType; // @synthesize smartQuotesType;
@property (nonatomic) long long spellCheckingType; // @synthesize spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling; // @synthesize suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *textContentType; // @synthesize textContentType;
@property (nonatomic) int textLoupeVisibility; // @synthesize textLoupeVisibility;
@property (nonatomic) long long textScriptType; // @synthesize textScriptType;
@property (nonatomic) int textSelectionBehavior; // @synthesize textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property (strong, nonatomic) UIColor *underlineColorForSpelling; // @synthesize underlineColorForSpelling;
@property (strong, nonatomic) UIColor *underlineColorForTextAlternatives; // @synthesize underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing; // @synthesize useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization; // @synthesize useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange validTextRange; // @synthesize validTextRange;

+ (long long)accessibleAppearanceForAppearance:(long long)arg1;
+ (long long)configuredAppearanceForAppearance:(long long)arg1 withTraitEnvironment:(id)arg2;
+ (id)defaultTextInputTraits;
+ (BOOL)keyboardTypeRequiresASCIICapable:(long long)arg1;
+ (id)traitEnvironmentFromTraits:(id)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1 lightweight:(BOOL)arg2;
+ (long long)translateToUIAutocapitalizationType:(unsigned long long)arg1;
+ (long long)translateToUIAutocorrectionType:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardAppearance:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardType:(unsigned long long)arg1;
+ (long long)translateToUIReturnKeyType:(unsigned long long)arg1;
+ (long long)translateToUISmartInsertDeleteEnabled:(BOOL)arg1;
+ (long long)translateToUISpellCheckingType:(unsigned long long)arg1;
+ (long long)translateToUITextScriptType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_setColorsToMatchTintColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)extendedPathToObtainTraitsFrom:(id)arg1 lightweight:(BOOL)arg2;
- (void)fastPathToObtainTraitsFrom:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)overlayWithTITextInputTraits:(id)arg1;
- (void)overrideWithTraits:(id)arg1;
- (BOOL)publicTraitsMatchTraits:(id)arg1;
- (void)setToDefaultValues;
- (void)setToSecureValues;
- (void)takeTraitsFrom:(id)arg1;
- (void)takeTraitsFrom:(id)arg1 lightweight:(BOOL)arg2;
- (long long)updateResultComparedToTraits:(id)arg1;

@end

