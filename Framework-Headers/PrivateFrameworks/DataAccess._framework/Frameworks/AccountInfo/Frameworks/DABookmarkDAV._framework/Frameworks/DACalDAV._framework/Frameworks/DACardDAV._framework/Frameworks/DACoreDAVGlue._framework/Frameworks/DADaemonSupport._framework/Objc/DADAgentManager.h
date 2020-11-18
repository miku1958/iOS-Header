//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface DADAgentManager : NSObject
{
    NSMutableArray *_activeAgents;
    NSMutableArray *_agentsAwaitingShutdown;
    int _disableMonitoringRequests;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort *_pmPort;
    struct __CFRunLoopSource *_pmRunLoopSource;
    CDUnknownBlockType _startAgentsWhenSystemReadyBlock;
    int _pendingAccountSetupCount;
    NSMutableArray *_subCalHandlers;
}

@property (strong, nonatomic) NSArray *activeAgents; // @synthesize activeAgents=_activeAgents;
@property (strong, nonatomic) NSMutableArray *subCalHandlers; // @synthesize subCalHandlers=_subCalHandlers;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_accountInfoPath;
- (BOOL)_clearOrphanedSubscribedCalendars:(void *)arg1 eventAccountIds:(id)arg2 toDoAccountIds:(id)arg3;
- (id)_configFileForAgent:(id)arg1;
- (void)_deviceDidWake;
- (void)_deviceWillSleep;
- (void)_ensureHolidaySubscribedCalendarExists;
- (BOOL)_hasDataclassWeCareAbout:(id)arg1;
- (void)_loadAndStartMonitoringAgents;
- (id)_phoneVersion;
- (BOOL)_removeSubscribedCalendarsForAccountWithID:(id)arg1 inStore:(void *)arg2;
- (void)_simulateNotificationOnWatchedFolders:(id)arg1;
- (void)_stopMonitoringAndSaveAgents;
- (BOOL)_systemMayNowBeReady;
- (id)accountWithAccountID:(id)arg1;
- (id)accountWithAccountID:(id)arg1 andClassName:(id)arg2;
- (void)addPendingAccountSetup;
- (void)agentHasStoppedMonitoring:(id)arg1;
- (id)agentWithAccountID:(id)arg1;
- (void)cleanupLaunchdSemaphore;
- (void)clearOrphanedStores;
- (id)currentPolicyKeyForAccount:(id)arg1;
- (BOOL)dadRemoveStoresForAccountWithID:(id)arg1;
- (void)dealloc;
- (void)disableDaemon;
- (void)disableMonitoringAgents;
- (void)enableDaemon;
- (void)enableMonitoringAgents;
- (void)getStatusReportDictsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleURLString:(id)arg1;
- (BOOL)hasActiveAccounts;
- (BOOL)hasPendingAccountSetup;
- (id)init;
- (void)loadAgents;
- (int)numDisableMonitoringRequests;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)removePendingAccountSetup;
- (void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;
- (void)requestPolicyUpdateForAccount:(id)arg1;
- (BOOL)resetCertWarningsForAccountWithId:(id)arg1 andDataclasses:(long long)arg2;
- (BOOL)resumeMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (void)saveAndReleaseAgents;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (BOOL)startMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (id)stateString;
- (BOOL)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (BOOL)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4;
- (void)upgradeAccountsInSimulator;

@end

