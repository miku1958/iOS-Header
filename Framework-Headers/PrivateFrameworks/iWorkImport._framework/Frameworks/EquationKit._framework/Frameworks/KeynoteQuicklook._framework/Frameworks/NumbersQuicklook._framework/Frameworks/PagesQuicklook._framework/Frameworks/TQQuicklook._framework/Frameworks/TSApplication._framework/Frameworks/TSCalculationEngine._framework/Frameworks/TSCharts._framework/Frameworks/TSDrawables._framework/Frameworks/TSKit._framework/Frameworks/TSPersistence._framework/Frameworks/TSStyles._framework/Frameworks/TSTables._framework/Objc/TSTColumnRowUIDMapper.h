//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSCEColumnRowUIDMapping-Protocol.h>

@class TSTColumnRowUIDMap, TSTImmutableColumnRowUIDMap;

@interface TSTColumnRowUIDMapper : NSObject <TSCEColumnRowUIDMapping>
{
    TSTColumnRowUIDMap *_originalUIDMap;
    unsigned long long _originalVersionCounter;
    TSTImmutableColumnRowUIDMap *_copiedUIDMap;
    unsigned long long _versionCounter;
}

@property (readonly, nonatomic) unsigned short numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned long long versionCounter; // @synthesize versionCounter=_versionCounter;

- (void).cxx_destruct;
- (id)UIDSetForIndexes:(id)arg1 isRows:(BOOL)arg2;
- (void)assertCollaborationConvergence;
- (struct TSUCellRect)cellRangeForUIDRange:(const UUIDRect_d701734b *)arg1;
- (UUIDRect_d701734b)cellUIDRangeForCellRange:(struct TSUCellRect)arg1;
- (unsigned short)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (id)columnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (struct _NSRange)columnRangeForUIDs:(const vector_4dc5f307 *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned short)arg1;
- (vector_4dc5f307)columnUIDs;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(id)arg1;
- (vector_4dc5f307)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (void)disconnect;
- (id)initWithColumnRowUIDMap:(id)arg1;
- (BOOL)isConnected;
- (id)mutableColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(BOOL)arg2;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(BOOL)arg2 notFoundUIDs:(id)arg3;
- (id)mutableRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)prunedColumnUIDsFromColumnUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)prunedRowUIDsFromRowUIDs:(const vector_4dc5f307 *)arg1;
- (struct TSUCellRect)range;
- (unsigned int)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (id)rowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (struct _NSRange)rowRangeForUIDs:(const vector_4dc5f307 *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned int)arg1;
- (vector_4dc5f307)rowUIDs;
- (vector_4dc5f307)rowUIDsForRowIndexes:(id)arg1;
- (vector_4dc5f307)rowUIDsForRowRange:(struct _NSRange)arg1;
- (struct TSCERangeCoordinate)tableRangeCoordinate;

@end

