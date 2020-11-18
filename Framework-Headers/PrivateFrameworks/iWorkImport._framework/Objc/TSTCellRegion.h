//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface TSTCellRegion : NSObject <NSCopying>
{
    vector_e87daf7b _cellRanges;
    struct TSUCellCoord _firstCellID;
    struct TSUCellCoord _lastCellID;
    struct TSUCellRect _boundingCellRange;
    unsigned long long _cellCount;
    NSIndexSet *_intersectingColumnsIndexSet;
    NSIndexSet *_intersectingRowsIndexSet;
}

@property (readonly, nonatomic) struct TSUCellCoord boundingBottomRightCellID;
@property (nonatomic) struct TSUCellRect boundingCellRange; // @synthesize boundingCellRange=_boundingCellRange;
@property (readonly, nonatomic) struct TSUCellCoord boundingTopLeftCellID;
@property (nonatomic) unsigned long long cellCount; // @synthesize cellCount=_cellCount;
@property (readonly, nonatomic) const vector_e87daf7b *cellRanges; // @synthesize cellRanges=_cellRanges;
@property (nonatomic) struct TSUCellCoord firstCellID; // @synthesize firstCellID=_firstCellID;
@property (strong, nonatomic) NSIndexSet *intersectingColumnsIndexSet; // @synthesize intersectingColumnsIndexSet=_intersectingColumnsIndexSet;
@property (strong, nonatomic) NSIndexSet *intersectingRowsIndexSet; // @synthesize intersectingRowsIndexSet=_intersectingRowsIndexSet;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isRectangle;
@property (nonatomic) struct TSUCellCoord lastCellID; // @synthesize lastCellID=_lastCellID;
@property (readonly, nonatomic) unsigned short numberOfIntersectingColumns;
@property (readonly, nonatomic) unsigned short numberOfIntersectingRows;

+ (id)invalidRegion;
+ (id)region:(id)arg1 addingRange:(struct TSUCellRect)arg2;
+ (id)region:(id)arg1 addingRegion:(id)arg2;
+ (id)region:(id)arg1 intersectingRange:(struct TSUCellRect)arg2;
+ (id)region:(id)arg1 intersectingRegion:(id)arg2;
+ (id)region:(id)arg1 subtractingRange:(struct TSUCellRect)arg2;
+ (id)region:(id)arg1 subtractingRegion:(id)arg2;
+ (id)regionFillingColumnsFromRegion:(id)arg1;
+ (id)regionFillingRowsFromRegion:(id)arg1;
+ (id)regionFromCellDiffMap:(id)arg1 withTableInfo:(id)arg2;
+ (id)regionFromCellIDVector:(const vector_38b190b0 *)arg1;
+ (id)regionFromCellMap:(id)arg1 withTableInfo:(id)arg2;
+ (id)regionFromCellMap:(id)arg1 withTableInfo:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
+ (id)regionFromCellRangeVector:(const vector_e87daf7b *)arg1;
+ (id)regionFromColumnIndexes:(id)arg1 rowIndexes:(id)arg2;
+ (id)regionFromColumnIndices:(id)arg1;
+ (id)regionFromColumnIndices:(id)arg1 rowRange:(struct _NSRange)arg2;
+ (id)regionFromMergeActionArray:(id)arg1 withTableInfo:(id)arg2;
+ (id)regionFromMergeList:(const vector_e87daf7b *)arg1;
+ (id)regionFromMergeMap:(id)arg1;
+ (id)regionFromPropertyListRepresentation:(id)arg1;
+ (id)regionFromRange:(struct TSUCellRect)arg1;
+ (id)regionFromRowIndices:(id)arg1;
+ (id)regionFromRowIndices:(id)arg1 columnRange:(struct _NSRange)arg2;
+ (id)unionEveryRangeInRegion:(id)arg1 withRange:(struct TSUCellRect)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)containsCellID:(struct TSUCellCoord)arg1;
- (BOOL)containsCellRange:(struct TSUCellRect)arg1;
- (BOOL)containsCellRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateCellIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCellRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnRangesInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGridColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGridRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInDirection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMissingColumnsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMissingRowsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowRangesInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowsInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)equalsCellRange:(struct TSUCellRect)arg1;
- (BOOL)equalsCellRegion:(id)arg1;
- (void)fillCellRangeRowMajorSet:(set_5fd94db8 *)arg1 leftToRight:(BOOL)arg2;
- (id)init;
- (id)initFromMessage:(const struct CellRegion *)arg1;
- (id)intersectingColumnsInRow:(unsigned short)arg1;
- (BOOL)intersectsCellRange:(struct TSUCellRect)arg1;
- (BOOL)intersectsColumn:(unsigned char)arg1;
- (BOOL)intersectsRow:(unsigned short)arg1;
- (BOOL)isValid;
- (struct TSUCellRect)largestRangeContainingCellID:(struct TSUCellCoord)arg1;
- (struct NSObject *)newIterator;
- (struct NSObject *)newRightToLeftIterator;
- (void)p_calculateAncillaryInformation;
- (void)p_calculateIntersectingColumns;
- (void)p_calculateIntersectingRows;
- (void)p_calculateUpperLeftAndBottomRightCellIDAndBoundingCellRange;
- (id)p_copy;
- (void)p_insertRangeIntoRegion:(struct TSUCellRect)arg1;
- (BOOL)partiallyIntersectsCellRange:(struct TSUCellRect)arg1;
- (id)propertyListRepresentation;
- (id)regionAfterColumnIndex:(unsigned char)arg1;
- (id)regionAfterColumnIndexRtoL:(unsigned char)arg1;
- (id)regionAfterRowIndex:(unsigned short)arg1;
- (id)regionByAddingColumns:(id)arg1;
- (id)regionByAddingRange:(struct TSUCellRect)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByAddingRows:(id)arg1;
- (id)regionByApplyingRowMapping:(id)arg1;
- (id)regionByIntersectingColumnIndices:(id)arg1;
- (id)regionByIntersectingRange:(struct TSUCellRect)arg1;
- (id)regionByIntersectingRegion:(id)arg1;
- (id)regionByIntersectingRowIndices:(id)arg1;
- (id)regionByMovingColumnsFromRange:(struct _NSRange)arg1 toIndex:(unsigned char)arg2;
- (id)regionByMovingRowsFromRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (id)regionByRemovingColumns:(id)arg1;
- (id)regionByRemovingRows:(id)arg1;
- (id)regionBySubtractingRange:(struct TSUCellRect)arg1;
- (id)regionBySubtractingRegion:(id)arg1;
- (id)regionByTrimmingAroundColumnIndices:(id)arg1;
- (id)regionByTrimmingAroundRowIndices:(id)arg1;
- (id)regionByUnioningEveryRangeInRegionWithRange:(struct TSUCellRect)arg1;
- (id)regionOffsetBy:(CDStruct_945081a1)arg1;
- (id)regionUpToColumnIndex:(unsigned char)arg1;
- (id)regionUpToColumnIndexRtoL:(unsigned char)arg1 maxColumnIndex:(unsigned char)arg2;
- (id)regionUpToRowIndex:(unsigned short)arg1;
- (void)saveToMessage:(struct CellRegion *)arg1;
- (struct TSUCellCoord)suitableAnchor;
- (struct TSUCellCoord)suitableCursor;

@end

