//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, DAStatusReport, DATaskManager, DATrustHandler, NSArray, NSData, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DAAccount : NSObject
{
    ACAccount *_backingAccountInfo;
    BOOL _hasInitted;
    BOOL _shouldUseOpportunisticSockets;
    BOOL _wasUserInitiated;
    DAStatusReport *_statusReport;
    NSMapTable *_consumers;
    struct __CFURLStorageSession *_storageSession;
    NSString *_clientToken;
    DATaskManager *_taskManager;
    NSObject<OS_xpc_object> *_xpcActivity;
    int _continueCount;
    BOOL _isFetchingAutomatically;
    BOOL _shouldFailAllTasks;
    BOOL _isValidating;
    DATrustHandler *_trustHandler;
    NSArray *_appIdsForPasswordPrompt;
    NSString *_sourceApplicationBundleIdentifier;
    NSMutableDictionary *_dataclassPropertyURLsByDataclass;
    NSMutableArray *_pendingQueries;
    NSObject<OS_dispatch_queue> *_pendingQueryQueue;
    NSDate *_lastQueryStartedTime;
}

@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSArray *appIdsForPasswordPrompt; // @synthesize appIdsForPasswordPrompt=_appIdsForPasswordPrompt;
@property (readonly, nonatomic) ACAccount *backingAccountInfo; // @synthesize backingAccountInfo=_backingAccountInfo;
@property (readonly, nonatomic) NSString *changeTrackingID;
@property (readonly, copy, nonatomic) NSString *clientToken;
@property (nonatomic, setter=setDAAccountVersion:) int daAccountVersion;
@property (strong, nonatomic) NSMutableDictionary *dataclassPropertyURLsByDataclass; // @synthesize dataclassPropertyURLsByDataclass=_dataclassPropertyURLsByDataclass;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) long long enabledDataclassesBitmask;
@property (strong, nonatomic) NSData *encryptionIdentityPersistentReference;
@property (copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSData *identityPersist;
@property (readonly, nonatomic) BOOL isChildAccount;
@property (nonatomic) BOOL isValidating; // @synthesize isValidating=_isValidating;
@property (readonly, nonatomic) int keychainAccessibilityType;
@property (strong, nonatomic) NSDate *lastQueryStartedTime; // @synthesize lastQueryStartedTime=_lastQueryStartedTime;
@property (copy, nonatomic) NSString *password;
@property (strong, nonatomic) NSMutableArray *pendingQueries; // @synthesize pendingQueries=_pendingQueries;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *pendingQueryQueue; // @synthesize pendingQueryQueue=_pendingQueryQueue;
@property (readonly, copy, nonatomic) NSString *persistentUUID;
@property (nonatomic) long long port;
@property (readonly, nonatomic) NSString *preferredAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (copy, nonatomic) NSURL *principalURL;
@property (readonly, nonatomic) NSString *publicDescription;
@property (readonly, nonatomic) NSString *scheduleIdentifier;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSSet *serverComplianceClasses;
@property (readonly, nonatomic) NSString *serverRoot;
@property (readonly, nonatomic) BOOL shouldAutodiscoverAccountProperties;
@property (nonatomic) BOOL shouldDoInitialAutodiscovery;
@property (readonly, nonatomic) BOOL shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
@property (nonatomic) BOOL shouldUseOpportunisticSockets; // @synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets;
@property (strong, nonatomic) NSData *signingIdentityPersistentReference;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (strong, nonatomic) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property (readonly, nonatomic) DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property (strong, nonatomic) DATrustHandler *trustHandler; // @synthesize trustHandler=_trustHandler;
@property (nonatomic) BOOL useSSL;
@property (copy, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *userAgentHeader;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL wasUserInitiated; // @synthesize wasUserInitiated=_wasUserInitiated;

+ (id)_leafAccountTypes;
+ (id)_leafAccountTypes;
+ (id)daAccountSubclassWithBackingAccountInfo:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (void)reacquireClientRestrictions:(id)arg1;
+ (BOOL)shouldCreateAccountForBackingAccountInfo:(id)arg1;
- (void).cxx_destruct;
- (void)_dequeueQuery;
- (void)_handleSignificantPropertyChanges;
- (BOOL)_isIdentityManagedByProfile;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelPendingSearchQuery:(id)arg1;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (BOOL)_reallySearchQueriesRunning;
- (void)_refreshCredential;
- (void)_setPersistentUUID:(id)arg1;
- (void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (BOOL)accountContainsEmailAddress:(id)arg1;
- (void)accountDidChangeFromOldAccountInfo:(id)arg1;
- (void)accountDidChangeWithChangeInfo:(id)arg1;
- (BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg1;
- (int)accountIntPropertyForKey:(id)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountTypeIdentifier;
- (id)accountsProviderWithDBHelper:(id)arg1;
- (void)addToCoreDAVLoggingDelegates;
- (id)addUsernameToURL:(id)arg1;
- (id)additionalHeaderValues;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (BOOL)canSaveWithAccountProvider:(CDUnknownBlockType)arg1;
- (void)cancelAllSearchQueries;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (void)cancelGrantedDelegatesListRequestWithID:(id)arg1;
- (void)cancelOfficeHoursRequestWithID:(id)arg1;
- (void)cancelSearchQuery:(id)arg1;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (void)cancelUpdateGrantedDelegatePermissionRequestWithID:(id)arg1;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2 inQueue:(id)arg3;
- (void)cleanupAccountFiles;
- (void)clientTokenRequestedByServer;
- (id)consumerForTask:(id)arg1;
- (id)contactsFolders;
- (id)containerProviderWithDBHelper:(id)arg1;
- (struct __CFURLStorageSession *)copyStorageSession;
- (id)customConnectionProperties;
- (id)dataclassProperties;
- (void)dealloc;
- (void)decrementXpcActivityContinueCount;
- (id)defaultContactsFolder;
- (id)defaultContainerIdentifierForDADataclass:(long long)arg1;
- (id)defaultEventsFolder;
- (id)defaultNotesFolder;
- (id)defaultToDosFolder;
- (id)deletedItemsFolder;
- (id)description;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (id)displayName;
- (id)domainOnly;
- (id)draftsFolder;
- (void)dropAssertionsAndRenewCredentialsInQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)enabledForAnyDADataclasses:(long long)arg1;
- (BOOL)enabledForDADataclass:(long long)arg1;
- (id)eventsFolders;
- (id)exceptionsDict;
- (struct __CFData *)exceptionsForDigest:(id)arg1;
- (id)fetchOfficeHoursWithConsumer:(id)arg1 error:(id *)arg2;
- (id)getAppleIDSession;
- (BOOL)getFetchingAutomaticallyState;
- (id)getPendingQueryQueue;
- (BOOL)handleCertificateError:(id)arg1;
- (BOOL)handleTrustChallenge:(id)arg1;
- (BOOL)handleTrustChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleValidationError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)hasXpcActivity;
- (id)hostFromDataclassPropertiesForDataclass:(id)arg1;
- (id)inboxFolder;
- (void)incrementXpcActivityContinueCount;
- (void)ingestBackingAccountInfoProperties;
- (id)initWithBackingAccountInfo:(id)arg1;
- (BOOL)isActiveSyncAccount;
- (BOOL)isCalDAVAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isDelegateAccount;
- (BOOL)isDisabled;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isGoogleAccount;
- (BOOL)isHotmailAccount;
- (BOOL)isLDAPAccount;
- (BOOL)isOofSupported;
- (BOOL)isSubscribedCalendarAccount;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (BOOL)monitorFolderWithID:(id)arg1;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (id)notesFolders;
- (id)oauth2Token;
- (id)oauthInfoProvider;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)onBehalfOfBundleIdentifier;
- (id)passwordWithExpected:(BOOL)arg1;
- (id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4;
- (void)performSearchQuery:(id)arg1;
- (void)performUsingAccountPersona:(CDUnknownBlockType)arg1;
- (long long)portFromDataclassPropertiesForDataclass:(id)arg1;
- (BOOL)preflightSaveWithAccountProvider:(CDUnknownBlockType)arg1;
- (id)protocolVersion;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (void)reload;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)removeClientCertificateData;
- (void)removeConsumerForTask:(id)arg1;
- (void)removeDBSyncData;
- (void)removeFromCoreDAVLoggingDelegates;
- (void)removeXpcActivity;
- (id)reportShareRequestAsJunkForCalendar:(id)arg1 consumer:(id)arg2;
- (id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5;
- (id)requestGrantedDelegatesListWithConsumer:(id)arg1;
- (void)resetAccountID;
- (BOOL)resetCertWarnings;
- (void)resetStatusReport;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(long long)arg2 consumer:(id)arg3;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)retrieveOofSettingsForConsumer:(id)arg1;
- (void)saveAccountProperties;
- (void)saveAccountPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveFetchingAutomaticallyState:(BOOL)arg1;
- (BOOL)saveModifiedPropertiesOnBackingAccount;
- (void)saveXpcActivity:(id)arg1;
- (BOOL)searchQueriesRunning;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (id)sentItemsFolder;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)setEnabled:(BOOL)arg1 forDADataclass:(long long)arg2;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setExceptions:(struct __CFData *)arg1 forDigest:(id)arg2;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)setOfficeHours:(id)arg1 withConsumer:(id)arg2 error:(id *)arg3;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (BOOL)shouldCancelTaskDueToOnPowerFetchMode;
- (BOOL)shouldRemoveDBSyncDataOnAccountChange;
- (void)shutdown;
- (id)spinnerIdentifiers;
- (id)stateString;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (id)syncStoreIdentifier;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8;
- (void)tearDown;
- (id)toDosFolders;
- (int)toDosNumberOfPastDaysToSync;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (void)updateExistingAccountProperties;
- (id)updateGrantedDelegatePermission:(id)arg1 consumer:(id)arg2;
- (void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2;
- (BOOL)upgradeAccount;
- (id)urlFromDataclassPropertiesForDataclass:(id)arg1;
- (BOOL)useSSLFromDataclassPropertiesForDataclass:(id)arg1;
- (id)usernameWithoutDomain;
- (void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

