//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAccountGoogleDeclaration_CommunicationServiceRules, NSString;

@interface CEMAccountGoogleDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadAccountDescription;
    NSString *_payloadAccountName;
    NSString *_payloadEmailAddress;
    CEMAccountGoogleDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadAccountDescription; // @synthesize payloadAccountDescription=_payloadAccountDescription;
@property (copy, nonatomic) NSString *payloadAccountName; // @synthesize payloadAccountName=_payloadAccountName;
@property (copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // @synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules;
@property (copy, nonatomic) NSString *payloadEmailAddress; // @synthesize payloadEmailAddress=_payloadEmailAddress;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAddress:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withAccountDescription:(id)arg2 withAccountName:(id)arg3 withEmailAddress:(id)arg4 withCommunicationServiceRules:(id)arg5;
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

