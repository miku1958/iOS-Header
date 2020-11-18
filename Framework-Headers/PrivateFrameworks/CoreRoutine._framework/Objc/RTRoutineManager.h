//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, RTEventAgentHelper, RTRoutineManagerRegistrantApplicationPrediction, RTRoutineManagerRegistrantRoomPrediction;
@protocol OS_dispatch_queue;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>
{
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _visitHandler;
    CDUnknownBlockType _leechedVisitHandler;
    NSMutableDictionary *_scenarioTriggerHandlers;
    RTRoutineManagerRegistrantApplicationPrediction *_applicationPredictionRegistrant;
    RTRoutineManagerRegistrantRoomPrediction *_roomPredictionRegistrant;
    CDUnknownBlockType _nextPredictedLocationsOfInterestHandler;
    CDUnknownBlockType _vehicleEventsHandler;
    NSString *_restorationIdentifier;
    RTEventAgentHelper *_eventAgentHelper;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) RTRoutineManagerRegistrantApplicationPrediction *applicationPredictionRegistrant; // @synthesize applicationPredictionRegistrant=_applicationPredictionRegistrant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTEventAgentHelper *eventAgentHelper; // @synthesize eventAgentHelper=_eventAgentHelper;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType leechedVisitHandler; // @synthesize leechedVisitHandler=_leechedVisitHandler;
@property (copy, nonatomic) CDUnknownBlockType nextPredictedLocationsOfInterestHandler; // @synthesize nextPredictedLocationsOfInterestHandler=_nextPredictedLocationsOfInterestHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property (strong, nonatomic) RTRoutineManagerRegistrantRoomPrediction *roomPredictionRegistrant; // @synthesize roomPredictionRegistrant=_roomPredictionRegistrant;
@property (strong, nonatomic) NSMutableDictionary *scenarioTriggerHandlers; // @synthesize scenarioTriggerHandlers=_scenarioTriggerHandlers;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType vehicleEventsHandler; // @synthesize vehicleEventsHandler=_vehicleEventsHandler;
@property (copy, nonatomic) CDUnknownBlockType visitHandler; // @synthesize visitHandler=_visitHandler;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;
- (void).cxx_destruct;
- (void)_createConnection;
- (id)_proxyForServicingSelector:(SEL)arg1;
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)clearAllVehicleEvents;
- (void)clearAllVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)clearRoutine;
- (void)createConnection;
- (void)dealloc;
- (void)engageInVehicleEventWithIdentifier:(id)arg1;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchBBPluginSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLastVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtCachedLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPathToDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPredictedApplications:(CDUnknownBlockType)arg1;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedApplicationsWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedExitDatesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedRoomsAtCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)handleDaemonStart;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)onPredictedRooms:(id)arg1 error:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (void)setMapItem:(id)arg1 forLocationOfInterestWithIdentifier:(id)arg2;
- (void)setRoutineEnabled:(BOOL)arg1;
- (void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)startLeechingVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startMonitoringForPredictedApplicationsWithHandler:(CDUnknownBlockType)arg1;
- (void)startMonitoringForPredictedRoomsWithHandler:(CDUnknownBlockType)arg1;
- (void)startMonitoringNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startMonitoringVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)startMonitoringVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopLeechingVisits;
- (void)stopMonitoringForPredictedApplications;
- (void)stopMonitoringForPredictedRooms;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)stopMonitoringVisits;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
