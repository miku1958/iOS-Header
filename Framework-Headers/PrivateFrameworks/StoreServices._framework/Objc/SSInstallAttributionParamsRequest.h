//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSNumber, NSString;

@interface SSInstallAttributionParamsRequest : SSRequest <SSXPCCoding>
{
    BOOL _overrideCampaignLimit;
    NSNumber *_appAdamId;
    NSString *_adNetworkId;
    NSNumber *_campaignId;
    NSString *_impressionId;
    NSNumber *_timestamp;
    NSString *_attributionSignature;
    NSString *_originatingBundleId;
}

@property (readonly, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property (readonly, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
@property (readonly, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property (readonly, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *impressionId; // @synthesize impressionId=_impressionId;
@property (readonly, nonatomic) NSString *originatingBundleId; // @synthesize originatingBundleId=_originatingBundleId;
@property (readonly, nonatomic) BOOL overrideCampaignLimit; // @synthesize overrideCampaignLimit=_overrideCampaignLimit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7 overrideCampaignLimit:(BOOL)arg8;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
