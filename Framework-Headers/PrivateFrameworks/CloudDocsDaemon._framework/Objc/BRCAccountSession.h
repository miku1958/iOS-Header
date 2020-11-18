//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCCloudDocsAppsObserver-Protocol.h>

@class BRCAccountWaitOperation, BRCApplyScheduler, BRCContainerScheduler, BRCDeadlineScheduler, BRCDiskSpaceReclaimer, BRCFSDownloader, BRCFSEventsMonitor, BRCFSReader, BRCFSUploader, BRCFSWriter, BRCGlobalProgress, BRCNotificationManager, BRCRelativePath, BRCServerPersistedState, BRCStageRegistry, BRCThrottle, BRCUserNotification, CDSession, NSHashTable, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL, PQLConnection;
@protocol BRCFileCoordinationReading, BRCFileCoordinationWriting, OS_dispatch_queue, OS_dispatch_source;

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver>
{
    NSMutableDictionary *_syncContexts;
    BRCDeadlineScheduler *_defaultScheduler;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    int _cloudDocsFD;
    CDUnknownBlockType _dbProfilingHook;
    NSString *_databaseID;
    NSHashTable *_miscOperations;
    PQLConnection *_clientDB;
    PQLConnection *_serverDB;
    NSMutableDictionary *_clientState;
    BRCServerPersistedState *_serverState;
    NSString *_accountID;
    NSMutableSet *_xpcClients;
    BOOL _resumed;
    struct _opaque_pthread_mutex_t _containersCreationLock;
    struct _opaque_pthread_rwlock_t _containersLock;
    NSMutableDictionary *_serverZoneByZoneRowID;
    NSMutableDictionary *_privateLocalContainersByID;
    NSMutableDictionary *_privateServerZonesByID;
    NSMutableDictionary *_sharedLocalContainersByMangledID;
    NSMutableDictionary *_sharedServerZonesByMangledID;
    BRCGlobalProgress *_globalProgress;
    unsigned long long _lastDiskSpaceCheckTime;
    unsigned long long _availableDiskSpace;
    BOOL _isGreedy;
    struct br_pacer_t *_reschedulePendingDiskItemsPacer;
    struct br_pacer_t *_updateDiskSpacePacer;
    NSNumber *_accountSize;
    BOOL _accountIsReady;
    BRCAccountWaitOperation *_accountWaitOperation;
    BOOL _isCancelled;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    NSString *_rootDirPath;
    NSString *_ubiquityTokenSalt;
    BRCContainerScheduler *_containerScheduler;
    BRCApplyScheduler *_applyScheduler;
    BRCFSEventsMonitor *_fsEventsMonitor;
    BRCFSReader<BRCFileCoordinationReading> *_fsReader;
    BRCFSUploader *_fsUploader;
    BRCFSDownloader *_fsDownloader;
    BRCFSWriter<BRCFileCoordinationWriting> *_fsWriter;
    BRCUserNotification *_userNotification;
    BRCNotificationManager *_notificationManager;
    BRCStageRegistry *_stageRegistry;
    BRCDiskSpaceReclaimer *_diskReclaimer;
    CDSession *_coreDuetSession;
    BRCThrottle *_containerScanThrottle;
    BRCThrottle *_containerResetThrottle;
    BRCThrottle *_aliasRemovalThrottle;
    BRCThrottle *_lostItemThrottle;
    BRCThrottle *_operationFailureThrottle;
    BRCThrottle *_syncAppContainerThrottle;
}

@property (readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) BRCAccountWaitOperation *accountWaitOperation;
@property (readonly, nonatomic) BRCThrottle *aliasRemovalThrottle; // @synthesize aliasRemovalThrottle=_aliasRemovalThrottle;
@property (strong, nonatomic) NSString *appSupportDirPath; // @synthesize appSupportDirPath=_appSupportDirPath;
@property (readonly, nonatomic) BRCApplyScheduler *applyScheduler; // @synthesize applyScheduler=_applyScheduler;
@property (readonly, nonatomic) unsigned long long availableDiskSpace;
@property (strong, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property (readonly, nonatomic) PQLConnection *clientDB;
@property (readonly, nonatomic) NSMutableDictionary *clientState;
@property (readonly, nonatomic) BRCThrottle *containerResetThrottle; // @synthesize containerResetThrottle=_containerResetThrottle;
@property (readonly, nonatomic) BRCThrottle *containerScanThrottle; // @synthesize containerScanThrottle=_containerScanThrottle;
@property (readonly, nonatomic) BRCContainerScheduler *containerScheduler; // @synthesize containerScheduler=_containerScheduler;
@property (readonly, nonatomic) CDSession *coreDuetSession; // @synthesize coreDuetSession=_coreDuetSession;
@property (readonly, nonatomic) NSString *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BRCDeadlineScheduler *defaultScheduler; // @synthesize defaultScheduler=_defaultScheduler;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCDiskSpaceReclaimer *diskReclaimer; // @synthesize diskReclaimer=_diskReclaimer;
@property (readonly, nonatomic) BRCFSDownloader *fsDownloader; // @synthesize fsDownloader=_fsDownloader;
@property (readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor; // @synthesize fsEventsMonitor=_fsEventsMonitor;
@property (readonly, nonatomic) BRCFSReader<BRCFileCoordinationReading> *fsReader; // @synthesize fsReader=_fsReader;
@property (readonly, nonatomic) BRCFSUploader *fsUploader; // @synthesize fsUploader=_fsUploader;
@property (readonly, nonatomic) BRCFSWriter<BRCFileCoordinationWriting> *fsWriter; // @synthesize fsWriter=_fsWriter;
@property (readonly, nonatomic) BRCGlobalProgress *globalProgress; // @synthesize globalProgress=_globalProgress;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BRCThrottle *lostItemThrottle; // @synthesize lostItemThrottle=_lostItemThrottle;
@property (readonly, nonatomic) BRCNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property (readonly, nonatomic) BRCThrottle *operationFailureThrottle; // @synthesize operationFailureThrottle=_operationFailureThrottle;
@property (readonly, nonatomic) BRCRelativePath *root;
@property (strong, nonatomic) NSString *rootDirPath; // @synthesize rootDirPath=_rootDirPath;
@property (readonly, nonatomic) PQLConnection *serverDB;
@property (readonly, nonatomic) BRCServerPersistedState *serverState;
@property (readonly, nonatomic) BRCStageRegistry *stageRegistry; // @synthesize stageRegistry=_stageRegistry;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCThrottle *syncAppContainerThrottle; // @synthesize syncAppContainerThrottle=_syncAppContainerThrottle;
@property (readonly, nonatomic) NSString *ubiquityTokenSalt; // @synthesize ubiquityTokenSalt=_ubiquityTokenSalt;
@property (readonly, nonatomic) BRCUserNotification *userNotification; // @synthesize userNotification=_userNotification;

+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_attachDatabase:(id)arg1 toConnection:(id)arg2 error:(id *)arg3;
- (BOOL)_checkIntegrity:(id)arg1 serverTruth:(BOOL)arg2 error:(id *)arg3;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(BOOL)arg2;
- (BOOL)_createLocalContainer:(id)arg1 ownerName:(id)arg2;
- (BOOL)_createPrivateLocalContainer:(id)arg1;
- (BOOL)_createSharedLocalContainer:(id)arg1 ownerName:(id)arg2;
- (BOOL)_deleteLocalContainer:(id)arg1;
- (BOOL)_dumpContainer:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_dumpContainerBlockedState:(id)arg1 toContext:(id)arg2;
- (BOOL)_dumpContainerStatus:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_loadContainersFromDisk;
- (id)_loadedContainers;
- (id)_localContainersMatchingSearchString:(id)arg1 db:(id)arg2;
- (BOOL)_openClientTruthConnectionWithError:(id *)arg1;
- (BOOL)_openServerTruthConnectionWithError:(id *)arg1;
- (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject *)arg2;
- (BOOL)_setupBackupDetector:(struct backup_detector *)arg1 error:(id *)arg2;
- (BOOL)_setupConnection:(id)arg1 databaseName:(id)arg2 error:(id *)arg3;
- (void)_setupSharedPackageExtensionsPlist;
- (void)_setupThrottles;
- (void)_showiCloudDriveAppUpSellDialogIfNeeded;
- (void)_startWatcher;
- (BOOL)_stepBackupDetector:(struct backup_detector)arg1 newState:(struct backup_detector *)arg2 error:(id *)arg3;
- (id)_unloadContainers;
- (unsigned long long)accountSize;
- (void)accountSizeDidChange;
- (void)addMiscOperation:(id)arg1;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1;
- (unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1 schedulingPendingDiskItemsIfNeeded:(BOOL)arg2;
- (BOOL)backupDatabaseToURL:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)bouncedItemsEnumerator;
- (void)close;
- (void)closeAndResetLocalState;
- (BOOL)closeDBWithError:(id *)arg1;
- (void)closeXPCClientsSync;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)containerByMangledID:(id)arg1;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)createOwnerKeyForName:(id)arg1;
- (id)createPrivateContainerIfNeeded:(id)arg1;
- (BOOL)createPrivateContainerOnDisk:(id)arg1 createdRoot:(BOOL *)arg2 createdDocuments:(BOOL *)arg3;
- (BOOL)createServerZone:(id)arg1;
- (id)createSharedContainerIfNeeded:(id)arg1 ownerName:(id)arg2;
- (BOOL)createSharedContainerOnDiskWithMangledID:(id)arg1 createdRoot:(BOOL *)arg2;
- (void)dealloc;
- (id)defaultSyncContext;
- (BOOL)deleteServerZone:(id)arg1;
- (void)destroyLocalData;
- (void)destroyLocalDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)destroySharedContainer:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (BOOL)dumpDatabaseToFileHandle:(id)arg1 containerID:(id)arg2 error:(id *)arg3;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (BOOL)dumpStatusToFileHandle:(id)arg1 containerID:(id)arg2 error:(id *)arg3;
- (void)dumpXPCClientsToContext:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (void)enumeratePrivateContainers:(CDUnknownBlockType)arg1;
- (void)enumerateServerZones:(CDUnknownBlockType)arg1;
- (void)enumerateSharedContainers:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (struct PQLResultSet *)itemsNeedingIndexingEnumeratorWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2;
- (id)localContainersMatchingSearchString:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (void)markAccountMigrationComplete;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 error:(id *)arg2;
- (id)newPrivateLocalContainerFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newSharedLocalContainerFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (BOOL)openDBWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (id)ownerIdentityForKey:(id)arg1;
- (id)ownerIdentityForName:(id)arg1 db:(id)arg2;
- (id)ownerKeyForName:(id)arg1 db:(id)arg2;
- (id)ownerNameForKey:(id)arg1 db:(id)arg2;
- (id)pendingDownloadItemWithDocumentID:(unsigned int)arg1;
- (void)preventDatabaseFromBeingReused;
- (id)privateContainerByID:(id)arg1;
- (id)privateContainerByMangledID:(id)arg1;
- (id)privateLocalContainerByID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)privateLocalContainersEnumerator:(id)arg1;
- (id)privateServerZoneByID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)privateServerZonesEnumerator:(id)arg1;
- (void)registerClient:(id)arg1;
- (void)resume;
- (BOOL)saveLocalContainerToDB:(id)arg1;
- (BOOL)saveServerZoneToDB:(id)arg1;
- (id)serverZoneByRowID:(id)arg1;
- (void)setOwnerIdentity:(id)arg1 forName:(id)arg2;
- (void)setupDatabase;
- (id)sharedContainerByMangledID:(id)arg1;
- (struct PQLResultSet *)sharedLocalContainersEnumerator:(id)arg1;
- (id)sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet *)sharedServerZonesEnumerator:(id)arg1;
- (id)sharedSyncContext;
- (id)singleLocalContainerMatchingSearchString:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (struct PQLResultSet *)stagedItemsEnumerator;
- (void)stopDBWatcher;
- (id)syncContextForContextIdentifier:(id)arg1 isShared:(BOOL)arg2;
- (id)syncContextForZone:(id)arg1;
- (id)syncContextForZone:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)unregisterClient:(id)arg1;
- (void)userDefaultsChanged;
- (BOOL)validateDatabase:(id)arg1 serverTruth:(BOOL)arg2 error:(id *)arg3;

@end

