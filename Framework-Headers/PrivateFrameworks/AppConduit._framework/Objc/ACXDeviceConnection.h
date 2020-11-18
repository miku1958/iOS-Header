//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppConduit/ACXDeviceConnectionDelegateProtocol-Protocol.h>

@class NSHashTable, NSString, NSXPCConnection;
@protocol ACXDeviceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol>
{
    BOOL _monitoringForDeviceChanges;
    id<ACXDeviceConnectionDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_source> *_observerReEstablishTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACXDeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (nonatomic) BOOL monitoringForDeviceChanges; // @synthesize monitoringForDeviceChanges=_monitoringForDeviceChanges;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *observerReEstablishTimer; // @synthesize observerReEstablishTimer=_observerReEstablishTimer;
@property (readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (void)_removeFilesAtURL:(id)arg1;
+ (void)performUninstallationCleanup;
+ (id)sharedDeviceConnection;
- (void).cxx_destruct;
- (void)_deviceDidBecomeActiveNotification:(id)arg1;
- (void)_deviceDidPairNotification:(id)arg1;
- (void)_fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_invalidateXPCConnection;
- (void)_onQueue_beginMonitoringNanoRegistryDeviceState;
- (BOOL)_onQueue_createXPCConnectionIfNecessary:(id *)arg1;
- (void)_onQueue_endMonitoringNanoRegistryDeviceState;
- (void)_onQueue_reEstablishObserverConnectionIfNeeded;
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (BOOL)acknowledgeTestFlightInstallBegunForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id *)arg3;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
- (void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withCompanionBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withCompanionBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)cancelPendingInstallations;
- (void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)arg1 forAppWithBundleID:(id)arg2 fetchingFirstMatchingLocalizationInList:(id)arg3 error:(id *)arg4;
- (void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateInstallableSystemAppsOnPairedDevice:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateInstalledApplicationsOnPairedDevice:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (BOOL)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)arg1 returningDatabaseUUID:(id *)arg2 lastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)arg1 returningDatabaseUUID:(id *)arg2 lastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4;
- (void)fetchApplicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchApplicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledApplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlwaysInstallWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completionWithError:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)installRequestFailedForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 failureReason:(id)arg3 wasUserInitiated:(BOOL)arg4 error:(id *)arg5;
- (BOOL)killDaemonForTestingWithError:(id *)arg1;
- (void)removeApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retryPendingAppInstallationsForPairedDevice:(id)arg1;
- (void)setAllExistingAppsShouldBeInstalled:(BOOL)arg1 forNewDevice:(id)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)setUpdatePendingForCompanionApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)systemAppIsInstallableOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)systemAppIsInstallableOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 forPairedDevice:(id)arg4 options:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updatedInstallStateForApplicationsWithInfo:(id)arg1;

@end
