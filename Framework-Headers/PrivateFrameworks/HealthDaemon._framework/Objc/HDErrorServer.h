//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDServer-Protocol.h>

@class HDClient, NSError, NSString;

@interface HDErrorServer : NSObject <HDServer>
{
    HDClient *_client;
    NSError *_error;
}

@property (strong, nonatomic) HDClient *client; // @synthesize client=_client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remote_fetchAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_remote_fetchDataTypesForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_fetchDataTypesForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addPairingForHealthService:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allAuthorizationRecordsForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)associateSamplesWithUUIDs:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)attachWorkoutServerWithClient:(id)arg1 workoutConfiguration:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)authorizationStatusForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)beginBluetoothStatusUpdates:(CDUnknownBlockType)arg1;
- (void)closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createBluetoothSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)currentlyPairedWatchIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteDataObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteDataObjectsOfType:(id)arg1 matchingPredicate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
- (void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
- (void)dropEntitlement:(id)arg1;
- (void)endAuthorizationDelegateTransactionWithError:(id)arg1;
- (void)endBluetoothStatusUpdates;
- (void)endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)endHealthServiceSession:(unsigned long long)arg1;
- (void)fetchCharacteristicWithDataType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchDiagnosticsWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)forceNanoSyncWithPullRequest:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getDatabaseSizeInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDefaultForKey:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getHealthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (void)getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)hasActiveWorkouts;
- (void)hasAnyActiveWorkouts:(CDUnknownBlockType)arg1;
- (void)hasSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 error:(id)arg2;
- (void)invalidate;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)nukeActiveWorkoutServers;
- (void)orderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDefaultForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removePairingForHealthService:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removePeripheral:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreEntitlement:(id)arg1;
- (void)saveDataObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)saveDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)start;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startHealthServiceDiscovery:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startHealthServiceSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)startRecordingDataToFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startReplayingDataFromFile:(id)arg1 repeat:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startWorkoutSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopFakingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopRecordingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopReplayingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitMetricsIgnoringAnchor:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

