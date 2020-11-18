//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/WCMClientDelegate-Protocol.h>
#import <AVConference/WRMClientDelegate-Protocol.h>

@class VCConnectionManager, VCRecommendedNetworkSettings, VCWCMClient, WRMClient;
@protocol VCNetworkFeedbackControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate>
{
    id<VCNetworkFeedbackControllerDelegate> _weakDelegate;
    VCWCMClient *_WCMClient;
    WRMClient *_WRMClient;
    VCConnectionManager *_connectionManager;
    VCRecommendedNetworkSettings *_recommendedSettings;
    unsigned int _clientTargetBitrate;
    unsigned int _clientTargetBitrateCap;
    double _wrmReportingInterval;
}

@property unsigned int clientTargetBitrate; // @synthesize clientTargetBitrate=_clientTargetBitrate;
@property unsigned int clientTargetBitrateCap; // @synthesize clientTargetBitrateCap=_clientTargetBitrateCap;
@property (readonly) unsigned int recommendedTargetBitrateCap;

- (void)cleanupWCMClient;
- (void)cleanupWRMClient;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2;
- (void)requestWRMNotification;
- (void)sendFeedbackControllerReport:(CDStruct_4b4d87a1)arg1;
- (void)sendStatusUpdate:(const CDStruct_8aeecdac *)arg1;
- (void)setPreWarmState:(BOOL)arg1;
- (void)setWRMCoexMetrics:(id)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)setWRMNotification:(CDStruct_b018697d *)arg1;
- (void)setupWCMClient;
- (void)setupWRMClient;
- (void)start;
- (void)stop;
- (id)strongDelegate;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;

@end
