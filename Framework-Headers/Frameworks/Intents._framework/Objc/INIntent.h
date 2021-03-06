//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INGenericIntent-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INIntentCodableDescription, INIntentKeyParameter, INParameterContexts, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSOrderedSet, NSString, NSUUID, PBCodable, _INPBIntentMetadata;

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_intentInstanceDescriptionMapping;
    NSArray *_parameterImages;
    BOOL _hasLoadedKeyParameter;
    struct os_unfair_lock_s _keyParameterLock;
    BOOL _shouldForwardToAppOnSucccess;
    NSDictionary *_parameterCombinations;
    NSDictionary *_configurableParameterCombinations;
    INParameterContexts *_parameterContexts;
    long long _indexingHash;
    INIntentKeyParameter *_keyParameter;
    NSString *_identifier;
    PBCodable *_backingStore;
    NSString *_recordRoute;
    NSUUID *_recordDeviceUID;
    NSString *_recordDeviceIdentifier;
    long long __preferredInteractionDirection;
}

@property (readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
@property (readonly, nonatomic) NSString *_categoryVerb;
@property (readonly, nonatomic) NSArray *_codableAttributes;
@property (readonly, nonatomic) INIntentCodableDescription *_codableDescription;
@property (readonly, nonatomic, getter=_isConfigurable) BOOL _configurable;
@property (strong, nonatomic, setter=_setConfigurableParameterCombinations:) NSDictionary *_configurableParameterCombinations; // @synthesize _configurableParameterCombinations;
@property (strong, nonatomic, setter=_setDefaultImage:) INImage *_defaultImage;
@property (readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property (readonly, nonatomic, getter=_isEligibleForSuggestions) BOOL _eligibleForSuggestions;
@property (nonatomic, setter=_setExecutionContext:) long long _executionContext;
@property (readonly, nonatomic) BOOL _hasTitle;
@property (nonatomic, setter=_setIdiom:) long long _idiom;
@property (readonly, nonatomic) long long _indexingHash; // @synthesize _indexingHash;
@property (readonly, nonatomic) long long _intentCategory;
@property (readonly, nonatomic, getter=_intents_isExemptFromMulitWindowRequirementForInAppHandling) BOOL _intents_exemptFromMulitWindowRequirementForInAppHandling;
@property (readonly, nonatomic) CDStruct_8caa76fc _intents_preferredScaledImageSize;
@property (readonly) long long _intents_toggleState;
@property (strong, nonatomic, setter=_setIsOwnedByCurrentUser:) NSNumber *_isOwnedByCurrentUser;
@property (readonly) INImage *_keyImage;
@property (readonly, nonatomic) INIntentKeyParameter *_keyParameter; // @synthesize _keyParameter;
@property (readonly, copy, nonatomic) NSString *_localizedVerb;
@property (strong, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property (strong, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property (strong, nonatomic, setter=_setOriginatingDeviceIdsIdentifier:) NSString *_originatingDeviceIDSIdentifier;
@property (strong, nonatomic, setter=_setOriginatingDeviceRapportEffectiveIdentifier:) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property (strong, nonatomic, setter=_setOriginatingDeviceRapportMediaSystemIdentifier:) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property (strong, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations; // @synthesize _parameterCombinations;
@property (strong, nonatomic, setter=_setParameterContexts:) INParameterContexts *_parameterContexts; // @synthesize _parameterContexts;
@property (copy, nonatomic, setter=_setParametersForcedToNeedsValue:) NSArray *_parametersForcedToNeedsValue;
@property (readonly, nonatomic) long long _preferredInteractionDirection; // @synthesize _preferredInteractionDirection=__preferredInteractionDirection;
@property (nonatomic, getter=_isPrimaryDisplayDisabled, setter=_setPrimaryDisplayDisabled:) BOOL _primaryDisplayDisabled;
@property (readonly, nonatomic) NSDictionary *_resolvableParameterCombinations;
@property (nonatomic, setter=_setShouldForwardToAppOnSuccess:) BOOL _shouldForwardToAppOnSucccess; // @synthesize _shouldForwardToAppOnSucccess;
@property (readonly, copy, nonatomic) NSString *_subtitle;
@property (readonly, nonatomic) BOOL _supportsBackgroundExecution;
@property (readonly, copy, nonatomic) NSString *_title;
@property (readonly, nonatomic) long long _type;
@property (strong, nonatomic, setter=_setUiExtensionBundleId:) NSString *_uiExtensionBundleId;
@property (nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) BOOL _userConfirmationRequired;
@property (readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property (strong, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds;
@property (copy, nonatomic) PBCodable *backingStore; // @synthesize backingStore=_backingStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain;
@property (strong, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *intentDescription;
@property (readonly, nonatomic) NSString *intentId;
@property (strong, nonatomic, setter=_setLaunchId:) NSString *launchId;
@property (copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
@property (copy, nonatomic) NSDictionary *parametersByName;
@property (strong, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *recordDeviceIdentifier; // @synthesize recordDeviceIdentifier=_recordDeviceIdentifier;
@property (strong, nonatomic, setter=_setRecordDeviceUID:) NSUUID *recordDeviceUID; // @synthesize recordDeviceUID=_recordDeviceUID;
@property (copy, nonatomic, setter=_setRecordRoute:) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
@property (nonatomic) unsigned long long shortcutAvailability;
@property (readonly, copy, nonatomic, getter=_sortedParameterImages) NSArray *sortedParameterImages;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long triggerMethod;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSString *utteranceString;
@property (copy, nonatomic) NSString *verb;

+ (id)_ignoredParameters;
+ (void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2;
+ (id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1;
+ (void)initialize;
+ (id)intentDescription;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)typeName;
- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentationWithConfiguration:(id)arg1;
- (id)_className;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_currentParameterCombination;
- (id)_defaultImageName;
- (id)_dictionaryRepresentation;
- (id)_displayOrderedNonNilParameters;
- (id)_emptyCopy;
- (BOOL)_enumerateWithValueProcessingBlock:(CDUnknownBlockType)arg1;
- (id)_imageForParameter:(id)arg1;
- (id)_inCodable;
- (id)_init;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForParameterImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxyForDefaultImage:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_intentInstanceDescription;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_intents_launchIdForCurrentPlatform;
- (BOOL)_isValidKey:(id)arg1;
- (BOOL)_isValueValidForKey:(id)arg1 unsupportedReason:(id *)arg2;
- (id)_keyCodableAttributes;
- (id)_keyImageWithIntentDescriptionStrategy;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 localizer:(id)arg5;
- (id)_nonNilParameters;
- (id)_querySchemaWithBlock:(CDUnknownBlockType)arg1 contentOptions:(unsigned long long)arg2;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setCategoryVerb:(id)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (void)_setIntentCategory:(long long)arg1;
- (id)_spotlightContentType;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (BOOL)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1;
- (id)_titleForLanguage:(id)arg1;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (void)_updateWithJSONDictionary:(id)arg1;
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
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_4c969caf)arg1 bundle:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end

