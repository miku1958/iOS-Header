//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/UITextInputTraits-Protocol.h>
#import <UIKit/UITextInputTraits_Private-Protocol.h>

@class NSString, UIColor, UIImage;

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
    struct __CFCharacterSet *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    unsigned long long insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    BOOL isSingleLineDocument;
    BOOL contentsIsSingleValue;
    BOOL acceptsEmoji;
    BOOL forceEnableDictation;
    BOOL returnKeyGoesToNextResponder;
    BOOL acceptsFloatingKeyboard;
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
    BOOL isCarPlayIdiom;
    NSString *recentInputIdentifier;
}

@property (nonatomic) BOOL acceptsEmoji; // @synthesize acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard; // @synthesize acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard; // @synthesize acceptsSplitKeyboard;
@property (nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext; // @synthesize autocorrectionContext;
@property (nonatomic) long long autocorrectionType; // @synthesize autocorrectionType;
@property (nonatomic) BOOL contentsIsSingleValue; // @synthesize contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder; // @synthesize deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePrediction; // @synthesize disablePrediction;
@property (nonatomic) BOOL displaySecureTextUsingPlainText; // @synthesize displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType; // @synthesize emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; // @synthesize enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) BOOL forceEnableDictation; // @synthesize forceEnableDictation;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *insertionPointColor; // @synthesize insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth; // @synthesize insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom; // @synthesize isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument; // @synthesize isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance;
@property (nonatomic) long long keyboardType; // @synthesize keyboardType;
@property (nonatomic) BOOL learnsCorrections; // @synthesize learnsCorrections;
@property (copy, nonatomic) NSString *recentInputIdentifier; // @synthesize recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext; // @synthesize responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder; // @synthesize returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType; // @synthesize returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @synthesize secureTextEntry;
@property (strong, nonatomic) UIColor *selectionBarColor; // @synthesize selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage; // @synthesize selectionDragDotImage;
@property (strong, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor;
@property (nonatomic) int shortcutConversionType; // @synthesize shortcutConversionType;
@property (nonatomic) long long spellCheckingType; // @synthesize spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling; // @synthesize suppressReturnKeyStyling;
@property (nonatomic) int textLoupeVisibility; // @synthesize textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior; // @synthesize textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization; // @synthesize useInterfaceLanguageForLocalization;

+ (long long)accessibleAppearanceForAppearance:(long long)arg1;
+ (long long)configuredAppearanceForAppearance:(long long)arg1 withTraitEnvironment:(id)arg2;
+ (id)defaultTextInputTraits;
+ (BOOL)keyboardTypeRequiresASCIICapable:(long long)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;
- (void).cxx_destruct;
- (void)_setColorsToMatchTintColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)publicTraitsMatchTraits:(id)arg1;
- (void)setToDefaultValues;
- (void)setToSecureValues;
- (void)takeTraitsFrom:(id)arg1;
- (long long)updateResultComparedToTraits:(id)arg1;

@end
