//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemAirPrintSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowAirPrint;
    NSNumber *_payloadForceAirPrintTrustedTLSRequirement;
    NSNumber *_payloadAllowAirPrintiBeaconDiscovery;
    NSNumber *_payloadAllowAirPrintCredentialsStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrint; // @synthesize payloadAllowAirPrint=_payloadAllowAirPrint;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintCredentialsStorage; // @synthesize payloadAllowAirPrintCredentialsStorage=_payloadAllowAirPrintCredentialsStorage;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintiBeaconDiscovery; // @synthesize payloadAllowAirPrintiBeaconDiscovery=_payloadAllowAirPrintiBeaconDiscovery;
@property (copy, nonatomic) NSNumber *payloadForceAirPrintTrustedTLSRequirement; // @synthesize payloadForceAirPrintTrustedTLSRequirement=_payloadForceAirPrintTrustedTLSRequirement;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAirPrint:(id)arg2 withForceAirPrintTrustedTLSRequirement:(id)arg3 withAllowAirPrintiBeaconDiscovery:(id)arg4 withAllowAirPrintCredentialsStorage:(id)arg5;
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
