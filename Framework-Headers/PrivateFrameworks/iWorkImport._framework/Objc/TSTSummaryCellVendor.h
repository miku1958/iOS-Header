//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTSummaryCellVendor : TSPObject
{
    BOOL _hasCustomFormatsToPaste;
    TSTTableInfo *_tableInfo;
    unordered_map_7f472e10 _cellUIDMap;
}

@property (readonly, nonatomic) unordered_map_7f472e10 *cellUIDMap; // @synthesize cellUIDMap=_cellUIDMap;
@property (nonatomic) BOOL hasCustomFormatsToPaste; // @synthesize hasCustomFormatsToPaste=_hasCustomFormatsToPaste;
@property (readonly, weak, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (id)cellAtCellUID:(const struct TSTCellUID *)arg1;
- (id)cellMapForWildcardCells;
- (void)enumerateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (int)getCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;
- (id)initWithTableInfo:(id)arg1;
- (void)loadFromArchive:(const struct SummaryCellVendorArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)p_cellSpecForAggregateType:(unsigned char)arg1 forColumnUID:(UUIDData_5fbc143e)arg2 atGroupLevel:(unsigned char)arg3;
- (void)reassignPasteboardCustomFormatKeys;
- (void)removeCellsInColumnUid:(UUIDData_5fbc143e *)arg1;
- (void)runChange:(id)arg1 withSummaryCellMap:(id)arg2 migrationHelper:(id)arg3;
- (void)saveToArchive:(struct SummaryCellVendorArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(UUIDData_5fbc143e)arg2 atGroupLevel:(unsigned char)arg3;
- (void)setCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (void)setTableInfoForGSSP:(id)arg1;

@end

