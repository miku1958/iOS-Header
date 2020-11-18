//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, TSCEFormulaRewrite_Uids, TSUMutableUUIDSet, TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject
{
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _conditionalStyleOwnerUID;
    TSCEFormulaRewrite_Uids *_rowOrColumnUids;
    vector_4dc5f307 _rowOrColumnUuids;
    BOOL _isRows;
    NSArray *_rangeEntries;
    struct TSCERangeCoordinate _tableRange;
    TSCEFormulaRewriteInfo_RowColumnInfo *_auxRowColumnInfo;
    TSUMutableUUIDSet *_expandedRowColumnUuids;
    UUIDData_5fbc143e _insertAtUid;
}

@property (strong, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *auxRowColumnInfo; // @synthesize auxRowColumnInfo=_auxRowColumnInfo;
@property (readonly, nonatomic) const UUIDData_5fbc143e *conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property (readonly, strong, nonatomic) TSUUUIDSet *expandedRowColumnUuids; // @synthesize expandedRowColumnUuids=_expandedRowColumnUuids;
@property (nonatomic) UUIDData_5fbc143e insertAtUid; // @synthesize insertAtUid=_insertAtUid;
@property (readonly, nonatomic) BOOL isColumns;
@property (readonly, nonatomic) BOOL isRows; // @synthesize isRows=_isRows;
@property (readonly, strong, nonatomic) NSIndexSet *rowOrColumnIndices;
@property (readonly, strong, nonatomic) TSCEFormulaRewrite_Uids *rowOrColumnUids; // @synthesize rowOrColumnUids=_rowOrColumnUids;
@property (readonly, nonatomic) const vector_4dc5f307 *rowOrColumnUuids; // @synthesize rowOrColumnUuids=_rowOrColumnUuids;
@property (readonly, nonatomic) const UUIDData_5fbc143e *tableUID; // @synthesize tableUID=_tableUID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSCERangeCoordinate)affectedRangeForInsertRows;
- (struct TSCERangeCoordinate)affectedRangeForMoveRows;
- (struct TSCERangeCoordinate)affectedRangeForRemoveRows;
- (vector_60dd006f)coordRangesForInsertRemove;
- (void)createAuxRowColumnInfoForMove;
- (void)dealloc;
- (id)description;
- (unsigned short)indexForUuid:(const UUIDData_5fbc143e *)arg1;
- (BOOL)indexIsAffected:(unsigned short)arg1;
- (id)initFromMessage:(const struct ColumnOrRowUuidsInfoArchive *)arg1;
- (id)initWithFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1 uuids:(const vector_4dc5f307 *)arg2 areRows:(BOOL)arg3;
- (void)loadIndexesForTable:(id)arg1 forRemoveRows:(BOOL)arg2;
- (unsigned short)offsetForRowIndex:(unsigned short)arg1;
- (unsigned short)offsetForUpdatedRowIndex:(unsigned short)arg1 isRemoveRows:(BOOL)arg2;
- (struct TSUCellCoord)previousCellCoordinateForRewriteType:(int)arg1 forTableUID:(const UUIDData_5fbc143e *)arg2 updatedCellCoordinate:(struct TSUCellCoord)arg3;
- (void)saveToMessage:(struct ColumnOrRowUuidsInfoArchive *)arg1;
- (struct TSCERangeCoordinate)tableRange;
- (void)unloadIndexes;
- (struct TSUCellCoord)updatedCellCoordinateForRewriteType:(int)arg1 forTableUID:(const UUIDData_5fbc143e *)arg2 originalCellCoordinate:(struct TSUCellCoord)arg3;
- (UUIDData_5fbc143e)uuidForIndex:(unsigned short)arg1;
- (vector_4dc5f307)uuidsForRowsInRange:(struct _NSRange)arg1;

@end

