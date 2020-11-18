//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelConfigurationBase.h>

#import <RemoteManagementModel/RMModelRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface RMModelAccountCardDAVDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>
{
    NSString *_payloadVisibleName;
    NSString *_payloadHostName;
    NSNumber *_payloadPort;
    NSString *_payloadPath;
    NSString *_payloadAuthenticationCredentialsAssetReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // @synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference;
@property (copy, nonatomic) NSString *payloadHostName; // @synthesize payloadHostName=_payloadHostName;
@property (copy, nonatomic) NSString *payloadPath; // @synthesize payloadPath=_payloadPath;
@property (copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;
@property (copy, nonatomic) NSString *payloadVisibleName; // @synthesize payloadVisibleName=_payloadVisibleName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 hostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 hostName:(id)arg3 port:(id)arg4 path:(id)arg5 authenticationCredentialsAssetReference:(id)arg6;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
