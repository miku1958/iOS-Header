//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCalculationEngine/NSObject-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, TSCECalculationEngine, TSUMutableUUIDSet;

@protocol TSCEReferenceResolving <NSObject>
- (UUIDData_5fbc143e)UIDForIndex:(unsigned int)arg1 isRows:(BOOL)arg2;
- (TSUMutableUUIDSet *)UIDSetForIndexes:(NSIndexSet *)arg1 isRows:(BOOL)arg2;
- (vector_4dc5f307)UIDsForIndexes:(NSIndexSet *)arg1 isRows:(BOOL)arg2;
- (vector_4dc5f307)UIDsForRange:(struct _NSRange)arg1 isRows:(BOOL)arg2;
- (TSCECalculationEngine *)calcEngine;
- (unsigned short)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned short)arg1;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(NSIndexSet *)arg1;
- (vector_4dc5f307)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (UUIDData_5fbc143e)conditionalStyleFormulaOwnerUID;
- (id)drawableInfo;
- (UUIDData_5fbc143e)groupByUID;
- (NSMutableIndexSet *)mutableColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (NSMutableIndexSet *)mutableIndexesForUIDs:(const vector_4dc5f307 *)arg1 isRows:(BOOL)arg2;
- (NSMutableIndexSet *)mutableRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (UUIDData_5fbc143e)resolverUID;
- (unsigned int)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned int)arg1;
- (vector_4dc5f307)rowUIDsForRowIndexes:(NSIndexSet *)arg1;
- (vector_4dc5f307)rowUIDsForRowRange:(struct _NSRange)arg1;
- (NSString *)sheetName;
- (id)tableInfo;
- (NSString *)tableName;
- (struct TSCERangeCoordinate)tableRangeCoordinate;
@end

