//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDocumentItem;

__attribute__((visibility("hidden")))
@interface BRCDirectoryItem : BRCLocalItem
{
}

@property (readonly, nonatomic) BRCAliasItem *asAlias; // @dynamic asAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;

- (BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(BOOL)arg3;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (BOOL)evictWithGroup:(id)arg1 error:(id *)arg2;
- (BOOL)hasDeadChildren;
- (BOOL)hasLiveChildren;
- (BOOL)hasLostChildren;
- (BOOL)isDirectory;
- (unsigned long long)markChildrenLost;
- (void)markLostDirectoryAsAlmostDead;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (void)startDownloadWithOptions:(unsigned long long)arg1 group:(id)arg2;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;

@end
