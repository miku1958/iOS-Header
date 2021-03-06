//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentMetadata-Protocol.h>

@class NSArray, NSData, NSString, _INPBImageValue, _INPBString;

@interface _INPBIntentMetadata : PBCodable <INJSONSerializable, _INPBIntentMetadata, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _requiredEntitlements;
    CDStruct_95bda58d _shortcutAvailabilities;
    struct {
        unsigned int executionContext:1;
        unsigned int intentCategory:1;
        unsigned int backgroundLaunch:1;
        unsigned int confirmed:1;
        unsigned int idiom:1;
        unsigned int isOwnedByCurrentUser:1;
        unsigned int isPrimaryDisplayDisabled:1;
        unsigned int showsWhenRun:1;
        unsigned int triggerMethod:1;
        unsigned int userConfirmationRequired:1;
    } _has;
    BOOL _backgroundLaunch;
    BOOL _confirmed;
    BOOL _isOwnedByCurrentUser;
    BOOL _isPrimaryDisplayDisabled;
    BOOL _showsWhenRun;
    BOOL _userConfirmationRequired;
    int _executionContext;
    int _intentCategory;
    int _idiom;
    int _triggerMethod;
    NSString *_categoryVerb;
    _INPBImageValue *_defaultImageValue;
    NSString *_launchId;
    NSString *_nanoLaunchId;
    NSString *_systemExtensionBundleId;
    NSString *_systemUIExtensionBundleId;
    NSArray *_airPlayRouteIds;
    NSData *_auditTokenData;
    NSArray *_forceNeedsValueForParameters;
    NSString *_intentDescription;
    NSString *_intentId;
    NSString *_originatingDeviceIdsIdentifier;
    NSString *_originatingDeviceRapportEffectiveId;
    NSString *_originatingDeviceRapportMediaSystemId;
    NSArray *_parameterImages;
    NSString *_suggestedInvocationPhrase;
    _INPBString *_userUtterance;
}

@property (copy, nonatomic) NSArray *airPlayRouteIds; // @synthesize airPlayRouteIds=_airPlayRouteIds;
@property (readonly, nonatomic) unsigned long long airPlayRouteIdsCount;
@property (copy, nonatomic) NSData *auditTokenData; // @synthesize auditTokenData=_auditTokenData;
@property (nonatomic) BOOL backgroundLaunch; // @synthesize backgroundLaunch=_backgroundLaunch;
@property (copy, nonatomic) NSString *categoryVerb; // @synthesize categoryVerb=_categoryVerb;
@property (nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) _INPBImageValue *defaultImageValue; // @synthesize defaultImageValue=_defaultImageValue;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) int executionContext; // @synthesize executionContext=_executionContext;
@property (copy, nonatomic) NSArray *forceNeedsValueForParameters; // @synthesize forceNeedsValueForParameters=_forceNeedsValueForParameters;
@property (readonly, nonatomic) unsigned long long forceNeedsValueForParametersCount;
@property (readonly, nonatomic) BOOL hasAuditTokenData;
@property (nonatomic) BOOL hasBackgroundLaunch;
@property (readonly, nonatomic) BOOL hasCategoryVerb;
@property (nonatomic) BOOL hasConfirmed;
@property (readonly, nonatomic) BOOL hasDefaultImageValue;
@property (nonatomic) BOOL hasExecutionContext;
@property (nonatomic) BOOL hasIdiom;
@property (nonatomic) BOOL hasIntentCategory;
@property (readonly, nonatomic) BOOL hasIntentDescription;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (nonatomic) BOOL hasIsOwnedByCurrentUser;
@property (nonatomic) BOOL hasIsPrimaryDisplayDisabled;
@property (readonly, nonatomic) BOOL hasLaunchId;
@property (readonly, nonatomic) BOOL hasNanoLaunchId;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceIdsIdentifier;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceRapportEffectiveId;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceRapportMediaSystemId;
@property (nonatomic) BOOL hasShowsWhenRun;
@property (readonly, nonatomic) BOOL hasSuggestedInvocationPhrase;
@property (readonly, nonatomic) BOOL hasSystemExtensionBundleId;
@property (readonly, nonatomic) BOOL hasSystemUIExtensionBundleId;
@property (nonatomic) BOOL hasTriggerMethod;
@property (nonatomic) BOOL hasUserConfirmationRequired;
@property (readonly, nonatomic) BOOL hasUserUtterance;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) int idiom; // @synthesize idiom=_idiom;
@property (nonatomic) int intentCategory; // @synthesize intentCategory=_intentCategory;
@property (copy, nonatomic) NSString *intentDescription; // @synthesize intentDescription=_intentDescription;
@property (copy, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
@property (nonatomic) BOOL isOwnedByCurrentUser; // @synthesize isOwnedByCurrentUser=_isOwnedByCurrentUser;
@property (nonatomic) BOOL isPrimaryDisplayDisabled; // @synthesize isPrimaryDisplayDisabled=_isPrimaryDisplayDisabled;
@property (copy, nonatomic) NSString *launchId; // @synthesize launchId=_launchId;
@property (copy, nonatomic) NSString *nanoLaunchId; // @synthesize nanoLaunchId=_nanoLaunchId;
@property (copy, nonatomic) NSString *originatingDeviceIdsIdentifier; // @synthesize originatingDeviceIdsIdentifier=_originatingDeviceIdsIdentifier;
@property (copy, nonatomic) NSString *originatingDeviceRapportEffectiveId; // @synthesize originatingDeviceRapportEffectiveId=_originatingDeviceRapportEffectiveId;
@property (copy, nonatomic) NSString *originatingDeviceRapportMediaSystemId; // @synthesize originatingDeviceRapportMediaSystemId=_originatingDeviceRapportMediaSystemId;
@property (copy, nonatomic) NSArray *parameterImages; // @synthesize parameterImages=_parameterImages;
@property (readonly, nonatomic) unsigned long long parameterImagesCount;
@property (readonly, nonatomic) int *requiredEntitlements;
@property (readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property (readonly, nonatomic) int *shortcutAvailabilities;
@property (readonly, nonatomic) unsigned long long shortcutAvailabilitiesCount;
@property (nonatomic) BOOL showsWhenRun; // @synthesize showsWhenRun=_showsWhenRun;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase; // @synthesize suggestedInvocationPhrase=_suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemExtensionBundleId; // @synthesize systemExtensionBundleId=_systemExtensionBundleId;
@property (copy, nonatomic) NSString *systemUIExtensionBundleId; // @synthesize systemUIExtensionBundleId=_systemUIExtensionBundleId;
@property (nonatomic) int triggerMethod; // @synthesize triggerMethod=_triggerMethod;
@property (nonatomic) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property (strong, nonatomic) _INPBString *userUtterance; // @synthesize userUtterance=_userUtterance;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (Class)parameterImagesType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsExecutionContext:(id)arg1;
- (int)StringAsIdiom:(id)arg1;
- (int)StringAsIntentCategory:(id)arg1;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (int)StringAsShortcutAvailabilities:(id)arg1;
- (int)StringAsTriggerMethod:(id)arg1;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)addAirPlayRouteIds:(id)arg1;
- (void)addForceNeedsValueForParameter:(id)arg1;
- (void)addParameterImages:(id)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)addShortcutAvailability:(int)arg1;
- (id)airPlayRouteIdsAtIndex:(unsigned long long)arg1;
- (void)clearAirPlayRouteIds;
- (void)clearForceNeedsValueForParameters;
- (void)clearParameterImages;
- (void)clearRequiredEntitlements;
- (void)clearShortcutAvailabilities;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)executionContextAsString:(int)arg1;
- (id)forceNeedsValueForParameterAtIndex:(unsigned long long)arg1;
- (id)idiomAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intentCategoryAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)parameterImagesAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (id)requiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (void)setShortcutAvailabilities:(int *)arg1 count:(unsigned long long)arg2;
- (id)shortcutAvailabilitiesAsString:(int)arg1;
- (int)shortcutAvailabilityAtIndex:(unsigned long long)arg1;
- (id)triggerMethodAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

