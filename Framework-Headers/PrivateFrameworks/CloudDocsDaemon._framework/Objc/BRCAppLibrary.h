//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>

@class BRCALRowID, BRCAccountSession, BRCClientZone, BRCFSEventsMonitor, BRCPQLConnection, BRCPrivateAppLibrary, BRCRelativePath, BRCSharedAppLibrary, BRCSyncContext, BRCZoneRowID, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSNumber, NSString, NSURL, brc_task_tracker;
@protocol BRCAppLibraryDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAppLibrary : NSObject <BRCForegroundClient>
{
    _Atomic unsigned long long _activeQueries;
    _Atomic unsigned long long _activeRecursiveQueries;
    _Atomic unsigned long long _activeAliasQueries;
    long long _maxLostStamp;
    NSNumber *_deepScanStamp;
    NSMutableIndexSet *_pendingCoordinatedIOs;
    NSMutableSet *_pendingReadFileCoordinators;
    NSMutableSet *_pendingWriteFileCoordinators;
    NSMutableSet *_XPCClientsUsingUbiquity;
    NSString *_mangledID;
    BRCAccountSession *_session;
    BRCClientZone *_clientZone;
    NSMutableSet *_targetAppLibraries;
    NSObject<OS_dispatch_queue> *_targetAppLibraryQueue;
    NSMutableSet *_foregroundClients;
    BOOL _needsSave;
    unsigned int _state;
    brc_task_tracker *_tracker;
    id<BRCAppLibraryDelegate> _delegate;
    BRCPQLConnection *_db;
    BRCALRowID *_dbRowID;
    BRCZoneRowID *_zoneRowID;
    NSString *_appLibraryID;
    NSString *_appLibraryIDAndOwner;
    NSString *_ownerName;
    NSNumber *_fileID;
    NSNumber *_generationID;
}

@property (readonly, nonatomic) NSString *absolutePath;
@property (readonly, nonatomic) NSString *appLibraryID; // @synthesize appLibraryID=_appLibraryID;
@property (readonly, nonatomic) NSString *appLibraryIDAndOwner; // @synthesize appLibraryIDAndOwner=_appLibraryIDAndOwner;
@property (readonly, nonatomic) BRCPrivateAppLibrary *asPrivateAppLibrary;
@property (readonly, nonatomic) BRCSharedAppLibrary *asSharedAppLibrary;
@property (weak, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property (readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property (strong, nonatomic) BRCALRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSNumber *deepScanStamp; // @synthesize deepScanStamp=_deepScanStamp;
@property (strong, nonatomic) id<BRCAppLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property (readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor;
@property (strong, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property (readonly) BOOL hasActiveAliasQueries;
@property (readonly) BOOL hasActiveQueries;
@property (readonly) BOOL hasActiveRecursiveQueries;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BOOL isPrivateAppLibrary;
@property (readonly, nonatomic) BOOL isSharedAppLibrary;
@property (readonly, nonatomic) NSString *logName;
@property (readonly, nonatomic) NSString *mangledID; // @synthesize mangledID=_mangledID;
@property (nonatomic) long long maxLostStamp; // @synthesize maxLostStamp=_maxLostStamp;
@property (nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property (readonly, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property (readonly, nonatomic) NSString *pathRelativeToRoot;
@property (readonly, nonatomic) NSMutableIndexSet *pendingCoordinatedIOs; // @synthesize pendingCoordinatedIOs=_pendingCoordinatedIOs;
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
- (id)_aliasAppLibraryTargetSQLPrefix;
- (void)_removeAlltargetAppLibraries;
- (void)_removedAliasItemForTargetAppLibrary:(id)arg1;
- (void)_resolvetargetAppLibraries;
- (struct PQLResultSet *)_targetAppLibrariesEnumerator;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
- (void)activate;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (unsigned long long)allocateLostStampAddingBackoff:(BOOL)arg1;
- (void)associateWithClientZone:(id)arg1;
- (void)cancelDeepScan;
- (void)cancelFileCoordinators;
- (void)cancelFileProviders;
- (void)clearStateBits:(unsigned int)arg1;
- (void)close;
- (void)continueMarkingChildrenLost;
- (id)coordinatorForItem:(id)arg1 forRead:(BOOL)arg2;
- (id)descriptionWithContext:(id)arg1;
- (void)didCreateDataScopedItem;
- (void)didCreateDocumentScopedItem;
- (void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2;
- (void)didReceiveHandoffRequest;
- (id)directoryItemIDByFileID:(unsigned long long)arg1;
- (id)directoryItemIDByFileID:(unsigned long long)arg1 db:(id)arg2;
- (unsigned long long)documentCount;
- (unsigned long long)documentEvictableSizeUsage;
- (unsigned long long)documentEvictableSizeUsageWithAccessTimeDelta:(double)arg1;
- (unsigned long long)documentSizeUsage;
- (id)fetchRootItemWithoutEnclosures;
- (id)fetchRootItemWithoutEnclosuresInDB:(id)arg1;
- (void)freeFileCoordinationSlotsAfterDelayForRead:(BOOL)arg1;
- (BOOL)hasDocumentsOrDirectory;
- (BOOL)hasInitialFaultsEverLive;
- (BOOL)hasInitialFaultsLive;
- (BOOL)hasLocalChanges;
- (BOOL)hasUbiquitousDocuments;
- (BOOL)hasUbiquityClientsConnected;
- (BOOL)includesDataScope;
- (id)init;
- (id)initWithName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 zoneRowID:(id)arg4 db:(id)arg5 plist:(id)arg6 session:(id)arg7 initialCreation:(BOOL)arg8 createdRootOnDisk:(BOOL)arg9 rootFileID:(id)arg10;
- (BOOL)isCloudDocsAppLibrary;
- (BOOL)isDesktopAppLibrary;
- (BOOL)isDocumentsAppLibrary;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStillTargetingAppLibrary:(id)arg1;
- (BOOL)isiCloudDesktopAppLibrary;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)itemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (struct PQLResultSet *)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (struct PQLResultSet *)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeOnlyFolders:(BOOL)arg5 shouldIncludeDocumentsScope:(BOOL)arg6 shouldIncludeDataScope:(BOOL)arg7 shouldIncludeExternalScope:(BOOL)arg8 shouldIncludeTrashScope:(BOOL)arg9 count:(unsigned long long)arg10;
- (struct PQLResultSet *)liveAliasesEnumeratorTargetingThisAppLibrary;
- (BOOL)markChildrenLostForItemID:(id)arg1 fileID:(id)arg2;
- (BOOL)markChildrenLostForItemID:(id)arg1 fileID:(id)arg2 startingFromRow:(unsigned long long)arg3 hasMoreWork:(BOOL *)arg4;
- (void)recomputeShouldEvictState;
- (void)registerQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)removeForegroundClient:(id)arg1;
- (id)rootItemIDWithoutEnclosures;
- (void)scheduleDeepScan;
- (BOOL)setStateBits:(unsigned int)arg1;
- (id)spotlightDomainIdentifier;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)unregisterQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)updateWithPlist:(id)arg1;

@end

