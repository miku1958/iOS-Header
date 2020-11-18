//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellIterating-Protocol.h>
#import <iWorkImport/TSTCellRegionIterating-Protocol.h>
#import <iWorkImport/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class NSString, TSTCell, TSTCellRegion, TSTTableDataStore, TSTTableInfo, TSTTableModel, TSTTableTile, TSTTableTileRowInfo;
@protocol TSTCellRegionIterating;

__attribute__((visibility("hidden")))
@interface TSTDataStoreIterator : NSObject <TSTCellIterating, TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>
{
    BOOL _rightToLeft;
    BOOL _terminated;
    unsigned int _curRowIndex;
    TSTTableModel *_tableModel;
    TSTTableDataStore *_dataStore;
    TSTCellRegion *_region;
    struct NSObject *_regionIterator;
    unsigned long long _searchMask;
    struct TSUCellCoord _curCellID;
    TSTTableTile *_curTile;
    TSTTableTileRowInfo *_curRow;
    TSTCell *_cell;
    struct _NSRange _curTileRange;
}

@property (readonly, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property (nonatomic) struct TSUCellCoord curCellID; // @synthesize curCellID=_curCellID;
@property (strong, nonatomic) TSTTableTileRowInfo *curRow; // @synthesize curRow=_curRow;
@property (nonatomic) unsigned int curRowIndex; // @synthesize curRowIndex=_curRowIndex;
@property (strong, nonatomic) TSTTableTile *curTile; // @synthesize curTile=_curTile;
@property (nonatomic) struct _NSRange curTileRange; // @synthesize curTileRange=_curTileRange;
@property (readonly, nonatomic) TSTTableDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // @synthesize regionIterator=_regionIterator;
@property (nonatomic) BOOL rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property (nonatomic) unsigned long long searchMask; // @synthesize searchMask=_searchMask;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property (nonatomic) BOOL terminated; // @synthesize terminated=_terminated;

- (void).cxx_destruct;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (void)dealloc;
- (struct TSUCellCoord)getNext;
- (BOOL)getNextCellData:(id *)arg1;
- (id)initWithInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;
- (id)initWithModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;
- (void)iterateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (id)nextCellData;
- (void)p_setupTileAndRowAtCellID:(struct TSUCellCoord)arg1;
- (void)terminate;
- (void)updateCellData:(id)arg1;

@end

