//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemon-Protocol.h>

@class HDAchievementAssetManager, HDAppSubscriptionManager, HDAuthorizationManager, HDBackgroundTaskScheduler, HDContentProtectionManager, HDCurrentActivitySummaryHelper, HDDataProvenanceManager, HDDeviceManager, HDFitnessFriendsManager, HDHealthServiceManager, HDMockPrimaryProfile, HDNanoSyncManager, HDPluginManager, HDPrimaryProfile, HDProcessStateManager, HDRoutineGateway, HDServiceConnectionManager, HDUserCharacteristicsManager, NSString, NSURL, _HKBehavior;
@protocol HDHealthDatabase, HDNanoAlertSuppressionService, HDSyncEngine, HDViewOnWakeService, OS_dispatch_queue;

@interface HDMockDaemon : NSObject <HDHealthDaemon>
{
    HDAchievementAssetManager *achievementAssetManager;
    HDAuthorizationManager *authorizationManager;
    HDDataProvenanceManager *dataProvenanceManager;
    HDNanoSyncManager *nanoSyncManager;
    HDProcessStateManager *processStateManager;
    HDServiceConnectionManager *serviceConnectionManager;
    HDAppSubscriptionManager *subscriptionManager;
    id<HDViewOnWakeService> viewOnWakeService;
    HDRoutineGateway *routineGateway;
    HDMockPrimaryProfile *mockPrimaryProfile;
    HDPrimaryProfile *primaryProfile;
    HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
    HDFitnessFriendsManager *fitnessFriendsManager;
    id<HDNanoAlertSuppressionService> alertSuppressionService;
    id<HDSyncEngine> _syncEngine;
    HDHealthServiceManager *_healthServiceManager;
    HDContentProtectionManager *_contentProtectionManager;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDPluginManager *_pluginManager;
}

@property (strong, nonatomic) HDAchievementAssetManager *achievementAssetManager; // @synthesize achievementAssetManager;
@property (strong, nonatomic) id<HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService;
@property (readonly, nonatomic) HDAuthorizationManager *authorizationManager; // @synthesize authorizationManager;
@property (strong) HDBackgroundTaskScheduler *backgroundTaskScheduler; // @synthesize backgroundTaskScheduler=_backgroundTaskScheduler;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (strong) HDContentProtectionManager *contentProtectionManager; // @synthesize contentProtectionManager=_contentProtectionManager;
@property (strong, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper; // @synthesize currentActivitySummaryHelper;
@property (readonly) HDDataProvenanceManager *dataProvenanceManager; // @synthesize dataProvenanceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDFitnessFriendsManager *fitnessFriendsManager; // @synthesize fitnessFriendsManager;
@property (readonly) unsigned long long hash;
@property (readonly) id<HDHealthDatabase> healthDatabase;
@property (readonly) HDDeviceManager *healthDeviceManager;
@property (strong) HDHealthServiceManager *healthServiceManager; // @synthesize healthServiceManager=_healthServiceManager;
@property (readonly) NSString *homeDirectoryPath;
@property (readonly) NSURL *homeDirectoryURL;
@property (readonly) BOOL isAppleWatch;
@property (readonly) NSObject<OS_dispatch_queue> *mainQueue;
@property (readonly, nonatomic) HDMockPrimaryProfile *mockPrimaryProfile; // @synthesize mockPrimaryProfile;
@property (readonly, nonatomic) HDNanoSyncManager *nanoSyncManager; // @synthesize nanoSyncManager;
@property (strong) HDPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property (readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile;
@property (readonly) HDProcessStateManager *processStateManager; // @synthesize processStateManager;
@property (readonly, nonatomic) HDRoutineGateway *routineGateway; // @synthesize routineGateway;
@property (readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager; // @synthesize serviceConnectionManager;
@property (readonly, nonatomic) HDAppSubscriptionManager *subscriptionManager; // @synthesize subscriptionManager;
@property (readonly) Class superclass;
@property (strong) id<HDSyncEngine> syncEngine; // @synthesize syncEngine=_syncEngine;
@property (readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (strong, nonatomic) id<HDViewOnWakeService> viewOnWakeService; // @synthesize viewOnWakeService;

- (void).cxx_destruct;
- (void)beginTransaction:(id)arg1;
- (void)didUpdateActiveWorkoutServers;
- (void)endTransaction:(id)arg1;
- (id)firstPartyWorkoutSnapshot;
- (BOOL)hasAnyActiveWorkouts;
- (id)healthDataCollectionManager;
- (id)healthDataManager;
- (id)healthSourceManager;
- (id)init;
- (void)pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
- (void)syncImmediatelyWithReason:(id)arg1;
- (id)temporaryProfile;
- (void)terminate;
- (void)unregisterForLaunchNotification:(const char *)arg1;

@end
