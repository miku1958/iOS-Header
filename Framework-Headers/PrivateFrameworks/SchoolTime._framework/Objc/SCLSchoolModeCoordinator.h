//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SchoolTime/SCLSchoolModeServerObserver-Protocol.h>
#import <SchoolTime/SCLTransportControllerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSURL, SCLPersistentSettings, SCLScheduleSettings, SCLSchoolModeCoordinatorConfiguration, SCLSettingsSyncCoordinator, SCLState, SCLUnlockHistoryItem;

@interface SCLSchoolModeCoordinator : NSObject <SCLTransportControllerDelegate, SCLSchoolModeServerObserver>
{
    int _firstUnlockToken;
    BOOL _hasReceivedFirstUnlock;
    BOOL _ready;
    SCLSchoolModeCoordinatorConfiguration *_configuration;
    SCLState *_currentState;
    NSMutableSet *_clients;
    NSURL *_directoryURL;
    NSURL *_scheduleURL;
    SCLUnlockHistoryItem *_pendingUnlockItem;
    SCLPersistentSettings *_persistentSettings;
    SCLSettingsSyncCoordinator *_settingsSyncCoordinator;
    unsigned long long _stateHandle;
}

@property (readonly, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property (readonly, copy, nonatomic) SCLSchoolModeCoordinatorConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) SCLState *currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SCLUnlockHistoryItem *pendingUnlockItem; // @synthesize pendingUnlockItem=_pendingUnlockItem;
@property (strong, nonatomic) SCLPersistentSettings *persistentSettings; // @synthesize persistentSettings=_persistentSettings;
@property (readonly, nonatomic, getter=isReady) BOOL ready; // @synthesize ready=_ready;
@property (strong, nonatomic) SCLScheduleSettings *scheduleSettings; // @dynamic scheduleSettings;
@property (readonly, nonatomic) NSURL *scheduleURL; // @synthesize scheduleURL=_scheduleURL;
@property (strong, nonatomic) SCLSettingsSyncCoordinator *settingsSyncCoordinator; // @synthesize settingsSyncCoordinator=_settingsSyncCoordinator;
@property (nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_classCDataIsAvailable;
- (id)_configuration;
- (void)_createSchoolTimeDirectoryIfNeeded;
- (void)_lock_loadPersistentSchedule;
- (void)_lock_updatePersistentSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)_noteHistoryDidUpdate;
- (void)_persistSettings:(id)arg1;
- (void)_registerForFirstUnlockIfNeeded;
- (void)_requestRemoteScheduleSettingsIfNeeded;
- (void)_updateClientsWithSchedule:(id)arg1 notify:(BOOL)arg2;
- (void)activateSettingsSyncCoordinatorWithSettings:(id)arg1;
- (void)addClient:(id)arg1;
- (void)addUnlockHistoryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)applySchedule:(id)arg1 error:(id *)arg2;
- (BOOL)applySchedule:(id)arg1 forInitialSync:(BOOL)arg2 error:(id *)arg3;
- (id)currentScheduleSettingsForTransportController:(id)arg1;
- (void)dealloc;
- (void)deleteHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)historyStore;
- (id)idsDevice;
- (id)initWithConfiguration:(id)arg1;
- (id)nrDevice;
- (void)purgeOldHistoryItems;
- (void)removeClient:(id)arg1;
- (id)server;
- (void)server:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3;
- (void)setActive:(BOOL)arg1;
- (struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg1;
- (id)transportController;
- (void)transportController:(id)arg1 didReceiveSchedule:(id)arg2 forInitialSync:(BOOL)arg3;
- (void)transportController:(id)arg1 didReceiveUnlockHistoryItem:(id)arg2;

@end

