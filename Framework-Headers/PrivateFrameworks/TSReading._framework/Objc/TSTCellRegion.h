//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying>
{
    unsigned long long mCellRangesCount;
    CDStruct_5f1f7aa9 *mCellRanges;
    CDStruct_5f1f7aa9 mBoundingCellRange;
    unsigned long long mCellCount;
    NSIndexSet *mIntersectingColumnsIndexSet;
    NSIndexSet *mIntersectingRowsIndexSet;
    CDStruct_0441cfb5 mUpperLeftCellID;
    CDStruct_0441cfb5 mBottomRightCellID;
}

@property (readonly, nonatomic) CDStruct_0441cfb5 bottomRightCellID;
@property (readonly, nonatomic) CDStruct_5f1f7aa9 boundingCellRange;
@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isRectangle;
@property (readonly, nonatomic) unsigned short numberOfIntersectingColumns;
@property (readonly, nonatomic) unsigned short numberOfIntersectingRows;
@property (readonly, nonatomic) CDStruct_0441cfb5 upperLeftCellID;

+ (id)invalidRegion;
+ (id)region:(id)arg1 addingRange:(CDStruct_5f1f7aa9)arg2;
+ (id)region:(id)arg1 addingRegion:(id)arg2;
+ (id)region:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;
+ (id)region:(id)arg1 subtractingRange:(CDStruct_5f1f7aa9)arg2;
+ (id)region:(id)arg1 subtractingRegion:(id)arg2;
+ (id)regionFillingColumnsFromRegion:(id)arg1;
+ (id)regionFillingRowsFromRegion:(id)arg1;
+ (id)regionFromCellMap:(id)arg1;
+ (id)regionFromColumnIndices:(id)arg1;
+ (id)regionFromRange:(CDStruct_5f1f7aa9)arg1;
+ (id)regionFromRowIndices:(id)arg1;
+ (id)unionEveryRangeInRegion:(id)arg1 withRange:(CDStruct_5f1f7aa9)arg2;
- (BOOL)containsCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)containsCellRange:(CDStruct_5f1f7aa9)arg1;
- (BOOL)containsCellRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateCellIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCellRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInDirection:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)equalsCellRange:(CDStruct_5f1f7aa9)arg1;
- (BOOL)equalsCellRegion:(id)arg1;
- (void)fillCellRangeColMajorSet:(set_3ba0425c *)arg1 leftToRight:(BOOL)arg2;
- (void)fillCellRangeRowMajorSet:(set_1f50691b *)arg1 leftToRight:(BOOL)arg2;
- (id)init;
- (id)intersectingColumnsIndexSet;
- (id)intersectingRowsIndexSet;
- (BOOL)intersectsCellRange:(CDStruct_5f1f7aa9)arg1;
- (BOOL)intersectsColumn:(unsigned char)arg1;
- (BOOL)intersectsRow:(unsigned short)arg1;
- (BOOL)isValid;
- (struct NSObject *)iterator;
- (void)p_calculateAncillaryInformation;
- (void)p_calculateIntersectingColumns;
- (void)p_calculateIntersectingRows;
- (void)p_calculateUpperLeftAndBottomRightCellID;
- (void)p_insertRangeIntoRegion:(CDStruct_5f1f7aa9)arg1;
- (BOOL)partiallyIntersectsCellRange:(CDStruct_5f1f7aa9)arg1;
- (id)regionByAddingColumns:(id)arg1;
- (id)regionByAddingRange:(CDStruct_5f1f7aa9)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByAddingRows:(id)arg1;
- (id)regionByApplyingRowMapping:(id)arg1;
- (id)regionByIntersectingColumnIndices:(id)arg1;
- (id)regionByIntersectingRange:(CDStruct_5f1f7aa9)arg1;
- (id)regionByIntersectingRowIndices:(id)arg1;
- (id)regionByRemovingColumns:(id)arg1;
- (id)regionByRemovingRows:(id)arg1;
- (id)regionBySubtractingRange:(CDStruct_5f1f7aa9)arg1;
- (id)regionBySubtractingRegion:(id)arg1;
- (id)regionByUnioningEveryRangeInRegionWithRange:(CDStruct_5f1f7aa9)arg1;
- (id)regionOffsetBy:(CDStruct_79c71658)arg1;
- (struct NSObject *)rightToLeftIterator;
- (CDStruct_0441cfb5)suitableAnchor;
- (CDStruct_0441cfb5)suitableCursor;
- (struct NSObject *)topToBottomIterator;

@end

