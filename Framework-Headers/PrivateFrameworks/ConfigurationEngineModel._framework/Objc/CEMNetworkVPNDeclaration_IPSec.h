//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSData, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_IPSec : CEMPayloadBase
{
    NSString *_payloadRemoteAddress;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadXAuthName;
    NSString *_payloadXAuthPassword;
    NSNumber *_payloadXAuthEnabled;
    NSString *_payloadXAuthPasswordEncryption;
    NSString *_payloadLocalIdentifier;
    NSString *_payloadLocalIdentifierType;
    NSData *_payloadSharedSecret;
    NSString *_payloadPayloadCertificateUUID;
    NSNumber *_payloadPromptForVPNPIN;
    NSNumber *_payloadOnDemandEnabled;
    NSArray *_payloadOnDemandMatchDomainsAlways;
    NSArray *_payloadOnDemandMatchDomainsNever;
    NSArray *_payloadOnDemandMatchDomainsOnRetry;
    NSArray *_payloadOnDemandRules;
}

@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // @synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadLocalIdentifier; // @synthesize payloadLocalIdentifier=_payloadLocalIdentifier;
@property (copy, nonatomic) NSString *payloadLocalIdentifierType; // @synthesize payloadLocalIdentifierType=_payloadLocalIdentifierType;
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled; // @synthesize payloadOnDemandEnabled=_payloadOnDemandEnabled;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways; // @synthesize payloadOnDemandMatchDomainsAlways=_payloadOnDemandMatchDomainsAlways;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever; // @synthesize payloadOnDemandMatchDomainsNever=_payloadOnDemandMatchDomainsNever;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry; // @synthesize payloadOnDemandMatchDomainsOnRetry=_payloadOnDemandMatchDomainsOnRetry;
@property (copy, nonatomic) NSArray *payloadOnDemandRules; // @synthesize payloadOnDemandRules=_payloadOnDemandRules;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID; // @synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadPromptForVPNPIN; // @synthesize payloadPromptForVPNPIN=_payloadPromptForVPNPIN;
@property (copy, nonatomic) NSString *payloadRemoteAddress; // @synthesize payloadRemoteAddress=_payloadRemoteAddress;
@property (copy, nonatomic) NSData *payloadSharedSecret; // @synthesize payloadSharedSecret=_payloadSharedSecret;
@property (copy, nonatomic) NSNumber *payloadXAuthEnabled; // @synthesize payloadXAuthEnabled=_payloadXAuthEnabled;
@property (copy, nonatomic) NSString *payloadXAuthName; // @synthesize payloadXAuthName=_payloadXAuthName;
@property (copy, nonatomic) NSString *payloadXAuthPassword; // @synthesize payloadXAuthPassword=_payloadXAuthPassword;
@property (copy, nonatomic) NSString *payloadXAuthPasswordEncryption; // @synthesize payloadXAuthPasswordEncryption=_payloadXAuthPasswordEncryption;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRemoteAddress:(id)arg1 withAuthenticationMethod:(id)arg2 withXAuthName:(id)arg3 withXAuthPassword:(id)arg4 withXAuthEnabled:(id)arg5 withXAuthPasswordEncryption:(id)arg6 withLocalIdentifier:(id)arg7 withLocalIdentifierType:(id)arg8 withSharedSecret:(id)arg9 withPayloadCertificateUUID:(id)arg10 withPromptForVPNPIN:(id)arg11 withOnDemandEnabled:(id)arg12 withOnDemandMatchDomainsAlways:(id)arg13 withOnDemandMatchDomainsNever:(id)arg14 withOnDemandMatchDomainsOnRetry:(id)arg15 withOnDemandRules:(id)arg16;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

