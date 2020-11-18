//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WRMClientDelegate;

__attribute__((visibility("hidden")))
@interface WRMClient : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id _wrmClientDelegate;
    int _mediaControlInfoVersion;
    int _mode;
    struct {
        BOOL reportImmediateMetricsEnabled;
        BOOL reportRtpErasureMetricsEnabled;
        BOOL allowPreWarmCellEnabled;
    } _metricsConfig;
}

@property id<WRMClientDelegate> delegate;
@property int mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;

- (void)dealloc;
- (void)dumpReport:(id)arg1;
- (int)getWRMSubscribeVersion;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)processNotificationList:(id)arg1;
- (void)processWRMCoexMetrics:(id)arg1 isAlertedMode:(BOOL)arg2;
- (void)releaseServiceConnection;
- (void)reportImmediateMetric:(int)arg1 value:(unsigned long long)arg2;
- (void)reportMetricsFaceTimeCalling:(const CDStruct_dea828ac *)arg1;
- (void)reportMetricsWifiCalling:(const CDStruct_dea828ac *)arg1;
- (void)requestNotificationFaceTimeCalling;
- (void)sendProcessInfoWithProcessID:(unsigned long long)arg1;
- (void)sendReport:(id)arg1;
- (void)sendStatusUpdateFaceTimeCalling:(const CDStruct_8aeecdac *)arg1;
- (void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1;
- (void)sendSubscriptionInfoFaceTimeCalling;
- (void)sendUnsubscriptionInfoFaceTimeCalling;
- (void)setConfiguration:(CDStruct_69d7cc99 *)arg1;
- (void)setPreWarmState:(BOOL)arg1;
- (BOOL)setupServiceConnection;
- (void)startWRMClientWithMode:(int)arg1 metricsConfig:(CDStruct_2a4d9400)arg2;
- (void)stopWRMClient;

@end
