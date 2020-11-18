//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKCharacteristicType, HKDevice, HKHealthService, HKObjectType, HKQuantity, HKQuantityType, HKSource, HKUnit, HKWorkout, NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSPredicate, NSSet, NSString, NSUUID, _HKActiveWorkoutServerConfiguration, _HKFilter, _HKMedicalIDData, _HKQueryServerDataObject, _HKWorkoutSession;

@protocol HDServerInterface <NSObject>
- (void)_remote_fetchAllDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)_remote_fetchDataTypesForDevice:(HKDevice *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)_remote_fetchDataTypesForSource:(HKSource *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)_remote_fetchDevicesMatchingProperty:(NSString *)arg1 values:(NSSet *)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)addPairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)addPeripheral:(NSUUID *)arg1 name:(NSString *)arg2 forServices:(NSArray *)arg3 withCompletion:(void (^)(BOOL, NSError *))arg4;
- (void)addSamples:(NSArray *)arg1 toWorkout:(HKWorkout *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)addSourceWithBundleIdentifier:(NSString *)arg1 name:(NSString *)arg2 completion:(void (^)(HKSource *, NSError *))arg3;
- (void)allAuthorizationRecordsForBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)allAuthorizationRecordsForType:(HKObjectType *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)allSourcesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)associateSamplesWithUUIDs:(NSData *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)attachWorkoutServerWithClient:(id)arg1 workoutConfiguration:(_HKActiveWorkoutServerConfiguration *)arg2 handler:(void (^)(id, BOOL, NSError *))arg3;
- (void)authorizationStatusForType:(HKObjectType *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 handler:(void (^)(HKSource *, NSError *))arg2;
- (void)beginBluetoothStatusUpdates:(void (^)(long long, NSError *))arg1;
- (void)closeTransactionWithDataType:(HKObjectType *)arg1 anchor:(NSNumber *)arg2 ackTime:(NSNumber *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)createBluetoothSourceWithBundleIdentifier:(NSString *)arg1 name:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)currentlyPairedWatchIdentifiersWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)deleteAllSamplesWithTypes:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)deleteDataObjects:(NSArray *)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (void)deleteDataObjectsOfType:(HKObjectType *)arg1 matchingFilter:(_HKFilter *)arg2 handler:(void (^)(BOOL, unsigned long long, NSError *))arg3;
- (void)deleteMedicalIDDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)deleteObjectsWithUUIDs:(NSArray *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)deleteSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)dropEntitlement:(NSString *)arg1;
- (void)endAuthorizationDelegateTransactionWithError:(NSError *)arg1;
- (void)endBluetoothStatusUpdates;
- (void)endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)endHealthServiceSession:(unsigned long long)arg1;
- (void)fetchCharacteristicWithDataType:(HKObjectType *)arg1 handler:(void (^)(id, NSError *))arg2;
- (void)fetchDiagnosticsWithKeys:(NSArray *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)fetchUnitPreferencesForTypes:(NSSet *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(void (^)(id, NSError *))arg3;
- (void)getDatabaseSizeInBytesWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)getDefaultForKey:(NSString *)arg1 withHandler:(void (^)(id, NSError *))arg2;
- (void)getEnabledStatusForPeripheral:(NSUUID *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)getFirstPartyWorkoutSnapshotWithCompletion:(void (^)(_HKFirstPartyWorkoutSnapshot *, NSError *))arg1;
- (void)getHealthServicePairingsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getHealthServiceProperty:(NSString *)arg1 forSession:(unsigned long long)arg2 withHandler:(void (^)(id, NSError *))arg3;
- (void)getSupportedPropertyNamesWithHandler:(void (^)(id, NSError *))arg1;
- (void)handleAuthorizationForExtensionWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)hasAnyActiveWorkouts:(void (^)(BOOL, NSError *))arg1;
- (void)hasSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)invalidateActivityAlertSuppressionForIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(void (^)(_HKMedicalIDData *, NSError *))arg2;
- (void)orderedSourcesForObjectType:(HKObjectType *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)pauseAllActiveWorkoutsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)performHealthServiceOperation:(NSString *)arg1 onSession:(unsigned long long)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(NSString *, BOOL, NSError *))arg4;
- (void)performMigrationWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)registerKeepAliveWithIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_getHealthLiteValueForKey:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_replaceWorkout:(HKWorkout *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_setHealthLiteValue:(NSNumber *)arg1 forKey:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(NSUUID *)arg1 timeout:(double)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)removeDefaultForKey:(NSString *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)removePairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)removePeripheral:(NSUUID *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)requestAuthorizationToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 shouldPrompt:(BOOL)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)resetAuthorizationStatusForBundleIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)resetNanoSyncWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)restoreEntitlement:(NSString *)arg1;
- (void)saveDataObjects:(NSArray *)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (void)saveDataObjects:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 sourceVersion:(NSString *)arg3 handler:(void (^)(BOOL, NSError *))arg4;
- (void)saveDataObjects:(NSArray *)arg1 transactionIdentifier:(NSUUID *)arg2 final:(BOOL)arg3 handler:(void (^)(NSUUID *, BOOL, NSError *))arg4;
- (void)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSPredicate *)arg3 groupBy:(NSArray *)arg4 orderBy:(NSArray *)arg5 limit:(long long)arg6 completion:(void (^)(NSArray *, NSArray *, BOOL, NSError *))arg7;
- (void)setAuthorizationStatuses:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(HKObjectType *)arg2 handler:(void (^)(BOOL, NSError *))arg3;
- (void)setCharacteristic:(id)arg1 forDataType:(HKCharacteristicType *)arg2 handler:(void (^)(BOOL, NSError *))arg3;
- (void)setDebuggingIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)setDefaultValue:(id)arg1 forKey:(NSString *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)setEnabledStatus:(BOOL)arg1 forPeripheral:(NSUUID *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)setOrderedSources:(NSArray *)arg1 forObjectType:(HKObjectType *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setPreferredUnit:(HKUnit *)arg1 forType:(HKQuantityType *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setRequestedAuthorizationForBundleIdentifier:(NSString *)arg1 shareTypes:(NSSet *)arg2 readTypes:(NSSet *)arg3 prompt:(BOOL)arg4 completion:(void (^)(BOOL, NSError *))arg5;
- (void)splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(void (^)(double, NSError *))arg3;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(HKQuantity *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)startHealthServiceDiscovery:(long long)arg1 withCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (void)startHealthServiceSession:(HKHealthService *)arg1 withCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (void)startQueryWithUUID:(NSUUID *)arg1 serverDataObject:(_HKQueryServerDataObject *)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(void (^)(id, BOOL, NSError *))arg5;
- (void)startWorkoutSession:(_HKWorkoutSession *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)stopFakingDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)stopWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)submitMetricsIgnoringAnchor:(BOOL)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)suppressActivityAlertsForIdentifier:(NSString *)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(NSDate *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)unregisterKeepAliveWithIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)updateMedicalIDData:(_HKMedicalIDData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)weeklySummaryInfoForDate:(NSDate *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
@end

