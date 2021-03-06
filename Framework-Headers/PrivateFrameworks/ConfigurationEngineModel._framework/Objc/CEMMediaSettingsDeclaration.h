//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMMediaSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowBookstore;
    NSNumber *_payloadAllowBookstoreErotica;
    NSNumber *_payloadAllowEnterpriseBookBackup;
    NSNumber *_payloadAllowEnterpriseBookMetadataSync;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *payloadAllowBookstore; // @synthesize payloadAllowBookstore=_payloadAllowBookstore;
@property (copy, nonatomic) NSNumber *payloadAllowBookstoreErotica; // @synthesize payloadAllowBookstoreErotica=_payloadAllowBookstoreErotica;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookBackup; // @synthesize payloadAllowEnterpriseBookBackup=_payloadAllowEnterpriseBookBackup;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookMetadataSync; // @synthesize payloadAllowEnterpriseBookMetadataSync=_payloadAllowEnterpriseBookMetadataSync;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowBookstore:(id)arg2 withAllowBookstoreErotica:(id)arg3 withAllowEnterpriseBookBackup:(id)arg4 withAllowEnterpriseBookMetadataSync:(id)arg5;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

