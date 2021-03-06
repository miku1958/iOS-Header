//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DADAgentManager : NSObject
{
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort *_pmPort;
    struct __CFRunLoopSource *_pmRunLoopSource;
    CDUnknownBlockType _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection *_ctServerConnection;
    NSDictionary *_wirelessPolicies;
    int _pendingAccountSetupCount;
    NSMutableArray *_subCalHandlers;
    unsigned long long _nextDisableMonitoringAgentsToken;
    NSMutableDictionary *_disableMonitoringAgentsTokens;
}

@property (readonly, nonatomic) NSArray *activeAgents;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens; // @synthesize disableMonitoringAgentsTokens=_disableMonitoringAgentsTokens;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken; // @synthesize nextDisableMonitoringAgentsToken=_nextDisableMonitoringAgentsToken;
@property (strong, nonatomic) NSMutableArray *subCalHandlers; // @synthesize subCalHandlers=_subCalHandlers;

+ (BOOL)_shouldAccount:(id)arg1 syncWhenSyncingParentAccountWithID:(id)arg2;
+ (id)sharedManager;
+ (BOOL)wirelessPolicy:(id)arg1 isMorePermissiveThanPolicy:(id)arg2;
- (void).cxx_destruct;
- (id)_accountInfoPath;
- (void)_calDaysToSyncDidChange;
- (void)_clearOrphanedStores;
- (BOOL)_clearOrphanedSubscribedCalendars:(void *)arg1 eventAccountIds:(id)arg2;
- (id)_configFileForAgent:(id)arg1;
- (void)_deviceDidWake;
- (void)_deviceWillSleep;
- (void)_ensureHolidaySubscribedCalendarExists;
- (void)_handleCellularDataUsageChangedNotification;
- (BOOL)_hasDataclassWeCareAbout:(id)arg1;
- (void)_loadAndStartMonitoringAgents;
- (void)_registerForCTDataUsageNotificaiton;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (void)_sendAccountAnalytics;
- (void)_stopMonitoringAndSaveAgents;
- (BOOL)_systemMayNowBeReady;
- (id)accountWithAccountID:(id)arg1;
- (id)accountWithAccountID:(id)arg1 andClassName:(id)arg2;
- (id)accountsProviderWithDBHelper:(id)arg1;
- (id)activeAccountBundleIDs;
- (void)addPendingAccountSetup;
- (BOOL)addPersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3;
- (id)agentWithAccountID:(id)arg1;
- (id)agentsToSyncForAccountID:(id)arg1;
- (id)appleAccountsMatchingClass:(id)arg1 errror:(id *)arg2;
- (id)changeHistoryClerkWithDBHelper:(id)arg1;
- (BOOL)clearPersistMonitoringAccountID:(id)arg1 clientID:(id)arg2;
- (id)containerProviderWithDBHelper:(id)arg1;
- (id)currentPolicyKeyForAccount:(id)arg1;
- (void)dealloc;
- (void)disableActiveSync;
- (unsigned long long)disableMonitoringAgents;
- (void)enableActiveSync;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)arg1;
- (void)getStatusReportDictsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleURLString:(id)arg1;
- (BOOL)hasActiveAccounts;
- (BOOL)hasEASAccountConfigured;
- (BOOL)hasPendingAccountSetup;
- (id)init;
- (void)loadAgents;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)registerForBuddy;
- (void)removePendingAccountSetup;
- (BOOL)removePersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3;
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

