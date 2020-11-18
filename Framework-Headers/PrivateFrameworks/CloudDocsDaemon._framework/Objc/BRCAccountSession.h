//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCCloudDocsAppsObserver-Protocol.h>

@class BRCAccountWaitOperation, BRCAnalyticsReporter, BRCApplyScheduler, BRCClientState, BRCContainerScheduler, BRCDeadlineScheduler, BRCDiskSpaceReclaimer, BRCDownloadTrackers, BRCFSDownloader, BRCFSReader, BRCFSUploader, BRCFSWriter, BRCFairScheduler, BRCGlobalProgress, BRCItemTransmogrifier, BRCNotificationManager, BRCPQLConnection, BRCRecentsEnumerator, BRCServerPersistedState, BRCStageRegistry, BRCSyncUpScheduler, BRCThrottle, BRCUserNotification, BRCVolume, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSURL, br_pacer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver>
{
    NSMutableDictionary *_syncContexts;
    BRCDeadlineScheduler *_defaultScheduler;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    NSObject<OS_dispatch_queue> *_dbCorruptionQueue;
    NSObject<OS_dispatch_queue> *_clientTruthWorkloop;
    NSObject<OS_dispatch_queue> *_serverTruthWorkloop;
    NSObject<OS_dispatch_queue> *_readOnlyWorkloop;
    int _cloudDocsFD;
    CDUnknownBlockType _dbProfilingHook;
    NSString *_databaseID;
    NSHashTable *_miscOperations;
    BRCPQLConnection *_clientDB;
    BRCPQLConnection *_serverDB;
    BRCPQLConnection *_readOnlyDB;
    BRCPQLConnection *_expensiveReadOnlyDB;
    BRCClientState *_clientState;
    BRCServerPersistedState *_serverState;
    struct brc_mutex _zonesLock;
    NSMutableDictionary *_libraryRowIDsByMangledID;
    NSMutableDictionary *_appLibrariesByRowID;
    NSMutableDictionary *_serverZonesByZoneRowID;
    NSMutableDictionary *_sharedServerZonesByMangledID;
    NSMutableDictionary *_sharedClientZonesByMangledID;
    NSMutableDictionary *_privateServerZonesByID;
    NSMutableDictionary *_privateClientZonesByID;
    NSString *_accountID;
    NSMutableSet *_xpcClients;
    BOOL _resumed;
    BRCGlobalProgress *_globalProgress;
    unsigned long long _lastDiskSpaceCheckTime;
    unsigned long long _availableDiskSpace;
    unsigned long long _totalDiskSpace;
    BOOL _isGreedy;
    struct brc_mutex _zonesCreationLock;
    br_pacer *_reschedulePendingDiskItemsPacer;
    br_pacer *_updateDiskSpacePacer;
    BOOL _accountIsReady;
    BRCAccountWaitOperation *_accountWaitOperation;
    BOOL _isDBOpened;
    NSMutableDictionary *_rootsByFolderType;
    NSMutableDictionary *_fsEventsMonitors;
    BOOL _isCancelled;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    NSString *_ubiquityTokenSalt;
    BRCContainerScheduler *_containerScheduler;
    BRCApplyScheduler *_applyScheduler;
    BRCFairScheduler *_fairClientDBScheduler;
    BRCVolume *_volume;
    BRCFSReader *_fsReader;
    BRCFSUploader *_fsUploader;
    BRCFSDownloader *_fsDownloader;
    BRCSyncUpScheduler *_syncUpScheduler;
    BRCFSWriter *_fsWriter;
    BRCDownloadTrackers *_downloadTrackers;
    BRCUserNotification *_userNotification;
    BRCNotificationManager *_notificationManager;
    BRCStageRegistry *_stageRegistry;
    BRCDiskSpaceReclaimer *_diskReclaimer;
    BRCRecentsEnumerator *_recentsEnumerator;
    BRCThrottle *_appLibraryScanThrottle;
    BRCThrottle *_appLibraryResetThrottle;
    BRCThrottle *_sharedAppLibraryResetThrottle;
    BRCThrottle *_appLibraryAliasRemovalThrottle;
    BRCThrottle *_lostItemThrottle;
    BRCThrottle *_operationFailureThrottle;
    BRCThrottle *_syncClientZoneThrottle;
    BRCThrottle *_syncClientZoneErrorThrottle;
    NSObject<OS_dispatch_queue> *_resetQueue;
    BRCItemTransmogrifier *_itemTransmogrifier;
    BRCAnalyticsReporter *_analyticsReporter;
}

@property (readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) BRCAccountWaitOperation *accountWaitOperation;
@property (readonly, nonatomic) BRCAnalyticsReporter *analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
@property (readonly, nonatomic) BRCThrottle *appLibraryAliasRemovalThrottle; // @synthesize appLibraryAliasRemovalThrottle=_appLibraryAliasRemovalThrottle;
@property (readonly, nonatomic) BRCThrottle *appLibraryResetThrottle; // @synthesize appLibraryResetThrottle=_appLibraryResetThrottle;
@property (readonly, nonatomic) BRCThrottle *appLibraryScanThrottle; // @synthesize appLibraryScanThrottle=_appLibraryScanThrottle;
@property (strong, nonatomic) NSString *appSupportDirPath; // @synthesize appSupportDirPath=_appSupportDirPath;
@property (readonly, nonatomic) BRCApplyScheduler *applyScheduler; // @synthesize applyScheduler=_applyScheduler;
@property (readonly, nonatomic) unsigned long long availableDiskSpace;
@property (strong, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property (readonly, nonatomic) BRCPQLConnection *clientDB;
@property (readonly, nonatomic) BRCClientState *clientState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientTruthWorkloop; // @dynamic clientTruthWorkloop;
@property (readonly, nonatomic) BRCContainerScheduler *containerScheduler; // @synthesize containerScheduler=_containerScheduler;
@property (readonly, nonatomic) unsigned long long databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BRCDeadlineScheduler *defaultScheduler; // @synthesize defaultScheduler=_defaultScheduler;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCDiskSpaceReclaimer *diskReclaimer; // @synthesize diskReclaimer=_diskReclaimer;
@property (readonly, nonatomic) BRCDownloadTrackers *downloadTrackers; // @synthesize downloadTrackers=_downloadTrackers;
@property (readonly, nonatomic) BRCPQLConnection *expensiveReadOnlyDB;
@property (readonly, nonatomic) BRCFairScheduler *fairClientDBScheduler; // @synthesize fairClientDBScheduler=_fairClientDBScheduler;
@property (readonly, nonatomic) BRCFSDownloader *fsDownloader; // @synthesize fsDownloader=_fsDownloader;
@property (readonly, nonatomic) BRCFSReader *fsReader; // @synthesize fsReader=_fsReader;
@property (readonly, nonatomic) BRCFSUploader *fsUploader; // @synthesize fsUploader=_fsUploader;
@property (readonly, nonatomic) BRCFSWriter *fsWriter; // @synthesize fsWriter=_fsWriter;
@property (readonly, nonatomic) BRCGlobalProgress *globalProgress; // @synthesize globalProgress=_globalProgress;
@property (readonly, nonatomic) BOOL hasOptimizeStorageEnabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BRCItemTransmogrifier *itemTransmogrifier; // @synthesize itemTransmogrifier=_itemTransmogrifier;
@property (readonly, nonatomic) BRCThrottle *lostItemThrottle; // @synthesize lostItemThrottle=_lostItemThrottle;
@property (readonly, nonatomic) BRCNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property (readonly, nonatomic) BRCThrottle *operationFailureThrottle; // @synthesize operationFailureThrottle=_operationFailureThrottle;
@property (readonly, nonatomic) BRCPQLConnection *readOnlyDB;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *readOnlyWorkloop; // @dynamic readOnlyWorkloop;
@property (readonly, nonatomic) BRCRecentsEnumerator *recentsEnumerator; // @synthesize recentsEnumerator=_recentsEnumerator;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resetQueue; // @synthesize resetQueue=_resetQueue;
@property (readonly, nonatomic) BRCPQLConnection *serverDB;
@property (readonly, nonatomic) BRCServerPersistedState *serverState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverTruthWorkloop; // @dynamic serverTruthWorkloop;
@property (readonly, nonatomic) BRCThrottle *sharedAppLibraryResetThrottle; // @synthesize sharedAppLibraryResetThrottle=_sharedAppLibraryResetThrottle;
@property (readonly, nonatomic) BRCStageRegistry *stageRegistry; // @synthesize stageRegistry=_stageRegistry;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCThrottle *syncClientZoneErrorThrottle; // @synthesize syncClientZoneErrorThrottle=_syncClientZoneErrorThrottle;
@property (readonly, nonatomic) BRCThrottle *syncClientZoneThrottle; // @synthesize syncClientZoneThrottle=_syncClientZoneThrottle;
@property (readonly, nonatomic) BRCSyncUpScheduler *syncUpScheduler; // @synthesize syncUpScheduler=_syncUpScheduler;
@property (readonly, nonatomic) NSString *ubiquityTokenSalt; // @synthesize ubiquityTokenSalt=_ubiquityTokenSalt;
@property (readonly, nonatomic) BRCUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property (readonly, nonatomic) BRCVolume *volume; // @synthesize volume=_volume;

+ (BOOL)_checkIntegrity:(id)arg1 serverTruth:(BOOL)arg2 session:(id)arg3 skipBackupDetection:(BOOL)arg4 error:(id *)arg5;
+ (BOOL)_openConnection:(id)arg1 databaseName:(id)arg2 baseURL:(id)arg3 readonly:(BOOL)arg4 error:(id *)arg5;
+ (BOOL)_openConnection:(id)arg1 serverTruth:(BOOL)arg2 databaseName:(id)arg3 baseURL:(id)arg4 initialVersion:(unsigned int *)arg5 lastCurrentVersion:(unsigned int *)arg6 error:(id *)arg7;
+ (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject *)arg2;
+ (BOOL)_registerStaticDBFunctions:(id)arg1 error:(id *)arg2;
+ (BOOL)_validateDatabase:(id)arg1 baseURL:(id)arg2 session:(id)arg3 serverTruth:(BOOL)arg4 initialVersion:(unsigned int)arg5 lastCurrentVersion:(unsigned int)arg6 error:(id *)arg7;
+ (BOOL)openAndValidateDatabase:(id)arg1 serverTruth:(BOOL)arg2 session:(id)arg3 baseURL:(id)arg4 skipBackupDetection:(BOOL)arg5 error:(id *)arg6;
+ (id)sessionForBackingUpDatabasesAtURL:(id)arg1;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
+ (BOOL)upgradeOfflineDB:(id)arg1 serverTruth:(BOOL)arg2 session:(id)arg3 error:(id *)arg4;
+ (id)userIdentityForKey:(id)arg1 db:(id)arg2;
+ (id)userIdentityForName:(id)arg1 db:(id)arg2;
- (void).cxx_destruct;
- (BOOL)PCSMigrationComplete;
- (id)__getOrCreateAppLibrary:(id)arg1 rowID:(id)arg2 createOnDisk:(BOOL)arg3 alreadyExists:(BOOL *)arg4 withClientZone:(id)arg5 createCZMMoved:(BOOL)arg6;
- (id)__getOrCreateClientZone:(id)arg1 withServerZone:(id)arg2 alreadyExists:(BOOL *)arg3;
- (id)__getOrCreateServerZone:(id)arg1;
- (void)__registerServerZone:(id)arg1 clientZone:(id)arg2 appLibrary:(id)arg3 isShared:(BOOL)arg4;
- (struct PQLResultSet *)_appLibrariesEnumerator:(id)arg1;
- (id)_appLibrariesMatchingSearchString:(id)arg1;
- (void)_clearNeedsUpgradeErrors:(id)arg1 brVersion:(id)arg2;
- (id)_clientZonesMatchingSearchString:(id)arg1;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(BOOL)arg2;
- (BOOL)_createAppLibrary:(id)arg1;
- (BOOL)_createAppLibraryRootIfNeededAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_createAppLibraryRootsIfNeededWithError:(id *)arg1;
- (BOOL)_createClientZone:(id)arg1;
- (BOOL)_createPrivateAppLibrary:(id)arg1;
- (BOOL)_createSharedAppLibrary:(id)arg1;
- (BOOL)_deleteAppLibrary:(id)arg1;
- (BOOL)_deleteClientZone:(id)arg1;
- (BOOL)_dumpClientZone:(id)arg1 toContext:(id)arg2 includeAllItems:(BOOL)arg3 error:(id *)arg4;
- (void)_dumpClientZoneBlockedState:(id)arg1 toContext:(id)arg2;
- (BOOL)_dumpClientZoneStatus:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_enumerateAccountHandlerSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (void)_enumerateAppLibraryRowIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)_finishClientTruthConnectionSetupWithError:(id *)arg1;
- (BOOL)_finishServerTruthConnectionSetupWithError:(id *)arg1;
- (id)_getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 creationFlags:(unsigned int *)arg2;
- (BOOL)_getRootPathXattrValue:(id *)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (void)_loadClientZonesFromDisk;
- (id)_old_privateAppLibraryByZoneName:(id)arg1 db:(id)arg2;
- (BOOL)_openConnection:(id)arg1 databaseName:(id)arg2 readonly:(BOOL)arg3 error:(id *)arg4;
- (id)_privateClientZoneByID:(id)arg1 db:(id)arg2;
- (id)_privateClientZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)_privateClientZonesEnumerator:(id)arg1;
- (id)_privateServerZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)_privateServerZonesEnumerator:(id)arg1;
- (void)_recreateSymlinkIfNecessaryForDocumentsPath:(id)arg1 folderName:(id)arg2 destinationPath:(id)arg3;
- (BOOL)_recursivelyPrepareFolderForLogOutAtURL:(id)arg1 pruneEmptyFolders:(BOOL)arg2 pruneEmptyTopLevelFolder:(BOOL)arg3 maxDepth:(unsigned long long)arg4;
- (BOOL)_registerDynamicDBFunctions:(id)arg1 error:(id *)arg2;
- (id)_reserveRowIDForLibrary:(id)arg1;
- (void)_resolvePathInMobileDocsRoot:(id)arg1 appLibrary:(id *)arg2;
- (BOOL)_setRootPathXattrValue:(id)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (void)_setUserIdentity:(id)arg1 forName:(id)arg2;
- (BOOL)_setupBackupDetector:(struct backup_detector *)arg1 error:(id *)arg2;
- (BOOL)_setupConnection:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
- (void)_setupSharedPackageExtensionsPlist;
- (void)_setupThrottles;
- (struct PQLResultSet *)_sharedClientZonesEnumerator:(id)arg1;
- (id)_sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet *)_sharedServerZonesEnumerator:(id)arg1;
- (BOOL)_shouldPrivateAppLibraryBeCZMMoved:(id)arg1;
- (void)_startWatcher;
- (BOOL)_stepBackupDetector:(struct backup_detector)arg1 newState:(struct backup_detector *)arg2 error:(id *)arg3;
- (id)_syncContextForContextIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 isShared:(BOOL)arg3 createIfNeeded:(BOOL)arg4;
- (id)_unloadClientZones;
- (unsigned long long)accountSize;
- (id)accountStatisticsWithDB:(id)arg1;
- (void)addMiscOperation:(id)arg1;
- (void)addOfflineAppLibrary:(id)arg1;
- (void)addOfflineClientZone:(id)arg1;
- (void)addOfflineServerZone:(id)arg1;
- (id)allSyncContexts;
- (id)appLibraries;
- (id)appLibrariesMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)appLibraryByID:(id)arg1;
- (id)appLibraryByMangledID:(id)arg1;
- (id)appLibraryByRowID:(id)arg1;
- (BOOL)applySyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 isInitialCreation:(BOOL)arg3 error:(id *)arg4;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1;
- (unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1 schedulingPendingDiskItemsIfNeeded:(BOOL)arg2;
- (BOOL)backupDatabaseToURL:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)bouncedItemsEnumerator;
- (id)clientZoneByMangledID:(id)arg1;
- (id)clientZones;
- (id)clientZonesMatchingSearchString:(id)arg1 error:(id *)arg2;
- (void)close;
- (void)closeAndResetLocalState;
- (void)closeDBs;
- (void)closeXPCClientsSync;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)cloudDocsClientZone;
- (void)computeDocumentEvictableSizesForLowTime:(unsigned long long)arg1 medTime:(unsigned long long)arg2 highTime:(unsigned long long)arg3 lowSize:(unsigned long long)arg4 medSize:(unsigned long long)arg5 highSize:(unsigned long long)arg6 minRowID:(unsigned long long)arg7 minSize:(unsigned long long)arg8 batchSize:(unsigned long long)arg9 injection:(struct NSObject *)arg10 db:(id)arg11 reply:(CDUnknownBlockType)arg12;
- (void)computeTotalEvictableSizeWithAccessLowTimeDelta:(double)arg1 medTimeDelta:(double)arg2 highTimeDelta:(double)arg3 db:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (unsigned long long)computeTotalLiveDocumentSizeWithDb:(id)arg1;
- (BOOL)createAppLibrariesIfNeededWithError:(id *)arg1;
- (BOOL)createAppLibraryOnDisk:(id)arg1 createdRoot:(BOOL *)arg2 createdDocuments:(BOOL *)arg3 rootFileID:(unsigned long long *)arg4;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)createFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)createRootForSyncedFolderType:(unsigned long long)arg1;
- (BOOL)createServerZone:(id)arg1;
- (id)createUserKeyForName:(id)arg1;
- (void)dbBecameCorrupted;
- (void)dealloc;
- (id)defaultSyncContext;
- (BOOL)deleteServerZone:(id)arg1;
- (void)destroyLocalData;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(BOOL)arg1 pristineContainerIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)destroyLocalDataWithPristineContainerIDs:(id)arg1;
- (void)destroySharedClientZone:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (BOOL)disableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(BOOL)arg2 error:(id *)arg3;
- (BOOL)dumpDatabaseToFileHandle:(id)arg1 zoneName:(id)arg2 includeAllItems:(BOOL)arg3 tracker:(id)arg4 error:(id *)arg5;
- (BOOL)dumpFileCoordinationInfoToFileHandle:(id)arg1 error:(id *)arg2;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (BOOL)dumpStatusToFileHandle:(id)arg1 zoneName:(id)arg2 tracker:(id)arg3 error:(id *)arg4;
- (void)dumpXPCClientsToContext:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (BOOL)enableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(BOOL)arg2 error:(id *)arg3;
- (void)enumerateAppLibraries:(CDUnknownBlockType)arg1;
- (void)enumerateClientZones:(CDUnknownBlockType)arg1;
- (void)enumerateFileTypesWithFilterBlock:(CDUnknownBlockType)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsWithShareIDUnderParent:(id)arg1 db:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumeratePrivateClientZones:(CDUnknownBlockType)arg1;
- (void)enumeratePrivateServerZones:(CDUnknownBlockType)arg1;
- (void)enumerateServerZones:(CDUnknownBlockType)arg1;
- (void)enumerateSharedClientZones:(CDUnknownBlockType)arg1;
- (void)enumerateSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (id)fallbackAppLibraryForClientZone:(id)arg1 extension:(id)arg2;
- (id)fetchAccountWaitOperationWithAccountReady:(BOOL *)arg1;
- (struct PQLResultSet *)foldersNeedingTransmogrifyEnumerator;
- (id)fsEventsMonitorForAppLibraryID:(id)arg1;
- (id)fsEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitors;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 appLibraryExists:(BOOL *)arg2;
- (id)getOrCreateSharedZones:(id)arg1;
- (id)getOrReserveLibraryRowIDForLibrary:(id)arg1;
- (BOOL)globalID:(id)arg1 isStrictChildOfGlobalID:(id)arg2;
- (id)globalItemByDocumentID:(unsigned int)arg1;
- (id)globalItemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)globalItemByFileID:(unsigned long long)arg1;
- (id)globalItemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (BOOL)hasFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (BOOL)hasRootForSyncedFolderType:(unsigned long long)arg1;
- (id)init;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (BOOL)initializeOfflineDatabaseWhileUpgrading:(BOOL)arg1 error:(id *)arg2;
- (id)itemByItemGlobalID:(id)arg1;
- (id)itemByItemGlobalID:(id)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (struct PQLResultSet *)itemsNeedingIndexingEnumeratorFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (void)learnOwnerIdentityForShare:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)localAliasForSharedItem:(id)arg1 inZone:(id)arg2;
- (void)markAccountMigrationComplete;
- (id)newAppLibraryFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
- (id)newLocalItemFromPQLResultSet:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (id)newPrivateClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newServerItemFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newSharedClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (BOOL)openAndValidateDatabase:(id)arg1 serverTruth:(BOOL)arg2 error:(id *)arg3;
- (BOOL)openDBWithError:(id *)arg1;
- (void)openForDumping;
- (BOOL)openWithError:(id *)arg1;
- (id)pendingDownloadItemWithDocumentID:(unsigned int)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whileRemovingPrivateClientZone:(id)arg2;
- (void)preventDatabaseFromBeingReused;
- (id)privateClientZoneByID:(id)arg1;
- (id)privateServerZoneByID:(id)arg1;
- (void)recomputeAppSyncBlockStateForPrivateClientZone:(id)arg1;
- (void)recreateDesktopSymlinksIfNecessary;
- (BOOL)registerClient:(id)arg1;
- (void)removeDesktopSymlink:(BOOL)arg1 andDocumentsSymlink:(BOOL)arg2;
- (void)removeFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (void)removeRootForSyncedFolderType:(unsigned long long)arg1;
- (void)resetThrottles;
- (int)resolvePathAdditionalMetadata:(id)arg1 appLibrary:(id *)arg2;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(BOOL)arg2 allowResolveInPkg:(BOOL)arg3 errcode:(int *)arg4;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(BOOL)arg2 errcode:(int *)arg3;
- (void)resume;
- (id)rootForSyncedFolderType:(unsigned long long)arg1;
- (id)roots;
- (BOOL)saveAppLibraryToDB:(id)arg1;
- (BOOL)saveClientZoneToDB:(id)arg1;
- (BOOL)saveServerZoneToDB:(id)arg1;
- (void)scheduleZoneMovesToCloudDocs:(id)arg1;
- (id)serverAliasItemForSharedItem:(id)arg1;
- (id)serverAliasItemForSharedItem:(id)arg1 db:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2 db:(id)arg3;
- (id)serverZoneByMangledID:(id)arg1;
- (id)serverZoneByName:(id)arg1 ownerName:(id)arg2;
- (id)serverZoneByRowID:(id)arg1;
- (void)setFSEventsMonitor:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setNeedsPCSMigration:(BOOL)arg1;
- (void)setOptimizeStorageEnabled:(BOOL)arg1;
- (void)setRoot:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setupDatabase;
- (id)sharedClientZoneByMangledID:(id)arg1;
- (id)sharedServerZoneByMangledID:(id)arg1;
- (id)sharedSyncContext;
- (BOOL)shouldPathBeDesktopSymlink:(id)arg1;
- (BOOL)shouldPerformPCSMigration;
- (id)singleAppLibraryMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)singleClientZoneMatchingSearchString:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)stagedItemsEnumerator;
- (void)startDownloadsForGreediness;
- (void)stopDBWatcher;
- (id)syncContextForMangledID:(id)arg1;
- (id)syncContextForMangledID:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)syncContextForMangledID:(id)arg1 metadata:(BOOL)arg2;
- (id)syncContextForMangledID:(id)arg1 metadata:(BOOL)arg2 createIfNeeded:(BOOL)arg3;
- (unsigned long long)syncedFolderTypeForURL:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)userDefaultsChanged;
- (id)userIdentityForKey:(id)arg1;
- (id)userKeyForName:(id)arg1 db:(id)arg2;
- (id)userNameForKey:(id)arg1 db:(id)arg2;
- (id)zoneHealthSyncContext;

@end

