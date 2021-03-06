//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSLocale, NSString;

@interface NSPersonNameComponentsFormatter : NSFormatter <NSObservable, NSObserver, NSSecureCoding, NSCopying>
{
    id _private;
}

@property BOOL _forceFamilyNameFirst;
@property BOOL _forceGivenNameFirst;
@property BOOL _ignoresFallbacks;
@property NSLocale *_locale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPhonetic) BOOL phonetic;
@property long long style;
@property (readonly) Class superclass;

+ (long long)__abbreviatedNameFormatForPersonNameComponents:(id)arg1;
+ (long long)__abbreviatedNameFormatForString:(id)arg1;
+ (id)__characterSetWithPattern:(id)arg1;
+ (BOOL)__contents:(id)arg1 exclusivelyInCharacterSet:(struct USet *)arg2;
+ (id)__currentLocale;
+ (id)__familyNameFirstOrdering;
+ (struct USet *)__getCharacterSetWithPattern:(id)arg1;
+ (id)__givenNameFirstOrdering;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ignoreUndeterminedComponents:(BOOL)arg2;
+ (unsigned long long)__inferredScriptIndexFromString:(id)arg1;
+ (SEL)__initialsCreatorForScript:(unsigned long long)arg1;
+ (id)__initialsForString:(id)arg1;
+ (id)__localizedNameDefaults;
+ (id)__longestComponentFromComponents:(id)arg1;
+ (id)__naiveDelimiterForCombinedNameString:(id)arg1;
+ (long long)__nameOrderForLocale:(id)arg1 usingNativeOrdering:(BOOL)arg2;
+ (id)__preferredLanguages;
+ (void)__registerDefaults;
+ (id)__scriptIdentifierFromIndex:(unsigned long long)arg1;
+ (long long)__shortNameFormatForLocale:(id)arg1;
+ (BOOL)__shortStyle:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (BOOL)__shortStyle:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (BOOL)__shortStyleRestrictionExistsForComponents:(id)arg1 shortStyle:(long long)arg2;
+ (BOOL)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (BOOL)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (id)__stringByStrippingNonInitialPunctuationFromString:(id)arg1;
+ (id)__stringValueForShortStyle:(long long)arg1;
+ (id)__stringValueForStyle:(long long)arg1;
+ (BOOL)__style:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (BOOL)__style:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (id)__supportedNameDefaultsFromLocale:(id)arg1;
+ (id)__supportedScriptDefaultsFromScriptName:(id)arg1;
+ (id)__thaiConsonantSet;
+ (id)_cjkLanguagesSet;
+ (id)_cjkLocaleIdentifiers;
+ (BOOL)_currentLocaleIsCJK;
+ (long long)_defaultDisplayNameOrder;
+ (long long)_defaultShortNameFormat;
+ (id)_fallbackDescriptorForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (id)_formatterWithStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (BOOL)_isCJKScript:(id)arg1;
+ (BOOL)_isMixedScript:(id)arg1;
+ (id)_localizedDelimiterForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (id)_localizedShortNameForComponents:(id)arg1 withStyle:(long long)arg2 options:(unsigned long long)arg3;
+ (long long)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (id)_relevantKeyPathsForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (BOOL)_shortNameIsEnabled;
+ (BOOL)_shouldPreferNicknames;
+ (id)_styleFormatterForStyle:(long long)arg1 masterFormatter:(id)arg2;
+ (CDUnknownBlockType)arabicInitialsCreator;
+ (void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
+ (BOOL)isKatakana:(id)arg1;
+ (id)localizedStringFromPersonNameComponents:(id)arg1 style:(long long)arg2 options:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
+ (CDUnknownBlockType)thaiInitialsCreator;
+ (CDUnknownBlockType)tibetanInitialsCreator;
+ (CDUnknownBlockType)westernInitialsCreator;
- (long long)__computedNameOrderForComponents:(id)arg1;
- (long long)__computedShortNameFormat;
- (long long)__localizedNameOrderUsingNativeOrdering:(BOOL)arg1;
- (BOOL)__localizedRestrictionExistsForComponents:(id)arg1 ignoreUndeterminedComponents:(BOOL)arg2;
- (BOOL)__localizedRestrictionExistsForShortStyle:(long long)arg1;
- (BOOL)__localizedRestrictionExistsForStyle:(long long)arg1;
- (long long)__localizedShortNameFormat;
- (long long)_nameOrderWithOverridesForComponents:(id)arg1;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFormatter:(id)arg1;
- (id)personNameComponentsFromString:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromPersonNameComponents:(id)arg1;

@end

