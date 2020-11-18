//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalItem.h>

#import <CloudDocsDaemon/BRCTopLevelShareable-Protocol.h>

@class BRCAliasItem, BRCDesiredVersion, BRCDirectoryItem, BRCLocalVersion, NSData, NSDictionary, NSError, NSMutableSet, NSSet, NSString;

@interface BRCDocumentItem : BRCLocalItem <BRCTopLevelShareable>
{
    BRCLocalVersion *_currentVersion;
    BRCDesiredVersion *_desiredVersion;
    NSMutableSet *_liveConflictLoserEtags;
    NSMutableSet *_resolvedConflictLoserEtags;
    BOOL _shouldAutomaticallyDownloadThumbnail;
    NSData *_liveThumbnailSignature;
}

@property (readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) NSDictionary *conflictLoserState;
@property (readonly, nonatomic) BRCLocalVersion *currentVersion; // @synthesize currentVersion=_currentVersion;
@property (readonly, nonatomic) BRCDesiredVersion *desiredVersion; // @synthesize desiredVersion=_desiredVersion;
@property (readonly, nonatomic) unsigned int downloadStatus;
@property (readonly, nonatomic) BOOL hasLocalContent;
@property (readonly, nonatomic) BOOL isAutomaticallyEvictable;
@property (readonly, nonatomic) BOOL isDownloadRequested;
@property (readonly, nonatomic) BOOL isDownloadRequestedForThumbnail;
@property (readonly, nonatomic) BOOL isEvictable;
@property (readonly, nonatomic) BOOL isVisibleIniCloudDrive;
@property (strong, nonatomic) NSSet *liveConflictLoserEtags; // @synthesize liveConflictLoserEtags=_liveConflictLoserEtags;
@property (strong, nonatomic) NSData *liveThumbnailSignature; // @synthesize liveThumbnailSignature=_liveThumbnailSignature;
@property (readonly, nonatomic) unsigned int queryItemStatus;
@property (readonly, nonatomic) NSSet *resolvedConflictLoserEtags; // @synthesize resolvedConflictLoserEtags=_resolvedConflictLoserEtags;
@property (readonly, nonatomic) BOOL shouldAutomaticallyDownloadThumbnail; // @synthesize shouldAutomaticallyDownloadThumbnail=_shouldAutomaticallyDownloadThumbnail;
@property (readonly, nonatomic) BOOL shouldBeGreedy;
@property (readonly, nonatomic) BOOL shouldHaveThumbnail;
@property (readonly, nonatomic) BOOL shouldTransferThumbnail;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData; // @dynamic unsaltedBookmarkData;
@property (readonly, nonatomic) NSError *uploadError;

+ (id)anyReverseAliasInAppLibrary:(id)arg1 toRelativePath:(id)arg2;
+ (id)anyReverseAliasWithUnsaltedBookmarkData:(id)arg1 inAppLibrary:(id)arg2;
+ (BOOL)isDocumentAutomaticallyEvictableWithExtension:(id)arg1;
+ (BOOL)isDocumentAutomaticallyEvictableWithName:(id)arg1;
+ (struct PQLResultSet *)reverseAliasEnumeratorWithRelativePath:(id)arg1;
+ (struct PQLResultSet *)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg1 session:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (id)_filenameOverrideForPath:(id)arg1;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_isInterestingUpdateForNotifs;
- (BOOL)_needsSyncBubbleRecomputeForError:(id)arg1 origError:(id)arg2;
- (BOOL)_nukePackageItemsFromDB:(id)arg1;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)_updateLiveConflictLoserFromFSAtPath:(id)arg1;
- (void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg1 forCreation:(BOOL)arg2;
- (void)_updateRecursivePropertiesInDB:(id)arg1 dbRowID:(unsigned long long)arg2 diffs:(unsigned long long)arg3;
- (void)_updateUploadJobIfNeededWithDiffs:(unsigned long long)arg1;
- (void)addResolvedConflictLoserEtag:(id)arg1;
- (id)aliasItemID;
- (id)anyReverseAliasInAppLibrary:(id)arg1;
- (void)appDidResolveConflictLoserWithEtag:(id)arg1;
- (id)asShareableItem;
- (id)baseContentsRecord;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (void)clearDesiredVersion;
- (void)clearFromStage;
- (void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(BOOL)arg2;
- (id)contentsRecordID;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)forceVersionConflictByClearkingCKInfo;
- (void)forceiWorkConflictEtag:(id)arg1;
- (void)forceiWorkSharingInfoResend;
- (void)handleUnknownItemError;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDocument;
- (BOOL)isFault;
- (BOOL)isPackage;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4;
- (void)learnThumbnailSignatureFromLiveVersion:(id)arg1;
- (void)markDead;
- (void)markForceNeedsSyncUp;
- (void)markForceUpload;
- (void)markItemForgottenByServer;
- (BOOL)markLatestRequestAcknowledgedInZone:(id)arg1;
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;
- (void)markLiveFromStageWithPath:(id)arg1;
- (void)markNeedsReading;
- (void)markNeedsUploadOrSyncingUp;
- (void)markOverQuotaWithError:(id)arg1;
- (void)markUploadedWithRecord:(id)arg1;
- (void)removeLiveConflictLoserEtag:(id)arg1;
- (struct PQLResultSet *)reverseAliasEnumerator;
- (id)setOfAppLibraryIDsWithReverseAliases;
- (void)stageFaultForCreation:(BOOL)arg1 name:(id)arg2 size:(id)arg3 isPackage:(BOOL)arg4;
- (void)stageFaultForCreation:(BOOL)arg1 serverItem:(id)arg2;
- (BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)syncContextUsedForTransfers;
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1;
- (int)updateDesiredVersionWithServerItem:(id)arg1 diffs:(unsigned long long)arg2 options:(unsigned int)arg3 needsSave:(BOOL *)arg4;
- (int)updateDesiredVersionWithServerItem:(id)arg1 options:(unsigned int)arg2 needsSave:(BOOL *)arg3;
- (BOOL)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)updateVersionMetadataFromServerItem:(id)arg1 preventVersionDiffs:(BOOL)arg2;
- (BOOL)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;
- (BOOL)validateLoggingToFile:(struct __sFILE *)arg1;

@end

