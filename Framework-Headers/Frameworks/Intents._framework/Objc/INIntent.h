//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INGenericIntent-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSArray, NSDictionary, NSMutableDictionary, NSOrderedSet, NSString, PBCodable, _INPBIntentMetadata;

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_intentInstanceDescriptionMapping;
    NSArray *_parameterImages;
    NSDictionary *_parameterCombinations;
    unsigned long long _indexingHash;
    NSString *_identifier;
    PBCodable *_backingStore;
    NSArray *_airPlayRouteIds;
}

@property (readonly, nonatomic) NSString *_categoryVerb;
@property (readonly, nonatomic) NSArray *_codableAttributes;
@property (strong, nonatomic, setter=_setDefaultImage:) INImage *_defaultImage;
@property (readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property (nonatomic, setter=_setExecutionContext:) long long _executionContext;
@property (readonly, nonatomic) BOOL _hasTitle;
@property (readonly) unsigned long long _indexingHash; // @synthesize _indexingHash;
@property (readonly, nonatomic) long long _intentCategory;
@property (readonly) long long _intents_toggleState;
@property (readonly) INImage *_keyImage;
@property (readonly, copy, nonatomic) NSString *_localizedVerb;
@property (strong, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property (strong, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property (strong, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations; // @synthesize _parameterCombinations;
@property (readonly, copy, nonatomic) NSString *_subtitle;
@property (readonly, nonatomic) BOOL _supportsBackgroundExecution;
@property (readonly, copy, nonatomic) NSString *_title;
@property (readonly, nonatomic) long long _type;
@property (strong, nonatomic, setter=_setUiExtensionBundleId:) NSString *_uiExtensionBundleId;
@property (nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) BOOL _userConfirmationRequired;
@property (readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property (strong, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds; // @synthesize airPlayRouteIds=_airPlayRouteIds;
@property (copy, nonatomic) PBCodable *backingStore; // @synthesize backingStore=_backingStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain;
@property (strong, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *intentDescription;
@property (readonly, nonatomic) NSString *intentId;
@property (strong, nonatomic, setter=_setLaunchId:) NSString *launchId;
@property (copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
@property (copy, nonatomic) NSDictionary *parametersByName;
@property (readonly, copy, nonatomic, getter=_sortedParameterImages) NSArray *sortedParameterImages;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long triggerMethod;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSString *utteranceString;
@property (copy, nonatomic) NSString *verb;

+ (id)_ignoredParameters;
+ (void)initialize;
+ (id)intentDescription;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)typeName;
- (void).cxx_destruct;
- (id)_className;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_defaultImageNameWithSchema:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_emptyCopy;
- (id)_imageForParameter:(id)arg1;
- (id)_impl;
- (id)_inCodable;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForParameterImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxyForDefaultImage:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_intentInstanceDescription;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_launchIdForCurrentPlatform;
- (id)_keyImageWithIntentDescriptionStrategy;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundleURL:(id)arg4 language:(id)arg5;
- (id)_nonNilParameters;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setCategoryVerb:(id)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (void)_setIntentCategory:(long long)arg1;
- (id)_spotlightContentType;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleForLanguage:(id)arg1;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageForParameterNamed:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)intentSlotDescriptions;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGenericIntent;
- (id)keyImage;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)protoData;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end

