//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelConfigurationBase.h>

#import <RemoteManagementModel/RMModelRegisteredTypeProtocol-Protocol.h>

@class NSString, RMModelAppDeclaration_Installation;

@interface RMModelAppDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>
{
    NSString *_payloadBundleIdentifier;
    RMModelAppDeclaration_Installation *_payloadInstallation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadBundleIdentifier; // @synthesize payloadBundleIdentifier=_payloadBundleIdentifier;
@property (copy, nonatomic) RMModelAppDeclaration_Installation *payloadInstallation; // @synthesize payloadInstallation=_payloadInstallation;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 installation:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end

