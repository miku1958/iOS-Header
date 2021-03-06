//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

#import <coreroutine/RTPurgable-Protocol.h>
#import <coreroutine/RTStoreManager-Protocol.h>
#import <coreroutine/RTVisitMonitorDelegate-Protocol.h>

@class NSMutableArray, NSString, RTDefaultsManager, RTDeviceLocationPredictor, RTHintManager, RTLocationAwarenessManager, RTLocationManager, RTMetricManager, RTPlatform, RTVisitLabeler, RTVisitMonitor, RTVisitStore;

@interface RTVisitManager : RTService <RTVisitMonitorDelegate, RTPurgable, RTStoreManager>
{
    BOOL _spoofMode;
    RTDefaultsManager *_defaultsManager;
    RTDeviceLocationPredictor *_deviceLocationPredictor;
    RTHintManager *_hintManager;
    RTLocationAwarenessManager *_locationAwarenessManager;
    RTLocationManager *_locationManager;
    RTMetricManager *_metricManager;
    RTPlatform *_platform;
    RTVisitStore *_visitStore;
    NSMutableArray *_spoofVisitIncidentTokens;
    RTVisitMonitor *_visitMonitor;
    RTVisitLabeler *_visitLabeler;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor; // @synthesize deviceLocationPredictor=_deviceLocationPredictor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTHintManager *hintManager; // @synthesize hintManager=_hintManager;
@property (strong, nonatomic) RTLocationAwarenessManager *locationAwarenessManager; // @synthesize locationAwarenessManager=_locationAwarenessManager;
@property (strong, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (strong, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property (strong, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property (nonatomic) BOOL spoofMode; // @synthesize spoofMode=_spoofMode;
@property (strong, nonatomic) NSMutableArray *spoofVisitIncidentTokens; // @synthesize spoofVisitIncidentTokens=_spoofVisitIncidentTokens;
@property (readonly) Class superclass;
@property (readonly, nonatomic) RTVisitLabeler *visitLabeler; // @synthesize visitLabeler=_visitLabeler;
@property (strong, nonatomic) RTVisitMonitor *visitMonitor; // @synthesize visitMonitor=_visitMonitor;
@property (strong, nonatomic) RTVisitStore *visitStore; // @synthesize visitStore=_visitStore;

+ (id)vendedClasses;
- (void).cxx_destruct;
- (void)_fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_injectRealtimeVisit:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2;
- (void)_onVisitIncident:(id)arg1 error:(id)arg2;
- (void)_onVisitStoreNotification:(id)arg1;
- (void)_performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setup;
- (void)_setupVisitMonitorWithHandler:(CDUnknownBlockType)arg1;
- (void)_shutdown;
- (void)_simulateVisit:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_updateStateForLeechedVisitIncidents;
- (void)_updateStateForLowConfidenceVisitIncidents;
- (void)_updateStateForVisitIncidents;
- (void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchStoredVisitsWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 deviceLocationPredictor:(id)arg2 hintManager:(id)arg3 locationAwarenessManager:(id)arg4 locationManager:(id)arg5 metricManager:(id)arg6 platform:(id)arg7 visitLabeler:(id)arg8 visitStore:(id)arg9;
- (void)injectRealtimeVisit:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2;
- (void)onVisitIncident:(id)arg1 error:(id)arg2;
- (void)onVisitStoreNotification:(id)arg1;
- (void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)registerForSpoofVisitIncidentOfCategory:(id)arg1;
- (void)simulateVisit:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterForSpoofVisitIncidentWithToken:(int)arg1;

@end

