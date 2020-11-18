//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAccountOverrideInfo, CKContainerID, CKDAccount, CKDAppContainerIntersectionMetadata, CKDAppContainerTuple, CKDApplicationMetadata, CKDCachePurger, CKDFlowControlManager, CKDKeyValueDiskCache, CKDMMCS, CKDMescalSession, CKDPCSCache, CKDPCSManager, CKDPublicIdentityLookupService, CKDServerConfiguration, CKDZoneGatekeeper, CKTimeLogger, NSBundle, NSHashTable, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDClientContext : NSObject
{
    BOOL _isForClouddInternalUse;
    BOOL _applicationIsAppExtension;
    BOOL _hasDataContainer;
    BOOL _captureResponseHTTPHeaders;
    BOOL _useZoneWidePCS;
    BOOL _returnPCSMetadata;
    BOOL _useMMCSEncryptionV2;
    BOOL _bypassPCSEncryption;
    BOOL _forceEnableReadOnlyManatee;
    BOOL _isSiloedContext;
    BOOL _sandboxed;
    BOOL _finishedAppProxySetup;
    BOOL _finishedProxySetup;
    BOOL _wasInitializedWithProxy;
    unsigned int _clientSDKVersion;
    CKDServerConfiguration *_config;
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSURL *_publicCodeServiceURL;
    NSURL *_publicMetricsServiceURL;
    NSString *_containerScopedUserID;
    NSString *_orgAdminUserID;
    NSHashTable *_proxies;
    long long _cachedEnvironment;
    CKContainerID *_containerID;
    NSBundle *_applicationBundle;
    NSString *_applicationBundleID;
    NSString *_sourceApplicationBundleID;
    NSString *_applicationVersion;
    NSURL *_applicationIcon;
    NSString *_applicationDisplayName;
    NSString *_applicationContainerPath;
    NSString *_applicationContainerCloudKitDirectory;
    NSString *_applicationCachesDirectory;
    NSString *_applicationMMCSDirectory;
    NSString *_applicationAssetDbDirectory;
    NSString *_applicationFileStagingDirectory;
    NSString *_applicationFileDownloadDirectory;
    NSString *_applicationRecordCacheDirectory;
    NSString *_containerHardwareIDHash;
    long long _type;
    CKDAccount *_account;
    CKAccountOverrideInfo *_accountInfoOverride;
    CKDMMCS *_MMCS;
    CKTimeLogger *_timeLogger;
    CKDPCSCache *_pcsCache;
    CKDZoneGatekeeper *_foregroundZoneGatekeeper;
    CKDZoneGatekeeper *_backgroundZoneGatekeeper;
    CKDMescalSession *_mescalSession;
    NSMutableDictionary *_fakeErrorsByClassName;
    NSMutableDictionary *_fakeResponseOperationLifetimeByClassName;
    NSMutableDictionary *_fakeResponseOperationResultByClassNameByItemID;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSString *_contextID;
    CKDCachePurger *_cachePurger;
    NSString *_containerEncryptionServiceName;
    NSString *_entitlementSpecifiedPCSServiceName;
    CKDKeyValueDiskCache *_publicIdentitiesDiskCache;
    CKDPublicIdentityLookupService *_foregroundPublicIdentityLookupService;
    CKDPublicIdentityLookupService *_backgroundPublicIdentityLookupService;
    CKDAppContainerIntersectionMetadata *_appContainerIntersectionMetadata;
    CKDApplicationMetadata *_applicationMetadata;
    CKDAppContainerTuple *_appContainerTuple;
    CKDFlowControlManager *_flowControlManager;
    CKDPCSManager *_pcsManager;
    NSObject<OS_dispatch_group> *_proxyPreparationGroup;
}

@property (strong) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property (strong) CKDAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling;
@property (strong, nonatomic) CKDAppContainerIntersectionMetadata *appContainerIntersectionMetadata; // @synthesize appContainerIntersectionMetadata=_appContainerIntersectionMetadata;
@property (strong, nonatomic) CKDAppContainerTuple *appContainerTuple; // @synthesize appContainerTuple=_appContainerTuple;
@property (strong, nonatomic) NSString *applicationAssetDbDirectory; // @synthesize applicationAssetDbDirectory=_applicationAssetDbDirectory;
@property (readonly, nonatomic) NSBundle *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property (readonly, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property (strong, nonatomic) NSString *applicationCachesDirectory; // @synthesize applicationCachesDirectory=_applicationCachesDirectory;
@property (strong, nonatomic) NSString *applicationContainerCloudKitDirectory; // @synthesize applicationContainerCloudKitDirectory=_applicationContainerCloudKitDirectory;
@property (strong, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property (readonly, nonatomic) NSString *applicationDisplayName; // @synthesize applicationDisplayName=_applicationDisplayName;
@property (strong, nonatomic) NSString *applicationFileDownloadDirectory; // @synthesize applicationFileDownloadDirectory=_applicationFileDownloadDirectory;
@property (strong, nonatomic) NSString *applicationFileStagingDirectory; // @synthesize applicationFileStagingDirectory=_applicationFileStagingDirectory;
@property (readonly, nonatomic) NSURL *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
@property (strong, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL applicationIsAppExtension; // @synthesize applicationIsAppExtension=_applicationIsAppExtension;
@property (strong, nonatomic) NSString *applicationMMCSDirectory; // @synthesize applicationMMCSDirectory=_applicationMMCSDirectory;
@property (strong, nonatomic) CKDApplicationMetadata *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property (strong, nonatomic) NSString *applicationRecordCacheDirectory; // @synthesize applicationRecordCacheDirectory=_applicationRecordCacheDirectory;
@property (strong, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property (strong, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString;
@property (strong, nonatomic) CKDPublicIdentityLookupService *backgroundPublicIdentityLookupService; // @synthesize backgroundPublicIdentityLookupService=_backgroundPublicIdentityLookupService;
@property (strong, nonatomic) CKDZoneGatekeeper *backgroundZoneGatekeeper; // @synthesize backgroundZoneGatekeeper=_backgroundZoneGatekeeper;
@property (nonatomic) BOOL bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property (readonly, nonatomic) unsigned long long c2MetricsReportFrequency;
@property (readonly, nonatomic) unsigned long long c2MetricsReportFrequencyBase;
@property (strong, nonatomic) CKDCachePurger *cachePurger; // @synthesize cachePurger=_cachePurger;
@property long long cachedEnvironment; // @synthesize cachedEnvironment=_cachedEnvironment;
@property (readonly, nonatomic) BOOL canAccessAccount;
@property (nonatomic) BOOL canAccessProtectionData;
@property (nonatomic) BOOL canAccessZoneProtectionData;
@property (nonatomic) BOOL canSetDeviceIdentifier;
@property (nonatomic) BOOL captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property (strong, nonatomic) NSString *clientPrefixEntitlement;
@property (nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property (strong, nonatomic) CKDServerConfiguration *config; // @synthesize config=_config;
@property (strong, nonatomic) NSString *containerEncryptionServiceName; // @synthesize containerEncryptionServiceName=_containerEncryptionServiceName;
@property (readonly, nonatomic) NSString *containerHardwareIDHash; // @synthesize containerHardwareIDHash=_containerHardwareIDHash;
@property (readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property (copy) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property (readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property (nonatomic) long long darkWakeEnabled;
@property (readonly, nonatomic) NSString *encryptionServiceName;
@property (strong, nonatomic) NSString *entitlementSpecifiedPCSServiceName; // @synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName;
@property (strong, nonatomic) NSMutableDictionary *fakeErrorsByClassName; // @synthesize fakeErrorsByClassName=_fakeErrorsByClassName;
@property (strong, nonatomic) NSMutableDictionary *fakeResponseOperationLifetimeByClassName; // @synthesize fakeResponseOperationLifetimeByClassName=_fakeResponseOperationLifetimeByClassName;
@property (strong, nonatomic) NSMutableDictionary *fakeResponseOperationResultByClassNameByItemID; // @synthesize fakeResponseOperationResultByClassNameByItemID=_fakeResponseOperationResultByClassNameByItemID;
@property (nonatomic) BOOL finishedAppProxySetup; // @synthesize finishedAppProxySetup=_finishedAppProxySetup;
@property (nonatomic) BOOL finishedProxySetup; // @synthesize finishedProxySetup=_finishedProxySetup;
@property (strong, nonatomic) CKDFlowControlManager *flowControlManager; // @synthesize flowControlManager=_flowControlManager;
@property (nonatomic) BOOL forceEnableReadOnlyManatee; // @synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee;
@property (strong, nonatomic) CKDPublicIdentityLookupService *foregroundPublicIdentityLookupService; // @synthesize foregroundPublicIdentityLookupService=_foregroundPublicIdentityLookupService;
@property (strong, nonatomic) CKDZoneGatekeeper *foregroundZoneGatekeeper; // @synthesize foregroundZoneGatekeeper=_foregroundZoneGatekeeper;
@property (nonatomic) BOOL hasAllowAccessDuringBuddyEntitlement;
@property (nonatomic) BOOL hasAllowCustomAccountsEntitlement;
@property (nonatomic) BOOL hasAllowSetEnvironmentEntitlement;
@property (nonatomic) BOOL hasDataContainer; // @synthesize hasDataContainer=_hasDataContainer;
@property (nonatomic) BOOL hasDisplaysSystemAcceptPromptEntitlement;
@property (nonatomic) BOOL hasLightweightPCSEntitlement;
@property (nonatomic) BOOL hasMasqueradingEntitlement;
@property (nonatomic) BOOL hasOutOfProcessUIEntitlement;
@property (nonatomic) BOOL hasParticipantPIIEntitlement;
@property (nonatomic, setter=setHasSystemServiceEntitlement:) BOOL hasSystemServiceEntitlement;
@property (nonatomic) BOOL hasTCCAuthorization;
@property (nonatomic) BOOL isForClouddInternalUse; // @synthesize isForClouddInternalUse=_isForClouddInternalUse;
@property (nonatomic) BOOL isSiloedContext; // @synthesize isSiloedContext=_isSiloedContext;
@property (strong, nonatomic) CKDMescalSession *mescalSession; // @synthesize mescalSession=_mescalSession;
@property (copy) NSString *orgAdminUserID; // @synthesize orgAdminUserID=_orgAdminUserID;
@property (readonly, nonatomic) CKDPCSCache *pcsCache; // @synthesize pcsCache=_pcsCache;
@property (strong, nonatomic) CKDPCSManager *pcsManager; // @synthesize pcsManager=_pcsManager;
@property (strong, nonatomic) NSHashTable *proxies; // @synthesize proxies=_proxies;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *proxyPreparationGroup; // @synthesize proxyPreparationGroup=_proxyPreparationGroup;
@property (copy) NSURL *publicCloudDBURL; // @synthesize publicCloudDBURL=_publicCloudDBURL;
@property (copy) NSURL *publicCodeServiceURL; // @synthesize publicCodeServiceURL=_publicCodeServiceURL;
@property (copy) NSURL *publicDeviceServiceURL; // @synthesize publicDeviceServiceURL=_publicDeviceServiceURL;
@property (strong, nonatomic) CKDKeyValueDiskCache *publicIdentitiesDiskCache; // @synthesize publicIdentitiesDiskCache=_publicIdentitiesDiskCache;
@property (copy) NSURL *publicMetricsServiceURL; // @synthesize publicMetricsServiceURL=_publicMetricsServiceURL;
@property (copy) NSURL *publicShareServiceURL; // @synthesize publicShareServiceURL=_publicShareServiceURL;
@property (nonatomic) BOOL returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property (nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property (readonly, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property (strong, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) BOOL useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property (nonatomic) BOOL useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property (nonatomic) BOOL wasInitializedWithProxy; // @synthesize wasInitializedWithProxy=_wasInitializedWithProxy;

+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4;
+ (id)applicationCachesPathForBundleID:(id)arg1;
+ (id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id *)arg2 type:(long long *)arg3;
+ (id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1;
+ (id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1 unitTestingAccountInfoProvider:(id)arg2;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4;
+ (id)sharedContexts;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_cancelAllLongLivedOperations;
- (BOOL)_cloudKitEnabledForCurrentClient;
- (id)_dataclassNameForContainerIdentifier:(id)arg1;
- (void)_determineHardwareInfo;
- (id)_issueSandboxExtensionForPath:(id)arg1 error:(id *)arg2;
- (void)_loadApplicationContainerPathAndType;
- (void)_reloadAccount:(BOOL)arg1;
- (BOOL)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id *)arg2 error:(id *)arg3;
- (void)addClientProxy:(id)arg1;
- (id)assetDirectoryContext;
- (void)checkAccountAccessWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearAssetCache;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(long long)arg2;
- (void)clearContextFromMetadataCache;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (id)createAppContainerTuple;
- (void)dealloc;
- (id)description;
- (void)dropMMCS;
- (void)finishSetupWithClientProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
- (void)performRequest:(id)arg1;
- (double)publicIdentitiesExpirationTimeout;
- (void)removeClientProxy:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (BOOL)setupAssetTransfersWithClientProxy:(id)arg1 error:(id *)arg2;
- (BOOL)setupMMCSWrapperWithError:(id *)arg1;
- (void)showAssetCache;
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;
- (void)showUserNotification:(void *)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startSetupWithClientProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tearDownAssetTransfers;

@end

