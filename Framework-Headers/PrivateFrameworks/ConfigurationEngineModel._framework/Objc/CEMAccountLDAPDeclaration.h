//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *payloadCommunicationServiceRules;
@property (readonly, nonatomic) NSString *payloadLDAPAccountDescription;
@property (readonly, nonatomic) NSString *payloadLDAPAccountHostName;
@property (readonly, nonatomic) NSNumber *payloadLDAPAccountUseSSL;
@property (readonly, nonatomic) NSString *payloadLDAPCredentials;
@property (readonly, nonatomic) NSArray *payloadLDAPSearchSettings;
@property (readonly) Class superclass;

+ (id)CommunicationServiceRules_DefaultServiceHandlers_allowedPayloadKeys;
+ (id)CommunicationServiceRules_allowedPayloadKeys;
+ (id)LDAPSearchSettingsItem_allowedPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)profileType;
+ (id)registeredClass;
+ (id)registeredType;
+ (id)restrictionPayloadKeys;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadCommunicationServiceRules:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadCommunicationServiceRules_DefaultServiceHandlers:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadLDAPSearchSettingsItem:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validPayloadCommunicationServiceRules_DefaultServiceHandlers_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadCommunicationServiceRules_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadLDAPSearchSettingsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;

@end

