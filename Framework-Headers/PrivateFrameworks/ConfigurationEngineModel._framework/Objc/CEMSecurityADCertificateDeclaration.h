//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *payloadAllowAllAppsAccess;
@property (readonly, nonatomic) NSString *payloadCertServer;
@property (readonly, nonatomic) NSString *payloadCertTemplate;
@property (readonly, nonatomic) NSString *payloadCertificateAcquisitionMechanism;
@property (readonly, nonatomic) NSString *payloadCertificateAuthority;
@property (readonly, nonatomic) NSNumber *payloadCertificateRenewalTimeInterval;
@property (readonly, nonatomic) NSString *payloadDescription;
@property (readonly, nonatomic) NSNumber *payloadKeyIsExtractable;
@property (readonly, nonatomic) NSNumber *payloadKeysize;
@property (readonly, nonatomic) NSNumber *payloadPromptForCredentials;
@property (readonly) Class superclass;

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
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;

@end
