//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMAccountCalDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalDAVAccountDescription;
    NSString *_payloadCalDAVHostName;
    NSString *_payloadCalDAVPrincipalURL;
    NSNumber *_payloadCalDAVUseSSL;
    NSNumber *_payloadCalDAVPort;
    NSString *_payloadCalDAVCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadCalDAVAccountDescription; // @synthesize payloadCalDAVAccountDescription=_payloadCalDAVAccountDescription;
@property (copy, nonatomic) NSString *payloadCalDAVCredentials; // @synthesize payloadCalDAVCredentials=_payloadCalDAVCredentials;
@property (copy, nonatomic) NSString *payloadCalDAVHostName; // @synthesize payloadCalDAVHostName=_payloadCalDAVHostName;
@property (copy, nonatomic) NSNumber *payloadCalDAVPort; // @synthesize payloadCalDAVPort=_payloadCalDAVPort;
@property (copy, nonatomic) NSString *payloadCalDAVPrincipalURL; // @synthesize payloadCalDAVPrincipalURL=_payloadCalDAVPrincipalURL;
@property (copy, nonatomic) NSNumber *payloadCalDAVUseSSL; // @synthesize payloadCalDAVUseSSL=_payloadCalDAVUseSSL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCalDAVHostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCalDAVAccountDescription:(id)arg2 withCalDAVHostName:(id)arg3 withCalDAVPrincipalURL:(id)arg4 withCalDAVUseSSL:(id)arg5 withCalDAVPort:(id)arg6 withCalDAVCredentials:(id)arg7;
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
