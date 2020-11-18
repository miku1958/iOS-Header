//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCECellTractRef;

__attribute__((visibility("hidden")))
@interface TSCERelativeTractRef : NSObject <NSCopying>
{
    TSCECellTractRef *_absTractRef;
    struct TSUIndexSet _relativeColumns;
    struct TSUIndexSet _relativeRows;
}

@property (readonly, nonatomic) struct TSUPreserveFlags preserveFlags;
@property (nonatomic) BOOL preserveRectangular;
@property (nonatomic) BOOL spansAllColumns;
@property (nonatomic) BOOL spansAllRows;
@property (nonatomic) UUIDData_5fbc143e tableUID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)absoluteCellTractRefForHostCell:(const struct TSUCellCoord *)arg1;
- (id)absoluteCellTractRefForHostCell:(const struct TSUCellCoord *)arg1 offTable:(BOOL *)arg2;
- (void)addColumn:(unsigned short)arg1;
- (void)addColumnRange:(const struct TSUIndexRange *)arg1;
- (void)addRelativeColumn:(short)arg1;
- (void)addRelativeColumnRange:(const struct TSUIndexRange *)arg1;
- (void)addRelativeRow:(int)arg1;
- (void)addRelativeRowRange:(const struct TSUIndexRange *)arg1;
- (void)addRow:(unsigned int)arg1;
- (void)addRowRange:(const struct TSUIndexRange *)arg1;
- (void)adjustRelativeIndexesBy:(const struct TSUColumnRowOffset *)arg1;
- (const struct TSUIndexSet *)columns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (BOOL)hasTableUID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAbsoluteTractRef:(id)arg1 hostCell:(const struct TSUCellCoord *)arg2;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1 preserveFlags:(const struct TSUPreserveFlags *)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRectangularRange;
- (BOOL)isSingleCellOrSpanningRange;
- (unsigned int)numColumns;
- (unsigned int)numRelativeColumns;
- (unsigned int)numRelativeRows;
- (unsigned int)numRows;
- (void)preserveFlagsFixingInversionsForTract:(id)arg1 absFromRelColumns:(const struct TSUIndexSet *)arg2 absFromRelRows:(const struct TSUIndexSet *)arg3;
- (struct TSCERelativeCellCoordinate)relativeBottomRight;
- (CDStruct_d36d9755)relativeBoundingRangeWithContainingCell:(const struct TSUCellCoord *)arg1;
- (const struct TSUIndexSet *)relativeColumns;
- (const struct TSUIndexSet *)relativeRows;
- (struct TSCERelativeCellCoordinate)relativeTopLeft;
- (void)removeColumnRange:(const struct TSUIndexRange *)arg1;
- (void)removeRelativeColumnRange:(const struct TSUIndexRange *)arg1;
- (void)removeRelativeRowRange:(const struct TSUIndexRange *)arg1;
- (void)removeRowRange:(const struct TSUIndexRange *)arg1;
- (const struct TSUIndexSet *)rows;
- (void)setColumns:(const struct TSUIndexSet *)arg1;
- (void)setRelativeColumns:(const struct TSUIndexSet *)arg1;
- (void)setRelativeRows:(const struct TSUIndexSet *)arg1;
- (void)setRows:(const struct TSUIndexSet *)arg1;
- (void)verifySpanningSettings;

@end

