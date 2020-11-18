//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentMetadata-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBString;

@interface _INPBIntentMetadata : PBCodable <_INPBIntentMetadata, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _requiredEntitlements;
    struct {
        unsigned int executionContext:1;
        unsigned int intentCategory:1;
        unsigned int backgroundLaunch:1;
        unsigned int confirmed:1;
        unsigned int triggerMethod:1;
        unsigned int userConfirmationRequired:1;
    } _has;
    BOOL _backgroundLaunch;
    BOOL _confirmed;
    BOOL _userConfirmationRequired;
    int _executionContext;
    int _intentCategory;
    int _triggerMethod;
    NSString *_categoryVerb;
    _INPBImageValue *_defaultImageValue;
    NSString *_launchId;
    NSString *_nanoLaunchId;
    NSString *_systemExtensionBundleId;
    NSString *_systemUIExtensionBundleId;
    NSString *_intentDescription;
    NSString *_intentId;
    NSString *_originatingDeviceIdsIdentifier;
    NSArray *_parameterImages;
    NSString *_suggestedInvocationPhrase;
    _INPBString *_userUtterance;
}

@property (nonatomic) BOOL backgroundLaunch; // @synthesize backgroundLaunch=_backgroundLaunch;
@property (copy, nonatomic) NSString *categoryVerb; // @synthesize categoryVerb=_categoryVerb;
@property (nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) _INPBImageValue *defaultImageValue; // @synthesize defaultImageValue=_defaultImageValue;
@property (readonly, copy) NSString *description;
@property (nonatomic) int executionContext; // @synthesize executionContext=_executionContext;
@property (nonatomic) BOOL hasBackgroundLaunch;
@property (readonly, nonatomic) BOOL hasCategoryVerb;
@property (nonatomic) BOOL hasConfirmed;
@property (readonly, nonatomic) BOOL hasDefaultImageValue;
@property (nonatomic) BOOL hasExecutionContext;
@property (nonatomic) BOOL hasIntentCategory;
@property (readonly, nonatomic) BOOL hasIntentDescription;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (readonly, nonatomic) BOOL hasLaunchId;
@property (readonly, nonatomic) BOOL hasNanoLaunchId;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceIdsIdentifier;
@property (readonly, nonatomic) BOOL hasSuggestedInvocationPhrase;
@property (readonly, nonatomic) BOOL hasSystemExtensionBundleId;
@property (readonly, nonatomic) BOOL hasSystemUIExtensionBundleId;
@property (nonatomic) BOOL hasTriggerMethod;
@property (nonatomic) BOOL hasUserConfirmationRequired;
@property (readonly, nonatomic) BOOL hasUserUtterance;
@property (readonly) unsigned long long hash;
@property (nonatomic) int intentCategory; // @synthesize intentCategory=_intentCategory;
@property (copy, nonatomic) NSString *intentDescription; // @synthesize intentDescription=_intentDescription;
@property (copy, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
@property (copy, nonatomic) NSString *launchId; // @synthesize launchId=_launchId;
@property (copy, nonatomic) NSString *nanoLaunchId; // @synthesize nanoLaunchId=_nanoLaunchId;
@property (copy, nonatomic) NSString *originatingDeviceIdsIdentifier; // @synthesize originatingDeviceIdsIdentifier=_originatingDeviceIdsIdentifier;
@property (copy, nonatomic) NSArray *parameterImages; // @synthesize parameterImages=_parameterImages;
@property (readonly, nonatomic) unsigned long long parameterImagesCount;
@property (readonly, nonatomic) int *requiredEntitlements;
@property (readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase; // @synthesize suggestedInvocationPhrase=_suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemExtensionBundleId; // @synthesize systemExtensionBundleId=_systemExtensionBundleId;
@property (copy, nonatomic) NSString *systemUIExtensionBundleId; // @synthesize systemUIExtensionBundleId=_systemUIExtensionBundleId;
@property (nonatomic) int triggerMethod; // @synthesize triggerMethod=_triggerMethod;
@property (nonatomic) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property (strong, nonatomic) _INPBString *userUtterance; // @synthesize userUtterance=_userUtterance;

+ (Class)parameterImagesType;
- (void).cxx_destruct;
- (int)StringAsExecutionContext:(id)arg1;
- (int)StringAsIntentCategory:(id)arg1;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (int)StringAsTriggerMethod:(id)arg1;
- (void)addParameterImages:(id)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearParameterImages;
- (void)clearRequiredEntitlements;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)executionContextAsString:(int)arg1;
- (id)intentCategoryAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)parameterImagesAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (id)requiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (id)triggerMethodAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

