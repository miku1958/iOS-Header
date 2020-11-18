//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadOrganizationName;
    NSString *_payloadOrganizationAddress;
    NSString *_payloadOrganizationPhone;
    NSString *_payloadOrganizationEmail;
    NSString *_payloadOrganizationMagic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadOrganizationAddress; // @synthesize payloadOrganizationAddress=_payloadOrganizationAddress;
@property (copy, nonatomic) NSString *payloadOrganizationEmail; // @synthesize payloadOrganizationEmail=_payloadOrganizationEmail;
@property (copy, nonatomic) NSString *payloadOrganizationMagic; // @synthesize payloadOrganizationMagic=_payloadOrganizationMagic;
@property (copy, nonatomic) NSString *payloadOrganizationName; // @synthesize payloadOrganizationName=_payloadOrganizationName;
@property (copy, nonatomic) NSString *payloadOrganizationPhone; // @synthesize payloadOrganizationPhone=_payloadOrganizationPhone;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withOrganizationName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withOrganizationName:(id)arg2 withOrganizationAddress:(id)arg3 withOrganizationPhone:(id)arg4 withOrganizationEmail:(id)arg5 withOrganizationMagic:(id)arg6;
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
