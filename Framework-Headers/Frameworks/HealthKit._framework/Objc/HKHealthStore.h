//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKHealthStoreClientInterface-Protocol.h>
#import <HealthKit/HKQueryDelegate-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthServicesManager, HKHealthStoreIdentifier, HKProfileIdentifier, NSBundle, NSMutableSet, NSSet, NSString, _HKXPCConnection;
@protocol HDHealthStoreServerInterface, OS_dispatch_queue, _HKAuthorizationPresentationController, _HKDocumentPickerPresentationController;

@interface HKHealthStore : NSObject <HKHealthStoreClientInterface, _HKXPCExportable, HKQueryDelegate>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    _HKXPCConnection *_healthdConnection;
    NSBundle *_sourceBundle;
    NSString *_sourceBundleIdentifier;
    NSString *_debugIdentifier;
    HKProfileIdentifier *_profileIdentifier;
    unsigned int _applicationSDKVersion;
    id<HDHealthStoreServerInterface> _serverProxy;
    id<_HKAuthorizationPresentationController> _authorizationPresentationController;
    id<_HKDocumentPickerPresentationController> _documentPickerPresentationController;
    CDUnknownBlockType _authorizationDelegateTransactionErrorHandler;
    HKHealthServicesManager *_healthServicesManager;
    NSMutableSet *_queries;
    BOOL _resumeRequired;
    BOOL _resumed;
    NSString *_writeAuthorizationUsageDescriptionOverride;
    NSString *_readAuthorizationUsageDescriptionOverride;
    NSString *_clinicalReadAuthorizationUsageDescriptionOverride;
    NSString *_researchStudyUsageDescriptionOverride;
    NSString *_daemonLaunchDarwinNotificationName;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HKHealthStoreIdentifier *_identifier;
}

@property (readonly, nonatomic) unsigned int applicationSDKVersion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (copy, nonatomic) NSString *clinicalReadAuthorizationUsageDescriptionOverride; // @synthesize clinicalReadAuthorizationUsageDescriptionOverride=_clinicalReadAuthorizationUsageDescriptionOverride;
@property (copy, nonatomic) NSString *daemonLaunchDarwinNotificationName; // @synthesize daemonLaunchDarwinNotificationName=_daemonLaunchDarwinNotificationName;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKHealthServicesManager *healthServicesManager;
@property (readonly, copy) HKHealthStoreIdentifier *identifier; // @synthesize identifier=_identifier;
@property (copy) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, getter=_queries) NSSet *queries;
@property (copy, nonatomic) NSString *readAuthorizationUsageDescriptionOverride; // @synthesize readAuthorizationUsageDescriptionOverride=_readAuthorizationUsageDescriptionOverride;
@property (copy, nonatomic) NSString *researchStudyUsageDescriptionOverride; // @synthesize researchStudyUsageDescriptionOverride=_researchStudyUsageDescriptionOverride;
@property (strong) NSBundle *sourceBundle;
@property (copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *writeAuthorizationUsageDescriptionOverride; // @synthesize writeAuthorizationUsageDescriptionOverride=_writeAuthorizationUsageDescriptionOverride;

+ (BOOL)_applicationHasRunningWorkout;
+ (BOOL)isHealthDataAvailable;
- (void).cxx_destruct;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)_activeWorkoutApplicationIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (id)_activityMoveModeWithError:(id *)arg1;
- (void)_addQuery:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_bodyMassCharacteristicQuantityWithError:(id *)arg1;
- (void)_calculateBMRForDate:(id)arg1 useEndOfDay:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_cardioFitnessMedicationsUseWithError:(id *)arg1;
- (id)_characteristicForDataType:(id)arg1 error:(id *)arg2;
- (id)_clientClinicalReadAuthorizationUsageDescription;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (id)_clientReadAuthorizationUsageDescription;
- (id)_clientWriteAuthorizationUsageDescription;
- (id)_clinicalAuthorizationPresentationRequestForRecord:(id)arg1;
- (void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)_connectionQueue_setUpWithEndpoint:(id)arg1;
- (id)_createFitnessMachineConnection;
- (id)_createFitnessMachineConnectionInitiator;
- (void)_currentValueForQuantityTypeCode:(long long)arg1 characteristicTypeCode:(long long)arg2 beforeDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_currentWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteObjects:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_discardServerProxiesForServer:(id)arg1;
- (void)_faultIfInnappropriateHost;
- (void)_fetchBoolDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_firstPartyWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_generatePauseOrResumeRequest:(CDUnknownBlockType)arg1;
- (void)_generateWorkoutMarkerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_healthDataAuthorizationPresentationRequestForRecord:(id)arg1;
- (id)_heightCharacteristicQuantityWithError:(id *)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id *)arg1;
- (id)_modificationDateForCharacteristicWithType:(id)arg1 error:(id *)arg2;
- (void)_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (BOOL)_prepareObjectsForSaving:(id)arg1 errorOut:(id *)arg2;
- (void)_removePreferredUnitForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeQuery:(id)arg1;
- (void)_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_researchStudyUsageDescription;
- (void)_safeFetchDaemonPreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveObjects:(id)arg1 atomically:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendNextObjectBatch:(id)arg1 lastRange:(struct _NSRange)arg2 server:(id)arg3 transaction:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_serverProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (BOOL)_setActivityMoveMode:(long long)arg1 error:(id *)arg2;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)_setBiologicalSex:(long long)arg1 error:(id *)arg2;
- (BOOL)_setBloodType:(long long)arg1 error:(id *)arg2;
- (BOOL)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (BOOL)_setCardioFitnessMedicationsUse:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id *)arg3;
- (void)_setConfigurationPropertyUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_setDateOfBirthComponents:(id)arg1 error:(id *)arg2;
- (BOOL)_setFitzpatrickSkinType:(long long)arg1 error:(id *)arg2;
- (BOOL)_setHeightCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (BOOL)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_setUserEnteredMenstrualCycleLengthCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (BOOL)_setUserEnteredMenstrualPeriodLengthCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (BOOL)_setWheelchairUse:(long long)arg1 error:(id *)arg2;
- (void)_shouldGenerateDemoDataPreferenceIsSet:(CDUnknownBlockType)arg1;
- (id)_sourceBundleOrDefaultBundle;
- (void)_throwIfAuthorizationDisallowedForSharing:(BOOL)arg1 types:(id)arg2;
- (void)_throwIfClinicalTypesRequestedToShare:(id)arg1;
- (void)_throwIfParentTypeNotRequestedForSharing:(BOOL)arg1 types:(id)arg2;
- (id)_userEnteredMenstrualCycleLengthCharacteristicQuantityWithError:(id *)arg1;
- (id)_userEnteredMenstrualPeriodLengthCharacteristicQuantityWithError:(id *)arg1;
- (void)_validateAuthorizationRequestWithShareTypes:(id)arg1 readTypes:(id)arg2;
- (void)_validateAuthorizationRequiredTypes;
- (void)_validateClinicalHealthRecordsPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2;
- (void)_validateHealthDataPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2 isResearchStudy:(BOOL)arg3;
- (void)_validatePurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2;
- (id)activityMoveModeWithError:(id *)arg1;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)authorizationStatusForType:(id)arg1;
- (void)badgeForDomain:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)biologicalSexWithError:(id *)arg1;
- (id)bloodTypeWithError:(id *)arg1;
- (void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)arg1;
- (void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientRemote_unitPreferencesDidUpdate;
- (void)closeTransactionForType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)dateOfBirthComponentsWithError:(id *)arg1;
- (id)dateOfBirthWithError:(id *)arg1;
- (void)dealloc;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteClientSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMedicalIDData;
- (void)deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteObject:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteObjects:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteObjects:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableAllBackgroundDeliveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)dropEntitlement:(id)arg1;
- (id)earliestPermittedSampleDate;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)endWorkoutSession:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)executeQuery:(id)arg1 activationHandler:(CDUnknownBlockType)arg2;
- (id)exportedInterface;
- (void)fetchCloudSyncRequiredWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedicalIDDataCreateIfNecessary:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchNanoSyncPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPluginServiceEndpointForIdentifier:(id)arg1 endpointHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchServerURLForAssetType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 endpointHandler:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (id)fitzpatrickSkinTypeWithError:(id *)arg1;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)forceLastChanceNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceNanoSyncWithPullRequest:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getHealthDirectorySizeInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getHealthLiteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)hasSampleWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)healthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1 debugIdentifier:(id)arg2;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseWorkoutSession:(id)arg1;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postNotificationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preferredUnitsForQuantityTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preferredUnitsForQuantityTypes:(id)arg1 version:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)profileIdentifierForNRDeviceUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryDidFinishExecuting:(id)arg1;
- (void)recoverActiveWorkoutSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)remoteInterface;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreEntitlement:(id)arg1;
- (void)resume;
- (void)resumeWorkoutSession:(id)arg1;
- (void)saveObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)saveObjects:(id)arg1 deleteObjects:(id)arg2 associations:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveObjects:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)splitTotalEnergy:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startHealthServiceSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWorkoutSession:(id)arg1;
- (void)stopQuery:(id)arg1;
- (BOOL)supportsHealthRecords;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)unitTest_replaceListenerEndpoint:(id)arg1;
- (void)unitTest_setApplicationSDKVersion:(unsigned int)arg1;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateMedicalIDData:(id)arg1;
- (void)updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)wheelchairUseWithError:(id *)arg1;

@end

