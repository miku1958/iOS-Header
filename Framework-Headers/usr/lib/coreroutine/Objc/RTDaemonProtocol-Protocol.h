//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class CLLocation, GEOMapItemStorage, NSArray, NSData, NSDate, NSDateInterval, NSDictionary, NSNumber, NSPredicate, NSSet, NSString, NSUUID, RTAction, RTPredictedLocationOfInterest;

@protocol RTDaemonProtocol <NSObject>
- (void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(GEOMapItemStorage *)arg2 customLabel:(NSString *)arg3 reply:(void (^)(RTLocationOfInterest *, NSError *))arg4;
- (void)clearAllVehicleEventsWithReply:(void (^)(void))arg1;
- (void)clearRoutineWithReply:(void (^)(NSError *))arg1;
- (void)engageInVehicleEventWithIdentifier:(NSUUID *)arg1;
- (void)extendLifetimeOfVisitsWithIdentifiers:(NSSet *)arg1 reply:(void (^)(NSError *))arg2;
- (void)fetchAllLocationsOfInterestForSettingsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchAllLocationsOfInterestWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchAllRoutesForSettingsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)fetchCloudSyncAuthorizationState:(void (^)(long long, NSError *))arg1;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchLastVehicleEventsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchLocationOfInterestAtLocation:(CLLocation *)arg1 withReply:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (void)fetchLocationOfInterestWithIdentifier:(NSUUID *)arg1 withReply:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(CLLocation *)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(CLLocation *)arg1 startDate:(NSDate *)arg2 timeInterval:(double)arg3 withReply:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchPathToDiagnosticFilesWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)fetchPredictedApplications:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchPredictedApplicationsAtLocation:(CLLocation *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPredictedApplicationsWithPredicate:(NSPredicate *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPredictedConditionsForAction:(RTAction *)arg1 dateInterval:(NSDateInterval *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchPredictedExitDatesFromLocation:(CLLocation *)arg1 onDate:(NSDate *)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(NSString *)arg1 location:(NSString *)arg2 calendarIdentifier:(NSString *)arg3 withReply:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchPredictedLocationsOfInterestOnDate:(NSDate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchRoutineEnabledWithReply:(void (^)(BOOL))arg1;
- (void)fetchRoutineModeFromLocation:(CLLocation *)arg1 withReply:(void (^)(long long, NSError *))arg2;
- (void)fetchTransitionsBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(void (^)(NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)provideFeedbackForAction:(RTAction *)arg1 engagementResult:(long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)removeLocationOfInterestWithIdentifier:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)removeVisitWithIdentifier:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setRestorationIdentifier:(NSString *)arg1;
- (void)setRoutineEnabled:(BOOL)arg1 withReply:(void (^)(NSError *))arg2;
- (void)simulateApplicationPredictionWithBundleIdentifier:(NSString *)arg1 reason:(NSNumber *)arg2 reply:(void (^)(NSError *))arg3;
- (void)sortRoutes:(NSArray *)arg1 toLocationOfInterestWithIdentifier:(NSUUID *)arg2 fromLocation:(CLLocation *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)startLeechingLowConfidenceVisits;
- (void)startLeechingVisits;
- (void)startMonitoringForPredictedApplicationsUsingPredicate:(NSPredicate *)arg1;
- (void)startMonitoringNextPredictedLocationsOfInterest;
- (void)startMonitoringPredictedConditionsForAction:(RTAction *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)startMonitoringVehicleEvents;
- (void)startMonitoringVisits;
- (void)stopLeechingLowConfidenceVisits;
- (void)stopLeechingVisits;
- (void)stopMonitoringForPredictedApplications;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)stopMonitoringPredictedConditionsForAction:(RTAction *)arg1 reply:(void (^)(NSError *))arg2;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)stopMonitoringVisits;
- (void)submitMetricWithIdentifier:(NSString *)arg1 dictionary:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 customLabel:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 mapItemStorage:(GEOMapItemStorage *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 type:(long long)arg2 customLabel:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 type:(long long)arg2 mapItemStorage:(GEOMapItemStorage *)arg3 customLabel:(NSString *)arg4 reply:(void (^)(RTLocationOfInterest *, NSError *))arg5;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 type:(long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 geoMapItem:(GEOMapItemStorage *)arg2;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 location:(CLLocation *)arg2;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 notes:(NSString *)arg2;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 photo:(NSData *)arg2;
- (void)userInteractionWithPredictedLocationOfInterest:(RTPredictedLocationOfInterest *)arg1 interaction:(unsigned long long)arg2 feedback:(NSString *)arg3 geoMapItem:(GEOMapItemStorage *)arg4 reply:(void (^)(NSError *))arg5;
- (void)vehicleEventAtLocation:(CLLocation *)arg1 notes:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
@end

