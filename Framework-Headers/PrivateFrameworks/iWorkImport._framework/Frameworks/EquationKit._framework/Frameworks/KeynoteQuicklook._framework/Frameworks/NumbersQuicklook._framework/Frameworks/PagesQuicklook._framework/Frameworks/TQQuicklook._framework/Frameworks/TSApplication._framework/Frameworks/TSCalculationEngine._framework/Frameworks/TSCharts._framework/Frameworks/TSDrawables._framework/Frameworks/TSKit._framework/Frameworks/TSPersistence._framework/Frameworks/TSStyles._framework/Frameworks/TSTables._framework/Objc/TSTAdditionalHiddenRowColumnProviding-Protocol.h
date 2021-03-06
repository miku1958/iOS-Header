//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/NSObject-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, TSTCellRegion;

@protocol TSTAdditionalHiddenRowColumnProviding <NSObject>
- (BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1 forAction:(unsigned char)arg2;
- (BOOL)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (BOOL)hasHiddenColumns;
- (BOOL)hasHiddenRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (BOOL)hasHiddenRows;
- (BOOL)hasUserHiddenColumns;
- (BOOL)hasUserHiddenRows;
- (BOOL)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (BOOL)hideRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned int)arg1;
- (NSMutableIndexSet *)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfFilteredRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInColumnRange:(NSIndexSet *)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInRowRange:(NSIndexSet *)arg1;
- (unsigned int)numberOfHiddenColumns;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenRows;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfUserHiddenColumns;
- (unsigned int)numberOfUserHiddenRows;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (BOOL)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (BOOL)showRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
@end

