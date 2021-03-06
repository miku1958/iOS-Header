//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class CLLocation, NSDate, NSMapTable, NSNumber, RTAuthorizationManager, RTInvocationDispatcher, RTLocationAwarenessManagerConfig, RTLocationAwarenessMetrics, RTLocationManager, RTMetricManager, RTMotionActivityManager, RTPowerAssertion, RTTimer, RTTimerManager, RTWiFiManager, RTXPCActivityManager;

@interface RTLocationAwarenessManager : RTService
{
    BOOL _activeRequestInterrupted;
    BOOL _activeRequestFulfilled;
    BOOL _activeRequestCoarseLocationReceived;
    BOOL _activeRequestLocationServiceOn;
    BOOL _activeRequestRoutineOn;
    BOOL _activeRequestWifiOn;
    RTLocationAwarenessMetrics *_metrics;
    RTMetricManager *_metricManager;
    RTAuthorizationManager *_authorizationManager;
    RTWiFiManager *_wifiManager;
    CLLocation *_lastLocationAnyPositive;
    CLLocation *_lastLocationLessThan200m;
    CLLocation *_lastLocationLessThan55m;
    CLLocation *_lastLocationLessThan20m;
    CLLocation *_lastLocationLessThan10m;
    NSDate *_scheduledHeartbeatFiringTime;
    NSDate *_scheduledRestTimerFiringTime;
    RTLocationAwarenessManagerConfig *_config;
    NSMapTable *_requesterToHeartbeatBucket;
    NSMapTable *_heartbeatBucketToRequesters;
    RTLocationManager *_locationManager;
    RTTimer *_heartbeatTimer;
    RTTimer *_restTimer;
    RTTimerManager *_timerManager;
    NSDate *_activeOnset;
    NSNumber *_minHeartbeatBucket;
    CLLocation *_lastValidLocation;
    RTMotionActivityManager *_motionActivityManager;
    RTPowerAssertion *_xpcActivityPowerAssertion;
    RTXPCActivityManager *_xpcActivityManager;
    NSDate *_stationaryStartTimestamp;
    RTInvocationDispatcher *_heartbeatBuffer;
}

@property (copy, nonatomic) NSDate *activeOnset; // @synthesize activeOnset=_activeOnset;
@property (nonatomic) BOOL activeRequestCoarseLocationReceived; // @synthesize activeRequestCoarseLocationReceived=_activeRequestCoarseLocationReceived;
@property (nonatomic) BOOL activeRequestFulfilled; // @synthesize activeRequestFulfilled=_activeRequestFulfilled;
@property (nonatomic) BOOL activeRequestInterrupted; // @synthesize activeRequestInterrupted=_activeRequestInterrupted;
@property (nonatomic) BOOL activeRequestLocationServiceOn; // @synthesize activeRequestLocationServiceOn=_activeRequestLocationServiceOn;
@property (nonatomic) BOOL activeRequestRoutineOn; // @synthesize activeRequestRoutineOn=_activeRequestRoutineOn;
@property (nonatomic) BOOL activeRequestWifiOn; // @synthesize activeRequestWifiOn=_activeRequestWifiOn;
@property (strong, nonatomic) RTAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property (readonly, nonatomic) RTLocationAwarenessManagerConfig *config; // @synthesize config=_config;
@property (strong, nonatomic) NSMapTable *heartbeatBucketToRequesters; // @synthesize heartbeatBucketToRequesters=_heartbeatBucketToRequesters;
@property (copy, nonatomic) RTInvocationDispatcher *heartbeatBuffer; // @synthesize heartbeatBuffer=_heartbeatBuffer;
@property (strong, nonatomic) RTTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property (strong, nonatomic) CLLocation *lastLocationAnyPositive; // @synthesize lastLocationAnyPositive=_lastLocationAnyPositive;
@property (strong, nonatomic) CLLocation *lastLocationLessThan10m; // @synthesize lastLocationLessThan10m=_lastLocationLessThan10m;
@property (strong, nonatomic) CLLocation *lastLocationLessThan200m; // @synthesize lastLocationLessThan200m=_lastLocationLessThan200m;
@property (strong, nonatomic) CLLocation *lastLocationLessThan20m; // @synthesize lastLocationLessThan20m=_lastLocationLessThan20m;
@property (strong, nonatomic) CLLocation *lastLocationLessThan55m; // @synthesize lastLocationLessThan55m=_lastLocationLessThan55m;
@property (strong, nonatomic) CLLocation *lastValidLocation; // @synthesize lastValidLocation=_lastValidLocation;
@property (strong, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (strong, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property (strong, nonatomic) RTLocationAwarenessMetrics *metrics; // @synthesize metrics=_metrics;
@property (strong, nonatomic) NSNumber *minHeartbeatBucket; // @synthesize minHeartbeatBucket=_minHeartbeatBucket;
@property (strong, nonatomic) RTMotionActivityManager *motionActivityManager; // @synthesize motionActivityManager=_motionActivityManager;
@property (strong, nonatomic) NSMapTable *requesterToHeartbeatBucket; // @synthesize requesterToHeartbeatBucket=_requesterToHeartbeatBucket;
@property (strong, nonatomic) RTTimer *restTimer; // @synthesize restTimer=_restTimer;
@property (strong, nonatomic) NSDate *scheduledHeartbeatFiringTime; // @synthesize scheduledHeartbeatFiringTime=_scheduledHeartbeatFiringTime;
@property (strong, nonatomic) NSDate *scheduledRestTimerFiringTime; // @synthesize scheduledRestTimerFiringTime=_scheduledRestTimerFiringTime;
@property (copy, nonatomic) NSDate *stationaryStartTimestamp; // @synthesize stationaryStartTimestamp=_stationaryStartTimestamp;
@property (strong, nonatomic) RTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property (strong, nonatomic) RTWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property (strong, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;
@property (strong, nonatomic) RTPowerAssertion *xpcActivityPowerAssertion; // @synthesize xpcActivityPowerAssertion=_xpcActivityPowerAssertion;

+ (long long)localHourFromTimestamp:(id)arg1;
+ (id)powerAssertion;
- (void).cxx_destruct;
- (void)_setup;
- (void)_shutdown;
- (void)_updateXPCActivityForObserverCount:(unsigned long long)arg1;
- (BOOL)activeRequestInterruptedCheck;
- (BOOL)addLocationHeartbeatRequester:(id)arg1 interval:(double)arg2 error:(id *)arg3;
- (void)adjustHeartbeatTimer;
- (BOOL)coarseLocation:(id)arg1;
- (void)considerRequestingForLocation;
- (void)considerSubmittingCurrentMetrics;
- (void)considerUpdateActiveRequestMetrics;
- (void)considerUpdatingHeartbeatDelayMetrics;
- (id)heartbeatBucketForInterval:(double)arg1;
- (void)heartbeatTasks;
- (void)hourlySingleShotWithHandler:(CDUnknownBlockType)arg1;
- (void)incrementBasicHistogram:(id)arg1 forTimestamp:(id)arg2;
- (id)init;
- (id)initWithLocationManager:(id)arg1 config:(id)arg2 metricManager:(id)arg3 motionActivityManager:(id)arg4 authorizationManager:(id)arg5 wifiManager:(id)arg6 xpcActivityManager:(id)arg7 timerManager:(id)arg8;
- (double)intervalForHeartbeatBucket:(id)arg1;
- (double)metricAge;
- (double)nextFiringDelayWithHeartbeatInterval:(double)arg1 starvingDuration:(double)arg2;
- (void)onHeartbeat;
- (void)onLeechedLocationNotification:(id)arg1;
- (void)onMotionActivityManagerNotificationActivityNotification:(id)arg1;
- (void)onNoOpLocationNotification:(id)arg1;
- (void)onRest;
- (void)removeLocationHeartbeatRequester:(id)arg1;
- (void)resetActiveRequestSummaryVariables;
- (double)starvingDurationTillNow;
- (void)updateHeartbeatTimerDelayForTimestamp:(id)arg1 withDelay:(double)arg2;
- (void)updateLocationAwarenessHistogramsWithLocations:(id)arg1;
- (void)updateMinHeartbeatBucket;
- (id)updateWithLocation:(id)arg1 oneIntervalHistogram:(id)arg2 lastLocation:(id)arg3;
- (BOOL)validInterval:(double)arg1;
- (BOOL)validLocation:(id)arg1;

@end

