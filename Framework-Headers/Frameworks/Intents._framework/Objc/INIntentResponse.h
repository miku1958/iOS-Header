//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INGenericIntentResponse-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentResponseExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableDescription, INImage, INIntentResponseCodableCode, INIntentResponseDescription, NSDictionary, NSString, NSUserActivity, PBCodable, _INPBIntentResponse;

@interface INIntentResponse : NSObject <INImageProxyInjecting, INIntentSlotComposing, INCacheableContainer, INEnumerable, INKeyImageProducing, INIntentResponseExport, INGenericIntentResponse, INRuntimeObject, NSCopying, NSSecureCoding>
{
    BOOL __userConfirmationRequired;
    long long _code;
    _INPBIntentResponse *_backingStore;
    PBCodable *_responseMessagePBRepresentation;
    INCodableDescription *_codableDescription;
    NSUserActivity *_userActivity;
    long long __stage;
}

@property (readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
@property (readonly, nonatomic) NSString *_className;
@property (readonly, nonatomic) INCodableDescription *_codableDescription; // @synthesize _codableDescription;
@property (readonly, nonatomic) INIntentResponseDescription *_instanceDescription;
@property (readonly, nonatomic) INIntentResponseCodableCode *_intentResponseCodableCode;
@property (readonly, nonatomic) long long _intentResponseCode;
@property (readonly) long long _intents_toggleState;
@property (readonly) INImage *_keyImage;
@property (strong, nonatomic, setter=_setPayloadResponseTypeName:) NSString *_payloadResponseTypeName;
@property (nonatomic, setter=_setRequiresAuthentication:) BOOL _requiresAuthentication;
@property (nonatomic, setter=_setRequiresProtectedData:) BOOL _requiresProtectedData;
@property (strong, nonatomic, setter=_setResponseMessagePBRepresentation:) PBCodable *_responseMessagePBRepresentation; // @synthesize _responseMessagePBRepresentation;
@property (readonly, nonatomic) BOOL _shouldForwardIntentToApp;
@property (nonatomic, setter=_setStage:) long long _stage; // @synthesize _stage=__stage;
@property (readonly, nonatomic, getter=_isSuccess) BOOL _success;
@property (readonly, nonatomic) long long _type;
@property (readonly, nonatomic) BOOL _userConfirmationRequired; // @synthesize _userConfirmationRequired=__userConfirmationRequired;
@property (readonly, copy, nonatomic) _INPBIntentResponse *backingStore; // @synthesize backingStore=_backingStore;
@property (nonatomic) long long code; // @synthesize code=_code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *propertiesByName;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;

+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromIntentResponseCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (void)initialize;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)_code;
- (long long)_codeWithName:(id)arg1;
- (BOOL)_commonInit;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (BOOL)_enumerateWithValueProcessingBlock:(CDUnknownBlockType)arg1;
- (id)_inCodable;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_intentHandlingStatus;
- (id)_intents_cacheableObjects;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (BOOL)_isValidKey:(id)arg1;
- (id)_originatingBundleIdentifier;
- (id)_payloadResponseMessageData;
- (id)_propertiesByNameForLanguage:(id)arg1;
- (id)_querySchemaWithBlock:(CDUnknownBlockType)arg1;
- (id)_renderedResponseForLanguage:(id)arg1 requiresSiriCompatibility:(BOOL)arg2;
- (id)_responseTemplateForLanguage:(id)arg1;
- (id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(BOOL)arg2;
- (void)_setCode:(long long)arg1;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (long long)_stageWithName:(id)arg1;
- (void)_updateWithJSONDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (id)intentSlotDescriptions;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
