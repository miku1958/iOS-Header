//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

#import <MetricsKit/AMSMetricsBagContract-Protocol.h>
#import <MetricsKit/MTEventRecorderDelegate-Protocol.h>

@class AMSBag, AMSBagValue, MTPromise, NSDictionary, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface MTEventRecorderAMSMetricsDelegate : MTObject <AMSMetricsBagContract, MTEventRecorderDelegate>
{
    BOOL _monitorsLifecycleEvents;
    NSString *_containerId;
    NSDictionary *_lastMetricsDictionary;
    MTPromise *_metricsPromise;
    AMSBag *_amsBag;
}

@property (readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property (strong, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property (readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property (readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property (readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property (strong, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AMSBagValue *guidRegexes;
@property (readonly, nonatomic) AMSBagValue *guidSchemes;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *lastMetricsDictionary; // @synthesize lastMetricsDictionary=_lastMetricsDictionary;
@property (readonly, nonatomic) id<AMSMescalBagContract> mescalContract;
@property (readonly, nonatomic) id<AMSMetricsBagContract> metricsContract;
@property (readonly, nonatomic) AMSBagValue *metricsDictionary;
@property (strong, nonatomic) MTPromise *metricsPromise; // @synthesize metricsPromise=_metricsPromise;
@property (readonly, nonatomic) AMSBagValue *metricsURL;
@property (readonly, nonatomic) AMSBagValue *metricsUrl;
@property (nonatomic) BOOL monitorsLifecycleEvents;
@property (readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSBagValue *trustedDomains;

+ (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)flushBackgroundMetricsIfNeeded;
- (id)flushUnreportedEvents;
- (id)initWithContainerId:(id)arg1;
- (id)initWithContainerId:(id)arg1 amsBag:(id)arg2;
- (id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3;
- (id)prepareMetrics;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)sendMethod;
- (BOOL)shouldFlushBackgroundMetrics;

@end

