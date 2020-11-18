//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTCellRegion, TSTMergeListWrapper;

@protocol TSTTableMergeRangeProviding <NSObject>
- (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
- (TSTCellRegion *)expandCellRegionToCoverMergedCells:(TSTCellRegion *)arg1;
- (BOOL)hasRangeSpanningRowsForCellRange:(struct TSUCellRect)arg1;
- (TSTMergeListWrapper *)mergesIntersectingCellRegion:(TSTCellRegion *)arg1;
- (TSTMergeListWrapper *)mergesIntersectingRange:(struct TSUCellRect)arg1;
@end

