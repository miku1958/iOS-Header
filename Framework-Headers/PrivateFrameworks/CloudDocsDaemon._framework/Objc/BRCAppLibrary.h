//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>

@class BRCALRowID, BRCAccountSession, BRCFSEventsMonitor, BRCPQLConnection, BRCPrivateClientZone, BRCRelativePath, BRCSyncContext, BRCZoneRowID, BRContainer, BRMangledID, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL, brc_task_tracker;
@protocol BRCAppLibraryDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAppLibrary : NSObject <BRCForegroundClient>
{
    _Atomic unsigned long long _activeQueries;
    _Atomic unsigned long long _activeRecursiveQueries;
    _Atomic unsigned long long _activeAliasQueries;
    long long _maxLostStamp;
    NSNumber *_deepScanStamp;
    NSString *_deepScanReason;
    NSMutableDictionary *_pendingFileCoordinators;
    NSMutableSet *_XPCClientsUsingUbiquity;
    BRMangledID *_mangledID;
    BRCAccountSession *_session;
    BRCPrivateClientZone *_defaultClientZone;
    BOOL _activated;
    NSMutableSet *_targetAppLibraries;
    NSMutableSet *_targetSharedServerZones;
    NSObject<OS_dispatch_queue> *_targetAppLibraryQueue;
    NSMutableSet *_foregroundClients;
    BOOL _needsSave;
    BOOL _containerMetadataNeedsSyncUp;
    unsigned int _state;
    brc_task_tracker *_tracker;
    id<BRCAppLibraryDelegate> _delegate;
    BRCPQLConnection *_db;
    BRCALRowID *_dbRowID;
    BRCZoneRowID *_zoneRowID;
    NSString *_appLibraryID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property (readonly, nonatomic) NSString *absolutePath;
@property (readonly, nonatomic) NSString *appLibraryID; // @synthesize appLibraryID=_appLibraryID;
@property (readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property (strong, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property (nonatomic) BOOL containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property (readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property (strong, nonatomic) BRCALRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSNumber *deepScanStamp; // @synthesize deepScanStamp=_deepScanStamp;
@property (weak, nonatomic) BRCPrivateClientZone *defaultClientZone; // @synthesize defaultClientZone=_defaultClientZone;
@property (strong, nonatomic) id<BRCAppLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCRelativePath *documentsPath;
@property (strong, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property (readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor;
@property (strong, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property (readonly) BOOL hasActiveAliasQueries;
@property (readonly) BOOL hasActiveQueries;
@property (readonly) BOOL hasActiveRecursiveQueries;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isCloudDocsAppLibrary;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BOOL isiCloudDesktopAppLibrary;
@property (readonly, nonatomic) NSString *logName;
@property (readonly, nonatomic) BRMangledID *mangledID; // @synthesize mangledID=_mangledID;
@property (nonatomic) long long maxLostStamp; // @synthesize maxLostStamp=_maxLostStamp;
@property (nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property (readonly, nonatomic) NSString *pathRelativeToRoot;
@property (readonly, nonatomic) NSMutableDictionary *plist;
@property (readonly, nonatomic) BRCRelativePath *root;
@property (strong, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property (readonly, nonatomic) BOOL shouldEvictUploadedItems;
@property (readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCSyncContext *syncContext;
@property (readonly, nonatomic) BRCSyncContext *syncContextIfExists;
@property (readonly, nonatomic) unsigned long long syncedFolderType;
@property (readonly, nonatomic) brc_task_tracker *tracker; // @synthesize tracker=_tracker;
@property (readonly, nonatomic) NSURL *url;
@property (strong, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_addTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibraryForAliasItem:(id)arg1;
- (void)_addTargetSharedServerZone:(id)arg1;
- (void)_addTargetSharedServerZoneForSharedItem:(id)arg1;
- (id)_aliasAppLibraryTargetSQLPrefix;
- (void)_removeAllTargetAppLibrariesAndSharedServerZones;
- (void)_removeTargetSharedServerZoneForSharedServerZone:(id)arg1;
- (void)_removedAliasItemForTargetAppLibrary:(id)arg1;
- (void)_resolveTargetAppLibrariesAndSharedClientZones;
- (struct PQLResultSet *)_targetAppLibrariesEnumerator;
- (struct PQLResultSet *)_targetSharedServerZonesEnumerator;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(BOOL)arg2;
- (void)_updateIsInCloudDocsZone;
- (void)activate;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (unsigned long long)allocateLostStampAddingBackoff:(BOOL)arg1;
- (void)associateWithClientZone:(id)arg1;
- (void)cancelFileCoordinators;
- (void)cancelWriteCoordinatorForItem:(id)arg1;
- (void)clearStateBits:(unsigned int)arg1;
- (void)close;
- (id)containerMetadataFilledWithTCCInfo;
- (void)continueMarkingChildrenLostInZone:(id)arg1;
- (id)coordinatorForItem:(id)arg1 forRead:(BOOL)arg2;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(BOOL)arg3 error:(id *)arg4;
- (id)descriptionWithContext:(id)arg1;
- (void)didCreateDataScopedItem;
- (void)didCreateDocumentScopedItem;
- (void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2;
- (void)didReceiveHandoffRequest;
- (void)didRemoveDocumentsFolder;
- (unsigned long long)documentCountWithDB:(id)arg1;
- (unsigned long long)documentEvictableSizeUsageWithAccessTimeDelta:(double)arg1 db:(id)arg2;
- (unsigned long long)documentEvictableSizeUsageWithDB:(id)arg1;
- (unsigned long long)documentSizeUsageWithDB:(id)arg1;
- (id)documentsFolderItemID;
- (struct PQLResultSet *)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)enumerateUserVisibleChildrenOfItemGlobalID:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 db:(id)arg5;
- (struct BRCDirectoryItem *)fetchRootItem;
- (struct BRCDirectoryItem *)fetchRootItemInDB:(id)arg1;
- (void)freeFileCoordinationSlotsAfterDelayForRead:(BOOL)arg1;
- (void)fsrootDidMoveToPath:(id)arg1;
- (BOOL)hasDocumentsOrDirectory;
- (BOOL)hasInitialFaultsEverLive;
- (BOOL)hasInitialFaultsLive;
- (BOOL)hasLocalChanges;
- (BOOL)hasUbiquitousDocuments;
- (BOOL)hasUbiquityClientsConnected;
- (BOOL)includesDataScope;
- (id)init;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 zoneRowID:(id)arg3 db:(id)arg4 plist:(id)arg5 session:(id)arg6 initialCreation:(BOOL)arg7 createdRootOnDisk:(BOOL)arg8 createdCZMMoved:(BOOL)arg9 rootFileID:(id)arg10;
- (BOOL)isCoordinationPendingForItem:(id)arg1;
- (BOOL)isDesktopAppLibrary;
- (BOOL)isDocumentsAppLibrary;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAppLibrary:(id)arg1;
- (BOOL)isStillTargetingAppLibrary:(id)arg1;
- (BOOL)isStillTargetingSharedServerZone:(id)arg1;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (struct PQLResultSet *)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4 db:(id)arg5;
- (struct PQLResultSet *)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeOnlyFolders:(BOOL)arg5 shouldIncludeDocumentsScope:(BOOL)arg6 shouldIncludeDataScope:(BOOL)arg7 shouldIncludeExternalScope:(BOOL)arg8 shouldIncludeTrashScope:(BOOL)arg9 count:(unsigned long long)arg10 db:(id)arg11;
- (struct PQLResultSet *)liveAliasesEnumeratorTargetingThisAppLibrary;
- (BOOL)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3;
- (BOOL)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3 startingFromRow:(unsigned long long)arg4 hasMoreWork:(BOOL *)arg5;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (void)recomputeShouldEvictState;
- (void)recreateDocumentsFolderIfNeeded;
- (void)registerQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)removeForegroundClient:(id)arg1;
- (id)rootItemGlobalID;
- (id)rootItemID;
- (void)scheduleContainerMetadataSyncUp;
- (void)scheduleDeepScanWithReason:(id)arg1;
- (void)setIsOverQuota:(BOOL)arg1;
- (void)setRootFileID:(unsigned long long)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (BOOL)shouldSaveContainerMetadataServerside;
- (BOOL)supportsSpotlightIndexing;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)unregisterQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (BOOL)wasMovedToCloudDocs;
- (void)zoneDidChangeMovedToCloudDocsState;

@end
