//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCItem-Protocol.h>
#import <CloudDocsDaemon/BRCSyncThrottleItemProtocol-Protocol.h>

@class BRCAccountSession, BRCAliasItem, BRCDirectoryItem, BRCDocumentItem, BRCItemID, BRCLocalContainer, BRCLocalStatInfo, BRCServerZone, CKRecord, CKRecordID, NSError, NSMutableSet, NSNumber, NSString;

@interface BRCLocalItem : NSObject <BRCSyncThrottleItemProtocol, BRCItem>
{
    BRCAccountSession *_session;
    BRCServerZone *_serverZone;
    BRCLocalContainer *_container;
    BRCItemID *_itemID;
    NSNumber *_ownerKey;
    BRCLocalStatInfo *_st;
    unsigned int _syncUpState;
    BRCLocalItem *_orig;
    unsigned long long _localDiffs;
    unsigned char _itemScope;
    NSNumber *_inFlightDiffs;
    NSNumber *_minimumSupportedOSRowID;
    unsigned long long _dbRowID;
    unsigned long long _notifsRank;
    unsigned long long _sharingOptions;
    NSNumber *_knownByServer;
    NSNumber *_isInDocumentScope;
    NSNumber *_parentFileID;
    id _serverPathMatchID;
    BOOL _resolvedPath;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    BOOL _forceNotif;
    NSString *_path;
}

@property (readonly, nonatomic) BRCAliasItem *asAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) CKRecord *baseStructureRecord;
@property (readonly, nonatomic) BRCLocalContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) unsigned long long dbRowID; // @synthesize dbRowID=_dbRowID;
@property (readonly, nonatomic) NSString *digestDescription;
@property (readonly, nonatomic) NSString *extension;
@property (readonly, nonatomic) NSNumber *inFlightDiffs; // @synthesize inFlightDiffs=_inFlightDiffs;
@property (readonly, nonatomic) BOOL isAlias;
@property (readonly, nonatomic) BOOL isAlmostDead;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDeadInServerTruth;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL isFromInitialScan;
@property (readonly, nonatomic) BOOL isIdleOrRejected;
@property (readonly, nonatomic) BOOL isInDocumentScope;
@property (readonly, nonatomic) BOOL isKnownByServer;
@property (readonly, nonatomic) BOOL isKnownByServerOrInFlight;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isLost;
@property (readonly, nonatomic) BOOL isOnDisk;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isReadAndUploaded;
@property (readonly, nonatomic) BOOL isRejected;
@property (readonly, nonatomic) BOOL isReserved;
@property (readonly, nonatomic) BOOL isSharedByMe;
@property (readonly, nonatomic) BOOL isSharedByMeWithAShareID;
@property (readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property (readonly, nonatomic) unsigned long long localDiffs; // @synthesize localDiffs=_localDiffs;
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) BOOL needsInsert;
@property (readonly, nonatomic) BOOL needsOSUpgradeToSyncUp;
@property (readonly, nonatomic) BOOL needsReading;
@property (readonly, nonatomic) BOOL needsSyncUp;
@property (readonly, nonatomic) BOOL needsUpload;
@property (readonly, nonatomic) unsigned long long notifsRank; // @synthesize notifsRank=_notifsRank;
@property (readonly, nonatomic) BRCLocalItem *orig; // @synthesize orig=_orig;
@property (readonly, nonatomic) NSNumber *ownerKey; // @synthesize ownerKey=_ownerKey;
@property (readonly, nonatomic) NSNumber *parentFileID;
@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property (readonly, nonatomic) BOOL physicalNameNeedsRename;
@property (readonly, nonatomic) BRCItemID *serverPathMatchItemID;
@property (readonly, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property (readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property (readonly, nonatomic) NSMutableSet *setOfContainersIDsWithReverseAliases;
@property (nonatomic) unsigned long long sharingOptions; // @synthesize sharingOptions=_sharingOptions;
@property (readonly, nonatomic) BRCLocalStatInfo *st; // @synthesize st=_st;
@property (readonly, nonatomic) CKRecordID *structureRecordID;
@property (readonly, nonatomic) NSError *syncUpError;
@property (readonly, nonatomic) unsigned int syncUpState; // @synthesize syncUpState=_syncUpState;
@property (readonly, nonatomic) unsigned int uploadStatus;

+ (id)newItemWithPath:(id)arg1 parentID:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(BOOL)arg3;
- (id)_initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id *)arg3;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_isInterestingUpdateForNotifs;
- (BOOL)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1;
- (void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2;
- (void)_markNeedsSyncingUp;
- (void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(BOOL)arg2;
- (void)_serializeStructuralPluginHints:(id)arg1;
- (id)_setOfParentIDs;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2;
- (void)beginBounceAndSaveToDBWithName:(id)arg1;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (BOOL)checkIsInDocumentsScopeWithParent:(id)arg1;
- (void)clearFromStage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstOriginalItem;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evictWithGroup:(id)arg1 error:(id *)arg2;
- (float)fakeSync;
- (void)fixupStagedItemAtStartup;
- (void)handleUnknownItemError;
- (void)inheritOSUpgradeNeededFromItem:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id *)arg3;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4;
- (BOOL)learnStagedInfoFromDownloadStageID:(id)arg1 error:(id *)arg2;
- (void)markBounceFailed;
- (void)markBounceFinished;
- (void)markDead;
- (void)markForceNeedsSyncUp;
- (void)markForceNotify;
- (void)markFound;
- (void)markLatestRequestAcknowledged;
- (void)markLatestSyncRequestFailed;
- (void)markLatestSyncRequestRejected;
- (void)markLiveFromStage;
- (void)markLostClearGenerationID:(BOOL)arg1 backoffMode:(unsigned char)arg2;
- (void)markLostWhenReplacedByItem:(id)arg1;
- (void)markLostWithoutBackoff;
- (void)markNeedsDeleteForRescheduleOfItem:(id)arg1;
- (void)markNeedsOSUpgradeToSyncUpWithName:(id)arg1;
- (void)markNeedsReading;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (void)markRenamedUsingServerItem:(id)arg1 toRelpath:(id)arg2;
- (void)markReserved;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2 documentID:(unsigned int)arg3;
- (void)moveAsideLocally;
- (id)osNameNeededToSyncUp;
- (id)parentItem;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (void)prepareForSyncUp;
- (BOOL)saveToDB;
- (BOOL)saveToDBForServerEdit:(BOOL)arg1 keepAliases:(BOOL)arg2;
- (void)startDownloadWithOptions:(unsigned long long)arg1 group:(id)arg2;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 stageID:(id)arg2;
- (void)triggerNotificationIfNeeded;
- (void)updateFromFSAtPath:(id)arg1;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateStatMetadataFromServerItem:(id)arg1;
- (void)updateStructuralCKInfoFromServerItem:(id)arg1;
- (BOOL)updateXattrInfoFromPathPath:(id)arg1 error:(id *)arg2;
- (BOOL)validateLoggingToFile:(struct __sFILE *)arg1;

@end

