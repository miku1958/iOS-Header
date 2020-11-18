//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextInputMode.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSBundle, NSExtension, NSString;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying>
{
    BOOL isDisplayed;
    BOOL _extensionInputModeHasDictation;
    NSString *_primaryLanguage;
    NSString *_languageWithRegion;
    NSString *identifier;
    NSString *normalizedIdentifier;
    NSString *softwareLayout;
    NSString *hardwareLayout;
    NSArray *_multilingualLanguages;
}

@property (readonly, nonatomic) NSString *automaticHardwareLayout;
@property (readonly, nonatomic) NSBundle *containingBundle;
@property (readonly, nonatomic) NSString *containingBundleDisplayName;
@property (readonly, nonatomic) BOOL defaultLayoutIsASCIICapable;
@property (readonly, nonatomic) NSString *dictationDisplayName;
@property (strong, nonatomic) NSString *dictationLanguage;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *extendedDisplayName;
@property (readonly, nonatomic) NSExtension *extension;
@property (nonatomic) BOOL extensionInputModeHasDictation; // @synthesize extensionInputModeHasDictation=_extensionInputModeHasDictation;
@property (strong, nonatomic) NSString *hardwareLayout; // @synthesize hardwareLayout;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier;
@property (readonly, nonatomic) NSString *identifierWithLayouts;
@property (readonly, nonatomic) BOOL isDefaultRightToLeft;
@property (nonatomic) BOOL isDisplayed; // @synthesize isDisplayed;
@property (readonly, nonatomic) BOOL isEmojiInputMode;
@property (readonly, nonatomic) BOOL isExtensionInputMode;
@property (readonly, nonatomic) BOOL isSpecializedInputMode;
@property (readonly, nonatomic) BOOL isStalledExtensionInputMode;
@property (strong, nonatomic) NSString *languageWithRegion; // @synthesize languageWithRegion=_languageWithRegion;
@property (strong, nonatomic) NSArray *multilingualLanguages; // @synthesize multilingualLanguages=_multilingualLanguages;
@property (strong, nonatomic) NSString *normalizedIdentifier; // @synthesize normalizedIdentifier;
@property (readonly, strong, nonatomic) NSArray *normalizedIdentifierLevels;
@property (strong, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property (strong, nonatomic) NSString *softwareLayout; // @synthesize softwareLayout;
@property (readonly, nonatomic) BOOL supportsEmojiSearch;

+ (id)autofillSignupInputMode;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)dictationInputMode;
+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)intlInputMode;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)includeBarHeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isAllowedForTraits:(id)arg1;
- (BOOL)isDesiredForTraits:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setLastUsedDictationLanguage;

@end
