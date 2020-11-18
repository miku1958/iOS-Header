//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalItem.h>

#import <CloudDocsDaemon/BRCTopLevelShareable-Protocol.h>

@class BRCAliasItem, BRCDocumentItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>
{
    long long _mtime;
}

@property (readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;
@property (readonly, nonatomic) long long mtime; // @synthesize mtime=_mtime;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData; // @dynamic unsaltedBookmarkData;

- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_markChildrenLostForDeadParent;
- (void)_markLostDirectoryAsAlmostDead;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asShareableItem;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (unsigned long long)childItemCount;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)hasDeadChildren;
- (BOOL)hasLiveChildren;
- (BOOL)hasLostChildren;
- (BOOL)hasPendingLostChildren;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)isDirectory;
- (BOOL)isDirectoryWithPackageName;
- (BOOL)markChildrenLost;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)transformIntoFSRoot;
- (BOOL)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(BOOL)arg2;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;

@end

