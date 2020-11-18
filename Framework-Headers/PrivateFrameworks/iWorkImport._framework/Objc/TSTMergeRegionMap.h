//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSTMergeRegionMap : TSPObject
{
    unordered_map_ddbde191 mCellIDToMergeOrigin;
    unordered_map_89444acf mMergeOriginToSize;
    struct TSUCellRect mUnionedMergeRange;
}

+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUCellRect)arg2;
+ (id)mergeRegionMapWithContext:(id)arg1 andCellRanges:(const vector_e87daf7b *)arg2;
+ (id)mergeRegionMapWithContext:(id)arg1 andCellRangesSet:(const unordered_set_ea210bc4 *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const unordered_map_ddbde191 *)cellIDToMergeOrigin;
- (unsigned long long)count;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)find:(struct TSUCellRect)arg1;
- (BOOL)hasRangeSpanningRows;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUCellRect)arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;
- (id)initWithContext:(id)arg1;
- (BOOL)insert:(struct TSUCellRect)arg1;
- (id)iterator;
- (void)loadFromUnarchiver:(id)arg1;
- (const unordered_map_89444acf *)mergeOriginToSize;
- (struct TSUCellRect)mergedRangeForCellID:(struct TSUCellCoord)arg1;
- (BOOL)remove:(struct TSUCellRect)arg1;
- (void)saveToArchiver:(id)arg1;

@end

