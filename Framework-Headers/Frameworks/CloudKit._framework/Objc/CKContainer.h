//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKBXPCClient-Protocol.h>

@class ACAccountStore, CKAccountInfo, CKContainerID, CKContainerSetupInfo, CKDatabase, CKOperationCallbackManager, CKOperationFlowControlManager, CKRecordID, NSMapTable, NSMutableArray, NSOperationQueue, NSString, NSXPCConnection;

@interface CKContainer : NSObject <CKBXPCClient>
{
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    BOOL _hasValidConnection;
    BOOL _needsSandboxExtensions;
    BOOL _hasCachedSetupInfo;
    int _statusReportToken;
    int _killSwitchToken;
    int _accountChangeToken;
    CKContainerID *_containerID;
    CKRecordID *_containerScopedUserID;
    CKDatabase *_privateCloudDatabase;
    CKDatabase *_publicCloudDatabase;
    CKDatabase *_sharedCloudDatabase;
    NSXPCConnection *_xpcConnection;
    NSOperationQueue *_convenienceOperationQueue;
    NSOperationQueue *_throttlingOperationQueue;
    NSOperationQueue *_backgroundThrottlingOperationQueue;
    CKOperationCallbackManager *_callbackManager;
    CKOperationFlowControlManager *_flowControlManager;
    CKAccountInfo *_accountInfoOverride;
    ACAccountStore *_accountStore;
    NSMutableArray *_sandboxExtensionHandles;
    CKContainerSetupInfo *_cachedSetupInfo;
    NSMapTable *_assetsByUUID;
}

@property (nonatomic) int accountChangeToken; // @synthesize accountChangeToken=_accountChangeToken;
@property (copy, nonatomic) CKAccountInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property (strong, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (strong, nonatomic) NSMapTable *assetsByUUID; // @synthesize assetsByUUID=_assetsByUUID;
@property (strong, nonatomic) NSOperationQueue *backgroundThrottlingOperationQueue; // @synthesize backgroundThrottlingOperationQueue=_backgroundThrottlingOperationQueue;
@property (strong, nonatomic) CKContainerSetupInfo *cachedSetupInfo; // @synthesize cachedSetupInfo=_cachedSetupInfo;
@property (strong, nonatomic) CKOperationCallbackManager *callbackManager; // @synthesize callbackManager=_callbackManager;
@property (strong, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (strong, nonatomic) CKRecordID *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property (strong, nonatomic) NSOperationQueue *convenienceOperationQueue; // @synthesize convenienceOperationQueue=_convenienceOperationQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CKOperationFlowControlManager *flowControlManager; // @synthesize flowControlManager=_flowControlManager;
@property (nonatomic) BOOL hasCachedSetupInfo; // @synthesize hasCachedSetupInfo=_hasCachedSetupInfo;
@property (nonatomic) BOOL hasValidConnection; // @synthesize hasValidConnection=_hasValidConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic) int killSwitchToken; // @synthesize killSwitchToken=_killSwitchToken;
@property (nonatomic) BOOL needsSandboxExtensions; // @synthesize needsSandboxExtensions=_needsSandboxExtensions;
@property (strong, nonatomic) CKDatabase *privateCloudDatabase; // @synthesize privateCloudDatabase=_privateCloudDatabase;
@property (strong, nonatomic) CKDatabase *publicCloudDatabase; // @synthesize publicCloudDatabase=_publicCloudDatabase;
@property (strong, nonatomic) NSMutableArray *sandboxExtensionHandles; // @synthesize sandboxExtensionHandles=_sandboxExtensionHandles;
@property (readonly, nonatomic) CKDatabase *sharedCloudDatabase;
@property (strong, nonatomic) CKDatabase *sharedCloudDatabase; // @synthesize sharedCloudDatabase=_sharedCloudDatabase;
@property (nonatomic) int statusReportToken; // @synthesize statusReportToken=_statusReportToken;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSOperationQueue *throttlingOperationQueue; // @synthesize throttlingOperationQueue=_throttlingOperationQueue;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)containerWithIdentifier:(id)arg1;
+ (id)defaultContainer;
+ (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_checkSelfCloudServicesEntitlement;
- (id)_checkSelfContainerIdentifier;
- (void)_cleanupSandboxExtensionHandles:(id)arg1;
- (void)_consumeSandboxExtensions:(id)arg1;
- (void)_fetchUserIdentityWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithContainerIdentifier:(id)arg1;
- (id)_initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (void)_prepareForDaemonLaunch;
- (void)_setupWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (long long)_untrustedDatabaseEnvironment;
- (id)_untrustedEntitlementForKey:(id)arg1;
- (void)accountChangedWithID:(id)arg1;
- (void)accountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addOperation:(id)arg1;
- (id)connection;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)discoverAllContactUserInfosWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchServerEnvironment:(CDUnknownBlockType)arg1;
- (void)fetchUserIdentityWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchUserIdentityWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchUserRecordIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)findTrackedAssetByUUID:(id)arg1;
- (void)getNewWebSharingIdentity:(CDUnknownBlockType)arg1;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithContainerID:(id)arg1;
- (id)initWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (void)openFileWithOpenInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)purgeTmpDirectory;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setEffectiveClientBundleIdentifier:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (id)setupInfo;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)statusReport;
- (void)tossConfigWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)trackAssets:(id)arg1;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;

@end

