//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMNetworkUsageRulesDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadApplicationRules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *payloadApplicationRules; // @synthesize payloadApplicationRules=_payloadApplicationRules;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withApplicationRules:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withApplicationRules:(id)arg2;
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

