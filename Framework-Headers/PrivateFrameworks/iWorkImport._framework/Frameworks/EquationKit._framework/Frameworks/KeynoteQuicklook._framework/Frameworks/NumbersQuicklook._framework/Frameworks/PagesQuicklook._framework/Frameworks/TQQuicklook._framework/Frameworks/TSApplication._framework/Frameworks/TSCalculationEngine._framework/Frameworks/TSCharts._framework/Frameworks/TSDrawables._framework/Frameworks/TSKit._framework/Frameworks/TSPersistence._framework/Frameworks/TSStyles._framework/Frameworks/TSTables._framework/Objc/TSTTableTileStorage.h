//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPContainedObject.h>

#import <TSTables/TSTCompatibilityVersionProviding-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, TSTTableTileGroup;

@interface TSTTableTileStorage : TSPContainedObject <TSTCompatibilityVersionProviding>
{
    NSMutableIndexSet *_tileIDSet;
    TSTTableTileGroup *_tileGroups[16];
    unsigned long long _archivingCompatibilityVersion;
    BOOL _upgradeRepairedTiles;
    BOOL _shouldUseWideRows;
}

@property (readonly, nonatomic) unsigned long long archivingCompatibilityVersion; // @synthesize archivingCompatibilityVersion=_archivingCompatibilityVersion;
@property (readonly, nonatomic) BOOL isEmbiggened; // @dynamic isEmbiggened;
@property (readonly, nonatomic) unsigned int lastPopulatedRowIndex;
@property (readonly, nonatomic) BOOL needToUpgradeCellStorage;
@property (readonly, nonatomic) unsigned long long nextTileID;
@property (readonly, nonatomic) NSIndexSet *populatedRows;
@property (readonly, nonatomic) NSIndexSet *populatedTiles;
@property (nonatomic) BOOL shouldUseWideRows; // @synthesize shouldUseWideRows=_shouldUseWideRows;
@property (readonly, nonatomic) BOOL upgradeRepairedTiles; // @synthesize upgradeRepairedTiles=_upgradeRepairedTiles;

+ (id)_sharedQueue;
+ (unsigned int)tileSize;
- (void).cxx_destruct;
- (void)_clearContentAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (id)_createTileWithID:(unsigned long long)arg1;
- (void)_enumerateGroups:(CDUnknownBlockType)arg1;
- (void)_enumerateLoadedTiles:(CDUnknownBlockType)arg1;
- (void)_enumerateTiles:(CDUnknownBlockType)arg1;
- (id)_groupForTileID:(unsigned long long)arg1;
- (void)_insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_removeTileForID:(unsigned long long)arg1;
- (void)_setTile:(id)arg1 forID:(unsigned long long)arg2;
- (void)_shiftRowsDownAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_shiftRowsUpAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_spliceRows:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_tileForID:(unsigned long long)arg1 createIfMissing:(BOOL)arg2;
- (void)_upgradeFromTileIDMap:(vector_ceceab0b *)arg1 referenceMap:(unordered_map_52392278 *)arg2;
- (id)_yankRowRange:(struct _NSRange)arg1;
- (BOOL)auditRowInfoCellCountsReturningResult:(id *)arg1;
- (BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 withDataStore:(id)arg2 result:(id *)arg3;
- (id)columnCellCountsOfRowsInRange:(struct _NSRange)arg1;
- (void)enumerateRowByRowInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTilesConcurrentlyUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithOwner:(id)arg1;
- (id)initWithStorageArchive:(const struct TileStorage *)arg1 treeArchive:(const struct TableRBTree *)arg2 nextTileID:(unsigned long long)arg3 unarchiver:(id)arg4 owner:(id)arg5;
- (void)insertColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (multimap_0345fd13)makeStorageMap;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (void)prepareToApplyConcurrentCellMap:(id)arg1;
- (void)pruneTileForRowIndex:(unsigned int)arg1;
- (void)pruneTilesForRows:(id)arg1;
- (void)removeColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)reset;
- (id)rowInfoAtIndex:(unsigned int)arg1;
- (void)saveToStorageArchive:(struct TileStorage *)arg1 treeArchive:(struct TableRBTree *)arg2 archiver:(id)arg3;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (id)tileForWritingAtRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)tileStartingAtOrAfterRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)tileStartingAtOrBeforeRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (void)widenTilesForUpgrade;

@end

