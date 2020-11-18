//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCCloudDocsAppsObserver-Protocol.h>
#import <CloudDocsDaemon/BRCIndexingArbiter-Protocol.h>
#import <CloudDocsDaemon/BRCPQLDBCorruptionHandler-Protocol.h>

@class BRCAccountWaitOperation, BRCApplicationShortcutService, BRCApplyScheduler, BRCClientState, BRCContainerScheduler, BRCDeadlineScheduler, BRCDiskSpaceReclaimer, BRCFSDownloader, BRCFSReader, BRCFSUploader, BRCFSWriter, BRCGlobalProgress, BRCNotificationManager, BRCPQLConnection, BRCServerPersistedState, BRCSpotlightIndexer, BRCStageRegistry, BRCThrottle, BRCUserNotification, BRCVolume, CDSession, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSURL, br_pacer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCAccountSession : NSObject <BRCPQLDBCorruptionHandler, BRCCloudDocsAppsObserver, BRCIndexingArbiter>
{
    NSMutableDictionary *_syncContexts;
    BRCDeadlineScheduler *_defaultScheduler;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    NSObject<OS_dispatch_queue> *_dbCorruptionQueue;
    int _cloudDocsFD;
    CDUnknownBlockType _dbProfilingHook;
    NSString *_databaseID;
    NSHashTable *_miscOperations;
    BRCPQLConnection *_clientDB;
    BRCPQLConnection *_serverDB;
    BRCPQLConnection *_readOnlyDB;
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
    BRCApplicationShortcutService *_shortcutService;
    BOOL _isCancelled;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    NSString *_ubiquityTokenSalt;
    BRCContainerScheduler *_containerScheduler;
    BRCApplyScheduler *_applyScheduler;
    BRCVolume *_volume;
    BRCFSReader *_fsReader;
    BRCFSUploader *_fsUploader;
    BRCFSDownloader *_fsDownloader;
    BRCFSWriter *_fsWriter;
    BRCUserNotification *_userNotification;
    BRCNotificationManager *_notificationManager;
    BRCStageRegistry *_stageRegistry;
    BRCDiskSpaceReclaimer *_diskReclaimer;
    CDSession *_coreDuetSession;
    BRCSpotlightIndexer *_spotlightIndexer;
    BRCThrottle *_appLibraryScanThrottle;
    BRCThrottle *_appLibraryResetThrottle;
    BRCThrottle *_sharedAppLibraryResetThrottle;
    BRCThrottle *_appLibraryAliasRemovalThrottle;
    BRCThrottle *_lostItemThrottle;
    BRCThrottle *_operationFailureThrottle;
    BRCThrottle *_syncClientZoneThrottle;
    BRCThrottle *_syncClientZoneErrorThrottle;
    NSObject<OS_dispatch_queue> *_resetQueue;
}

@property (readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) BRCAccountWaitOperation *accountWaitOperation;
@property (readonly, nonatomic) BRCThrottle *appLibraryAliasRemovalThrottle; // @synthesize appLibraryAliasRemovalThrottle=_appLibraryAliasRemovalThrottle;
@property (readonly, nonatomic) BRCThrottle *appLibraryResetThrottle; // @synthesize appLibraryResetThrottle=_appLibraryResetThrottle;
@property (readonly, nonatomic) BRCThrottle *appLibraryScanThrottle; // @synthesize appLibraryScanThrottle=_appLibraryScanThrottle;
@property (strong, nonatomic) NSString *appSupportDirPath; // @synthesize appSupportDirPath=_appSupportDirPath;
@property (readonly, nonatomic) BRCApplyScheduler *applyScheduler; // @synthesize applyScheduler=_applyScheduler;
@property (readonly, nonatomic) unsigned long long availableDiskSpace;
@property (strong, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property (readonly, nonatomic) BRCPQLConnection *clientDB;
@property (readonly, nonatomic) BRCClientState *clientState;
@property (readonly, nonatomic) BRCContainerScheduler *containerScheduler; // @synthesize containerScheduler=_containerScheduler;
@property (readonly, nonatomic) CDSession *coreDuetSession; // @synthesize coreDuetSession=_coreDuetSession;
@property (readonly, nonatomic) NSString *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BRCDeadlineScheduler *defaultScheduler; // @synthesize defaultScheduler=_defaultScheduler;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCDiskSpaceReclaimer *diskReclaimer; // @synthesize diskReclaimer=_diskReclaimer;
@property (readonly, nonatomic) BRCFSDownloader *fsDownloader; // @synthesize fsDownloader=_fsDownloader;
@property (readonly, nonatomic) BRCFSReader *fsReader; // @synthesize fsReader=_fsReader;
@property (readonly, nonatomic) BRCFSUploader *fsUploader; // @synthesize fsUploader=_fsUploader;
@property (readonly, nonatomic) BRCFSWriter *fsWriter; // @synthesize fsWriter=_fsWriter;
@property (readonly, nonatomic) BRCGlobalProgress *globalProgress; // @synthesize globalProgress=_globalProgress;
@property (readonly, nonatomic) BOOL hasOptimizeStorageEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BRCThrottle *lostItemThrottle; // @synthesize lostItemThrottle=_lostItemThrottle;
@property (readonly, nonatomic) BRCNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property (readonly, nonatomic) BRCThrottle *operationFailureThrottle; // @synthesize operationFailureThrottle=_operationFailureThrottle;
@property (readonly, nonatomic) BRCPQLConnection *readOnlyDB;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resetQueue; // @synthesize resetQueue=_resetQueue;
@property (readonly, nonatomic) BRCPQLConnection *serverDB;
@property (readonly, nonatomic) BRCServerPersistedState *serverState;
@property (readonly, nonatomic) BRCThrottle *sharedAppLibraryResetThrottle; // @synthesize sharedAppLibraryResetThrottle=_sharedAppLibraryResetThrottle;
@property (readonly, nonatomic) BRCSpotlightIndexer *spotlightIndexer; // @synthesize spotlightIndexer=_spotlightIndexer;
@property (readonly, nonatomic) BRCStageRegistry *stageRegistry; // @synthesize stageRegistry=_stageRegistry;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCThrottle *syncClientZoneErrorThrottle; // @synthesize syncClientZoneErrorThrottle=_syncClientZoneErrorThrottle;
@property (readonly, nonatomic) BRCThrottle *syncClientZoneThrottle; // @synthesize syncClientZoneThrottle=_syncClientZoneThrottle;
@property (readonly, nonatomic) NSString *ubiquityTokenSalt; // @synthesize ubiquityTokenSalt=_ubiquityTokenSalt;
@property (readonly, nonatomic) BRCUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property (readonly, nonatomic) BRCVolume *volume; // @synthesize volume=_volume;

+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
+ (id)userIdentityForKey:(id)arg1 db:(id)arg2;
+ (id)userIdentityForName:(id)arg1 db:(id)arg2;
- (void).cxx_destruct;
- (BOOL)PCSMigrationComplete;
- (id)__getOrCreateAppLibrary:(id)arg1 ownerName:(id)arg2 rowID:(id)arg3 createOnDisk:(BOOL)arg4 alreadyExists:(BOOL *)arg5 withClientZone:(id)arg6 createCZMMoved:(BOOL)arg7;
- (id)__getOrCreateClientZone:(id)arg1 ownerName:(id)arg2 withServerZone:(id)arg3;
- (id)__getOrCreateServerZone:(id)arg1 ownerName:(id)arg2;
- (void)__registerServerZone:(id)arg1 clientZone:(id)arg2 appLibrary:(id)arg3 isShared:(BOOL)arg4;
- (BOOL)_checkIntegrity:(id)arg1 serverTruth:(BOOL)arg2 error:(id *)arg3;
- (void)_clearNeedsUpgradeErrors:(id)arg1 brVersion:(id)arg2;
- (id)_clientZonesMatchingSearchString:(id)arg1;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(BOOL)arg2;
- (BOOL)_createAppLibrary:(id)arg1;
- (BOOL)_createAppLibraryRootIfNeededAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_createAppLibraryRootsIfNeededWithError:(id *)arg1;
- (BOOL)_createClientZone:(id)arg1 ownerName:(id)arg2;
- (BOOL)_createPrivateAppLibrary:(id)arg1;
- (BOOL)_createPrivateClientZone:(id)arg1;
- (BOOL)_createSharedAppLibrary:(id)arg1;
- (BOOL)_createSharedClientZone:(id)arg1 ownerName:(id)arg2;
- (BOOL)_deleteAppLibrary:(id)arg1;
- (BOOL)_deleteClientZone:(id)arg1;
- (BOOL)_dumpClientZone:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_dumpClientZoneBlockedState:(id)arg1 toContext:(id)arg2;
- (BOOL)_dumpClientZoneStatus:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_enumerateAccountHandlerSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (void)_enumerateAppLibraryRowIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_getOrCreateAppLibraryAndZonesIfNecessary:(id)arg1 ownerName:(id)arg2 creationFlags:(unsigned int *)arg3;
- (BOOL)_getRootPathXattrValue:(id *)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (void)_loadClientZonesFromDisk;
- (BOOL)_openClientTruthConnectionWithError:(id *)arg1;
- (BOOL)_openServerTruthConnectionWithError:(id *)arg1;
- (struct PQLResultSet *)_privateAppLibrariesEnumerator:(id)arg1;
- (id)_privateClientZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)_privateClientZonesEnumerator:(id)arg1;
- (id)_privateServerZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)_privateServerZonesEnumerator:(id)arg1;
- (void)_recreateSymlinkIfNecessaryForDocumentsPath:(id)arg1 folderName:(id)arg2 destinationPath:(id)arg3;
- (BOOL)_recursivelyPrepareFolderForLogOutAtURL:(id)arg1 pruneEmptyFolders:(BOOL)arg2 pruneEmptyTopLevelFolder:(BOOL)arg3 maxDepth:(unsigned long long)arg4;
- (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject *)arg2;
- (id)_reserveRowIDForLibrary:(id)arg1 owner:(id)arg2;
- (void)_resolvePathInMobileDocsRoot:(id)arg1 appLibrary:(id *)arg2 clientZone:(id *)arg3;
- (BOOL)_setRootPathXattrValue:(id)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (void)_setUserIdentity:(id)arg1 forName:(id)arg2;
- (BOOL)_setupBackupDetector:(struct backup_detector *)arg1 error:(id *)arg2;
- (BOOL)_setupConnection:(id)arg1 databaseName:(id)arg2 flags:(int)arg3 error:(id *)arg4;
- (BOOL)_setupConnection:(id)arg1 databaseName:(id)arg2 readonly:(BOOL)arg3 error:(id *)arg4;
- (void)_setupSharedPackageExtensionsPlist;
- (void)_setupThrottles;
- (struct PQLResultSet *)_sharedAppLibrariesEnumerator:(id)arg1;
- (struct PQLResultSet *)_sharedClientZonesEnumerator:(id)arg1;
- (id)_sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet *)_sharedServerZonesEnumerator:(id)arg1;
- (BOOL)_shouldPrivateAppLibraryBeCZMMoved:(id)arg1;
- (void)_showiCloudDriveAppInstallationNotificationIfNeeded;
- (void)_startWatcher;
- (BOOL)_stepBackupDetector:(struct backup_detector)arg1 newState:(struct backup_detector *)arg2 error:(id *)arg3;
- (id)_syncContextForContextIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 isShared:(BOOL)arg3 createIfNeeded:(BOOL)arg4;
- (id)_unloadClientZones;
- (unsigned long long)accountSize;
- (void)addMiscOperation:(id)arg1;
- (void)addOfflineAppLibrary:(id)arg1;
- (void)addOfflineClientZone:(id)arg1;
- (void)addOfflineServerZone:(id)arg1;
- (id)allSyncContexts;
- (id)appLibraryByMangledID:(id)arg1;
- (id)appLibraryByRowID:(id)arg1;
- (BOOL)applySyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 isInitialCreation:(BOOL)arg3 error:(id *)arg4;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1;
- (unsigned long long)availableDiskSpaceUsingCache:(BOOL)arg1 schedulingPendingDiskItemsIfNeeded:(BOOL)arg2;
- (BOOL)backupDatabaseToURL:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)bouncedItemsEnumerator;
- (id)clientZoneByMangledID:(id)arg1;
- (id)clientZonesMatchingSearchString:(id)arg1 error:(id *)arg2;
- (void)close;
- (void)closeAndResetLocalState;
- (void)closeDBs;
- (void)closeXPCClientsSync;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)cloudDocsClientZone;
- (BOOL)createAppLibrariesIfNeededWithError:(id *)arg1;
- (BOOL)createAppLibraryOnDisk:(id)arg1 createdRoot:(BOOL *)arg2 createdDocuments:(BOOL *)arg3 rootFileID:(unsigned long long *)arg4;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)createFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)createRootForSyncedFolderType:(unsigned long long)arg1;
- (BOOL)createServerZone:(id)arg1;
- (BOOL)createSharedAppLibraryOnDiskWithMangledID:(id)arg1 createdRoot:(BOOL *)arg2 rootFileID:(unsigned long long *)arg3;
- (id)createUserKeyForName:(id)arg1;
- (void)dbBecameCorrupted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)defaultSyncContext;
- (BOOL)deleteServerZone:(id)arg1;
- (void)destroyLocalData;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(BOOL)arg1 pristineContainerIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)destroyLocalDataWithPristingContainerIDs:(id)arg1;
- (void)destroySharedClientZone:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (BOOL)disableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(BOOL)arg2 error:(id *)arg3;
- (BOOL)dumpDatabaseToFileHandle:(id)arg1 zoneName:(id)arg2 error:(id *)arg3;
- (BOOL)dumpFileCoordinationInfoToFileHandle:(id)arg1 error:(id *)arg2;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (BOOL)dumpStatusToFileHandle:(id)arg1 zoneName:(id)arg2 error:(id *)arg3;
- (void)dumpXPCClientsToContext:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (BOOL)enableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(BOOL)arg2 error:(id *)arg3;
- (void)enumerateAppLibraries:(CDUnknownBlockType)arg1;
- (void)enumerateClientZones:(CDUnknownBlockType)arg1;
- (void)enumerateFileTypesWithFilterBlock:(CDUnknownBlockType)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePrivateAppLibraries:(CDUnknownBlockType)arg1;
- (void)enumeratePrivateClientZones:(CDUnknownBlockType)arg1;
- (void)enumeratePrivateServerZones:(CDUnknownBlockType)arg1;
- (void)enumerateServerZones:(CDUnknownBlockType)arg1;
- (void)enumerateSharedAppLibraries:(CDUnknownBlockType)arg1;
- (void)enumerateSharedClientZones:(CDUnknownBlockType)arg1;
- (void)enumerateSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (id)fetchAccountWaitOperationWithAccountReady:(BOOL *)arg1;
- (id)fsEventsMonitorForAppLibraryID:(id)arg1;
- (id)fsEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitors;
- (id)getOrCreatePrivateAppLibraryAndZonesIfNecessary:(id)arg1;
- (id)getOrCreatePrivateAppLibraryAndZonesIfNecessary:(id)arg1 appLibraryExists:(BOOL *)arg2;
- (id)getOrCreateSharedAppLibraryAndZones:(id)arg1 ownerName:(id)arg2;
- (id)getOrCreateSharedAppLibraryAndZones:(id)arg1 ownerName:(id)arg2 needsActivate:(BOOL *)arg3;
- (id)getOrReserveLibraryRowIDForLibrary:(id)arg1 ownerName:(id)arg2;
- (id)globalItemByDocumentID:(unsigned int)arg1;
- (id)globalItemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)globalItemByFileID:(unsigned long long)arg1;
- (id)globalItemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (BOOL)hasFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (BOOL)hasRootForSyncedFolderType:(unsigned long long)arg1;
- (id)init;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (BOOL)initializeOfflineDatabase:(id *)arg1;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (struct PQLResultSet *)itemsNeedingIndexingEnumeratorWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2;
- (void)learnOwnerIdentityForShare:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)markAccountMigrationComplete;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
- (id)newLocalItemFromPQLResultSet:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (id)newPrivateAppLibraryFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newPrivateClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newSharedAppLibraryFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newSharedClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (BOOL)openDBWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (id)pendingDownloadItemWithDocumentID:(unsigned int)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whileRemovingPrivateClientZone:(id)arg2;
- (void)preventDatabaseFromBeingReused;
- (id)privateAppLibraryByID:(id)arg1;
- (id)privateAppLibraryByMangledID:(id)arg1;
- (id)privateClientZoneByID:(id)arg1;
- (id)privateClientZoneByMangledID:(id)arg1;
- (id)privateServerZoneByID:(id)arg1;
- (id)privateServerZoneByMangledID:(id)arg1;
- (id)recentDocumentsService;
- (void)recreateDesktopSymlinksIfNecessary;
- (void)registerClient:(id)arg1;
- (void)removeDesktopSymlink:(BOOL)arg1 andDocumentsSymlink:(BOOL)arg2;
- (void)removeFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (void)removeRootForSyncedFolderType:(unsigned long long)arg1;
- (void)resetThrottles;
- (int)resolvePathAdditionalMetadata:(id)arg1 appLibrary:(id *)arg2 clientZone:(id *)arg3;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(BOOL)arg2 errcode:(int *)arg3;
- (void)resume;
- (id)rootForSyncedFolderType:(unsigned long long)arg1;
- (id)roots;
- (BOOL)saveAppLibraryToDB:(id)arg1;
- (BOOL)saveClientZoneToDB:(id)arg1;
- (BOOL)saveServerZoneToDB:(id)arg1;
- (void)scheduleZoneMovesToCloudDocs:(id)arg1;
- (id)serverZoneByID:(id)arg1;
- (id)serverZoneByMangledID:(id)arg1;
- (id)serverZoneByName:(id)arg1 ownerName:(id)arg2;
- (id)serverZoneByRowID:(id)arg1;
- (void)setFSEventsMonitor:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setNeedsPCSMigration:(BOOL)arg1;
- (void)setOptimizeStorageEnabled:(BOOL)arg1;
- (void)setRoot:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setupDatabase;
- (id)sharedAppLibraryByMangledID:(id)arg1;
- (id)sharedClientZoneByMangledID:(id)arg1;
- (id)sharedServerZoneByMangledID:(id)arg1;
- (id)sharedSyncContext;
- (BOOL)shouldIndexDocument:(id)arg1;
- (BOOL)shouldPathBeDesktopSymlink:(id)arg1;
- (BOOL)shouldPerformPCSMigration;
- (id)singleClientZoneMatchingSearchString:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)stagedItemsEnumerator;
- (void)startDownloadsForGreediness;
- (void)stopDBWatcher;
- (id)syncContextForAppLibrary:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)syncContextForZone:(id)arg1;
- (id)syncContextForZone:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)syncContextForZone:(id)arg1 metadata:(BOOL)arg2;
- (id)syncContextForZone:(id)arg1 metadata:(BOOL)arg2 createIfNeeded:(BOOL)arg3;
- (unsigned long long)syncedFolderTypeForURL:(id)arg1;
- (unsigned long long)totalEvictableSizeWithAccessTimeDelta:(double)arg1;
- (void)unregisterClient:(id)arg1;
- (void)userDefaultsChanged;
- (id)userIdentityForKey:(id)arg1;
- (id)userKeyForName:(id)arg1 db:(id)arg2;
- (id)userNameForKey:(id)arg1 db:(id)arg2;
- (BOOL)validateDatabase:(id)arg1 serverTruth:(BOOL)arg2 error:(id *)arg3;
- (id)zoneHealthSyncContext;

@end

