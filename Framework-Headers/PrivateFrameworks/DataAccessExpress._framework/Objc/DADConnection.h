//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DADConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    CDUnknownBlockType _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
    BOOL _registered;
}

@property (nonatomic) BOOL registered; // @synthesize registered=_registered;

+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (id)_connection;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (void)_dispatchMessage:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (id)_init;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (BOOL)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(BOOL)arg3;
- (void)_policyKeyChanged:(id)arg1;
- (void)_registerForAppResumedNotification;
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 waitForReply:(BOOL)arg2;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(CDUnknownBlockType)arg2;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_tearDownInFlightObjects;
- (id)activeSyncDeviceIdentifier;
- (void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)cancelServerContactsSearch:(id)arg1;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (void)dealloc;
- (id)decodedErrorFromData:(id)arg1;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)fillOutCurrentEASTimeZoneInfo;
- (void)handleURL:(id)arg1;
- (id)init;
- (void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)reallyRegisterForInterrogation;
- (BOOL)registerForInterrogationWithBlock:(CDUnknownBlockType)arg1;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)requestDaemonShutdown;
- (void)requestDaemonStartMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)requestDaemonStopMonitoringAgents;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (void)resetTimersAndWarnings;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (id)statusReports;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(BOOL)arg3;

@end
