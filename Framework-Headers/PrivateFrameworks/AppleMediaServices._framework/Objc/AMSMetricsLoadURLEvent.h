//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSString;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent
{
}

@property (strong, nonatomic) NSString *DNSServers;
@property (nonatomic) BOOL TFOEnabled;
@property (strong, nonatomic) NSString *TIDState;
@property (nonatomic) BOOL TLSSessionTickets;
@property (strong, nonatomic) NSString *appleTimingApp;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL apsRelayDidFallback;
@property (nonatomic) BOOL apsRelaySucceeded;
@property (nonatomic) BOOL cachedResponse;
@property (strong, nonatomic) NSString *clientCorrelationKey;
@property (strong, nonatomic) NSString *clientError;
@property (nonatomic) double connectionEndTime;
@property (strong, nonatomic) NSString *connectionInterface;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) unsigned long long connectionStartNStatRXBytes;
@property (nonatomic) unsigned long long connectionStartNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (nonatomic) unsigned long long connectionStopNStatRXBytes;
@property (nonatomic) unsigned long long connectionStopNStatTXBytes;
@property (strong, nonatomic) NSString *connectionType;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (strong, nonatomic) NSString *edgeNodeCacheStatus;
@property (strong, nonatomic) NSString *environmentDataCenter;
@property (nonatomic) double fetchStartTime;
@property (strong, nonatomic) NSArray *networkQualityReports;
@property (strong, nonatomic) NSString *originalApp;
@property (strong, nonatomic) NSString *radioTechnology;
@property (strong, nonatomic) NSString *radioType;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) unsigned long long requestMessageSize;
@property (nonatomic) double requestStartTime;
@property (strong, nonatomic) NSString *requestURL;
@property (strong, nonatomic) NSString *resolvedIPAddress;
@property (strong, nonatomic) NSString *responseDate;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long responseMessageSize;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (strong, nonatomic) NSString *wt;
@property (nonatomic) BOOL xpSamplingForced;
@property (nonatomic) double xpSamplingPercentageCachedResponses;
@property (nonatomic) double xpSamplingPercentageUsers;
@property (nonatomic) double xpSessionDuration;
@property (strong, nonatomic) NSString *xxdc;

+ (id)_DNSServerIPAddresses;
+ (id)_fetchNetworkQualityReports;
+ (id)_metricsDictionaryFromConfig:(id)arg1;
+ (double)_randomDouble;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (BOOL)shouldCollectMetricsForContext:(id)arg1;
- (void)_prepareEventWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
