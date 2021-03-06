//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDApplicationStateMonitorProvider-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemon-Protocol.h>
#import <HealthDaemon/HDTaskServerClassProvider-Protocol.h>
#import <HealthDaemon/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class HDAnalyticsSubmissionCoordinator, HDAutoBugCaptureReporter, HDBackgroundTaskScheduler, HDCloudSyncCoordinator, HDContentProtectionManager, HDDaemonConnectionManager, HDDevicePowerMonitor, HDMaintenanceWorkCoordinator, HDPeriodicActivity, HDPluginManager, HDPrimaryProfile, HDProcessStateManager, HDProfileManager, HDQueryManager, HDRemoteFeatureAvailabilityAssetManager, HDTaskServerRegistry, HDWorkoutPluginDaemonExtension, HDXPCAlarmScheduler, HDXPCEventManager, NSDictionary, NSMutableArray, NSString, NSURL, _HKBehavior;
@protocol HDDaemonTester, HDNanoAlertSuppressionService, OS_dispatch_queue;

@interface HDDaemon : NSObject <HDTaskServerClassProvider, HDApplicationStateMonitorProvider, HDDiagnosticObject, LSApplicationWorkspaceObserverProtocol, HDHealthDaemon>
{
    _HKBehavior *_behavior;
    NSString *_healthDirectoryPath;
    NSObject<OS_dispatch_queue> *_queue;
    int _languageChangeNotifyToken;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDContentProtectionManager *_contentProtectionManager;
    HDCloudSyncCoordinator *_cloudSyncCoordinator;
    HDPeriodicActivity *_periodicActivity;
    HDPluginManager *_pluginManager;
    HDProcessStateManager *_processStateManager;
    HDProfileManager *_profileManager;
    HDPrimaryProfile *_primaryProfile;
    struct MGNotificationTokenStruct *_deviceNameChangesToken;
    struct os_unfair_lock_s _daemonReadyLock;
    NSMutableArray *_daemonReadyBlocks;
    long long _numberOfDaemonReadyObserversBeforeReady;
    long long _numberOfDaemonReadyObserversAfterReady;
    BOOL _daemonReady;
    struct atomic_flag _didStart;
    NSMutableArray *_daemonActivatedBlocks;
    NSDictionary *_daemonExtensionsByIdentifier;
    BOOL _shouldEnqueueMaintenanceWork;
    NSString *_medicalIDDirectoryPath;
    HDAnalyticsSubmissionCoordinator *_analyticsSubmissionCoordinator;
    HDAutoBugCaptureReporter *_autoBugCaptureReporter;
    id<HDNanoAlertSuppressionService> _alertSuppressionService;
    HDRemoteFeatureAvailabilityAssetManager *_remoteFeatureAvailabilityAssetManager;
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
    HDQueryManager *_queryManager;
    id<HDDaemonTester> _daemonTester;
    HDDaemonConnectionManager *_connectionManager;
    HDTaskServerRegistry *_taskServerRegistry;
    HDDevicePowerMonitor *_devicePowerMonitor;
    HDXPCAlarmScheduler *_alarmScheduler;
    HDXPCEventManager *_xpcEventManager;
}

@property (readonly, nonatomic) HDXPCAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property (strong, nonatomic) id<HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService=_alertSuppressionService;
@property (readonly, nonatomic) HDAnalyticsSubmissionCoordinator *analyticsSubmissionCoordinator; // @synthesize analyticsSubmissionCoordinator=_analyticsSubmissionCoordinator;
@property (readonly, nonatomic) HDAutoBugCaptureReporter *autoBugCaptureReporter; // @synthesize autoBugCaptureReporter=_autoBugCaptureReporter;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly) _HKBehavior *behavior;
@property (readonly, nonatomic) HDCloudSyncCoordinator *cloudSyncCoordinator; // @synthesize cloudSyncCoordinator=_cloudSyncCoordinator;
@property (readonly, nonatomic) HDDaemonConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property (readonly, nonatomic) HDContentProtectionManager *contentProtectionManager;
@property (weak, nonatomic) id<HDDaemonTester> daemonTester; // @synthesize daemonTester=_daemonTester;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDDevicePowerMonitor *devicePowerMonitor; // @synthesize devicePowerMonitor=_devicePowerMonitor;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *healthDirectoryPath;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (readonly, nonatomic) HDMaintenanceWorkCoordinator *maintenanceWorkCoordinator; // @synthesize maintenanceWorkCoordinator=_maintenanceWorkCoordinator;
@property (readonly, copy) NSString *medicalIDDirectoryPath; // @synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath;
@property (readonly) HDPluginManager *pluginManager;
@property (readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile=_primaryProfile;
@property (readonly, nonatomic) HDProcessStateManager *processStateManager;
@property (readonly, nonatomic) HDProfileManager *profileManager;
@property (readonly, nonatomic) HDQueryManager *queryManager; // @synthesize queryManager=_queryManager;
@property (readonly, nonatomic) HDRemoteFeatureAvailabilityAssetManager *remoteFeatureAvailabilityAssetManager; // @synthesize remoteFeatureAvailabilityAssetManager=_remoteFeatureAvailabilityAssetManager;
@property (nonatomic) BOOL shouldEnqueueMaintenanceWork; // @synthesize shouldEnqueueMaintenanceWork=_shouldEnqueueMaintenanceWork;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDTaskServerRegistry *taskServerRegistry; // @synthesize taskServerRegistry=_taskServerRegistry;
@property (readonly, nonatomic) HDWorkoutPluginDaemonExtension *workoutPluginExtension;
@property (readonly, nonatomic) HDXPCEventManager *xpcEventManager; // @synthesize xpcEventManager=_xpcEventManager;

- (void).cxx_destruct;
- (id)IDSServiceWithIdentifier:(id)arg1;
- (id)_bundleIdentifiersToTerminateAfterObliteration;
- (void)_handleDarwinNotificationWithName:(const char *)arg1 event:(id)arg2;
- (void)_handleDistributedNotificationWithName:(const char *)arg1 event:(id)arg2;
- (void)_handleLaunchServicesEvent:(id)arg1 name:(id)arg2;
- (void)_handleSigterm;
- (void)_localeOrLanguageChanged:(id)arg1;
- (id)_newAnalyticsSubmissionCoordinator;
- (id)_newAutoBugCaptureReporter;
- (id)_newBackgroundTaskScheduler;
- (id)_newBehavior;
- (id)_newCloudSyncCoordinator;
- (id)_newConnectionManager;
- (id)_newContentProtectionManager;
- (id)_newMaintenanceWorkCoordinator;
- (id)_newPluginManager;
- (id)_newPrimaryProfile;
- (id)_newProcessStateManager;
- (id)_newProfileManager;
- (id)_newReferenceOntologyAsset;
- (void)_notifyDaemonActivatedObservers;
- (void)_notifyDaemonReadyObservers;
- (void)_postDaemonLaunchDarwinNotification;
- (void)_registerForDeviceNameChanges;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_resetPrivacySettings;
- (void)_setUpDarwinNotificationEventHandler;
- (void)_setUpDistributedNotificationEventHandler;
- (void)_setUpLaunchEventHandlers;
- (void)_setUpSignalHandlers;
- (void)_setupMemoryWarningHandler;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldInitializeDaemon;
- (void)_terminateAndKillClientsForObliteration:(id)arg1;
- (void)_terminationCleanup;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_updateCurrentDeviceName;
- (void)applicationStateDidChange:(id)arg1;
- (id)createApplicationStateMonitor;
- (id)createApplicationStateMonitorWithBundleIDs:(id)arg1 states:(unsigned int)arg2 elevatedPriority:(BOOL)arg3;
- (id)daemonExtensionWithIdentifier:(id)arg1;
- (id)daemonExtensionsConformingToProtocol:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)exitClean:(BOOL)arg1 reason:(id)arg2;
- (id)healthDirectorySizeInBytes;
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;
- (id)healthLiteUserDefaultsDomain;
- (id)init;
- (id)initWithContainerDirectoryPath:(id)arg1;
- (id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2;
- (void)invalidateAllServersForProfile:(id)arg1;
- (void)invalidateAndWait;
- (id)mainQueue;
- (id)nanoPairedDeviceRegistry;
- (void)obliterateAndTerminateProfiles:(id)arg1 options:(unsigned long long)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;
- (void)registerDaemonActivatedObserver:(id)arg1 queue:(id)arg2;
- (void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)start;
- (id)taskServerClasses;
- (void)terminateClean:(BOOL)arg1 reason:(id)arg2;
- (void)unitTest_didCreateProfile:(id)arg1;
- (void)unitTest_queryServerDidInit:(id)arg1;
- (void)unitTest_taskServerDidInit:(id)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;

@end

