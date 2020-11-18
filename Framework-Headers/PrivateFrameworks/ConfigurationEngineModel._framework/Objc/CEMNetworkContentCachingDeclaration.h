//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkContentCachingDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowPersonalCaching;
    NSNumber *_payloadAllowSharedCaching;
    NSNumber *_payloadAutoActivation;
    NSNumber *_payloadCacheLimit;
    NSString *_payloadDataPath;
    NSNumber *_payloadDenyActivation;
    NSNumber *_payloadDenyTetheredCaching;
    NSArray *_payloadListenRanges;
    NSNumber *_payloadListenRangesOnly;
    NSNumber *_payloadListenWithPeersAndParents;
    NSNumber *_payloadLocalSubnetsOnly;
    NSNumber *_payloadLogClientIdentity;
    NSArray *_payloadParents;
    NSString *_payloadParentSelectionPolicy;
    NSArray *_payloadPeerFilterRanges;
    NSArray *_payloadPeerListenRanges;
    NSNumber *_payloadPeerLocalSubnetsOnly;
    NSNumber *_payloadPort;
    NSArray *_payloadPublicRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *payloadAllowPersonalCaching; // @synthesize payloadAllowPersonalCaching=_payloadAllowPersonalCaching;
@property (copy, nonatomic) NSNumber *payloadAllowSharedCaching; // @synthesize payloadAllowSharedCaching=_payloadAllowSharedCaching;
@property (copy, nonatomic) NSNumber *payloadAutoActivation; // @synthesize payloadAutoActivation=_payloadAutoActivation;
@property (copy, nonatomic) NSNumber *payloadCacheLimit; // @synthesize payloadCacheLimit=_payloadCacheLimit;
@property (copy, nonatomic) NSString *payloadDataPath; // @synthesize payloadDataPath=_payloadDataPath;
@property (copy, nonatomic) NSNumber *payloadDenyActivation; // @synthesize payloadDenyActivation=_payloadDenyActivation;
@property (copy, nonatomic) NSNumber *payloadDenyTetheredCaching; // @synthesize payloadDenyTetheredCaching=_payloadDenyTetheredCaching;
@property (copy, nonatomic) NSArray *payloadListenRanges; // @synthesize payloadListenRanges=_payloadListenRanges;
@property (copy, nonatomic) NSNumber *payloadListenRangesOnly; // @synthesize payloadListenRangesOnly=_payloadListenRangesOnly;
@property (copy, nonatomic) NSNumber *payloadListenWithPeersAndParents; // @synthesize payloadListenWithPeersAndParents=_payloadListenWithPeersAndParents;
@property (copy, nonatomic) NSNumber *payloadLocalSubnetsOnly; // @synthesize payloadLocalSubnetsOnly=_payloadLocalSubnetsOnly;
@property (copy, nonatomic) NSNumber *payloadLogClientIdentity; // @synthesize payloadLogClientIdentity=_payloadLogClientIdentity;
@property (copy, nonatomic) NSString *payloadParentSelectionPolicy; // @synthesize payloadParentSelectionPolicy=_payloadParentSelectionPolicy;
@property (copy, nonatomic) NSArray *payloadParents; // @synthesize payloadParents=_payloadParents;
@property (copy, nonatomic) NSArray *payloadPeerFilterRanges; // @synthesize payloadPeerFilterRanges=_payloadPeerFilterRanges;
@property (copy, nonatomic) NSArray *payloadPeerListenRanges; // @synthesize payloadPeerListenRanges=_payloadPeerListenRanges;
@property (copy, nonatomic) NSNumber *payloadPeerLocalSubnetsOnly; // @synthesize payloadPeerLocalSubnetsOnly=_payloadPeerLocalSubnetsOnly;
@property (copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;
@property (copy, nonatomic) NSArray *payloadPublicRanges; // @synthesize payloadPublicRanges=_payloadPublicRanges;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowPersonalCaching:(id)arg2 withAllowSharedCaching:(id)arg3 withAutoActivation:(id)arg4 withCacheLimit:(id)arg5 withDataPath:(id)arg6 withDenyActivation:(id)arg7 withDenyTetheredCaching:(id)arg8 withListenRanges:(id)arg9 withListenRangesOnly:(id)arg10 withListenWithPeersAndParents:(id)arg11 withLocalSubnetsOnly:(id)arg12 withLogClientIdentity:(id)arg13 withParents:(id)arg14 withParentSelectionPolicy:(id)arg15 withPeerFilterRanges:(id)arg16 withPeerListenRanges:(id)arg17 withPeerLocalSubnetsOnly:(id)arg18 withPort:(id)arg19 withPublicRanges:(id)arg20;
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

