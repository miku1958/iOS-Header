//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

#import <coreroutine/RTDiagnosticProvider-Protocol.h>
#import <coreroutine/RTLearnedLocationEngineProtocol-Protocol.h>
#import <coreroutine/RTPurgable-Protocol.h>

@class NSString, RTAccountManager, RTContactsManager, RTDefaultsManager, RTDiagnostics, RTDistanceCalculator, RTEventManager, RTFingerprintManager, RTLearnedLocationAlgorithmMetricCalculator, RTLearnedLocationEngine, RTLearnedLocationStore, RTLocationManager, RTLocationStore, RTMapServiceManager, RTMapsSupportManager, RTMetricManager, RTMotionActivityManager, RTPersonalizationPortraitManager, RTVisitManager, RTXPCActivityManager;

@interface RTLearnedLocationManager : RTService <RTLearnedLocationEngineProtocol, RTPurgable, RTDiagnosticProvider>
{
    BOOL _available;
    RTAccountManager *_accountManager;
    RTLearnedLocationAlgorithmMetricCalculator *_algorithmMetricCalculator;
    RTContactsManager *_contactsManager;
    RTDiagnostics *_diagnostics;
    RTDefaultsManager *_defaultsManager;
    RTLocationManager *_locationManager;
    RTLocationStore *_locationStore;
    RTEventManager *_eventManager;
    RTMapsSupportManager *_mapsSupportManager;
    RTMetricManager *_metricManager;
    RTMotionActivityManager *_motionActivityManager;
    RTPersonalizationPortraitManager *_portraitManager;
    RTVisitManager *_visitManager;
    RTXPCActivityManager *_xpcActivityManager;
    RTFingerprintManager *_fingerprintManager;
    RTLearnedLocationEngine *_learnedLocationEngine;
    RTLearnedLocationStore *_learnedLocationStore;
    RTDistanceCalculator *_distanceCalculator;
    RTMapServiceManager *_mapServiceManager;
}

@property (readonly, nonatomic) RTAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property (readonly, nonatomic) RTLearnedLocationAlgorithmMetricCalculator *algorithmMetricCalculator; // @synthesize algorithmMetricCalculator=_algorithmMetricCalculator;
@property (nonatomic) BOOL available; // @synthesize available=_available;
@property (readonly, nonatomic) RTContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RTDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property (readonly, nonatomic) RTEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property (strong, nonatomic) RTFingerprintManager *fingerprintManager; // @synthesize fingerprintManager=_fingerprintManager;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTLearnedLocationEngine *learnedLocationEngine; // @synthesize learnedLocationEngine=_learnedLocationEngine;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore; // @synthesize learnedLocationStore=_learnedLocationStore;
@property (readonly, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (readonly, nonatomic) RTLocationStore *locationStore; // @synthesize locationStore=_locationStore;
@property (readonly, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property (readonly, nonatomic) RTMapsSupportManager *mapsSupportManager; // @synthesize mapsSupportManager=_mapsSupportManager;
@property (readonly, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property (readonly, nonatomic) RTMotionActivityManager *motionActivityManager; // @synthesize motionActivityManager=_motionActivityManager;
@property (readonly, nonatomic) RTPersonalizationPortraitManager *portraitManager; // @synthesize portraitManager=_portraitManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) RTVisitManager *visitManager; // @synthesize visitManager=_visitManager;
@property (readonly, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;

+ (double)distanceThresholdFromUncertainty:(double)arg1 otherUncertainty:(double)arg2;
+ (double)maxDistanceFromInterval:(double)arg1 velocity:(double)arg2;
+ (id)migrateLegacyMapItemWithGeoMapItem:(id)arg1 geoMapItemHandle:(id)arg2 source:(unsigned long long)arg3 mapServiceManager:(id)arg4 error:(id *)arg5;
+ (id)modeToString:(long long)arg1;
- (void).cxx_destruct;
- (void)_addLocationOfInterest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_addLocationOfInterestWithType:(unsigned long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_addVisit:(id)arg1 locationOfInterest:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_clearWithHandler:(CDUnknownBlockType)arg1;
- (void)_extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchLocationOfInterestAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchModeAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchRecentLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_getLocationOfInterestAtLocation:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id *)arg3;
- (id)_getLocationsOfInterestVisitedBeforeDate:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id *)arg3;
- (id)_getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 fromLocationsOfInterest:(id)arg3 error:(id *)arg4;
- (void)_logLearnedState;
- (void)_migrateLegacyMapItems:(CDUnknownBlockType)arg1;
- (void)_migrateStateModelLegacy:(CDUnknownBlockType)arg1;
- (void)_onLearnedLocationStoreNotification:(id)arg1;
- (void)_performLegacyMigrations:(CDUnknownBlockType)arg1;
- (void)_removeAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_removeLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removeVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setup;
- (void)_shutdown;
- (void)_trainWithHandler:(CDUnknownBlockType)arg1;
- (id)_updateContactsWithLearnedPlace:(id)arg1 originalLearnedPlace:(id)arg2 error:(id *)arg3;
- (void)_updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 mapItemSource:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 mapItem:(id)arg3 mapItemSource:(unsigned long long)arg4 customLabel:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (double)_weeksInLearnedLocationsOfInterestModel;
- (void)addLocationOfInterest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addLocationOfInterestWithType:(unsigned long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addVisit:(id)arg1 locationOfInterest:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchModeAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchRecentLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithQueue:(id)arg1 accountManager:(id)arg2 algorithmMetricCalculator:(id)arg3 contactsManager:(id)arg4 defaultsManager:(id)arg5 diagnostics:(id)arg6 distanceCalculator:(id)arg7 eventManager:(id)arg8 fingerprintManager:(id)arg9 learnedLocationStore:(id)arg10 locationManager:(id)arg11 locationStore:(id)arg12 mapServiceManager:(id)arg13 mapsSupportManager:(id)arg14 metricManager:(id)arg15 motionActivityManager:(id)arg16 portraitManager:(id)arg17 visitManager:(id)arg18 xpcActivityManager:(id)arg19;
- (id)initWithQueue:(id)arg1 distanceCalculator:(id)arg2 learnedLocationEngine:(id)arg3 learnedLocationStore:(id)arg4 mapServiceManager:(id)arg5;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)learnedLocationEngineDidFinishTraining:(id)arg1;
- (void)learnedLocationEngineDidUpdate:(id)arg1 intervalSinceLastUpdate:(double)arg2;
- (void)learnedLocationEngineWillBeginTraining:(id)arg1;
- (void)logLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)onLearnedLocationStoreNotification:(id)arg1;
- (void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendDiagnosticsToURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)trainWithHandler:(CDUnknownBlockType)arg1;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 mapItemSource:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 mapItem:(id)arg3 mapItemSource:(unsigned long long)arg4 customLabel:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end

