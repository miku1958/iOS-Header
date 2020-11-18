//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACRemoteAccountStoreSession, ACTimedExpirer, NSArray, NSMutableDictionary, NSString, NSXPCListenerEndpoint;
@protocol ACRemoteAccountStoreSessionDelegate, OS_dispatch_queue;

@interface ACAccountStore : NSObject
{
    id _daemonAccountStoreDidChangeObserver;
    NSMutableDictionary *_accountCache;
    NSMutableDictionary *_accountsWithAccountTypeCache;
    NSXPCListenerEndpoint *_endpoint;
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;
    struct os_unfair_lock_s _remoteAccountStoreSessionLock;
    ACTimedExpirer *_remoteAccountStoreSessionExpirer;
    ACRemoteAccountStoreSession *_longLivedRemoteAccountStoreSession;
    struct os_unfair_lock_s _longLivedRemoteAccountStoreSessionLock;
    ACTimedExpirer *_longLivedRemoteAccountStoreSessionExpirer;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSString *_effectiveBundleID;
}

@property (readonly, weak, nonatomic) NSArray *accounts;
@property (readonly) id<ACRemoteAccountStoreSessionDelegate> connectionDelegate;
@property (readonly) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_effectiveBundleID;
@property (readonly, nonatomic) ACRemoteAccountStoreSession *longLivedRemoteAccountStoreSession;
@property (readonly, nonatomic) ACRemoteAccountStoreSession *remoteAccountStoreSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;

+ (id)_defaultStore;
+ (id)_obsoleteAccountTypeIDsToRemove;
+ (void)_setConnectionTimeout:(unsigned long long)arg1;
+ (void)_setDefaultStore:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_clearAccountCaches;
- (id)_connectionFailureError;
- (id)_createSMTPAccountForServerAccount:(id)arg1;
- (void)_removeObsoleteAccountsInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1;
- (void)_removeObsoleteOSXServerAccountForiOS:(id)arg1;
- (id)_sanitizeOptionsDictionary:(id)arg1;
- (void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_unsanitizeError:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountsWithAccountType:(id)arg1;
- (void)accountsWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id *)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id *)arg3;
- (BOOL)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)allAccountTypes;
- (id)allCredentialItems;
- (id)allDataclasses;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cachedAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 error:(id *)arg2;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)clientTokenForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id *)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id *)arg3;
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id *)arg2;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)disconnectFromRemoteAccountStore;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1 error:(id *)arg2;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (void)handleURL:(id)arg1;
- (BOOL)hasAccountWithDescription:(id)arg1;
- (id)init;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1 error:(id *)arg2;
- (BOOL)isPushSupportedForAccount:(id)arg1;
- (BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)migrateCredentialForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)parentAccountForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1 error:(id *)arg2;
- (BOOL)permissionForAccountType:(id)arg1;
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1 error:(id *)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccount:(id)arg1 withDeleteSync:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeObsoleteAccounts:(CDUnknownBlockType)arg1;
- (void)renewCredentialsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportTelemetryForLandmarkEvent:(CDUnknownBlockType)arg1;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)saveVerifiedAccount:(id)arg1 error:(id *)arg2;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id *)arg4;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (void)shutdownAccountsD:(CDUnknownBlockType)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
