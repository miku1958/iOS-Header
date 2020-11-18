//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

#import <coreroutine/RTNextPredictedLocationsOfInterestCacheDelegate-Protocol.h>
#import <coreroutine/RTStateModelDelegate-Protocol.h>
#import <coreroutine/RTSyncServiceClientProtocol-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSObject, NSString, NSUUID, RTNextPredictedLocationsOfInterestCache, RTStateModel, RTSyncService, RTTaskScheduler;
@protocol OS_dispatch_source;

@interface RTDeviceLocationPredictor : RTNotifier <RTStateModelDelegate, RTNextPredictedLocationsOfInterestCacheDelegate, RTSyncServiceClientProtocol>
{
    BOOL _encryptedDataAvailabilityNotificationNeeded;
    BOOL _monitorNextPredictedLocationsOfInterest;
    BOOL _pendingNextPredictedLocationsOfInterestRequest;
    RTStateModel *_stateModel;
    NSMutableArray *_pendingStateModelInvocations;
    long long _encryptedDataAvailability;
    RTNextPredictedLocationsOfInterestCache *_nextPredictedLocationsOfInterestCache;
    NSDate *_lastNextPredictedLocationsOfInterestDate;
    NSObject<OS_dispatch_source> *_nextPredictedLocationsOfInterestPollLocationTimer;
    NSArray *_nextPredictedLocationsOfInterest;
    double _nextPredictedLocationsOfInterestProcessInterval;
    double _nextPredictedLocationsOfInterestPollLocationInterval;
    RTSyncService *_syncService;
    NSMutableArray *_evalPredictedLocationsOfInterest;
    RTTaskScheduler *_taskScheduler;
    NSUUID *_routineModelSyncTaskIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long encryptedDataAvailability; // @synthesize encryptedDataAvailability=_encryptedDataAvailability;
@property (nonatomic) BOOL encryptedDataAvailabilityNotificationNeeded; // @synthesize encryptedDataAvailabilityNotificationNeeded=_encryptedDataAvailabilityNotificationNeeded;
@property (strong, nonatomic) NSMutableArray *evalPredictedLocationsOfInterest; // @synthesize evalPredictedLocationsOfInterest=_evalPredictedLocationsOfInterest;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastNextPredictedLocationsOfInterestDate; // @synthesize lastNextPredictedLocationsOfInterestDate=_lastNextPredictedLocationsOfInterestDate;
@property (nonatomic) BOOL monitorNextPredictedLocationsOfInterest; // @synthesize monitorNextPredictedLocationsOfInterest=_monitorNextPredictedLocationsOfInterest;
@property (strong, nonatomic) NSArray *nextPredictedLocationsOfInterest; // @synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest;
@property (strong, nonatomic) RTNextPredictedLocationsOfInterestCache *nextPredictedLocationsOfInterestCache; // @synthesize nextPredictedLocationsOfInterestCache=_nextPredictedLocationsOfInterestCache;
@property (nonatomic) double nextPredictedLocationsOfInterestPollLocationInterval; // @synthesize nextPredictedLocationsOfInterestPollLocationInterval=_nextPredictedLocationsOfInterestPollLocationInterval;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *nextPredictedLocationsOfInterestPollLocationTimer; // @synthesize nextPredictedLocationsOfInterestPollLocationTimer=_nextPredictedLocationsOfInterestPollLocationTimer;
@property (nonatomic) double nextPredictedLocationsOfInterestProcessInterval; // @synthesize nextPredictedLocationsOfInterestProcessInterval=_nextPredictedLocationsOfInterestProcessInterval;
@property (nonatomic) BOOL pendingNextPredictedLocationsOfInterestRequest; // @synthesize pendingNextPredictedLocationsOfInterestRequest=_pendingNextPredictedLocationsOfInterestRequest;
@property (strong, nonatomic) NSMutableArray *pendingStateModelInvocations; // @synthesize pendingStateModelInvocations=_pendingStateModelInvocations;
@property (strong, nonatomic) NSUUID *routineModelSyncTaskIdentifier; // @synthesize routineModelSyncTaskIdentifier=_routineModelSyncTaskIdentifier;
@property (strong, nonatomic) RTStateModel *stateModel; // @synthesize stateModel=_stateModel;
@property (readonly) Class superclass;
@property (strong, nonatomic) RTSyncService *syncService; // @synthesize syncService=_syncService;
@property (strong, nonatomic) RTTaskScheduler *taskScheduler; // @synthesize taskScheduler=_taskScheduler;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_clear;
- (void)_fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)_fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_onContactStoreMeContactDidChange;
- (void)_onLocations:(id)arg1;
- (void)_postNextPredictedLocationsOfInterest:(id)arg1;
- (void)_purge;
- (void)_scheduleSyncTaskWithHandler:(CDUnknownBlockType)arg1;
- (void)_sequentialClusterIdentification;
- (void)_sequentialClusterIdentificationWithHandler:(CDUnknownBlockType)arg1;
- (void)_setup;
- (void)_updateEvalPredictedLocationsOfInterest;
- (void)_updateNextPredictedLocationsOfInterestWithLocations:(id)arg1;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)clear;
- (void)dealloc;
- (void)fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtCachedLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchLocationsOfInterestWithinStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)forceContactStoreMeContactDidChange;
- (void)forceSequentialClusterIdentification:(CDUnknownBlockType)arg1;
- (id)init;
- (void)initStateModel:(id)arg1;
- (void)injectLocationOfInterest:(id)arg1;
- (void)injectVisit:(id)arg1 locationOfInterest:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)logStateModelAvailabilityMetricWithAvailability:(long long)arg1;
- (void)onCacheEnabledDidChange:(BOOL)arg1;
- (void)onContactsManagerNotification:(id)arg1;
- (void)onDataProtectionNotification:(id)arg1;
- (void)onLocationNotification:(id)arg1;
- (void)onLocationsOfInterestUpdated;
- (void)onPairedDeviceUpdate:(id)arg1;
- (void)onPurgeNotification:(id)arg1;
- (void)purge;
- (void)removeLocationOfInterest:(id)arg1;
- (void)removeVisit:(id)arg1 locationOfInterest:(id)arg2;
- (void)scheduleSyncTaskWithHandler:(CDUnknownBlockType)arg1;
- (void)sendModelToEligibleDevices:(CDUnknownBlockType)arg1;
- (void)sequentialClusterIdentification;
- (void)setup;
- (void)shouldMonitorNextPredictedLocationsOfInterest;
- (void)syncRoutineStateModelFromCompanionToGizmo:(CDUnknownBlockType)arg1;
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2;
- (void)updateEncryptedDataAvailabilityNotificationNeeded;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end

