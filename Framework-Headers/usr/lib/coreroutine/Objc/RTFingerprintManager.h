//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

#import <coreroutine/RTPurgable-Protocol.h>

@class NSDate, NSString, RTDefaultsManager, RTFingerprintStore, RTScenarioTriggerManager, RTWiFiManager;

@interface RTFingerprintManager : RTService <RTPurgable>
{
    BOOL _available;
    BOOL _fingerprintMonitoringEnabled;
    RTDefaultsManager *_defaultsManager;
    RTFingerprintStore *_fingerprintStore;
    RTScenarioTriggerManager *_scenarioTriggerManager;
    RTWiFiManager *_wifiManager;
    unsigned long long _accessPointsFetchLimit;
    unsigned long long _accessPointsCollectedPerFingerprint;
    NSDate *_startCollectAccessPoints;
    unsigned long long _settledState;
}

@property (nonatomic) unsigned long long accessPointsCollectedPerFingerprint; // @synthesize accessPointsCollectedPerFingerprint=_accessPointsCollectedPerFingerprint;
@property (nonatomic) unsigned long long accessPointsFetchLimit; // @synthesize accessPointsFetchLimit=_accessPointsFetchLimit;
@property (nonatomic) BOOL available; // @synthesize available=_available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFingerprintMonitoringEnabled) BOOL fingerprintMonitoringEnabled; // @synthesize fingerprintMonitoringEnabled=_fingerprintMonitoringEnabled;
@property (readonly, nonatomic) RTFingerprintStore *fingerprintStore; // @synthesize fingerprintStore=_fingerprintStore;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager; // @synthesize scenarioTriggerManager=_scenarioTriggerManager;
@property (nonatomic) unsigned long long settledState; // @synthesize settledState=_settledState;
@property (strong, nonatomic) NSDate *startCollectAccessPoints; // @synthesize startCollectAccessPoints=_startCollectAccessPoints;
@property (readonly) Class superclass;
@property (readonly, nonatomic) RTWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;

- (void).cxx_destruct;
- (void)_setup;
- (void)_shutdown;
- (void)fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchFingerprintsInDateInterval:(id)arg1 filteredBySettledState:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchWifiAccessPointsForFingerprint:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithDefaultsManager:(id)arg1 fingerprintStore:(id)arg2 scenarioTriggerManager:(id)arg3 wifiManager:(id)arg4;
- (void)injectFingerprints:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)injectWifiAccessPointsToLastFingerprint:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)onSettledNotification:(id)arg1;
- (void)onStoreAvailabilityDidChangeNotification:(id)arg1;
- (void)onUnsettledNotification:(id)arg1;
- (void)onWiFiScanNotification:(id)arg1;
- (void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
