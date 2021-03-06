//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDConceptIndexManagerObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthStoreServerInterface-Protocol.h>
#import <HealthDaemon/HDSampleSaving-Protocol.h>
#import <HealthDaemon/HDTaskServerDelegate-Protocol.h>
#import <HealthDaemon/HDTaskServerEndpointDelegate-Protocol.h>
#import <HealthDaemon/HDUnitPreferencesManagerObserver-Protocol.h>

@class HDAuthorizationServer, HDDaemon, HDHealthStoreClient, HDProfile, HDQueryControlServer, HKHealthStoreConfiguration, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDHealthStoreServer : NSObject <HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDSampleSaving, HDTaskServerEndpointDelegate, HDConceptIndexManagerObserver, HDTaskServerDelegate, HDHealthStoreServerInterface>
{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_clientTransactionTimer;
    NSMutableDictionary *_taskServerEndpointsByUUID;
    HDDaemon *_daemon;
    HDProfile *_profile;
    HKHealthStoreConfiguration *_configuration;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    HDAuthorizationServer *_authorizationServer;
    HDQueryControlServer *_queryControlServer;
}

@property (readonly, nonatomic) HDAuthorizationServer *authorizationServer; // @synthesize authorizationServer=_authorizationServer;
@property (readonly, nonatomic) HDHealthStoreClient *client; // @synthesize client=_client;
@property (readonly, copy, nonatomic) NSString *clientDebuggingIdentifier;
@property (readonly, copy, nonatomic) HKHealthStoreConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, weak, nonatomic) HDDaemon *daemon; // @synthesize daemon=_daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) HDQueryControlServer *queryControlServer; // @synthesize queryControlServer=_queryControlServer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)_authorizationPromptHandler;
- (void)_cancelActiveClientTransaction;
- (BOOL)_clientHasControlEntitlementWithError:(id *)arg1;
- (BOOL)_clientHasPrivateHealthKitEntitlementWithError:(id *)arg1;
- (id)_clientRemoteObjectProxy;
- (CDUnknownBlockType)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getHealthRecordsPlugin;
- (void)_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2;
- (id)_objectsByProvenance:(id)arg1 errorOut:(id *)arg2;
- (id)_objectsToInsertWithObjects:(id)arg1 error:(id *)arg2;
- (void)_openAppForAuthorizationForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_permissionBlockForRestrictedSourceEntities:(id)arg1;
- (void)_queue_cancelActiveClientTransaction;
- (void)_queue_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(BOOL)arg4 error:(id *)arg5;
- (BOOL)_queue_isServerActive;
- (id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id *)arg4;
- (void)_queue_serverActivityChanged;
- (void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_remote_saveObjects:(id)arg1 deleteObjects:(id)arg2 associations:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_requireEntitlement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_requirePrivateHealthKitEntitlementUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_serverActivityChanged;
- (id)clientSourceWithError:(id *)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;
- (id)diagnosticDescription;
- (id)initWithClient:(id)arg1 profile:(id)arg2 configuration:(id)arg3 connectionQueue:(id)arg4;
- (void)invalidate;
- (CDUnknownBlockType)objectAuthorizationPromptHandler;
- (void)performIfAuthorizedToDeleteObjectTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)performIfAuthorizedToSaveObjectTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_authorizationStatusForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_clientResumedWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_clientWillSuspendWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_createTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_deleteClientSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_dropEntitlement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchModificationDateForCharacteristicWithDataType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchServerURLForAssetType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchUnitPreferencesForTypes:(id)arg1 version:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)remote_getHealthLiteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_recoverActiveWorkoutSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_removePreferredUnitForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_restoreEntitlement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_saveDataObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)sampleSavingDelegate;
- (void)saveSamples:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)start;
- (void)taskServerDidFailToInitializeForUUID:(id)arg1;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (id)taskServerWithUUID:(id)arg1;
- (void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1;

@end

