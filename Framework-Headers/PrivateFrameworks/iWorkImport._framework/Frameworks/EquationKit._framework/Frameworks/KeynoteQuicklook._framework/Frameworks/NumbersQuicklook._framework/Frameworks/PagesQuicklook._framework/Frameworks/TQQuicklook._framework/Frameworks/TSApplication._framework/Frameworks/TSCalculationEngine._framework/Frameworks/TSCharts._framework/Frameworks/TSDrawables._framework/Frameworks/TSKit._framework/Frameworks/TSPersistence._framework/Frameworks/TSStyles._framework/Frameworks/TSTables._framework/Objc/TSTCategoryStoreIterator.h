//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSTCellIterating-Protocol.h>
#import <TSTables/TSTCellRegionIterating-Protocol.h>
#import <TSTables/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class NSIndexSet, NSString, TSTCategoryTranslator, TSTCell, TSTCellRegion, TSTColumnRowUIDMap, TSTGroupBy, TSTSummaryCellVendor, TSTTableDataStore, TSTTableInfo, TSTTableTile, TSTTableTileRowInfo;
@protocol TSTCellRegionIterating;

@interface TSTCategoryStoreIterator : NSObject <TSTMutableCellIteratorDataUpdating, TSTCellIterating, TSTCellRegionIterating>
{
    struct unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::__1::hash<TSUViewColumnIndex>, std::__1::equal_to<TSUViewColumnIndex>, std::__1::allocator<std::__1::pair<const TSUViewColumnIndex, TSUModelColumnIndex>>> _mapFromViewToBaseColumnInCurrentRow;
    TSTCell *_tempSummaryCell;
    BOOL _isSummaryRow;
    BOOL _isLabelRow;
    unsigned char _groupLevel;
    BOOL _rightToLeft;
    BOOL _terminated;
    unsigned short _categoryColumnIndex;
    unsigned int _curRowIndex;
    unsigned int _baseRowIndex;
    TSTTableInfo *_info;
    TSTGroupBy *_groupBy;
    TSTCategoryTranslator *_translator;
    TSTTableDataStore *_baseDataStore;
    TSTColumnRowUIDMap *_baseMap;
    TSTColumnRowUIDMap *_viewMap;
    TSTSummaryCellVendor *_summaryCellVendor;
    TSTColumnRowUIDMap *_summaryMap;
    TSTCellRegion *_region;
    NSObject<TSTCellRegionIterating> *_regionIterator;
    unsigned long long _searchMask;
    struct TSUCellCoord _curCellID;
    TSTTableTile *_baseTile;
    TSTTableTileRowInfo *_baseRow;
    TSTCell *_cell;
    NSIndexSet *_populatedColumnsForGroupLevel1;
    NSIndexSet *_populatedColumnsForGroupLevel2;
    NSIndexSet *_populatedColumnsForGroupLevel3;
    NSIndexSet *_populatedColumnsForGroupLevel4;
    NSIndexSet *_populatedColumnsForGroupLevel5;
    NSIndexSet *_viewColumnIndexesInCurrentRow;
    UUIDData_5fbc143e _uuid;
    struct _NSRange _baseTileRange;
}

@property (readonly, weak, nonatomic) TSTTableDataStore *baseDataStore; // @synthesize baseDataStore=_baseDataStore;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *baseMap; // @synthesize baseMap=_baseMap;
@property (strong, nonatomic) TSTTableTileRowInfo *baseRow; // @synthesize baseRow=_baseRow;
@property (nonatomic) unsigned int baseRowIndex; // @synthesize baseRowIndex=_baseRowIndex;
@property (strong, nonatomic) TSTTableTile *baseTile; // @synthesize baseTile=_baseTile;
@property (nonatomic) struct _NSRange baseTileRange; // @synthesize baseTileRange=_baseTileRange;
@property (readonly, nonatomic) unsigned short categoryColumnIndex; // @synthesize categoryColumnIndex=_categoryColumnIndex;
@property (readonly, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property (nonatomic) struct TSUCellCoord curCellID; // @synthesize curCellID=_curCellID;
@property (nonatomic) unsigned int curRowIndex; // @synthesize curRowIndex=_curRowIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TSTGroupBy *groupBy; // @synthesize groupBy=_groupBy;
@property (nonatomic) unsigned char groupLevel; // @synthesize groupLevel=_groupLevel;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSTTableInfo *info; // @synthesize info=_info;
@property (nonatomic) BOOL isLabelRow; // @synthesize isLabelRow=_isLabelRow;
@property (nonatomic) BOOL isSummaryRow; // @synthesize isSummaryRow=_isSummaryRow;
@property (strong, nonatomic) NSIndexSet *populatedColumnsForGroupLevel1; // @synthesize populatedColumnsForGroupLevel1=_populatedColumnsForGroupLevel1;
@property (strong, nonatomic) NSIndexSet *populatedColumnsForGroupLevel2; // @synthesize populatedColumnsForGroupLevel2=_populatedColumnsForGroupLevel2;
@property (strong, nonatomic) NSIndexSet *populatedColumnsForGroupLevel3; // @synthesize populatedColumnsForGroupLevel3=_populatedColumnsForGroupLevel3;
@property (strong, nonatomic) NSIndexSet *populatedColumnsForGroupLevel4; // @synthesize populatedColumnsForGroupLevel4=_populatedColumnsForGroupLevel4;
@property (strong, nonatomic) NSIndexSet *populatedColumnsForGroupLevel5; // @synthesize populatedColumnsForGroupLevel5=_populatedColumnsForGroupLevel5;
@property (readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // @synthesize regionIterator=_regionIterator;
@property (nonatomic) BOOL rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property (nonatomic) unsigned long long searchMask; // @synthesize searchMask=_searchMask;
@property (readonly, weak, nonatomic) TSTSummaryCellVendor *summaryCellVendor; // @synthesize summaryCellVendor=_summaryCellVendor;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *summaryMap; // @synthesize summaryMap=_summaryMap;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) BOOL terminated; // @synthesize terminated=_terminated;
@property (readonly, nonatomic) TSTCategoryTranslator *translator; // @synthesize translator=_translator;
@property (nonatomic) UUIDData_5fbc143e uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSIndexSet *viewColumnIndexesInCurrentRow; // @synthesize viewColumnIndexesInCurrentRow=_viewColumnIndexesInCurrentRow;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *viewMap; // @synthesize viewMap=_viewMap;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (void)dealloc;
- (struct TSUCellCoord)getNext;
- (BOOL)getNextCellData:(id *)arg1;
- (id)initWithInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;
- (void)iterateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (id)nextCellData;
- (BOOL)p_searchSummaryVendorCell:(id)arg1 searchFlags:(unsigned long long)arg2;
- (id)tempSummaryCell;
- (void)terminate;
- (void)updateCellData:(id)arg1;
- (void)updateFormulaForCellData:(id)arg1;

@end

