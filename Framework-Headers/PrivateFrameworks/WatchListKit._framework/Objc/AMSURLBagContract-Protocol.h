//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/NSObject-Protocol.h>

@class AMSBagValue;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@protocol AMSURLBagContract <NSObject>

@property (readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property (readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property (readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property (readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property (readonly, nonatomic) AMSBagValue *guidRegexes;
@property (readonly, nonatomic) AMSBagValue *guidSchemes;
@property (readonly, nonatomic) id<AMSMescalBagContract> mescalContract;
@property (readonly, nonatomic) id<AMSMetricsBagContract> metricsContract;
@property (readonly, nonatomic) AMSBagValue *metricsURL;
@property (readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property (readonly, nonatomic) AMSBagValue *trustedDomains;


@optional
@end

