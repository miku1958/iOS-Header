//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemAirPlaySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadForceAirPlayOutgoingRequestsPairingPassword;
    NSNumber *_payloadForceAirPlayIncomingRequestsPairingPassword;
    NSNumber *_payloadAllowAirPlayIncomingRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *payloadAllowAirPlayIncomingRequests; // @synthesize payloadAllowAirPlayIncomingRequests=_payloadAllowAirPlayIncomingRequests;
@property (copy, nonatomic) NSNumber *payloadForceAirPlayIncomingRequestsPairingPassword; // @synthesize payloadForceAirPlayIncomingRequestsPairingPassword=_payloadForceAirPlayIncomingRequestsPairingPassword;
@property (copy, nonatomic) NSNumber *payloadForceAirPlayOutgoingRequestsPairingPassword; // @synthesize payloadForceAirPlayOutgoingRequestsPairingPassword=_payloadForceAirPlayOutgoingRequestsPairingPassword;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withForceAirPlayOutgoingRequestsPairingPassword:(id)arg2 withForceAirPlayIncomingRequestsPairingPassword:(id)arg3 withAllowAirPlayIncomingRequests:(id)arg4;
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

