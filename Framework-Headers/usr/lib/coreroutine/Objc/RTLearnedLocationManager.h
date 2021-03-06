//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

#import <coreroutine/RTLearnedLocationEngineProtocol-Protocol.h>
#import <coreroutine/RTPurgable-Protocol.h>
#import <coreroutine/RTStoreManager-Protocol.h>

@class NSString, RTContactsManager, RTDistanceCalculator, RTLearnedLocationEngine, RTLearnedLocationStore, RTMapServiceManager;

@interface RTLearnedLocationManager : RTService <RTLearnedLocationEngineProtocol, RTPurgable, RTStoreManager>
{
    BOOL _available;
    BOOL _migrationComplete;
    RTContactsManager *_contactsManager;
    RTDistanceCalculator *_distanceCalculator;
    RTLearnedLocationEngine *_learnedLocationEngine;
    RTLearnedLocationStore *_learnedLocationStore;
    RTMapServiceManager *_mapServiceManager;
}

@property (nonatomic) BOOL available; // @synthesize available=_available;
@property (readonly, nonatomic) RTContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTLearnedLocationEngine *learnedLocationEngine; // @synthesize learnedLocationEngine=_learnedLocationEngine;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore; // @synthesize learnedLocationStore=_learnedLocationStore;
@property (readonly, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property (readonly, nonatomic) BOOL migrationComplete; // @synthesize migrationComplete=_migrationComplete;
@property (readonly) Class superclass;

+ (double)distanceThresholdFromUncertainty:(double)arg1 otherUncertainty:(double)arg2;
+ (double)maxDistanceFromInterval:(double)arg1 velocity:(double)arg2;
+ (id)migrateLegacyMapItemWithGeoMapItem:(id)arg1 geoMapItemHandle:(id)arg2 source:(unsigned long long)arg3 mapServiceManager:(id)arg4 error:(id *)arg5;
+ (id)modeToString:(long long)arg1;
+ (id)vendedClasses;
- (void).cxx_destruct;
- (void)_addLocationOfInterest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_addLocationOfInterestWithType:(unsigned long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_addVisit:(id)arg1 locationOfInterest:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_classifyPlaceTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)_extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFusionCandidatesForVisitIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationOfInterestAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchModeAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchRecentLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchVisitIdentifiersIn:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_forceRelabeling:(CDUnknownBlockType)arg1;
- (id)_getLocationOfInterestAtLocation:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id *)arg3;
- (id)_getLocationsOfInterestVisitedBeforeDate:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id *)arg3;
- (id)_getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 fromLocationsOfInterest:(id)arg3 error:(id *)arg4;
- (void)_logLearnedState;
- (void)_migrateLegacyMapItems:(CDUnknownBlockType)arg1;
- (void)_migrateStateModelLegacy:(CDUnknownBlockType)arg1;
- (void)_onLearnedLocationStoreNotification:(id)arg1;
- (void)_performLegacyMigrations:(CDUnknownBlockType)arg1;
- (void)_queryProvider:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_reconcileLearnedLocationsWithHandler:(CDUnknownBlockType)arg1;
- (void)_reconstructTransitionsWithHandler:(CDUnknownBlockType)arg1;
- (void)_removeAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_removeLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removeVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setup;
- (void)_shutdown;
- (void)_trainLocationsOfInterestModelWithHandler:(CDUnknownBlockType)arg1;
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
- (void)classifyPlaceTypesWithHandler:(CDUnknownBlockType)arg1;
- (id)createAndStoreNewPlaceWithMapItem:(id)arg1 customLabel:(id)arg2 mapItemSource:(unsigned long long)arg3 outError:(id *)arg4;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchFusionCandidatesForVisitIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchModeAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchRecentLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchVisitIdentifiersIn:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)forceRelabeling:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 contactsManager:(id)arg2 distanceCalculator:(id)arg3 learnedLocationStore:(id)arg4 mapServiceManager:(id)arg5;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)learnedLocationEngineDidFinishTraining:(id)arg1;
- (void)learnedLocationEngineDidUpdate:(id)arg1 intervalSinceLastUpdate:(double)arg2;
- (void)learnedLocationEngineWillBeginTraining:(id)arg1;
- (void)logDatabasesWithHandler:(CDUnknownBlockType)arg1;
- (void)onLearnedLocationStoreNotification:(id)arg1;
- (void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryProvider:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)reconcileLearnedLocationsWithHandler:(CDUnknownBlockType)arg1;
- (void)reconstructTransitionsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)trainLocationsOfInterestModelWithHandler:(CDUnknownBlockType)arg1;
- (void)trainWithHandler:(CDUnknownBlockType)arg1;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 mapItemSource:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 mapItem:(id)arg3 mapItemSource:(unsigned long long)arg4 customLabel:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)validateUpdatedMapItem:(id)arg1 locationOfInterest:(id)arg2 error:(id *)arg3;

@end

