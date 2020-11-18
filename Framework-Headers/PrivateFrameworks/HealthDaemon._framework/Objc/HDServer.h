//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDeepBreathingSessionServerDelegate-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDProcessStateObserver-Protocol.h>
#import <HealthDaemon/HDQueryServerDelegate-Protocol.h>
#import <HealthDaemon/HDServer-Protocol.h>
#import <HealthDaemon/HDServerPrivate-Protocol.h>
#import <HealthDaemon/HDUnitPreferencesManagerObserver-Protocol.h>

@class HDAuthorizationServer, HDClient, HDDaemon, HDDataCollectionManager, HDDatabase, HDFitnessFriendsServer, HDHealthServicesServer, HDMedicalIDServer, HDNanoSyncServer, HDProfile, HDUtilityServer, HDWorkoutServer, HKServerConfiguration, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDServer : NSObject <HDQueryServerDelegate, HDDiagnosticObject, HDProcessStateObserver, HDUnitPreferencesManagerObserver, HDDeepBreathingSessionServerDelegate, HDServerPrivate, HDServer>
{
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_deepBreathingSessionServersByUUID;
    NSMutableSet *_activeSeriesSamples;
    NSMutableSet *_processStateObservingQueryServerUUIDs;
    BOOL _processStateSuspended;
    NSObject<OS_dispatch_source> *_clientTransactionTimer;
    NSString *_clientSourceVersion;
    HDDaemon *_daemon;
    HDProfile *_profile;
    HKServerConfiguration *_configuration;
    HDClient *_client;
    HDDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectionManager *_dataCollectMgr;
    HDAuthorizationServer *_authorizationServer;
    NSString *_serverID;
    NSString *_clientDebuggingIdentifier;
    NSMutableSet *_subservers;
    HDFitnessFriendsServer *_fitnessFriendsServer;
    HDHealthServicesServer *_healthServicesServer;
    HDMedicalIDServer *_medicalIDServer;
    HDNanoSyncServer *_nanoSyncServer;
    HDUtilityServer *_utilityServer;
    HDWorkoutServer *_workoutServer;
}

@property (strong, nonatomic) HDAuthorizationServer *authorizationServer; // @synthesize authorizationServer=_authorizationServer;
@property (strong, nonatomic) HDClient *client; // @synthesize client=_client;
@property (strong, nonatomic) NSString *clientDebuggingIdentifier; // @synthesize clientDebuggingIdentifier=_clientDebuggingIdentifier;
@property (readonly, nonatomic) HKServerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, weak, nonatomic) HDDaemon *daemon; // @synthesize daemon=_daemon;
@property (strong, nonatomic) HDDataCollectionManager *dataCollectMgr; // @synthesize dataCollectMgr=_dataCollectMgr;
@property (readonly, nonatomic) HDDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HDFitnessFriendsServer *fitnessFriendsServer; // @synthesize fitnessFriendsServer=_fitnessFriendsServer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HDHealthServicesServer *healthServicesServer; // @synthesize healthServicesServer=_healthServicesServer;
@property (strong, nonatomic) HDMedicalIDServer *medicalIDServer; // @synthesize medicalIDServer=_medicalIDServer;
@property (strong, nonatomic) HDNanoSyncServer *nanoSyncServer; // @synthesize nanoSyncServer=_nanoSyncServer;
@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property (strong, nonatomic) NSMutableSet *subservers; // @synthesize subservers=_subservers;
@property (readonly) Class superclass;
@property (strong, nonatomic) HDUtilityServer *utilityServer; // @synthesize utilityServer=_utilityServer;
@property (strong, nonatomic) HDWorkoutServer *workoutServer; // @synthesize workoutServer=_workoutServer;

- (void).cxx_destruct;
- (CDUnknownBlockType)_authorizationPromptHandler;
- (void)_cancelActiveClientTransaction;
- (BOOL)_clientHasPrivateHealthKitEntitlementWithError:(id *)arg1;
- (BOOL)_clientHasUtilityEntitlementWithError:(id *)arg1;
- (id)_clientRemoteObjectProxy;
- (id)_clientSourceVersion;
- (void)_discardLocationSeries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_entityForLocationSeriesSample:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (void)_finishIfNeeded:(id)arg1;
- (void)_finishLocationSeries:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishSeriesBuilder:(id)arg1;
- (void)_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2;
- (CDUnknownBlockType)_objectAuthorizationPromptHandler;
- (id)_objectsToInsertWithObjects:(id)arg1 error:(id *)arg2;
- (void)_openAppForAuthorizationForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_permissionBlockForRestrictedSourceEntity:(id)arg1;
- (id)_queryServersByUUID;
- (void)_queue_cancelActiveClientTransaction;
- (void)_queue_deactivateDeepBreathingSessionServerWithUUID:(id)arg1;
- (void)_queue_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(BOOL)arg4 error:(id *)arg5;
- (BOOL)_queue_isServerActive;
- (id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id *)arg4;
- (void)_queue_registerForProcessStateUpdatesWithUUID:(id)arg1;
- (void)_queue_serverActivityChanged;
- (void)_queue_unregisterFromProcessStateUpdatesWithUUID:(id)arg1;
- (void)_remote_attachDeepBreathingSessionServerWithClient:(id)arg1 sessionConfiguration:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_requireEntitlement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_requirePrivateHealthKitEntitlementUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_saveLocationSeriesData:(id)arg1 withSeriesSample:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_serverActivityChanged;
- (id)_sourceForClient:(id)arg1 error:(id *)arg2;
- (id)_sourceWithError:(id *)arg1;
- (void)_startQueryServer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deepBreathingServerDidDeactivate:(id)arg1;
- (void)deliverWorkoutEvent:(id)arg1 forSessionUUID:(id)arg2;
- (void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
- (void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
- (id)diagnosticDescription;
- (id)firstPartyWorkoutSnapshot;
- (id)initWithClient:(id)arg1 healthDaemon:(id)arg2 queue:(id)arg3 configuration:(id)arg4;
- (void)invalidate;
- (void)pauseActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processResumed:(id)arg1;
- (void)processSuspended:(id)arg1;
- (id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2;
- (BOOL)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id *)arg3;
- (BOOL)queryServer:(id)arg1 isAuthorizedToReadType:(id)arg2 withRestrictedSourceIdentifier:(id *)arg3 authorizationAnchor:(id *)arg4;
- (void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)queryServerClientHasActiveWorkout:(id)arg1;
- (BOOL)queryServerClientIsInBackground:(id)arg1;
- (void)queryServerDidFinish:(id)arg1;
- (BOOL)queryServerShouldObserveInBackground:(id)arg1;
- (void)remote_addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allAuthorizationRecordsForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_authorizationStatusForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_clientResumedWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_clientWillSuspendWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_currentlyPairedWatchIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_discardLocationSeries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)remote_finishLocationSeries:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_getDefaultForKey:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_getHealthLiteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_hasSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_orderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForFitnessFriendsServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForHealthServicesServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForMedicalIDServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForNanoSyncServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForUtilityServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForWorkoutServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_registerKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeDefaultForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_resetObjectAuthorizationStatusForObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_saveDataObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_saveLocationSeriesData:(id)arg1 withSeriesSample:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_setDefaultValue:(id)arg1 forKey:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)remote_startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)remote_submitMetricsIgnoringAnchor:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_unregisterKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_weeklySummaryInfoForDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)start;
- (void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1;

@end

