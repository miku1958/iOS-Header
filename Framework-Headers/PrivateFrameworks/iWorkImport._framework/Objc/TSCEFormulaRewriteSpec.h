//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCEFormulaRewriteInfo_RowColumnInfo, TSCEFormulaRewrite_MergeOriginMovedInfo, TSCEFormulaRewrite_RegionMergedInfo, TSCEFormulaRewrite_RegionMovedInfo, TSCERewriteTableIDInfo, TSCETableTransposedInfo;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteSpec : NSObject
{
    int _type;
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _conditionalStyleOwnerUID;
    BOOL _isInverse;
    TSCETableTransposedInfo *_transposedInfo;
    TSCEFormulaRewriteInfo_RowColumnInfo *_rowColumnInfo;
    TSCEFormulaRewrite_RegionMovedInfo *_regionMovedInfo;
    TSCEFormulaRewrite_RegionMergedInfo *_mergeInfo;
    TSCEFormulaRewrite_MergeOriginMovedInfo *_mergeOriginMovedInfo;
    TSCERewriteTableIDInfo *_tableIDInfo;
}

@property (readonly, nonatomic) UUIDData_5fbc143e conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property (nonatomic) UUIDData_5fbc143e insertAtUid;
@property (nonatomic) BOOL isInverse; // @synthesize isInverse=_isInverse;
@property (readonly, strong, nonatomic) TSCEFormulaRewrite_RegionMergedInfo *mergeInfo; // @synthesize mergeInfo=_mergeInfo;
@property (readonly, strong, nonatomic) TSCEFormulaRewrite_MergeOriginMovedInfo *mergeOriginMovedInfo; // @synthesize mergeOriginMovedInfo=_mergeOriginMovedInfo;
@property (readonly, strong, nonatomic) TSCEFormulaRewrite_RegionMovedInfo *regionMovedInfo; // @synthesize regionMovedInfo=_regionMovedInfo;
@property (readonly, nonatomic) int rewriteType; // @synthesize rewriteType=_type;
@property (readonly, strong, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *rowColumnInfo; // @synthesize rowColumnInfo=_rowColumnInfo;
@property (readonly, strong, nonatomic) TSCERewriteTableIDInfo *tableIDInfo; // @synthesize tableIDInfo=_tableIDInfo;
@property (readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
@property (readonly, strong, nonatomic) TSCETableTransposedInfo *transposedInfo; // @synthesize transposedInfo=_transposedInfo;

- (id).cxx_construct;
- (UUIDData_5fbc143e)affectedConditionalStyleOwnerUID;
- (UUIDData_5fbc143e)affectedOwnerUID;
- (unordered_set_c6a929bd)affectedOwnerUIDs;
- (struct TSCERangeCoordinate)affectedRange;
- (void)clearTableIndexes;
- (void)dealloc;
- (id)description;
- (void)didModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)didModifyTable:(id)arg1;
- (vector_4dc5f307)expandedRowColumnUuids;
- (id)initForInsertingRowsOrColumnsIntoTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(BOOL)arg3;
- (id)initForMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initForMergeOriginsMovedWithMap:(const unordered_map_ddbde191 *)arg1 reverseMap:(const unordered_map_ddbde191 *)arg2 inTableUID:(const UUIDData_5fbc143e *)arg3;
- (id)initForMovingRegionWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcColumnUids:(const vector_4dc5f307 *)arg2 srcRowUids:(const vector_4dc5f307 *)arg3 dstTableUID:(const UUIDData_5fbc143e *)arg4 dstColumnUids:(const vector_4dc5f307 *)arg5 dstRowUids:(const vector_4dc5f307 *)arg6;
- (id)initForMovingRowsOrColumnsInTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(BOOL)arg3;
- (id)initForRemoveRowsOrColumnsFromTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(BOOL)arg3;
- (id)initForSortWithTableUID:(const UUIDData_5fbc143e *)arg1 rowUids:(const vector_4dc5f307 *)arg2;
- (id)initForTableIDReassignment:(const UUIDMap_b66c2694 *)arg1;
- (id)initForUndoMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initFromMessage:(const struct FormulaRewriteSpecArchive *)arg1;
- (id)initWithOwnerDeletion:(const UUIDData_5fbc143e *)arg1;
- (id)initWithOwnerInsertion:(const UUIDData_5fbc143e *)arg1;
- (id)initWithTransposeTable:(const UUIDData_5fbc143e *)arg1 transposedBodyRange:(struct TSCERangeCoordinate)arg2 numberOfFooterRows:(unsigned short)arg3;
- (id)miniDescription;
- (struct TSUCellCoord)previousCellCoordinateForTableUID:(const UUIDData_5fbc143e *)arg1 updatedCellCoordinate:(struct TSUCellCoord)arg2;
- (UUIDData_5fbc143e)previousTableUIDForUpdatedTableUID:(const UUIDData_5fbc143e *)arg1 updatedCellCoordinate:(struct TSUCellCoord)arg2;
- (void)saveToMessage:(struct FormulaRewriteSpecArchive *)arg1 archiver:(id)arg2;
- (struct TSUCellCoord)updatedCellCoordinateForTableUID:(const UUIDData_5fbc143e *)arg1 originalCellCoordinate:(struct TSUCellCoord)arg2;
- (UUIDData_5fbc143e)updatedTableUIDForOriginalTableUID:(const UUIDData_5fbc143e *)arg1 originalCellCoordinate:(struct TSUCellCoord)arg2;
- (void)willModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)willModifyTable:(id)arg1;

@end

