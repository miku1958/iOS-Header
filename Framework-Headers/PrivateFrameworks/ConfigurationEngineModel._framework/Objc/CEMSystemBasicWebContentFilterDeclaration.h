//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadRestrictWeb;
    NSNumber *_payloadUseContentFilter;
    NSNumber *_payloadWhiteListEnabled;
    NSArray *_payloadSiteWhiteList;
    NSArray *_payloadFilterWhiteList;
    NSArray *_payloadFilterBlackList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *payloadFilterBlackList; // @synthesize payloadFilterBlackList=_payloadFilterBlackList;
@property (copy, nonatomic) NSArray *payloadFilterWhiteList; // @synthesize payloadFilterWhiteList=_payloadFilterWhiteList;
@property (copy, nonatomic) NSNumber *payloadRestrictWeb; // @synthesize payloadRestrictWeb=_payloadRestrictWeb;
@property (copy, nonatomic) NSArray *payloadSiteWhiteList; // @synthesize payloadSiteWhiteList=_payloadSiteWhiteList;
@property (copy, nonatomic) NSNumber *payloadUseContentFilter; // @synthesize payloadUseContentFilter=_payloadUseContentFilter;
@property (copy, nonatomic) NSNumber *payloadWhiteListEnabled; // @synthesize payloadWhiteListEnabled=_payloadWhiteListEnabled;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2 withUseContentFilter:(id)arg3 withWhiteListEnabled:(id)arg4 withSiteWhiteList:(id)arg5 withFilterWhiteList:(id)arg6 withFilterBlackList:(id)arg7;
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
- (id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;

@end

