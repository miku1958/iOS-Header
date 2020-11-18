//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSecuritySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowUntrustedTLSPrompt;
    NSNumber *_payloadAllowOTAPKIUpdates;
    NSNumber *_payloadForceEncryptedBackup;
    NSNumber *_payloadAllowEraseContentAndSettings;
    NSNumber *_payloadAllowEnablingRestrictions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *payloadAllowEnablingRestrictions; // @synthesize payloadAllowEnablingRestrictions=_payloadAllowEnablingRestrictions;
@property (copy, nonatomic) NSNumber *payloadAllowEraseContentAndSettings; // @synthesize payloadAllowEraseContentAndSettings=_payloadAllowEraseContentAndSettings;
@property (copy, nonatomic) NSNumber *payloadAllowOTAPKIUpdates; // @synthesize payloadAllowOTAPKIUpdates=_payloadAllowOTAPKIUpdates;
@property (copy, nonatomic) NSNumber *payloadAllowUntrustedTLSPrompt; // @synthesize payloadAllowUntrustedTLSPrompt=_payloadAllowUntrustedTLSPrompt;
@property (copy, nonatomic) NSNumber *payloadForceEncryptedBackup; // @synthesize payloadForceEncryptedBackup=_payloadForceEncryptedBackup;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowUntrustedTLSPrompt:(id)arg2 withAllowOTAPKIUpdates:(id)arg3 withForceEncryptedBackup:(id)arg4 withAllowEraseContentAndSettings:(id)arg5 withAllowEnablingRestrictions:(id)arg6;
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
