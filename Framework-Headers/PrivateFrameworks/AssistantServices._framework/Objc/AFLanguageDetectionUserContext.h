//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface AFLanguageDetectionUserContext : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_lidUserContext;
    unsigned int _userContextChangeBit;
    BOOL _simulateLanguageDetectorAssetsAvailability;
    NSArray *_simulatingLanguageCodes;
    NSArray *_finalDictationLanguages;
    NSMutableDictionary *_dictationLanguageMappingCache;
    BOOL _languageToggled;
    NSString *_currentKeyboard;
    NSString *_primaryLanguageCode;
    NSDictionary *_languageCodeOverrides;
    NSString *_prevMessageLanguage;
    NSString *_globalLastUsedKeyboard;
    NSArray *_multiLingualKeyboardLanguages;
    NSArray *_keyboardConvoRecentMessages;
    NSArray *_dictationLanguages;
    NSDictionary *_keyboardConversationLanguagePriors;
    NSDictionary *_keyboardGlobalLanguagePriors;
    NSNumber *_dictationInputOrigin;
}

@property (copy, nonatomic) NSString *currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
@property (copy, nonatomic) NSNumber *dictationInputOrigin; // @synthesize dictationInputOrigin=_dictationInputOrigin;
@property (copy, nonatomic) NSArray *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property (copy, nonatomic) NSString *globalLastUsedKeyboard; // @synthesize globalLastUsedKeyboard=_globalLastUsedKeyboard;
@property (copy, nonatomic) NSDictionary *keyboardConversationLanguagePriors; // @synthesize keyboardConversationLanguagePriors=_keyboardConversationLanguagePriors;
@property (copy, nonatomic) NSArray *keyboardConvoRecentMessages; // @synthesize keyboardConvoRecentMessages=_keyboardConvoRecentMessages;
@property (copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // @synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors;
@property (copy, nonatomic) NSDictionary *languageCodeOverrides; // @synthesize languageCodeOverrides=_languageCodeOverrides;
@property (nonatomic, getter=wasLanguageToggled, setter=setWasLanguageToggled:) BOOL languageToggled; // @synthesize languageToggled=_languageToggled;
@property (copy, nonatomic) NSArray *multiLingualKeyboardLanguages; // @synthesize multiLingualKeyboardLanguages=_multiLingualKeyboardLanguages;
@property (copy, nonatomic) NSString *prevMessageLanguage; // @synthesize prevMessageLanguage=_prevMessageLanguage;
@property (copy, nonatomic) NSString *primaryLanguageCode; // @synthesize primaryLanguageCode=_primaryLanguageCode;

+ (id)defaultContextWithPrimaryLanguage:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_removeContextValueForKey:(id)arg1 context:(id)arg2;
- (void)_setContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;
- (void)_setDictationLanguageCodeMappingCache:(id)arg1;
- (void)_setFinalFilteredDictationLanguages:(id)arg1;
- (void)_setLanguageDetectorContext:(id)arg1;
- (void)_setUserContextChangeBit:(unsigned int)arg1;
- (void)_updateContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;
- (id)context;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finalFilteredDictationLanguages;
- (id)getContextForAnalytics;
- (id)getDictationLanguagesForSupportedLocales:(id)arg1 error:(id *)arg2;
- (id)getSiriDictationLanguagesFromLanguages:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isUpdateAvailableForLanguageDetectorContext;
- (unsigned int)languageDetectorContextChangeBits;
- (id)languageDetectorUserContext;
- (id)priorsByReplacingKeyboardLanguage:(id)arg1;
- (void)setShouldSimulateLanguageDetectorAssetsAvailability:(BOOL)arg1;
- (void)setSimulatingLanguageCodes:(id)arg1;
- (BOOL)shouldSimulateLanguageDetectorAssetsAvailability;
- (id)simulatingLanguageCodes;
- (id)siriDictationLanguageForLanguage:(id)arg1;
- (id)userContextLanguageCodeForKeyboardLangauge:(id)arg1 overrideLanguageCode:(id)arg2;

@end

