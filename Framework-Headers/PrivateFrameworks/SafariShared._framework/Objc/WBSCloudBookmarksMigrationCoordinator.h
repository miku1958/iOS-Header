//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudBookmarksUserIdentityFetcher-Protocol.h>

@class NSString, NSTimer, WBSCloudBookmarksMigrationRampEvaluator, WBSCloudBookmarksMigrationReadinessDecider;
@protocol OS_dispatch_queue, WBSCloudBookmarksDeviceEligibilityFetcher, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSCloudBookmarksMigrationCoordinatorStorage, WBSCloudTabDeviceProvider, WBSLogger, WBSSafariBookmarksSyncAgentProtocol;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject <WBSCloudBookmarksUserIdentityFetcher>
{
    id<WBSCloudBookmarksMigrationCoordinatorStorage> _storage;
    id<WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
    id<WBSCloudTabDeviceProvider> _cloudTabDeviceProvider;
    id<WBSCloudBookmarksDeviceEligibilityFetcher> _windowsDeviceEligibilityFetcher;
    NSObject<OS_dispatch_queue> *_processingQueue;
    WBSCloudBookmarksMigrationRampEvaluator *_migrationRampEvaluator;
    WBSCloudBookmarksMigrationReadinessDecider *_migrationReadinessDecider;
    BOOL _readyToMigrate;
    long long _skipReason;
    NSTimer *_migrationReadinessReevaluationTimer;
    BOOL _migrationEnabled;
    BOOL _rampEnabled;
    id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> _localDataProvider;
    id<WBSLogger> _keyActionsLogger;
}

@property (readonly, nonatomic) id<WBSCloudTabDeviceProvider> cloudTabDeviceProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<WBSLogger> keyActionsLogger; // @synthesize keyActionsLogger=_keyActionsLogger;
@property (readonly, weak, nonatomic) id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider; // @synthesize localDataProvider=_localDataProvider;
@property (nonatomic, getter=isMigrationEnabled) BOOL migrationEnabled; // @synthesize migrationEnabled=_migrationEnabled;
@property (nonatomic, getter=isRampEnabled) BOOL rampEnabled; // @synthesize rampEnabled=_rampEnabled;
@property (readonly, nonatomic) id<WBSCloudBookmarksMigrationCoordinatorStorage> storage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<WBSSafariBookmarksSyncAgentProtocol> syncAgent;
@property (readonly, nonatomic) id<WBSCloudBookmarksDeviceEligibilityFetcher> windowsDeviceEligibilityFetcher;

- (void).cxx_destruct;
- (void)_considerOverridingOtherMigratingDevice;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)_evaluateMigrationRampInclusionForced:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (void)_migrationReadinessDataInvalidated:(id)arg1;
- (void)_migrationReadinessDeciderDecidedMigrationIsNoLongerPossible;
- (void)_migrationReadinessDeciderDecidedMigrationIsPossible;
- (void)_reevaluateMigrationReadiness;
- (void)_scheduleMigrationReadinessReevaluationForDate:(id)arg1;
- (void)_startWaitingForMigrationReadiness;
- (void)_stopWaitingForMigrationReadiness;
- (void)dealloc;
- (void)fetchUserIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithStorage:(id)arg1 syncAgent:(id)arg2 localDataProvider:(id)arg3 cloudTabDeviceProvider:(id)arg4 windowsDeviceEligibilityFetcher:(id)arg5;
- (void)noteCloudTabDevicesChanged;
- (void)startCoordinatingMigration;

@end
