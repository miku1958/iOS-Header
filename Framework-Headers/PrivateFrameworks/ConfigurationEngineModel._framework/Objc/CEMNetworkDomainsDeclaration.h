//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMNetworkDomainsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadEmailDomains;
    NSArray *_payloadWebDomains;
    NSArray *_payloadSafariPasswordAutoFillDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *payloadEmailDomains; // @synthesize payloadEmailDomains=_payloadEmailDomains;
@property (copy, nonatomic) NSArray *payloadSafariPasswordAutoFillDomains; // @synthesize payloadSafariPasswordAutoFillDomains=_payloadSafariPasswordAutoFillDomains;
@property (copy, nonatomic) NSArray *payloadWebDomains; // @synthesize payloadWebDomains=_payloadWebDomains;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withEmailDomains:(id)arg2 withWebDomains:(id)arg3 withSafariPasswordAutoFillDomains:(id)arg4;
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

