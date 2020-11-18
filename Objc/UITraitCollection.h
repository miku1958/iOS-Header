//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>

@class NSDictionary, NSString, UIImageConfiguration;
@protocol _UIThemeKey;

@interface UITraitCollection : NSObject <_UIFallbackEnvironment, NSCopying, NSSecureCoding>
{
    CDStruct_9b1704d8 _builtinTraits;
    NSDictionary *_clientDefinedTraits;
    NSObject *_environmentWrapper;
}

@property (readonly, nonatomic) NSString *_appearanceName;
@property (readonly, nonatomic, getter=_imageConfiguration) UIImageConfiguration *_imageConfiguration;
@property (readonly, nonatomic) long long _presentationSemanticContext;
@property (readonly, nonatomic) long long _semanticContext;
@property (readonly, nonatomic) NSString *_styleEffectAppearanceName;
@property (readonly, nonatomic, getter=_themeKey) id<_UIThemeKey> _themeKey;
@property (readonly, nonatomic) long long accessibilityContrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long displayGamut;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) long long forceTouchCapability;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic, getter=_isFallback) BOOL isFallback;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) long long legibilityWeight;
@property (readonly, copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) long long userInterfaceLevel;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long verticalSizeClass;

+ (id)_backgroundThreadFallbackTraitCollection;
+ (id)_currentTraitCollection;
+ (id)_currentTraitCollectionIfExists;
+ (id)_currentTraitCollectionWithFallback:(BOOL)arg1 markFallback:(BOOL)arg2;
+ (id)_currentTraitCollectionWithUnmarkedFallback;
+ (id)_defaultTraitCollection;
+ (id)_descriptionForChangeFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
+ (id)_emptyTraitCollection;
+ (id)_fallbackTraitCollection;
+ (void)_performWithCurrentTraitCollection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_setBackgroundThreadFallbackTraitCollection:(id)arg1;
+ (void)_setCurrentTraitCollection:(id)arg1;
+ (id)_threadSafeFallbackTraitCollection;
+ (id)_traitCollectionForThemeKey:(id)arg1;
+ (id)_traitCollectionFromImageConfiguration:(id)arg1;
+ (id)_traitCollectionWithBackgroundLevel:(long long)arg1;
+ (id)_traitCollectionWithContrast:(long long)arg1;
+ (id)_traitCollectionWithDebugHighlight:(long long)arg1;
+ (id)_traitCollectionWithEnvironmentWrapper:(id)arg1;
+ (id)_traitCollectionWithPresentationSemanticContext:(long long)arg1;
+ (id)_traitCollectionWithSemanticContext:(long long)arg1;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)_traitCollectionWithVibrancy:(long long)arg1;
+ (id)currentTraitCollection;
+ (void)setCurrentTraitCollection:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)traitCollectionWithAccessibilityContrast:(long long)arg1;
+ (id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1;
+ (id)traitCollectionWithDisplayCornerRadius:(double)arg1;
+ (id)traitCollectionWithDisplayGamut:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithLayoutDirection:(long long)arg1;
+ (id)traitCollectionWithLegibilityWeight:(long long)arg1;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithTextLegibility:(long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceLevel:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;
- (long long)_backgroundLevel;
- (BOOL)_changedContentSizeCategoryFromTraitCollection:(id)arg1;
- (BOOL)_changedContentSizeCategoryOrLegibilityWeightFromTraitCollection:(id)arg1;
- (BOOL)_changedLegibilityWeightFromTraitCollection:(id)arg1;
- (long long)_compare:(id)arg1;
- (long long)_contrast;
- (long long)_countOfIntersectionWithTraitCollection:(id)arg1;
- (long long)_debugHighlight;
- (id)_description;
- (id)_descriptionWithPrivateTraits:(BOOL)arg1;
- (void)_enumerateThemeAppearanceNamesForLookup:(CDUnknownBlockType)arg1;
- (void)_enumerateThemeKeysForLookup:(CDUnknownBlockType)arg1;
- (id)_environmentWrapper;
- (id)_fallbackCopy;
- (id)_fallbackTraitCollection;
- (id)_initWithBuiltinTraitStorage:(CDStruct_9b1704d8 *)arg1 clientDefinedTraits:(id)arg2;
- (id)_initWithBuiltinTraitStorage:(CDStruct_9b1704d8 *)arg1 clientDefinedTraits:(id)arg2 environmentWrapper:(id)arg3;
- (id)_invertedTraitCollection;
- (BOOL)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_namedImageDescription;
- (long long)_textLegibility;
- (long long)_themeLevelForKey;
- (id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2;
- (id)_traitCollectionRelevantForImageConfiguration;
- (id)_traitCollectionWithIncrementedBackgroundLevel;
- (id)_traitNamesForUnspecifiedBuiltInTraits;
- (id)_traitNamesOfIntersectionWithTraitCollection:(id)arg1;
- (id)_traitsDescription;
- (id)_valueForTraitNamed:(id)arg1;
- (long long)_vibrancy;
- (unsigned long long)artworkSubtype;
- (BOOL)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (double)displayCornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg1;
- (id)imageConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionModel;
- (BOOL)isEqual:(id)arg1;
- (void)performAsCurrentTraitCollection:(CDUnknownBlockType)arg1;
- (unsigned long long)primaryInteractionModel;
- (long long)touchLevel;

@end

